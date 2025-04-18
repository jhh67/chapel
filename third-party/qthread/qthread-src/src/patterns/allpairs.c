#include <stdio.h>  /* for printf */
#include <stdlib.h> /* for malloc() */

#include <unistd.h> /* for getpagesize() */

#include <qthread/allpairs.h>
#include <qthread/qdqueue.h>
#include <qthread/qthread.h>

#include "qt_alloc.h"
#include "qt_asserts.h"
#include "qt_macros.h"

// #define QTHREAD_TRACK_DISTANCES
#ifdef QTHREAD_TRACK_DISTANCES
struct cacheline_s {
  aligned_t i;
  char block[qthread_cacheline() - sizeof(aligned_t)];
} __attribute__((packed));

struct cacheline_s *distances = NULL;
#endif

// #define QTHREAD_USE_HALFWAYARRAY
#ifdef QTHREAD_USE_HALFWAYARRAY
qthread_shepherd_id_t **halfway = NULL;
// unsigned int ** halfway_dist = NULL;
// aligned_t mindistances = 0;
// aligned_t stolen_work = 0;
// aligned_t stealing_penalty = 0;
#endif

union distfuncunion {
  dist_f d;
  dist_out_f od;
};

struct qt_ap_wargs {
  qdqueue_t *restrict work_queue;
  const union distfuncunion f;
  int const outfunc_style;
  aligned_t *restrict const no_more_work;
  aligned_t *restrict const donecount;
  qarray const *a1;
  qarray const *a2;
  void *restrict *restrict output;
  size_t const outsize;
};

struct qt_ap_workunit {
  size_t a1_start, a1_stop, a2_start, a2_stop;
};

static aligned_t qt_ap_worker(void *restrict args_void) {
  struct qt_ap_wargs *args = (struct qt_ap_wargs *)args_void;
  while (1) {
    struct qt_ap_workunit *restrict const wu =
      qdqueue_dequeue(args->work_queue);
    if (wu == NULL) {
      if (args->no_more_work) {
        MACHINE_FENCE;
        qthread_incr(args->donecount, 1);
        break;
      }
      qthread_yield();
    } else {
      char *a1_base = qarray_elem_nomigrate(args->a1, wu->a1_start);
      char *a2_base = qarray_elem_nomigrate(args->a2, wu->a2_start);
      size_t const a1_usize = args->a1->unit_size;
      size_t const a2_usize = args->a2->unit_size;
      size_t a1_i;

#ifdef QTHREAD_TRACK_DISTANCES
      {
        qthread_shepherd_id_t const shep = qthread_shep();
        qthread_shepherd_id_t const a1_shep =
          qarray_shepof(args->a1, wu->a1_start);
        qthread_shepherd_id_t const a2_shep =
          qarray_shepof(args->a2, wu->a2_start);
        unsigned int const cur_dist =
          qthread_distance(shep, a1_shep) + qthread_distance(shep, a2_shep);
        /*if (shep != halfway[a1_shep][a2_shep]) {
         * qthread_incr(&stolen_work, 1);
         * qthread_incr(&stealing_penalty, cur_dist -
         * halfway_dist[a1_shep][a2_shep]);
         * } */
        distances[shep].i += cur_dist;
      }
#endif /* ifdef QTHREAD_TRACK_DISTANCES */
      if (args->outfunc_style == 1) {
        dist_out_f const f = args->f.od;

        if (args->output == NULL) {
          for (a1_i = 0; a1_i < (wu->a1_stop - wu->a1_start); a1_i++) {
            char *restrict this_a1_base = a1_base + (a1_i * a1_usize);
            size_t a2_i;

            for (a2_i = 0; a2_i < (wu->a2_stop - wu->a2_start); a2_i++) {
              f(this_a1_base, a2_base + (a2_i * a2_usize), NULL);
            }
          }
        } else {
          for (a1_i = 0; a1_i < (wu->a1_stop - wu->a1_start); a1_i++) {
            char *restrict this_a1_base = a1_base + (a1_i * a1_usize);
            char *restrict this_outbase = args->output[a1_i + wu->a1_start];
            size_t a2_i;

            for (a2_i = 0; a2_i < (wu->a2_stop - wu->a2_start); a2_i++) {
              f(this_a1_base,
                a2_base + (a2_i * a2_usize),
                this_outbase + ((a2_i + wu->a2_start) * args->outsize));
            }
          }
        }
      } else {
        dist_f const f = args->f.d;

        for (a1_i = 0; a1_i < (wu->a1_stop - wu->a1_start); a1_i++) {
          char *restrict this_a1_base = a1_base + (a1_i * a1_usize);
          size_t a2_i;

          for (a2_i = 0; a2_i < (wu->a2_stop - wu->a2_start); a2_i++) {
            f(this_a1_base, a2_base + (a2_i * a2_usize));
          }
        }
      }
      FREE(wu, sizeof(struct qt_ap_workunit));
    }
  }
  return 0;
}

