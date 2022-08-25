/*
 * Copyright 2020-2022 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
// Compute node topology support: hwloc-based implementation
//
#include "chplrt.h"

#include "chpl-align.h"
#include "chpl-env.h"
#include "chpl-env-gen.h"
#include "chplcgfns.h"
#include "chplsys.h"
#include "chpl-topo.h"
#include "chpltypes.h"
#include "error.h"

#include <errno.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "hwloc.h"

#ifdef DEBUG
// note: format arg 'f' must be a string constant
#define _DBG_P(f, ...)                                                  \
        do {                                                            \
          printf("%s:%d: " f "\n", __FILE__, __LINE__, ## __VA_ARGS__); \
        } while (0)
#else
#define _DBG_P(f, ...)
#endif

static chpl_bool haveTopology = false;

static hwloc_topology_t topology;

static const struct hwloc_topology_support* topoSupport;
static chpl_bool do_set_area_membind;

static int topoDepth;

static int numaLevel;
static int numNumaDomains;

// root object for this locale
static hwloc_obj_t root = NULL;
static hwloc_obj_t root2 = NULL;


static hwloc_obj_t getNumaObj(c_sublocid_t);
static hwloc_obj_t getNumaObj2(c_sublocid_t);
static void alignAddrSize(void*, size_t, chpl_bool,
                          size_t*, unsigned char**, size_t*);
static void chpl_topo_setMemLocalityByPages(unsigned char*, size_t,
                                            hwloc_obj_t);

static void dumpObj(int indent, hwloc_obj_t obj) {
    char buf[128];
    char buf2[128];
    if (1 || ((obj->type == HWLOC_OBJ_OS_DEVICE) && (obj->attr->osdev.type == HWLOC_OBJ_OSDEV_OPENFABRICS)) ||
        (obj->type == HWLOC_OBJ_PACKAGE)) {
        for (int i = 0; i < indent; i++) {
            fputc('.', stderr);
        }
        hwloc_obj_type_snprintf(buf, sizeof(buf), obj, 1);
        hwloc_obj_attr_snprintf(buf2, sizeof(buf2), obj, ",", 1);
        fprintf(stderr, "XXX PID %d %p name \"%s\" type %s index %d children %d %s\n", getpid(), obj, obj->name, buf, obj->logical_index, obj->arity, buf2);
    }
#ifdef NOTDEF
    for (int i = 0; i < obj->arity; i++) {
      dumpObj(indent+2, obj->children[i]);
    }
#endif
}

//
// Error reporting.
//
// CHK_ERR*() must evaluate 'expr' precisely once!
//
static void chk_err_fn(const char*, int, const char*);
static void chk_err_errno_fn(const char*, int, const char*);

#define CHK_ERR(expr) \
  do { if (!(expr)) chk_err_fn(__FILE__, __LINE__, #expr); } while (0)

#define CHK_ERR_ERRNO(expr) \
  do { if (!(expr)) chk_err_errno_fn(__FILE__, __LINE__, #expr); } while (0)

#define REPORT_ERR_ERRNO(expr) \
  chk_err_errno_fn(__FILE__, __LINE__, #expr)


void chpl_topo_init(void) {
  //
  // We only load hwloc topology information in configurations where
  // the locale model is other than "flat" or the tasking is based on
  // Qthreads (which will use the topology we load).  We don't use
  // it otherwise (so far) because loading it is somewhat expensive.
  //
  if (strcmp(CHPL_LOCALE_MODEL, "flat") != 0
      || strcmp(CHPL_TASKS, "qthreads") == 0) {
    haveTopology = true;
  } else {
    haveTopology = false;
    return;
  }

  // Check hwloc API version.
  // Require at least hwloc version 1.11 (we need 1.11.5 to not crash
  // in some NUMA configurations).
  // Check both at build time and run time.
#define REQUIRE_HWLOC_VERSION 0x00010b00

#if HWLOC_API_VERSION < REQUIRE_HWLOC_VERSION
#error hwloc version 1.11.5 or newer is required
#endif

  CHK_ERR(hwloc_get_api_version() >= REQUIRE_HWLOC_VERSION);

  //
  // Allocate and initialize topology object.
  //
  CHK_ERR_ERRNO(hwloc_topology_init(&topology) == 0);

  // Make sure we get everything including I/O devices.
  int flags = HWLOC_TOPOLOGY_FLAG_WHOLE_SYSTEM | HWLOC_TOPOLOGY_FLAG_WHOLE_IO |
    HWLOC_TOPOLOGY_FLAG_IO_BRIDGES | HWLOC_TOPOLOGY_FLAG_IO_DEVICES;
  CHK_ERR_ERRNO(hwloc_topology_set_flags(topology, flags) == 0);

  //
  // Perform the topology detection.
  //
  CHK_ERR_ERRNO(hwloc_topology_load(topology) == 0);

  //
  // What is supported?
  //
  topoSupport = hwloc_topology_get_support(topology);

  //
  // TODO: update comment
  // For now, don't support setting memory locality when comm=ugni or
  // comm=gasnet, seg!=everything.  Those are the two configurations in
  // which we use hugepages and/or memory registered with the comm
  // interface, both of which may be a problem for the set-membind call.
  // We will have other ways to achieve locality for these configs in
  // the future.
  //
  do_set_area_membind = true;
  if ((strcmp(CHPL_COMM, "gasnet") == 0
       && strcmp(CHPL_GASNET_SEGMENT, "everything") != 0)) {
      do_set_area_membind = false;
  }

  //
  // We need depth information.
  //
  topoDepth = hwloc_topology_get_depth(topology);

  //
  // How many NUMA domains do we have?
  //
  {
    int level;

    //
    // Note: If there are multiple levels with NUMA nodes, this finds
    //       only the uppermost.
    //
    for (level = 0, numaLevel = -1;
         level < topoDepth && numaLevel == -1;
         level++) {
      if (hwloc_get_depth_type(topology, level) == HWLOC_OBJ_NUMANODE) {
        numaLevel = level;
      }
    }
  }
}

void chpl_topo_post_comm_init(void) {

  // If we are oversubscribed then try to use our own socket.

  int numLocalesOnNode = chpl_get_num_locales_on_node();
  int rank = chpl_get_local_rank();
  if ((numLocalesOnNode > 1) && (rank != -1)) {
    int numSockets = 0;
    hwloc_obj_t socket = NULL;
    for (hwloc_obj_t sobj = hwloc_get_next_obj_by_type(topology,
                                 HWLOC_OBJ_PACKAGE, NULL);
        sobj != NULL;
        sobj = hwloc_get_next_obj_by_type(topology, HWLOC_OBJ_PACKAGE, sobj)) {
      numSockets++;
      if (sobj->logical_index == rank) {
        socket = sobj;
      }
    }
    if ((socket != NULL) && (numLocalesOnNode <= numSockets)) {
      // we get our own socket
      fprintf(stderr, "XXX %d using socket %d\n", getpid(), rank);
      root = socket;
    }
  }

  if (root == NULL) {
    root = hwloc_get_root_obj(topology);
  }

  //
  // Find the NUMA nodes, that is, the objects at numaLevel that also
  // have CPUs.  This is as opposed to things like Xeon Phi HBM, which
  // is memory-only, no CPUs.  Allow for overriding this through the
  // environment.
  //
  if (strcmp(CHPL_LOCALE_MODEL, "flat") != 0) {
    //
    // The number of NUMA domains only matters for locale models other
    // than 'flat'.
    //
    numNumaDomains = (int) chpl_env_rt_get_uint("NUM_NUMA_DOMAINS", 0);
  }

  if (numNumaDomains == 0) {
    const hwloc_cpuset_t cpusetAll = root->cpuset;
    numNumaDomains =
      hwloc_get_nbobjs_inside_cpuset_by_depth(topology, cpusetAll, numaLevel);
  }
}


void chpl_topo_exit(void) {
  if (!haveTopology) {
    return;
  }

  hwloc_topology_destroy(topology);
}


hwloc_topology_t chpl_topo_getHwlocTopology(void) {
  return (haveTopology) ? topology : NULL;
}


//
// How many CPUs (cores or PUs) are there?
static pthread_once_t numCPUs_ctrl = PTHREAD_ONCE_INIT;
static void getNumCPUs(void);
// TODO: put these into an array
static int numCPUsPhysAcc = -1;
static int numCPUsPhysAll = -1;
static int numCPUsPhysAccAvail = -1;
static int numCPUsLogAcc  = -1;
static int numCPUsLogAll  = -1;
static int numCPUsLogAccAvail = -1;
static hwloc_cpuset_t physAccSet;
static hwloc_cpuset_t physAccAvailSet;
static hwloc_cpuset_t logAccSet;
static hwloc_cpuset_t logAccAvailSet;


int chpl_topo_getNumCPUsPhysical(chpl_bool accessible_only, 
                                 chpl_bool available_only) {
  CHK_ERR(pthread_once(&numCPUs_ctrl, getNumCPUs) == 0);
  int result = 0;
  if (accessible_only) {
    if (available_only) {
      result = numCPUsPhysAccAvail;
    } else {
      result = numCPUsPhysAcc;
    }
  } else {
    result = numCPUsPhysAll;
  }
  return result;
}


int chpl_topo_getNumCPUsLogical(chpl_bool accessible_only,
                                chpl_bool available_only) {
  CHK_ERR(pthread_once(&numCPUs_ctrl, getNumCPUs) == 0);
  int result = 0;
  if (accessible_only) {
    if (available_only) {
      result = numCPUsLogAccAvail;
    } else {
      result = numCPUsLogAcc;
    }
  } else {
    result = numCPUsLogAll;
  }
  return result;
}

static chpl_bool setCPUSet(hwloc_obj_t obj, void *ptr) {
  hwloc_cpuset_t cpuset = (hwloc_cpuset_t) ptr;
  hwloc_bitmap_set(cpuset, obj->logical_index);
  return false;
}

static chpl_bool findObjectsByType(hwloc_obj_t obj, hwloc_obj_type_t type,
                              chpl_bool (*callback)(hwloc_obj_t, void*),
                              void *ptr) {
  chpl_bool stop = false;
  if (obj->type == type) {
    stop = (*callback)(obj, ptr);
  } else {
    for (hwloc_obj_t child = obj->first_child; child != NULL;
         child = child->next_sibling) {
      chpl_bool tmp = findObjectsByType(child, type, callback, ptr);
      if (tmp) {
        stop = true;
        break;
      }
    }
  }
  return stop;
}

static
void getNumCPUs(void) {
  //
  // accessible cores and PUs
  //
  CHK_ERR_ERRNO((logAccSet = hwloc_bitmap_alloc()) != NULL);
  CHK_ERR_ERRNO((physAccSet = hwloc_bitmap_alloc()) != NULL);

  if (root != hwloc_get_root_obj(topology)) {
    // Look for cores and PUs under our relative root.
    // TODO: can hwloc do this for us?
    (void) findObjectsByType(root, HWLOC_OBJ_PU, setCPUSet, logAccSet);
    (void) findObjectsByType(root
                             , HWLOC_OBJ_CORE, setCPUSet, physAccSet);
    CHK_ERR_ERRNO((logAccAvailSet = hwloc_bitmap_dup(logAccSet)) != NULL);
    CHK_ERR_ERRNO((physAccAvailSet = hwloc_bitmap_dup(physAccSet)) != NULL);
    // XXX debug
    hwloc_const_cpuset_t tmp = hwloc_topology_get_allowed_cpuset(topology);
    char buf[1024];
    hwloc_bitmap_list_snprintf(buf, sizeof(buf), tmp);
    fprintf(stderr, "XXX %d hwloc_topology_get_allowed_cpuset %s\n",
            getpid(), buf);
  } else {
    //
    // Hwloc can't tell us the number of accessible cores directly, so get
    // that by counting the parent cores of the accessible PUs.
    //

    //
    // We could seemingly use hwloc_topology_get_allowed_cpuset() to get
    // the set of accessible PUs here.  But that seems not to reflect the
    // schedaffinity settings, so use hwloc_get_proc_cpubind() instead.
    //
    if (hwloc_get_proc_cpubind(topology, getpid(), logAccSet, 0) != 0) {
#ifdef __APPLE__
      const int errRecoverable = (errno == ENOSYS); // no cpubind on macOS
#else
      const int errRecoverable = 0;
#endif
      if (errRecoverable) {
        hwloc_bitmap_fill(logAccSet);
      } else {
        REPORT_ERR_ERRNO(hwloc_get_proc_cpubind(topology, getpid(), logAccSet, 0)
                         == 0);
      }
    }
    hwloc_bitmap_and(logAccSet, logAccSet,
                     hwloc_topology_get_online_cpuset(topology));

    CHK_ERR_ERRNO((logAccAvailSet = hwloc_bitmap_dup(logAccSet)) != NULL);
    CHK_ERR_ERRNO((physAccSet = hwloc_bitmap_alloc()) != NULL);

#define NEXT_PU(pu)                                                     \
  hwloc_get_next_obj_inside_cpuset_by_type(topology, logAccSet,         \
                                             HWLOC_OBJ_PU, pu)

    for (hwloc_obj_t pu = NEXT_PU(NULL); pu != NULL; pu = NEXT_PU(pu)) {
      hwloc_obj_t core;
      CHK_ERR_ERRNO((core = hwloc_get_ancestor_obj_by_type(topology,
                                                           HWLOC_OBJ_CORE,
                                                           pu))
                    != NULL);
      hwloc_bitmap_set(physAccSet, core->logical_index);
    }
    CHK_ERR_ERRNO((physAccAvailSet = hwloc_bitmap_dup(physAccSet)) != NULL);

  #undef NEXT_PU
  }

  numCPUsPhysAcc = hwloc_bitmap_weight(physAccSet);
  numCPUsPhysAccAvail = hwloc_bitmap_weight(physAccAvailSet);

  CHK_ERR(numCPUsPhysAcc > 0);
  CHK_ERR(numCPUsPhysAccAvail > 0);

  //
  // all cores
  //
  numCPUsPhysAll = hwloc_get_nbobjs_by_type(topology, HWLOC_OBJ_CORE);
  CHK_ERR(numCPUsPhysAll > 0);

  //
  // accessible PUs
  //
  numCPUsLogAcc = hwloc_bitmap_weight(logAccSet);
  numCPUsLogAccAvail = hwloc_bitmap_weight(logAccAvailSet);

  CHK_ERR(numCPUsLogAcc > 0);
  CHK_ERR(numCPUsLogAccAvail > 0);


  //
  // all PUs
  //
  numCPUsLogAll = hwloc_get_nbobjs_by_type(topology, HWLOC_OBJ_PU);
  CHK_ERR(numCPUsLogAll > 0);
}

hwloc_cpuset_t chpl_topo_getCPUsPhysical(chpl_bool avail) {
  CHK_ERR(pthread_once(&numCPUs_ctrl, getNumCPUs) == 0);
  return (avail) ? physAccAvailSet : physAccSet;
}

hwloc_cpuset_t chpl_topo_getCPUsLogical(chpl_bool avail) {
  CHK_ERR(pthread_once(&numCPUs_ctrl, getNumCPUs) == 0);
  return (avail) ? logAccAvailSet : logAccSet;
}

// TODO: error checking
void chpl_topo_reserveCPUPhysical(int id) {
  CHK_ERR(pthread_once(&numCPUs_ctrl, getNumCPUs) == 0);
  hwloc_bitmap_clr(physAccAvailSet, id);
}

void chpl_topo_reserveCPULogical(int id) {
  CHK_ERR(pthread_once(&numCPUs_ctrl, getNumCPUs) == 0);
  hwloc_bitmap_clr(logAccAvailSet, id);
}


int chpl_topo_getNumNumaDomains(void) {
  fprintf(stderr, "XXX %d numNumaDomains %d\n", getpid(), numNumaDomains);
  return numNumaDomains;
}

#define MAX_NICS 16

static int numNics = 0;
static hwloc_obj_t nics[MAX_NICS];

static chpl_bool setNic(hwloc_obj_t obj, void *ptr) {
  fprintf(stderr, "XXX setNic\n");
  hwloc_obj_osdev_type_t ostype = *((hwloc_obj_osdev_type_t *) ptr);
  if (obj->attr->osdev.type == ostype) {
    fprintf(stderr, "XXX found nic %s\n", obj->name);
    if (numNics >= MAX_NICS) {
      chpl_error("too many NICS", 0, 0);
    }
    nics[numNics++] = obj;
  }
  return false;
}

int chpl_topo_getNICs(char buffers[][128], int count) {
  int result = 0;
  // If we are bound to a particular socket/package then find the NICs that are
  // under us.
  if (root != hwloc_get_root_obj(topology)) {
    fprintf(stderr, "looking for NIC under socket %d\n", root->logical_index);
    if (numNics == 0) {
      hwloc_obj_osdev_type_t ostype = HWLOC_OBJ_OSDEV_OPENFABRICS;
      (void) findObjectsByType(root, HWLOC_OBJ_OS_DEVICE, setNic, &ostype);
      if (numNics == 0) {
        ostype = HWLOC_OBJ_OSDEV_NETWORK;
        (void) findObjectsByType(root, HWLOC_OBJ_OS_DEVICE, setNic, &ostype);
      }
    }
    for (int i = 0; i < numNics && i < count; i++) {
      // hack to change hsnX to cxiX
      // TODO: do this correctly
      if (!strncmp(nics[i]->name, "hsn", 3)) {
        snprintf(buffers[i], sizeof(buffers[i]), "cxi%s", &(nics[i]->name[3]));
      } else {
        strncpy(buffers[i], nics[i]->name, sizeof(buffers[i]));
      }
      result++;
    }
  }
  return result;
}

void chpl_topo_setThreadLocality(c_sublocid_t subloc) {
  hwloc_cpuset_t cpuset;
  int flags;

  _DBG_P("chpl_topo_setThreadLocality(%d)\n", (int) subloc);

  if (!haveTopology) {
    return;
  }

  if (!topoSupport->cpubind->set_thread_cpubind)
    return;

  CHK_ERR_ERRNO((cpuset = hwloc_bitmap_alloc()) != NULL);

  hwloc_cpuset_from_nodeset(topology, cpuset,
                            getNumaObj(subloc)->allowed_nodeset);

  flags = HWLOC_CPUBIND_THREAD | HWLOC_CPUBIND_STRICT;
  char buf[1024];
  hwloc_bitmap_list_snprintf(buf, sizeof(buf), getNumaObj(subloc)->allowed_cpuset);
  fprintf(stderr, "XXX %d allowed_cpuset subloc %d: %s\n",
          getpid(), (int) subloc, buf);

  hwloc_bitmap_list_snprintf(buf, sizeof(buf), cpuset);
  fprintf(stderr, "XXX %d chpl_topo_setThreadLocality subloc %d: %s\n",
          getpid(), (int) subloc, buf);
  CHK_ERR_ERRNO(hwloc_set_cpubind(topology, cpuset, flags) == 0);

  hwloc_bitmap_free(cpuset);
}


c_sublocid_t chpl_topo_getThreadLocality(void) {
  hwloc_cpuset_t cpuset;
  hwloc_nodeset_t nodeset;
  int flags;
  int node;

  if (!haveTopology) {
    return c_sublocid_any;
  }

  if (!topoSupport->cpubind->get_thread_cpubind) {
    return c_sublocid_any;
  }

  CHK_ERR_ERRNO((cpuset = hwloc_bitmap_alloc()) != NULL);
  CHK_ERR_ERRNO((nodeset = hwloc_bitmap_alloc()) != NULL);

  flags = HWLOC_CPUBIND_THREAD;
  CHK_ERR_ERRNO(hwloc_get_cpubind(topology, cpuset, flags) == 0);

  hwloc_cpuset_to_nodeset(topology, cpuset, nodeset);

  node = hwloc_bitmap_first(nodeset);

  hwloc_bitmap_free(nodeset);
  hwloc_bitmap_free(cpuset);

  return node;
}

// bind the current thread to the specified cpuset
void chpl_topo_bindThread(hwloc_cpuset_t cpuset) {
  int flags = HWLOC_CPUBIND_THREAD | HWLOC_CPUBIND_STRICT;
  char buf[1024];
  hwloc_bitmap_list_snprintf(buf, sizeof(buf), cpuset);
  fprintf(stderr, "XXX %d chpl_topo_bindThread %s\n",
          getpid(), buf);
  CHK_ERR_ERRNO(hwloc_set_cpubind(topology, cpuset, flags) == 0);
}

void chpl_topo_setMemLocality(void* p, size_t size, chpl_bool onlyInside,
                              c_sublocid_t subloc) {
  size_t pgSize;
  unsigned char* pPgLo;
  size_t nPages;

  _DBG_P("chpl_topo_setMemLocality(%p, %#zx, onlyIn=%s, %d)\n",
         p, size, (onlyInside ? "T" : "F"), (int) subloc);

  if (!haveTopology) {
    return;
  }

  alignAddrSize(p, size, onlyInside, &pgSize, &pPgLo, &nPages);

  _DBG_P("    localize %p, %#zx bytes (%#zx pages)\n",
         pPgLo, nPages * pgSize, nPages);

  if (nPages == 0)
    return;

  chpl_topo_setMemLocalityByPages(pPgLo, nPages * pgSize, getNumaObj(subloc));
}


void chpl_topo_setMemSubchunkLocality(void* p, size_t size,
                                      chpl_bool onlyInside,
                                      size_t* subchunkSizes) {
  size_t pgSize;
  unsigned char* pPgLo;
  size_t nPages;
  int i;
  size_t pg;
  size_t pgNext;

  _DBG_P("chpl_topo_setMemSubchunkLocality(%p, %#zx, onlyIn=%s)\n",
         p, size, (onlyInside ? "T" : "F"));

  if (!haveTopology) {
    return;
  }

  alignAddrSize(p, size, onlyInside, &pgSize, &pPgLo, &nPages);

  _DBG_P("    localize %p, %#zx bytes (%#zx pages)\n",
         pPgLo, nPages * pgSize, nPages);

  if (nPages == 0)
    return;

  for (i = 0, pg = 0; i < numNumaDomains; i++, pg = pgNext) {
    if (i == numNumaDomains - 1)
      pgNext = nPages;
    else
      pgNext = 1 + (nPages * (i + 1) - 1) / numNumaDomains;
    chpl_topo_setMemLocalityByPages(pPgLo + pg * pgSize,
                                    (pgNext - pg) * pgSize, getNumaObj(i));
    if (subchunkSizes != NULL) {
      subchunkSizes[i] = (pgNext - pg) * pgSize;
    }
  }
}


void chpl_topo_touchMemFromSubloc(void* p, size_t size, chpl_bool onlyInside,
                                  c_sublocid_t subloc) {
  size_t pgSize;
  unsigned char* pPgLo;
  size_t nPages;
  hwloc_cpuset_t cpuset;
  int flags;

  _DBG_P("chpl_topo_touchMemFromSubloc(%p, %#zx, onlyIn=%s, %d)\n",
         p, size, (onlyInside ? "T" : "F"), (int) subloc);

  if (!haveTopology
      || !topoSupport->cpubind->get_thread_cpubind
      || !topoSupport->cpubind->set_thread_cpubind) {
    return;
  }

  alignAddrSize(p, size, onlyInside, &pgSize, &pPgLo, &nPages);

  _DBG_P("    localize %p, %#zx bytes (%#zx pages)\n",
         pPgLo, nPages * pgSize, nPages);

  if (nPages == 0)
    return;

  CHK_ERR_ERRNO((cpuset = hwloc_bitmap_alloc()) != NULL);

  flags = HWLOC_CPUBIND_THREAD;
  CHK_ERR_ERRNO(hwloc_set_cpubind(topology, cpuset, flags) == 0);

  chpl_topo_setThreadLocality(subloc);

  {
    size_t pg;
    for (pg = 0; pg < nPages; pg++) {
      pPgLo[pg * pgSize] = 0;
    }
  }

  flags = HWLOC_CPUBIND_THREAD | HWLOC_CPUBIND_STRICT;
  CHK_ERR_ERRNO(hwloc_set_cpubind(topology, cpuset, flags) == 0);

  hwloc_bitmap_free(cpuset);
}


static inline
hwloc_obj_t getNumaObj(c_sublocid_t subloc) {
  // could easily imagine this being a bit slow, but it's okay for now
  hwloc_obj_t numa = hwloc_get_obj_inside_cpuset_by_depth(topology,
                                                            root->cpuset,
                                                            numaLevel,
                                                            subloc);
  fprintf(stderr, "XXX %d getNumaObj %d logical index %d\n", getpid(),
          (int) subloc, numa->logical_index);
  return numa;
}


static inline
hwloc_obj_t getNumaObj2(c_sublocid_t subloc) {
  // could easily imagine this being a bit slow, but it's okay for now
  hwloc_obj_t numa = hwloc_get_obj_inside_cpuset_by_depth(topology,
                                                            root2->cpuset,
                                                            numaLevel,
                                                            subloc);
  fprintf(stderr, "XXX %d getNumaObj %d logical index %d\n", getpid(),
          (int) subloc, numa->logical_index);
  return numa;
}

static inline
void alignAddrSize(void* p, size_t size, chpl_bool onlyInside,
                   size_t* p_pgSize, unsigned char** p_pPgLo,
                   size_t* p_nPages) {
  unsigned char* pCh = (unsigned char*) p;
  size_t pgSize = chpl_getHeapPageSize();
  size_t pgMask = pgSize - 1;
  unsigned char* pPgLo;
  size_t nPages;

  if (onlyInside) {
    pPgLo = round_up_to_mask_ptr(pCh, pgMask);
    if (size < pPgLo - pCh)
      nPages = 0;
    else
      nPages = round_down_to_mask(size - (pPgLo - pCh), pgMask) / pgSize;
  } else {
    pPgLo = round_down_to_mask_ptr(pCh, pgMask);
    nPages = round_up_to_mask(size + (pCh - pPgLo), pgMask) / pgSize;
  }

  *p_pgSize = pgSize;
  *p_pPgLo = pPgLo;
  *p_nPages = nPages;
}


void chpl_topo_interleaveMemLocality(void* p, size_t size) {
  int flags;

  if (!haveTopology) {
    return;
  }

  if (!topoSupport->membind->set_area_membind ||
      !topoSupport->membind->interleave_membind) {
    return;
  }

  hwloc_bitmap_t set;
  set = hwloc_bitmap_dup(root->cpuset);

  flags = 0;
  CHK_ERR_ERRNO(hwloc_set_area_membind(topology, p, size, set, HWLOC_MEMBIND_INTERLEAVE, flags) == 0);
}


//
// p must be page aligned and the page size must evenly divide size
//
static
void chpl_topo_setMemLocalityByPages(unsigned char* p, size_t size,
                                     hwloc_obj_t numaObj) {
  int flags;

  if (!haveTopology) {
    return;
  }

  if (!topoSupport->membind->set_area_membind
      || !do_set_area_membind)
    return;

  _DBG_P("hwloc_set_area_membind_nodeset(%p, %#zx, %d)\n", p, size,
         (int) hwloc_bitmap_first(numaObj->allowed_nodeset));

  flags = HWLOC_MEMBIND_MIGRATE | HWLOC_MEMBIND_STRICT;
  CHK_ERR_ERRNO(hwloc_set_area_membind_nodeset(topology, p, size,
                                               numaObj->allowed_nodeset,
                                               HWLOC_MEMBIND_BIND, flags)
                == 0);
}


c_sublocid_t chpl_topo_getMemLocality(void* p) {
  int flags;
  hwloc_nodeset_t nodeset;
  int node;

  if (!haveTopology) {
    return c_sublocid_any;
  }

  if (!topoSupport->membind->get_area_memlocation) {
    return c_sublocid_any;
  }

  if (p == NULL) {
    return c_sublocid_any;
  }

  CHK_ERR_ERRNO((nodeset = hwloc_bitmap_alloc()) != NULL);

  flags = HWLOC_MEMBIND_BYNODESET;
  CHK_ERR_ERRNO(hwloc_get_area_memlocation(topology, p, 1, nodeset, flags)
                == 0);

  node = hwloc_bitmap_first(nodeset);
  if (!isActualSublocID(node)) {
    node = c_sublocid_any;
  }

  hwloc_bitmap_free(nodeset);

  return node;
}


static
void chk_err_fn(const char* file, int lineno, const char* what) {
  chpl_internal_error_v("%s: %d: !(%s)", file, lineno, what);
}


static
void chk_err_errno_fn(const char* file, int lineno, const char* what) {
  chpl_internal_error_v("%s: %d: !(%s): %s", file, lineno, what,
                        strerror(errno));
}
