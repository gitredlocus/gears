/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register Enum Values                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass MipsMCRegisterClasses[];

namespace Mips {
enum {
  NoRegister,
  AT = 1,
  DSPCCond = 2,
  DSPCarry = 3,
  DSPEFI = 4,
  DSPOutFlag = 5,
  DSPPos = 6,
  DSPSCount = 7,
  FP = 8,
  GP = 9,
  PC = 10,
  RA = 11,
  SP = 12,
  ZERO = 13,
  A0 = 14,
  A1 = 15,
  A2 = 16,
  A3 = 17,
  AC0 = 18,
  AC1 = 19,
  AC2 = 20,
  AC3 = 21,
  AT_64 = 22,
  D0 = 23,
  D1 = 24,
  D2 = 25,
  D3 = 26,
  D4 = 27,
  D5 = 28,
  D6 = 29,
  D7 = 30,
  D8 = 31,
  D9 = 32,
  D10 = 33,
  D11 = 34,
  D12 = 35,
  D13 = 36,
  D14 = 37,
  D15 = 38,
  DSPOutFlag20 = 39,
  DSPOutFlag21 = 40,
  DSPOutFlag22 = 41,
  DSPOutFlag23 = 42,
  F0 = 43,
  F1 = 44,
  F2 = 45,
  F3 = 46,
  F4 = 47,
  F5 = 48,
  F6 = 49,
  F7 = 50,
  F8 = 51,
  F9 = 52,
  F10 = 53,
  F11 = 54,
  F12 = 55,
  F13 = 56,
  F14 = 57,
  F15 = 58,
  F16 = 59,
  F17 = 60,
  F18 = 61,
  F19 = 62,
  F20 = 63,
  F21 = 64,
  F22 = 65,
  F23 = 66,
  F24 = 67,
  F25 = 68,
  F26 = 69,
  F27 = 70,
  F28 = 71,
  F29 = 72,
  F30 = 73,
  F31 = 74,
  FCC0 = 75,
  FCC1 = 76,
  FCC2 = 77,
  FCC3 = 78,
  FCC4 = 79,
  FCC5 = 80,
  FCC6 = 81,
  FCC7 = 82,
  FCR0 = 83,
  FCR1 = 84,
  FCR2 = 85,
  FCR3 = 86,
  FCR4 = 87,
  FCR5 = 88,
  FCR6 = 89,
  FCR7 = 90,
  FCR8 = 91,
  FCR9 = 92,
  FCR10 = 93,
  FCR11 = 94,
  FCR12 = 95,
  FCR13 = 96,
  FCR14 = 97,
  FCR15 = 98,
  FCR16 = 99,
  FCR17 = 100,
  FCR18 = 101,
  FCR19 = 102,
  FCR20 = 103,
  FCR21 = 104,
  FCR22 = 105,
  FCR23 = 106,
  FCR24 = 107,
  FCR25 = 108,
  FCR26 = 109,
  FCR27 = 110,
  FCR28 = 111,
  FCR29 = 112,
  FCR30 = 113,
  FCR31 = 114,
  FP_64 = 115,
  GP_64 = 116,
  HI0 = 117,
  HI1 = 118,
  HI2 = 119,
  HI3 = 120,
  HWR29 = 121,
  K0 = 122,
  K1 = 123,
  LO0 = 124,
  LO1 = 125,
  LO2 = 126,
  LO3 = 127,
  RA_64 = 128,
  S0 = 129,
  S1 = 130,
  S2 = 131,
  S3 = 132,
  S4 = 133,
  S5 = 134,
  S6 = 135,
  S7 = 136,
  SP_64 = 137,
  T0 = 138,
  T1 = 139,
  T2 = 140,
  T3 = 141,
  T4 = 142,
  T5 = 143,
  T6 = 144,
  T7 = 145,
  T8 = 146,
  T9 = 147,
  V0 = 148,
  V1 = 149,
  W0 = 150,
  W1 = 151,
  W2 = 152,
  W3 = 153,
  W4 = 154,
  W5 = 155,
  W6 = 156,
  W7 = 157,
  W8 = 158,
  W9 = 159,
  W10 = 160,
  W11 = 161,
  W12 = 162,
  W13 = 163,
  W14 = 164,
  W15 = 165,
  W16 = 166,
  W17 = 167,
  W18 = 168,
  W19 = 169,
  W20 = 170,
  W21 = 171,
  W22 = 172,
  W23 = 173,
  W24 = 174,
  W25 = 175,
  W26 = 176,
  W27 = 177,
  W28 = 178,
  W29 = 179,
  W30 = 180,
  W31 = 181,
  ZERO_64 = 182,
  A0_64 = 183,
  A1_64 = 184,
  A2_64 = 185,
  A3_64 = 186,
  AC0_64 = 187,
  D0_64 = 188,
  D1_64 = 189,
  D2_64 = 190,
  D3_64 = 191,
  D4_64 = 192,
  D5_64 = 193,
  D6_64 = 194,
  D7_64 = 195,
  D8_64 = 196,
  D9_64 = 197,
  D10_64 = 198,
  D11_64 = 199,
  D12_64 = 200,
  D13_64 = 201,
  D14_64 = 202,
  D15_64 = 203,
  D16_64 = 204,
  D17_64 = 205,
  D18_64 = 206,
  D19_64 = 207,
  D20_64 = 208,
  D21_64 = 209,
  D22_64 = 210,
  D23_64 = 211,
  D24_64 = 212,
  D25_64 = 213,
  D26_64 = 214,
  D27_64 = 215,
  D28_64 = 216,
  D29_64 = 217,
  D30_64 = 218,
  D31_64 = 219,
  DSPOutFlag16_19 = 220,
  HI0_64 = 221,
  K0_64 = 222,
  K1_64 = 223,
  LO0_64 = 224,
  S0_64 = 225,
  S1_64 = 226,
  S2_64 = 227,
  S3_64 = 228,
  S4_64 = 229,
  S5_64 = 230,
  S6_64 = 231,
  S7_64 = 232,
  T0_64 = 233,
  T1_64 = 234,
  T2_64 = 235,
  T3_64 = 236,
  T4_64 = 237,
  T5_64 = 238,
  T6_64 = 239,
  T7_64 = 240,
  T8_64 = 241,
  T9_64 = 242,
  V0_64 = 243,
  V1_64 = 244,
  NUM_TARGET_REGS 	// 245
};
}

// Register classes
namespace Mips {
enum {
  CCRRegClassID = 0,
  DSPRRegClassID = 1,
  FGR32RegClassID = 2,
  GPR32RegClassID = 3,
  CPU16RegsPlusSPRegClassID = 4,
  CPU16RegsRegClassID = 5,
  FCCRegClassID = 6,
  HI32DSPRegClassID = 7,
  LO32DSPRegClassID = 8,
  CPURARegRegClassID = 9,
  CPUSPRegRegClassID = 10,
  DSPCCRegClassID = 11,
  HI32RegClassID = 12,
  HWRegsRegClassID = 13,
  LO32RegClassID = 14,
  FGR64RegClassID = 15,
  GPR64RegClassID = 16,
  AFGR64RegClassID = 17,
  GPR64_with_sub_32_in_CPU16RegsPlusSPRegClassID = 18,
  GPR64_with_sub_32_in_CPU16RegsRegClassID = 19,
  ACC64DSPRegClassID = 20,
  ACC64RegClassID = 21,
  GPR64_with_sub_32_in_CPURARegRegClassID = 22,
  GPR64_with_sub_32_in_CPUSPRegRegClassID = 23,
  HI64RegClassID = 24,
  LO64RegClassID = 25,
  MSA128RegClassID = 26,
  ACC128RegClassID = 27
  };
}

// Subregister indices
namespace Mips {
enum {
  NoSubRegister,
  sub_32,	// 1
  sub_64,	// 2
  sub_dsp16_19,	// 3
  sub_dsp20,	// 4
  sub_dsp21,	// 5
  sub_dsp22,	// 6
  sub_dsp23,	// 7
  sub_fpeven,	// 8
  sub_fpodd,	// 9
  sub_hi,	// 10
  sub_lo,	// 11
  sub_hi_then_sub_32,	// 12
  sub_32_sub_hi_then_sub_32,	// 13
  NUM_TARGET_SUBREGS
};
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*MC Register Information                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const MCPhysReg MipsRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 4, 1, 1, 1, 1, 0,
  /* 8 */ 215, 65355, 1, 1, 1, 0,
  /* 14 */ 20, 1, 0,
  /* 17 */ 21, 1, 0,
  /* 20 */ 22, 1, 0,
  /* 23 */ 23, 1, 0,
  /* 26 */ 24, 1, 0,
  /* 29 */ 25, 1, 0,
  /* 32 */ 26, 1, 0,
  /* 35 */ 27, 1, 0,
  /* 38 */ 28, 1, 0,
  /* 41 */ 29, 1, 0,
  /* 44 */ 30, 1, 0,
  /* 47 */ 31, 1, 0,
  /* 50 */ 32, 1, 0,
  /* 53 */ 33, 1, 0,
  /* 56 */ 34, 1, 0,
  /* 59 */ 35, 1, 0,
  /* 62 */ 65519, 1, 0,
  /* 65 */ 65521, 1, 0,
  /* 68 */ 3, 0,
  /* 70 */ 4, 0,
  /* 72 */ 14, 0,
  /* 74 */ 15, 0,
  /* 76 */ 21, 0,
  /* 78 */ 22, 0,
  /* 80 */ 95, 0,
  /* 82 */ 96, 0,
  /* 84 */ 100, 0,
  /* 86 */ 107, 0,
  /* 88 */ 117, 0,
  /* 90 */ 125, 0,
  /* 92 */ 169, 0,
  /* 94 */ 65309, 0,
  /* 96 */ 65321, 0,
  /* 98 */ 65324, 0,
  /* 100 */ 65367, 0,
  /* 102 */ 65370, 0,
  /* 104 */ 65377, 0,
  /* 106 */ 38, 65391, 0,
  /* 109 */ 65411, 0,
  /* 111 */ 65415, 0,
  /* 113 */ 65416, 0,
  /* 115 */ 65419, 0,
  /* 117 */ 65429, 0,
  /* 119 */ 65430, 0,
  /* 121 */ 65432, 0,
  /* 123 */ 65436, 0,
  /* 125 */ 37, 65436, 97, 65432, 65437, 0,
  /* 131 */ 65440, 0,
  /* 133 */ 65441, 0,
  /* 135 */ 65516, 165, 65498, 0,
  /* 139 */ 65515, 166, 65498, 0,
  /* 143 */ 65514, 167, 65498, 0,
  /* 147 */ 65513, 168, 65498, 0,
  /* 151 */ 65512, 169, 65498, 0,
  /* 155 */ 65511, 170, 65498, 0,
  /* 159 */ 65510, 171, 65498, 0,
  /* 163 */ 65509, 172, 65498, 0,
  /* 167 */ 65508, 173, 65498, 0,
  /* 171 */ 65507, 174, 65498, 0,
  /* 175 */ 65506, 175, 65498, 0,
  /* 179 */ 65505, 176, 65498, 0,
  /* 183 */ 65504, 177, 65498, 0,
  /* 187 */ 65503, 178, 65498, 0,
  /* 191 */ 65502, 179, 65498, 0,
  /* 195 */ 65501, 180, 65498, 0,
  /* 199 */ 65500, 181, 65498, 0,
  /* 203 */ 65430, 206, 65499, 0,
  /* 207 */ 65500, 0,
  /* 209 */ 65501, 0,
  /* 211 */ 65437, 203, 65502, 0,
  /* 215 */ 65510, 0,
  /* 217 */ 65511, 0,
  /* 219 */ 65515, 0,
  /* 221 */ 65516, 0,
  /* 223 */ 65522, 0,
  /* 225 */ 106, 65529, 0,
  /* 228 */ 65535, 0,
};

extern const uint16_t MipsSubRegIdxLists[] = {
  /* 0 */ 2, 1, 0,
  /* 3 */ 3, 4, 5, 6, 7, 0,
  /* 9 */ 8, 9, 0,
  /* 12 */ 11, 10, 0,
  /* 15 */ 11, 1, 10, 12, 13, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits MipsSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 32 },	// sub_32
  { 0, 64 },	// sub_64
  { 16, 4 },	// sub_dsp16_19
  { 20, 1 },	// sub_dsp20
  { 21, 1 },	// sub_dsp21
  { 22, 1 },	// sub_dsp22
  { 23, 1 },	// sub_dsp23
  { 0, 32 },	// sub_fpeven
  { 32, 32 },	// sub_fpodd
  { 32, 32 },	// sub_hi
  { 0, 32 },	// sub_lo
  { 32, 32 },	// sub_hi_then_sub_32
  { 0, 64 },	// sub_32_sub_hi_then_sub_32
};

