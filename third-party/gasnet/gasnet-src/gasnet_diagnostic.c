/*   $Source: bitbucket.org:berkeleylab/gasnet.git/gasnet_diagnostic.c $
 * Description: GASNet internal diagnostics
 * Copyright 2002, Dan Bonachea <bonachea@cs.berkeley.edu>
 * Terms of use are as specified in license.txt
 */

#include <gasnet_internal.h>

/* filthy hack to allow simultaneous use of gasnet-internal and test.h facilities */
#undef malloc
#undef calloc
#undef realloc
#undef free
#undef strdup
#undef strndup
#undef assert         

#define TEST_OMIT_CONFIGSTRINGS 1
#include <../tests/test.h>

/* this file should *only* contain symbols used for internal diagnostics,
   so that we can avoid needlessly linking it into production executables 
   everything except the main entry point should be static, to prevent namespace pollution
*/

GASNETT_IDENT(gasneti_IdentString_diagnostics, 
 "$GASNetDiagnostics: (<link>) INCLUDES gasnet_diagnostic.o $");

#if GASNET_PAR
  static void * thread_fn(void *arg);
#endif
static int num_threads = 1;
static int peer = -1;
static void * myseg = NULL;
static void * peerseg = NULL;
static int iters = 0;
static int iters0 = 0;
static int iters2 = 0;

#define gasneti_diag_hidx_base 128
#define gasnetc_diag_hidx_base 160
#define gasnete_diag_hidx_base 200
static int gasneti_diag_havehandlers = 0; /* true iff caller has registered our handler table */

static int id = 0;
#define TEST_HEADER(desc)                       \
  PTHREAD_BARRIER(num_threads);                 \
  if (!id) TEST_SECTION_BEGIN();                \
  PTHREAD_BARRIER(num_threads);                 \
  if (TEST_SECTION_ENABLED() &&                 \
      (MSG0("%c: %s %s...",TEST_SECTION_NAME(), \
           (num_threads > 1?"parallel":"sequential"),desc),1))

#ifdef GASNETC_DIAGNOSTICS_SETUP
  GASNETC_DIAGNOSTICS_SETUP /* can include helper source files, etc */
#endif
#ifdef GASNETE_DIAGNOSTICS_SETUP
  GASNETE_DIAGNOSTICS_SETUP /* can include helper source files, etc */
#endif

#ifndef GASNETC_RUN_DIAGNOSTICS_SEQ
#define GASNETC_RUN_DIAGNOSTICS_SEQ(iters) (0)
#endif
#ifndef GASNETC_RUN_DIAGNOSTICS_PAR
#define GASNETC_RUN_DIAGNOSTICS_PAR(iters,threadid,numthreads) (0)
#endif

#ifndef GASNETE_RUN_DIAGNOSTICS_SEQ
#define GASNETE_RUN_DIAGNOSTICS_SEQ(iters) (0)
#endif
#ifndef GASNETE_RUN_DIAGNOSTICS_PAR
#define GASNETE_RUN_DIAGNOSTICS_PAR(iters,threadid,numthreads) (0)
#endif


/* ------------------------------------------------------------------------------------ */
/*  misc sequential tests */

#if GASNET_DEBUG
  extern gasneti_auxseg_request_t gasneti_auxseg_dummy(gasnet_seginfo_t *auxseg_info);
  static void auxseg_test(void) {
    BARRIER();
    TEST_HEADER("auxseg test") {
      gasneti_auxseg_dummy((void *)(uintptr_t)-1); /* call self-test */
    }
  }
#else
  #define auxseg_test()   TEST_HEADER("auxseg test - SKIPPED") do { } while(0)
#endif

static void mutex_test(int id);
static void rwlock_test(int id);
static void spinlock_test(int id);
static void cond_test(int id);
static void semaphore_test(int id);
static void lifo_test(int id);
static void atomic128_test(int id);
static void malloc_test(int id);
static void progressfns_test(int id);
static void op_test(int id);

static void spawner_test(void);
static void hbarrier_test(void);
static void rexchgv_test(void);

static void vlide_test(void);

static gex_TM_t myteam;

/* ------------------------------------------------------------------------------------ */
/* run iters iterations of diagnostics and return zero on success 
   must be called collectively by exactly one thread on each node
   in par mode, the test may internally spawn up to threadcnt threads
 */
extern int gasneti_run_diagnostics(int iter_cnt, int threadcnt, const char *testsections,
                                   gex_TM_t myteam_arg, void *myseg_arg,
                                   gex_Rank_t peer_arg, void *peerseg_arg,
                                   unsigned int seed_arg) {
  test_errs = 0;
  iters = iter_cnt;
  iters2 = (iters <= INT_MAX/100) ? iters*100 : iters;
  iters0 = MAX(1,iters/100);
  gex_Rank_t mynode = gex_TM_QueryRank(myteam_arg);
  gex_Rank_t nnodes = gex_TM_QuerySize(myteam_arg);

  myteam = myteam_arg;
  myseg = myseg_arg;
  peer = peer_arg;
  peerseg = peerseg_arg;

  TEST_SRAND(seed_arg);

#if !GASNET_SEGMENT_EVERYTHING
  for (gex_Rank_t rank =0; rank < nnodes; rank++) {
    void *owneraddr;
    void *localaddr;
    uintptr_t size;
    GASNET_Safe(gex_Segment_QueryBound(myteam_arg, rank, &owneraddr, &localaddr, &size));
    gasneti_assert_always_uint(size ,>=, TEST_SEGSZ);
    gasneti_assert_always_uint((((uintptr_t)owneraddr) % PAGESZ) ,==, 0);
    gasneti_assert_always_uint((((uintptr_t)localaddr) % PAGESZ) ,==, 0);
    if (rank == mynode) {
      gasneti_assert_always_ptr(owneraddr ,==, localaddr);
      gasneti_assert_always_ptr(owneraddr ,==, myseg);
    } else if (rank == peer) {
      gasneti_assert_always_ptr(owneraddr ,==, peerseg);
    }
  }
#endif

  if (testsections) TEST_SECTION_PARSE(testsections);
  gasneti_assert_always(gasneti_THUNK_TM      == myteam);
  gasneti_assert_always(gasneti_THUNK_EP      == gex_TM_QueryEP(myteam));
  gasneti_assert_always(gasneti_THUNK_CLIENT  == gex_TM_QueryClient(myteam));
  gasneti_assert_always(gasneti_THUNK_SEGMENT == gex_EP_QuerySegment(gex_TM_QueryEP(myteam)));

  TEST_GENERICS_WARNING();

  auxseg_test();

  BARRIER();
  TEST_HEADER("malloc test") malloc_test(0);

  BARRIER();
  TEST_HEADER("gasneti_mutex_t test") mutex_test(0);

  BARRIER();
  TEST_HEADER("gasneti_cond_t test") cond_test(0);

  BARRIER();
  TEST_HEADER("gasneti_rwlock_t test") rwlock_test(0);

  BARRIER();
  spinlock_test(0);

  BARRIER();
  semaphore_test(0);

  BARRIER();
  atomic128_test(0);

  BARRIER();
  lifo_test(0);

  BARRIER();
  progressfns_test(0);

  BARRIER();

  op_test(0);

  BARRIER();
  TEST_HEADER("conduit tests") {
    BARRIER();
    test_errs += GASNETC_RUN_DIAGNOSTICS_SEQ(iters);
    BARRIER();
    test_errs += GASNETE_RUN_DIAGNOSTICS_SEQ(iters);
  }
  BARRIER();

  #if HAVE_SSH_SPAWNER || HAVE_MPI_SPAWNER || HAVE_PMI_SPAWNER
    spawner_test();
    BARRIER();
  #endif

  TEST_HEADER("host-scoped barrier test") hbarrier_test();

  TEST_HEADER("RotatedExchangeV test") rexchgv_test();

  TEST_HEADER("VLIDE test") vlide_test();

  #if GASNET_PAR
    num_threads = threadcnt;
    MSG0("spawning %i threads...", num_threads);
    test_createandjoin_pthreads(num_threads, &thread_fn, NULL, 0);
  #endif

  BARRIER();
  MSG0("GASNet internal diagnostics complete.");
  return test_errs;
}

#undef MSG0
#undef ERR
#define MSG0 THREAD_MSG0(id)
#define ERR  THREAD_ERR(id)

/* ------------------------------------------------------------------------------------ */
/*  mixed parallel / sequential tests */
/* ------------------------------------------------------------------------------------ */

