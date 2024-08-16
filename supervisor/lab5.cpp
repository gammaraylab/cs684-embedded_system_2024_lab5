/* --- Generated the 6/5/2024 at 10:50 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. apr. 9 8:4:33 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts lab5.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lab5.h"

void Lab5__getNormal_step(long sen0, long sen1, long sen2, long sen3, long sen4,
                          Lab5__getNormal_out* _out) {
  
  long v_24;
  long v_23;
  long v_22;
  long v_21;
  long v_20;
  long v_19;
  long v_18;
  long v_17;
  long v_16;
  long v_15;
  long v_14;
  long v_13;
  long v_12;
  long v_11;
  long v_10;
  long v_9;
  long v_8;
  long v_7;
  long v_6;
  long v_5;
  long v_4;
  long v_3;
  long v_2;
  long v_1;
  long v;
  v_22 = (sen4-Lab5__minSen4);
  v_23 = (1000*v_22);
  v_24 = (v_23/526);
  v_20 = (sen4-Lab5__minSen4);
  v_21 = (v_20<0);
  if (v_21) {
    _out->b4 = 0;
  } else {
    _out->b4 = v_24;
  };
  v_17 = (sen3-Lab5__minSen3);
  v_18 = (1000*v_17);
  v_19 = (v_18/456);
  v_15 = (sen3-Lab5__minSen3);
  v_16 = (v_15<0);
  if (v_16) {
    _out->b3 = 0;
  } else {
    _out->b3 = v_19;
  };
  v_12 = (sen2-Lab5__minSen2);
  v_13 = (1000*v_12);
  v_14 = (v_13/469);
  v_10 = (sen2-Lab5__minSen2);
  v_11 = (v_10<0);
  if (v_11) {
    _out->b2 = 0;
  } else {
    _out->b2 = v_14;
  };
  v_7 = (sen1-Lab5__minSen1);
  v_8 = (1000*v_7);
  v_9 = (v_8/519);
  v_5 = (sen1-Lab5__minSen1);
  v_6 = (v_5<0);
  if (v_6) {
    _out->b1 = 0;
  } else {
    _out->b1 = v_9;
  };
  v_2 = (sen0-Lab5__minSen0);
  v_3 = (1000*v_2);
  v_4 = (v_3/482);
  v = (sen0-Lab5__minSen0);
  v_1 = (v<0);
  if (v_1) {
    _out->b0 = 0;
  } else {
    _out->b0 = v_4;
  };;
}

void Lab5__getNormalBlack_step(long sen0, long sen1, long sen2, long sen3,
                               long sen4, Lab5__getNormalBlack_out* _out) {
  
  long v_53;
  long v_52;
  long v_51;
  long v_50;
  long v_49;
  long v_48;
  long v_47;
  long v_46;
  long v_45;
  long v_44;
  long v_43;
  long v_42;
  long v_41;
  long v_40;
  long v_39;
  long v_38;
  long v_37;
  long v_36;
  long v_35;
  long v_34;
  long v_33;
  long v_32;
  long v_31;
  long v_30;
  long v_29;
  long v_28;
  long v_27;
  long v_26;
  long v_25;
  long v;
  v_50 = (sen4-Lab5__minSen4);
  v_51 = (1000*v_50);
  v_52 = (v_51/526);
  v_53 = (1030-v_52);
  v_48 = (sen4-Lab5__minSen4);
  v_49 = (v_48<0);
  if (v_49) {
    _out->b4 = 1000;
  } else {
    _out->b4 = v_53;
  };
  v_44 = (sen3-Lab5__minSen3);
  v_45 = (1000*v_44);
  v_46 = (v_45/456);
  v_47 = (1030-v_46);
  v_42 = (sen3-Lab5__minSen3);
  v_43 = (v_42<0);
  if (v_43) {
    _out->b3 = 1000;
  } else {
    _out->b3 = v_47;
  };
  v_38 = (sen2-Lab5__minSen2);
  v_39 = (1000*v_38);
  v_40 = (v_39/469);
  v_41 = (1030-v_40);
  v_36 = (sen2-Lab5__minSen2);
  v_37 = (v_36<0);
  if (v_37) {
    _out->b2 = 1000;
  } else {
    _out->b2 = v_41;
  };
  v_32 = (sen1-Lab5__minSen1);
  v_33 = (1000*v_32);
  v_34 = (v_33/519);
  v_35 = (1030-v_34);
  v_30 = (sen1-Lab5__minSen1);
  v_31 = (v_30<0);
  if (v_31) {
    _out->b1 = 1000;
  } else {
    _out->b1 = v_35;
  };
  v_26 = (sen0-Lab5__minSen0);
  v_27 = (1000*v_26);
  v_28 = (v_27/482);
  v_29 = (1030-v_28);
  v = (sen0-Lab5__minSen0);
  v_25 = (v<0);
  if (v_25) {
    _out->b0 = 1000;
  } else {
    _out->b0 = v_29;
  };;
}

void Lab5__main_reset(Lab5__main_mem* self) {
  self->v_208 = true;
  self->v_122 = true;
  self->v_115 = true;
  self->v_108 = true;
  self->v_90 = true;
  self->v_64 = true;
  self->v_59 = true;
  self->v_54 = true;
  self->totalSteps_1 = 0;
  self->rightFull_1 = false;
  self->leftFull_1 = false;
  self->trn_1 = false;
  self->count_1 = 0;
  self->pnr = false;
  self->ck = Lab5__St_WhiteLineInit;
}

void Lab5__main_step(long sen0, long sen1, long sen2, long sen3, long sen4,
                     long startPos, long leftIR, long rightIR,
                     Lab5__main_out* _out, Lab5__main_mem* self) {
  Lab5__getNormalBlack_out Lab5__getNormalBlack_out_st;
  Lab5__getNormal_out Lab5__getNormal_out_st;
  
  long v_57;
  long v_55;
  long v;
  long steps_7;
  long v_62;
  long v_60;
  long v_58;
  long steps_6;
  long v_67;
  long v_65;
  long v_63;
  long steps_5;
  long v_106;
  long v_105;
  long v_104;
  long v_103;
  long v_102;
  long v_101;
  long v_100;
  long v_99;
  long v_98;
  long v_97;
  long v_96;
  long v_95;
  long v_94;
  long v_93;
  long v_91;
  long v_89;
  Lab5__st v_88;
  long v_87;
  Lab5__st v_86;
  long v_85;
  Lab5__st v_84;
  long v_83;
  long v_82;
  long v_81;
  long v_80;
  long v_79;
  long v_78;
  long v_77;
  long v_76;
  long v_75;
  long v_74;
  long v_73;
  long v_72;
  long v_71;
  long v_70;
  long v_69;
  long v_68;
  long b0_8;
  long b1_8;
  long b2_8;
  long b3_8;
  long b4_8;
  long x_4;
  long steps_4;
  long v_111;
  long v_109;
  long v_107;
  long steps_3;
  long v_118;
  long v_116;
  long v_114;
  long v_113;
  long v_112;
  long b0_7;
  long b1_7;
  long b2_7;
  long b3_7;
  long b4_7;
  long steps_2;
  long v_125;
  long v_123;
  long v_121;
  long v_120;
  long v_119;
  long b0_6;
  long b1_6;
  long b2_6;
  long b3_6;
  long b4_6;
  long steps_1;
  long v_160;
  Lab5__st v_159;
  long v_158;
  Lab5__st v_157;
  long v_156;
  Lab5__st v_155;
  long v_154;
  Lab5__st v_153;
  long v_152;
  Lab5__st v_151;
  long v_150;
  Lab5__st v_149;
  long v_148;
  long v_147;
  long v_146;
  long v_145;
  long v_144;
  long v_143;
  long v_142;
  long v_141;
  long v_140;
  long v_139;
  long v_138;
  long v_137;
  long v_136;
  long v_135;
  long v_134;
  long v_133;
  long v_132;
  long v_131;
  long v_130;
  long v_129;
  long v_128;
  long v_127;
  long v_126;
  long v_206;
  long v_205;
  long v_204;
  long v_203;
  long v_202;
  long v_201;
  long v_200;
  long v_199;
  long v_198;
  long v_197;
  long v_196;
  long v_195;
  long v_194;
  long v_193;
  long v_192;
  long v_191;
  long v_190;
  long v_189;
  long v_188;
  long v_187;
  long v_186;
  long v_185;
  long v_184;
  long v_183;
  long v_182;
  long v_181;
  long v_180;
  long v_179;
  long v_178;
  long v_177;
  long v_176;
  long v_175;
  long v_174;
  long v_173;
  long v_172;
  long v_171;
  long v_170;
  long v_169;
  long v_168;
  long v_167;
  long v_166;
  long v_165;
  long v_164;
  long v_163;
  long v_162;
  long v_161;
  long b0_5;
  long b1_5;
  long b2_5;
  long b3_5;
  long b4_5;
  long x_3;
  long v_211;
  long v_209;
  long v_207;
  long steps;
  long v_216;
  long v_215;
  long v_214;
  long v_213;
  long v_212;
  long b0_4;
  long b1_4;
  long b2_4;
  long b3_4;
  long b4_4;
  long v_240;
  long v_239;
  long v_238;
  long v_237;
  long v_236;
  long v_235;
  long v_234;
  long v_233;
  long v_232;
  long v_231;
  Lab5__st v_230;
  long v_229;
  long v_228;
  long v_227;
  long v_226;
  long v_225;
  long v_224;
  long v_223;
  long v_222;
  long v_221;
  long v_220;
  long v_219;
  long v_218;
  long v_217;
  long b0_3;
  long b1_3;
  long b2_3;
  long b3_3;
  long b4_3;
  long x_2;
  long v_264;
  long v_263;
  long v_262;
  long v_261;
  long v_260;
  long v_259;
  long v_258;
  long v_257;
  long v_256;
  long v_255;
  Lab5__st v_254;
  long v_253;
  long v_252;
  long v_251;
  long v_250;
  long v_249;
  long v_248;
  long v_247;
  long v_246;
  long v_245;
  long v_244;
  long v_243;
  long v_242;
  long v_241;
  long b0_2;
  long b1_2;
  long b2_2;
  long b3_2;
  long b4_2;
  long x_1;
  long v_308;
  long v_307;
  long v_306;
  long v_305;
  long v_304;
  long v_303;
  long v_302;
  long v_301;
  long v_300;
  long v_299;
  long v_298;
  long v_297;
  long v_296;
  long v_295;
  long v_294;
  long v_293;
  long v_292;
  long v_291;
  long v_290;
  Lab5__st v_289;
  long v_288;
  Lab5__st v_287;
  long v_286;
  Lab5__st v_285;
  long v_284;
  long v_283;
  long v_282;
  long v_281;
  long v_280;
  long v_279;
  long v_278;
  long v_277;
  long v_276;
  long v_275;
  long v_274;
  long v_273;
  long v_272;
  long v_271;
  long v_270;
  long v_269;
  long v_268;
  long v_267;
  long v_266;
  long v_265;
  long b0_1;
  long b1_1;
  long b2_1;
  long b3_1;
  long b4_1;
  long x;
  long v_317;
  long v_316;
  long v_315;
  long v_314;
  long v_313;
  long v_312;
  long v_311;
  long v_310;
  long v_309;
  long b0;
  long b1;
  long b2;
  long b3;
  long b4;
  long nr_St_Stop;
  Lab5__st ns_St_Stop;
  long totalSteps_St_Stop;
  long rightFull_St_Stop;
  long leftFull_St_Stop;
  long trn_St_Stop;
  long count_St_Stop;
  long dir_St_Stop;
  long v_r_St_Stop;
  long v_l_St_Stop;
  long nr_St_RightPark;
  Lab5__st ns_St_RightPark;
  long totalSteps_St_RightPark;
  long rightFull_St_RightPark;
  long leftFull_St_RightPark;
  long trn_St_RightPark;
  long count_St_RightPark;
  long dir_St_RightPark;
  long v_r_St_RightPark;
  long v_l_St_RightPark;
  long nr_St_LeftPark;
  Lab5__st ns_St_LeftPark;
  long totalSteps_St_LeftPark;
  long rightFull_St_LeftPark;
  long leftFull_St_LeftPark;
  long trn_St_LeftPark;
  long count_St_LeftPark;
  long dir_St_LeftPark;
  long v_r_St_LeftPark;
  long v_l_St_LeftPark;
  long nr_St_NextParkingBlock;
  Lab5__st ns_St_NextParkingBlock;
  long totalSteps_St_NextParkingBlock;
  long rightFull_St_NextParkingBlock;
  long leftFull_St_NextParkingBlock;
  long trn_St_NextParkingBlock;
  long count_St_NextParkingBlock;
  long dir_St_NextParkingBlock;
  long v_r_St_NextParkingBlock;
  long v_l_St_NextParkingBlock;
  long nr_St_DetectObsticles;
  Lab5__st ns_St_DetectObsticles;
  long totalSteps_St_DetectObsticles;
  long rightFull_St_DetectObsticles;
  long leftFull_St_DetectObsticles;
  long trn_St_DetectObsticles;
  long count_St_DetectObsticles;
  long dir_St_DetectObsticles;
  long v_r_St_DetectObsticles;
  long v_l_St_DetectObsticles;
  long nr_St_ForwardBlack;
  Lab5__st ns_St_ForwardBlack;
  long totalSteps_St_ForwardBlack;
  long rightFull_St_ForwardBlack;
  long leftFull_St_ForwardBlack;
  long trn_St_ForwardBlack;
  long count_St_ForwardBlack;
  long dir_St_ForwardBlack;
  long v_r_St_ForwardBlack;
  long v_l_St_ForwardBlack;
  long nr_St_HardRight;
  Lab5__st ns_St_HardRight;
  long totalSteps_St_HardRight;
  long rightFull_St_HardRight;
  long leftFull_St_HardRight;
  long trn_St_HardRight;
  long count_St_HardRight;
  long dir_St_HardRight;
  long v_r_St_HardRight;
  long v_l_St_HardRight;
  long nr_St_HardLeft;
  Lab5__st ns_St_HardLeft;
  long totalSteps_St_HardLeft;
  long rightFull_St_HardLeft;
  long leftFull_St_HardLeft;
  long trn_St_HardLeft;
  long count_St_HardLeft;
  long dir_St_HardLeft;
  long v_r_St_HardLeft;
  long v_l_St_HardLeft;
  long nr_St_Block;
  Lab5__st ns_St_Block;
  long totalSteps_St_Block;
  long rightFull_St_Block;
  long leftFull_St_Block;
  long trn_St_Block;
  long count_St_Block;
  long dir_St_Block;
  long v_r_St_Block;
  long v_l_St_Block;
  long nr_St_FollowBlackLine;
  Lab5__st ns_St_FollowBlackLine;
  long totalSteps_St_FollowBlackLine;
  long rightFull_St_FollowBlackLine;
  long leftFull_St_FollowBlackLine;
  long trn_St_FollowBlackLine;
  long count_St_FollowBlackLine;
  long dir_St_FollowBlackLine;
  long v_r_St_FollowBlackLine;
  long v_l_St_FollowBlackLine;
  long nr_St_InitBlackLine;
  Lab5__st ns_St_InitBlackLine;
  long totalSteps_St_InitBlackLine;
  long rightFull_St_InitBlackLine;
  long leftFull_St_InitBlackLine;
  long trn_St_InitBlackLine;
  long count_St_InitBlackLine;
  long dir_St_InitBlackLine;
  long v_r_St_InitBlackLine;
  long v_l_St_InitBlackLine;
  long nr_St_Backward;
  Lab5__st ns_St_Backward;
  long totalSteps_St_Backward;
  long rightFull_St_Backward;
  long leftFull_St_Backward;
  long trn_St_Backward;
  long count_St_Backward;
  long dir_St_Backward;
  long v_r_St_Backward;
  long v_l_St_Backward;
  long nr_St_Right;
  Lab5__st ns_St_Right;
  long totalSteps_St_Right;
  long rightFull_St_Right;
  long leftFull_St_Right;
  long trn_St_Right;
  long count_St_Right;
  long dir_St_Right;
  long v_r_St_Right;
  long v_l_St_Right;
  long nr_St_Left;
  Lab5__st ns_St_Left;
  long totalSteps_St_Left;
  long rightFull_St_Left;
  long leftFull_St_Left;
  long trn_St_Left;
  long count_St_Left;
  long dir_St_Left;
  long v_r_St_Left;
  long v_l_St_Left;
  long nr_St_FollowLine;
  Lab5__st ns_St_FollowLine;
  long totalSteps_St_FollowLine;
  long rightFull_St_FollowLine;
  long leftFull_St_FollowLine;
  long trn_St_FollowLine;
  long count_St_FollowLine;
  long dir_St_FollowLine;
  long v_r_St_FollowLine;
  long v_l_St_FollowLine;
  long nr_St_WhiteLineInit;
  Lab5__st ns_St_WhiteLineInit;
  long totalSteps_St_WhiteLineInit;
  long rightFull_St_WhiteLineInit;
  long leftFull_St_WhiteLineInit;
  long trn_St_WhiteLineInit;
  long count_St_WhiteLineInit;
  long dir_St_WhiteLineInit;
  long v_r_St_WhiteLineInit;
  long v_l_St_WhiteLineInit;
  Lab5__st ns;
  long r;
  long nr;
  long count;
  long trn;
  long leftFull;
  long rightFull;
  long totalSteps;
  r = self->pnr;
  switch (self->ck) {
    case Lab5__St_WhiteLineInit:
      totalSteps_St_WhiteLineInit = self->totalSteps_1;
      rightFull_St_WhiteLineInit = self->rightFull_1;
      leftFull_St_WhiteLineInit = self->leftFull_1;
      trn_St_WhiteLineInit = self->trn_1;
      count_St_WhiteLineInit = self->count_1;
      dir_St_WhiteLineInit = 1;
      v_r_St_WhiteLineInit = 50;
      v_l_St_WhiteLineInit = 50;
      Lab5__getNormal_step(sen0, sen1, sen2, sen3, sen4,
                           &Lab5__getNormal_out_st);
      b0 = Lab5__getNormal_out_st.b0;
      b1 = Lab5__getNormal_out_st.b1;
      b2 = Lab5__getNormal_out_st.b2;
      b3 = Lab5__getNormal_out_st.b3;
      b4 = Lab5__getNormal_out_st.b4;
      v_315 = (b3>Lab5__midThres);
      v_313 = (b2>Lab5__midThres);
      v_312 = (b1>Lab5__midThres);
      v_314 = (v_312||v_313);
      v_316 = (v_314||v_315);
      v_310 = (b4<Lab5__midThres);
      v_309 = (b0<Lab5__midThres);
      v_311 = (v_309&&v_310);
      v_317 = (v_311&&v_316);
      if (v_317) {
        nr_St_WhiteLineInit = true;
        ns_St_WhiteLineInit = Lab5__St_FollowLine;
      } else {
        nr_St_WhiteLineInit = false;
        ns_St_WhiteLineInit = Lab5__St_WhiteLineInit;
      };
      _out->v_l = v_l_St_WhiteLineInit;
      _out->v_r = v_r_St_WhiteLineInit;
      _out->dir = dir_St_WhiteLineInit;
      count = count_St_WhiteLineInit;
      leftFull = leftFull_St_WhiteLineInit;
      rightFull = rightFull_St_WhiteLineInit;
      totalSteps = totalSteps_St_WhiteLineInit;
      trn = trn_St_WhiteLineInit;
      ns = ns_St_WhiteLineInit;
      nr = nr_St_WhiteLineInit;
      break;
    case Lab5__St_FollowLine:
      rightFull_St_FollowLine = self->rightFull_1;
      leftFull_St_FollowLine = self->leftFull_1;
      count_St_FollowLine = self->count_1;
      dir_St_FollowLine = 1;
      Lab5__getNormal_step(sen0, sen1, sen2, sen3, sen4,
                           &Lab5__getNormal_out_st);
      b0_1 = Lab5__getNormal_out_st.b0;
      b1_1 = Lab5__getNormal_out_st.b1;
      b2_1 = Lab5__getNormal_out_st.b2;
      b3_1 = Lab5__getNormal_out_st.b3;
      b4_1 = Lab5__getNormal_out_st.b4;
      v_306 = (b4_1>Lab5__midThres);
      v_305 = (b0_1>Lab5__midThres);
      v_307 = (v_305||v_306);
      v_298 = (Lab5__w1*b4_1);
      v_296 = (Lab5__w0*b3_1);
      v_294 = (0*b2_1);
      v_292 = (Lab5__w0*b1_1);
      v_291 = (-28*b0_1);
      v_293 = (v_291-v_292);
      v_295 = (v_293+v_294);
      v_297 = (v_295+v_296);
      v_299 = (v_297+v_298);
      x = (v_299/10);
      v_302 = (Lab5__half+x);
      v_303 = (v_302*100);
      v_r_St_FollowLine = (v_303/Lab5__full);
      v_300 = (Lab5__half-x);
      v_301 = (v_300*100);
      v_l_St_FollowLine = (v_301/Lab5__full);
      totalSteps_St_FollowLine = (self->totalSteps_1+1);
      v_282 = (b3_1>Lab5__midThres);
      v_280 = (b2_1>Lab5__midThres);
      v_279 = (b1_1>Lab5__midThres);
      v_281 = (v_279||v_280);
      v_283 = (v_281||v_282);
      v_284 = !(v_283);
      if (v_284) {
        v_286 = true;
        v_285 = Lab5__St_Backward;
      } else {
        v_286 = false;
        v_285 = Lab5__St_FollowLine;
      };
      v_276 = (b3_1>Lab5__midThres);
      v_274 = (b2_1>Lab5__midThres);
      v_273 = (b1_1>Lab5__midThres);
      v_275 = (v_273||v_274);
      v_277 = (v_275||v_276);
      v_272 = (x>Lab5__lineUpThres);
      v_278 = (v_272&&v_277);
      if (v_278) {
        v_288 = true;
        v_287 = Lab5__St_Right;
      } else {
        v_288 = v_286;
        v_287 = v_285;
      };
      v_269 = (b3_1>Lab5__midThres);
      v_267 = (b2_1>Lab5__midThres);
      v_266 = (b1_1>Lab5__midThres);
      v_268 = (v_266||v_267);
      v_270 = (v_268||v_269);
      v_265 = (x<Lab5__lineDownThres);
      v_271 = (v_265&&v_270);
      if (v_271) {
        v_290 = true;
        v_289 = Lab5__St_Left;
      } else {
        v_290 = v_288;
        v_289 = v_287;
      };
      _out->v_l = v_l_St_FollowLine;
      _out->v_r = v_r_St_FollowLine;
      _out->dir = dir_St_FollowLine;
      count = count_St_FollowLine;
      leftFull = leftFull_St_FollowLine;
      rightFull = rightFull_St_FollowLine;
      totalSteps = totalSteps_St_FollowLine;
      v_304 = (totalSteps>6000);
      v_308 = (v_304&&v_307);
      if (v_308) {
        trn_St_FollowLine = true;
      } else {
        trn_St_FollowLine = false;
      };
      trn = trn_St_FollowLine;
      if (trn) {
        nr_St_FollowLine = true;
        ns_St_FollowLine = Lab5__St_InitBlackLine;
      } else {
        nr_St_FollowLine = v_290;
        ns_St_FollowLine = v_289;
      };
      ns = ns_St_FollowLine;
      nr = nr_St_FollowLine;
      break;
    case Lab5__St_Left:
      totalSteps_St_Left = self->totalSteps_1;
      rightFull_St_Left = self->rightFull_1;
      leftFull_St_Left = self->leftFull_1;
      trn_St_Left = self->trn_1;
      count_St_Left = self->count_1;
      dir_St_Left = 2;
      v_r_St_Left = 30;
      v_l_St_Left = 40;
      Lab5__getNormal_step(sen0, sen1, sen2, sen3, sen4,
                           &Lab5__getNormal_out_st);
      b0_2 = Lab5__getNormal_out_st.b0;
      b1_2 = Lab5__getNormal_out_st.b1;
      b2_2 = Lab5__getNormal_out_st.b2;
      b3_2 = Lab5__getNormal_out_st.b3;
      b4_2 = Lab5__getNormal_out_st.b4;
      v_263 = (Lab5__w1*b4_2);
      v_261 = (Lab5__w0*b3_2);
      v_259 = (0*b2_2);
      v_257 = (Lab5__w0*b1_2);
      v_256 = (-28*b0_2);
      v_258 = (v_256-v_257);
      v_260 = (v_258+v_259);
      v_262 = (v_260+v_261);
      v_264 = (v_262+v_263);
      x_1 = (v_264/10);
      v_251 = (b3_2>Lab5__midThres);
      v_249 = (b2_2>Lab5__midThres);
      v_248 = (b1_2>Lab5__midThres);
      v_250 = (v_248||v_249);
      v_252 = (v_250||v_251);
      v_253 = !(v_252);
      if (v_253) {
        v_255 = true;
        v_254 = Lab5__St_Backward;
      } else {
        v_255 = false;
        v_254 = Lab5__St_Left;
      };
      v_245 = (b3_2>Lab5__midThres);
      v_243 = (b2_2>Lab5__midThres);
      v_242 = (b1_2>Lab5__midThres);
      v_244 = (v_242||v_243);
      v_246 = (v_244||v_245);
      v_241 = (x_1>Lab5__leftThres);
      v_247 = (v_241&&v_246);
      if (v_247) {
        nr_St_Left = true;
        ns_St_Left = Lab5__St_FollowLine;
      } else {
        nr_St_Left = v_255;
        ns_St_Left = v_254;
      };
      _out->v_l = v_l_St_Left;
      _out->v_r = v_r_St_Left;
      _out->dir = dir_St_Left;
      count = count_St_Left;
      leftFull = leftFull_St_Left;
      rightFull = rightFull_St_Left;
      totalSteps = totalSteps_St_Left;
      trn = trn_St_Left;
      ns = ns_St_Left;
      nr = nr_St_Left;
      break;
    case Lab5__St_Right:
      totalSteps_St_Right = self->totalSteps_1;
      rightFull_St_Right = self->rightFull_1;
      leftFull_St_Right = self->leftFull_1;
      trn_St_Right = self->trn_1;
      count_St_Right = self->count_1;
      dir_St_Right = 3;
      v_r_St_Right = 40;
      v_l_St_Right = 30;
      Lab5__getNormal_step(sen0, sen1, sen2, sen3, sen4,
                           &Lab5__getNormal_out_st);
      b0_3 = Lab5__getNormal_out_st.b0;
      b1_3 = Lab5__getNormal_out_st.b1;
      b2_3 = Lab5__getNormal_out_st.b2;
      b3_3 = Lab5__getNormal_out_st.b3;
      b4_3 = Lab5__getNormal_out_st.b4;
      v_239 = (Lab5__w1*b4_3);
      v_237 = (Lab5__w0*b3_3);
      v_235 = (0*b2_3);
      v_233 = (Lab5__w0*b1_3);
      v_232 = (-28*b0_3);
      v_234 = (v_232-v_233);
      v_236 = (v_234+v_235);
      v_238 = (v_236+v_237);
      v_240 = (v_238+v_239);
      x_2 = (v_240/10);
      v_227 = (b3_3>Lab5__midThres);
      v_225 = (b2_3>Lab5__midThres);
      v_224 = (b1_3>Lab5__midThres);
      v_226 = (v_224||v_225);
      v_228 = (v_226||v_227);
      v_229 = !(v_228);
      if (v_229) {
        v_231 = true;
        v_230 = Lab5__St_Backward;
      } else {
        v_231 = false;
        v_230 = Lab5__St_Right;
      };
      v_221 = (b3_3>Lab5__midThres);
      v_219 = (b2_3>Lab5__midThres);
      v_218 = (b1_3>Lab5__midThres);
      v_220 = (v_218||v_219);
      v_222 = (v_220||v_221);
      v_217 = (x_2<Lab5__rightThres);
      v_223 = (v_217&&v_222);
      if (v_223) {
        nr_St_Right = true;
        ns_St_Right = Lab5__St_FollowLine;
      } else {
        nr_St_Right = v_231;
        ns_St_Right = v_230;
      };
      _out->v_l = v_l_St_Right;
      _out->v_r = v_r_St_Right;
      _out->dir = dir_St_Right;
      count = count_St_Right;
      leftFull = leftFull_St_Right;
      rightFull = rightFull_St_Right;
      totalSteps = totalSteps_St_Right;
      trn = trn_St_Right;
      ns = ns_St_Right;
      nr = nr_St_Right;
      break;
    case Lab5__St_Backward:
      totalSteps_St_Backward = self->totalSteps_1;
      rightFull_St_Backward = self->rightFull_1;
      leftFull_St_Backward = self->leftFull_1;
      trn_St_Backward = self->trn_1;
      count_St_Backward = self->count_1;
      dir_St_Backward = 4;
      v_r_St_Backward = 100;
      v_l_St_Backward = 100;
      Lab5__getNormal_step(sen0, sen1, sen2, sen3, sen4,
                           &Lab5__getNormal_out_st);
      b0_4 = Lab5__getNormal_out_st.b0;
      b1_4 = Lab5__getNormal_out_st.b1;
      b2_4 = Lab5__getNormal_out_st.b2;
      b3_4 = Lab5__getNormal_out_st.b3;
      b4_4 = Lab5__getNormal_out_st.b4;
      v_215 = (b3_4>Lab5__midThres);
      v_213 = (b2_4>Lab5__midThres);
      v_212 = (b1_4>Lab5__midThres);
      v_214 = (v_212||v_213);
      v_216 = (v_214||v_215);
      if (v_216) {
        nr_St_Backward = true;
        ns_St_Backward = Lab5__St_FollowLine;
      } else {
        nr_St_Backward = false;
        ns_St_Backward = Lab5__St_Backward;
      };
      _out->v_l = v_l_St_Backward;
      _out->v_r = v_r_St_Backward;
      _out->dir = dir_St_Backward;
      count = count_St_Backward;
      leftFull = leftFull_St_Backward;
      rightFull = rightFull_St_Backward;
      totalSteps = totalSteps_St_Backward;
      trn = trn_St_Backward;
      ns = ns_St_Backward;
      nr = nr_St_Backward;
      break;
    case Lab5__St_InitBlackLine:
      totalSteps_St_InitBlackLine = self->totalSteps_1;
      rightFull_St_InitBlackLine = self->rightFull_1;
      leftFull_St_InitBlackLine = self->leftFull_1;
      trn_St_InitBlackLine = self->trn_1;
      count_St_InitBlackLine = self->count_1;
      dir_St_InitBlackLine = 1;
      v_r_St_InitBlackLine = 100;
      v_l_St_InitBlackLine = 100;
      v_211 = (self->v_210+1);
      if (self->v_208) {
        v_209 = true;
      } else {
        v_209 = r;
      };
      if (v_209) {
        steps = 0;
      } else {
        steps = v_211;
      };
      v_207 = (steps>50);
      if (v_207) {
        nr_St_InitBlackLine = true;
        ns_St_InitBlackLine = Lab5__St_FollowBlackLine;
      } else {
        nr_St_InitBlackLine = false;
        ns_St_InitBlackLine = Lab5__St_InitBlackLine;
      };
      _out->v_l = v_l_St_InitBlackLine;
      _out->v_r = v_r_St_InitBlackLine;
      _out->dir = dir_St_InitBlackLine;
      count = count_St_InitBlackLine;
      leftFull = leftFull_St_InitBlackLine;
      rightFull = rightFull_St_InitBlackLine;
      totalSteps = totalSteps_St_InitBlackLine;
      trn = trn_St_InitBlackLine;
      ns = ns_St_InitBlackLine;
      nr = nr_St_InitBlackLine;
      self->v_210 = steps;
      self->v_208 = false;
      break;
    case Lab5__St_FollowBlackLine:
      totalSteps_St_FollowBlackLine = self->totalSteps_1;
      rightFull_St_FollowBlackLine = self->rightFull_1;
      leftFull_St_FollowBlackLine = self->leftFull_1;
      trn_St_FollowBlackLine = self->trn_1;
      count_St_FollowBlackLine = self->count_1;
      dir_St_FollowBlackLine = 1;
      Lab5__getNormalBlack_step(sen0, sen1, sen2, sen3, sen4,
                                &Lab5__getNormalBlack_out_st);
      b0_5 = Lab5__getNormalBlack_out_st.b0;
      b1_5 = Lab5__getNormalBlack_out_st.b1;
      b2_5 = Lab5__getNormalBlack_out_st.b2;
      b3_5 = Lab5__getNormalBlack_out_st.b3;
      b4_5 = Lab5__getNormalBlack_out_st.b4;
      v_201 = (Lab5__w1*b4_5);
      v_199 = (Lab5__w0*b3_5);
      v_197 = (0*b2_5);
      v_195 = (Lab5__w0*b1_5);
      v_194 = (-28*b0_5);
      v_196 = (v_194-v_195);
      v_198 = (v_196+v_197);
      v_200 = (v_198+v_199);
      v_202 = (v_200+v_201);
      x_3 = (v_202/10);
      v_205 = (Lab5__half+x_3);
      v_206 = (v_205*100);
      v_r_St_FollowBlackLine = (v_206/Lab5__full);
      v_203 = (Lab5__half-x_3);
      v_204 = (v_203*100);
      v_l_St_FollowBlackLine = (v_204/Lab5__full);
      v_191 = (b4_5>Lab5__midThres);
      v_189 = (b3_5>Lab5__midThres);
      v_188 = (b2_5>Lab5__midThres);
      v_190 = (v_188&&v_189);
      v_192 = (v_190&&v_191);
      v_185 = (b3_5>Lab5__midThres);
      v_183 = (b2_5>Lab5__midThres);
      v_182 = (b1_5>Lab5__midThres);
      v_184 = (v_182&&v_183);
      v_186 = (v_184&&v_185);
      v_179 = (b4_5>Lab5__midThres);
      v_177 = (b3_5>Lab5__midThres);
      v_175 = (b2_5>Lab5__midThres);
      v_174 = (b1_5>Lab5__midThres);
      v_176 = (v_174&&v_175);
      v_178 = (v_176&&v_177);
      v_180 = (v_178&&v_179);
      v_171 = (b3_5>Lab5__midThres);
      v_169 = (b2_5>Lab5__midThres);
      v_167 = (b1_5>Lab5__midThres);
      v_166 = (b0_5>Lab5__midThres);
      v_168 = (v_166&&v_167);
      v_170 = (v_168&&v_169);
      v_172 = (v_170&&v_171);
      v_164 = (b2_5>Lab5__midThres);
      v_162 = (b1_5>Lab5__midThres);
      v_161 = (b0_5>Lab5__midThres);
      v_163 = (v_161&&v_162);
      v_165 = (v_163&&v_164);
      v_173 = (v_165||v_172);
      v_181 = (v_173||v_180);
      v_187 = (v_181||v_186);
      v_193 = (v_187||v_192);
      if (v_193) {
        nr_St_FollowBlackLine = true;
        ns_St_FollowBlackLine = Lab5__St_Block;
      } else {
        nr_St_FollowBlackLine = false;
        ns_St_FollowBlackLine = Lab5__St_FollowBlackLine;
      };
      _out->v_l = v_l_St_FollowBlackLine;
      _out->v_r = v_r_St_FollowBlackLine;
      _out->dir = dir_St_FollowBlackLine;
      count = count_St_FollowBlackLine;
      leftFull = leftFull_St_FollowBlackLine;
      rightFull = rightFull_St_FollowBlackLine;
      totalSteps = totalSteps_St_FollowBlackLine;
      trn = trn_St_FollowBlackLine;
      ns = ns_St_FollowBlackLine;
      nr = nr_St_FollowBlackLine;
      break;
    case Lab5__St_Block:
      totalSteps_St_Block = self->totalSteps_1;
      rightFull_St_Block = self->rightFull_1;
      leftFull_St_Block = self->leftFull_1;
      trn_St_Block = self->trn_1;
      count_St_Block = (self->count_1+1);
      dir_St_Block = 1;
      v_r_St_Block = 50;
      v_l_St_Block = 50;
      v_142 = (startPos==1);
      v_141 = (startPos==0);
      v_143 = (v_141||v_142);
      v_134 = (startPos==1);
      v_133 = (startPos==0);
      v_135 = (v_133||v_134);
      v_128 = (startPos==2);
      v_127 = (startPos==0);
      v_129 = (v_127||v_128);
      _out->v_l = v_l_St_Block;
      _out->v_r = v_r_St_Block;
      _out->dir = dir_St_Block;
      count = count_St_Block;
      v_148 = (count==5);
      if (v_148) {
        v_150 = true;
        v_149 = Lab5__St_ForwardBlack;
      } else {
        v_150 = false;
        v_149 = Lab5__St_Block;
      };
      v_146 = (count==4);
      v_145 = (count==3);
      v_147 = (v_145||v_146);
      if (v_147) {
        v_152 = true;
        v_151 = Lab5__St_HardRight;
      } else {
        v_152 = v_150;
        v_151 = v_149;
      };
      v_139 = (count==4);
      v_138 = (count==3);
      v_140 = (v_138||v_139);
      v_144 = (v_140&&v_143);
      if (v_144) {
        v_154 = true;
        v_153 = Lab5__St_HardLeft;
      } else {
        v_154 = v_152;
        v_153 = v_151;
      };
      v_137 = (count==2);
      if (v_137) {
        v_156 = true;
        v_155 = Lab5__St_HardLeft;
      } else {
        v_156 = v_154;
        v_155 = v_153;
      };
      v_132 = (count==2);
      v_136 = (v_132&&v_135);
      if (v_136) {
        v_158 = true;
        v_157 = Lab5__St_HardRight;
      } else {
        v_158 = v_156;
        v_157 = v_155;
      };
      v_131 = (count==1);
      if (v_131) {
        v_160 = true;
        v_159 = Lab5__St_HardRight;
      } else {
        v_160 = v_158;
        v_159 = v_157;
      };
      v_126 = (count==1);
      v_130 = (v_126&&v_129);
      if (v_130) {
        nr_St_Block = true;
        ns_St_Block = Lab5__St_HardLeft;
      } else {
        nr_St_Block = v_160;
        ns_St_Block = v_159;
      };
      leftFull = leftFull_St_Block;
      rightFull = rightFull_St_Block;
      totalSteps = totalSteps_St_Block;
      trn = trn_St_Block;
      ns = ns_St_Block;
      nr = nr_St_Block;
      break;
    case Lab5__St_HardLeft:
      totalSteps_St_HardLeft = self->totalSteps_1;
      rightFull_St_HardLeft = self->rightFull_1;
      leftFull_St_HardLeft = self->leftFull_1;
      trn_St_HardLeft = self->trn_1;
      count_St_HardLeft = self->count_1;
      dir_St_HardLeft = 1;
      v_r_St_HardLeft = 10;
      v_l_St_HardLeft = 50;
      Lab5__getNormalBlack_step(sen0, sen1, sen2, sen3, sen4,
                                &Lab5__getNormalBlack_out_st);
      b0_6 = Lab5__getNormalBlack_out_st.b0;
      b1_6 = Lab5__getNormalBlack_out_st.b1;
      b2_6 = Lab5__getNormalBlack_out_st.b2;
      b3_6 = Lab5__getNormalBlack_out_st.b3;
      b4_6 = Lab5__getNormalBlack_out_st.b4;
      v_125 = (self->v_124+1);
      if (self->v_122) {
        v_123 = true;
      } else {
        v_123 = r;
      };
      if (v_123) {
        steps_1 = 0;
      } else {
        steps_1 = v_125;
      };
      v_120 = (b3_6>Lab5__midThres);
      v_119 = (steps_1>Lab5__hardTurn);
      v_121 = (v_119&&v_120);
      if (v_121) {
        nr_St_HardLeft = true;
        ns_St_HardLeft = Lab5__St_FollowBlackLine;
      } else {
        nr_St_HardLeft = false;
        ns_St_HardLeft = Lab5__St_HardLeft;
      };
      _out->v_l = v_l_St_HardLeft;
      _out->v_r = v_r_St_HardLeft;
      _out->dir = dir_St_HardLeft;
      count = count_St_HardLeft;
      leftFull = leftFull_St_HardLeft;
      rightFull = rightFull_St_HardLeft;
      totalSteps = totalSteps_St_HardLeft;
      trn = trn_St_HardLeft;
      ns = ns_St_HardLeft;
      nr = nr_St_HardLeft;
      self->v_124 = steps_1;
      self->v_122 = false;
      break;
    case Lab5__St_HardRight:
      totalSteps_St_HardRight = self->totalSteps_1;
      rightFull_St_HardRight = self->rightFull_1;
      leftFull_St_HardRight = self->leftFull_1;
      trn_St_HardRight = self->trn_1;
      count_St_HardRight = self->count_1;
      dir_St_HardRight = 1;
      v_r_St_HardRight = 50;
      v_l_St_HardRight = 10;
      Lab5__getNormalBlack_step(sen0, sen1, sen2, sen3, sen4,
                                &Lab5__getNormalBlack_out_st);
      b0_7 = Lab5__getNormalBlack_out_st.b0;
      b1_7 = Lab5__getNormalBlack_out_st.b1;
      b2_7 = Lab5__getNormalBlack_out_st.b2;
      b3_7 = Lab5__getNormalBlack_out_st.b3;
      b4_7 = Lab5__getNormalBlack_out_st.b4;
      v_118 = (self->v_117+1);
      if (self->v_115) {
        v_116 = true;
      } else {
        v_116 = r;
      };
      if (v_116) {
        steps_2 = 0;
      } else {
        steps_2 = v_118;
      };
      v_113 = (b1_7>Lab5__midThres);
      v_112 = (steps_2>Lab5__hardTurn);
      v_114 = (v_112&&v_113);
      if (v_114) {
        nr_St_HardRight = true;
        ns_St_HardRight = Lab5__St_FollowBlackLine;
      } else {
        nr_St_HardRight = false;
        ns_St_HardRight = Lab5__St_HardRight;
      };
      _out->v_l = v_l_St_HardRight;
      _out->v_r = v_r_St_HardRight;
      _out->dir = dir_St_HardRight;
      count = count_St_HardRight;
      leftFull = leftFull_St_HardRight;
      rightFull = rightFull_St_HardRight;
      totalSteps = totalSteps_St_HardRight;
      trn = trn_St_HardRight;
      ns = ns_St_HardRight;
      nr = nr_St_HardRight;
      self->v_117 = steps_2;
      self->v_115 = false;
      break;
    case Lab5__St_ForwardBlack:
      totalSteps_St_ForwardBlack = self->totalSteps_1;
      rightFull_St_ForwardBlack = self->rightFull_1;
      leftFull_St_ForwardBlack = self->leftFull_1;
      trn_St_ForwardBlack = self->trn_1;
      count_St_ForwardBlack = self->count_1;
      dir_St_ForwardBlack = 1;
      v_r_St_ForwardBlack = 50;
      v_l_St_ForwardBlack = 50;
      v_111 = (self->v_110+1);
      if (self->v_108) {
        v_109 = true;
      } else {
        v_109 = r;
      };
      if (v_109) {
        steps_3 = 0;
      } else {
        steps_3 = v_111;
      };
      v_107 = (steps_3>100);
      if (v_107) {
        nr_St_ForwardBlack = true;
        ns_St_ForwardBlack = Lab5__St_DetectObsticles;
      } else {
        nr_St_ForwardBlack = false;
        ns_St_ForwardBlack = Lab5__St_ForwardBlack;
      };
      _out->v_l = v_l_St_ForwardBlack;
      _out->v_r = v_r_St_ForwardBlack;
      _out->dir = dir_St_ForwardBlack;
      count = count_St_ForwardBlack;
      leftFull = leftFull_St_ForwardBlack;
      rightFull = rightFull_St_ForwardBlack;
      totalSteps = totalSteps_St_ForwardBlack;
      trn = trn_St_ForwardBlack;
      ns = ns_St_ForwardBlack;
      nr = nr_St_ForwardBlack;
      self->v_110 = steps_3;
      self->v_108 = false;
      break;
    case Lab5__St_DetectObsticles:
      totalSteps_St_DetectObsticles = self->totalSteps_1;
      trn_St_DetectObsticles = self->trn_1;
      count_St_DetectObsticles = self->count_1;
      rightFull_St_DetectObsticles = (self->rightFull_1||rightIR);
      leftFull_St_DetectObsticles = (self->leftFull_1||leftIR);
      dir_St_DetectObsticles = 1;
      Lab5__getNormalBlack_step(sen0, sen1, sen2, sen3, sen4,
                                &Lab5__getNormalBlack_out_st);
      b0_8 = Lab5__getNormalBlack_out_st.b0;
      b1_8 = Lab5__getNormalBlack_out_st.b1;
      b2_8 = Lab5__getNormalBlack_out_st.b2;
      b3_8 = Lab5__getNormalBlack_out_st.b3;
      b4_8 = Lab5__getNormalBlack_out_st.b4;
      v_101 = (Lab5__w1*b4_8);
      v_99 = (Lab5__w0*b3_8);
      v_97 = (0*b2_8);
      v_95 = (Lab5__w0*b1_8);
      v_94 = (-28*b0_8);
      v_96 = (v_94-v_95);
      v_98 = (v_96+v_97);
      v_100 = (v_98+v_99);
      v_102 = (v_100+v_101);
      x_4 = (v_102/10);
      v_105 = (Lab5__half+x_4);
      v_106 = (v_105*80);
      v_r_St_DetectObsticles = (v_106/Lab5__full);
      v_103 = (Lab5__half-x_4);
      v_104 = (v_103*80);
      v_l_St_DetectObsticles = (v_104/Lab5__full);
      v_93 = (self->v_92+1);
      if (self->v_90) {
        v_91 = true;
      } else {
        v_91 = r;
      };
      if (v_91) {
        steps_4 = 0;
      } else {
        steps_4 = v_93;
      };
      v_82 = (b4_8<Lab5__midThres);
      v_80 = (b3_8<Lab5__midThres);
      v_78 = (b2_8<Lab5__midThres);
      v_76 = (b1_8<Lab5__midThres);
      v_75 = (b0_8<Lab5__midThres);
      v_77 = (v_75&&v_76);
      v_79 = (v_77&&v_78);
      v_81 = (v_79&&v_80);
      v_83 = (v_81&&v_82);
      if (v_83) {
        v_85 = true;
        v_84 = Lab5__St_Stop;
      } else {
        v_85 = false;
        v_84 = Lab5__St_DetectObsticles;
      };
      v_74 = (steps_4>Lab5__lengthOfParking);
      if (v_74) {
        v_87 = true;
        v_86 = Lab5__St_NextParkingBlock;
      } else {
        v_87 = v_85;
        v_86 = v_84;
      };
      v_71 = (steps_4>Lab5__lengthOfParking);
      v_68 = (steps_4>Lab5__lengthOfParking);
      _out->v_l = v_l_St_DetectObsticles;
      _out->v_r = v_r_St_DetectObsticles;
      _out->dir = dir_St_DetectObsticles;
      count = count_St_DetectObsticles;
      leftFull = leftFull_St_DetectObsticles;
      v_69 = !(leftFull);
      v_70 = (v_68&&v_69);
      rightFull = rightFull_St_DetectObsticles;
      v_72 = !(rightFull);
      v_73 = (v_71&&v_72);
      if (v_73) {
        v_89 = true;
      } else {
        v_89 = v_87;
      };
      if (v_70) {
        nr_St_DetectObsticles = true;
      } else {
        nr_St_DetectObsticles = v_89;
      };
      if (v_73) {
        v_88 = Lab5__St_RightPark;
      } else {
        v_88 = v_86;
      };
      if (v_70) {
        ns_St_DetectObsticles = Lab5__St_LeftPark;
      } else {
        ns_St_DetectObsticles = v_88;
      };
      totalSteps = totalSteps_St_DetectObsticles;
      trn = trn_St_DetectObsticles;
      ns = ns_St_DetectObsticles;
      nr = nr_St_DetectObsticles;
      self->v_92 = steps_4;
      self->v_90 = false;
      break;
    case Lab5__St_NextParkingBlock:
      totalSteps_St_NextParkingBlock = self->totalSteps_1;
      trn_St_NextParkingBlock = self->trn_1;
      count_St_NextParkingBlock = self->count_1;
      rightFull_St_NextParkingBlock = false;
      leftFull_St_NextParkingBlock = false;
      dir_St_NextParkingBlock = 5;
      v_r_St_NextParkingBlock = 0;
      v_l_St_NextParkingBlock = 0;
      v_67 = (self->v_66+1);
      if (self->v_64) {
        v_65 = true;
      } else {
        v_65 = r;
      };
      if (v_65) {
        steps_5 = 0;
      } else {
        steps_5 = v_67;
      };
      v_63 = (steps_5>Lab5__waitSteps);
      if (v_63) {
        nr_St_NextParkingBlock = true;
        ns_St_NextParkingBlock = Lab5__St_DetectObsticles;
      } else {
        nr_St_NextParkingBlock = false;
        ns_St_NextParkingBlock = Lab5__St_NextParkingBlock;
      };
      _out->v_l = v_l_St_NextParkingBlock;
      _out->v_r = v_r_St_NextParkingBlock;
      _out->dir = dir_St_NextParkingBlock;
      count = count_St_NextParkingBlock;
      leftFull = leftFull_St_NextParkingBlock;
      rightFull = rightFull_St_NextParkingBlock;
      totalSteps = totalSteps_St_NextParkingBlock;
      trn = trn_St_NextParkingBlock;
      ns = ns_St_NextParkingBlock;
      nr = nr_St_NextParkingBlock;
      self->v_66 = steps_5;
      self->v_64 = false;
      break;
    case Lab5__St_LeftPark:
      totalSteps_St_LeftPark = self->totalSteps_1;
      rightFull_St_LeftPark = self->rightFull_1;
      leftFull_St_LeftPark = self->leftFull_1;
      trn_St_LeftPark = self->trn_1;
      count_St_LeftPark = self->count_1;
      v_62 = (self->v_61+1);
      if (self->v_59) {
        v_60 = true;
      } else {
        v_60 = r;
      };
      if (v_60) {
        steps_6 = 0;
      } else {
        steps_6 = v_62;
      };
      dir_St_LeftPark = 4;
      v_r_St_LeftPark = 30;
      v_l_St_LeftPark = 55;
      v_58 = (steps_6>Lab5__parkingRadius);
      if (v_58) {
        nr_St_LeftPark = true;
        ns_St_LeftPark = Lab5__St_Stop;
      } else {
        nr_St_LeftPark = false;
        ns_St_LeftPark = Lab5__St_LeftPark;
      };
      _out->v_l = v_l_St_LeftPark;
      _out->v_r = v_r_St_LeftPark;
      _out->dir = dir_St_LeftPark;
      count = count_St_LeftPark;
      leftFull = leftFull_St_LeftPark;
      rightFull = rightFull_St_LeftPark;
      totalSteps = totalSteps_St_LeftPark;
      trn = trn_St_LeftPark;
      ns = ns_St_LeftPark;
      nr = nr_St_LeftPark;
      self->v_61 = steps_6;
      self->v_59 = false;
      break;
    case Lab5__St_RightPark:
      totalSteps_St_RightPark = self->totalSteps_1;
      rightFull_St_RightPark = self->rightFull_1;
      leftFull_St_RightPark = self->leftFull_1;
      trn_St_RightPark = self->trn_1;
      count_St_RightPark = self->count_1;
      v_57 = (self->v_56+1);
      if (self->v_54) {
        v_55 = true;
      } else {
        v_55 = r;
      };
      if (v_55) {
        steps_7 = 0;
      } else {
        steps_7 = v_57;
      };
      dir_St_RightPark = 4;
      v_r_St_RightPark = 60;
      v_l_St_RightPark = 30;
      v = (steps_7>Lab5__parkingRadius);
      if (v) {
        nr_St_RightPark = true;
        ns_St_RightPark = Lab5__St_Stop;
      } else {
        nr_St_RightPark = false;
        ns_St_RightPark = Lab5__St_RightPark;
      };
      _out->v_l = v_l_St_RightPark;
      _out->v_r = v_r_St_RightPark;
      _out->dir = dir_St_RightPark;
      count = count_St_RightPark;
      leftFull = leftFull_St_RightPark;
      rightFull = rightFull_St_RightPark;
      totalSteps = totalSteps_St_RightPark;
      trn = trn_St_RightPark;
      ns = ns_St_RightPark;
      nr = nr_St_RightPark;
      self->v_56 = steps_7;
      self->v_54 = false;
      break;
    case Lab5__St_Stop:
      totalSteps_St_Stop = self->totalSteps_1;
      rightFull_St_Stop = self->rightFull_1;
      leftFull_St_Stop = self->leftFull_1;
      trn_St_Stop = self->trn_1;
      count_St_Stop = self->count_1;
      dir_St_Stop = 5;
      v_r_St_Stop = 0;
      v_l_St_Stop = 0;
      nr_St_Stop = false;
      ns_St_Stop = Lab5__St_Stop;
      _out->v_l = v_l_St_Stop;
      _out->v_r = v_r_St_Stop;
      _out->dir = dir_St_Stop;
      count = count_St_Stop;
      leftFull = leftFull_St_Stop;
      rightFull = rightFull_St_Stop;
      totalSteps = totalSteps_St_Stop;
      trn = trn_St_Stop;
      ns = ns_St_Stop;
      nr = nr_St_Stop;
      break;
    default:
      break;
  };
  self->totalSteps_1 = totalSteps;
  self->rightFull_1 = rightFull;
  self->leftFull_1 = leftFull;
  self->trn_1 = trn;
  self->count_1 = count;
  self->pnr = nr;
  self->ck = ns;;
}