struct qt_ap_gargs {
  qdqueue_t *const wq;
  qarray const *restrict array2;
};

struct qt_ap_gargs2 {
  qdqueue_t *const wq;
  size_t const start, stop;
  qthread_shepherd_id_t const shep;
};

static void qt_ap_genwork2(size_t const startat,
                           size_t const stopat,
                           qarray *Q_UNUSED(a),
                           void *gargs_void) {
  struct qt_ap_gargs2 *gargs = (struct qt_ap_gargs2 *)gargs_void;
  struct qt_ap_workunit *workunit = MALLOC(sizeof(struct qt_ap_workunit));

  qthread_shepherd_id_t const shep = gargs->shep;
  qthread_shepherd_id_t const maxsheps = qthread_num_shepherds();

  workunit->a1_start = gargs->start;
  workunit->a1_stop = gargs->stop;
  workunit->a2_start = startat;
  workunit->a2_stop = stopat;

  /* Find distance of gargs shep */
  if ((maxsheps == 1) ||
      (shep == qthread_shep()) /* both remote and local on same place */) {
    qdqueue_enqueue(gargs->wq, workunit);
    // qthread_incr(&mindistances, halfway_dist[qthread_shep()][shep]);
  } else {
#if 0
        /* option 1: trivial, probably bad */
        qdqueue_enqueue_there(gargs->wq, workunit, 0);
#elif 0
    /* option 2: random, probably bad */
    qdqueue_enqueue_there(gargs->wq, workunit, random() % maxsheps);
#elif 1
    /* option 3: random selection of the two, maybe good */
    qthread_shepherd_id_t s;
    if (random() % 2) {
      s = shep;
    } else {
      s = qthread_shep();
    }
    qdqueue_enqueue_there(gargs->wq, workunit, s);
#elif 0
    /* option 4: the "halfway" idea */
    unsigned int i;
    qthread_shepherd_id_t const *neighbors = qthread_sorted_sheps(me);

    for (i = 0; i < maxsheps; i++) {
      if (neighbors[i] == shep) { break; }
    }
    i /= 2;
    qdqueue_enqueue_there(gargs->wq, workunit, neighbors[i]);
#elif defined(QTHREAD_USE_HALFWAYARRAY)
    /* option 5: optimal "halfway" idea */
    qdqueue_enqueue_there(gargs->wq, workunit, halfway[qthread_shep()][shep]);
    // qthread_incr(&mindistances, halfway_dist[qthread_shep()][shep]);
#endif /* if 0 */
  }
}

static void qt_ap_genwork(size_t const startat,
                          size_t const stopat,
                          qarray *restrict const Q_UNUSED(a),
                          void *restrict gargs_void) {
  struct qt_ap_gargs *gargs = (struct qt_ap_gargs *)gargs_void;
  struct qt_ap_gargs2 garg2 = {gargs->wq, startat, stopat, qthread_shep()};

  qarray_iter_constloop(
    gargs->array2, 0, gargs->array2->count, (qa_cloop_f)qt_ap_genwork2, &garg2);
}

/* The setup is this: we have two qarrays ([array1] and [array2]). We want to
 * call [distfunc] on each pair of elements. This function will produce a
 * result that is [outsize] bytes. Calling the function on each pair will
 * produce a result which is stored in the [output] 2-d array.
 *
 * To make this faster...
 * 1. We use qarray to chunk the work up into bite-size pieces
 * 2. We feed the work chunks into a qdqueue (into locations defined by the
 * average of the two input arrays)
 * 3. Per-shepherd worker threads pull out work and execute it, ideally near the
 * data they work on.
 */