extern const char MipsRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'F', '1', '0', 0,
  /* 8 */ 'F', 'C', 'R', '1', '0', 0,
  /* 14 */ 'W', '1', '0', 0,
  /* 18 */ 'F', '2', '0', 0,
  /* 22 */ 'F', 'C', 'R', '2', '0', 0,
  /* 28 */ 'W', '2', '0', 0,
  /* 32 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '0', 0,
  /* 45 */ 'F', '3', '0', 0,
  /* 49 */ 'F', 'C', 'R', '3', '0', 0,
  /* 55 */ 'W', '3', '0', 0,
  /* 59 */ 'A', '0', 0,
  /* 62 */ 'A', 'C', '0', 0,
  /* 66 */ 'F', 'C', 'C', '0', 0,
  /* 71 */ 'D', '0', 0,
  /* 74 */ 'F', '0', 0,
  /* 77 */ 'H', 'I', '0', 0,
  /* 81 */ 'K', '0', 0,
  /* 84 */ 'L', 'O', '0', 0,
  /* 88 */ 'F', 'C', 'R', '0', 0,
  /* 93 */ 'S', '0', 0,
  /* 96 */ 'T', '0', 0,
  /* 99 */ 'V', '0', 0,
  /* 102 */ 'W', '0', 0,
  /* 105 */ 'D', '1', '1', 0,
  /* 109 */ 'F', '1', '1', 0,
  /* 113 */ 'F', 'C', 'R', '1', '1', 0,
  /* 119 */ 'W', '1', '1', 0,
  /* 123 */ 'F', '2', '1', 0,
  /* 127 */ 'F', 'C', 'R', '2', '1', 0,
  /* 133 */ 'W', '2', '1', 0,
  /* 137 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '1', 0,
  /* 150 */ 'F', '3', '1', 0,
  /* 154 */ 'F', 'C', 'R', '3', '1', 0,
  /* 160 */ 'W', '3', '1', 0,
  /* 164 */ 'A', '1', 0,
  /* 167 */ 'A', 'C', '1', 0,
  /* 171 */ 'F', 'C', 'C', '1', 0,
  /* 176 */ 'D', '1', 0,
  /* 179 */ 'F', '1', 0,
  /* 182 */ 'H', 'I', '1', 0,
  /* 186 */ 'K', '1', 0,
  /* 189 */ 'L', 'O', '1', 0,
  /* 193 */ 'F', 'C', 'R', '1', 0,
  /* 198 */ 'S', '1', 0,
  /* 201 */ 'T', '1', 0,
  /* 204 */ 'V', '1', 0,
  /* 207 */ 'W', '1', 0,
  /* 210 */ 'D', '1', '2', 0,
  /* 214 */ 'F', '1', '2', 0,
  /* 218 */ 'F', 'C', 'R', '1', '2', 0,
  /* 224 */ 'W', '1', '2', 0,
  /* 228 */ 'F', '2', '2', 0,
  /* 232 */ 'F', 'C', 'R', '2', '2', 0,
  /* 238 */ 'W', '2', '2', 0,
  /* 242 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '2', 0,
  /* 255 */ 'A', '2', 0,
  /* 258 */ 'A', 'C', '2', 0,
  /* 262 */ 'F', 'C', 'C', '2', 0,
  /* 267 */ 'D', '2', 0,
  /* 270 */ 'F', '2', 0,
  /* 273 */ 'H', 'I', '2', 0,
  /* 277 */ 'L', 'O', '2', 0,
  /* 281 */ 'F', 'C', 'R', '2', 0,
  /* 286 */ 'S', '2', 0,
  /* 289 */ 'T', '2', 0,
  /* 292 */ 'W', '2', 0,
  /* 295 */ 'D', '1', '3', 0,
  /* 299 */ 'F', '1', '3', 0,
  /* 303 */ 'F', 'C', 'R', '1', '3', 0,
  /* 309 */ 'W', '1', '3', 0,
  /* 313 */ 'F', '2', '3', 0,
  /* 317 */ 'F', 'C', 'R', '2', '3', 0,
  /* 323 */ 'W', '2', '3', 0,
  /* 327 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '2', '3', 0,
  /* 340 */ 'A', '3', 0,
  /* 343 */ 'A', 'C', '3', 0,
  /* 347 */ 'F', 'C', 'C', '3', 0,
  /* 352 */ 'D', '3', 0,
  /* 355 */ 'F', '3', 0,
  /* 358 */ 'H', 'I', '3', 0,
  /* 362 */ 'L', 'O', '3', 0,
  /* 366 */ 'F', 'C', 'R', '3', 0,
  /* 371 */ 'S', '3', 0,
  /* 374 */ 'T', '3', 0,
  /* 377 */ 'W', '3', 0,
  /* 380 */ 'D', '1', '4', 0,
  /* 384 */ 'F', '1', '4', 0,
  /* 388 */ 'F', 'C', 'R', '1', '4', 0,
  /* 394 */ 'W', '1', '4', 0,
  /* 398 */ 'F', '2', '4', 0,
  /* 402 */ 'F', 'C', 'R', '2', '4', 0,
  /* 408 */ 'W', '2', '4', 0,
  /* 412 */ 'D', '1', '0', '_', '6', '4', 0,
  /* 419 */ 'D', '2', '0', '_', '6', '4', 0,
  /* 426 */ 'D', '3', '0', '_', '6', '4', 0,
  /* 433 */ 'A', '0', '_', '6', '4', 0,
  /* 439 */ 'A', 'C', '0', '_', '6', '4', 0,
  /* 446 */ 'D', '0', '_', '6', '4', 0,
  /* 452 */ 'H', 'I', '0', '_', '6', '4', 0,
  /* 459 */ 'K', '0', '_', '6', '4', 0,
  /* 465 */ 'L', 'O', '0', '_', '6', '4', 0,
  /* 472 */ 'S', '0', '_', '6', '4', 0,
  /* 478 */ 'T', '0', '_', '6', '4', 0,
  /* 484 */ 'V', '0', '_', '6', '4', 0,
  /* 490 */ 'D', '1', '1', '_', '6', '4', 0,
  /* 497 */ 'D', '2', '1', '_', '6', '4', 0,
  /* 504 */ 'D', '3', '1', '_', '6', '4', 0,
  /* 511 */ 'A', '1', '_', '6', '4', 0,
  /* 517 */ 'D', '1', '_', '6', '4', 0,
  /* 523 */ 'K', '1', '_', '6', '4', 0,
  /* 529 */ 'S', '1', '_', '6', '4', 0,
  /* 535 */ 'T', '1', '_', '6', '4', 0,
  /* 541 */ 'V', '1', '_', '6', '4', 0,
  /* 547 */ 'D', '1', '2', '_', '6', '4', 0,
  /* 554 */ 'D', '2', '2', '_', '6', '4', 0,
  /* 561 */ 'A', '2', '_', '6', '4', 0,
  /* 567 */ 'D', '2', '_', '6', '4', 0,
  /* 573 */ 'S', '2', '_', '6', '4', 0,
  /* 579 */ 'T', '2', '_', '6', '4', 0,
  /* 585 */ 'D', '1', '3', '_', '6', '4', 0,
  /* 592 */ 'D', '2', '3', '_', '6', '4', 0,
  /* 599 */ 'A', '3', '_', '6', '4', 0,
  /* 605 */ 'D', '3', '_', '6', '4', 0,
  /* 611 */ 'S', '3', '_', '6', '4', 0,
  /* 617 */ 'T', '3', '_', '6', '4', 0,
  /* 623 */ 'D', '1', '4', '_', '6', '4', 0,
  /* 630 */ 'D', '2', '4', '_', '6', '4', 0,
  /* 637 */ 'D', '4', '_', '6', '4', 0,
  /* 643 */ 'S', '4', '_', '6', '4', 0,
  /* 649 */ 'T', '4', '_', '6', '4', 0,
  /* 655 */ 'D', '1', '5', '_', '6', '4', 0,
  /* 662 */ 'D', '2', '5', '_', '6', '4', 0,
  /* 669 */ 'D', '5', '_', '6', '4', 0,
  /* 675 */ 'S', '5', '_', '6', '4', 0,
  /* 681 */ 'T', '5', '_', '6', '4', 0,
  /* 687 */ 'D', '1', '6', '_', '6', '4', 0,
  /* 694 */ 'D', '2', '6', '_', '6', '4', 0,
  /* 701 */ 'D', '6', '_', '6', '4', 0,
  /* 707 */ 'S', '6', '_', '6', '4', 0,
  /* 713 */ 'T', '6', '_', '6', '4', 0,
  /* 719 */ 'D', '1', '7', '_', '6', '4', 0,
  /* 726 */ 'D', '2', '7', '_', '6', '4', 0,
  /* 733 */ 'D', '7', '_', '6', '4', 0,
  /* 739 */ 'S', '7', '_', '6', '4', 0,
  /* 745 */ 'T', '7', '_', '6', '4', 0,
  /* 751 */ 'D', '1', '8', '_', '6', '4', 0,
  /* 758 */ 'D', '2', '8', '_', '6', '4', 0,
  /* 765 */ 'D', '8', '_', '6', '4', 0,
  /* 771 */ 'T', '8', '_', '6', '4', 0,
  /* 777 */ 'D', '1', '9', '_', '6', '4', 0,
  /* 784 */ 'D', '2', '9', '_', '6', '4', 0,
  /* 791 */ 'D', '9', '_', '6', '4', 0,
  /* 797 */ 'T', '9', '_', '6', '4', 0,
  /* 803 */ 'R', 'A', '_', '6', '4', 0,
  /* 809 */ 'Z', 'E', 'R', 'O', '_', '6', '4', 0,
  /* 817 */ 'F', 'P', '_', '6', '4', 0,
  /* 823 */ 'G', 'P', '_', '6', '4', 0,
  /* 829 */ 'S', 'P', '_', '6', '4', 0,
  /* 835 */ 'A', 'T', '_', '6', '4', 0,
  /* 841 */ 'F', 'C', 'C', '4', 0,
  /* 846 */ 'D', '4', 0,
  /* 849 */ 'F', '4', 0,
  /* 852 */ 'F', 'C', 'R', '4', 0,
  /* 857 */ 'S', '4', 0,
  /* 860 */ 'T', '4', 0,
  /* 863 */ 'W', '4', 0,
  /* 866 */ 'D', '1', '5', 0,
  /* 870 */ 'F', '1', '5', 0,
  /* 874 */ 'F', 'C', 'R', '1', '5', 0,
  /* 880 */ 'W', '1', '5', 0,
  /* 884 */ 'F', '2', '5', 0,
  /* 888 */ 'F', 'C', 'R', '2', '5', 0,
  /* 894 */ 'W', '2', '5', 0,
  /* 898 */ 'F', 'C', 'C', '5', 0,
  /* 903 */ 'D', '5', 0,
  /* 906 */ 'F', '5', 0,
  /* 909 */ 'F', 'C', 'R', '5', 0,
  /* 914 */ 'S', '5', 0,
  /* 917 */ 'T', '5', 0,
  /* 920 */ 'W', '5', 0,
  /* 923 */ 'F', '1', '6', 0,
  /* 927 */ 'F', 'C', 'R', '1', '6', 0,
  /* 933 */ 'W', '1', '6', 0,
  /* 937 */ 'F', '2', '6', 0,
  /* 941 */ 'F', 'C', 'R', '2', '6', 0,
  /* 947 */ 'W', '2', '6', 0,
  /* 951 */ 'F', 'C', 'C', '6', 0,
  /* 956 */ 'D', '6', 0,
  /* 959 */ 'F', '6', 0,
  /* 962 */ 'F', 'C', 'R', '6', 0,
  /* 967 */ 'S', '6', 0,
  /* 970 */ 'T', '6', 0,
  /* 973 */ 'W', '6', 0,
  /* 976 */ 'F', '1', '7', 0,
  /* 980 */ 'F', 'C', 'R', '1', '7', 0,
  /* 986 */ 'W', '1', '7', 0,
  /* 990 */ 'F', '2', '7', 0,
  /* 994 */ 'F', 'C', 'R', '2', '7', 0,
  /* 1000 */ 'W', '2', '7', 0,
  /* 1004 */ 'F', 'C', 'C', '7', 0,
  /* 1009 */ 'D', '7', 0,
  /* 1012 */ 'F', '7', 0,
  /* 1015 */ 'F', 'C', 'R', '7', 0,
  /* 1020 */ 'S', '7', 0,
  /* 1023 */ 'T', '7', 0,
  /* 1026 */ 'W', '7', 0,
  /* 1029 */ 'F', '1', '8', 0,
  /* 1033 */ 'F', 'C', 'R', '1', '8', 0,
  /* 1039 */ 'W', '1', '8', 0,
  /* 1043 */ 'F', '2', '8', 0,
  /* 1047 */ 'F', 'C', 'R', '2', '8', 0,
  /* 1053 */ 'W', '2', '8', 0,
  /* 1057 */ 'D', '8', 0,
  /* 1060 */ 'F', '8', 0,
  /* 1063 */ 'F', 'C', 'R', '8', 0,
  /* 1068 */ 'T', '8', 0,
  /* 1071 */ 'W', '8', 0,
  /* 1074 */ 'F', '1', '9', 0,
  /* 1078 */ 'F', 'C', 'R', '1', '9', 0,
  /* 1084 */ 'W', '1', '9', 0,
  /* 1088 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', '1', '6', '_', '1', '9', 0,
  /* 1104 */ 'F', '2', '9', 0,
  /* 1108 */ 'F', 'C', 'R', '2', '9', 0,
  /* 1114 */ 'H', 'W', 'R', '2', '9', 0,
  /* 1120 */ 'W', '2', '9', 0,
  /* 1124 */ 'D', '9', 0,
  /* 1127 */ 'F', '9', 0,
  /* 1130 */ 'F', 'C', 'R', '9', 0,
  /* 1135 */ 'T', '9', 0,
  /* 1138 */ 'W', '9', 0,
  /* 1141 */ 'R', 'A', 0,
  /* 1144 */ 'P', 'C', 0,
  /* 1147 */ 'D', 'S', 'P', 'E', 'F', 'I', 0,
  /* 1154 */ 'Z', 'E', 'R', 'O', 0,
  /* 1159 */ 'F', 'P', 0,
  /* 1162 */ 'G', 'P', 0,
  /* 1165 */ 'S', 'P', 0,
  /* 1168 */ 'A', 'T', 0,
  /* 1171 */ 'D', 'S', 'P', 'C', 'C', 'o', 'n', 'd', 0,
  /* 1180 */ 'D', 'S', 'P', 'O', 'u', 't', 'F', 'l', 'a', 'g', 0,
  /* 1191 */ 'D', 'S', 'P', 'P', 'o', 's', 0,
  /* 1198 */ 'D', 'S', 'P', 'S', 'C', 'o', 'u', 'n', 't', 0,
  /* 1208 */ 'D', 'S', 'P', 'C', 'a', 'r', 'r', 'y', 0,
};

