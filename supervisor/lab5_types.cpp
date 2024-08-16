/* --- Generated the 6/5/2024 at 10:50 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. apr. 9 8:4:33 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts lab5.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lab5_types.h"

Lab5__st Lab5__st_of_string(char* s) {
  if ((strcmp(s, "St_WhiteLineInit")==0)) {
    return Lab5__St_WhiteLineInit;
  };
  if ((strcmp(s, "St_Stop")==0)) {
    return Lab5__St_Stop;
  };
  if ((strcmp(s, "St_RightPark")==0)) {
    return Lab5__St_RightPark;
  };
  if ((strcmp(s, "St_Right")==0)) {
    return Lab5__St_Right;
  };
  if ((strcmp(s, "St_NextParkingBlock")==0)) {
    return Lab5__St_NextParkingBlock;
  };
  if ((strcmp(s, "St_LeftPark")==0)) {
    return Lab5__St_LeftPark;
  };
  if ((strcmp(s, "St_Left")==0)) {
    return Lab5__St_Left;
  };
  if ((strcmp(s, "St_InitBlackLine")==0)) {
    return Lab5__St_InitBlackLine;
  };
  if ((strcmp(s, "St_HardRight")==0)) {
    return Lab5__St_HardRight;
  };
  if ((strcmp(s, "St_HardLeft")==0)) {
    return Lab5__St_HardLeft;
  };
  if ((strcmp(s, "St_ForwardBlack")==0)) {
    return Lab5__St_ForwardBlack;
  };
  if ((strcmp(s, "St_FollowLine")==0)) {
    return Lab5__St_FollowLine;
  };
  if ((strcmp(s, "St_FollowBlackLine")==0)) {
    return Lab5__St_FollowBlackLine;
  };
  if ((strcmp(s, "St_DetectObsticles")==0)) {
    return Lab5__St_DetectObsticles;
  };
  if ((strcmp(s, "St_Block")==0)) {
    return Lab5__St_Block;
  };
  if ((strcmp(s, "St_Backward")==0)) {
    return Lab5__St_Backward;
  };
}

char* string_of_Lab5__st(Lab5__st x, char* buf) {
  switch (x) {
    case Lab5__St_WhiteLineInit:
      strcpy(buf, "St_WhiteLineInit");
      break;
    case Lab5__St_Stop:
      strcpy(buf, "St_Stop");
      break;
    case Lab5__St_RightPark:
      strcpy(buf, "St_RightPark");
      break;
    case Lab5__St_Right:
      strcpy(buf, "St_Right");
      break;
    case Lab5__St_NextParkingBlock:
      strcpy(buf, "St_NextParkingBlock");
      break;
    case Lab5__St_LeftPark:
      strcpy(buf, "St_LeftPark");
      break;
    case Lab5__St_Left:
      strcpy(buf, "St_Left");
      break;
    case Lab5__St_InitBlackLine:
      strcpy(buf, "St_InitBlackLine");
      break;
    case Lab5__St_HardRight:
      strcpy(buf, "St_HardRight");
      break;
    case Lab5__St_HardLeft:
      strcpy(buf, "St_HardLeft");
      break;
    case Lab5__St_ForwardBlack:
      strcpy(buf, "St_ForwardBlack");
      break;
    case Lab5__St_FollowLine:
      strcpy(buf, "St_FollowLine");
      break;
    case Lab5__St_FollowBlackLine:
      strcpy(buf, "St_FollowBlackLine");
      break;
    case Lab5__St_DetectObsticles:
      strcpy(buf, "St_DetectObsticles");
      break;
    case Lab5__St_Block:
      strcpy(buf, "St_Block");
      break;
    case Lab5__St_Backward:
      strcpy(buf, "St_Backward");
      break;
    default:
      break;
  };
  return buf;
}