static void malloc_test(int id) { 
  int i, cnt = 0;
  int maxobjs;
  void **ptrs;
  gasneti_heapstats_t stats_before, stats_after;

  /* try to trigger any warm-up allocations potentially caused by barrier */
  if (id == 0) {
    /* each node takes a turn being a late arrival */
    for (i=0; i < gasneti_nodes; i++) {
      if (i == gasneti_mynode) {
        uint64_t goal = gasnett_ticks_to_us(gasnett_ticks_now()) + 100000; /* 0.1s */
        while (gasnett_ticks_to_us(gasnett_ticks_now()) < goal) {
          gasnett_sched_yield();
        }
      }
      BARRIER();
    }
  }
  for (i=0; i < num_threads; i++) {
    if (i == id) BARRIER(); /* each thread gets a chance */
    PTHREAD_LOCALBARRIER(num_threads);
  }

  // bug 2788: try to isolate this test from conduit allocations that may take place during global barrier
  sleep(1);
  gasnet_AMPoll();
  PTHREAD_LOCALBARRIER(num_threads);

  if (!id) gasneti_getheapstats(&stats_before);
    
  PTHREAD_LOCALBARRIER(num_threads);

  gasneti_memcheck_all();
  ptrs = gasneti_malloc_allowfail(8);
  gasneti_assert_always(ptrs);
  gasneti_free(ptrs);
  ptrs = gasneti_realloc(NULL,8);
  gasneti_assert_always(ptrs);
  gasneti_free(ptrs);
  gasneti_free(NULL);

  PTHREAD_LOCALBARRIER(num_threads);
  
  maxobjs = MIN(iters0,10000/num_threads);
  ptrs = gasneti_calloc(maxobjs,sizeof(void*));
  for (i = 0; i < maxobjs; i++) gasneti_assert_always(ptrs[i] == NULL);
  for (i = 0; i < iters/num_threads; i++) {
    gasneti_memcheck_one();
    if (cnt == maxobjs || (cnt > 0 && TEST_RAND_ONEIN(2))) {
      size_t idx = TEST_RAND(0,cnt-1);
      gasneti_assert_always(ptrs[idx]);
      gasneti_memcheck(ptrs[idx]);
      if (TEST_RAND_ONEIN(2)) {
        gasneti_free(ptrs[idx]);
        cnt--;
        ptrs[idx] = ptrs[cnt];
        ptrs[cnt] = NULL;
      } else {
        ptrs[idx] = gasneti_realloc(ptrs[idx],TEST_RAND(1,16*1024));
      }
    } else {
      void *p;
      if (TEST_RAND_ONEIN(2)) {
        p = gasneti_malloc(TEST_RAND(1,1024));
      } else {
        p = gasneti_calloc(1,TEST_RAND(1,1024));
      }
      if (TEST_RAND_ONEIN(4)) {
        gasneti_leak(p);
      }
      gasneti_memcheck(p);
      gasneti_assert_always(p);
      gasneti_assert_always(ptrs[cnt] == NULL);
      ptrs[cnt] = p;
      cnt++;
    }
  }
  gasneti_memcheck_all();
  for (i = 0; i < cnt; i++) {
    gasneti_free(ptrs[i]);
  }
  gasneti_free(ptrs);
  gasneti_memcheck_all();

  PTHREAD_LOCALBARRIER(num_threads);

  for (i = 0; i < iters/num_threads; i++) {
    int alignsz;
    for (alignsz = 1; alignsz < MIN(GASNET_PAGESIZE,64*1024); alignsz *= 2) {
      size_t sz = TEST_RAND(1,alignsz*2);
      char * p = gasneti_malloc_aligned(alignsz,sz);
      gasneti_assert_always(p);
      gasneti_assert_always_uint((((uintptr_t)p) & (alignsz-1)) ,==, 0);
      p[0] = 'x'; p[sz - 1] = 'y';
      if (TEST_RAND_ONEIN(4)) {
        gasneti_leak_aligned(p);
      }
      gasneti_free_aligned(p);
    }
  }
  gasneti_memcheck_all();

  PTHREAD_LOCALBARRIER(num_threads);

  if (!id) {
    gasneti_getheapstats(&stats_after);
    #if GASNET_DEBUG
    {
    #if GASNETI_CONDUIT_THREADS
      double tol = 0.1; /* allow for some heap change if a conduit thread is around */
    #else
      double tol = 0; /* we have all the threads, and nothing else should be allocating */
    #endif
      int64_t delta_bytes = (int64_t)stats_before.live_bytes - (int64_t)stats_after.live_bytes;
      int64_t delta_objects = (int64_t)stats_before.live_objects - (int64_t)stats_after.live_objects;
      if (delta_bytes < 0) delta_bytes = -delta_bytes;
      if (delta_objects < 0) delta_objects = -delta_objects;
      if (delta_bytes/(double)stats_after.live_bytes > tol ||
          delta_objects/(double)stats_after.live_objects > tol) 
        MSG("ERROR: unexpected heap size change:\n"
            "  stats_before.live_bytes=%"PRIu64" stats_after.live_bytes=%"PRIu64"\n"
            "  stats_before.live_objects=%"PRIu64" stats_after.live_objects=%"PRIu64,
            stats_before.live_bytes,   stats_after.live_bytes,
            stats_before.live_objects, stats_after.live_objects);
    }
    #endif
  }

  sleep(1);

  PTHREAD_BARRIER(num_threads);
}
/* ------------------------------------------------------------------------------------ */
static void cond_test(int id) {
  static gasneti_cond_t cond1 = GASNETI_COND_INITIALIZER;
  static gasneti_cond_t cond2;
  static gasneti_mutex_t lock1 = GASNETI_MUTEX_INITIALIZER;
  static uint32_t done = 0;
  int i;

  PTHREAD_BARRIER(num_threads);

    if (!id) {
      gasneti_cond_init(&cond2);
      gasneti_cond_destroy(&cond2);
      gasneti_cond_init(&cond2);
      gasneti_mutex_lock(&lock1);
      gasneti_cond_signal(&cond1);
      gasneti_cond_signal(&cond2);
      gasneti_cond_broadcast(&cond1);
      gasneti_cond_broadcast(&cond2);
      gasneti_mutex_unlock(&lock1);
    }

  PTHREAD_BARRIER(num_threads);

    if (!id) { /* awake thread */
      for (i = 0; i < iters2; i++) {
        gasneti_mutex_lock(&lock1);
          if (i&1) {
            gasneti_cond_signal(&cond1);
          } else {
            gasneti_cond_broadcast(&cond1);
          }
        gasneti_mutex_unlock(&lock1);
        if (TEST_RAND_ONEIN(iters)) gasnett_sched_yield();
      }
      gasneti_mutex_lock(&lock1);
        done = 1;
        gasneti_cond_broadcast(&cond1);
      gasneti_mutex_unlock(&lock1);
    } else {
      gasneti_mutex_lock(&lock1);
      while (!done) {
        gasneti_mutex_assertlocked(&lock1);
        gasneti_cond_wait(&cond1, &lock1);
      }
      gasneti_mutex_unlock(&lock1);
      gasneti_mutex_assertunlocked(&lock1);
    }

  PTHREAD_BARRIER(num_threads);
}
/* ------------------------------------------------------------------------------------ */
static void mutex_test(int id) {
  static gasneti_mutex_t lock1 = GASNETI_MUTEX_INITIALIZER;
  static gasneti_mutex_t lock2;
  static unsigned int counter;
  unsigned int count = iters2 / num_threads;
  int i;

  PTHREAD_BARRIER(num_threads);

  if (!id) {
    for (i=0; i<10; i++) {
      gasneti_mutex_assertunlocked(&lock1);
      gasneti_mutex_lock(&lock1);
      gasneti_mutex_assertlocked(&lock1);
      gasneti_mutex_unlock(&lock1);
      gasneti_mutex_assertunlocked(&lock1);

      gasneti_assert_always_int(gasneti_mutex_trylock(&lock1) ,==, GASNET_OK);
      gasneti_mutex_assertlocked(&lock1);
      gasneti_mutex_unlock(&lock1);

      gasneti_mutex_init(&lock2);
      gasneti_mutex_assertunlocked(&lock2);
      gasneti_mutex_lock(&lock2);
      gasneti_mutex_assertlocked(&lock2);
      gasneti_mutex_unlock(&lock2);
      gasneti_mutex_assertunlocked(&lock2);
      gasneti_mutex_destroy(&lock2);
    }
    counter = 0;
  }

  PTHREAD_BARRIER(num_threads);

    for (i=0;i<count;i++) {
      if (i&1) {
        gasneti_mutex_lock(&lock1);
      } else {
        int retval;
        while ((retval=gasneti_mutex_trylock(&lock1)) != 0) {
          gasneti_assert_always_int(retval ,==, EBUSY);
        }
      }
        counter++;
      gasneti_mutex_unlock(&lock1);
    }

  PTHREAD_BARRIER(num_threads);

    if (counter != (num_threads * count)) 
      ERR("failed mutex test: counter=%i expecting=%i", counter, (num_threads * count));

  PTHREAD_BARRIER(num_threads);
}
/* ------------------------------------------------------------------------------------ */
static void rwlock_test(int id) {
  static gasneti_rwlock_t lock1 = GASNETI_RWLOCK_INITIALIZER;
  static gasneti_rwlock_t lock2;
  #define NUMCHECK 256
  static unsigned int check[NUMCHECK];
  static unsigned int *numwrites;
  unsigned int count = iters2 / num_threads;
  int i;
  int trywrite = 0;

  PTHREAD_BARRIER(num_threads);

  if (!id) { /* serial tests */
    for (i=0; i<10; i++) {
      gasneti_rwlock_assertunlocked(&lock1);
      gasneti_rwlock_rdlock(&lock1);
      gasneti_rwlock_assertlocked(&lock1);
      gasneti_rwlock_assertrdlocked(&lock1);
      gasneti_rwlock_unlock(&lock1);
      gasneti_rwlock_assertunlocked(&lock1);
      gasneti_rwlock_wrlock(&lock1);
      gasneti_rwlock_assertlocked(&lock1);
      gasneti_rwlock_assertwrlocked(&lock1);
      gasneti_rwlock_unlock(&lock1);
      gasneti_rwlock_assertunlocked(&lock1);

      gasneti_assert_always_int(gasneti_rwlock_tryrdlock(&lock1) ,==, GASNET_OK);
      gasneti_rwlock_assertlocked(&lock1);
      gasneti_rwlock_assertrdlocked(&lock1);
      gasneti_rwlock_unlock(&lock1);
      gasneti_assert_always_int(gasneti_rwlock_trywrlock(&lock1) ,==, GASNET_OK);
      gasneti_rwlock_assertlocked(&lock1);
      gasneti_rwlock_assertwrlocked(&lock1);
      gasneti_rwlock_unlock(&lock1);

      gasneti_rwlock_init(&lock2);
      gasneti_rwlock_assertunlocked(&lock2);
      gasneti_rwlock_rdlock(&lock2);
      gasneti_rwlock_assertlocked(&lock2);
      gasneti_rwlock_assertrdlocked(&lock2);
      gasneti_rwlock_unlock(&lock2);
      gasneti_rwlock_wrlock(&lock2);
      gasneti_rwlock_assertlocked(&lock2);
      gasneti_rwlock_assertwrlocked(&lock2);
      gasneti_rwlock_unlock(&lock2);
      gasneti_rwlock_assertunlocked(&lock2);
      gasneti_rwlock_destroy(&lock2);
    }
    numwrites = gasneti_calloc(num_threads, sizeof(*numwrites));
    memset(check, 0, sizeof(check));
  }

  PTHREAD_BARRIER(num_threads);

    for (i=0;i<count;i++) {
      int j;
      const int writer = ((id + i + 1) & 0xFF) == 1; /* early and infrequent writes */
      if (writer) { /* write lock */
        if (trywrite++ & 1) {
          int retval;
          for (int t = 0; t < 100; t++) { // bounded try loop
            retval = gasneti_rwlock_trywrlock(&lock1);
            if (!retval) break; // success
            gasneti_assert_always_int(retval ,==, EBUSY);
          }
          if (retval == EBUSY) gasneti_rwlock_wrlock(&lock1); // gave up on try, block instead
        } else {
          gasneti_rwlock_wrlock(&lock1);
        }
        gasneti_rwlock_assertwrlocked(&lock1);
        /* perform writes */
        for (j=NUMCHECK-1; j >= 0; j--) {
          check[j]++;
        }
        numwrites[id]++;
      }
      if (!writer) { /* read lock */
        if (i & 1) {
          int retval;
          for (int t = 0; t < 100; t++) { // bounded try loop
            retval = gasneti_rwlock_tryrdlock(&lock1);
            if (!retval) break; // success
            gasneti_assert_always_int(retval ,==, EBUSY);
          }
          if (retval == EBUSY) gasneti_rwlock_rdlock(&lock1); // gave up on try, block instead
        } else {
          gasneti_rwlock_rdlock(&lock1);
        }
        gasneti_rwlock_assertrdlocked(&lock1);
      }
      { /* read-only check */
        const unsigned int val = check[0]; /* try to detect a concurrent writer */
        int k;
        for (j=0; j < 10; j++) {
          for (k=0; k < NUMCHECK; k++) {
            unsigned int cv = check[k];
            if_pf (cv != val)
             ERR("failed rwlock test: check[%i]=%i expecting=%i", k, cv, val);
          }
        }
      }

      gasneti_rwlock_unlock(&lock1);
    }

  PTHREAD_BARRIER(num_threads);

    if (!id) { /* final verification */
      int sum = 0;
      for (i=0; i < num_threads; i++) sum += numwrites[i];
      gasneti_assert_always(sum > 0);
      for (i=0; i < NUMCHECK; i++) {
        unsigned int cv = check[i];
        if_pf (cv != sum)
          ERR("failed rwlock test: check[%i]=%i expecting=%i", i, cv, sum);
      }  
      gasneti_free(numwrites);
    }

  PTHREAD_BARRIER(num_threads);
}
/* ------------------------------------------------------------------------------------ */
#if GASNETI_HAVE_SPINLOCK
static void spinlock_test(int id) {
  static gasneti_atomic_t lock1 = GASNETI_SPINLOCK_INITIALIZER;
  static gasneti_atomic_t lock2;
  static unsigned int counter;
  unsigned int count = iters2 / num_threads;
  int i;

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("spinlock test"); else return;

    if (!id) {
      gasneti_spinlock_lock(&lock1);
      gasneti_spinlock_unlock(&lock1);

      gasneti_assert_always_int(gasneti_spinlock_trylock(&lock1) ,==, GASNET_OK);
      gasneti_spinlock_unlock(&lock1);

      gasneti_spinlock_init(&lock2);
      gasneti_spinlock_lock(&lock2);
      gasneti_spinlock_unlock(&lock2);
      gasneti_spinlock_destroy(&lock2);
      gasneti_spinlock_init(&lock2);

      counter = 0;
    }

  PTHREAD_BARRIER(num_threads);

    for (i=0;i<count;i++) {
      if (i&1) {
        gasneti_spinlock_lock(&lock1);
      } else {
        int retval;
        while ((retval=gasneti_spinlock_trylock(&lock1))) {
          gasneti_assert_always_int(retval ,==, EBUSY);
        }
      }
        counter++;
      gasneti_spinlock_unlock(&lock1);
    }

  PTHREAD_BARRIER(num_threads);

    if (counter != (num_threads * count)) 
      ERR("failed spinlock test: counter=%i expecting=%i", counter, (num_threads * count));

  PTHREAD_BARRIER(num_threads);
}
#else
static void spinlock_test(int id) {
  TEST_HEADER("spinlock test - SKIPPED"); else return;
}
#endif
/* ------------------------------------------------------------------------------------ */
static void semaphore_test(int id) {
  static gasneti_semaphore_t sema1 = GASNETI_SEMAPHORE_INITIALIZER(GASNETI_SEMAPHORE_MAX,0);
  static gasneti_semaphore_t sema2;
  static gasneti_atomic_t counter;
  int count = iters2 / num_threads;
  gasneti_atomic_val_t limit = MIN(1000000, num_threads * count);
  int i;

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("semaphore test"); else return;

    if (!id) {
      if (!gasneti_semaphore_trydown(&sema1))
        ERR("failed semaphore test: 'down' from GASNETI_SEMAPHORE_MAX failed");
      gasneti_semaphore_up(&sema1);

      if (gasneti_semaphore_read(&sema1) != GASNETI_SEMAPHORE_MAX)
        ERR("failed semaphore test: 'up' to GASNETI_SEMAPHORE_MAX failed");

      gasneti_semaphore_init(&sema2, limit, limit);
      if (!gasneti_semaphore_trydown(&sema2))
        ERR("failed semaphore test: trydown failed");
      if (gasneti_semaphore_trydown_n(&sema2,4) != 4)
        ERR("failed semaphore test: trydown_n failed");
      if (gasneti_semaphore_trydown_partial(&sema2,5) != 5)
        ERR("failed semaphore test: trydown_partial failed");
      gasneti_semaphore_up_n(&sema2,10);
      if (gasneti_semaphore_read(&sema2) != limit)
        ERR("failed semaphore test: up/down test failed");
      gasneti_semaphore_destroy(&sema2);
      gasneti_semaphore_init(&sema2, limit, limit);

      gasneti_atomic_set(&counter, 0, 0);
    }

  PTHREAD_BARRIER(num_threads);

    for (i=0;i<count;i++) {
      if (gasneti_semaphore_trydown(&sema1))
        gasneti_semaphore_up(&sema1);
    }

  PTHREAD_BARRIER(num_threads);

    while (gasneti_semaphore_trydown(&sema2))
      gasneti_atomic_increment(&counter, 0);
    if (gasneti_semaphore_trydown(&sema2))
        ERR("failed semaphore test: trydown pounding test failed");

  PTHREAD_BARRIER(num_threads);

    if (gasneti_semaphore_read(&sema1) != GASNETI_SEMAPHORE_MAX)
      ERR("failed semaphore test: trydown/up pounding test failed");
    if (gasneti_atomic_read(&counter, 0) != limit)
      ERR("failed semaphore test: trydown pounding test failed");

  PTHREAD_BARRIER(num_threads);
    if (!id) gasneti_semaphore_destroy(&sema2);
}
/* ------------------------------------------------------------------------------------ */
#if GASNETI_HAVE_ATOMIC128_T
static void atomic128_test(int id) {
  char _var128[16 + GASNETI_HAVE_ATOMIC128_T - 1]; /* Space for var128 + alignment padding */
  gasneti_atomic128_t *var128 = (gasneti_atomic128_t *)
          (((uintptr_t)_var128 + GASNETI_HAVE_ATOMIC128_T - 1) & ~(GASNETI_HAVE_ATOMIC128_T - 1));
  uint64_t readhi, readlo;
  const uint64_t one64 = 1;
  int i;

  TEST_HEADER("128-bit atomic CAS test"); else return;

  gasneti_atomic128_set(var128, 0, 2*iters, 0);
  gasneti_atomic128_read(&readhi, &readlo, var128,0);
  if ((readlo != (uint64_t)(2*iters)) || readhi)
    ERR("gasneti_atomic128_set/gasneti_atomic128_read got wrong value (lo half)");

  gasneti_atomic128_set(var128, 2*iters, 0, 0);
  gasneti_atomic128_read(&readhi, &readlo, var128,0);
  if ((readhi != (uint64_t)(2*iters)) || readlo)
    ERR("gasneti_atomic128_set/gasneti_atomic128_read got wrong value (hi half)");

  /* single bit-marching tests */
  for (i=0;i<128;i++) {
    const uint64_t tmplo = (i < 64) ? (one64<<i) : 0;
    const uint64_t tmphi = (i >= 64) ? (one64<<(i-64)) : 0;

    gasneti_atomic128_set(var128, tmphi, tmplo, 0);
    gasneti_atomic128_read(&readhi, &readlo, var128, 0);
    if ((readlo != tmplo) || (readhi != tmphi))
      ERR("gasneti_atomic128_set/gasneti_atomic128_read got wrong value on bit %i", i);
    if (gasneti_atomic128_compare_and_swap(var128, 0, 0, tmphi, tmplo, 0))
      ERR("gasneti_atomic128_compare_and_swap succeeded at bit %i when it should have failed", i);
    if (!gasneti_atomic128_compare_and_swap(var128, tmphi, tmplo, 0, 0, 0))
      ERR("gasneti_atomic128_compare_and_swap failed at bit %i when it should have succeeded", i);
  }

  /* double bit-marching tests */
  for (i=0;i<128;i++) {
    int j;
    for (j=0;j<i;j++) {
      const uint64_t tmplo_i = (i < 64) ? (one64<<i) : 0;
      const uint64_t tmphi_i = (i >= 64) ? (one64<<(i-64)) : 0;
      const uint64_t tmplo_j = (j < 64) ? (one64<<j) : 0;
      const uint64_t tmphi_j = (j >= 64) ? (one64<<(j-64)) : 0;
      const uint64_t tmplo = tmplo_i | tmplo_j;
      const uint64_t tmphi = tmphi_i | tmphi_j;

      gasneti_atomic128_set(var128, tmphi, tmplo, 0);
      if (gasneti_atomic128_compare_and_swap(var128, tmphi_i, tmplo_i, tmphi, tmplo, 0) ||
          gasneti_atomic128_compare_and_swap(var128, tmphi_j, tmplo_j, tmphi, tmplo, 0))
        ERR("gasneti_atomic128_compare_and_swap succeeded at bits %i and %i when it should have failed", i, j);
    }
  }

  gasneti_atomic128_set(var128, iters, 0, 0);
  for (i=0;i<iters;i++) {
    if (gasneti_atomic128_compare_and_swap(var128, iters+i-1, i-1, iters+i-2, i-2, 0))
      ERR("gasneti_atomic128_compare_and_swap succeeded at i=%i when it should have failed", i);
    if (gasneti_atomic128_compare_and_swap(var128, iters+i+1, i+1, iters+i-2, i-2, 0))
      ERR("gasneti_atomic128_compare_and_swap succeeded at i=%i when it should have failed", i);
    gasneti_atomic128_read(&readhi, &readlo,var128,0);
    if (((int)readhi != iters+i) || ((int)readlo != i))
      ERR("gasneti_atomic128_compare_and_swap altered value when it should not have at i=%i", i);
    if (!gasneti_atomic128_compare_and_swap(var128, iters+i, i, iters+i+1, i+1, 0))
      ERR("gasneti_atomic128_compare_and_swap failed at i=%i when it should have succeeded", i);
    gasneti_atomic128_read(&readhi, &readlo, var128,0);
    if (((int)readhi != iters+i+1) || ((int)readlo != i+1))
      ERR("gasneti_atomic128_compare_and_swap set wrong updated value at i=%i", i);
  }
}
#else
static void atomic128_test(int id) {
  TEST_HEADER("128-bit atomic test - SKIPPED"); else return;
}
#endif
/* ------------------------------------------------------------------------------------ */
static void lifo_test(int id) {
  static gasneti_lifo_head_t lifo1 = GASNETI_LIFO_INITIALIZER;
  static gasneti_lifo_head_t lifo2;
  static gasneti_atomic_t counter;
  int count = iters2 / num_threads;
  int limit = MIN(1000000, num_threads * count);
  int i;

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("lifo test"); else return;

  { 
    void * tmp = test_malloc(sizeof(void *));
    for (i = 0; i < count; ++i) {
      gasneti_lifo_push(&lifo1, tmp);
      tmp = gasneti_lifo_pop(&lifo1);
      if (tmp == NULL)
        ERR("failed lifo test: 1-each pop/push test failed at iteration %d", i);
    }
    PTHREAD_BARRIER(num_threads); /* See bug 2711 */
    test_free(tmp);
  }

#if 0 /* Redundant due to barrier inserted for bug2711 */
  PTHREAD_BARRIER(num_threads);
#endif
    if (!id) {
      gasneti_lifo_init(&lifo2);

      for (i = 0; i < limit; ++i)
	gasneti_lifo_push(&lifo1, test_malloc(sizeof(void *)));

      for (i = 0; i < limit; ++i) {
	void * tmp = gasneti_lifo_pop(&lifo1);
	if (tmp == NULL)
          ERR("failed lifo test: push/pop test failed");
	gasneti_lifo_push(&lifo2, tmp);
      }
      if (gasneti_lifo_pop(&lifo1) != NULL)
        ERR("failed lifo test: push/pop test failed");

      for (i = 0; i < limit; ++i) {
	void * tmp = gasneti_lifo_pop(&lifo2);
	if (tmp == NULL)
          ERR("failed lifo test: push/pop test failed");
	gasneti_lifo_push(&lifo1, tmp);
      }
      if (gasneti_lifo_pop(&lifo2) != NULL)
        ERR("failed lifo test: push/pop test failed");

      gasneti_lifo_destroy(&lifo2);
      gasneti_lifo_init(&lifo2);

      gasneti_atomic_set(&counter, 0, 0);
    }

  PTHREAD_BARRIER(num_threads);

    for (i=0;i<count;i++) {
      void * tmp = gasneti_lifo_pop(&lifo1);
      if (tmp != NULL) {
        gasneti_lifo_push(&lifo2, tmp);
	gasneti_atomic_increment(&counter, 0);
      }
    }

  PTHREAD_BARRIER(num_threads);

    if ((gasneti_lifo_pop(&lifo1) != NULL) || (gasneti_atomic_read(&counter, 0) != limit))
      ERR("failed lifo test: push/pop pounding test failed");

  PTHREAD_BARRIER(num_threads);

  {
    void * head = NULL;

    for (i=0;i<count;i++) {
      void * tmp = gasneti_lifo_pop(&lifo2);
      if (tmp != NULL) {
	*(void **)tmp = head;
	head = tmp;
	gasneti_atomic_decrement(&counter, 0);
      }
    }

    PTHREAD_BARRIER(num_threads); /* Barrier before free() for bug 2711 */
    while (head != NULL) {
      void * next = *(void **)head;
      test_free(head);
      head = next;
    }
  }

#if 0 /* Redundant due to barrier inserted for bug2711 */
  PTHREAD_BARRIER(num_threads);
#endif

    if ((gasneti_lifo_pop(&lifo2) != NULL) || (gasneti_atomic_read(&counter, 0) != 0))
      ERR("failed lifo test: push/pop pounding test failed");

  PTHREAD_BARRIER(num_threads);
    if (!id) gasneti_lifo_destroy(&lifo2);
}
/* ------------------------------------------------------------------------------------ */
static int pf_cnt_boolean, pf_cnt_counted;
static gex_HSL_t pf_lock = GEX_HSL_INITIALIZER;
static gasneti_weakatomic_t progressfn_req_sent = gasneti_weakatomic_init(0);
static gasneti_weakatomic_t progressfn_rep_rcvd = gasneti_weakatomic_init(0);
static gex_Event_t pf_events[2];
static int pf_event_cnt = (sizeof(pf_events) / sizeof(gex_Event_t));
static void progressfn_reqh(gex_Token_t token, void *buf, size_t nbytes) {
  // TODO-EX: nbytes = MIN(nbytes, gex_AM_MaxReplyMedium(..., GEX_EVENT_NOW, 0, 0));
  nbytes = MIN(nbytes, gex_AM_LUBReplyMedium()); /* In case Reply size smaller than Request */
  gex_AM_ReplyMedium0(token, gasneti_diag_hidx_base + 1, buf, nbytes, GEX_EVENT_NOW, 0);
}
static void progressfn_reph(gex_Token_t token, void *buf, size_t nbytes) {
  gasneti_weakatomic_increment(&progressfn_rep_rcvd,0);
}
static void progressfn_tester(int *counter) {
  static int active = 0; /* protocol provides mutual exclusion & recursion protection */
  int iamactive = 0;
  gex_HSL_Lock(&pf_lock);
    (*counter)++;
    if (!active) { active = 1; iamactive = 1; }
  gex_HSL_Unlock(&pf_lock);
  if (!iamactive) return;

  /* do some work that should be legal inside a progress fn */
  { static int tmp;
    // The outer context in progressfns_test() is performing RMA operations
    // which reference only the bottom halves of our segment and of the
    // peer's segment.  So, we subdivide the upper halves of each segment
    // into four disjoint regions for use as source and destination buffers.
    const size_t region_len = TEST_SEGSZ/8;
    char *loc_src = (char *)myseg   + TEST_SEGSZ/2;
    char *loc_dst = (char *)myseg   + TEST_SEGSZ/2 +   region_len;
    char *rem_src = (char *)peerseg + TEST_SEGSZ/2 + 2*region_len;
    char *rem_dst = (char *)peerseg + TEST_SEGSZ/2 + 3*region_len;

    gex_Event_TestSome(pf_events, pf_event_cnt, 0);
    if (pf_events[0] == GEX_EVENT_INVALID) {
      tmp = *(int *)loc_src; // ensures same data if concurrent w/ the PutNBI below
      pf_events[0] = gex_RMA_PutNB(myteam, peer, rem_dst, &tmp, sizeof(tmp), GEX_EVENT_NOW, 0);
    }
    if (pf_events[1] == GEX_EVENT_INVALID) {
      // Note _allowrecursion=1, since may run w/i client's access region
      const size_t max_sz = MIN(128*1024,region_len);
      gasnete_begin_nbi_accessregion(0,1 GASNETI_THREAD_GET);
      for (size_t sz = 1; sz <= max_sz; sz = (sz < 64?sz*2:sz*8)) {
        gex_RMA_PutNBI(myteam, peer, rem_dst, loc_src, sz, GEX_EVENT_DEFER, 0);
        gex_RMA_GetNBI(myteam, loc_dst, peer, rem_src, sz, 0);
      }
      pf_events[1] = gasnete_end_nbi_accessregion(0 GASNETI_THREAD_GET);
    }
    if (gasneti_diag_havehandlers &&
        ((gasneti_weakatomic_read(&progressfn_req_sent,0) -
          gasneti_weakatomic_read(&progressfn_rep_rcvd,0)) <= 128U)) {
      const size_t max_sz = MIN(gex_AM_MaxRequestMedium(myteam, peer, GEX_EVENT_NOW, 0, 0),
                                MIN(64*1024,region_len));
      for (size_t sz = 1; sz <= max_sz; sz = (sz < 64?sz*2:sz*8)) {
        gasneti_weakatomic_increment(&progressfn_req_sent,0);
        gex_AM_RequestMedium0(myteam, peer, gasneti_diag_hidx_base + 0, loc_src, sz, GEX_EVENT_NOW, 0);
        gasneti_weakatomic_increment(&progressfn_req_sent,0);
        gex_AM_RequestLong0(myteam, peer, gasneti_diag_hidx_base + 0, loc_src, sz, rem_dst, GEX_EVENT_NOW, 0);
      }
    }
  }

  gasneti_local_mb();
  active = 0;
}
static void progressfn_bool(void) { progressfn_tester(&pf_cnt_boolean); }
static void progressfn_counted(void) { progressfn_tester(&pf_cnt_counted); }
static void progressfns_test(int id) {
#if !GASNET_DEBUG
  TEST_HEADER("progress functions test - SKIPPED"); else return;
  return;
#else
  int iter;
  TEST_HEADER("progress functions test"); else return;
  for (iter=0; iter < iters0; iter++) {
    int i;
    int cnt_c = 0, cnt_b = 0;

    PTHREAD_BARRIER(num_threads);
    gasneti_debug_progressfn_bool = progressfn_bool;
    gasneti_debug_progressfn_counted = progressfn_counted;
    pf_cnt_boolean = 0;
    pf_cnt_counted = 0;
    PTHREAD_BARRIER(num_threads);

    if (!id) GASNETI_PROGRESSFNS_ENABLE(gasneti_pf_debug_boolean,BOOLEAN);
    PTHREAD_BARRIER(num_threads);
    GASNETI_PROGRESSFNS_ENABLE(gasneti_pf_debug_counted,COUNTED);
    GASNETI_PROGRESSFNS_ENABLE(gasneti_pf_debug_counted,COUNTED);
    GASNETI_PROGRESSFNS_DISABLE(gasneti_pf_debug_counted,COUNTED);

    // do some work that should cause progress fns to run
    // these use only the lower halves of the segments
    gasneti_assert_always_uint(1024 ,<=, TEST_SEGSZ/4);
    char *loc_buf = (char *)myseg;
    char *rem_buf = (char *)peerseg + TEST_SEGSZ/4;
    for (i=0; i < 2; i++) {
      int tmp = 42;
      gex_RMA_PutBlocking(myteam, peer, rem_buf, &tmp, sizeof(tmp), 0);
      gex_RMA_GetBlocking(myteam, &tmp, peer, rem_buf, sizeof(tmp), 0);
      gex_RMA_PutBlocking(myteam, peer, rem_buf, loc_buf, 1024, 0);
      gex_RMA_GetBlocking(myteam, loc_buf, peer, rem_buf, 1024, 0);
      gasnet_AMPoll();
    }

    PTHREAD_BARRIER(num_threads);
    /* ensure they did run */
    cnt_c = pf_cnt_counted; cnt_b = pf_cnt_boolean;
    gasneti_assert_always(cnt_c > 0); gasneti_assert_always(cnt_b > 0);

    /* disable progress fns and quiesce the system */
    PTHREAD_BARRIER(num_threads);
    if (!id) GASNETI_PROGRESSFNS_DISABLE(gasneti_pf_debug_boolean,BOOLEAN);
    GASNETI_PROGRESSFNS_DISABLE(gasneti_pf_debug_counted,COUNTED);
    PTHREAD_BARRIER(num_threads);
    for (i=0; i < 1000; i++) { gasnet_AMPoll(); gasneti_sched_yield(); }
    if (!id) gex_Event_WaitAll(pf_events, pf_event_cnt, 0);
    PTHREAD_BARRIER(num_threads);
    cnt_c = pf_cnt_counted; cnt_b = pf_cnt_boolean;
    PTHREAD_BARRIER(num_threads);

    // (again) do some work that might cause progress fns to run
    // these use only the lower halves of the segments
    for (i=0; i < 2; i++) {
      int tmp = 42;
      gex_RMA_PutBlocking(myteam, peer, rem_buf, &tmp, sizeof(tmp), 0);
      gex_RMA_GetBlocking(myteam, &tmp, peer, rem_buf, sizeof(tmp), 0);
      gex_RMA_PutBlocking(myteam, peer, rem_buf, loc_buf, 1024, 0);
      gex_RMA_GetBlocking(myteam, loc_buf, peer, rem_buf, 1024, 0);
      gasnet_AMPoll();
    }

    PTHREAD_BARRIER(num_threads);
    /* ensure they did not run */
    gasneti_assert_always_int(cnt_c ,==, pf_cnt_counted); gasneti_assert_always_int(cnt_b ,==, pf_cnt_boolean);
  }
  GASNET_BLOCKUNTIL(gasneti_weakatomic_read(&progressfn_req_sent,0) ==
                    gasneti_weakatomic_read(&progressfn_rep_rcvd,0));
#endif
}
/* ------------------------------------------------------------------------------------ */
static void noop_reqh(gex_Token_t token, void *buf, size_t nbytes) { /* empty */ }
static void op_test(int id) {
  int iter;
  GASNET_BEGIN_FUNCTION();
  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("internal op interface test"); else return;
  size_t max_medium = gasnetc_AM_MaxRequestMedium(myteam,peer,GEX_EVENT_GROUP,0,0);
  size_t max_long = gasnetc_AM_MaxRequestLong(myteam,peer,GEX_EVENT_GROUP,0,0);
  for (iter=0; iter < iters0; iter++) {
    static const void **share = NULL;
    int peerid = ( id + 1 ) % num_threads;

    PTHREAD_BARRIER(num_threads);
    gex_NBI_Wait(GEX_EC_ALL,0);
    PTHREAD_LOCALBARRIER(num_threads);
    if (!id) share = test_malloc(sizeof(void *)*num_threads);
    PTHREAD_LOCALBARRIER(num_threads);

    { gasneti_eop_t *eop;
      gex_Event_t h;
      eop = gasneti_eop_create(GASNETI_THREAD_PASS_ALONE);
      gasneti_assert_always(eop);
      h = gasneti_eop_to_event(eop);
      gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_ERR_NOT_READY);
      share[id] = eop; /* hand-off eop to neighbor thread */
      PTHREAD_LOCALBARRIER(num_threads);
      gasneti_eop_markdone(share[peerid]); /* mark right neighbor's eop done */
      PTHREAD_LOCALBARRIER(num_threads);
      gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_OK);
    }
    PTHREAD_LOCALBARRIER(num_threads);
    { /* inc the get and put counts on my iop */
      gasneti_iop_t *iop = gasneti_iop_register(1, 0 GASNETI_THREAD_PASS);
        gasneti_assert_always(iop);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_ERR_NOT_READY);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_OK);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_ERR_NOT_READY);
        gasneti_assert_always_ptr(iop ,==, gasneti_iop_register(2, 1 GASNETI_THREAD_PASS));
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_ERR_NOT_READY);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_ERR_NOT_READY);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_ERR_NOT_READY);

      share[id] = iop; /* hand-off iop to neighbor thread */
      PTHREAD_LOCALBARRIER(num_threads);
      gasneti_iop_markdone(share[peerid], 1, 0); /* mark right neighbor's iop puts done */
      PTHREAD_LOCALBARRIER(num_threads);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_OK);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_ERR_NOT_READY);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_ERR_NOT_READY);
      PTHREAD_LOCALBARRIER(num_threads);
      gasneti_iop_markdone(share[peerid], 2, 1); /* mark right neighbor's iop gets done */
      PTHREAD_LOCALBARRIER(num_threads);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_OK);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_OK);
        gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_OK);
    }
    PTHREAD_LOCALBARRIER(num_threads);
    { int isget;
      for (isget = 0; isget <= 1; isget++) { 
        #define ASSERT_NBI_SYNCED() do {                            \
          gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_OK); \
          gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_OK); \
          gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_OK); \
        } while (0)
        #define ASSERT_NBI_NOTSYNCED() do {                                                  \
          if (isget) {                                                                       \
            gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_OK);            \
            gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_ERR_NOT_READY); \
            gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_ERR_NOT_READY); \
          } else {                                                                           \
            gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_ERR_NOT_READY); \
            gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_OK);            \
            gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_ERR_NOT_READY); \
          }                                                                                  \
        } while (0)

        gasneti_iop_t *iop1, *iop2;
        gasneti_iop_t *peer_iop1, *peer_iop2;
        ASSERT_NBI_SYNCED();
        iop1 = gasneti_iop_register(5, isget GASNETI_THREAD_PASS); /* iop1 = 5 */
        gasneti_assert_always(iop1);
        ASSERT_NBI_NOTSYNCED();
        PTHREAD_LOCALBARRIER(num_threads);
        share[id] = iop1; /* hand-off iop1 to neighbor thread */
        PTHREAD_LOCALBARRIER(num_threads);
        peer_iop1 = share[peerid];
        gasneti_iop_markdone(peer_iop1, 2, isget); /* iop1 -= 2 */
        PTHREAD_LOCALBARRIER(num_threads);
        ASSERT_NBI_NOTSYNCED();

        { /* implicit access region */
          gex_Event_t h;
          gasneti_eop_t *eop;
          gex_Event_t h2;

          gex_NBI_BeginAccessRegion(0);
          iop2 = gasneti_iop_register(1, isget GASNETI_THREAD_PASS); /* iop2 = 1 */
          gasneti_assert_always(iop2);
          gasneti_assert_always(iop2 != iop1);
          PTHREAD_LOCALBARRIER(num_threads);
          share[id] = iop2; /* hand-off iop2 to neighbor thread */
          PTHREAD_LOCALBARRIER(num_threads);
          peer_iop2 = share[peerid];
          gasneti_iop_markdone(peer_iop2, 1, isget);  /* iop2 -= 1 */
          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_assert_always(iop2 == gasneti_iop_register(2, isget GASNETI_THREAD_PASS)); /* iop2 += 2 */

          eop = gasneti_eop_create(GASNETI_THREAD_PASS_ALONE);
          gasneti_assert_always(eop);
          h2 = gasneti_eop_to_event(eop);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);


          h = gex_NBI_EndAccessRegion(0);
          gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_ERR_NOT_READY);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);

          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_iop_markdone(peer_iop1, 2, isget); /* iop1 -= 2 */
          PTHREAD_LOCALBARRIER(num_threads);
          ASSERT_NBI_NOTSYNCED();
          gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_ERR_NOT_READY);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);

          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_iop_markdone(peer_iop2, 1, isget); /* iop2 -= 1 */
          PTHREAD_LOCALBARRIER(num_threads);
          ASSERT_NBI_NOTSYNCED();
          gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_ERR_NOT_READY);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);

          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_iop_markdone(peer_iop1, 1, isget); /* iop1 -= 1 */
          PTHREAD_LOCALBARRIER(num_threads);
          ASSERT_NBI_SYNCED();
          gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_ERR_NOT_READY);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);

          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_assert_always_ptr(iop1 ,==, gasneti_iop_register(2, isget GASNETI_THREAD_PASS)); /* iop1 += 2 */
          ASSERT_NBI_NOTSYNCED();
          gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_ERR_NOT_READY);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);

          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_iop_markdone(peer_iop2, 1, isget); /* iop2 -= 1 */
          PTHREAD_LOCALBARRIER(num_threads);
          ASSERT_NBI_NOTSYNCED();
          gasneti_assert_always_int(gex_Event_Test(h) ,==, GASNET_OK);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);

          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_iop_markdone(peer_iop1, 2, isget); /* iop1 -= 2 */
          PTHREAD_LOCALBARRIER(num_threads);
          ASSERT_NBI_SYNCED();

          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_ERR_NOT_READY);
          share[id] = eop; /* hand-off eop to neighbor thread */
          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_eop_markdone(share[peerid]); /* mark right neighbor's eop done */
          PTHREAD_LOCALBARRIER(num_threads);
          gasneti_assert_always_int(gex_Event_Test(h2) ,==, GASNET_OK);
          ASSERT_NBI_SYNCED();

          PTHREAD_LOCALBARRIER(num_threads);
        }
      }
    }
    PTHREAD_LOCALBARRIER(num_threads);
    { // Test free of other threads' ops and subsequent reuse.
      #define RAND_EVENT(output) do {                                 \
          gasneti_eop_t *_eop;                                        \
          gasneti_iop_t *_iop;                                        \
          int _r = TEST_RAND(0,10);                                   \
          switch (_r) {                                               \
            case 0: case 1: /* IOP put or get */                      \
              gex_NBI_BeginAccessRegion(0);                           \
              _iop = gasneti_iop_register(1, _r GASNETI_THREAD_PASS); \
              (output) = gex_NBI_EndAccessRegion(0);                  \
              gasneti_iop_markdone(_iop, 1, _r);                      \
              break;                                                  \
            default: /* EOP */                                        \
              _eop = gasneti_eop_create(GASNETI_THREAD_PASS_ALONE);   \
              (output) = gasneti_eop_to_event(_eop);                  \
              gasneti_eop_markdone(_eop);                             \
              break;                                                  \
          }                                                           \
        } while(0)
      const int opcount = 252; // must be divisible by 3 and 4
      gasneti_assert_always(! (opcount%4));
      gasneti_assert_always(! (opcount%3));
      // Arrays of events (interleaved from 4 threads)
      // populated by passing around the ring of threads.
      gex_Event_t *events = test_malloc(opcount * 2 * sizeof(gex_Event_t));
      for (int j = 0; j < 4; ++j) {
        for (int i = j; i < opcount; i += 4) { RAND_EVENT(events[i]); }
        share[id] = events;
        PTHREAD_LOCALBARRIER(num_threads);
        events = (gex_Event_t *)share[peerid];
        PTHREAD_LOCALBARRIER(num_threads);
      }
      // The events are reaped in groups of 3 events to
      // get varying mixes of local and foreign events.
      for (int i = 0; i < opcount; i += 3) {
        if (TEST_RAND_ONEIN(2)) {
          gasneti_assert_always_int(gex_Event_Test(events[i+0]) ,==, GASNET_OK);
          gasneti_assert_always_int(gex_Event_Test(events[i+1]) ,==, GASNET_OK);
          gasneti_assert_always_int(gex_Event_Test(events[i+2]) ,==, GASNET_OK);
        } else {
          gasneti_assert_always_int(gex_Event_TestAll(events+i,3,0) ,==, GASNET_OK);
        }
      }
      PTHREAD_LOCALBARRIER(num_threads);
      // Issue twice the original number of ops to encourage reuse of foreign-freed ops
      for (int i = 0; i < 2*opcount; ++i) { RAND_EVENT(events[i]); }
      gasneti_assert_always_int(gex_Event_TestAll(events,2*opcount,0) ,==, GASNET_OK);
      test_free(events);
      #undef RAND_EVENT
    }
    PTHREAD_LOCALBARRIER(num_threads);
    { // Test "aop" interfaces
      gex_NBI_Wait(GEX_EC_ALL,0);
      gasneti_aop_t *aop = gasneti_aop_create(GASNETI_THREAD_PASS_ALONE);
      gasneti_aop_push(aop GASNETI_THREAD_PASS);
      gasneti_assert_always_ptr(aop ,==, gasneti_aop_pop(GASNETI_THREAD_PASS_ALONE));
      gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_OK);
      gex_Event_t ev = gasneti_aop_to_event(aop);
      gasneti_assert_always_int(gex_Event_Test(ev) ,==, GASNET_OK);
    }
    PTHREAD_LOCALBARRIER(num_threads);
    { // Test NBI fire-and-forget regions
      // Divide each segment into four disjoint regions for use as sources and destinations:
      const size_t region_len = TEST_SEGSZ/4;
      char *loc_src = (char *)myseg;
      char *loc_dst = (char *)myseg   +   region_len;
      char *rem_src = (char *)peerseg + 2*region_len;
      char *rem_dst = (char *)peerseg + 3*region_len;
      gex_NBI_Wait(GEX_EC_ALL,0);
      gasneti_begin_nbi_ff(GASNETI_THREAD_PASS_ALONE);
      const size_t max_sz = MIN(128*1024,region_len);
      for (size_t sz = 1; sz <= max_sz; sz = (sz < 64?sz*2:sz*8)) {
        gex_RMA_PutNBI(myteam, peer, rem_dst, loc_src, sz, GEX_EVENT_DEFER, 0);
        gex_RMA_GetNBI(myteam, loc_dst, peer, rem_src, sz, 0);
        if (sz <= max_medium) {
          gex_AM_RequestMedium0(myteam, peer, gasneti_diag_hidx_base + 2, loc_src, sz, GEX_EVENT_GROUP, 0);
        }
        if (sz <= max_long) {
          gex_AM_RequestLong0(myteam, peer, gasneti_diag_hidx_base + 2, loc_src, sz, rem_dst, GEX_EVENT_GROUP, 0);
        }
      }
      gasneti_end_nbi_ff(GASNETI_THREAD_PASS_ALONE);
      gasneti_assert_always_int(gex_NBI_Test(GEX_EC_PUT,0) ,==, GASNET_OK);
      gasneti_assert_always_int(gex_NBI_Test(GEX_EC_GET,0) ,==, GASNET_OK);
      gasneti_assert_always_int(gex_NBI_Test(GEX_EC_AM,0) ,==, GASNET_OK);
      gasneti_assert_always_int(gex_NBI_Test(GEX_EC_ALL,0) ,==, GASNET_OK);
    }
    PTHREAD_LOCALBARRIER(num_threads);
    if (!id) { test_free(share); share = NULL; }
  }

  // Avert you eyes.  The following call prevents this subtest from leaving
  // NBI operations in-flight that may still be modifying memory in such a way
  // as to interfere with later tests.
  // TODO: Reserve some portion of the segment for the exclusive use of the
  // fire-and-forget tests and remove this call.
  gasneti_nbi_ff_drain_(GASNETI_THREAD_PASS_ALONE);

  PTHREAD_BARRIER(num_threads);
}
/* ------------------------------------------------------------------------------------ */
#if GASNET_PAR