extern const MCRegisterDesc MipsRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0 },
  { 1168, 1, 76, 2, 3649 },
  { 1171, 1, 1, 2, 3649 },
  { 1208, 1, 1, 2, 3649 },
  { 1147, 1, 1, 2, 3649 },
  { 1180, 8, 1, 3, 32 },
  { 1191, 1, 1, 2, 1089 },
  { 1198, 1, 1, 2, 1089 },
  { 1159, 1, 86, 2, 1089 },
  { 1162, 1, 86, 2, 1089 },
  { 1144, 1, 1, 2, 1089 },
  { 1141, 1, 88, 2, 1089 },
  { 1165, 1, 90, 2, 1089 },
  { 1154, 1, 92, 2, 1089 },
  { 59, 1, 92, 2, 1089 },
  { 164, 1, 92, 2, 1089 },
  { 255, 1, 92, 2, 1089 },
  { 340, 1, 92, 2, 1089 },
  { 62, 225, 92, 12, 1042 },
  { 167, 225, 1, 12, 1042 },
  { 258, 225, 1, 12, 1042 },
  { 343, 225, 1, 12, 1042 },
  { 835, 219, 1, 1, 0 },
  { 71, 14, 1, 9, 994 },
  { 176, 17, 1, 9, 994 },
  { 267, 20, 1, 9, 994 },
  { 352, 23, 1, 9, 994 },
  { 846, 26, 1, 9, 994 },
  { 903, 29, 1, 9, 994 },
  { 956, 32, 1, 9, 994 },
  { 1009, 35, 1, 9, 994 },
  { 1057, 38, 1, 9, 994 },
  { 1124, 41, 1, 9, 994 },
  { 0, 44, 1, 9, 994 },
  { 105, 47, 1, 9, 994 },
  { 210, 50, 1, 9, 994 },
  { 295, 53, 1, 9, 994 },
  { 380, 56, 1, 9, 994 },
  { 866, 59, 1, 9, 994 },
  { 32, 1, 213, 2, 3409 },
  { 137, 1, 209, 2, 3409 },
  { 242, 1, 207, 2, 3409 },
  { 327, 1, 205, 2, 3409 },
  { 74, 1, 135, 2, 3569 },
  { 179, 1, 139, 2, 3569 },
  { 270, 1, 139, 2, 3569 },
  { 355, 1, 143, 2, 3569 },
  { 849, 1, 143, 2, 3569 },
  { 906, 1, 147, 2, 3569 },
  { 959, 1, 147, 2, 3569 },
  { 1012, 1, 151, 2, 3569 },
  { 1060, 1, 151, 2, 3569 },
  { 1127, 1, 155, 2, 3569 },
  { 4, 1, 155, 2, 3569 },
  { 109, 1, 159, 2, 3569 },
  { 214, 1, 159, 2, 3569 },
  { 299, 1, 163, 2, 3569 },
  { 384, 1, 163, 2, 3569 },
  { 870, 1, 167, 2, 3569 },
  { 923, 1, 167, 2, 3569 },
  { 976, 1, 171, 2, 3569 },
  { 1029, 1, 171, 2, 3569 },
  { 1074, 1, 175, 2, 3569 },
  { 18, 1, 175, 2, 3569 },
  { 123, 1, 179, 2, 3569 },
  { 228, 1, 179, 2, 3569 },
  { 313, 1, 183, 2, 3569 },
  { 398, 1, 183, 2, 3569 },
  { 884, 1, 187, 2, 3569 },
  { 937, 1, 187, 2, 3569 },
  { 990, 1, 191, 2, 3569 },
  { 1043, 1, 191, 2, 3569 },
  { 1104, 1, 195, 2, 3569 },
  { 45, 1, 195, 2, 3569 },
  { 150, 1, 199, 2, 3569 },
  { 66, 1, 1, 2, 3569 },
  { 171, 1, 1, 2, 3569 },
  { 262, 1, 1, 2, 3569 },
  { 347, 1, 1, 2, 3569 },
  { 841, 1, 1, 2, 3569 },
  { 898, 1, 1, 2, 3569 },
  { 951, 1, 1, 2, 3569 },
  { 1004, 1, 1, 2, 3569 },
  { 88, 1, 1, 2, 3569 },
  { 193, 1, 1, 2, 3569 },
  { 281, 1, 1, 2, 3569 },
  { 366, 1, 1, 2, 3569 },
  { 852, 1, 1, 2, 3569 },
  { 909, 1, 1, 2, 3569 },
  { 962, 1, 1, 2, 3569 },
  { 1015, 1, 1, 2, 3569 },
  { 1063, 1, 1, 2, 3569 },
  { 1130, 1, 1, 2, 3569 },
  { 8, 1, 1, 2, 3569 },
  { 113, 1, 1, 2, 3569 },
  { 218, 1, 1, 2, 3569 },
  { 303, 1, 1, 2, 3569 },
  { 388, 1, 1, 2, 3569 },
  { 874, 1, 1, 2, 3569 },
  { 927, 1, 1, 2, 3569 },
  { 980, 1, 1, 2, 3569 },
  { 1033, 1, 1, 2, 3569 },
  { 1078, 1, 1, 2, 3569 },
  { 22, 1, 1, 2, 3569 },
  { 127, 1, 1, 2, 3569 },
  { 232, 1, 1, 2, 3569 },
  { 317, 1, 1, 2, 3569 },
  { 402, 1, 1, 2, 3569 },
  { 888, 1, 1, 2, 3569 },
  { 941, 1, 1, 2, 3569 },
  { 994, 1, 1, 2, 3569 },
  { 1047, 1, 1, 2, 3569 },
  { 1108, 1, 1, 2, 3569 },
  { 49, 1, 1, 2, 3569 },
  { 154, 1, 1, 2, 3569 },
  { 817, 117, 1, 1, 1937 },
  { 823, 117, 1, 1, 1937 },
  { 77, 1, 211, 2, 1570 },
  { 182, 1, 129, 2, 1570 },
  { 273, 1, 129, 2, 1570 },
  { 358, 1, 129, 2, 1570 },
  { 1114, 1, 1, 2, 3537 },
  { 81, 1, 84, 2, 3537 },
  { 186, 1, 84, 2, 3537 },
  { 84, 1, 203, 2, 1506 },
  { 189, 1, 119, 2, 1506 },
  { 277, 1, 119, 2, 1506 },
  { 362, 1, 119, 2, 1506 },
  { 803, 115, 1, 1, 1152 },
  { 93, 1, 82, 2, 3473 },
  { 198, 1, 82, 2, 3473 },
  { 286, 1, 82, 2, 3473 },
  { 371, 1, 82, 2, 3473 },
  { 857, 1, 82, 2, 3473 },
  { 914, 1, 82, 2, 3473 },
  { 967, 1, 82, 2, 3473 },
  { 1020, 1, 82, 2, 3473 },
  { 829, 109, 1, 1, 1184 },
  { 96, 1, 80, 2, 3441 },
  { 201, 1, 80, 2, 3441 },
  { 289, 1, 80, 2, 3441 },
  { 374, 1, 80, 2, 3441 },
  { 860, 1, 80, 2, 3441 },
  { 917, 1, 80, 2, 3441 },
  { 970, 1, 80, 2, 3441 },
  { 1023, 1, 80, 2, 3441 },
  { 1068, 1, 80, 2, 3441 },
  { 1135, 1, 80, 2, 3441 },
  { 99, 1, 80, 2, 3441 },
  { 204, 1, 80, 2, 3441 },
  { 102, 106, 1, 0, 1777 },
  { 207, 106, 1, 0, 1777 },
  { 292, 106, 1, 0, 1777 },
  { 377, 106, 1, 0, 1777 },
  { 863, 106, 1, 0, 1777 },
  { 920, 106, 1, 0, 1777 },
  { 973, 106, 1, 0, 1777 },
  { 1026, 106, 1, 0, 1777 },
  { 1071, 106, 1, 0, 1777 },
  { 1138, 106, 1, 0, 1777 },
  { 14, 106, 1, 0, 1777 },
  { 119, 106, 1, 0, 1777 },
  { 224, 106, 1, 0, 1777 },
  { 309, 106, 1, 0, 1777 },
  { 394, 106, 1, 0, 1777 },
  { 880, 106, 1, 0, 1777 },
  { 933, 106, 1, 0, 1777 },
  { 986, 106, 1, 0, 1777 },
  { 1039, 106, 1, 0, 1777 },
  { 1084, 106, 1, 0, 1777 },
  { 28, 106, 1, 0, 1777 },
  { 133, 106, 1, 0, 1777 },
  { 238, 106, 1, 0, 1777 },
  { 323, 106, 1, 0, 1777 },
  { 408, 106, 1, 0, 1777 },
  { 894, 106, 1, 0, 1777 },
  { 947, 106, 1, 0, 1777 },
  { 1000, 106, 1, 0, 1777 },
  { 1053, 106, 1, 0, 1777 },
  { 1120, 106, 1, 0, 1777 },
  { 55, 106, 1, 0, 1777 },
  { 160, 106, 1, 0, 1777 },
  { 809, 100, 1, 1, 1633 },
  { 433, 100, 1, 1, 1633 },
  { 511, 100, 1, 1, 1633 },
  { 561, 100, 1, 1, 1633 },
  { 599, 100, 1, 1, 1633 },
  { 439, 125, 1, 15, 272 },
  { 446, 107, 137, 1, 1665 },
  { 517, 107, 137, 1, 1665 },
  { 567, 107, 137, 1, 1665 },
  { 605, 107, 137, 1, 1665 },
  { 637, 107, 137, 1, 1665 },
  { 669, 107, 137, 1, 1665 },
  { 701, 107, 137, 1, 1665 },
  { 733, 107, 137, 1, 1665 },
  { 765, 107, 137, 1, 1665 },
  { 791, 107, 137, 1, 1665 },
  { 412, 107, 137, 1, 1665 },
  { 490, 107, 137, 1, 1665 },
  { 547, 107, 137, 1, 1665 },
  { 585, 107, 137, 1, 1665 },
  { 623, 107, 137, 1, 1665 },
  { 655, 107, 137, 1, 1665 },
  { 687, 107, 137, 1, 1665 },
  { 719, 107, 137, 1, 1665 },
  { 751, 107, 137, 1, 1665 },
  { 777, 107, 137, 1, 1665 },
  { 419, 107, 137, 1, 1665 },
  { 497, 107, 137, 1, 1665 },
  { 554, 107, 137, 1, 1665 },
  { 592, 107, 137, 1, 1665 },
  { 630, 107, 137, 1, 1665 },
  { 662, 107, 137, 1, 1665 },
  { 694, 107, 137, 1, 1665 },
  { 726, 107, 137, 1, 1665 },
  { 758, 107, 137, 1, 1665 },
  { 784, 107, 137, 1, 1665 },
  { 426, 107, 137, 1, 1665 },
  { 504, 107, 137, 1, 1665 },
  { 1088, 1, 96, 2, 1120 },
  { 452, 121, 213, 1, 1248 },
  { 459, 123, 1, 1, 1809 },
  { 523, 123, 1, 1, 1809 },
  { 465, 123, 205, 1, 1216 },
  { 472, 131, 1, 1, 1777 },
  { 529, 131, 1, 1, 1777 },
  { 573, 131, 1, 1, 1777 },
  { 611, 131, 1, 1, 1777 },
  { 643, 131, 1, 1, 1777 },
  { 675, 131, 1, 1, 1777 },
  { 707, 131, 1, 1, 1777 },
  { 739, 131, 1, 1, 1777 },
  { 478, 133, 1, 1, 1777 },
  { 535, 133, 1, 1, 1777 },
  { 579, 133, 1, 1, 1777 },
  { 617, 133, 1, 1, 1777 },
  { 649, 133, 1, 1, 1777 },
  { 681, 133, 1, 1, 1777 },
  { 713, 133, 1, 1, 1777 },
  { 745, 133, 1, 1, 1777 },
  { 771, 133, 1, 1, 1777 },
  { 797, 133, 1, 1, 1777 },
  { 484, 133, 1, 1, 1777 },
  { 541, 133, 1, 1, 1777 },
};