static void qt_allpairs_internal(qarray const *array1,
                                 qarray const *array2,
                                 const union distfuncunion distfunc,
                                 int funcstyle,
                                 void *restrict *restrict output,
                                 size_t const outsize) {
  qthread_shepherd_id_t const max_i = qthread_num_shepherds();
  aligned_t no_more_work = 0;
  aligned_t donecount = 0;
  struct qt_ap_wargs wargs = {qdqueue_create(),
                              distfunc,
                              funcstyle,
                              &no_more_work,
                              &donecount,
                              array1,
                              array2,
                              output,
                              outsize};
  struct qt_ap_gargs gargs = {wargs.work_queue, array2};
  qthread_shepherd_id_t i;

  assert(array1);
  assert(array2);

#ifdef QTHREAD_TRACK_DISTANCES
  distances = qt_calloc(max_i, sizeof(struct cacheline_s));
  assert(distances != NULL);
#endif
#ifdef QTHREAD_USE_HALFWAYARRAY
  /* step 0: ensure halfway array is set up */
  // mindistances = 0;
  // stolen_work = 0;
  // stealing_penalty = 0;
  if (halfway == NULL) {
    qthread_shepherd_id_t *equivs =
      qt_calloc(max_i, sizeof(qthread_shepherd_id_t));
    halfway = qt_calloc(max_i, sizeof(qthread_shepherd_id_t *));
    // halfway_dist = qt_calloc(max_i, sizeof(unsigned int*));
    for (int s = 0; s < max_i; s++) {
      halfway[s] = qt_calloc(max_i, sizeof(qthread_shepherd_id_t));
      // halfway_dist[s] = qt_calloc(max_i, sizeof(unsigned int));
      for (int d = 0; d < max_i; d++) {
        /* halfway[s][d] is the shep id with the lowest total distance to both
         */
        unsigned int equiv_cnt = 0;
        unsigned int dist = qthread_distance(0, s) + qthread_distance(0, d);
        equiv_cnt = 1;
        equivs[0] = 0;
        for (int h = 1; h < max_i; h++) {
          unsigned int tmp = qthread_distance(h, s) + qthread_distance(h, d);
          if (tmp < dist) {
            dist = tmp;
            equiv_cnt = 1;
            equivs[0] = h;
          } else if (tmp == dist) {
            equivs[equiv_cnt++] = h;
          }
        }
        halfway[s][d] = equivs[random() % equiv_cnt];
        // halfway_dist[s][d] = dist;
        // printf("optimal [%i][%i]:%i from %i\n", (int)s, (int)d, (int)dist,
        // equiv_cnt);
      }
    }
    FREE(equivs, sizeof(qthread_shepherd_id_t));
  }
#endif /* ifdef QTHREAD_USE_HALFWAYARRAY */

  /* step 1: set up work queue */
  /* -- work queue set up as part of initialization stuff, above */
  /* step 2: spawn workers */
  for (i = 0; i < max_i; i++) {
    qthread_fork_to((qthread_f)qt_ap_worker, &wargs, NULL, i);
  }
  /* step 3: feed work into queue */
  qarray_iter_constloop(
    array1, 0, array1->count, (qa_cloop_f)qt_ap_genwork, &gargs);
  /* step 4: wait for the workers to get done */
  MACHINE_FENCE;
  no_more_work = 1;
  MACHINE_FENCE;
  while (donecount < max_i) { qthread_yield(); }
  qdqueue_destroy(wargs.work_queue);
#ifdef QTHREAD_TRACK_DISTANCES
  for (i = 1; i < max_i; i++) { distances[0].i += distances[i].i; }
  printf("total distances: %lu/%lu (%lu steals, %lu penalty)\n",
         (unsigned long)(distances[0].i),
         (unsigned long)mindistances,
         (unsigned long)stolen_work,
         (unsigned long)stealing_penalty);
  FREE(distances, sizeof(struct cacheline_s));
#endif
}

void API_FUNC qt_allpairs_output(qarray const *array1,
                                 qarray const *array2,
                                 dist_out_f distfunc,
                                 void *restrict *restrict output,
                                 size_t outsize) {
  union distfuncunion df;

  df.od = distfunc;
  qt_allpairs_internal(array1, array2, df, 1, output, outsize);
}

void API_FUNC
qt_allpairs(qarray const *array1, qarray const *array2, dist_f distfunc) {
  const union distfuncunion df = {distfunc};

  qt_allpairs_internal(array1, array2, df, 0, NULL, 0);
}

/* vim:set expandtab: */