static void * thread_fn(void *arg) {
  int test_errs = 0;
  int id = (int)(uintptr_t)arg;

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("gasneti_mutex_t test") mutex_test(id);

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("gasneti_cond_t test") cond_test(id);

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("gasneti_rwlock_t test") rwlock_test(id);

  PTHREAD_BARRIER(num_threads);
  spinlock_test(id);

  PTHREAD_BARRIER(num_threads);
  semaphore_test(id);

  PTHREAD_BARRIER(num_threads);
  lifo_test(id);

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("malloc test") malloc_test(id);
  
  PTHREAD_BARRIER(num_threads);
  progressfns_test(id);

  PTHREAD_BARRIER(num_threads);
  op_test(id);

  PTHREAD_BARRIER(num_threads);
  TEST_HEADER("conduit tests") {
    PTHREAD_BARRIER(num_threads);
    test_errs += GASNETC_RUN_DIAGNOSTICS_PAR(iters,id,num_threads);
    PTHREAD_BARRIER(num_threads);
    test_errs += GASNETE_RUN_DIAGNOSTICS_PAR(iters,id,num_threads);
  }
  PTHREAD_BARRIER(num_threads);

  return (void *)(uintptr_t)test_errs;
}
#endif

/* ------------------------------------------------------------------------------------ */