extern const uint16_t MipsRegUnitRoots[][2] = {
  { Mips::AT },
  { Mips::DSPCCond },
  { Mips::DSPCarry },
  { Mips::DSPEFI },
  { Mips::DSPOutFlag16_19 },
  { Mips::DSPOutFlag20 },
  { Mips::DSPOutFlag21 },
  { Mips::DSPOutFlag22 },
  { Mips::DSPOutFlag23 },
  { Mips::DSPPos },
  { Mips::DSPSCount },
  { Mips::FP },
  { Mips::GP },
  { Mips::PC },
  { Mips::RA },
  { Mips::SP },
  { Mips::ZERO },
  { Mips::A0 },
  { Mips::A1 },
  { Mips::A2 },
  { Mips::A3 },
  { Mips::LO0 },
  { Mips::HI0 },
  { Mips::LO1 },
  { Mips::HI1 },
  { Mips::LO2 },
  { Mips::HI2 },
  { Mips::LO3 },
  { Mips::HI3 },
  { Mips::F0 },
  { Mips::F1 },
  { Mips::F2 },
  { Mips::F3 },
  { Mips::F4 },
  { Mips::F5 },
  { Mips::F6 },
  { Mips::F7 },
  { Mips::F8 },
  { Mips::F9 },
  { Mips::F10 },
  { Mips::F11 },
  { Mips::F12 },
  { Mips::F13 },
  { Mips::F14 },
  { Mips::F15 },
  { Mips::F16 },
  { Mips::F17 },
  { Mips::F18 },
  { Mips::F19 },
  { Mips::F20 },
  { Mips::F21 },
  { Mips::F22 },
  { Mips::F23 },
  { Mips::F24 },
  { Mips::F25 },
  { Mips::F26 },
  { Mips::F27 },
  { Mips::F28 },
  { Mips::F29 },
  { Mips::F30 },
  { Mips::F31 },
  { Mips::FCC0 },
  { Mips::FCC1 },
  { Mips::FCC2 },
  { Mips::FCC3 },
  { Mips::FCC4 },
  { Mips::FCC5 },
  { Mips::FCC6 },
  { Mips::FCC7 },
  { Mips::FCR0 },
  { Mips::FCR1 },
  { Mips::FCR2 },
  { Mips::FCR3 },
  { Mips::FCR4 },
  { Mips::FCR5 },
  { Mips::FCR6 },
  { Mips::FCR7 },
  { Mips::FCR8 },
  { Mips::FCR9 },
  { Mips::FCR10 },
  { Mips::FCR11 },
  { Mips::FCR12 },
  { Mips::FCR13 },
  { Mips::FCR14 },
  { Mips::FCR15 },
  { Mips::FCR16 },
  { Mips::FCR17 },
  { Mips::FCR18 },
  { Mips::FCR19 },
  { Mips::FCR20 },
  { Mips::FCR21 },
  { Mips::FCR22 },
  { Mips::FCR23 },
  { Mips::FCR24 },
  { Mips::FCR25 },
  { Mips::FCR26 },
  { Mips::FCR27 },
  { Mips::FCR28 },
  { Mips::FCR29 },
  { Mips::FCR30 },
  { Mips::FCR31 },
  { Mips::HWR29 },
  { Mips::K0 },
  { Mips::K1 },
  { Mips::S0 },
  { Mips::S1 },
  { Mips::S2 },
  { Mips::S3 },
  { Mips::S4 },
  { Mips::S5 },
  { Mips::S6 },
  { Mips::S7 },
  { Mips::T0 },
  { Mips::T1 },
  { Mips::T2 },
  { Mips::T3 },
  { Mips::T4 },
  { Mips::T5 },
  { Mips::T6 },
  { Mips::T7 },
  { Mips::T8 },
  { Mips::T9 },
  { Mips::V0 },
  { Mips::V1 },
};

namespace {     // Register classes...
  // CCR Register Class...
  const uint16_t CCR[] = {
    Mips::FCR0, Mips::FCR1, Mips::FCR2, Mips::FCR3, Mips::FCR4, Mips::FCR5, Mips::FCR6, Mips::FCR7, Mips::FCR8, Mips::FCR9, Mips::FCR10, Mips::FCR11, Mips::FCR12, Mips::FCR13, Mips::FCR14, Mips::FCR15, Mips::FCR16, Mips::FCR17, Mips::FCR18, Mips::FCR19, Mips::FCR20, Mips::FCR21, Mips::FCR22, Mips::FCR23, Mips::FCR24, Mips::FCR25, Mips::FCR26, Mips::FCR27, Mips::FCR28, Mips::FCR29, Mips::FCR30, Mips::FCR31, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // DSPR Register Class...
  const uint16_t DSPR[] = {
    Mips::ZERO, Mips::AT, Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::T0, Mips::T1, Mips::T2, Mips::T3, Mips::T4, Mips::T5, Mips::T6, Mips::T7, Mips::S0, Mips::S1, Mips::S2, Mips::S3, Mips::S4, Mips::S5, Mips::S6, Mips::S7, Mips::T8, Mips::T9, Mips::K0, Mips::K1, Mips::GP, Mips::SP, Mips::FP, Mips::RA, 
  };

  // DSPR Bit set.
  const uint8_t DSPRBits[] = {
    0x02, 0xfb, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xfe, 0xfd, 0x3f, 
  };

  // FGR32 Register Class...
  const uint16_t FGR32[] = {
    Mips::F0, Mips::F1, Mips::F2, Mips::F3, Mips::F4, Mips::F5, Mips::F6, Mips::F7, Mips::F8, Mips::F9, Mips::F10, Mips::F11, Mips::F12, Mips::F13, Mips::F14, Mips::F15, Mips::F16, Mips::F17, Mips::F18, Mips::F19, Mips::F20, Mips::F21, Mips::F22, Mips::F23, Mips::F24, Mips::F25, Mips::F26, Mips::F27, Mips::F28, Mips::F29, Mips::F30, Mips::F31, 
  };

  // FGR32 Bit set.
  const uint8_t FGR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // GPR32 Register Class...
  const uint16_t GPR32[] = {
    Mips::ZERO, Mips::AT, Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::T0, Mips::T1, Mips::T2, Mips::T3, Mips::T4, Mips::T5, Mips::T6, Mips::T7, Mips::S0, Mips::S1, Mips::S2, Mips::S3, Mips::S4, Mips::S5, Mips::S6, Mips::S7, Mips::T8, Mips::T9, Mips::K0, Mips::K1, Mips::GP, Mips::SP, Mips::FP, Mips::RA, 
  };

  // GPR32 Bit set.
  const uint8_t GPR32Bits[] = {
    0x02, 0xfb, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xfe, 0xfd, 0x3f, 
  };

  // CPU16RegsPlusSP Register Class...
  const uint16_t CPU16RegsPlusSP[] = {
    Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::S0, Mips::S1, Mips::SP, 
  };

  // CPU16RegsPlusSP Bit set.
  const uint8_t CPU16RegsPlusSPBits[] = {
    0x00, 0xd0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x30, 
  };

  // CPU16Regs Register Class...
  const uint16_t CPU16Regs[] = {
    Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::S0, Mips::S1, 
  };

  // CPU16Regs Bit set.
  const uint8_t CPU16RegsBits[] = {
    0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x30, 
  };

  // FCC Register Class...
  const uint16_t FCC[] = {
    Mips::FCC0, Mips::FCC1, Mips::FCC2, Mips::FCC3, Mips::FCC4, Mips::FCC5, Mips::FCC6, Mips::FCC7, 
  };

  // FCC Bit set.
  const uint8_t FCCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // HI32DSP Register Class...
  const uint16_t HI32DSP[] = {
    Mips::HI0, Mips::HI1, Mips::HI2, Mips::HI3, 
  };

  // HI32DSP Bit set.
  const uint8_t HI32DSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 
  };

  // LO32DSP Register Class...
  const uint16_t LO32DSP[] = {
    Mips::LO0, Mips::LO1, Mips::LO2, Mips::LO3, 
  };

  // LO32DSP Bit set.
  const uint8_t LO32DSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
  };

  // CPURAReg Register Class...
  const uint16_t CPURAReg[] = {
    Mips::RA, 
  };

  // CPURAReg Bit set.
  const uint8_t CPURARegBits[] = {
    0x00, 0x08, 
  };

  // CPUSPReg Register Class...
  const uint16_t CPUSPReg[] = {
    Mips::SP, 
  };

  // CPUSPReg Bit set.
  const uint8_t CPUSPRegBits[] = {
    0x00, 0x10, 
  };

  // DSPCC Register Class...
  const uint16_t DSPCC[] = {
    Mips::DSPCCond, 
  };

  // DSPCC Bit set.
  const uint8_t DSPCCBits[] = {
    0x04, 
  };

  // HI32 Register Class...
  const uint16_t HI32[] = {
    Mips::HI0, 
  };

  // HI32 Bit set.
  const uint8_t HI32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

  // HWRegs Register Class...
  const uint16_t HWRegs[] = {
    Mips::HWR29, 
  };

  // HWRegs Bit set.
  const uint8_t HWRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
  };

  // LO32 Register Class...
  const uint16_t LO32[] = {
    Mips::LO0, 
  };

  // LO32 Bit set.
  const uint8_t LO32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // FGR64 Register Class...
  const uint16_t FGR64[] = {
    Mips::D0_64, Mips::D1_64, Mips::D2_64, Mips::D3_64, Mips::D4_64, Mips::D5_64, Mips::D6_64, Mips::D7_64, Mips::D8_64, Mips::D9_64, Mips::D10_64, Mips::D11_64, Mips::D12_64, Mips::D13_64, Mips::D14_64, Mips::D15_64, Mips::D16_64, Mips::D17_64, Mips::D18_64, Mips::D19_64, Mips::D20_64, Mips::D21_64, Mips::D22_64, Mips::D23_64, Mips::D24_64, Mips::D25_64, Mips::D26_64, Mips::D27_64, Mips::D28_64, Mips::D29_64, Mips::D30_64, Mips::D31_64, 
  };

  // FGR64 Bit set.
  const uint8_t FGR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x0f, 
  };

  // GPR64 Register Class...
  const uint16_t GPR64[] = {
    Mips::ZERO_64, Mips::AT_64, Mips::V0_64, Mips::V1_64, Mips::A0_64, Mips::A1_64, Mips::A2_64, Mips::A3_64, Mips::T0_64, Mips::T1_64, Mips::T2_64, Mips::T3_64, Mips::T4_64, Mips::T5_64, Mips::T6_64, Mips::T7_64, Mips::S0_64, Mips::S1_64, Mips::S2_64, Mips::S3_64, Mips::S4_64, Mips::S5_64, Mips::S6_64, Mips::S7_64, Mips::T8_64, Mips::T9_64, Mips::K0_64, Mips::K1_64, Mips::GP_64, Mips::SP_64, Mips::FP_64, Mips::RA_64, 
  };

  // GPR64 Bit set.
  const uint8_t GPR64Bits[] = {
    0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0x00, 0xc0, 0xfe, 0xff, 0x1f, 
  };

  // AFGR64 Register Class...
  const uint16_t AFGR64[] = {
    Mips::D0, Mips::D1, Mips::D2, Mips::D3, Mips::D4, Mips::D5, Mips::D6, Mips::D7, Mips::D8, Mips::D9, Mips::D10, Mips::D11, Mips::D12, Mips::D13, Mips::D14, Mips::D15, 
  };

  // AFGR64 Bit set.
  const uint8_t AFGR64Bits[] = {
    0x00, 0x00, 0x80, 0xff, 0x7f, 
  };

  // GPR64_with_sub_32_in_CPU16RegsPlusSP Register Class...
  const uint16_t GPR64_with_sub_32_in_CPU16RegsPlusSP[] = {
    Mips::V0_64, Mips::V1_64, Mips::A0_64, Mips::A1_64, Mips::A2_64, Mips::A3_64, Mips::S0_64, Mips::S1_64, Mips::SP_64, 
  };

  // GPR64_with_sub_32_in_CPU16RegsPlusSP Bit set.
  const uint8_t GPR64_with_sub_32_in_CPU16RegsPlusSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x18, 
  };

  // GPR64_with_sub_32_in_CPU16Regs Register Class...
  const uint16_t GPR64_with_sub_32_in_CPU16Regs[] = {
    Mips::V0_64, Mips::V1_64, Mips::A0_64, Mips::A1_64, Mips::A2_64, Mips::A3_64, Mips::S0_64, Mips::S1_64, 
  };

  // GPR64_with_sub_32_in_CPU16Regs Bit set.
  const uint8_t GPR64_with_sub_32_in_CPU16RegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x18, 
  };

  // ACC64DSP Register Class...
  const uint16_t ACC64DSP[] = {
    Mips::AC0, Mips::AC1, Mips::AC2, Mips::AC3, 
  };

  // ACC64DSP Bit set.
  const uint8_t ACC64DSPBits[] = {
    0x00, 0x00, 0x3c, 
  };

  // ACC64 Register Class...
  const uint16_t ACC64[] = {
    Mips::AC0, 
  };

  // ACC64 Bit set.
  const uint8_t ACC64Bits[] = {
    0x00, 0x00, 0x04, 
  };

  // GPR64_with_sub_32_in_CPURAReg Register Class...
  const uint16_t GPR64_with_sub_32_in_CPURAReg[] = {
    Mips::RA_64, 
  };

  // GPR64_with_sub_32_in_CPURAReg Bit set.
  const uint8_t GPR64_with_sub_32_in_CPURARegBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // GPR64_with_sub_32_in_CPUSPReg Register Class...
  const uint16_t GPR64_with_sub_32_in_CPUSPReg[] = {
    Mips::SP_64, 
  };

  // GPR64_with_sub_32_in_CPUSPReg Bit set.
  const uint8_t GPR64_with_sub_32_in_CPUSPRegBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
  };

  // HI64 Register Class...
  const uint16_t HI64[] = {
    Mips::HI0_64, 
  };

  // HI64 Bit set.
  const uint8_t HI64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

  // LO64 Register Class...
  const uint16_t LO64[] = {
    Mips::LO0_64, 
  };

  // LO64 Bit set.
  const uint8_t LO64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // MSA128 Register Class...
  const uint16_t MSA128[] = {
    Mips::W0, Mips::W1, Mips::W2, Mips::W3, Mips::W4, Mips::W5, Mips::W6, Mips::W7, Mips::W8, Mips::W9, Mips::W10, Mips::W11, Mips::W12, Mips::W13, Mips::W14, Mips::W15, Mips::W16, Mips::W17, Mips::W18, Mips::W19, Mips::W20, Mips::W21, Mips::W22, Mips::W23, Mips::W24, Mips::W25, Mips::W26, Mips::W27, Mips::W28, Mips::W29, Mips::W30, Mips::W31, 
  };

  // MSA128 Bit set.
  const uint8_t MSA128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x3f, 
  };

  // ACC128 Register Class...
  const uint16_t ACC128[] = {
    Mips::AC0_64, 
  };

  // ACC128 Bit set.
  const uint8_t ACC128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

}

