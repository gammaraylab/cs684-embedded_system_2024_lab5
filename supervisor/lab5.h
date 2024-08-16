/* --- Generated the 6/5/2024 at 10:50 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. apr. 9 8:4:33 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts lab5.ept --- */

#ifndef LAB5_H
#define LAB5_H

#include "lab5_types.h"
typedef struct Lab5__getNormal_out {
  long b0;
  long b1;
  long b2;
  long b3;
  long b4;
} Lab5__getNormal_out;

void Lab5__getNormal_step(long sen0, long sen1, long sen2, long sen3, long sen4,
                          Lab5__getNormal_out* _out);

typedef struct Lab5__getNormalBlack_out {
  long b0;
  long b1;
  long b2;
  long b3;
  long b4;
} Lab5__getNormalBlack_out;

void Lab5__getNormalBlack_step(long sen0, long sen1, long sen2, long sen3,
                               long sen4, Lab5__getNormalBlack_out* _out);

typedef struct Lab5__main_mem {
  long v_56;
  long v_54;
  long v_61;
  long v_59;
  long v_66;
  long v_64;
  long v_92;
  long v_90;
  long v_110;
  long v_108;
  long v_117;
  long v_115;
  long v_124;
  long v_122;
  long v_210;
  long v_208;
  Lab5__st ck;
  long pnr;
  long totalSteps_1;
  long rightFull_1;
  long leftFull_1;
  long trn_1;
  long count_1;
} Lab5__main_mem;

typedef struct Lab5__main_out {
  long v_l;
  long v_r;
  long dir;
} Lab5__main_out;

void Lab5__main_reset(Lab5__main_mem* self);

void Lab5__main_step(long sen0, long sen1, long sen2, long sen3, long sen4,
                     long startPos, long leftIR, long rightIR,
                     Lab5__main_out* _out, Lab5__main_mem* self);

#endif // LAB5_H