#if HAVE_SSH_SPAWNER || HAVE_MPI_SPAWNER || HAVE_PMI_SPAWNER || GASNET_CONDUIT_SMP
extern gasneti_spawnerfn_t const *gasneti_spawner;
static void spawner_test(void) {
  if (!gasneti_spawner) {
    TEST_HEADER("bootstrap functions test - SKIPPED"); else return;
    return;
  } else {
    TEST_HEADER("bootstrap functions test"); else return;
  }

  int iters1 = MAX(5,MIN(50,iters/100));

  #define DATUM_SZ 32
  typedef uint8_t datum_t[DATUM_SZ];
  #define INIT_DATUM(datum,iter,node,sz) do { \
      uint8_t val = (iter) ^ (node) ^ (sz);       \
      for (int lcv = 0; lcv < sz; ++lcv, ++val) { \
        (datum)[lcv] = val;                       \
      }                                           \
    } while (0)
  #define CHECK_DATUM(datum,iter,node,sz,name) do { \
      uint8_t val = (iter) ^ (node) ^ (sz);       \
      for (int lcv = 0; lcv < sz; ++lcv, ++val) { \
        if ((datum)[lcv] != val) {                \
          MSG("ERROR: %s test failed at sz=%d", name, (int)sz); \
          test_errs += 1;                            \
          break;                                     \
        }                                            \
      }                                              \
    } while (0)
  datum_t my_datum, other_datum;
  datum_t *all_data = gasneti_calloc(gasneti_nodes, sizeof(datum_t));

  // Frequent Cleanup calls will check that each operation works correctly after one.
  // Additionally, here we make sure back-to-back calls are safe
  gasneti_spawner->Cleanup();
  gasneti_spawner->Cleanup();

  { // Barrier
    // Using RMA to (weakly) validate barrier correctness
    // Lack of progress (both RMA and AM) in bootstrap ops constrains what we can do.
    char * mysegmid = (char *)myseg + TEST_SEGSZ/2;
    int once = 0;
    gex_Rank_t tmp = gasneti_mynode;
    for (int i = 0; i < iters1; ++i, ++tmp) {
      *(gex_Rank_t *)myseg = tmp;
      gasneti_spawner->Barrier();
      gex_Rank_t val = gex_RMA_GetBlockingVal(myteam, peer, peerseg, sizeof(val), 0);
      gex_Event_t ev = gex_Coll_BarrierNB(myteam, 0);
      if (val != peer + i) {
        if (!once) {
          MSG("ERROR: Barrier test failed");
          test_errs += 1;
          once = 1;
        }
      }
      gex_Event_Wait(ev); // ensure peer's Get completes before next bootstrap barrier
    }
    // back-to-back barriers
    for (int i = 0; i < iters1; ++i) {
      gasneti_spawner->Barrier();
    }
  }

  gasneti_spawner->Cleanup();

  { // Broadcast
    gex_Rank_t step = MAX(1, gasneti_nodes / iters1);
    for (int i = 0; i < iters1; ++i) {
      gex_Rank_t root = (step * i) % gasneti_nodes;
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        INIT_DATUM(my_datum, i, gasneti_mynode, sz);
        gasneti_spawner->Broadcast(my_datum, sz, other_datum, root);
        CHECK_DATUM(other_datum, i, root, sz, "Broadcast");
      }
    }
  }

  { // Broadcast (in-place)
    gex_Rank_t step = MAX(1, gasneti_nodes / iters1);
    for (int i = 0; i < iters1; ++i) {
      gex_Rank_t root = (step * i) % gasneti_nodes;
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        INIT_DATUM(other_datum, i, gasneti_mynode, sz);
        gasneti_spawner->Broadcast(other_datum, sz, other_datum, root);
        CHECK_DATUM(other_datum, i, root, sz, "Broadcast (in-place)");
      }
    }
  }

  gasneti_spawner->Cleanup();

  { // NbrhdBroadcast
    // We need a constant number of iterations for this collective call.
    // However, gasneti_nodemap_local_count is not always single-valued.
    // So this could double-test some roots
    for (int i = 0; i < iters1; ++i) {
      gex_Rank_t root = gasneti_nodemap_local[i % gasneti_nodemap_local_count];
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        INIT_DATUM(my_datum, i, gasneti_mynode, sz);
        gasneti_spawner->NbrhdBroadcast(my_datum, sz, other_datum, root);
        CHECK_DATUM(other_datum, i, root, sz, "NbrhdBroadcast");
      }
    }
  }

  { // NbrhdBroadcast (in-place)
    for (int i = 0; i < iters1; ++i) {
      gex_Rank_t root = gasneti_nodemap_local[i % gasneti_nodemap_local_count];
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        INIT_DATUM(other_datum, i, gasneti_mynode, sz);
        gasneti_spawner->NbrhdBroadcast(other_datum, sz, other_datum, root);
        CHECK_DATUM(other_datum, i, root, sz, "NbrhdBroadcast (in-place)");
      }
    }
  }

  gasneti_spawner->Cleanup();

  { // HostBroadcast
    // We need a constant number of iterations for this collective call.
    // However, gasneti_myhost.node_count is not always single-valued.
    // So this could double-test some roots
    for (int i = 0; i < iters1; ++i) {
      gex_Rank_t root = gasneti_myhost.nodes[i % gasneti_myhost.node_count];
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        INIT_DATUM(my_datum, i, gasneti_mynode, sz);
        gasneti_spawner->HostBroadcast(my_datum, sz, other_datum, root);
        CHECK_DATUM(other_datum, i, root, sz, "HostBroadcast");
      }
    }
  }

  { // HostBroadcast (in-place)
    for (int i = 0; i < iters1; ++i) {
      gex_Rank_t root = gasneti_myhost.nodes[i % gasneti_myhost.node_count];
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        INIT_DATUM(other_datum, i, gasneti_mynode, sz);
        gasneti_spawner->HostBroadcast(other_datum, sz, other_datum, root);
        CHECK_DATUM(other_datum, i, root, sz, "HostBroadcast (in-place)");
      }
    }
  }

  gasneti_spawner->Cleanup();

  { // Exchange
    for (int i = 0; i < iters1; ++i) {
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        uint8_t *dst = (uint8_t *)all_data;
        INIT_DATUM(my_datum, i, gasneti_mynode, sz);
        gasneti_spawner->Exchange(my_datum, sz, all_data);
        for (int n = 0; n < gasneti_nodes; ++n, dst+=sz) {
          CHECK_DATUM(dst, i, n, sz, "Exchange");
        }
      }
    }
  }

  { // Exchange (in-place)
    for (int i = 0; i < iters1; ++i) {
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        uint8_t *dst = (uint8_t *)all_data;
        uint8_t *src = dst + sz*gasneti_mynode;
        INIT_DATUM(src, i, gasneti_mynode, sz);
        gasneti_spawner->Exchange(src, sz, all_data);
        for (int n = 0; n < gasneti_nodes; ++n, dst+=sz) {
          CHECK_DATUM(dst, i, n, sz, "Exchange (in-place)");
        }
      }
    }
  }

  gasneti_spawner->Cleanup();

  { // Alltoall
    uint8_t *src_data = gasneti_calloc(gasneti_nodes, sizeof(datum_t));
    for (int i = 0; i < iters1; ++i) {
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        for (int n = 0; n < gasneti_nodes; ++n) {
          INIT_DATUM(src_data + n*sz, i, gasneti_mynode + n*gasneti_nodes, sz);
        }
        uint8_t *dst = (uint8_t *)all_data;
        gasneti_spawner->Alltoall(src_data, sz, all_data);
        for (int n = 0; n < gasneti_nodes; ++n, dst+=sz) {
          CHECK_DATUM(dst, i, n + gasneti_mynode*gasneti_nodes, sz, "Alltoall");
        }
      }
    }
    gasneti_free(src_data);
  }

  { // Alltoall (in-place)
    uint8_t *src_data = (uint8_t *)all_data;
    for (int i = 0; i < iters1; ++i) {
      for (size_t sz = 1; sz <= sizeof(datum_t); sz *= 2) {
        for (int n = 0; n < gasneti_nodes; ++n) {
          INIT_DATUM(src_data + n*sz, i, gasneti_mynode + n*gasneti_nodes, sz);
        }
        uint8_t *dst = (uint8_t *)all_data;
        gasneti_spawner->Alltoall(src_data, sz, all_data);
        for (int n = 0; n < gasneti_nodes; ++n, dst+=sz) {
          CHECK_DATUM(dst, i, n + gasneti_mynode*gasneti_nodes, sz, "Alltoall (in-place)");
        }
      }
    }
  }

  gasneti_free(all_data);
}
#endif

