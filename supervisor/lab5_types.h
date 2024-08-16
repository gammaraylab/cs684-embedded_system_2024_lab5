/* --- Generated the 6/5/2024 at 10:50 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. apr. 9 8:4:33 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts lab5.ept --- */

#ifndef LAB5_TYPES_H
#define LAB5_TYPES_H

#include "stdbool.h"
#include "assert.h"
//#include "pervasives.h"
typedef enum {
  Lab5__St_WhiteLineInit,
  Lab5__St_Stop,
  Lab5__St_RightPark,
  Lab5__St_Right,
  Lab5__St_NextParkingBlock,
  Lab5__St_LeftPark,
  Lab5__St_Left,
  Lab5__St_InitBlackLine,
  Lab5__St_HardRight,
  Lab5__St_HardLeft,
  Lab5__St_ForwardBlack,
  Lab5__St_FollowLine,
  Lab5__St_FollowBlackLine,
  Lab5__St_DetectObsticles,
  Lab5__St_Block,
  Lab5__St_Backward
} Lab5__st;

Lab5__st Lab5__st_of_string(char* s);

char* string_of_Lab5__st(Lab5__st x, char* buf);

static const long Lab5__waitSteps = 400;

static const long Lab5__maxSen0 = 772;

static const long Lab5__maxSen1 = 879;

static const long Lab5__maxSen2 = 789;

static const long Lab5__maxSen3 = 766;

static const long Lab5__maxSen4 = 941;

static const long Lab5__minSen0 = 290;

static const long Lab5__minSen1 = 360;

static const long Lab5__minSen2 = 320;

static const long Lab5__minSen3 = 310;

static const long Lab5__minSen4 = 415;

static const long Lab5__w0 = 14;

static const long Lab5__w1 = 28;

static const long Lab5__full = 8400;

static const long Lab5__half = 4200;

static const long Lab5__lineUpThres = 1000;

static const long Lab5__lineDownThres = -1000;

static const long Lab5__leftThres = -800;

static const long Lab5__rightThres = 800;

static const long Lab5__midThres = 400;

static const long Lab5__maxVal = 1024;

static const long Lab5__lengthOfParking = 895;

static const long Lab5__parkingRadius = 730;

static const long Lab5__hardTurn = 260;

#endif // LAB5_TYPES_H