extern const MCRegisterClass MipsMCRegisterClasses[] = {
  { "CCR", CCR, CCRBits, 32, sizeof(CCRBits), Mips::CCRRegClassID, 4, 4, 1, 0 },
  { "DSPR", DSPR, DSPRBits, 32, sizeof(DSPRBits), Mips::DSPRRegClassID, 4, 4, 1, 1 },
  { "FGR32", FGR32, FGR32Bits, 32, sizeof(FGR32Bits), Mips::FGR32RegClassID, 4, 4, 1, 1 },
  { "GPR32", GPR32, GPR32Bits, 32, sizeof(GPR32Bits), Mips::GPR32RegClassID, 4, 4, 1, 1 },
  { "CPU16RegsPlusSP", CPU16RegsPlusSP, CPU16RegsPlusSPBits, 9, sizeof(CPU16RegsPlusSPBits), Mips::CPU16RegsPlusSPRegClassID, 4, 4, 1, 1 },
  { "CPU16Regs", CPU16Regs, CPU16RegsBits, 8, sizeof(CPU16RegsBits), Mips::CPU16RegsRegClassID, 4, 4, 1, 1 },
  { "FCC", FCC, FCCBits, 8, sizeof(FCCBits), Mips::FCCRegClassID, 4, 4, 1, 0 },
  { "HI32DSP", HI32DSP, HI32DSPBits, 4, sizeof(HI32DSPBits), Mips::HI32DSPRegClassID, 4, 4, 1, 1 },
  { "LO32DSP", LO32DSP, LO32DSPBits, 4, sizeof(LO32DSPBits), Mips::LO32DSPRegClassID, 4, 4, 1, 1 },
  { "CPURAReg", CPURAReg, CPURARegBits, 1, sizeof(CPURARegBits), Mips::CPURARegRegClassID, 4, 4, 1, 0 },
  { "CPUSPReg", CPUSPReg, CPUSPRegBits, 1, sizeof(CPUSPRegBits), Mips::CPUSPRegRegClassID, 4, 4, 1, 0 },
  { "DSPCC", DSPCC, DSPCCBits, 1, sizeof(DSPCCBits), Mips::DSPCCRegClassID, 4, 4, 1, 1 },
  { "HI32", HI32, HI32Bits, 1, sizeof(HI32Bits), Mips::HI32RegClassID, 4, 4, 1, 1 },
  { "HWRegs", HWRegs, HWRegsBits, 1, sizeof(HWRegsBits), Mips::HWRegsRegClassID, 4, 4, 1, 0 },
  { "LO32", LO32, LO32Bits, 1, sizeof(LO32Bits), Mips::LO32RegClassID, 4, 4, 1, 1 },
  { "FGR64", FGR64, FGR64Bits, 32, sizeof(FGR64Bits), Mips::FGR64RegClassID, 8, 8, 1, 1 },
  { "GPR64", GPR64, GPR64Bits, 32, sizeof(GPR64Bits), Mips::GPR64RegClassID, 8, 8, 1, 1 },
  { "AFGR64", AFGR64, AFGR64Bits, 16, sizeof(AFGR64Bits), Mips::AFGR64RegClassID, 8, 8, 1, 1 },
  { "GPR64_with_sub_32_in_CPU16RegsPlusSP", GPR64_with_sub_32_in_CPU16RegsPlusSP, GPR64_with_sub_32_in_CPU16RegsPlusSPBits, 9, sizeof(GPR64_with_sub_32_in_CPU16RegsPlusSPBits), Mips::GPR64_with_sub_32_in_CPU16RegsPlusSPRegClassID, 8, 8, 1, 1 },
  { "GPR64_with_sub_32_in_CPU16Regs", GPR64_with_sub_32_in_CPU16Regs, GPR64_with_sub_32_in_CPU16RegsBits, 8, sizeof(GPR64_with_sub_32_in_CPU16RegsBits), Mips::GPR64_with_sub_32_in_CPU16RegsRegClassID, 8, 8, 1, 1 },
  { "ACC64DSP", ACC64DSP, ACC64DSPBits, 4, sizeof(ACC64DSPBits), Mips::ACC64DSPRegClassID, 8, 8, 1, 1 },
  { "ACC64", ACC64, ACC64Bits, 1, sizeof(ACC64Bits), Mips::ACC64RegClassID, 8, 8, 1, 1 },
  { "GPR64_with_sub_32_in_CPURAReg", GPR64_with_sub_32_in_CPURAReg, GPR64_with_sub_32_in_CPURARegBits, 1, sizeof(GPR64_with_sub_32_in_CPURARegBits), Mips::GPR64_with_sub_32_in_CPURARegRegClassID, 8, 8, 1, 1 },
  { "GPR64_with_sub_32_in_CPUSPReg", GPR64_with_sub_32_in_CPUSPReg, GPR64_with_sub_32_in_CPUSPRegBits, 1, sizeof(GPR64_with_sub_32_in_CPUSPRegBits), Mips::GPR64_with_sub_32_in_CPUSPRegRegClassID, 8, 8, 1, 1 },
  { "HI64", HI64, HI64Bits, 1, sizeof(HI64Bits), Mips::HI64RegClassID, 8, 8, 1, 1 },
  { "LO64", LO64, LO64Bits, 1, sizeof(LO64Bits), Mips::LO64RegClassID, 8, 8, 1, 1 },
  { "MSA128", MSA128, MSA128Bits, 32, sizeof(MSA128Bits), Mips::MSA128RegClassID, 16, 16, 1, 1 },
  { "ACC128", ACC128, ACC128Bits, 1, sizeof(ACC128Bits), Mips::ACC128RegClassID, 16, 16, 1, 1 },
};