/* ------------------------------------------------------------------------------------ */

static void hbarrier_test(void) {
  // Currently, this is just to ensure this little-used interface gets tested
  // TODO:
  //   + Maybe verify that barrier property holds?
  //   + Maybe verify AM progress made within this barrier?
  for (int i = 0; i < iters0; ++i) {
    gasneti_host_barrier();
  }
}

/* ------------------------------------------------------------------------------------ */

static void rexchgv_test(void) {
  uint64_t data[10];
  const size_t elem_sz = sizeof(data[0]);
  const size_t total_len = gasneti_nodes * sizeof(data);
  const int N = sizeof(data)/elem_sz;  // total values per rank
  for (int i = 0; i < N; ++i) {
    data[i] = gasneti_mynode + i * gasneti_nodes;
  }

  for (int iter = 0; iter < iters0; ++iter) {
    // Choose splits between first and second exchanges
    // First iteration is deterministic and the rest are random
    int part1, part2;
    if (!iter) {
      part1 = 0;
      part2 = N;
    } else {
      // Note that RAND() is in-sync across ranks, which we intentionally purturb
      part1 = (TEST_RAND(0,N) + gasneti_mynode) % N;
      part2 = N - part1;
    }

    uint64_t *data1, *data2;
    size_t *len1, *len2;
    size_t partial_len1, partial_len2;

    partial_len1 = gasneti_blockingRotatedExchangeV(myteam, data, part1*elem_sz, (void**)&data1, &len1);
    if (partial_len1) {
      gasneti_assert_always_uint(*len1 ,==, part1*elem_sz);
    } else {
      gasneti_assert_always(data1 == NULL);
      gasneti_assert_always(len1 == NULL);
    }

    partial_len2 = gasneti_blockingRotatedExchangeV(myteam, data+part1, part2*elem_sz, (void**)&data2, &len2);
    if (partial_len2) {
      gasneti_assert_always_uint(*len2 ,==, part2*elem_sz);
    } else {
      gasneti_assert_always(data2 == NULL);
      gasneti_assert_always(len2 == NULL);
    }

    { // Validate lengths satisfy alignment and summation properties
      gasneti_assert_always_uint(partial_len1 + partial_len2 ,==, total_len);
      gasneti_assert_always_uint(partial_len1 % elem_sz ,==, 0);
      gasneti_assert_always_uint(partial_len2 % elem_sz ,==, 0);
      size_t sum1 = 0;
      size_t sum2 = 0;
      for (gex_Rank_t i = 0; i < gasneti_nodes; ++i) {
        size_t tmp1 = len1 ? len1[i] : 0;
        gasneti_assert_always_uint(tmp1 % elem_sz ,==, 0);
        sum1 += tmp1;
        size_t tmp2 = len2 ? len2[i] : 0;
        gasneti_assert_always_uint(tmp2 % elem_sz ,==, 0);
        sum2 += tmp2;
        gasneti_assert_always_uint(tmp1 + tmp2 ,==, sizeof(data));
      }
      gasneti_assert_always_uint(partial_len1 ,==, sum1);
      gasneti_assert_always_uint(partial_len2 ,==, sum2);
    }

    { // Validate content
      uint64_t *p1 = data1;
      uint64_t *p2 = data2;
      for (gex_Rank_t i = 0; i < gasneti_nodes; ++i) {
        int count1 = len1 ? (int)(len1[i] / elem_sz) : 0;
        uint64_t want = (gasneti_mynode + i) % gasneti_nodes; // Not simply i, due to rotation
        for (int j = 0; j < count1; ++j, ++p1, want += gasneti_nodes) {
          gasneti_assert_always_uint(*p1 ,==, want);
        }
        int count2 = len2 ? (int)(len2[i] / elem_sz) : 0;
        for (int j = 0; j < count2; ++j, ++p2, want += gasneti_nodes) {
          gasneti_assert_always_uint(*p2 ,==, want);
        }
      }
    }

    gasneti_free(data1);
    gasneti_free(data2);
    gasneti_free(len1);
    gasneti_free(len2);
  }
}

