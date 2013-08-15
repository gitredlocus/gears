/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * SystemZ Disassembler                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 8,  // Inst{15-8} ...
/* 3 */       MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 17
/* 7 */       MCD::OPC_CheckField, 4, 4, 15, 122, 0, // Skip to: 135
/* 13 */      MCD::OPC_Decode, 183, 2, 0, // Opcode: BR
/* 17 */      MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 25
/* 21 */      MCD::OPC_Decode, 135, 1, 1, // Opcode: AsmBASR
/* 25 */      MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 33
/* 29 */      MCD::OPC_Decode, 146, 4, 2, // Opcode: LTR
/* 33 */      MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 41
/* 37 */      MCD::OPC_Decode, 196, 3, 2, // Opcode: LCR
/* 41 */      MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 213, 4, 3, // Opcode: NR
/* 49 */      MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 244, 2, 2, // Opcode: CLR
/* 57 */      MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 65
/* 61 */      MCD::OPC_Decode, 231, 4, 3, // Opcode: OR
/* 65 */      MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 206, 5, 3, // Opcode: XR
/* 73 */      MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 131, 4, 2, // Opcode: LR
/* 81 */      MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 89
/* 85 */      MCD::OPC_Decode, 251, 2, 2, // Opcode: CR
/* 89 */      MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 96
/* 93 */      MCD::OPC_Decode, 57, 3, // Opcode: AR
/* 96 */      MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 104
/* 100 */     MCD::OPC_Decode, 152, 5, 3, // Opcode: SR
/* 104 */     MCD::OPC_FilterValue, 30, 3, 0, // Skip to: 111
/* 108 */     MCD::OPC_Decode, 54, 3, // Opcode: ALR
/* 111 */     MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 119
/* 115 */     MCD::OPC_Decode, 144, 5, 3, // Opcode: SLR
/* 119 */     MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 127
/* 123 */     MCD::OPC_Decode, 202, 3, 4, // Opcode: LDR
/* 127 */     MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 135
/* 131 */     MCD::OPC_Decode, 207, 3, 5, // Opcode: LER
/* 135 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 24, 8,  // Inst{31-24} ...
/* 3 */       MCD::OPC_FilterValue, 64, 4, 0, // Skip to: 11
/* 7 */       MCD::OPC_Decode, 174, 5, 6, // Opcode: STH
/* 11 */      MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 187, 3, 6, // Opcode: LA
/* 19 */      MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 164, 5, 6, // Opcode: STC
/* 27 */      MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 35
/* 31 */      MCD::OPC_Decode, 169, 3, 7, // Opcode: IC
/* 35 */      MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 43
/* 39 */      MCD::OPC_Decode, 224, 3, 8, // Opcode: LH
/* 43 */      MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 219, 2, 8, // Opcode: CH
/* 51 */      MCD::OPC_FilterValue, 74, 3, 0, // Skip to: 58
/* 55 */      MCD::OPC_Decode, 36, 9, // Opcode: AH
/* 58 */      MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 255, 4, 9, // Opcode: SH
/* 66 */      MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 170, 4, 9, // Opcode: MH
/* 74 */      MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 160, 5, 6, // Opcode: ST
/* 82 */      MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 198, 4, 9, // Opcode: N
/* 90 */      MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 226, 2, 8, // Opcode: CL
/* 98 */      MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 216, 4, 9, // Opcode: O
/* 106 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 197, 5, 9, // Opcode: X
/* 114 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 185, 3, 8, // Opcode: L
/* 122 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 190, 2, 8, // Opcode: C
/* 130 */     MCD::OPC_FilterValue, 90, 3, 0, // Skip to: 137
/* 134 */     MCD::OPC_Decode, 17, 9, // Opcode: A
/* 137 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 145
/* 141 */     MCD::OPC_Decode, 245, 4, 9, // Opcode: S
/* 145 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 152
/* 149 */     MCD::OPC_Decode, 40, 9, // Opcode: AL
/* 152 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 129, 5, 9, // Opcode: SL
/* 160 */     MCD::OPC_FilterValue, 96, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 168, 5, 10, // Opcode: STD
/* 168 */     MCD::OPC_FilterValue, 104, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 198, 3, 10, // Opcode: LD
/* 176 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 170, 5, 11, // Opcode: STE
/* 184 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 175, 4, 9, // Opcode: MS
/* 192 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 205, 3, 11, // Opcode: LE
/* 200 */     MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 215
/* 205 */     MCD::OPC_CheckField, 16, 4, 0, 143, 10, // Skip to: 2914
/* 211 */     MCD::OPC_Decode, 157, 5, 12, // Opcode: SRL
/* 215 */     MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 230
/* 220 */     MCD::OPC_CheckField, 16, 4, 0, 128, 10, // Skip to: 2914
/* 226 */     MCD::OPC_Decode, 141, 5, 12, // Opcode: SLL
/* 230 */     MCD::OPC_FilterValue, 138, 1, 10, 0, // Skip to: 245
/* 235 */     MCD::OPC_CheckField, 16, 4, 0, 113, 10, // Skip to: 2914
/* 241 */     MCD::OPC_Decode, 153, 5, 12, // Opcode: SRA
/* 245 */     MCD::OPC_FilterValue, 146, 1, 4, 0, // Skip to: 254
/* 250 */     MCD::OPC_Decode, 193, 4, 13, // Opcode: MVI
/* 254 */     MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 202, 4, 13, // Opcode: NI
/* 263 */     MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 242, 2, 13, // Opcode: CLI
/* 272 */     MCD::OPC_FilterValue, 150, 1, 4, 0, // Skip to: 281
/* 277 */     MCD::OPC_Decode, 220, 4, 13, // Opcode: OI
/* 281 */     MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 290
/* 286 */     MCD::OPC_Decode, 201, 5, 13, // Opcode: XI
/* 290 */     MCD::OPC_FilterValue, 165, 1, 131, 0, // Skip to: 426
/* 295 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 298 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 306
/* 302 */     MCD::OPC_Decode, 174, 3, 14, // Opcode: IIHH
/* 306 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 314
/* 310 */     MCD::OPC_Decode, 175, 3, 14, // Opcode: IIHL
/* 314 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 178, 3, 14, // Opcode: IILH
/* 322 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 180, 3, 14, // Opcode: IILL
/* 330 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 204, 4, 14, // Opcode: NIHH
/* 338 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 205, 4, 14, // Opcode: NIHL
/* 346 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 354
/* 350 */     MCD::OPC_Decode, 208, 4, 14, // Opcode: NILH
/* 354 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 210, 4, 14, // Opcode: NILL
/* 362 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 222, 4, 14, // Opcode: OIHH
/* 370 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 223, 4, 14, // Opcode: OIHL
/* 378 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 226, 4, 14, // Opcode: OILH
/* 386 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 228, 4, 14, // Opcode: OILL
/* 394 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 243, 3, 15, // Opcode: LLIHH
/* 402 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 244, 3, 15, // Opcode: LLIHL
/* 410 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 246, 3, 15, // Opcode: LLILH
/* 418 */     MCD::OPC_FilterValue, 15, 188, 9, // Skip to: 2914
/* 422 */     MCD::OPC_Decode, 247, 3, 15, // Opcode: LLILL
/* 426 */     MCD::OPC_FilterValue, 167, 1, 220, 0, // Skip to: 651
/* 431 */     MCD::OPC_ExtractField, 16, 4,  // Inst{19-16} ...
/* 434 */     MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 565
/* 438 */     MCD::OPC_ExtractField, 20, 4,  // Inst{23-20} ...
/* 441 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 449
/* 445 */     MCD::OPC_Decode, 172, 2, 16, // Opcode: AsmOJ
/* 449 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 457
/* 453 */     MCD::OPC_Decode, 160, 1, 16, // Opcode: AsmHJ
/* 457 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 465
/* 461 */     MCD::OPC_Decode, 140, 2, 16, // Opcode: AsmNLEJ
/* 465 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 473
/* 469 */     MCD::OPC_Decode, 232, 1, 16, // Opcode: AsmLJ
/* 473 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 252, 1, 16, // Opcode: AsmNHEJ
/* 481 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 489
/* 485 */     MCD::OPC_Decode, 224, 1, 16, // Opcode: AsmLHJ
/* 489 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 497
/* 493 */     MCD::OPC_Decode, 244, 1, 16, // Opcode: AsmNEJ
/* 497 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 505
/* 501 */     MCD::OPC_Decode, 144, 1, 16, // Opcode: AsmEJ
/* 505 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 513
/* 509 */     MCD::OPC_Decode, 148, 2, 16, // Opcode: AsmNLHJ
/* 513 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 521
/* 517 */     MCD::OPC_Decode, 152, 1, 16, // Opcode: AsmHEJ
/* 521 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 529
/* 525 */     MCD::OPC_Decode, 156, 2, 16, // Opcode: AsmNLJ
/* 529 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 537
/* 533 */     MCD::OPC_Decode, 216, 1, 16, // Opcode: AsmLEJ
/* 537 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 545
/* 541 */     MCD::OPC_Decode, 132, 2, 16, // Opcode: AsmNHJ
/* 545 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 553
/* 549 */     MCD::OPC_Decode, 164, 2, 16, // Opcode: AsmNOJ
/* 553 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 561
/* 557 */     MCD::OPC_Decode, 183, 3, 16, // Opcode: J
/* 561 */     MCD::OPC_Decode, 138, 1, 17, // Opcode: AsmBRC
/* 565 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 573
/* 569 */     MCD::OPC_Decode, 136, 1, 18, // Opcode: AsmBRAS
/* 573 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 581
/* 577 */     MCD::OPC_Decode, 188, 2, 19, // Opcode: BRCT
/* 581 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 589
/* 585 */     MCD::OPC_Decode, 189, 2, 20, // Opcode: BRCTG
/* 589 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 597
/* 593 */     MCD::OPC_Decode, 225, 3, 21, // Opcode: LHI
/* 597 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 605
/* 601 */     MCD::OPC_Decode, 219, 3, 22, // Opcode: LGHI
/* 605 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 612
/* 609 */     MCD::OPC_Decode, 37, 23, // Opcode: AHI
/* 612 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 619
/* 616 */     MCD::OPC_Decode, 31, 24, // Opcode: AGHI
/* 619 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 627
/* 623 */     MCD::OPC_Decode, 171, 4, 23, // Opcode: MHI
/* 627 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 635
/* 631 */     MCD::OPC_Decode, 169, 4, 24, // Opcode: MGHI
/* 635 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 643
/* 639 */     MCD::OPC_Decode, 221, 2, 21, // Opcode: CHI
/* 643 */     MCD::OPC_FilterValue, 15, 219, 8, // Skip to: 2914
/* 647 */     MCD::OPC_Decode, 211, 2, 22, // Opcode: CGHI
/* 651 */     MCD::OPC_FilterValue, 178, 1, 38, 0, // Skip to: 694
/* 656 */     MCD::OPC_ExtractField, 8, 16,  // Inst{23-8} ...
/* 659 */     MCD::OPC_FilterValue, 128, 68, 10, 0, // Skip to: 674
/* 664 */     MCD::OPC_CheckField, 0, 4, 0, 196, 8, // Skip to: 2914
/* 670 */     MCD::OPC_Decode, 182, 3, 25, // Opcode: IPM
/* 674 */     MCD::OPC_FilterValue, 128, 158, 1, 4, 0, // Skip to: 684
/* 680 */     MCD::OPC_Decode, 164, 3, 26, // Opcode: EAR
/* 684 */     MCD::OPC_FilterValue, 128, 164, 1, 176, 8, // Skip to: 2914
/* 690 */     MCD::OPC_Decode, 186, 4, 3, // Opcode: MSR
/* 694 */     MCD::OPC_FilterValue, 179, 1, 161, 3, // Skip to: 1628
/* 699 */     MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 702 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 716
/* 706 */     MCD::OPC_CheckField, 8, 8, 0, 154, 8, // Skip to: 2914
/* 712 */     MCD::OPC_Decode, 129, 4, 5, // Opcode: LPEBR
/* 716 */     MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 730
/* 720 */     MCD::OPC_CheckField, 8, 8, 0, 140, 8, // Skip to: 2914
/* 726 */     MCD::OPC_Decode, 250, 3, 5, // Opcode: LNEBR
/* 730 */     MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 744
/* 734 */     MCD::OPC_CheckField, 8, 8, 0, 126, 8, // Skip to: 2914
/* 740 */     MCD::OPC_Decode, 140, 4, 5, // Opcode: LTEBR
/* 744 */     MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 758
/* 748 */     MCD::OPC_CheckField, 8, 8, 0, 112, 8, // Skip to: 2914
/* 754 */     MCD::OPC_Decode, 193, 3, 5, // Opcode: LCEBR
/* 758 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 772
/* 762 */     MCD::OPC_CheckField, 8, 8, 0, 98, 8, // Skip to: 2914
/* 768 */     MCD::OPC_Decode, 200, 3, 27, // Opcode: LDEBR
/* 772 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 786
/* 776 */     MCD::OPC_CheckField, 8, 8, 0, 84, 8, // Skip to: 2914
/* 782 */     MCD::OPC_Decode, 151, 4, 28, // Opcode: LXDBR
/* 786 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 800
/* 790 */     MCD::OPC_CheckField, 8, 8, 0, 70, 8, // Skip to: 2914
/* 796 */     MCD::OPC_Decode, 153, 4, 29, // Opcode: LXEBR
/* 800 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 814
/* 804 */     MCD::OPC_CheckField, 8, 8, 0, 56, 8, // Skip to: 2914
/* 810 */     MCD::OPC_Decode, 197, 4, 30, // Opcode: MXDBR
/* 814 */     MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 828
/* 818 */     MCD::OPC_CheckField, 8, 8, 0, 42, 8, // Skip to: 2914
/* 824 */     MCD::OPC_Decode, 196, 2, 5, // Opcode: CEBR
/* 828 */     MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 841
/* 832 */     MCD::OPC_CheckField, 8, 8, 0, 28, 8, // Skip to: 2914
/* 838 */     MCD::OPC_Decode, 24, 31, // Opcode: AEBR
/* 841 */     MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 855
/* 845 */     MCD::OPC_CheckField, 8, 8, 0, 15, 8, // Skip to: 2914
/* 851 */     MCD::OPC_Decode, 249, 4, 31, // Opcode: SEBR
/* 855 */     MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 869
/* 859 */     MCD::OPC_CheckField, 8, 8, 0, 1, 8, // Skip to: 2914
/* 865 */     MCD::OPC_Decode, 166, 4, 32, // Opcode: MDEBR
/* 869 */     MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 883
/* 873 */     MCD::OPC_CheckField, 8, 8, 0, 243, 7, // Skip to: 2914
/* 879 */     MCD::OPC_Decode, 154, 3, 31, // Opcode: DEBR
/* 883 */     MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 897
/* 887 */     MCD::OPC_CheckField, 8, 4, 0, 229, 7, // Skip to: 2914
/* 893 */     MCD::OPC_Decode, 162, 4, 33, // Opcode: MAEBR
/* 897 */     MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 911
/* 901 */     MCD::OPC_CheckField, 8, 4, 0, 215, 7, // Skip to: 2914
/* 907 */     MCD::OPC_Decode, 179, 4, 33, // Opcode: MSEBR
/* 911 */     MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 925
/* 915 */     MCD::OPC_CheckField, 8, 8, 0, 201, 7, // Skip to: 2914
/* 921 */     MCD::OPC_Decode, 128, 4, 4, // Opcode: LPDBR
/* 925 */     MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 939
/* 929 */     MCD::OPC_CheckField, 8, 8, 0, 187, 7, // Skip to: 2914
/* 935 */     MCD::OPC_Decode, 249, 3, 4, // Opcode: LNDBR
/* 939 */     MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 953
/* 943 */     MCD::OPC_CheckField, 8, 8, 0, 173, 7, // Skip to: 2914
/* 949 */     MCD::OPC_Decode, 138, 4, 4, // Opcode: LTDBR
/* 953 */     MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 967
/* 957 */     MCD::OPC_CheckField, 8, 8, 0, 159, 7, // Skip to: 2914
/* 963 */     MCD::OPC_Decode, 192, 3, 4, // Opcode: LCDBR
/* 967 */     MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 981
/* 971 */     MCD::OPC_CheckField, 8, 8, 0, 145, 7, // Skip to: 2914
/* 977 */     MCD::OPC_Decode, 150, 5, 5, // Opcode: SQEBR
/* 981 */     MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 995
/* 985 */     MCD::OPC_CheckField, 8, 8, 0, 131, 7, // Skip to: 2914
/* 991 */     MCD::OPC_Decode, 148, 5, 4, // Opcode: SQDBR
/* 995 */     MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 1009
/* 999 */     MCD::OPC_CheckField, 8, 8, 0, 117, 7, // Skip to: 2914
/* 1005 */    MCD::OPC_Decode, 151, 5, 34, // Opcode: SQXBR
/* 1009 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 1023
/* 1013 */    MCD::OPC_CheckField, 8, 8, 0, 103, 7, // Skip to: 2914
/* 1019 */    MCD::OPC_Decode, 168, 4, 31, // Opcode: MEEBR
/* 1023 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1037
/* 1027 */    MCD::OPC_CheckField, 8, 8, 0, 89, 7, // Skip to: 2914
/* 1033 */    MCD::OPC_Decode, 192, 2, 4, // Opcode: CDBR
/* 1037 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1050
/* 1041 */    MCD::OPC_CheckField, 8, 8, 0, 75, 7, // Skip to: 2914
/* 1047 */    MCD::OPC_Decode, 19, 35, // Opcode: ADBR
/* 1050 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1064
/* 1054 */    MCD::OPC_CheckField, 8, 8, 0, 62, 7, // Skip to: 2914
/* 1060 */    MCD::OPC_Decode, 247, 4, 35, // Opcode: SDBR
/* 1064 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1078
/* 1068 */    MCD::OPC_CheckField, 8, 8, 0, 48, 7, // Skip to: 2914
/* 1074 */    MCD::OPC_Decode, 164, 4, 35, // Opcode: MDBR
/* 1078 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1092
/* 1082 */    MCD::OPC_CheckField, 8, 8, 0, 34, 7, // Skip to: 2914
/* 1088 */    MCD::OPC_Decode, 152, 3, 35, // Opcode: DDBR
/* 1092 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 1106
/* 1096 */    MCD::OPC_CheckField, 8, 4, 0, 20, 7, // Skip to: 2914
/* 1102 */    MCD::OPC_Decode, 160, 4, 36, // Opcode: MADBR
/* 1106 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1120
/* 1110 */    MCD::OPC_CheckField, 8, 4, 0, 6, 7, // Skip to: 2914
/* 1116 */    MCD::OPC_Decode, 177, 4, 36, // Opcode: MSDBR
/* 1120 */    MCD::OPC_FilterValue, 64, 10, 0, // Skip to: 1134
/* 1124 */    MCD::OPC_CheckField, 8, 8, 0, 248, 6, // Skip to: 2914
/* 1130 */    MCD::OPC_Decode, 130, 4, 34, // Opcode: LPXBR
/* 1134 */    MCD::OPC_FilterValue, 65, 10, 0, // Skip to: 1148
/* 1138 */    MCD::OPC_CheckField, 8, 8, 0, 234, 6, // Skip to: 2914
/* 1144 */    MCD::OPC_Decode, 251, 3, 34, // Opcode: LNXBR
/* 1148 */    MCD::OPC_FilterValue, 66, 10, 0, // Skip to: 1162
/* 1152 */    MCD::OPC_CheckField, 8, 8, 0, 220, 6, // Skip to: 2914
/* 1158 */    MCD::OPC_Decode, 147, 4, 34, // Opcode: LTXBR
/* 1162 */    MCD::OPC_FilterValue, 67, 10, 0, // Skip to: 1176
/* 1166 */    MCD::OPC_CheckField, 8, 8, 0, 206, 6, // Skip to: 2914
/* 1172 */    MCD::OPC_Decode, 197, 3, 34, // Opcode: LCXBR
/* 1176 */    MCD::OPC_FilterValue, 68, 10, 0, // Skip to: 1190
/* 1180 */    MCD::OPC_CheckField, 8, 8, 0, 192, 6, // Skip to: 2914
/* 1186 */    MCD::OPC_Decode, 206, 3, 37, // Opcode: LEDBR
/* 1190 */    MCD::OPC_FilterValue, 69, 10, 0, // Skip to: 1204
/* 1194 */    MCD::OPC_CheckField, 8, 8, 0, 178, 6, // Skip to: 2914
/* 1200 */    MCD::OPC_Decode, 203, 3, 34, // Opcode: LDXBR
/* 1204 */    MCD::OPC_FilterValue, 70, 10, 0, // Skip to: 1218
/* 1208 */    MCD::OPC_CheckField, 8, 8, 0, 164, 6, // Skip to: 2914
/* 1214 */    MCD::OPC_Decode, 208, 3, 34, // Opcode: LEXBR
/* 1218 */    MCD::OPC_FilterValue, 71, 10, 0, // Skip to: 1232
/* 1222 */    MCD::OPC_CheckField, 8, 4, 0, 150, 6, // Skip to: 2914
/* 1228 */    MCD::OPC_Decode, 167, 3, 38, // Opcode: FIXBR
/* 1232 */    MCD::OPC_FilterValue, 73, 10, 0, // Skip to: 1246
/* 1236 */    MCD::OPC_CheckField, 8, 8, 0, 136, 6, // Skip to: 2914
/* 1242 */    MCD::OPC_Decode, 129, 3, 34, // Opcode: CXBR
/* 1246 */    MCD::OPC_FilterValue, 74, 10, 0, // Skip to: 1260
/* 1250 */    MCD::OPC_CheckField, 8, 8, 0, 122, 6, // Skip to: 2914
/* 1256 */    MCD::OPC_Decode, 133, 1, 39, // Opcode: AXBR
/* 1260 */    MCD::OPC_FilterValue, 75, 10, 0, // Skip to: 1274
/* 1264 */    MCD::OPC_CheckField, 8, 8, 0, 108, 6, // Skip to: 2914
/* 1270 */    MCD::OPC_Decode, 190, 5, 39, // Opcode: SXBR
/* 1274 */    MCD::OPC_FilterValue, 76, 10, 0, // Skip to: 1288
/* 1278 */    MCD::OPC_CheckField, 8, 8, 0, 94, 6, // Skip to: 2914
/* 1284 */    MCD::OPC_Decode, 195, 4, 39, // Opcode: MXBR
/* 1288 */    MCD::OPC_FilterValue, 77, 10, 0, // Skip to: 1302
/* 1292 */    MCD::OPC_CheckField, 8, 8, 0, 80, 6, // Skip to: 2914
/* 1298 */    MCD::OPC_Decode, 163, 3, 39, // Opcode: DXBR
/* 1302 */    MCD::OPC_FilterValue, 87, 10, 0, // Skip to: 1316
/* 1306 */    MCD::OPC_CheckField, 8, 4, 0, 66, 6, // Skip to: 2914
/* 1312 */    MCD::OPC_Decode, 166, 3, 40, // Opcode: FIEBR
/* 1316 */    MCD::OPC_FilterValue, 95, 10, 0, // Skip to: 1330
/* 1320 */    MCD::OPC_CheckField, 8, 4, 0, 52, 6, // Skip to: 2914
/* 1326 */    MCD::OPC_Decode, 165, 3, 41, // Opcode: FIDBR
/* 1330 */    MCD::OPC_FilterValue, 101, 10, 0, // Skip to: 1344
/* 1334 */    MCD::OPC_CheckField, 8, 8, 0, 38, 6, // Skip to: 2914
/* 1340 */    MCD::OPC_Decode, 154, 4, 34, // Opcode: LXR
/* 1344 */    MCD::OPC_FilterValue, 114, 10, 0, // Skip to: 1358
/* 1348 */    MCD::OPC_CheckField, 8, 4, 0, 24, 6, // Skip to: 2914
/* 1354 */    MCD::OPC_Decode, 247, 2, 42, // Opcode: CPSDRdd
/* 1358 */    MCD::OPC_FilterValue, 116, 16, 0, // Skip to: 1378
/* 1362 */    MCD::OPC_CheckField, 8, 8, 0, 10, 6, // Skip to: 2914
/* 1368 */    MCD::OPC_CheckField, 0, 4, 0, 4, 6, // Skip to: 2914
/* 1374 */    MCD::OPC_Decode, 157, 4, 43, // Opcode: LZER
/* 1378 */    MCD::OPC_FilterValue, 117, 16, 0, // Skip to: 1398
/* 1382 */    MCD::OPC_CheckField, 8, 8, 0, 246, 5, // Skip to: 2914
/* 1388 */    MCD::OPC_CheckField, 0, 4, 0, 240, 5, // Skip to: 2914
/* 1394 */    MCD::OPC_Decode, 156, 4, 44, // Opcode: LZDR
/* 1398 */    MCD::OPC_FilterValue, 118, 16, 0, // Skip to: 1418
/* 1402 */    MCD::OPC_CheckField, 8, 8, 0, 226, 5, // Skip to: 2914
/* 1408 */    MCD::OPC_CheckField, 0, 4, 0, 220, 5, // Skip to: 2914
/* 1414 */    MCD::OPC_Decode, 158, 4, 45, // Opcode: LZXR
/* 1418 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 1433
/* 1423 */    MCD::OPC_CheckField, 8, 8, 0, 205, 5, // Skip to: 2914
/* 1429 */    MCD::OPC_Decode, 197, 2, 46, // Opcode: CEFBR
/* 1433 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 1448
/* 1438 */    MCD::OPC_CheckField, 8, 8, 0, 190, 5, // Skip to: 2914
/* 1444 */    MCD::OPC_Decode, 193, 2, 47, // Opcode: CDFBR
/* 1448 */    MCD::OPC_FilterValue, 150, 1, 10, 0, // Skip to: 1463
/* 1453 */    MCD::OPC_CheckField, 8, 8, 0, 175, 5, // Skip to: 2914
/* 1459 */    MCD::OPC_Decode, 130, 3, 48, // Opcode: CXFBR
/* 1463 */    MCD::OPC_FilterValue, 152, 1, 10, 0, // Skip to: 1478
/* 1468 */    MCD::OPC_CheckField, 8, 4, 0, 160, 5, // Skip to: 2914
/* 1474 */    MCD::OPC_Decode, 200, 2, 49, // Opcode: CFEBR
/* 1478 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 1493
/* 1483 */    MCD::OPC_CheckField, 8, 4, 0, 145, 5, // Skip to: 2914
/* 1489 */    MCD::OPC_Decode, 199, 2, 50, // Opcode: CFDBR
/* 1493 */    MCD::OPC_FilterValue, 154, 1, 10, 0, // Skip to: 1508
/* 1498 */    MCD::OPC_CheckField, 8, 4, 0, 130, 5, // Skip to: 2914
/* 1504 */    MCD::OPC_Decode, 202, 2, 51, // Opcode: CFXBR
/* 1508 */    MCD::OPC_FilterValue, 164, 1, 10, 0, // Skip to: 1523
/* 1513 */    MCD::OPC_CheckField, 8, 8, 0, 115, 5, // Skip to: 2914
/* 1519 */    MCD::OPC_Decode, 198, 2, 52, // Opcode: CEGBR
/* 1523 */    MCD::OPC_FilterValue, 165, 1, 10, 0, // Skip to: 1538
/* 1528 */    MCD::OPC_CheckField, 8, 8, 0, 100, 5, // Skip to: 2914
/* 1534 */    MCD::OPC_Decode, 194, 2, 53, // Opcode: CDGBR
/* 1538 */    MCD::OPC_FilterValue, 166, 1, 10, 0, // Skip to: 1553
/* 1543 */    MCD::OPC_CheckField, 8, 8, 0, 85, 5, // Skip to: 2914
/* 1549 */    MCD::OPC_Decode, 131, 3, 54, // Opcode: CXGBR
/* 1553 */    MCD::OPC_FilterValue, 168, 1, 10, 0, // Skip to: 1568
/* 1558 */    MCD::OPC_CheckField, 8, 4, 0, 70, 5, // Skip to: 2914
/* 1564 */    MCD::OPC_Decode, 205, 2, 55, // Opcode: CGEBR
/* 1568 */    MCD::OPC_FilterValue, 169, 1, 10, 0, // Skip to: 1583
/* 1573 */    MCD::OPC_CheckField, 8, 4, 0, 55, 5, // Skip to: 2914
/* 1579 */    MCD::OPC_Decode, 204, 2, 56, // Opcode: CGDBR
/* 1583 */    MCD::OPC_FilterValue, 170, 1, 10, 0, // Skip to: 1598
/* 1588 */    MCD::OPC_CheckField, 8, 4, 0, 40, 5, // Skip to: 2914
/* 1594 */    MCD::OPC_Decode, 218, 2, 57, // Opcode: CGXBR
/* 1598 */    MCD::OPC_FilterValue, 193, 1, 10, 0, // Skip to: 1613
/* 1603 */    MCD::OPC_CheckField, 8, 8, 0, 25, 5, // Skip to: 2914
/* 1609 */    MCD::OPC_Decode, 201, 3, 53, // Opcode: LDGR
/* 1613 */    MCD::OPC_FilterValue, 205, 1, 16, 5, // Skip to: 2914
/* 1618 */    MCD::OPC_CheckField, 8, 8, 0, 10, 5, // Skip to: 2914
/* 1624 */    MCD::OPC_Decode, 213, 3, 58, // Opcode: LGDR
/* 1628 */    MCD::OPC_FilterValue, 185, 1, 248, 4, // Skip to: 2905
/* 1633 */    MCD::OPC_ExtractField, 16, 8,  // Inst{23-16} ...
/* 1636 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 1650
/* 1640 */    MCD::OPC_CheckField, 8, 8, 0, 244, 4, // Skip to: 2914
/* 1646 */    MCD::OPC_Decode, 145, 4, 59, // Opcode: LTGR
/* 1650 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 1664
/* 1654 */    MCD::OPC_CheckField, 8, 8, 0, 230, 4, // Skip to: 2914
/* 1660 */    MCD::OPC_Decode, 195, 3, 59, // Opcode: LCGR
/* 1664 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 1678
/* 1668 */    MCD::OPC_CheckField, 8, 8, 0, 216, 4, // Skip to: 2914
/* 1674 */    MCD::OPC_Decode, 222, 3, 59, // Opcode: LGR
/* 1678 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 1692
/* 1682 */    MCD::OPC_CheckField, 8, 8, 0, 202, 4, // Skip to: 2914
/* 1688 */    MCD::OPC_Decode, 212, 3, 59, // Opcode: LGBR
/* 1692 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 1706
/* 1696 */    MCD::OPC_CheckField, 8, 8, 0, 188, 4, // Skip to: 2914
/* 1702 */    MCD::OPC_Decode, 220, 3, 59, // Opcode: LGHR
/* 1706 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1719
/* 1710 */    MCD::OPC_CheckField, 8, 8, 0, 174, 4, // Skip to: 2914
/* 1716 */    MCD::OPC_Decode, 33, 60, // Opcode: AGR
/* 1719 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1733
/* 1723 */    MCD::OPC_CheckField, 8, 8, 0, 161, 4, // Skip to: 2914
/* 1729 */    MCD::OPC_Decode, 253, 4, 60, // Opcode: SGR
/* 1733 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1746
/* 1737 */    MCD::OPC_CheckField, 8, 8, 0, 147, 4, // Skip to: 2914
/* 1743 */    MCD::OPC_Decode, 51, 60, // Opcode: ALGR
/* 1746 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1760
/* 1750 */    MCD::OPC_CheckField, 8, 8, 0, 134, 4, // Skip to: 2914
/* 1756 */    MCD::OPC_Decode, 139, 5, 60, // Opcode: SLGR
/* 1760 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1774
/* 1764 */    MCD::OPC_CheckField, 8, 8, 0, 120, 4, // Skip to: 2914
/* 1770 */    MCD::OPC_Decode, 185, 4, 60, // Opcode: MSGR
/* 1774 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1788
/* 1778 */    MCD::OPC_CheckField, 8, 8, 0, 106, 4, // Skip to: 2914
/* 1784 */    MCD::OPC_Decode, 162, 3, 61, // Opcode: DSGR
/* 1788 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 1802
/* 1792 */    MCD::OPC_CheckField, 8, 8, 0, 92, 4, // Skip to: 2914
/* 1798 */    MCD::OPC_Decode, 135, 4, 59, // Opcode: LRVGR
/* 1802 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 1816
/* 1806 */    MCD::OPC_CheckField, 8, 8, 0, 78, 4, // Skip to: 2914
/* 1812 */    MCD::OPC_Decode, 144, 4, 59, // Opcode: LTGFR
/* 1816 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 1830
/* 1820 */    MCD::OPC_CheckField, 8, 8, 0, 64, 4, // Skip to: 2914
/* 1826 */    MCD::OPC_Decode, 194, 3, 62, // Opcode: LCGFR
/* 1830 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 1844
/* 1834 */    MCD::OPC_CheckField, 8, 8, 0, 50, 4, // Skip to: 2914
/* 1840 */    MCD::OPC_Decode, 216, 3, 62, // Opcode: LGFR
/* 1844 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 1858
/* 1848 */    MCD::OPC_CheckField, 8, 8, 0, 36, 4, // Skip to: 2914
/* 1854 */    MCD::OPC_Decode, 234, 3, 62, // Opcode: LLGFR
/* 1858 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1871
/* 1862 */    MCD::OPC_CheckField, 8, 8, 0, 22, 4, // Skip to: 2914
/* 1868 */    MCD::OPC_Decode, 30, 63, // Opcode: AGFR
/* 1871 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 1885
/* 1875 */    MCD::OPC_CheckField, 8, 8, 0, 9, 4, // Skip to: 2914
/* 1881 */    MCD::OPC_Decode, 252, 4, 63, // Opcode: SGFR
/* 1885 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1898
/* 1889 */    MCD::OPC_CheckField, 8, 8, 0, 251, 3, // Skip to: 2914
/* 1895 */    MCD::OPC_Decode, 49, 63, // Opcode: ALGFR
/* 1898 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 1912
/* 1902 */    MCD::OPC_CheckField, 8, 8, 0, 238, 3, // Skip to: 2914
/* 1908 */    MCD::OPC_Decode, 138, 5, 63, // Opcode: SLGFR
/* 1912 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 1926
/* 1916 */    MCD::OPC_CheckField, 8, 8, 0, 224, 3, // Skip to: 2914
/* 1922 */    MCD::OPC_Decode, 184, 4, 63, // Opcode: MSGFR
/* 1926 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 1940
/* 1930 */    MCD::OPC_CheckField, 8, 8, 0, 210, 3, // Skip to: 2914
/* 1936 */    MCD::OPC_Decode, 161, 3, 64, // Opcode: DSGFR
/* 1940 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 1954
/* 1944 */    MCD::OPC_CheckField, 8, 8, 0, 196, 3, // Skip to: 2914
/* 1950 */    MCD::OPC_Decode, 136, 4, 2, // Opcode: LRVR
/* 1954 */    MCD::OPC_FilterValue, 32, 10, 0, // Skip to: 1968
/* 1958 */    MCD::OPC_CheckField, 8, 8, 0, 182, 3, // Skip to: 2914
/* 1964 */    MCD::OPC_Decode, 215, 2, 59, // Opcode: CGR
/* 1968 */    MCD::OPC_FilterValue, 33, 10, 0, // Skip to: 1982
/* 1972 */    MCD::OPC_CheckField, 8, 8, 0, 168, 3, // Skip to: 2914
/* 1978 */    MCD::OPC_Decode, 238, 2, 59, // Opcode: CLGR
/* 1982 */    MCD::OPC_FilterValue, 38, 10, 0, // Skip to: 1996
/* 1986 */    MCD::OPC_CheckField, 8, 8, 0, 154, 3, // Skip to: 2914
/* 1992 */    MCD::OPC_Decode, 191, 3, 2, // Opcode: LBR
/* 1996 */    MCD::OPC_FilterValue, 39, 10, 0, // Skip to: 2010
/* 2000 */    MCD::OPC_CheckField, 8, 8, 0, 140, 3, // Skip to: 2914
/* 2006 */    MCD::OPC_Decode, 226, 3, 2, // Opcode: LHR
/* 2010 */    MCD::OPC_FilterValue, 48, 10, 0, // Skip to: 2024
/* 2014 */    MCD::OPC_CheckField, 8, 8, 0, 126, 3, // Skip to: 2914
/* 2020 */    MCD::OPC_Decode, 208, 2, 62, // Opcode: CGFR
/* 2024 */    MCD::OPC_FilterValue, 49, 10, 0, // Skip to: 2038
/* 2028 */    MCD::OPC_CheckField, 8, 8, 0, 112, 3, // Skip to: 2914
/* 2034 */    MCD::OPC_Decode, 234, 2, 62, // Opcode: CLGFR
/* 2038 */    MCD::OPC_FilterValue, 128, 1, 10, 0, // Skip to: 2053
/* 2043 */    MCD::OPC_CheckField, 8, 8, 0, 97, 3, // Skip to: 2914
/* 2049 */    MCD::OPC_Decode, 200, 4, 60, // Opcode: NGR
/* 2053 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2068
/* 2058 */    MCD::OPC_CheckField, 8, 8, 0, 82, 3, // Skip to: 2914
/* 2064 */    MCD::OPC_Decode, 218, 4, 60, // Opcode: OGR
/* 2068 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2083
/* 2073 */    MCD::OPC_CheckField, 8, 8, 0, 67, 3, // Skip to: 2914
/* 2079 */    MCD::OPC_Decode, 199, 5, 60, // Opcode: XGR
/* 2083 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2098
/* 2088 */    MCD::OPC_CheckField, 8, 8, 0, 52, 3, // Skip to: 2914
/* 2094 */    MCD::OPC_Decode, 168, 3, 65, // Opcode: FLOGR
/* 2098 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2113
/* 2103 */    MCD::OPC_CheckField, 8, 8, 0, 37, 3, // Skip to: 2914
/* 2109 */    MCD::OPC_Decode, 232, 3, 59, // Opcode: LLGCR
/* 2113 */    MCD::OPC_FilterValue, 133, 1, 10, 0, // Skip to: 2128
/* 2118 */    MCD::OPC_CheckField, 8, 8, 0, 22, 3, // Skip to: 2914
/* 2124 */    MCD::OPC_Decode, 237, 3, 59, // Opcode: LLGHR
/* 2128 */    MCD::OPC_FilterValue, 134, 1, 10, 0, // Skip to: 2143
/* 2133 */    MCD::OPC_CheckField, 8, 8, 0, 7, 3, // Skip to: 2914
/* 2139 */    MCD::OPC_Decode, 174, 4, 61, // Opcode: MLGR
/* 2143 */    MCD::OPC_FilterValue, 135, 1, 10, 0, // Skip to: 2158
/* 2148 */    MCD::OPC_CheckField, 8, 8, 0, 248, 2, // Skip to: 2914
/* 2154 */    MCD::OPC_Decode, 157, 3, 61, // Opcode: DLGR
/* 2158 */    MCD::OPC_FilterValue, 136, 1, 9, 0, // Skip to: 2172
/* 2163 */    MCD::OPC_CheckField, 8, 8, 0, 233, 2, // Skip to: 2914
/* 2169 */    MCD::OPC_Decode, 43, 60, // Opcode: ALCGR
/* 2172 */    MCD::OPC_FilterValue, 137, 1, 10, 0, // Skip to: 2187
/* 2177 */    MCD::OPC_CheckField, 8, 8, 0, 219, 2, // Skip to: 2914
/* 2183 */    MCD::OPC_Decode, 135, 5, 60, // Opcode: SLGBR
/* 2187 */    MCD::OPC_FilterValue, 148, 1, 10, 0, // Skip to: 2202
/* 2192 */    MCD::OPC_CheckField, 8, 8, 0, 204, 2, // Skip to: 2914
/* 2198 */    MCD::OPC_Decode, 230, 3, 2, // Opcode: LLCR
/* 2202 */    MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 2217
/* 2207 */    MCD::OPC_CheckField, 8, 8, 0, 189, 2, // Skip to: 2914
/* 2213 */    MCD::OPC_Decode, 240, 3, 2, // Opcode: LLHR
/* 2217 */    MCD::OPC_FilterValue, 151, 1, 10, 0, // Skip to: 2232
/* 2222 */    MCD::OPC_CheckField, 8, 8, 0, 174, 2, // Skip to: 2914
/* 2228 */    MCD::OPC_Decode, 158, 3, 64, // Opcode: DLR
/* 2232 */    MCD::OPC_FilterValue, 152, 1, 9, 0, // Skip to: 2246
/* 2237 */    MCD::OPC_CheckField, 8, 8, 0, 159, 2, // Skip to: 2914
/* 2243 */    MCD::OPC_Decode, 44, 3, // Opcode: ALCR
/* 2246 */    MCD::OPC_FilterValue, 153, 1, 10, 0, // Skip to: 2261
/* 2251 */    MCD::OPC_CheckField, 8, 8, 0, 145, 2, // Skip to: 2914
/* 2257 */    MCD::OPC_Decode, 132, 5, 3, // Opcode: SLBR
/* 2261 */    MCD::OPC_FilterValue, 226, 1, 186, 0, // Skip to: 2452
/* 2266 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2269 */    MCD::OPC_FilterValue, 0, 129, 2, // Skip to: 2914
/* 2273 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2276 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2288
/* 2280 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 2444
/* 2284 */    MCD::OPC_Decode, 176, 2, 60, // Opcode: AsmOLOCGR
/* 2288 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2300
/* 2292 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 2444
/* 2296 */    MCD::OPC_Decode, 164, 1, 60, // Opcode: AsmHLOCGR
/* 2300 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2312
/* 2304 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 2444
/* 2308 */    MCD::OPC_Decode, 144, 2, 60, // Opcode: AsmNLELOCGR
/* 2312 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2324
/* 2316 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 2444
/* 2320 */    MCD::OPC_Decode, 236, 1, 60, // Opcode: AsmLLOCGR
/* 2324 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2336
/* 2328 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 2444
/* 2332 */    MCD::OPC_Decode, 128, 2, 60, // Opcode: AsmNHELOCGR
/* 2336 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2348
/* 2340 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 2444
/* 2344 */    MCD::OPC_Decode, 228, 1, 60, // Opcode: AsmLHLOCGR
/* 2348 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2360
/* 2352 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 2444
/* 2356 */    MCD::OPC_Decode, 248, 1, 60, // Opcode: AsmNELOCGR
/* 2360 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2372
/* 2364 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 2444
/* 2368 */    MCD::OPC_Decode, 148, 1, 60, // Opcode: AsmELOCGR
/* 2372 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2384
/* 2376 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 2444
/* 2380 */    MCD::OPC_Decode, 152, 2, 60, // Opcode: AsmNLHLOCGR
/* 2384 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2396
/* 2388 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 2444
/* 2392 */    MCD::OPC_Decode, 156, 1, 60, // Opcode: AsmHELOCGR
/* 2396 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2408
/* 2400 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 2444
/* 2404 */    MCD::OPC_Decode, 160, 2, 60, // Opcode: AsmNLLOCGR
/* 2408 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2420
/* 2412 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 2444
/* 2416 */    MCD::OPC_Decode, 220, 1, 60, // Opcode: AsmLELOCGR
/* 2420 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2432
/* 2424 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 2444
/* 2428 */    MCD::OPC_Decode, 136, 2, 60, // Opcode: AsmNHLOCGR
/* 2432 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2444
/* 2436 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 2444
/* 2440 */    MCD::OPC_Decode, 168, 2, 60, // Opcode: AsmNOLOCGR
/* 2444 */    MCD::OPC_CheckPredicate, 0, 210, 1, // Skip to: 2914
/* 2448 */    MCD::OPC_Decode, 240, 1, 66, // Opcode: AsmLOCGR
/* 2452 */    MCD::OPC_FilterValue, 228, 1, 14, 0, // Skip to: 2471
/* 2457 */    MCD::OPC_CheckPredicate, 1, 197, 1, // Skip to: 2914
/* 2461 */    MCD::OPC_CheckField, 8, 4, 0, 191, 1, // Skip to: 2914
/* 2467 */    MCD::OPC_Decode, 201, 4, 67, // Opcode: NGRK
/* 2471 */    MCD::OPC_FilterValue, 230, 1, 14, 0, // Skip to: 2490
/* 2476 */    MCD::OPC_CheckPredicate, 1, 178, 1, // Skip to: 2914
/* 2480 */    MCD::OPC_CheckField, 8, 4, 0, 172, 1, // Skip to: 2914
/* 2486 */    MCD::OPC_Decode, 219, 4, 67, // Opcode: OGRK
/* 2490 */    MCD::OPC_FilterValue, 231, 1, 14, 0, // Skip to: 2509
/* 2495 */    MCD::OPC_CheckPredicate, 1, 159, 1, // Skip to: 2914
/* 2499 */    MCD::OPC_CheckField, 8, 4, 0, 153, 1, // Skip to: 2914
/* 2505 */    MCD::OPC_Decode, 200, 5, 67, // Opcode: XGRK
/* 2509 */    MCD::OPC_FilterValue, 232, 1, 13, 0, // Skip to: 2527
/* 2514 */    MCD::OPC_CheckPredicate, 1, 140, 1, // Skip to: 2914
/* 2518 */    MCD::OPC_CheckField, 8, 4, 0, 134, 1, // Skip to: 2914
/* 2524 */    MCD::OPC_Decode, 34, 67, // Opcode: AGRK
/* 2527 */    MCD::OPC_FilterValue, 233, 1, 14, 0, // Skip to: 2546
/* 2532 */    MCD::OPC_CheckPredicate, 1, 122, 1, // Skip to: 2914
/* 2536 */    MCD::OPC_CheckField, 8, 4, 0, 116, 1, // Skip to: 2914
/* 2542 */    MCD::OPC_Decode, 254, 4, 67, // Opcode: SGRK
/* 2546 */    MCD::OPC_FilterValue, 234, 1, 13, 0, // Skip to: 2564
/* 2551 */    MCD::OPC_CheckPredicate, 1, 103, 1, // Skip to: 2914
/* 2555 */    MCD::OPC_CheckField, 8, 4, 0, 97, 1, // Skip to: 2914
/* 2561 */    MCD::OPC_Decode, 52, 67, // Opcode: ALGRK
/* 2564 */    MCD::OPC_FilterValue, 235, 1, 14, 0, // Skip to: 2583
/* 2569 */    MCD::OPC_CheckPredicate, 1, 85, 1, // Skip to: 2914
/* 2573 */    MCD::OPC_CheckField, 8, 4, 0, 79, 1, // Skip to: 2914
/* 2579 */    MCD::OPC_Decode, 140, 5, 67, // Opcode: SLGRK
/* 2583 */    MCD::OPC_FilterValue, 242, 1, 186, 0, // Skip to: 2774
/* 2588 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2591 */    MCD::OPC_FilterValue, 0, 63, 1, // Skip to: 2914
/* 2595 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2598 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2610
/* 2602 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 2766
/* 2606 */    MCD::OPC_Decode, 177, 2, 3, // Opcode: AsmOLOCR
/* 2610 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2622
/* 2614 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 2766
/* 2618 */    MCD::OPC_Decode, 165, 1, 3, // Opcode: AsmHLOCR
/* 2622 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2634
/* 2626 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 2766
/* 2630 */    MCD::OPC_Decode, 145, 2, 3, // Opcode: AsmNLELOCR
/* 2634 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2646
/* 2638 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 2766
/* 2642 */    MCD::OPC_Decode, 237, 1, 3, // Opcode: AsmLLOCR
/* 2646 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2658
/* 2650 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 2766
/* 2654 */    MCD::OPC_Decode, 129, 2, 3, // Opcode: AsmNHELOCR
/* 2658 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2670
/* 2662 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 2766
/* 2666 */    MCD::OPC_Decode, 229, 1, 3, // Opcode: AsmLHLOCR
/* 2670 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2682
/* 2674 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 2766
/* 2678 */    MCD::OPC_Decode, 249, 1, 3, // Opcode: AsmNELOCR
/* 2682 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2694
/* 2686 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 2766
/* 2690 */    MCD::OPC_Decode, 149, 1, 3, // Opcode: AsmELOCR
/* 2694 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2706
/* 2698 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 2766
/* 2702 */    MCD::OPC_Decode, 153, 2, 3, // Opcode: AsmNLHLOCR
/* 2706 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2718
/* 2710 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 2766
/* 2714 */    MCD::OPC_Decode, 157, 1, 3, // Opcode: AsmHELOCR
/* 2718 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2730
/* 2722 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 2766
/* 2726 */    MCD::OPC_Decode, 161, 2, 3, // Opcode: AsmNLLOCR
/* 2730 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2742
/* 2734 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 2766
/* 2738 */    MCD::OPC_Decode, 221, 1, 3, // Opcode: AsmLELOCR
/* 2742 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2754
/* 2746 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 2766
/* 2750 */    MCD::OPC_Decode, 137, 2, 3, // Opcode: AsmNHLOCR
/* 2754 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2766
/* 2758 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 2766
/* 2762 */    MCD::OPC_Decode, 169, 2, 3, // Opcode: AsmNOLOCR
/* 2766 */    MCD::OPC_CheckPredicate, 0, 144, 0, // Skip to: 2914
/* 2770 */    MCD::OPC_Decode, 241, 1, 68, // Opcode: AsmLOCR
/* 2774 */    MCD::OPC_FilterValue, 244, 1, 14, 0, // Skip to: 2793
/* 2779 */    MCD::OPC_CheckPredicate, 1, 131, 0, // Skip to: 2914
/* 2783 */    MCD::OPC_CheckField, 8, 4, 0, 125, 0, // Skip to: 2914
/* 2789 */    MCD::OPC_Decode, 214, 4, 69, // Opcode: NRK
/* 2793 */    MCD::OPC_FilterValue, 246, 1, 14, 0, // Skip to: 2812
/* 2798 */    MCD::OPC_CheckPredicate, 1, 112, 0, // Skip to: 2914
/* 2802 */    MCD::OPC_CheckField, 8, 4, 0, 106, 0, // Skip to: 2914
/* 2808 */    MCD::OPC_Decode, 232, 4, 69, // Opcode: ORK
/* 2812 */    MCD::OPC_FilterValue, 247, 1, 14, 0, // Skip to: 2831
/* 2817 */    MCD::OPC_CheckPredicate, 1, 93, 0, // Skip to: 2914
/* 2821 */    MCD::OPC_CheckField, 8, 4, 0, 87, 0, // Skip to: 2914
/* 2827 */    MCD::OPC_Decode, 207, 5, 69, // Opcode: XRK
/* 2831 */    MCD::OPC_FilterValue, 248, 1, 13, 0, // Skip to: 2849
/* 2836 */    MCD::OPC_CheckPredicate, 1, 74, 0, // Skip to: 2914
/* 2840 */    MCD::OPC_CheckField, 8, 4, 0, 68, 0, // Skip to: 2914
/* 2846 */    MCD::OPC_Decode, 58, 69, // Opcode: ARK
/* 2849 */    MCD::OPC_FilterValue, 249, 1, 14, 0, // Skip to: 2868
/* 2854 */    MCD::OPC_CheckPredicate, 1, 56, 0, // Skip to: 2914
/* 2858 */    MCD::OPC_CheckField, 8, 4, 0, 50, 0, // Skip to: 2914
/* 2864 */    MCD::OPC_Decode, 156, 5, 69, // Opcode: SRK
/* 2868 */    MCD::OPC_FilterValue, 250, 1, 13, 0, // Skip to: 2886
/* 2873 */    MCD::OPC_CheckPredicate, 1, 37, 0, // Skip to: 2914
/* 2877 */    MCD::OPC_CheckField, 8, 4, 0, 31, 0, // Skip to: 2914
/* 2883 */    MCD::OPC_Decode, 55, 69, // Opcode: ALRK
/* 2886 */    MCD::OPC_FilterValue, 251, 1, 23, 0, // Skip to: 2914
/* 2891 */    MCD::OPC_CheckPredicate, 1, 19, 0, // Skip to: 2914
/* 2895 */    MCD::OPC_CheckField, 8, 4, 0, 13, 0, // Skip to: 2914
/* 2901 */    MCD::OPC_Decode, 145, 5, 69, // Opcode: SLRK
/* 2905 */    MCD::OPC_FilterValue, 186, 1, 4, 0, // Skip to: 2914
/* 2910 */    MCD::OPC_Decode, 254, 2, 70, // Opcode: CS
/* 2914 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable48[] = {
/* 0 */       MCD::OPC_ExtractField, 40, 8,  // Inst{47-40} ...
/* 3 */       MCD::OPC_FilterValue, 192, 1, 238, 0, // Skip to: 246
/* 8 */       MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 11 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 188, 3, 71, // Opcode: LARL
/* 19 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 215, 3, 72, // Opcode: LGFI
/* 27 */      MCD::OPC_FilterValue, 4, 127, 0, // Skip to: 158
/* 31 */      MCD::OPC_ExtractField, 36, 4,  // Inst{39-36} ...
/* 34 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 42
/* 38 */      MCD::OPC_Decode, 173, 2, 73, // Opcode: AsmOJG
/* 42 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 50
/* 46 */      MCD::OPC_Decode, 161, 1, 73, // Opcode: AsmHJG
/* 50 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 58
/* 54 */      MCD::OPC_Decode, 141, 2, 73, // Opcode: AsmNLEJG
/* 58 */      MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 233, 1, 73, // Opcode: AsmLJG
/* 66 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 74
/* 70 */      MCD::OPC_Decode, 253, 1, 73, // Opcode: AsmNHEJG
/* 74 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 82
/* 78 */      MCD::OPC_Decode, 225, 1, 73, // Opcode: AsmLHJG
/* 82 */      MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 245, 1, 73, // Opcode: AsmNEJG
/* 90 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 98
/* 94 */      MCD::OPC_Decode, 145, 1, 73, // Opcode: AsmEJG
/* 98 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 149, 2, 73, // Opcode: AsmNLHJG
/* 106 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 114
/* 110 */     MCD::OPC_Decode, 153, 1, 73, // Opcode: AsmHEJG
/* 114 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 122
/* 118 */     MCD::OPC_Decode, 157, 2, 73, // Opcode: AsmNLJG
/* 122 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 217, 1, 73, // Opcode: AsmLEJG
/* 130 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 138
/* 134 */     MCD::OPC_Decode, 133, 2, 73, // Opcode: AsmNHJG
/* 138 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 146
/* 142 */     MCD::OPC_Decode, 165, 2, 73, // Opcode: AsmNOJG
/* 146 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 154
/* 150 */     MCD::OPC_Decode, 184, 3, 73, // Opcode: JG
/* 154 */     MCD::OPC_Decode, 139, 1, 74, // Opcode: AsmBRCL
/* 158 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 137, 1, 71, // Opcode: AsmBRASL
/* 166 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 174
/* 170 */     MCD::OPC_Decode, 202, 5, 75, // Opcode: XIHF
/* 174 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 182
/* 178 */     MCD::OPC_Decode, 203, 5, 75, // Opcode: XILF
/* 182 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 190
/* 186 */     MCD::OPC_Decode, 173, 3, 75, // Opcode: IIHF
/* 190 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 198
/* 194 */     MCD::OPC_Decode, 176, 3, 75, // Opcode: IILF
/* 198 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 206
/* 202 */     MCD::OPC_Decode, 203, 4, 75, // Opcode: NIHF
/* 206 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 214
/* 210 */     MCD::OPC_Decode, 206, 4, 75, // Opcode: NILF
/* 214 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 222
/* 218 */     MCD::OPC_Decode, 221, 4, 75, // Opcode: OIHF
/* 222 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 230
/* 226 */     MCD::OPC_Decode, 224, 4, 75, // Opcode: OILF
/* 230 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 242, 3, 76, // Opcode: LLIHF
/* 238 */     MCD::OPC_FilterValue, 15, 251, 9, // Skip to: 2797
/* 242 */     MCD::OPC_Decode, 245, 3, 76, // Opcode: LLILF
/* 246 */     MCD::OPC_FilterValue, 194, 1, 95, 0, // Skip to: 346
/* 251 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 254 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 262
/* 258 */     MCD::OPC_Decode, 183, 4, 77, // Opcode: MSGFI
/* 262 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 270
/* 266 */     MCD::OPC_Decode, 180, 4, 78, // Opcode: MSFI
/* 270 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 278
/* 274 */     MCD::OPC_Decode, 137, 5, 75, // Opcode: SLGFI
/* 278 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 133, 5, 79, // Opcode: SLFI
/* 286 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 293
/* 290 */     MCD::OPC_Decode, 29, 77, // Opcode: AGFI
/* 293 */     MCD::OPC_FilterValue, 9, 3, 0, // Skip to: 300
/* 297 */     MCD::OPC_Decode, 26, 78, // Opcode: AFI
/* 300 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 307
/* 304 */     MCD::OPC_Decode, 48, 75, // Opcode: ALGFI
/* 307 */     MCD::OPC_FilterValue, 11, 3, 0, // Skip to: 314
/* 311 */     MCD::OPC_Decode, 45, 79, // Opcode: ALFI
/* 314 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 322
/* 318 */     MCD::OPC_Decode, 207, 2, 72, // Opcode: CGFI
/* 322 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 330
/* 326 */     MCD::OPC_Decode, 201, 2, 80, // Opcode: CFI
/* 330 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 338
/* 334 */     MCD::OPC_Decode, 233, 2, 76, // Opcode: CLGFI
/* 338 */     MCD::OPC_FilterValue, 15, 151, 9, // Skip to: 2797
/* 342 */     MCD::OPC_Decode, 230, 2, 81, // Opcode: CLFI
/* 346 */     MCD::OPC_FilterValue, 196, 1, 91, 0, // Skip to: 442
/* 351 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 354 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 362
/* 358 */     MCD::OPC_Decode, 241, 3, 82, // Opcode: LLHRL
/* 362 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 370
/* 366 */     MCD::OPC_Decode, 221, 3, 71, // Opcode: LGHRL
/* 370 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 227, 3, 82, // Opcode: LHRL
/* 378 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 386
/* 382 */     MCD::OPC_Decode, 238, 3, 71, // Opcode: LLGHRL
/* 386 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 394
/* 390 */     MCD::OPC_Decode, 177, 5, 71, // Opcode: STHRL
/* 394 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 402
/* 398 */     MCD::OPC_Decode, 223, 3, 71, // Opcode: LGRL
/* 402 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 410
/* 406 */     MCD::OPC_Decode, 173, 5, 71, // Opcode: STGRL
/* 410 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 217, 3, 71, // Opcode: LGFRL
/* 418 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 426
/* 422 */     MCD::OPC_Decode, 132, 4, 82, // Opcode: LRL
/* 426 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 434
/* 430 */     MCD::OPC_Decode, 235, 3, 71, // Opcode: LLGFRL
/* 434 */     MCD::OPC_FilterValue, 15, 55, 9, // Skip to: 2797
/* 438 */     MCD::OPC_Decode, 184, 5, 71, // Opcode: STRL
/* 442 */     MCD::OPC_FilterValue, 198, 1, 83, 0, // Skip to: 530
/* 447 */     MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 450 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 458
/* 454 */     MCD::OPC_Decode, 212, 2, 71, // Opcode: CGHRL
/* 458 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 466
/* 462 */     MCD::OPC_Decode, 222, 2, 82, // Opcode: CHRL
/* 466 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 474
/* 470 */     MCD::OPC_Decode, 236, 2, 71, // Opcode: CLGHRL
/* 474 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 482
/* 478 */     MCD::OPC_Decode, 241, 2, 82, // Opcode: CLHRL
/* 482 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 217, 2, 71, // Opcode: CGRL
/* 490 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 498
/* 494 */     MCD::OPC_Decode, 239, 2, 71, // Opcode: CLGRL
/* 498 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 506
/* 502 */     MCD::OPC_Decode, 209, 2, 71, // Opcode: CGFRL
/* 506 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 514
/* 510 */     MCD::OPC_Decode, 253, 2, 82, // Opcode: CRL
/* 514 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 522
/* 518 */     MCD::OPC_Decode, 235, 2, 71, // Opcode: CLGFRL
/* 522 */     MCD::OPC_FilterValue, 15, 223, 8, // Skip to: 2797
/* 526 */     MCD::OPC_Decode, 245, 2, 82, // Opcode: CLRL
/* 530 */     MCD::OPC_FilterValue, 210, 1, 4, 0, // Skip to: 539
/* 535 */     MCD::OPC_Decode, 188, 4, 83, // Opcode: MVC
/* 539 */     MCD::OPC_FilterValue, 213, 1, 4, 0, // Skip to: 548
/* 544 */     MCD::OPC_Decode, 227, 2, 83, // Opcode: CLC
/* 548 */     MCD::OPC_FilterValue, 227, 1, 25, 2, // Skip to: 1090
/* 553 */     MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 556 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 564
/* 560 */     MCD::OPC_Decode, 142, 4, 84, // Opcode: LTG
/* 564 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 572
/* 568 */     MCD::OPC_Decode, 210, 3, 84, // Opcode: LG
/* 572 */     MCD::OPC_FilterValue, 8, 3, 0, // Skip to: 579
/* 576 */     MCD::OPC_Decode, 27, 85, // Opcode: AG
/* 579 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 587
/* 583 */     MCD::OPC_Decode, 250, 4, 85, // Opcode: SG
/* 587 */     MCD::OPC_FilterValue, 10, 3, 0, // Skip to: 594
/* 591 */     MCD::OPC_Decode, 46, 85, // Opcode: ALG
/* 594 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 134, 5, 85, // Opcode: SLG
/* 602 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 610
/* 606 */     MCD::OPC_Decode, 181, 4, 85, // Opcode: MSG
/* 610 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 618
/* 614 */     MCD::OPC_Decode, 159, 3, 86, // Opcode: DSG
/* 618 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 626
/* 622 */     MCD::OPC_Decode, 134, 4, 84, // Opcode: LRVG
/* 626 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 137, 4, 87, // Opcode: LT
/* 634 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 642
/* 638 */     MCD::OPC_Decode, 214, 3, 84, // Opcode: LGF
/* 642 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 650
/* 646 */     MCD::OPC_Decode, 218, 3, 84, // Opcode: LGH
/* 650 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 658
/* 654 */     MCD::OPC_Decode, 233, 3, 84, // Opcode: LLGF
/* 658 */     MCD::OPC_FilterValue, 24, 3, 0, // Skip to: 665
/* 662 */     MCD::OPC_Decode, 28, 85, // Opcode: AGF
/* 665 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 673
/* 669 */     MCD::OPC_Decode, 251, 4, 85, // Opcode: SGF
/* 673 */     MCD::OPC_FilterValue, 26, 3, 0, // Skip to: 680
/* 677 */     MCD::OPC_Decode, 47, 85, // Opcode: ALGF
/* 680 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 688
/* 684 */     MCD::OPC_Decode, 136, 5, 85, // Opcode: SLGF
/* 688 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 696
/* 692 */     MCD::OPC_Decode, 182, 4, 85, // Opcode: MSGF
/* 696 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 704
/* 700 */     MCD::OPC_Decode, 160, 3, 86, // Opcode: DSGF
/* 704 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 712
/* 708 */     MCD::OPC_Decode, 133, 4, 87, // Opcode: LRV
/* 712 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 720
/* 716 */     MCD::OPC_Decode, 203, 2, 84, // Opcode: CG
/* 720 */     MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 728
/* 724 */     MCD::OPC_Decode, 231, 2, 84, // Opcode: CLG
/* 728 */     MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 736
/* 732 */     MCD::OPC_Decode, 172, 5, 84, // Opcode: STG
/* 736 */     MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 744
/* 740 */     MCD::OPC_Decode, 187, 5, 84, // Opcode: STRVG
/* 744 */     MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 752
/* 748 */     MCD::OPC_Decode, 206, 2, 84, // Opcode: CGF
/* 752 */     MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 760
/* 756 */     MCD::OPC_Decode, 232, 2, 84, // Opcode: CLGF
/* 760 */     MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 768
/* 764 */     MCD::OPC_Decode, 143, 4, 84, // Opcode: LTGF
/* 768 */     MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 776
/* 772 */     MCD::OPC_Decode, 210, 2, 84, // Opcode: CGH
/* 776 */     MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 784
/* 780 */     MCD::OPC_Decode, 186, 5, 87, // Opcode: STRV
/* 784 */     MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 792
/* 788 */     MCD::OPC_Decode, 189, 5, 84, // Opcode: STY
/* 792 */     MCD::OPC_FilterValue, 81, 4, 0, // Skip to: 800
/* 796 */     MCD::OPC_Decode, 187, 4, 88, // Opcode: MSY
/* 800 */     MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 808
/* 804 */     MCD::OPC_Decode, 215, 4, 88, // Opcode: NY
/* 808 */     MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 816
/* 812 */     MCD::OPC_Decode, 246, 2, 87, // Opcode: CLY
/* 816 */     MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 824
/* 820 */     MCD::OPC_Decode, 233, 4, 88, // Opcode: OY
/* 824 */     MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 832
/* 828 */     MCD::OPC_Decode, 208, 5, 88, // Opcode: XY
/* 832 */     MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 840
/* 836 */     MCD::OPC_Decode, 155, 4, 87, // Opcode: LY
/* 840 */     MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 848
/* 844 */     MCD::OPC_Decode, 132, 3, 87, // Opcode: CY
/* 848 */     MCD::OPC_FilterValue, 90, 4, 0, // Skip to: 856
/* 852 */     MCD::OPC_Decode, 134, 1, 88, // Opcode: AY
/* 856 */     MCD::OPC_FilterValue, 91, 4, 0, // Skip to: 864
/* 860 */     MCD::OPC_Decode, 191, 5, 88, // Opcode: SY
/* 864 */     MCD::OPC_FilterValue, 94, 3, 0, // Skip to: 871
/* 868 */     MCD::OPC_Decode, 56, 88, // Opcode: ALY
/* 871 */     MCD::OPC_FilterValue, 95, 4, 0, // Skip to: 879
/* 875 */     MCD::OPC_Decode, 146, 5, 88, // Opcode: SLY
/* 879 */     MCD::OPC_FilterValue, 112, 4, 0, // Skip to: 887
/* 883 */     MCD::OPC_Decode, 179, 5, 84, // Opcode: STHY
/* 887 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 895
/* 891 */     MCD::OPC_Decode, 189, 3, 84, // Opcode: LAY
/* 895 */     MCD::OPC_FilterValue, 114, 4, 0, // Skip to: 903
/* 899 */     MCD::OPC_Decode, 167, 5, 84, // Opcode: STCY
/* 903 */     MCD::OPC_FilterValue, 115, 4, 0, // Skip to: 911
/* 907 */     MCD::OPC_Decode, 172, 3, 85, // Opcode: ICY
/* 911 */     MCD::OPC_FilterValue, 118, 4, 0, // Skip to: 919
/* 915 */     MCD::OPC_Decode, 190, 3, 87, // Opcode: LB
/* 919 */     MCD::OPC_FilterValue, 119, 4, 0, // Skip to: 927
/* 923 */     MCD::OPC_Decode, 211, 3, 84, // Opcode: LGB
/* 927 */     MCD::OPC_FilterValue, 120, 4, 0, // Skip to: 935
/* 931 */     MCD::OPC_Decode, 228, 3, 87, // Opcode: LHY
/* 935 */     MCD::OPC_FilterValue, 121, 4, 0, // Skip to: 943
/* 939 */     MCD::OPC_Decode, 224, 2, 87, // Opcode: CHY
/* 943 */     MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 950
/* 947 */     MCD::OPC_Decode, 39, 88, // Opcode: AHY
/* 950 */     MCD::OPC_FilterValue, 123, 4, 0, // Skip to: 958
/* 954 */     MCD::OPC_Decode, 128, 5, 88, // Opcode: SHY
/* 958 */     MCD::OPC_FilterValue, 124, 4, 0, // Skip to: 966
/* 962 */     MCD::OPC_Decode, 172, 4, 88, // Opcode: MHY
/* 966 */     MCD::OPC_FilterValue, 128, 1, 4, 0, // Skip to: 975
/* 971 */     MCD::OPC_Decode, 199, 4, 85, // Opcode: NG
/* 975 */     MCD::OPC_FilterValue, 129, 1, 4, 0, // Skip to: 984
/* 980 */     MCD::OPC_Decode, 217, 4, 85, // Opcode: OG
/* 984 */     MCD::OPC_FilterValue, 130, 1, 4, 0, // Skip to: 993
/* 989 */     MCD::OPC_Decode, 198, 5, 85, // Opcode: XG
/* 993 */     MCD::OPC_FilterValue, 134, 1, 4, 0, // Skip to: 1002
/* 998 */     MCD::OPC_Decode, 173, 4, 86, // Opcode: MLG
/* 1002 */    MCD::OPC_FilterValue, 135, 1, 4, 0, // Skip to: 1011
/* 1007 */    MCD::OPC_Decode, 156, 3, 86, // Opcode: DLG
/* 1011 */    MCD::OPC_FilterValue, 136, 1, 3, 0, // Skip to: 1019
/* 1016 */    MCD::OPC_Decode, 42, 85, // Opcode: ALCG
/* 1019 */    MCD::OPC_FilterValue, 137, 1, 4, 0, // Skip to: 1028
/* 1024 */    MCD::OPC_Decode, 131, 5, 85, // Opcode: SLBG
/* 1028 */    MCD::OPC_FilterValue, 144, 1, 4, 0, // Skip to: 1037
/* 1033 */    MCD::OPC_Decode, 231, 3, 84, // Opcode: LLGC
/* 1037 */    MCD::OPC_FilterValue, 145, 1, 4, 0, // Skip to: 1046
/* 1042 */    MCD::OPC_Decode, 236, 3, 84, // Opcode: LLGH
/* 1046 */    MCD::OPC_FilterValue, 148, 1, 4, 0, // Skip to: 1055
/* 1051 */    MCD::OPC_Decode, 229, 3, 87, // Opcode: LLC
/* 1055 */    MCD::OPC_FilterValue, 149, 1, 4, 0, // Skip to: 1064
/* 1060 */    MCD::OPC_Decode, 239, 3, 87, // Opcode: LLH
/* 1064 */    MCD::OPC_FilterValue, 151, 1, 4, 0, // Skip to: 1073
/* 1069 */    MCD::OPC_Decode, 155, 3, 86, // Opcode: DL
/* 1073 */    MCD::OPC_FilterValue, 152, 1, 3, 0, // Skip to: 1081
/* 1078 */    MCD::OPC_Decode, 41, 88, // Opcode: ALC
/* 1081 */    MCD::OPC_FilterValue, 153, 1, 175, 6, // Skip to: 2797
/* 1086 */    MCD::OPC_Decode, 130, 5, 88, // Opcode: SLB
/* 1090 */    MCD::OPC_FilterValue, 229, 1, 75, 0, // Skip to: 1170
/* 1095 */    MCD::OPC_ExtractField, 32, 8,  // Inst{39-32} ...
/* 1098 */    MCD::OPC_FilterValue, 68, 4, 0, // Skip to: 1106
/* 1102 */    MCD::OPC_Decode, 191, 4, 89, // Opcode: MVHHI
/* 1106 */    MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 1114
/* 1110 */    MCD::OPC_Decode, 190, 4, 89, // Opcode: MVGHI
/* 1114 */    MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 1122
/* 1118 */    MCD::OPC_Decode, 192, 4, 89, // Opcode: MVHI
/* 1122 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1130
/* 1126 */    MCD::OPC_Decode, 220, 2, 89, // Opcode: CHHSI
/* 1130 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1138
/* 1134 */    MCD::OPC_Decode, 240, 2, 90, // Opcode: CLHHSI
/* 1138 */    MCD::OPC_FilterValue, 88, 4, 0, // Skip to: 1146
/* 1142 */    MCD::OPC_Decode, 213, 2, 89, // Opcode: CGHSI
/* 1146 */    MCD::OPC_FilterValue, 89, 4, 0, // Skip to: 1154
/* 1150 */    MCD::OPC_Decode, 237, 2, 90, // Opcode: CLGHSI
/* 1154 */    MCD::OPC_FilterValue, 92, 4, 0, // Skip to: 1162
/* 1158 */    MCD::OPC_Decode, 223, 2, 89, // Opcode: CHSI
/* 1162 */    MCD::OPC_FilterValue, 93, 95, 6, // Skip to: 2797
/* 1166 */    MCD::OPC_Decode, 229, 2, 90, // Opcode: CLFHSI
/* 1170 */    MCD::OPC_FilterValue, 235, 1, 136, 3, // Skip to: 2079
/* 1175 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 1178 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1186
/* 1182 */    MCD::OPC_Decode, 248, 3, 91, // Opcode: LMG
/* 1186 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1194
/* 1190 */    MCD::OPC_Decode, 154, 5, 92, // Opcode: SRAG
/* 1194 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1202
/* 1198 */    MCD::OPC_Decode, 158, 5, 92, // Opcode: SRLG
/* 1202 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1210
/* 1206 */    MCD::OPC_Decode, 142, 5, 92, // Opcode: SLLG
/* 1210 */    MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 1218
/* 1214 */    MCD::OPC_Decode, 128, 3, 93, // Opcode: CSY
/* 1218 */    MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 1226
/* 1222 */    MCD::OPC_Decode, 241, 4, 92, // Opcode: RLLG
/* 1226 */    MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 1234
/* 1230 */    MCD::OPC_Decode, 240, 4, 94, // Opcode: RLL
/* 1234 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1242
/* 1238 */    MCD::OPC_Decode, 180, 5, 91, // Opcode: STMG
/* 1242 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 1250
/* 1246 */    MCD::OPC_Decode, 255, 2, 95, // Opcode: CSG
/* 1250 */    MCD::OPC_FilterValue, 82, 4, 0, // Skip to: 1258
/* 1254 */    MCD::OPC_Decode, 194, 4, 96, // Opcode: MVIY
/* 1258 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 1266
/* 1262 */    MCD::OPC_Decode, 212, 4, 96, // Opcode: NIY
/* 1266 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 1274
/* 1270 */    MCD::OPC_Decode, 243, 2, 96, // Opcode: CLIY
/* 1274 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 1282
/* 1278 */    MCD::OPC_Decode, 230, 4, 96, // Opcode: OIY
/* 1282 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 1290
/* 1286 */    MCD::OPC_Decode, 205, 5, 96, // Opcode: XIY
/* 1290 */    MCD::OPC_FilterValue, 106, 3, 0, // Skip to: 1297
/* 1294 */    MCD::OPC_Decode, 59, 97, // Opcode: ASI
/* 1297 */    MCD::OPC_FilterValue, 122, 3, 0, // Skip to: 1304
/* 1301 */    MCD::OPC_Decode, 35, 97, // Opcode: AGSI
/* 1304 */    MCD::OPC_FilterValue, 220, 1, 8, 0, // Skip to: 1317
/* 1309 */    MCD::OPC_CheckPredicate, 1, 204, 5, // Skip to: 2797
/* 1313 */    MCD::OPC_Decode, 155, 5, 94, // Opcode: SRAK
/* 1317 */    MCD::OPC_FilterValue, 222, 1, 8, 0, // Skip to: 1330
/* 1322 */    MCD::OPC_CheckPredicate, 1, 191, 5, // Skip to: 2797
/* 1326 */    MCD::OPC_Decode, 159, 5, 94, // Opcode: SRLK
/* 1330 */    MCD::OPC_FilterValue, 223, 1, 8, 0, // Skip to: 1343
/* 1335 */    MCD::OPC_CheckPredicate, 1, 178, 5, // Skip to: 2797
/* 1339 */    MCD::OPC_Decode, 143, 5, 94, // Opcode: SLLK
/* 1343 */    MCD::OPC_FilterValue, 226, 1, 179, 0, // Skip to: 1527
/* 1348 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1351 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1363
/* 1355 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 1519
/* 1359 */    MCD::OPC_Decode, 175, 2, 98, // Opcode: AsmOLOCG
/* 1363 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1375
/* 1367 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 1519
/* 1371 */    MCD::OPC_Decode, 163, 1, 98, // Opcode: AsmHLOCG
/* 1375 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1387
/* 1379 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 1519
/* 1383 */    MCD::OPC_Decode, 143, 2, 98, // Opcode: AsmNLELOCG
/* 1387 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1399
/* 1391 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 1519
/* 1395 */    MCD::OPC_Decode, 235, 1, 98, // Opcode: AsmLLOCG
/* 1399 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1411
/* 1403 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 1519
/* 1407 */    MCD::OPC_Decode, 255, 1, 98, // Opcode: AsmNHELOCG
/* 1411 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1423
/* 1415 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 1519
/* 1419 */    MCD::OPC_Decode, 227, 1, 98, // Opcode: AsmLHLOCG
/* 1423 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1435
/* 1427 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 1519
/* 1431 */    MCD::OPC_Decode, 247, 1, 98, // Opcode: AsmNELOCG
/* 1435 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1447
/* 1439 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 1519
/* 1443 */    MCD::OPC_Decode, 147, 1, 98, // Opcode: AsmELOCG
/* 1447 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1459
/* 1451 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 1519
/* 1455 */    MCD::OPC_Decode, 151, 2, 98, // Opcode: AsmNLHLOCG
/* 1459 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1471
/* 1463 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 1519
/* 1467 */    MCD::OPC_Decode, 155, 1, 98, // Opcode: AsmHELOCG
/* 1471 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1483
/* 1475 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 1519
/* 1479 */    MCD::OPC_Decode, 159, 2, 98, // Opcode: AsmNLLOCG
/* 1483 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1495
/* 1487 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 1519
/* 1491 */    MCD::OPC_Decode, 219, 1, 98, // Opcode: AsmLELOCG
/* 1495 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1507
/* 1499 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 1519
/* 1503 */    MCD::OPC_Decode, 135, 2, 98, // Opcode: AsmNHLOCG
/* 1507 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1519
/* 1511 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 1519
/* 1515 */    MCD::OPC_Decode, 167, 2, 98, // Opcode: AsmNOLOCG
/* 1519 */    MCD::OPC_CheckPredicate, 0, 250, 4, // Skip to: 2797
/* 1523 */    MCD::OPC_Decode, 239, 1, 99, // Opcode: AsmLOCG
/* 1527 */    MCD::OPC_FilterValue, 227, 1, 179, 0, // Skip to: 1711
/* 1532 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1535 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1547
/* 1539 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 1703
/* 1543 */    MCD::OPC_Decode, 179, 2, 100, // Opcode: AsmOSTOCG
/* 1547 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1559
/* 1551 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 1703
/* 1555 */    MCD::OPC_Decode, 167, 1, 100, // Opcode: AsmHSTOCG
/* 1559 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1571
/* 1563 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 1703
/* 1567 */    MCD::OPC_Decode, 147, 2, 100, // Opcode: AsmNLESTOCG
/* 1571 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1583
/* 1575 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 1703
/* 1579 */    MCD::OPC_Decode, 243, 1, 100, // Opcode: AsmLSTOCG
/* 1583 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1595
/* 1587 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 1703
/* 1591 */    MCD::OPC_Decode, 131, 2, 100, // Opcode: AsmNHESTOCG
/* 1595 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1607
/* 1599 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 1703
/* 1603 */    MCD::OPC_Decode, 231, 1, 100, // Opcode: AsmLHSTOCG
/* 1607 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1619
/* 1611 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 1703
/* 1615 */    MCD::OPC_Decode, 251, 1, 100, // Opcode: AsmNESTOCG
/* 1619 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1631
/* 1623 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 1703
/* 1627 */    MCD::OPC_Decode, 151, 1, 100, // Opcode: AsmESTOCG
/* 1631 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1643
/* 1635 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 1703
/* 1639 */    MCD::OPC_Decode, 155, 2, 100, // Opcode: AsmNLHSTOCG
/* 1643 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1655
/* 1647 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 1703
/* 1651 */    MCD::OPC_Decode, 159, 1, 100, // Opcode: AsmHESTOCG
/* 1655 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1667
/* 1659 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 1703
/* 1663 */    MCD::OPC_Decode, 163, 2, 100, // Opcode: AsmNLSTOCG
/* 1667 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1679
/* 1671 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 1703
/* 1675 */    MCD::OPC_Decode, 223, 1, 100, // Opcode: AsmLESTOCG
/* 1679 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1691
/* 1683 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 1703
/* 1687 */    MCD::OPC_Decode, 139, 2, 100, // Opcode: AsmNHSTOCG
/* 1691 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1703
/* 1695 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 1703
/* 1699 */    MCD::OPC_Decode, 171, 2, 100, // Opcode: AsmNOSTOCG
/* 1703 */    MCD::OPC_CheckPredicate, 0, 66, 4, // Skip to: 2797
/* 1707 */    MCD::OPC_Decode, 181, 2, 101, // Opcode: AsmSTOCG
/* 1711 */    MCD::OPC_FilterValue, 242, 1, 179, 0, // Skip to: 1895
/* 1716 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1719 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1731
/* 1723 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 1887
/* 1727 */    MCD::OPC_Decode, 174, 2, 102, // Opcode: AsmOLOC
/* 1731 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1743
/* 1735 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 1887
/* 1739 */    MCD::OPC_Decode, 162, 1, 102, // Opcode: AsmHLOC
/* 1743 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1755
/* 1747 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 1887
/* 1751 */    MCD::OPC_Decode, 142, 2, 102, // Opcode: AsmNLELOC
/* 1755 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1767
/* 1759 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 1887
/* 1763 */    MCD::OPC_Decode, 234, 1, 102, // Opcode: AsmLLOC
/* 1767 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1779
/* 1771 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 1887
/* 1775 */    MCD::OPC_Decode, 254, 1, 102, // Opcode: AsmNHELOC
/* 1779 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1791
/* 1783 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 1887
/* 1787 */    MCD::OPC_Decode, 226, 1, 102, // Opcode: AsmLHLOC
/* 1791 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1803
/* 1795 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 1887
/* 1799 */    MCD::OPC_Decode, 246, 1, 102, // Opcode: AsmNELOC
/* 1803 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1815
/* 1807 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 1887
/* 1811 */    MCD::OPC_Decode, 146, 1, 102, // Opcode: AsmELOC
/* 1815 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1827
/* 1819 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 1887
/* 1823 */    MCD::OPC_Decode, 150, 2, 102, // Opcode: AsmNLHLOC
/* 1827 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1839
/* 1831 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 1887
/* 1835 */    MCD::OPC_Decode, 154, 1, 102, // Opcode: AsmHELOC
/* 1839 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1851
/* 1843 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 1887
/* 1847 */    MCD::OPC_Decode, 158, 2, 102, // Opcode: AsmNLLOC
/* 1851 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1863
/* 1855 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 1887
/* 1859 */    MCD::OPC_Decode, 218, 1, 102, // Opcode: AsmLELOC
/* 1863 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1875
/* 1867 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 1887
/* 1871 */    MCD::OPC_Decode, 134, 2, 102, // Opcode: AsmNHLOC
/* 1875 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1887
/* 1879 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 1887
/* 1883 */    MCD::OPC_Decode, 166, 2, 102, // Opcode: AsmNOLOC
/* 1887 */    MCD::OPC_CheckPredicate, 0, 138, 3, // Skip to: 2797
/* 1891 */    MCD::OPC_Decode, 238, 1, 103, // Opcode: AsmLOC
/* 1895 */    MCD::OPC_FilterValue, 243, 1, 129, 3, // Skip to: 2797
/* 1900 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 1903 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1915
/* 1907 */    MCD::OPC_CheckPredicate, 0, 160, 0, // Skip to: 2071
/* 1911 */    MCD::OPC_Decode, 178, 2, 104, // Opcode: AsmOSTOC
/* 1915 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1927
/* 1919 */    MCD::OPC_CheckPredicate, 0, 148, 0, // Skip to: 2071
/* 1923 */    MCD::OPC_Decode, 166, 1, 104, // Opcode: AsmHSTOC
/* 1927 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1939
/* 1931 */    MCD::OPC_CheckPredicate, 0, 136, 0, // Skip to: 2071
/* 1935 */    MCD::OPC_Decode, 146, 2, 104, // Opcode: AsmNLESTOC
/* 1939 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1951
/* 1943 */    MCD::OPC_CheckPredicate, 0, 124, 0, // Skip to: 2071
/* 1947 */    MCD::OPC_Decode, 242, 1, 104, // Opcode: AsmLSTOC
/* 1951 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1963
/* 1955 */    MCD::OPC_CheckPredicate, 0, 112, 0, // Skip to: 2071
/* 1959 */    MCD::OPC_Decode, 130, 2, 104, // Opcode: AsmNHESTOC
/* 1963 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1975
/* 1967 */    MCD::OPC_CheckPredicate, 0, 100, 0, // Skip to: 2071
/* 1971 */    MCD::OPC_Decode, 230, 1, 104, // Opcode: AsmLHSTOC
/* 1975 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1987
/* 1979 */    MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 2071
/* 1983 */    MCD::OPC_Decode, 250, 1, 104, // Opcode: AsmNESTOC
/* 1987 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1999
/* 1991 */    MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 2071
/* 1995 */    MCD::OPC_Decode, 150, 1, 104, // Opcode: AsmESTOC
/* 1999 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2011
/* 2003 */    MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 2071
/* 2007 */    MCD::OPC_Decode, 154, 2, 104, // Opcode: AsmNLHSTOC
/* 2011 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2023
/* 2015 */    MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 2071
/* 2019 */    MCD::OPC_Decode, 158, 1, 104, // Opcode: AsmHESTOC
/* 2023 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2035
/* 2027 */    MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 2071
/* 2031 */    MCD::OPC_Decode, 162, 2, 104, // Opcode: AsmNLSTOC
/* 2035 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2047
/* 2039 */    MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 2071
/* 2043 */    MCD::OPC_Decode, 222, 1, 104, // Opcode: AsmLESTOC
/* 2047 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2059
/* 2051 */    MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 2071
/* 2055 */    MCD::OPC_Decode, 138, 2, 104, // Opcode: AsmNHSTOC
/* 2059 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2071
/* 2063 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 2071
/* 2067 */    MCD::OPC_Decode, 170, 2, 104, // Opcode: AsmNOSTOC
/* 2071 */    MCD::OPC_CheckPredicate, 0, 210, 2, // Skip to: 2797
/* 2075 */    MCD::OPC_Decode, 180, 2, 105, // Opcode: AsmSTOC
/* 2079 */    MCD::OPC_FilterValue, 236, 1, 125, 1, // Skip to: 2465
/* 2084 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 2087 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2099
/* 2091 */    MCD::OPC_CheckPredicate, 2, 190, 2, // Skip to: 2797
/* 2095 */    MCD::OPC_Decode, 238, 4, 106, // Opcode: RISBLG
/* 2099 */    MCD::OPC_FilterValue, 84, 4, 0, // Skip to: 2107
/* 2103 */    MCD::OPC_Decode, 242, 4, 106, // Opcode: RNSBG
/* 2107 */    MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 2115
/* 2111 */    MCD::OPC_Decode, 235, 4, 106, // Opcode: RISBG
/* 2115 */    MCD::OPC_FilterValue, 86, 4, 0, // Skip to: 2123
/* 2119 */    MCD::OPC_Decode, 243, 4, 106, // Opcode: ROSBG
/* 2123 */    MCD::OPC_FilterValue, 87, 4, 0, // Skip to: 2131
/* 2127 */    MCD::OPC_Decode, 244, 4, 106, // Opcode: RXSBG
/* 2131 */    MCD::OPC_FilterValue, 93, 8, 0, // Skip to: 2143
/* 2135 */    MCD::OPC_CheckPredicate, 2, 146, 2, // Skip to: 2797
/* 2139 */    MCD::OPC_Decode, 237, 4, 106, // Opcode: RISBHG
/* 2143 */    MCD::OPC_FilterValue, 100, 62, 0, // Skip to: 2209
/* 2147 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2150 */    MCD::OPC_FilterValue, 0, 131, 2, // Skip to: 2797
/* 2154 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2157 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2165
/* 2161 */    MCD::OPC_Decode, 181, 1, 107, // Opcode: AsmJHCGR
/* 2165 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2173
/* 2169 */    MCD::OPC_Decode, 197, 1, 107, // Opcode: AsmJLCGR
/* 2173 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2181
/* 2177 */    MCD::OPC_Decode, 213, 1, 107, // Opcode: AsmJLHCGR
/* 2181 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2189
/* 2185 */    MCD::OPC_Decode, 173, 1, 107, // Opcode: AsmJECGR
/* 2189 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2197
/* 2193 */    MCD::OPC_Decode, 189, 1, 107, // Opcode: AsmJHECGR
/* 2197 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2205
/* 2201 */    MCD::OPC_Decode, 205, 1, 107, // Opcode: AsmJLECGR
/* 2205 */    MCD::OPC_Decode, 141, 1, 108, // Opcode: AsmCGRJ
/* 2209 */    MCD::OPC_FilterValue, 118, 62, 0, // Skip to: 2275
/* 2213 */    MCD::OPC_ExtractField, 8, 4,  // Inst{11-8} ...
/* 2216 */    MCD::OPC_FilterValue, 0, 65, 2, // Skip to: 2797
/* 2220 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2223 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2231
/* 2227 */    MCD::OPC_Decode, 183, 1, 109, // Opcode: AsmJHCR
/* 2231 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2239
/* 2235 */    MCD::OPC_Decode, 199, 1, 109, // Opcode: AsmJLCR
/* 2239 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2247
/* 2243 */    MCD::OPC_Decode, 215, 1, 109, // Opcode: AsmJLHCR
/* 2247 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2255
/* 2251 */    MCD::OPC_Decode, 175, 1, 109, // Opcode: AsmJECR
/* 2255 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2263
/* 2259 */    MCD::OPC_Decode, 191, 1, 109, // Opcode: AsmJHECR
/* 2263 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2271
/* 2267 */    MCD::OPC_Decode, 207, 1, 109, // Opcode: AsmJLECR
/* 2271 */    MCD::OPC_Decode, 143, 1, 110, // Opcode: AsmCRJ
/* 2275 */    MCD::OPC_FilterValue, 124, 55, 0, // Skip to: 2334
/* 2279 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2282 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2290
/* 2286 */    MCD::OPC_Decode, 180, 1, 111, // Opcode: AsmJHCGI
/* 2290 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2298
/* 2294 */    MCD::OPC_Decode, 196, 1, 111, // Opcode: AsmJLCGI
/* 2298 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2306
/* 2302 */    MCD::OPC_Decode, 212, 1, 111, // Opcode: AsmJLHCGI
/* 2306 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2314
/* 2310 */    MCD::OPC_Decode, 172, 1, 111, // Opcode: AsmJECGI
/* 2314 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2322
/* 2318 */    MCD::OPC_Decode, 188, 1, 111, // Opcode: AsmJHECGI
/* 2322 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2330
/* 2326 */    MCD::OPC_Decode, 204, 1, 111, // Opcode: AsmJLECGI
/* 2330 */    MCD::OPC_Decode, 140, 1, 112, // Opcode: AsmCGIJ
/* 2334 */    MCD::OPC_FilterValue, 126, 55, 0, // Skip to: 2393
/* 2338 */    MCD::OPC_ExtractField, 32, 4,  // Inst{35-32} ...
/* 2341 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2349
/* 2345 */    MCD::OPC_Decode, 182, 1, 113, // Opcode: AsmJHCI
/* 2349 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 2357
/* 2353 */    MCD::OPC_Decode, 198, 1, 113, // Opcode: AsmJLCI
/* 2357 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 2365
/* 2361 */    MCD::OPC_Decode, 214, 1, 113, // Opcode: AsmJLHCI
/* 2365 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 2373
/* 2369 */    MCD::OPC_Decode, 174, 1, 113, // Opcode: AsmJECI
/* 2373 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2381
/* 2377 */    MCD::OPC_Decode, 190, 1, 113, // Opcode: AsmJHECI
/* 2381 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 2389
/* 2385 */    MCD::OPC_Decode, 206, 1, 113, // Opcode: AsmJLECI
/* 2389 */    MCD::OPC_Decode, 142, 1, 114, // Opcode: AsmCIJ
/* 2393 */    MCD::OPC_FilterValue, 216, 1, 13, 0, // Skip to: 2411
/* 2398 */    MCD::OPC_CheckPredicate, 1, 139, 1, // Skip to: 2797
/* 2402 */    MCD::OPC_CheckField, 8, 8, 0, 133, 1, // Skip to: 2797
/* 2408 */    MCD::OPC_Decode, 38, 115, // Opcode: AHIK
/* 2411 */    MCD::OPC_FilterValue, 217, 1, 13, 0, // Skip to: 2429
/* 2416 */    MCD::OPC_CheckPredicate, 1, 121, 1, // Skip to: 2797
/* 2420 */    MCD::OPC_CheckField, 8, 8, 0, 115, 1, // Skip to: 2797
/* 2426 */    MCD::OPC_Decode, 32, 116, // Opcode: AGHIK
/* 2429 */    MCD::OPC_FilterValue, 218, 1, 13, 0, // Skip to: 2447
/* 2434 */    MCD::OPC_CheckPredicate, 1, 103, 1, // Skip to: 2797
/* 2438 */    MCD::OPC_CheckField, 8, 8, 0, 97, 1, // Skip to: 2797
/* 2444 */    MCD::OPC_Decode, 53, 115, // Opcode: ALHSIK
/* 2447 */    MCD::OPC_FilterValue, 219, 1, 89, 1, // Skip to: 2797
/* 2452 */    MCD::OPC_CheckPredicate, 1, 85, 1, // Skip to: 2797
/* 2456 */    MCD::OPC_CheckField, 8, 8, 0, 79, 1, // Skip to: 2797
/* 2462 */    MCD::OPC_Decode, 50, 116, // Opcode: ALGHSIK
/* 2465 */    MCD::OPC_FilterValue, 237, 1, 71, 1, // Skip to: 2797
/* 2470 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 2473 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 2487
/* 2477 */    MCD::OPC_CheckField, 8, 8, 0, 58, 1, // Skip to: 2797
/* 2483 */    MCD::OPC_Decode, 199, 3, 117, // Opcode: LDEB
/* 2487 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2501
/* 2491 */    MCD::OPC_CheckField, 8, 8, 0, 44, 1, // Skip to: 2797
/* 2497 */    MCD::OPC_Decode, 150, 4, 118, // Opcode: LXDB
/* 2501 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2515
/* 2505 */    MCD::OPC_CheckField, 8, 8, 0, 30, 1, // Skip to: 2797
/* 2511 */    MCD::OPC_Decode, 152, 4, 118, // Opcode: LXEB
/* 2515 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2529
/* 2519 */    MCD::OPC_CheckField, 8, 8, 0, 16, 1, // Skip to: 2797
/* 2525 */    MCD::OPC_Decode, 196, 4, 119, // Opcode: MXDB
/* 2529 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2543
/* 2533 */    MCD::OPC_CheckField, 8, 8, 0, 2, 1, // Skip to: 2797
/* 2539 */    MCD::OPC_Decode, 195, 2, 120, // Opcode: CEB
/* 2543 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2556
/* 2547 */    MCD::OPC_CheckField, 8, 8, 0, 244, 0, // Skip to: 2797
/* 2553 */    MCD::OPC_Decode, 23, 121, // Opcode: AEB
/* 2556 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2570
/* 2560 */    MCD::OPC_CheckField, 8, 8, 0, 231, 0, // Skip to: 2797
/* 2566 */    MCD::OPC_Decode, 248, 4, 121, // Opcode: SEB
/* 2570 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 2584
/* 2574 */    MCD::OPC_CheckField, 8, 8, 0, 217, 0, // Skip to: 2797
/* 2580 */    MCD::OPC_Decode, 165, 4, 122, // Opcode: MDEB
/* 2584 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 2598
/* 2588 */    MCD::OPC_CheckField, 8, 8, 0, 203, 0, // Skip to: 2797
/* 2594 */    MCD::OPC_Decode, 153, 3, 121, // Opcode: DEB
/* 2598 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 2612
/* 2602 */    MCD::OPC_CheckField, 8, 4, 0, 189, 0, // Skip to: 2797
/* 2608 */    MCD::OPC_Decode, 161, 4, 123, // Opcode: MAEB
/* 2612 */    MCD::OPC_FilterValue, 15, 10, 0, // Skip to: 2626
/* 2616 */    MCD::OPC_CheckField, 8, 4, 0, 175, 0, // Skip to: 2797
/* 2622 */    MCD::OPC_Decode, 178, 4, 123, // Opcode: MSEB
/* 2626 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 2640
/* 2630 */    MCD::OPC_CheckField, 8, 8, 0, 161, 0, // Skip to: 2797
/* 2636 */    MCD::OPC_Decode, 149, 5, 120, // Opcode: SQEB
/* 2640 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 2654
/* 2644 */    MCD::OPC_CheckField, 8, 8, 0, 147, 0, // Skip to: 2797
/* 2650 */    MCD::OPC_Decode, 147, 5, 117, // Opcode: SQDB
/* 2654 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 2668
/* 2658 */    MCD::OPC_CheckField, 8, 8, 0, 133, 0, // Skip to: 2797
/* 2664 */    MCD::OPC_Decode, 167, 4, 121, // Opcode: MEEB
/* 2668 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 2682
/* 2672 */    MCD::OPC_CheckField, 8, 8, 0, 119, 0, // Skip to: 2797
/* 2678 */    MCD::OPC_Decode, 191, 2, 117, // Opcode: CDB
/* 2682 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 2695
/* 2686 */    MCD::OPC_CheckField, 8, 8, 0, 105, 0, // Skip to: 2797
/* 2692 */    MCD::OPC_Decode, 18, 122, // Opcode: ADB
/* 2695 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 2709
/* 2699 */    MCD::OPC_CheckField, 8, 8, 0, 92, 0, // Skip to: 2797
/* 2705 */    MCD::OPC_Decode, 246, 4, 122, // Opcode: SDB
/* 2709 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 2723
/* 2713 */    MCD::OPC_CheckField, 8, 8, 0, 78, 0, // Skip to: 2797
/* 2719 */    MCD::OPC_Decode, 163, 4, 122, // Opcode: MDB
/* 2723 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 2737
/* 2727 */    MCD::OPC_CheckField, 8, 8, 0, 64, 0, // Skip to: 2797
/* 2733 */    MCD::OPC_Decode, 151, 3, 122, // Opcode: DDB
/* 2737 */    MCD::OPC_FilterValue, 30, 10, 0, // Skip to: 2751
/* 2741 */    MCD::OPC_CheckField, 8, 4, 0, 50, 0, // Skip to: 2797
/* 2747 */    MCD::OPC_Decode, 159, 4, 124, // Opcode: MADB
/* 2751 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 2765
/* 2755 */    MCD::OPC_CheckField, 8, 4, 0, 36, 0, // Skip to: 2797
/* 2761 */    MCD::OPC_Decode, 176, 4, 124, // Opcode: MSDB
/* 2765 */    MCD::OPC_FilterValue, 100, 4, 0, // Skip to: 2773
/* 2769 */    MCD::OPC_Decode, 209, 3, 125, // Opcode: LEY
/* 2773 */    MCD::OPC_FilterValue, 101, 4, 0, // Skip to: 2781
/* 2777 */    MCD::OPC_Decode, 204, 3, 126, // Opcode: LDY
/* 2781 */    MCD::OPC_FilterValue, 102, 4, 0, // Skip to: 2789
/* 2785 */    MCD::OPC_Decode, 171, 5, 125, // Opcode: STEY
/* 2789 */    MCD::OPC_FilterValue, 103, 4, 0, // Skip to: 2797
/* 2793 */    MCD::OPC_Decode, 169, 5, 126, // Opcode: STDY
/* 2797 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & SystemZ::FeatureLoadStoreOnCond));
  case 1:
    return ((Bits & SystemZ::FeatureDistinctOps));
  case 2:
    return ((Bits & SystemZ::FeatureHighWord));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeADDR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr32Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (decodeAccessRegOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 4, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeS32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodeU32ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 32);
    if (decodePC32DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 16, 24);
    if (decodeBDLAddr64Disp12Len8Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeBDAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeU16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr32Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 24);
    if (decodeBDAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 24, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 8);
    if (decodeU8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeU6ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 8);
    if (decodeS8ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (decodeU4ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodePC16DBLOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 32, 4);
    if (DecodeGR64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 16);
    if (decodeS16ImmOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP128BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 20);
    if (decodeBDXAddr64Disp12Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP32BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 36, 4);
    if (DecodeFP64BitRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 28);
    if (decodeBDXAddr64Disp20Operand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