// Mips Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0Dwarf2L[] = {
  { 0U, Mips::ZERO_64 },
  { 1U, Mips::AT_64 },
  { 2U, Mips::V0_64 },
  { 3U, Mips::V1_64 },
  { 4U, Mips::A0_64 },
  { 5U, Mips::A1_64 },
  { 6U, Mips::A2_64 },
  { 7U, Mips::A3_64 },
  { 8U, Mips::T0_64 },
  { 9U, Mips::T1_64 },
  { 10U, Mips::T2_64 },
  { 11U, Mips::T3_64 },
  { 12U, Mips::T4_64 },
  { 13U, Mips::T5_64 },
  { 14U, Mips::T6_64 },
  { 15U, Mips::T7_64 },
  { 16U, Mips::S0_64 },
  { 17U, Mips::S1_64 },
  { 18U, Mips::S2_64 },
  { 19U, Mips::S3_64 },
  { 20U, Mips::S4_64 },
  { 21U, Mips::S5_64 },
  { 22U, Mips::S6_64 },
  { 23U, Mips::S7_64 },
  { 24U, Mips::T8_64 },
  { 25U, Mips::T9_64 },
  { 26U, Mips::K0_64 },
  { 27U, Mips::K1_64 },
  { 28U, Mips::GP_64 },
  { 29U, Mips::SP_64 },
  { 30U, Mips::FP_64 },
  { 31U, Mips::RA_64 },
  { 32U, Mips::D0_64 },
  { 33U, Mips::D1_64 },
  { 34U, Mips::D2_64 },
  { 35U, Mips::D3_64 },
  { 36U, Mips::D4_64 },
  { 37U, Mips::D5_64 },
  { 38U, Mips::D6_64 },
  { 39U, Mips::D7_64 },
  { 40U, Mips::D8_64 },
  { 41U, Mips::D9_64 },
  { 42U, Mips::D10_64 },
  { 43U, Mips::D11_64 },
  { 44U, Mips::D12_64 },
  { 45U, Mips::D13_64 },
  { 46U, Mips::D14_64 },
  { 47U, Mips::D15_64 },
  { 48U, Mips::D16_64 },
  { 49U, Mips::D17_64 },
  { 50U, Mips::D18_64 },
  { 51U, Mips::D19_64 },
  { 52U, Mips::D20_64 },
  { 53U, Mips::D21_64 },
  { 54U, Mips::D22_64 },
  { 55U, Mips::D23_64 },
  { 56U, Mips::D24_64 },
  { 57U, Mips::D25_64 },
  { 58U, Mips::D26_64 },
  { 59U, Mips::D27_64 },
  { 60U, Mips::D28_64 },
  { 61U, Mips::D29_64 },
  { 62U, Mips::D30_64 },
  { 63U, Mips::D31_64 },
  { 64U, Mips::HI0 },
  { 65U, Mips::LO0 },
  { 176U, Mips::HI1 },
  { 177U, Mips::LO1 },
  { 178U, Mips::HI2 },
  { 179U, Mips::LO2 },
  { 180U, Mips::HI3 },
  { 181U, Mips::LO3 },
};
extern const unsigned MipsDwarfFlavour0Dwarf2LSize = sizeof(MipsDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0Dwarf2L[] = {
  { 0U, Mips::ZERO_64 },
  { 1U, Mips::AT_64 },
  { 2U, Mips::V0_64 },
  { 3U, Mips::V1_64 },
  { 4U, Mips::A0_64 },
  { 5U, Mips::A1_64 },
  { 6U, Mips::A2_64 },
  { 7U, Mips::A3_64 },
  { 8U, Mips::T0_64 },
  { 9U, Mips::T1_64 },
  { 10U, Mips::T2_64 },
  { 11U, Mips::T3_64 },
  { 12U, Mips::T4_64 },
  { 13U, Mips::T5_64 },
  { 14U, Mips::T6_64 },
  { 15U, Mips::T7_64 },
  { 16U, Mips::S0_64 },
  { 17U, Mips::S1_64 },
  { 18U, Mips::S2_64 },
  { 19U, Mips::S3_64 },
  { 20U, Mips::S4_64 },
  { 21U, Mips::S5_64 },
  { 22U, Mips::S6_64 },
  { 23U, Mips::S7_64 },
  { 24U, Mips::T8_64 },
  { 25U, Mips::T9_64 },
  { 26U, Mips::K0_64 },
  { 27U, Mips::K1_64 },
  { 28U, Mips::GP_64 },
  { 29U, Mips::SP_64 },
  { 30U, Mips::FP_64 },
  { 31U, Mips::RA_64 },
  { 32U, Mips::D0_64 },
  { 33U, Mips::D1_64 },
  { 34U, Mips::D2_64 },
  { 35U, Mips::D3_64 },
  { 36U, Mips::D4_64 },
  { 37U, Mips::D5_64 },
  { 38U, Mips::D6_64 },
  { 39U, Mips::D7_64 },
  { 40U, Mips::D8_64 },
  { 41U, Mips::D9_64 },
  { 42U, Mips::D10_64 },
  { 43U, Mips::D11_64 },
  { 44U, Mips::D12_64 },
  { 45U, Mips::D13_64 },
  { 46U, Mips::D14_64 },
  { 47U, Mips::D15_64 },
  { 48U, Mips::D16_64 },
  { 49U, Mips::D17_64 },
  { 50U, Mips::D18_64 },
  { 51U, Mips::D19_64 },
  { 52U, Mips::D20_64 },
  { 53U, Mips::D21_64 },
  { 54U, Mips::D22_64 },
  { 55U, Mips::D23_64 },
  { 56U, Mips::D24_64 },
  { 57U, Mips::D25_64 },
  { 58U, Mips::D26_64 },
  { 59U, Mips::D27_64 },
  { 60U, Mips::D28_64 },
  { 61U, Mips::D29_64 },
  { 62U, Mips::D30_64 },
  { 63U, Mips::D31_64 },
  { 64U, Mips::HI0 },
  { 65U, Mips::LO0 },
  { 176U, Mips::HI1 },
  { 177U, Mips::LO1 },
  { 178U, Mips::HI2 },
  { 179U, Mips::LO2 },
  { 180U, Mips::HI3 },
  { 181U, Mips::LO3 },
};
extern const unsigned MipsEHFlavour0Dwarf2LSize = sizeof(MipsEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0L2Dwarf[] = {
  { Mips::AT, 1U },
  { Mips::FP, 30U },
  { Mips::GP, 28U },
  { Mips::RA, 31U },
  { Mips::SP, 29U },
  { Mips::ZERO, 0U },
  { Mips::A0, 4U },
  { Mips::A1, 5U },
  { Mips::A2, 6U },
  { Mips::A3, 7U },
  { Mips::AT_64, 1U },
  { Mips::F0, 32U },
  { Mips::F1, 33U },
  { Mips::F2, 34U },
  { Mips::F3, 35U },
  { Mips::F4, 36U },
  { Mips::F5, 37U },
  { Mips::F6, 38U },
  { Mips::F7, 39U },
  { Mips::F8, 40U },
  { Mips::F9, 41U },
  { Mips::F10, 42U },
  { Mips::F11, 43U },
  { Mips::F12, 44U },
  { Mips::F13, 45U },
  { Mips::F14, 46U },
  { Mips::F15, 47U },
  { Mips::F16, 48U },
  { Mips::F17, 49U },
  { Mips::F18, 50U },
  { Mips::F19, 51U },
  { Mips::F20, 52U },
  { Mips::F21, 53U },
  { Mips::F22, 54U },
  { Mips::F23, 55U },
  { Mips::F24, 56U },
  { Mips::F25, 57U },
  { Mips::F26, 58U },
  { Mips::F27, 59U },
  { Mips::F28, 60U },
  { Mips::F29, 61U },
  { Mips::F30, 62U },
  { Mips::F31, 63U },
  { Mips::FP_64, 30U },
  { Mips::GP_64, 28U },
  { Mips::HI0, 64U },
  { Mips::HI1, 176U },
  { Mips::HI2, 178U },
  { Mips::HI3, 180U },
  { Mips::K0, 26U },
  { Mips::K1, 27U },
  { Mips::LO0, 65U },
  { Mips::LO1, 177U },
  { Mips::LO2, 179U },
  { Mips::LO3, 181U },
  { Mips::RA_64, 31U },
  { Mips::S0, 16U },
  { Mips::S1, 17U },
  { Mips::S2, 18U },
  { Mips::S3, 19U },
  { Mips::S4, 20U },
  { Mips::S5, 21U },
  { Mips::S6, 22U },
  { Mips::S7, 23U },
  { Mips::SP_64, 29U },
  { Mips::T0, 8U },
  { Mips::T1, 9U },
  { Mips::T2, 10U },
  { Mips::T3, 11U },
  { Mips::T4, 12U },
  { Mips::T5, 13U },
  { Mips::T6, 14U },
  { Mips::T7, 15U },
  { Mips::T8, 24U },
  { Mips::T9, 25U },
  { Mips::V0, 2U },
  { Mips::V1, 3U },
  { Mips::W0, 32U },
  { Mips::W1, 33U },
  { Mips::W2, 34U },
  { Mips::W3, 35U },
  { Mips::W4, 36U },
  { Mips::W5, 37U },
  { Mips::W6, 38U },
  { Mips::W7, 39U },
  { Mips::W8, 40U },
  { Mips::W9, 41U },
  { Mips::W10, 42U },
  { Mips::W11, 43U },
  { Mips::W12, 44U },
  { Mips::W13, 45U },
  { Mips::W14, 46U },
  { Mips::W15, 47U },
  { Mips::W16, 48U },
  { Mips::W17, 49U },
  { Mips::W18, 50U },
  { Mips::W19, 51U },
  { Mips::W20, 52U },
  { Mips::W21, 53U },
  { Mips::W22, 54U },
  { Mips::W23, 55U },
  { Mips::W24, 56U },
  { Mips::W25, 57U },
  { Mips::W26, 58U },
  { Mips::W27, 59U },
  { Mips::W28, 60U },
  { Mips::W29, 61U },
  { Mips::W30, 62U },
  { Mips::W31, 63U },
  { Mips::ZERO_64, 0U },
  { Mips::A0_64, 4U },
  { Mips::A1_64, 5U },
  { Mips::A2_64, 6U },
  { Mips::A3_64, 7U },
  { Mips::D0_64, 32U },
  { Mips::D1_64, 33U },
  { Mips::D2_64, 34U },
  { Mips::D3_64, 35U },
  { Mips::D4_64, 36U },
  { Mips::D5_64, 37U },
  { Mips::D6_64, 38U },
  { Mips::D7_64, 39U },
  { Mips::D8_64, 40U },
  { Mips::D9_64, 41U },
  { Mips::D10_64, 42U },
  { Mips::D11_64, 43U },
  { Mips::D12_64, 44U },
  { Mips::D13_64, 45U },
  { Mips::D14_64, 46U },
  { Mips::D15_64, 47U },
  { Mips::D16_64, 48U },
  { Mips::D17_64, 49U },
  { Mips::D18_64, 50U },
  { Mips::D19_64, 51U },
  { Mips::D20_64, 52U },
  { Mips::D21_64, 53U },
  { Mips::D22_64, 54U },
  { Mips::D23_64, 55U },
  { Mips::D24_64, 56U },
  { Mips::D25_64, 57U },
  { Mips::D26_64, 58U },
  { Mips::D27_64, 59U },
  { Mips::D28_64, 60U },
  { Mips::D29_64, 61U },
  { Mips::D30_64, 62U },
  { Mips::D31_64, 63U },
  { Mips::K0_64, 26U },
  { Mips::K1_64, 27U },
  { Mips::S0_64, 16U },
  { Mips::S1_64, 17U },
  { Mips::S2_64, 18U },
  { Mips::S3_64, 19U },
  { Mips::S4_64, 20U },
  { Mips::S5_64, 21U },
  { Mips::S6_64, 22U },
  { Mips::S7_64, 23U },
  { Mips::T0_64, 8U },
  { Mips::T1_64, 9U },
  { Mips::T2_64, 10U },
  { Mips::T3_64, 11U },
  { Mips::T4_64, 12U },
  { Mips::T5_64, 13U },
  { Mips::T6_64, 14U },
  { Mips::T7_64, 15U },
  { Mips::T8_64, 24U },
  { Mips::T9_64, 25U },
  { Mips::V0_64, 2U },
  { Mips::V1_64, 3U },
};
extern const unsigned MipsDwarfFlavour0L2DwarfSize = sizeof(MipsDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0L2Dwarf[] = {
  { Mips::AT, 1U },
  { Mips::FP, 30U },
  { Mips::GP, 28U },
  { Mips::RA, 31U },
  { Mips::SP, 29U },
  { Mips::ZERO, 0U },
  { Mips::A0, 4U },
  { Mips::A1, 5U },
  { Mips::A2, 6U },
  { Mips::A3, 7U },
  { Mips::AT_64, 1U },
  { Mips::F0, 32U },
  { Mips::F1, 33U },
  { Mips::F2, 34U },
  { Mips::F3, 35U },
  { Mips::F4, 36U },
  { Mips::F5, 37U },
  { Mips::F6, 38U },
  { Mips::F7, 39U },
  { Mips::F8, 40U },
  { Mips::F9, 41U },
  { Mips::F10, 42U },
  { Mips::F11, 43U },
  { Mips::F12, 44U },
  { Mips::F13, 45U },
  { Mips::F14, 46U },
  { Mips::F15, 47U },
  { Mips::F16, 48U },
  { Mips::F17, 49U },
  { Mips::F18, 50U },
  { Mips::F19, 51U },
  { Mips::F20, 52U },
  { Mips::F21, 53U },
  { Mips::F22, 54U },
  { Mips::F23, 55U },
  { Mips::F24, 56U },
  { Mips::F25, 57U },
  { Mips::F26, 58U },
  { Mips::F27, 59U },
  { Mips::F28, 60U },
  { Mips::F29, 61U },
  { Mips::F30, 62U },
  { Mips::F31, 63U },
  { Mips::FP_64, 30U },
  { Mips::GP_64, 28U },
  { Mips::HI0, 64U },
  { Mips::HI1, 176U },
  { Mips::HI2, 178U },
  { Mips::HI3, 180U },
  { Mips::K0, 26U },
  { Mips::K1, 27U },
  { Mips::LO0, 65U },
  { Mips::LO1, 177U },
  { Mips::LO2, 179U },
  { Mips::LO3, 181U },
  { Mips::RA_64, 31U },
  { Mips::S0, 16U },
  { Mips::S1, 17U },
  { Mips::S2, 18U },
  { Mips::S3, 19U },
  { Mips::S4, 20U },
  { Mips::S5, 21U },
  { Mips::S6, 22U },
  { Mips::S7, 23U },
  { Mips::SP_64, 29U },
  { Mips::T0, 8U },
  { Mips::T1, 9U },
  { Mips::T2, 10U },
  { Mips::T3, 11U },
  { Mips::T4, 12U },
  { Mips::T5, 13U },
  { Mips::T6, 14U },
  { Mips::T7, 15U },
  { Mips::T8, 24U },
  { Mips::T9, 25U },
  { Mips::V0, 2U },
  { Mips::V1, 3U },
  { Mips::W0, 32U },
  { Mips::W1, 33U },
  { Mips::W2, 34U },
  { Mips::W3, 35U },
  { Mips::W4, 36U },
  { Mips::W5, 37U },
  { Mips::W6, 38U },
  { Mips::W7, 39U },
  { Mips::W8, 40U },
  { Mips::W9, 41U },
  { Mips::W10, 42U },
  { Mips::W11, 43U },
  { Mips::W12, 44U },
  { Mips::W13, 45U },
  { Mips::W14, 46U },
  { Mips::W15, 47U },
  { Mips::W16, 48U },
  { Mips::W17, 49U },
  { Mips::W18, 50U },
  { Mips::W19, 51U },
  { Mips::W20, 52U },
  { Mips::W21, 53U },
  { Mips::W22, 54U },
  { Mips::W23, 55U },
  { Mips::W24, 56U },
  { Mips::W25, 57U },
  { Mips::W26, 58U },
  { Mips::W27, 59U },
  { Mips::W28, 60U },
  { Mips::W29, 61U },
  { Mips::W30, 62U },
  { Mips::W31, 63U },
  { Mips::ZERO_64, 0U },
  { Mips::A0_64, 4U },
  { Mips::A1_64, 5U },
  { Mips::A2_64, 6U },
  { Mips::A3_64, 7U },
  { Mips::D0_64, 32U },
  { Mips::D1_64, 33U },
  { Mips::D2_64, 34U },
  { Mips::D3_64, 35U },
  { Mips::D4_64, 36U },
  { Mips::D5_64, 37U },
  { Mips::D6_64, 38U },
  { Mips::D7_64, 39U },
  { Mips::D8_64, 40U },
  { Mips::D9_64, 41U },
  { Mips::D10_64, 42U },
  { Mips::D11_64, 43U },
  { Mips::D12_64, 44U },
  { Mips::D13_64, 45U },
  { Mips::D14_64, 46U },
  { Mips::D15_64, 47U },
  { Mips::D16_64, 48U },
  { Mips::D17_64, 49U },
  { Mips::D18_64, 50U },
  { Mips::D19_64, 51U },
  { Mips::D20_64, 52U },
  { Mips::D21_64, 53U },
  { Mips::D22_64, 54U },
  { Mips::D23_64, 55U },
  { Mips::D24_64, 56U },
  { Mips::D25_64, 57U },
  { Mips::D26_64, 58U },
  { Mips::D27_64, 59U },
  { Mips::D28_64, 60U },
  { Mips::D29_64, 61U },
  { Mips::D30_64, 62U },
  { Mips::D31_64, 63U },
  { Mips::K0_64, 26U },
  { Mips::K1_64, 27U },
  { Mips::S0_64, 16U },
  { Mips::S1_64, 17U },
  { Mips::S2_64, 18U },
  { Mips::S3_64, 19U },
  { Mips::S4_64, 20U },
  { Mips::S5_64, 21U },
  { Mips::S6_64, 22U },
  { Mips::S7_64, 23U },
  { Mips::T0_64, 8U },
  { Mips::T1_64, 9U },
  { Mips::T2_64, 10U },
  { Mips::T3_64, 11U },
  { Mips::T4_64, 12U },
  { Mips::T5_64, 13U },
  { Mips::T6_64, 14U },
  { Mips::T7_64, 15U },
  { Mips::T8_64, 24U },
  { Mips::T9_64, 25U },
  { Mips::V0_64, 2U },
  { Mips::V1_64, 3U },
};
extern const unsigned MipsEHFlavour0L2DwarfSize = sizeof(MipsEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const uint16_t MipsRegEncodingTable[] = {
  0,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  30,
  28,
  0,
  31,
  29,
  0,
  4,
  5,
  6,
  7,
  0,
  1,
  2,
  3,
  1,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  0,
  0,
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  30,
  28,
  0,
  0,
  0,
  0,
  29,
  26,
  27,
  0,
  0,
  0,
  0,
  31,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  29,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  24,
  25,
  2,
  3,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  4,
  5,
  6,
  7,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  0,
  26,
  27,
  0,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  24,
  25,
  2,
  3,
};
static inline void InitMipsMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(MipsRegDesc, 245, RA, PC, MipsMCRegisterClasses, 28, MipsRegUnitRoots, 124, MipsRegDiffLists, MipsRegStrings, MipsSubRegIdxLists, 14,
MipsSubRegIdxRanges,   MipsRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MipsDwarfFlavour0Dwarf2L, MipsDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(MipsEHFlavour0Dwarf2L, MipsEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MipsDwarfFlavour0L2Dwarf, MipsDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(MipsEHFlavour0L2Dwarf, MipsEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Register Information Header Fragment                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

struct MipsGenRegisterInfo : public TargetRegisterInfo {
  explicit MipsGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0, unsigned PC = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  virtual unsigned composeSubRegIndicesImpl(unsigned, unsigned) const;
  virtual const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const;
  virtual const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const;
  virtual unsigned getRegUnitWeight(unsigned RegUnit) const;
  virtual unsigned getNumRegPressureSets() const;
  virtual const char *getRegPressureSetName(unsigned Idx) const;
  virtual unsigned getRegPressureSetLimit(unsigned Idx) const;
  virtual const int *getRegClassPressureSets(const TargetRegisterClass *RC) const;
  virtual const int *getRegUnitPressureSets(unsigned RegUnit) const;
};

namespace Mips { // Register classes
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass DSPRRegClass;
  extern const TargetRegisterClass FGR32RegClass;
  extern const TargetRegisterClass GPR32RegClass;
  extern const TargetRegisterClass CPU16RegsPlusSPRegClass;
  extern const TargetRegisterClass CPU16RegsRegClass;
  extern const TargetRegisterClass FCCRegClass;
  extern const TargetRegisterClass HI32DSPRegClass;
  extern const TargetRegisterClass LO32DSPRegClass;
  extern const TargetRegisterClass CPURARegRegClass;
  extern const TargetRegisterClass CPUSPRegRegClass;
  extern const TargetRegisterClass DSPCCRegClass;
  extern const TargetRegisterClass HI32RegClass;
  extern const TargetRegisterClass HWRegsRegClass;
  extern const TargetRegisterClass LO32RegClass;
  extern const TargetRegisterClass FGR64RegClass;
  extern const TargetRegisterClass GPR64RegClass;
  extern const TargetRegisterClass AFGR64RegClass;
  extern const TargetRegisterClass GPR64_with_sub_32_in_CPU16RegsPlusSPRegClass;
  extern const TargetRegisterClass GPR64_with_sub_32_in_CPU16RegsRegClass;
  extern const TargetRegisterClass ACC64DSPRegClass;
  extern const TargetRegisterClass ACC64RegClass;
  extern const TargetRegisterClass GPR64_with_sub_32_in_CPURARegRegClass;
  extern const TargetRegisterClass GPR64_with_sub_32_in_CPUSPRegRegClass;
  extern const TargetRegisterClass HI64RegClass;
  extern const TargetRegisterClass LO64RegClass;
  extern const TargetRegisterClass MSA128RegClass;
  extern const TargetRegisterClass ACC128RegClass;
} // end of namespace Mips

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Register and Register Classes Information                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass MipsMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
  /* 2 */ MVT::i64, MVT::Other,
  /* 4 */ MVT::f32, MVT::Other,
  /* 6 */ MVT::f64, MVT::Other,
  /* 8 */ MVT::v4i8, MVT::v2i16, MVT::Other,
  /* 11 */ MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::Other,
  /* 16 */ MVT::Untyped, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_32", "sub_64", "sub_dsp16_19", "sub_dsp20", "sub_dsp21", "sub_dsp22", "sub_dsp23", "sub_fpeven", "sub_fpodd", "sub_hi", "sub_lo", "sub_hi_then_sub_32", "sub_32_sub_hi_then_sub_32" };


static const unsigned SubRegIndexLaneMaskTable[] = {
  ~0u,
  0x00000001, // sub_32
  0x00000001, // sub_64
  0x00000002, // sub_dsp16_19
  0x00000004, // sub_dsp20
  0x00000008, // sub_dsp21
  0x00000010, // sub_dsp22
  0x00000020, // sub_dsp23
  0x00000040, // sub_fpeven
  0x00000080, // sub_fpodd
  0x00000100, // sub_hi
  0x00000001, // sub_lo
  0x00000100, // sub_hi_then_sub_32
  0x00000101, // sub_32_sub_hi_then_sub_32
 };



static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t CCRSubClassMask[] = {
  0x00000001, 
};

static const uint32_t DSPRSubClassMask[] = {
  0x0000063a, 
  0x00cd0000, // sub_32
};

static const uint32_t FGR32SubClassMask[] = {
  0x00000004, 
  0x04008000, // sub_32
  0x00020000, // sub_fpeven
  0x00020000, // sub_fpodd
};

static const uint32_t GPR32SubClassMask[] = {
  0x00000638, 
  0x00cd0000, // sub_32
};

static const uint32_t CPU16RegsPlusSPSubClassMask[] = {
  0x00000430, 
  0x008c0000, // sub_32
};

static const uint32_t CPU16RegsSubClassMask[] = {
  0x00000020, 
  0x00080000, // sub_32
};

static const uint32_t FCCSubClassMask[] = {
  0x00000040, 
};

static const uint32_t HI32DSPSubClassMask[] = {
  0x00001080, 
  0x01000000, // sub_32
  0x00300000, // sub_hi
  0x08000000, // sub_hi_then_sub_32
};

static const uint32_t LO32DSPSubClassMask[] = {
  0x00004100, 
  0x0a000000, // sub_32
  0x00300000, // sub_lo
};

static const uint32_t CPURARegSubClassMask[] = {
  0x00000200, 
  0x00400000, // sub_32
};

static const uint32_t CPUSPRegSubClassMask[] = {
  0x00000400, 
  0x00800000, // sub_32
};

static const uint32_t DSPCCSubClassMask[] = {
  0x00000800, 
};

static const uint32_t HI32SubClassMask[] = {
  0x00001000, 
  0x01000000, // sub_32
  0x00200000, // sub_hi
  0x08000000, // sub_hi_then_sub_32
};

static const uint32_t HWRegsSubClassMask[] = {
  0x00002000, 
};

static const uint32_t LO32SubClassMask[] = {
  0x00004000, 
  0x0a000000, // sub_32
  0x00200000, // sub_lo
};

static const uint32_t FGR64SubClassMask[] = {
  0x00008000, 
  0x04000000, // sub_64
};

static const uint32_t GPR64SubClassMask[] = {
  0x00cd0000, 
};

static const uint32_t AFGR64SubClassMask[] = {
  0x00020000, 
};

static const uint32_t GPR64_with_sub_32_in_CPU16RegsPlusSPSubClassMask[] = {
  0x008c0000, 
};

static const uint32_t GPR64_with_sub_32_in_CPU16RegsSubClassMask[] = {
  0x00080000, 
};

static const uint32_t ACC64DSPSubClassMask[] = {
  0x00300000, 
  0x08000000, // sub_32_sub_hi_then_sub_32
};

static const uint32_t ACC64SubClassMask[] = {
  0x00200000, 
  0x08000000, // sub_32_sub_hi_then_sub_32
};

static const uint32_t GPR64_with_sub_32_in_CPURARegSubClassMask[] = {
  0x00400000, 
};

static const uint32_t GPR64_with_sub_32_in_CPUSPRegSubClassMask[] = {
  0x00800000, 
};

static const uint32_t HI64SubClassMask[] = {
  0x01000000, 
  0x08000000, // sub_hi
};

static const uint32_t LO64SubClassMask[] = {
  0x02000000, 
  0x08000000, // sub_lo
};

static const uint32_t MSA128SubClassMask[] = {
  0x04000000, 
};

static const uint32_t ACC128SubClassMask[] = {
  0x08000000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 2, 0,
  /* 4 */ 1, 8, 9, 0,
  /* 8 */ 10, 0,
  /* 10 */ 1, 11, 0,
  /* 13 */ 1, 10, 12, 0,
  /* 17 */ 13, 0,
};

static const TargetRegisterClass *const GPR32Superclasses[] = {
  &Mips::DSPRRegClass,
  NULL
};

static const TargetRegisterClass *const CPU16RegsPlusSPSuperclasses[] = {
  &Mips::DSPRRegClass,
  &Mips::GPR32RegClass,
  NULL
};

static const TargetRegisterClass *const CPU16RegsSuperclasses[] = {
  &Mips::DSPRRegClass,
  &Mips::GPR32RegClass,
  &Mips::CPU16RegsPlusSPRegClass,
  NULL
};

static const TargetRegisterClass *const CPURARegSuperclasses[] = {
  &Mips::DSPRRegClass,
  &Mips::GPR32RegClass,
  NULL
};

static const TargetRegisterClass *const CPUSPRegSuperclasses[] = {
  &Mips::DSPRRegClass,
  &Mips::GPR32RegClass,
  &Mips::CPU16RegsPlusSPRegClass,
  NULL
};

static const TargetRegisterClass *const HI32Superclasses[] = {
  &Mips::HI32DSPRegClass,
  NULL
};

static const TargetRegisterClass *const LO32Superclasses[] = {
  &Mips::LO32DSPRegClass,
  NULL
};

static const TargetRegisterClass *const GPR64_with_sub_32_in_CPU16RegsPlusSPSuperclasses[] = {
  &Mips::GPR64RegClass,
  NULL
};

static const TargetRegisterClass *const GPR64_with_sub_32_in_CPU16RegsSuperclasses[] = {
  &Mips::GPR64RegClass,
  &Mips::GPR64_with_sub_32_in_CPU16RegsPlusSPRegClass,
  NULL
};

static const TargetRegisterClass *const ACC64Superclasses[] = {
  &Mips::ACC64DSPRegClass,
  NULL
};

static const TargetRegisterClass *const GPR64_with_sub_32_in_CPURARegSuperclasses[] = {
  &Mips::GPR64RegClass,
  NULL
};

static const TargetRegisterClass *const GPR64_with_sub_32_in_CPUSPRegSuperclasses[] = {
  &Mips::GPR64RegClass,
  &Mips::GPR64_with_sub_32_in_CPU16RegsPlusSPRegClass,
  NULL
};

namespace Mips {   // Register class instances
  extern const TargetRegisterClass CCRRegClass = {
    &MipsMCRegisterClasses[CCRRegClassID],
    VTLists + 0,
    CCRSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass DSPRRegClass = {
    &MipsMCRegisterClasses[DSPRRegClassID],
    VTLists + 8,
    DSPRSubClassMask,
    SuperRegIdxSeqs + 0,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass FGR32RegClass = {
    &MipsMCRegisterClasses[FGR32RegClassID],
    VTLists + 4,
    FGR32SubClassMask,
    SuperRegIdxSeqs + 4,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPR32RegClass = {
    &MipsMCRegisterClasses[GPR32RegClassID],
    VTLists + 0,
    GPR32SubClassMask,
    SuperRegIdxSeqs + 0,
    GPR32Superclasses,
    0
  };

  extern const TargetRegisterClass CPU16RegsPlusSPRegClass = {
    &MipsMCRegisterClasses[CPU16RegsPlusSPRegClassID],
    VTLists + 0,
    CPU16RegsPlusSPSubClassMask,
    SuperRegIdxSeqs + 0,
    CPU16RegsPlusSPSuperclasses,
    0
  };

  extern const TargetRegisterClass CPU16RegsRegClass = {
    &MipsMCRegisterClasses[CPU16RegsRegClassID],
    VTLists + 0,
    CPU16RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    CPU16RegsSuperclasses,
    0
  };

  extern const TargetRegisterClass FCCRegClass = {
    &MipsMCRegisterClasses[FCCRegClassID],
    VTLists + 0,
    FCCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass HI32DSPRegClass = {
    &MipsMCRegisterClasses[HI32DSPRegClassID],
    VTLists + 0,
    HI32DSPSubClassMask,
    SuperRegIdxSeqs + 13,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass LO32DSPRegClass = {
    &MipsMCRegisterClasses[LO32DSPRegClassID],
    VTLists + 0,
    LO32DSPSubClassMask,
    SuperRegIdxSeqs + 10,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass CPURARegRegClass = {
    &MipsMCRegisterClasses[CPURARegRegClassID],
    VTLists + 0,
    CPURARegSubClassMask,
    SuperRegIdxSeqs + 0,
    CPURARegSuperclasses,
    0
  };

  extern const TargetRegisterClass CPUSPRegRegClass = {
    &MipsMCRegisterClasses[CPUSPRegRegClassID],
    VTLists + 0,
    CPUSPRegSubClassMask,
    SuperRegIdxSeqs + 0,
    CPUSPRegSuperclasses,
    0
  };

  extern const TargetRegisterClass DSPCCRegClass = {
    &MipsMCRegisterClasses[DSPCCRegClassID],
    VTLists + 8,
    DSPCCSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass HI32RegClass = {
    &MipsMCRegisterClasses[HI32RegClassID],
    VTLists + 0,
    HI32SubClassMask,
    SuperRegIdxSeqs + 13,
    HI32Superclasses,
    0
  };

  extern const TargetRegisterClass HWRegsRegClass = {
    &MipsMCRegisterClasses[HWRegsRegClassID],
    VTLists + 0,
    HWRegsSubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass LO32RegClass = {
    &MipsMCRegisterClasses[LO32RegClassID],
    VTLists + 0,
    LO32SubClassMask,
    SuperRegIdxSeqs + 10,
    LO32Superclasses,
    0
  };

  extern const TargetRegisterClass FGR64RegClass = {
    &MipsMCRegisterClasses[FGR64RegClassID],
    VTLists + 6,
    FGR64SubClassMask,
    SuperRegIdxSeqs + 2,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPR64RegClass = {
    &MipsMCRegisterClasses[GPR64RegClassID],
    VTLists + 2,
    GPR64SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass AFGR64RegClass = {
    &MipsMCRegisterClasses[AFGR64RegClassID],
    VTLists + 6,
    AFGR64SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass GPR64_with_sub_32_in_CPU16RegsPlusSPRegClass = {
    &MipsMCRegisterClasses[GPR64_with_sub_32_in_CPU16RegsPlusSPRegClassID],
    VTLists + 2,
    GPR64_with_sub_32_in_CPU16RegsPlusSPSubClassMask,
    SuperRegIdxSeqs + 1,
    GPR64_with_sub_32_in_CPU16RegsPlusSPSuperclasses,
    0
  };

  extern const TargetRegisterClass GPR64_with_sub_32_in_CPU16RegsRegClass = {
    &MipsMCRegisterClasses[GPR64_with_sub_32_in_CPU16RegsRegClassID],
    VTLists + 2,
    GPR64_with_sub_32_in_CPU16RegsSubClassMask,
    SuperRegIdxSeqs + 1,
    GPR64_with_sub_32_in_CPU16RegsSuperclasses,
    0
  };

  extern const TargetRegisterClass ACC64DSPRegClass = {
    &MipsMCRegisterClasses[ACC64DSPRegClassID],
    VTLists + 16,
    ACC64DSPSubClassMask,
    SuperRegIdxSeqs + 17,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ACC64RegClass = {
    &MipsMCRegisterClasses[ACC64RegClassID],
    VTLists + 16,
    ACC64SubClassMask,
    SuperRegIdxSeqs + 17,
    ACC64Superclasses,
    0
  };

  extern const TargetRegisterClass GPR64_with_sub_32_in_CPURARegRegClass = {
    &MipsMCRegisterClasses[GPR64_with_sub_32_in_CPURARegRegClassID],
    VTLists + 2,
    GPR64_with_sub_32_in_CPURARegSubClassMask,
    SuperRegIdxSeqs + 1,
    GPR64_with_sub_32_in_CPURARegSuperclasses,
    0
  };

  extern const TargetRegisterClass GPR64_with_sub_32_in_CPUSPRegRegClass = {
    &MipsMCRegisterClasses[GPR64_with_sub_32_in_CPUSPRegRegClassID],
    VTLists + 2,
    GPR64_with_sub_32_in_CPUSPRegSubClassMask,
    SuperRegIdxSeqs + 1,
    GPR64_with_sub_32_in_CPUSPRegSuperclasses,
    0
  };

  extern const TargetRegisterClass HI64RegClass = {
    &MipsMCRegisterClasses[HI64RegClassID],
    VTLists + 2,
    HI64SubClassMask,
    SuperRegIdxSeqs + 8,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass LO64RegClass = {
    &MipsMCRegisterClasses[LO64RegClassID],
    VTLists + 2,
    LO64SubClassMask,
    SuperRegIdxSeqs + 11,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass MSA128RegClass = {
    &MipsMCRegisterClasses[MSA128RegClassID],
    VTLists + 11,
    MSA128SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass ACC128RegClass = {
    &MipsMCRegisterClasses[ACC128RegClassID],
    VTLists + 16,
    ACC128SubClassMask,
    SuperRegIdxSeqs + 1,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Mips::CCRRegClass,
    &Mips::DSPRRegClass,
    &Mips::FGR32RegClass,
    &Mips::GPR32RegClass,
    &Mips::CPU16RegsPlusSPRegClass,
    &Mips::CPU16RegsRegClass,
    &Mips::FCCRegClass,
    &Mips::HI32DSPRegClass,
    &Mips::LO32DSPRegClass,
    &Mips::CPURARegRegClass,
    &Mips::CPUSPRegRegClass,
    &Mips::DSPCCRegClass,
    &Mips::HI32RegClass,
    &Mips::HWRegsRegClass,
    &Mips::LO32RegClass,
    &Mips::FGR64RegClass,
    &Mips::GPR64RegClass,
    &Mips::AFGR64RegClass,
    &Mips::GPR64_with_sub_32_in_CPU16RegsPlusSPRegClass,
    &Mips::GPR64_with_sub_32_in_CPU16RegsRegClass,
    &Mips::ACC64DSPRegClass,
    &Mips::ACC64RegClass,
    &Mips::GPR64_with_sub_32_in_CPURARegRegClass,
    &Mips::GPR64_with_sub_32_in_CPUSPRegRegClass,
    &Mips::HI64RegClass,
    &Mips::LO64RegClass,
    &Mips::MSA128RegClass,
    &Mips::ACC128RegClass,
  };
}

static const TargetRegisterInfoDesc MipsRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
};
unsigned MipsGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t RowMap[13] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
  };
  static const uint8_t Rows[2][13] = {
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 12, 1, 0, 0, },
    { 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 13);
  --IdxB; assert(IdxB < 13);
  return Rows[RowMap[IdxA]][IdxB];
}

const TargetRegisterClass *MipsGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[28][13] = {
    {	// CCR
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// DSPR
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// FGR32
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// GPR32
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPU16RegsPlusSP
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPU16Regs
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// FCC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HI32DSP
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// LO32DSP
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPURAReg
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// CPUSPReg
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// DSPCC
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HI32
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HWRegs
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// LO32
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// FGR64
      16,	// sub_32 -> FGR64
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// GPR64
      17,	// sub_32 -> GPR64
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// AFGR64
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      18,	// sub_fpeven -> AFGR64
      18,	// sub_fpodd -> AFGR64
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// GPR64_with_sub_32_in_CPU16RegsPlusSP
      19,	// sub_32 -> GPR64_with_sub_32_in_CPU16RegsPlusSP
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// GPR64_with_sub_32_in_CPU16Regs
      20,	// sub_32 -> GPR64_with_sub_32_in_CPU16Regs
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// ACC64DSP
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      21,	// sub_hi -> ACC64DSP
      21,	// sub_lo -> ACC64DSP
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// ACC64
      0,	// sub_32
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      22,	// sub_hi -> ACC64
      22,	// sub_lo -> ACC64
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// GPR64_with_sub_32_in_CPURAReg
      23,	// sub_32 -> GPR64_with_sub_32_in_CPURAReg
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// GPR64_with_sub_32_in_CPUSPReg
      24,	// sub_32 -> GPR64_with_sub_32_in_CPUSPReg
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// HI64
      25,	// sub_32 -> HI64
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// LO64
      26,	// sub_32 -> LO64
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// MSA128
      27,	// sub_32 -> MSA128
      27,	// sub_64 -> MSA128
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      0,	// sub_hi
      0,	// sub_lo
      0,	// sub_hi_then_sub_32
      0,	// sub_32_sub_hi_then_sub_32
    },
    {	// ACC128
      28,	// sub_32 -> ACC128
      0,	// sub_64
      0,	// sub_dsp16_19
      0,	// sub_dsp20
      0,	// sub_dsp21
      0,	// sub_dsp22
      0,	// sub_dsp23
      0,	// sub_fpeven
      0,	// sub_fpodd
      28,	// sub_hi -> ACC128
      28,	// sub_lo -> ACC128
      28,	// sub_hi_then_sub_32 -> ACC128
      28,	// sub_32_sub_hi_then_sub_32 -> ACC128
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 13 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : 0;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &MipsGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {0, 0},  	// CCR
    {1, 32},  	// DSPR
    {1, 32},  	// FGR32
    {1, 32},  	// GPR32
    {1, 9},  	// CPU16RegsPlusSP
    {1, 8},  	// CPU16Regs
    {0, 0},  	// FCC
    {1, 4},  	// HI32DSP
    {1, 4},  	// LO32DSP
    {1, 1},  	// CPURAReg
    {1, 1},  	// CPUSPReg
    {1, 1},  	// DSPCC
    {1, 1},  	// HI32
    {0, 0},  	// HWRegs
    {1, 1},  	// LO32
    {1, 32},  	// FGR64
    {1, 32},  	// GPR64
    {2, 32},  	// AFGR64
    {1, 9},  	// GPR64_with_sub_32_in_CPU16RegsPlusSP
    {1, 8},  	// GPR64_with_sub_32_in_CPU16Regs
    {2, 8},  	// ACC64DSP
    {2, 2},  	// ACC64
    {1, 1},  	// GPR64_with_sub_32_in_CPURAReg
    {1, 1},  	// GPR64_with_sub_32_in_CPUSPReg
    {1, 1},  	// HI64
    {1, 1},  	// LO64
    {1, 32},  	// MSA128
    {2, 2},  	// ACC128
    {0, 0} };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned MipsGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 124 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned MipsGenRegisterInfo::getNumRegPressureSets() const {
  return 10;
}

// Get the name of this register unit pressure set.
const char *MipsGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *PressureNameTable[] = {
    "DSPCC",
    "GPR64_with_sub_32_in_CPURAReg",
    "GPR64_with_sub_32_in_CPUSPReg",
    "ACC64",
    "HI32DSP+ACC64",
    "LO32DSP+ACC64",
    "ACC64DSP",
    "CPU16RegsPlusSP",
    "DSPR",
    "FGR32",
    0 };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned MipsGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    1,  	// 0: DSPCC
    1,  	// 1: GPR64_with_sub_32_in_CPURAReg
    1,  	// 2: GPR64_with_sub_32_in_CPUSPReg
    2,  	// 3: ACC64
    5,  	// 4: HI32DSP+ACC64
    5,  	// 5: LO32DSP+ACC64
    8,  	// 6: ACC64DSP
    9,  	// 7: CPU16RegsPlusSP
    32,  	// 8: DSPR
    32,  	// 9: FGR32
    0 };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
    -1,  	// #0 CCR
    8,  -1,  	// #1 DSPR
    9,  -1,  	// #3 FGR32
    8,  -1,  	// #5 GPR32
    7,  8,  -1,  	// #7 CPU16RegsPlusSP
    7,  8,  -1,  	// #10 CPU16Regs
    -1,  	// #13 FCC
    4,  6,  -1,  	// #14 HI32DSP
    5,  6,  -1,  	// #17 LO32DSP
    -1,  	// #20 CPURAReg
    -1,  	// #21 CPUSPReg
    0,  -1,  	// #22 DSPCC
    3,  4,  5,  6,  -1,  	// #24 HI32
    -1,  	// #29 HWRegs
    3,  4,  5,  6,  -1,  	// #30 LO32
    9,  -1,  	// #35 FGR64
    8,  -1,  	// #37 GPR64
    9,  -1,  	// #39 AFGR64
    7,  8,  -1,  	// #41 GPR64_with_sub_32_in_CPU16RegsPlusSP
    7,  8,  -1,  	// #44 GPR64_with_sub_32_in_CPU16Regs
    6,  -1,  	// #47 ACC64DSP
    3,  4,  5,  6,  -1,  	// #49 ACC64
    1,  8,  -1,  	// #54 GPR64_with_sub_32_in_CPURAReg
    2,  7,  8,  -1,  	// #57 GPR64_with_sub_32_in_CPUSPReg
    3,  4,  5,  6,  -1,  	// #61 HI64
    3,  4,  5,  6,  -1,  	// #66 LO64
    9,  -1,  	// #71 MSA128
    3,  4,  5,  6,  -1,  	// #73 ACC128
    -1 };

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* MipsGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const unsigned RCSetStartTable[] = {
    0,1,3,5,7,10,13,14,17,20,21,22,24,29,30,35,37,39,41,44,47,49,54,57,61,66,71,73,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* MipsGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 124 && "invalid register unit");
  static const unsigned RUSetStartTable[] = {
    1,22,0,0,0,0,0,0,0,0,0,1,1,0,54,57,1,7,7,7,7,24,24,17,14,17,14,17,14,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,7,7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,7,0 };
  unsigned SetListStart = RUSetStartTable[RegUnit];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc MipsRegDesc[];
extern const MCPhysReg MipsRegDiffLists[];
extern const char MipsRegStrings[];
extern const uint16_t MipsRegUnitRoots[][2];
extern const uint16_t MipsSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits MipsSubRegIdxRanges[];
extern const uint16_t MipsRegEncodingTable[];
// Mips Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0Dwarf2L[];
extern const unsigned MipsDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0Dwarf2L[];
extern const unsigned MipsEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsDwarfFlavour0L2Dwarf[];
extern const unsigned MipsDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair MipsEHFlavour0L2Dwarf[];
extern const unsigned MipsEHFlavour0L2DwarfSize;

MipsGenRegisterInfo::
MipsGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour, unsigned PC)
  : TargetRegisterInfo(MipsRegInfoDesc, RegisterClasses, RegisterClasses+28,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable, 0xffffffc0) {
  InitMCRegisterInfo(MipsRegDesc, 245, RA, PC,
                     MipsMCRegisterClasses, 28,
                     MipsRegUnitRoots,
                     124,
                     MipsRegDiffLists,
                     MipsRegStrings,
                     MipsSubRegIdxLists,
                     14,
                     MipsSubRegIdxRanges,
                     MipsRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MipsDwarfFlavour0Dwarf2L, MipsDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(MipsEHFlavour0Dwarf2L, MipsEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MipsDwarfFlavour0L2Dwarf, MipsDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(MipsEHFlavour0L2Dwarf, MipsEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_Mips16RetHelper_SaveList[] = { Mips::V0, Mips::V1, Mips::A3, Mips::A2, Mips::A1, Mips::A0, Mips::S0, Mips::S1, 0 };
static const uint32_t CSR_Mips16RetHelper_RegMask[] = { 0x0003c000, 0x00000000, 0x00000000, 0x00000000, 0x00300006, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_N32_SaveList[] = { Mips::D31_64, Mips::D29_64, Mips::D27_64, Mips::D25_64, Mips::D24_64, Mips::D23_64, Mips::D22_64, Mips::D21_64, Mips::RA_64, Mips::FP_64, Mips::GP_64, Mips::S7_64, Mips::S6_64, Mips::S5_64, Mips::S4_64, Mips::S3_64, Mips::S2_64, Mips::S1_64, Mips::S0_64, 0 };
static const uint32_t CSR_N32_RegMask[] = { 0x00000b00, 0x0000000c, 0x0000055f, 0x00180000, 0x000001ff, 0x00000000, 0x0abe0000, 0x000001fe, };
static const MCPhysReg CSR_N64_SaveList[] = { Mips::D31_64, Mips::D30_64, Mips::D29_64, Mips::D28_64, Mips::D27_64, Mips::D26_64, Mips::D25_64, Mips::D24_64, Mips::RA_64, Mips::FP_64, Mips::GP_64, Mips::S7_64, Mips::S6_64, Mips::S5_64, Mips::S4_64, Mips::S3_64, Mips::S2_64, Mips::S1_64, Mips::S0_64, 0 };
static const uint32_t CSR_N64_RegMask[] = { 0x00000b00, 0x00000078, 0x000007f8, 0x00180000, 0x000001ff, 0x00000000, 0x0ff00000, 0x000001fe, };
static const MCPhysReg CSR_O32_SaveList[] = { Mips::D15, Mips::D14, Mips::D13, Mips::D12, Mips::D11, Mips::D10, Mips::RA, Mips::FP, Mips::S7, Mips::S6, Mips::S5, Mips::S4, Mips::S3, Mips::S2, Mips::S1, Mips::S0, 0 };
static const uint32_t CSR_O32_RegMask[] = { 0x00000900, 0x8000007e, 0x000007ff, 0x00000000, 0x000001fe, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SingleFloatOnly_SaveList[] = { Mips::F31, Mips::F30, Mips::F29, Mips::F28, Mips::F27, Mips::F26, Mips::F25, Mips::F24, Mips::F23, Mips::F22, Mips::F21, Mips::F20, Mips::RA, Mips::FP, Mips::S7, Mips::S6, Mips::S5, Mips::S4, Mips::S3, Mips::S2, Mips::S1, Mips::S0, 0 };
static const uint32_t CSR_SingleFloatOnly_RegMask[] = { 0x00000900, 0x8000007e, 0x000007ff, 0x00000000, 0x000001fe, 0x00000000, 0x00000000, 0x00000000, };


} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