/* ------------------------------------------------------------------------------------ */
#include "gasnet_vlide.h"

static void vlide_test(void) {
  // Unit test for VLIDE compression algorithm used by VIS
  // This is a purely serial test with no communication.

  // Manual knobs for testing less-important configurations:
  #if GASNETI_VLIDE_TEST_INT64
    typedef uint64_t val_t;
    typedef val_t    valint_t;
  #else
    typedef void *    val_t;
    typedef uintptr_t valint_t;
  #endif
  #if GASNETI_VLIDE_TEST_TRIVIAL
    #define VLIDE_ENCODE GASNETI_VLIDE_ENCODE_TRIVIAL
    #define VLIDE_DECODE GASNETI_VLIDE_DECODE_TRIVIAL
  #else
    #define VLIDE_ENCODE GASNETI_VLIDE_ENCODE
    #define VLIDE_DECODE GASNETI_VLIDE_DECODE
  #endif
  const int max_entries = 1000;
  val_t * const input_buffer = gasneti_malloc(max_entries*sizeof(val_t));
  uint8_t * const output_buffer = gasneti_calloc(max_entries+1,10);
  // choose an arbitrary starting point that looks like a pointer
  val_t const start = (val_t)(uintptr_t)input_buffer; 
  uint64_t dist[12] = { 0 };

  for (int iter = 0; iter < iters; iter++) {
     int entries = TEST_RAND(1,max_entries);

     // ENCODE
     val_t oldval = 0;
     val_t newval = start;
     uint8_t *p = output_buffer;
     int i = 0;
     do {
       input_buffer[i] = newval;

       // encode one entry
       uint8_t * const oldp = p;
       VLIDE_ENCODE(p, (valint_t)oldval, (valint_t)newval);
       gasneti_assert_always_ptr(p ,>, oldp);     // sanity check
       gasneti_assert_always_ptr(p ,<=, oldp+10); // sanity check
       dist[p-oldp]++; // record encoding size distribution

       // compute next random value in a rough gaussian distribution centered on val
       oldval = newval;
       int bits = TEST_RAND(TEST_RAND(0,63),63);
       uint64_t mask = ((uint64_t)-1) >> bits; // select random number of low bits
       uint64_t rword = 0; // compute a random word
       for (int j=0; j < 8; j++) {
         rword <<= 8;
         rword |= TEST_RAND(0,255);
       }
       // randomly flip some of the low bits
       newval = (val_t)(valint_t)(((uint64_t)(valint_t)newval) ^ (rword & mask));
     } while(++i < entries);
     uint8_t * const endp = p;

     // DECODE
     oldval = 0;
     newval = 0;
     p = output_buffer;
     for (i = 0; i < entries; i++) {
       uint8_t * const oldp = p;
       valint_t tmp; // tmp used to silence strict-aliasing warnings from gcc
       VLIDE_DECODE(p, (valint_t)oldval, tmp);
       newval = (val_t)tmp;
       gasneti_assert_always_ptr(p ,>, oldp);     // sanity check
       gasneti_assert_always_ptr(p ,<=, oldp+10); // sanity check

       // verify we decoded the correct value:
       gasneti_assert_always_uint((valint_t)newval ,==, (valint_t)input_buffer[i]); 

       oldval = newval;
     }
     // verify agreement on end of buffer
     gasneti_assert_always_ptr(p ,==, endp); 
  }
  #if GASNET_DEBUG_VERBOSE
  if (!gasneti_mynode) {
    uint64_t enc_sz = 0;
    uint64_t orig_sz = 0;
    MSG0("VLIDE encoding size distribution:");
    for (size_t i=0; i < sizeof(dist)/sizeof(dist[0]); i++) {
      MSG0("%2i: %8" PRIu64, (int)i, dist[i]);
      enc_sz += dist[i]*i;
      orig_sz += dist[i]*sizeof(val_t);
    }
    MSG0("VLIDE space savings: %.3f%%", 100.0*(orig_sz-enc_sz)/orig_sz);
  }
  #endif

  gasneti_free(input_buffer);
  gasneti_free(output_buffer);
}
/* ------------------------------------------------------------------------------------ */
static gex_AM_Entry_t gasneti_diag_handlers[] = {
  #ifdef GASNETC_DIAG_HANDLERS
    GASNETC_DIAG_HANDLERS(), /* should start at gasnetc_diag_hidx_base */
  #endif
  #ifdef GASNETE_DIAG_HANDLERS
    GASNETE_DIAG_HANDLERS(), /* should start at gasnete_diag_hidx_base */
  #endif

  { gasneti_diag_hidx_base + 0, (gex_AM_Fn_t)progressfn_reqh, GEX_FLAG_AM_REQUEST|GEX_FLAG_AM_MEDLONG, 0 },
  { gasneti_diag_hidx_base + 1, (gex_AM_Fn_t)progressfn_reph, GEX_FLAG_AM_REPLY|GEX_FLAG_AM_MEDIUM, 0 },
  { gasneti_diag_hidx_base + 2, (gex_AM_Fn_t)noop_reqh, GEX_FLAG_AM_REQUEST|GEX_FLAG_AM_MEDLONG, 0 }
};


void gasneti_diagnostic_gethandlers(gex_AM_Entry_t **htable, int *htable_cnt) {
  assert(htable && htable_cnt);
  *htable = gasneti_diag_handlers;
  *htable_cnt = (int)(sizeof(gasneti_diag_handlers)/sizeof(gex_AM_Entry_t));
  gasneti_diag_havehandlers = 1;
}

