/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * Mips Disassembler                                                        *|
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
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 162, 1, // Skip to: 429
/* 11 */      MCD::OPC_Decode, 148, 1, 0, // Opcode: BeqzRxImm16
/* 15 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 429
/* 23 */      MCD::OPC_Decode, 151, 1, 0, // Opcode: BnezRxImm16
/* 27 */      MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 38
/* 31 */      MCD::OPC_CheckPredicate, 0, 138, 1, // Skip to: 429
/* 35 */      MCD::OPC_Decode, 118, 1, // Opcode: AddiuRxRxImm16
/* 38 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 127, 1, // Skip to: 429
/* 46 */      MCD::OPC_Decode, 176, 6, 0, // Opcode: SltiRxImm16
/* 50 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 62
/* 54 */      MCD::OPC_CheckPredicate, 0, 115, 1, // Skip to: 429
/* 58 */      MCD::OPC_Decode, 179, 6, 0, // Opcode: SltiuRxImm16
/* 62 */      MCD::OPC_FilterValue, 12, 38, 0, // Skip to: 104
/* 66 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 69 */      MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 80
/* 73 */      MCD::OPC_CheckPredicate, 0, 96, 1, // Skip to: 429
/* 77 */      MCD::OPC_Decode, 121, 2, // Opcode: AddiuSpImm16
/* 80 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 0, 85, 1, // Skip to: 429
/* 88 */      MCD::OPC_Decode, 178, 4, 3, // Opcode: Move32R16
/* 92 */      MCD::OPC_FilterValue, 7, 77, 1, // Skip to: 429
/* 96 */      MCD::OPC_CheckPredicate, 0, 73, 1, // Skip to: 429
/* 100 */     MCD::OPC_Decode, 179, 4, 4, // Opcode: MoveR3216
/* 104 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 116
/* 108 */     MCD::OPC_CheckPredicate, 0, 61, 1, // Skip to: 429
/* 112 */     MCD::OPC_Decode, 208, 3, 0, // Opcode: LiRxImm16
/* 116 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 128
/* 120 */     MCD::OPC_CheckPredicate, 0, 49, 1, // Skip to: 429
/* 124 */     MCD::OPC_Decode, 253, 1, 0, // Opcode: CmpiRxImm16
/* 128 */     MCD::OPC_FilterValue, 28, 26, 0, // Skip to: 158
/* 132 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 135 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 146
/* 139 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 429
/* 143 */     MCD::OPC_Decode, 123, 5, // Opcode: AdduRxRyRz16
/* 146 */     MCD::OPC_FilterValue, 3, 23, 1, // Skip to: 429
/* 150 */     MCD::OPC_CheckPredicate, 0, 19, 1, // Skip to: 429
/* 154 */     MCD::OPC_Decode, 188, 6, 5, // Opcode: SubuRxRyRz16
/* 158 */     MCD::OPC_FilterValue, 29, 11, 1, // Skip to: 429
/* 162 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 165 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 232
/* 169 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 172 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 184
/* 176 */     MCD::OPC_CheckPredicate, 0, 249, 0, // Skip to: 429
/* 180 */     MCD::OPC_Decode, 247, 2, 2, // Opcode: JumpLinkReg16
/* 184 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 202
/* 188 */     MCD::OPC_CheckPredicate, 0, 237, 0, // Skip to: 429
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 231, 0, // Skip to: 429
/* 198 */     MCD::OPC_Decode, 244, 2, 2, // Opcode: JrRa16
/* 202 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 214
/* 206 */     MCD::OPC_CheckPredicate, 0, 219, 0, // Skip to: 429
/* 210 */     MCD::OPC_Decode, 246, 2, 0, // Opcode: JrcRx16
/* 214 */     MCD::OPC_FilterValue, 7, 211, 0, // Skip to: 429
/* 218 */     MCD::OPC_CheckPredicate, 0, 207, 0, // Skip to: 429
/* 222 */     MCD::OPC_CheckField, 8, 3, 0, 201, 0, // Skip to: 429
/* 228 */     MCD::OPC_Decode, 245, 2, 2, // Opcode: JrcRa16
/* 232 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 244
/* 236 */     MCD::OPC_CheckPredicate, 0, 189, 0, // Skip to: 429
/* 240 */     MCD::OPC_Decode, 174, 6, 6, // Opcode: SltRxRy16
/* 244 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 256
/* 248 */     MCD::OPC_CheckPredicate, 0, 177, 0, // Skip to: 429
/* 252 */     MCD::OPC_Decode, 182, 6, 6, // Opcode: SltuRxRy16
/* 256 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 268
/* 260 */     MCD::OPC_CheckPredicate, 0, 165, 0, // Skip to: 429
/* 264 */     MCD::OPC_Decode, 172, 6, 7, // Opcode: SllvRxRy16
/* 268 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 286
/* 272 */     MCD::OPC_CheckPredicate, 0, 153, 0, // Skip to: 429
/* 276 */     MCD::OPC_CheckField, 5, 6, 0, 147, 0, // Skip to: 429
/* 282 */     MCD::OPC_Decode, 153, 1, 2, // Opcode: Break16
/* 286 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 298
/* 290 */     MCD::OPC_CheckPredicate, 0, 135, 0, // Skip to: 429
/* 294 */     MCD::OPC_Decode, 187, 6, 7, // Opcode: SrlvRxRy16
/* 298 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 310
/* 302 */     MCD::OPC_CheckPredicate, 0, 123, 0, // Skip to: 429
/* 306 */     MCD::OPC_Decode, 185, 6, 7, // Opcode: SravRxRy16
/* 310 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 322
/* 314 */     MCD::OPC_CheckPredicate, 0, 111, 0, // Skip to: 429
/* 318 */     MCD::OPC_Decode, 252, 1, 6, // Opcode: CmpRxRy16
/* 322 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 333
/* 326 */     MCD::OPC_CheckPredicate, 0, 99, 0, // Skip to: 429
/* 330 */     MCD::OPC_Decode, 124, 7, // Opcode: AndRxRxRy16
/* 333 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 345
/* 337 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 429
/* 341 */     MCD::OPC_Decode, 202, 4, 7, // Opcode: OrRxRxRy16
/* 345 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 357
/* 349 */     MCD::OPC_CheckPredicate, 0, 76, 0, // Skip to: 429
/* 353 */     MCD::OPC_Decode, 210, 6, 7, // Opcode: XorRxRxRy16
/* 357 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 369
/* 361 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 429
/* 365 */     MCD::OPC_Decode, 195, 4, 6, // Opcode: NotRxRy16
/* 369 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 381
/* 373 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 429
/* 377 */     MCD::OPC_Decode, 176, 4, 0, // Opcode: Mfhi16
/* 381 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 393
/* 385 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 429
/* 389 */     MCD::OPC_Decode, 177, 4, 0, // Opcode: Mflo16
/* 393 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 405
/* 397 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 429
/* 401 */     MCD::OPC_Decode, 183, 2, 6, // Opcode: DivRxRy16
/* 405 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 417
/* 409 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 429
/* 413 */     MCD::OPC_Decode, 184, 2, 6, // Opcode: DivuRxRy16
/* 417 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 429
/* 421 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 429
/* 425 */     MCD::OPC_Decode, 194, 4, 6, // Opcode: NegRxRy16
/* 429 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 26
/* 7 */       MCD::OPC_CheckPredicate, 0, 170, 1, // Skip to: 437
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 164, 1, // Skip to: 437
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 158, 1, // Skip to: 437
/* 23 */      MCD::OPC_Decode, 117, 0, // Opcode: AddiuRxPcImmX16
/* 26 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 50
/* 30 */      MCD::OPC_CheckPredicate, 0, 147, 1, // Skip to: 437
/* 34 */      MCD::OPC_CheckField, 27, 5, 30, 141, 1, // Skip to: 437
/* 40 */      MCD::OPC_CheckField, 5, 6, 0, 135, 1, // Skip to: 437
/* 46 */      MCD::OPC_Decode, 150, 1, 8, // Opcode: BimmX16
/* 50 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 74
/* 54 */      MCD::OPC_CheckPredicate, 0, 123, 1, // Skip to: 437
/* 58 */      MCD::OPC_CheckField, 27, 5, 30, 117, 1, // Skip to: 437
/* 64 */      MCD::OPC_CheckField, 5, 3, 0, 111, 1, // Skip to: 437
/* 70 */      MCD::OPC_Decode, 149, 1, 0, // Opcode: BeqzRxImmX16
/* 74 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 98
/* 78 */      MCD::OPC_CheckPredicate, 0, 99, 1, // Skip to: 437
/* 82 */      MCD::OPC_CheckField, 27, 5, 30, 93, 1, // Skip to: 437
/* 88 */      MCD::OPC_CheckField, 5, 3, 0, 87, 1, // Skip to: 437
/* 94 */      MCD::OPC_Decode, 152, 1, 0, // Opcode: BnezRxImmX16
/* 98 */      MCD::OPC_FilterValue, 6, 91, 0, // Skip to: 193
/* 102 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 105 */     MCD::OPC_FilterValue, 30, 72, 1, // Skip to: 437
/* 109 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 112 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 155
/* 116 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 119 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 131
/* 123 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 155
/* 127 */     MCD::OPC_Decode, 171, 6, 6, // Opcode: SllX16
/* 131 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 143
/* 135 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 155
/* 139 */     MCD::OPC_Decode, 186, 6, 6, // Opcode: SrlX16
/* 143 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 155
/* 147 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 155
/* 151 */     MCD::OPC_Decode, 184, 6, 6, // Opcode: SraX16
/* 155 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 158 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 170
/* 162 */     MCD::OPC_CheckPredicate, 0, 15, 1, // Skip to: 437
/* 166 */     MCD::OPC_Decode, 160, 1, 2, // Opcode: BteqzX16
/* 170 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 182
/* 174 */     MCD::OPC_CheckPredicate, 0, 3, 1, // Skip to: 437
/* 178 */     MCD::OPC_Decode, 167, 1, 2, // Opcode: BtnezX16
/* 182 */     MCD::OPC_FilterValue, 24, 251, 0, // Skip to: 437
/* 186 */     MCD::OPC_CheckPredicate, 0, 247, 0, // Skip to: 437
/* 190 */     MCD::OPC_Decode, 122, 2, // Opcode: AddiuSpImmX16
/* 193 */     MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 216
/* 197 */     MCD::OPC_CheckPredicate, 0, 236, 0, // Skip to: 437
/* 201 */     MCD::OPC_CheckField, 27, 5, 30, 230, 0, // Skip to: 437
/* 207 */     MCD::OPC_CheckField, 4, 1, 0, 224, 0, // Skip to: 437
/* 213 */     MCD::OPC_Decode, 120, 9, // Opcode: AddiuRxRyOffMemX16
/* 216 */     MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 239
/* 220 */     MCD::OPC_CheckPredicate, 0, 213, 0, // Skip to: 437
/* 224 */     MCD::OPC_CheckField, 27, 5, 30, 207, 0, // Skip to: 437
/* 230 */     MCD::OPC_CheckField, 5, 3, 0, 201, 0, // Skip to: 437
/* 236 */     MCD::OPC_Decode, 116, 0, // Opcode: AddiuRxImmX16
/* 239 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 263
/* 243 */     MCD::OPC_CheckPredicate, 0, 190, 0, // Skip to: 437
/* 247 */     MCD::OPC_CheckField, 27, 5, 30, 184, 0, // Skip to: 437
/* 253 */     MCD::OPC_CheckField, 5, 3, 0, 178, 0, // Skip to: 437
/* 259 */     MCD::OPC_Decode, 177, 6, 0, // Opcode: SltiRxImmX16
/* 263 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 287
/* 267 */     MCD::OPC_CheckPredicate, 0, 166, 0, // Skip to: 437
/* 271 */     MCD::OPC_CheckField, 27, 5, 30, 160, 0, // Skip to: 437
/* 277 */     MCD::OPC_CheckField, 5, 3, 0, 154, 0, // Skip to: 437
/* 283 */     MCD::OPC_Decode, 180, 6, 0, // Opcode: SltiuRxImmX16
/* 287 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 311
/* 291 */     MCD::OPC_CheckPredicate, 0, 142, 0, // Skip to: 437
/* 295 */     MCD::OPC_CheckField, 27, 5, 30, 136, 0, // Skip to: 437
/* 301 */     MCD::OPC_CheckField, 5, 3, 0, 130, 0, // Skip to: 437
/* 307 */     MCD::OPC_Decode, 209, 3, 0, // Opcode: LiRxImmX16
/* 311 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 335
/* 315 */     MCD::OPC_CheckPredicate, 0, 118, 0, // Skip to: 437
/* 319 */     MCD::OPC_CheckField, 27, 5, 30, 112, 0, // Skip to: 437
/* 325 */     MCD::OPC_CheckField, 5, 3, 0, 106, 0, // Skip to: 437
/* 331 */     MCD::OPC_Decode, 254, 1, 0, // Opcode: CmpiRxImmX16
/* 335 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 359
/* 339 */     MCD::OPC_CheckPredicate, 0, 94, 0, // Skip to: 437
/* 343 */     MCD::OPC_CheckField, 27, 5, 30, 88, 0, // Skip to: 437
/* 349 */     MCD::OPC_CheckField, 5, 3, 0, 82, 0, // Skip to: 437
/* 355 */     MCD::OPC_Decode, 215, 3, 0, // Opcode: LwRxSpImmX16
/* 359 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 377
/* 363 */     MCD::OPC_CheckPredicate, 0, 70, 0, // Skip to: 437
/* 367 */     MCD::OPC_CheckField, 27, 5, 30, 64, 0, // Skip to: 437
/* 373 */     MCD::OPC_Decode, 155, 6, 9, // Opcode: SbRxRyOffMemX16
/* 377 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 395
/* 381 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 437
/* 385 */     MCD::OPC_CheckField, 27, 5, 30, 46, 0, // Skip to: 437
/* 391 */     MCD::OPC_Decode, 170, 6, 9, // Opcode: ShRxRyOffMemX16
/* 395 */     MCD::OPC_FilterValue, 26, 20, 0, // Skip to: 419
/* 399 */     MCD::OPC_CheckPredicate, 0, 34, 0, // Skip to: 437
/* 403 */     MCD::OPC_CheckField, 27, 5, 30, 28, 0, // Skip to: 437
/* 409 */     MCD::OPC_CheckField, 5, 3, 0, 22, 0, // Skip to: 437
/* 415 */     MCD::OPC_Decode, 190, 6, 0, // Opcode: SwRxSpImmX16
/* 419 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 437
/* 423 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 437
/* 427 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 437
/* 433 */     MCD::OPC_Decode, 189, 6, 9, // Opcode: SwRxRyOffMemX16
/* 437 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 19, 1, // Skip to: 282
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 1, 2, 2, // Skip to: 532
/* 18 */      MCD::OPC_Decode, 207, 5, 10, // Opcode: SLL_MM
/* 22 */      MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 34
/* 26 */      MCD::OPC_CheckPredicate, 1, 246, 1, // Skip to: 532
/* 30 */      MCD::OPC_Decode, 206, 5, 11, // Opcode: SLLV_MM
/* 34 */      MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 1, 234, 1, // Skip to: 532
/* 42 */      MCD::OPC_Decode, 227, 5, 10, // Opcode: SRL_MM
/* 46 */      MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 58
/* 50 */      MCD::OPC_CheckPredicate, 1, 222, 1, // Skip to: 532
/* 54 */      MCD::OPC_Decode, 226, 5, 11, // Opcode: SRLV_MM
/* 58 */      MCD::OPC_FilterValue, 128, 1, 8, 0, // Skip to: 71
/* 63 */      MCD::OPC_CheckPredicate, 1, 209, 1, // Skip to: 532
/* 67 */      MCD::OPC_Decode, 223, 5, 10, // Opcode: SRA_MM
/* 71 */      MCD::OPC_FilterValue, 144, 1, 8, 0, // Skip to: 84
/* 76 */      MCD::OPC_CheckPredicate, 1, 196, 1, // Skip to: 532
/* 80 */      MCD::OPC_Decode, 222, 5, 11, // Opcode: SRAV_MM
/* 84 */      MCD::OPC_FilterValue, 192, 1, 8, 0, // Skip to: 97
/* 89 */      MCD::OPC_CheckPredicate, 1, 183, 1, // Skip to: 532
/* 93 */      MCD::OPC_Decode, 135, 5, 10, // Opcode: ROTR_MM
/* 97 */      MCD::OPC_FilterValue, 208, 1, 8, 0, // Skip to: 110
/* 102 */     MCD::OPC_CheckPredicate, 1, 170, 1, // Skip to: 532
/* 106 */     MCD::OPC_Decode, 134, 5, 11, // Opcode: ROTRV_MM
/* 110 */     MCD::OPC_FilterValue, 144, 2, 7, 0, // Skip to: 122
/* 115 */     MCD::OPC_CheckPredicate, 1, 157, 1, // Skip to: 532
/* 119 */     MCD::OPC_Decode, 36, 12, // Opcode: ADD_MM
/* 122 */     MCD::OPC_FilterValue, 208, 2, 7, 0, // Skip to: 134
/* 127 */     MCD::OPC_CheckPredicate, 1, 145, 1, // Skip to: 532
/* 131 */     MCD::OPC_Decode, 42, 12, // Opcode: ADDu_MM
/* 134 */     MCD::OPC_FilterValue, 144, 3, 8, 0, // Skip to: 147
/* 139 */     MCD::OPC_CheckPredicate, 1, 133, 1, // Skip to: 532
/* 143 */     MCD::OPC_Decode, 254, 5, 12, // Opcode: SUB_MM
/* 147 */     MCD::OPC_FilterValue, 208, 3, 8, 0, // Skip to: 160
/* 152 */     MCD::OPC_CheckPredicate, 1, 120, 1, // Skip to: 532
/* 156 */     MCD::OPC_Decode, 128, 6, 12, // Opcode: SUBu_MM
/* 160 */     MCD::OPC_FilterValue, 144, 4, 8, 0, // Skip to: 173
/* 165 */     MCD::OPC_CheckPredicate, 1, 107, 1, // Skip to: 532
/* 169 */     MCD::OPC_Decode, 173, 4, 12, // Opcode: MUL_MM
/* 173 */     MCD::OPC_FilterValue, 208, 4, 7, 0, // Skip to: 185
/* 178 */     MCD::OPC_CheckPredicate, 1, 94, 1, // Skip to: 532
/* 182 */     MCD::OPC_Decode, 47, 12, // Opcode: AND_MM
/* 185 */     MCD::OPC_FilterValue, 144, 5, 8, 0, // Skip to: 198
/* 190 */     MCD::OPC_CheckPredicate, 1, 82, 1, // Skip to: 532
/* 194 */     MCD::OPC_Decode, 198, 4, 12, // Opcode: OR_MM
/* 198 */     MCD::OPC_FilterValue, 208, 5, 8, 0, // Skip to: 211
/* 203 */     MCD::OPC_CheckPredicate, 1, 69, 1, // Skip to: 532
/* 207 */     MCD::OPC_Decode, 193, 4, 12, // Opcode: NOR_MM
/* 211 */     MCD::OPC_FilterValue, 144, 6, 8, 0, // Skip to: 224
/* 216 */     MCD::OPC_CheckPredicate, 1, 56, 1, // Skip to: 532
/* 220 */     MCD::OPC_Decode, 206, 6, 12, // Opcode: XOR_MM
/* 224 */     MCD::OPC_FilterValue, 188, 6, 27, 0, // Skip to: 256
/* 229 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 232 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 244
/* 236 */     MCD::OPC_CheckPredicate, 1, 36, 1, // Skip to: 532
/* 240 */     MCD::OPC_Decode, 170, 4, 13, // Opcode: MULT_MM
/* 244 */     MCD::OPC_FilterValue, 19, 28, 1, // Skip to: 532
/* 248 */     MCD::OPC_CheckPredicate, 1, 24, 1, // Skip to: 532
/* 252 */     MCD::OPC_Decode, 172, 4, 13, // Opcode: MULTu_MM
/* 256 */     MCD::OPC_FilterValue, 208, 6, 8, 0, // Skip to: 269
/* 261 */     MCD::OPC_CheckPredicate, 1, 11, 1, // Skip to: 532
/* 265 */     MCD::OPC_Decode, 210, 5, 12, // Opcode: SLT_MM
/* 269 */     MCD::OPC_FilterValue, 144, 7, 2, 1, // Skip to: 532
/* 274 */     MCD::OPC_CheckPredicate, 1, 254, 0, // Skip to: 532
/* 278 */     MCD::OPC_Decode, 219, 5, 12, // Opcode: SLTu_MM
/* 282 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 293
/* 286 */     MCD::OPC_CheckPredicate, 1, 242, 0, // Skip to: 532
/* 290 */     MCD::OPC_Decode, 38, 14, // Opcode: ADDi_MM
/* 293 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 305
/* 297 */     MCD::OPC_CheckPredicate, 2, 231, 0, // Skip to: 532
/* 301 */     MCD::OPC_Decode, 130, 3, 15, // Opcode: LBu_MM
/* 305 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 317
/* 309 */     MCD::OPC_CheckPredicate, 2, 219, 0, // Skip to: 532
/* 313 */     MCD::OPC_Decode, 148, 5, 15, // Opcode: SB_MM
/* 317 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 329
/* 321 */     MCD::OPC_CheckPredicate, 2, 207, 0, // Skip to: 532
/* 325 */     MCD::OPC_Decode, 252, 2, 15, // Opcode: LB_MM
/* 329 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 340
/* 333 */     MCD::OPC_CheckPredicate, 1, 195, 0, // Skip to: 532
/* 337 */     MCD::OPC_Decode, 40, 14, // Opcode: ADDiu_MM
/* 340 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 352
/* 344 */     MCD::OPC_CheckPredicate, 2, 184, 0, // Skip to: 532
/* 348 */     MCD::OPC_Decode, 161, 3, 15, // Opcode: LHu_MM
/* 352 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 364
/* 356 */     MCD::OPC_CheckPredicate, 2, 172, 0, // Skip to: 532
/* 360 */     MCD::OPC_Decode, 199, 5, 15, // Opcode: SH_MM
/* 364 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 376
/* 368 */     MCD::OPC_CheckPredicate, 2, 160, 0, // Skip to: 532
/* 372 */     MCD::OPC_Decode, 155, 3, 15, // Opcode: LH_MM
/* 376 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 394
/* 380 */     MCD::OPC_CheckPredicate, 1, 148, 0, // Skip to: 532
/* 384 */     MCD::OPC_CheckField, 21, 5, 13, 142, 0, // Skip to: 532
/* 390 */     MCD::OPC_Decode, 180, 3, 16, // Opcode: LUi_MM
/* 394 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 1, 130, 0, // Skip to: 532
/* 402 */     MCD::OPC_Decode, 201, 4, 17, // Opcode: ORi_MM
/* 406 */     MCD::OPC_FilterValue, 24, 51, 0, // Skip to: 461
/* 410 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 413 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 425
/* 417 */     MCD::OPC_CheckPredicate, 3, 111, 0, // Skip to: 532
/* 421 */     MCD::OPC_Decode, 189, 3, 18, // Opcode: LWL_MM
/* 425 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 437
/* 429 */     MCD::OPC_CheckPredicate, 3, 99, 0, // Skip to: 532
/* 433 */     MCD::OPC_Decode, 194, 3, 18, // Opcode: LWR_MM
/* 437 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 449
/* 441 */     MCD::OPC_CheckPredicate, 3, 87, 0, // Skip to: 532
/* 445 */     MCD::OPC_Decode, 139, 6, 19, // Opcode: SWL_MM
/* 449 */     MCD::OPC_FilterValue, 9, 79, 0, // Skip to: 532
/* 453 */     MCD::OPC_CheckPredicate, 3, 75, 0, // Skip to: 532
/* 457 */     MCD::OPC_Decode, 144, 6, 19, // Opcode: SWR_MM
/* 461 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 473
/* 465 */     MCD::OPC_CheckPredicate, 1, 63, 0, // Skip to: 532
/* 469 */     MCD::OPC_Decode, 209, 6, 17, // Opcode: XORi_MM
/* 473 */     MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 485
/* 477 */     MCD::OPC_CheckPredicate, 1, 51, 0, // Skip to: 532
/* 481 */     MCD::OPC_Decode, 213, 5, 20, // Opcode: SLTi_MM
/* 485 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 497
/* 489 */     MCD::OPC_CheckPredicate, 1, 39, 0, // Skip to: 532
/* 493 */     MCD::OPC_Decode, 216, 5, 20, // Opcode: SLTiu_MM
/* 497 */     MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 508
/* 501 */     MCD::OPC_CheckPredicate, 1, 27, 0, // Skip to: 532
/* 505 */     MCD::OPC_Decode, 50, 17, // Opcode: ANDi_MM
/* 508 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 520
/* 512 */     MCD::OPC_CheckPredicate, 2, 16, 0, // Skip to: 532
/* 516 */     MCD::OPC_Decode, 148, 6, 15, // Opcode: SW_MM
/* 520 */     MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 532
/* 524 */     MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 532
/* 528 */     MCD::OPC_Decode, 199, 3, 15, // Opcode: LW_MM
/* 532 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 5, 3, // Skip to: 780
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 1, 242, 21, // Skip to: 5636
/* 18 */      MCD::OPC_CheckField, 21, 5, 0, 236, 21, // Skip to: 5636
/* 24 */      MCD::OPC_Decode, 202, 5, 21, // Opcode: SLL
/* 28 */      MCD::OPC_FilterValue, 1, 39, 0, // Skip to: 71
/* 32 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 35 */      MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 53
/* 39 */      MCD::OPC_CheckPredicate, 1, 217, 21, // Skip to: 5636
/* 43 */      MCD::OPC_CheckField, 6, 5, 0, 211, 21, // Skip to: 5636
/* 49 */      MCD::OPC_Decode, 241, 3, 22, // Opcode: MOVF_I
/* 53 */      MCD::OPC_FilterValue, 1, 203, 21, // Skip to: 5636
/* 57 */      MCD::OPC_CheckPredicate, 1, 199, 21, // Skip to: 5636
/* 61 */      MCD::OPC_CheckField, 6, 5, 0, 193, 21, // Skip to: 5636
/* 67 */      MCD::OPC_Decode, 255, 3, 22, // Opcode: MOVT_I
/* 71 */      MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 102
/* 75 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 78 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 90
/* 82 */      MCD::OPC_CheckPredicate, 1, 174, 21, // Skip to: 5636
/* 86 */      MCD::OPC_Decode, 224, 5, 21, // Opcode: SRL
/* 90 */      MCD::OPC_FilterValue, 1, 166, 21, // Skip to: 5636
/* 94 */      MCD::OPC_CheckPredicate, 4, 162, 21, // Skip to: 5636
/* 98 */      MCD::OPC_Decode, 132, 5, 21, // Opcode: ROTR
/* 102 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 120
/* 106 */     MCD::OPC_CheckPredicate, 1, 150, 21, // Skip to: 5636
/* 110 */     MCD::OPC_CheckField, 21, 5, 0, 144, 21, // Skip to: 5636
/* 116 */     MCD::OPC_Decode, 220, 5, 21, // Opcode: SRA
/* 120 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 138
/* 124 */     MCD::OPC_CheckPredicate, 1, 132, 21, // Skip to: 5636
/* 128 */     MCD::OPC_CheckField, 6, 5, 0, 126, 21, // Skip to: 5636
/* 134 */     MCD::OPC_Decode, 205, 5, 12, // Opcode: SLLV
/* 138 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 169
/* 142 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 145 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 157
/* 149 */     MCD::OPC_CheckPredicate, 1, 107, 21, // Skip to: 5636
/* 153 */     MCD::OPC_Decode, 225, 5, 12, // Opcode: SRLV
/* 157 */     MCD::OPC_FilterValue, 1, 99, 21, // Skip to: 5636
/* 161 */     MCD::OPC_CheckPredicate, 4, 95, 21, // Skip to: 5636
/* 165 */     MCD::OPC_Decode, 133, 5, 12, // Opcode: ROTRV
/* 169 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 187
/* 173 */     MCD::OPC_CheckPredicate, 1, 83, 21, // Skip to: 5636
/* 177 */     MCD::OPC_CheckField, 6, 5, 0, 77, 21, // Skip to: 5636
/* 183 */     MCD::OPC_Decode, 221, 5, 12, // Opcode: SRAV
/* 187 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 205
/* 191 */     MCD::OPC_CheckPredicate, 1, 65, 21, // Skip to: 5636
/* 195 */     MCD::OPC_CheckField, 6, 15, 0, 59, 21, // Skip to: 5636
/* 201 */     MCD::OPC_Decode, 241, 2, 23, // Opcode: JR
/* 205 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 229
/* 209 */     MCD::OPC_CheckPredicate, 1, 47, 21, // Skip to: 5636
/* 213 */     MCD::OPC_CheckField, 16, 5, 0, 41, 21, // Skip to: 5636
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 35, 21, // Skip to: 5636
/* 225 */     MCD::OPC_Decode, 237, 2, 24, // Opcode: JALR
/* 229 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 247
/* 233 */     MCD::OPC_CheckPredicate, 1, 23, 21, // Skip to: 5636
/* 237 */     MCD::OPC_CheckField, 6, 5, 0, 17, 21, // Skip to: 5636
/* 243 */     MCD::OPC_Decode, 136, 4, 25, // Opcode: MOVZ_I_I
/* 247 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 265
/* 251 */     MCD::OPC_CheckPredicate, 1, 5, 21, // Skip to: 5636
/* 255 */     MCD::OPC_CheckField, 6, 5, 0, 255, 20, // Skip to: 5636
/* 261 */     MCD::OPC_Decode, 250, 3, 25, // Opcode: MOVN_I_I
/* 265 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 277
/* 269 */     MCD::OPC_CheckPredicate, 1, 243, 20, // Skip to: 5636
/* 273 */     MCD::OPC_Decode, 152, 6, 26, // Opcode: SYSCALL
/* 277 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 289
/* 281 */     MCD::OPC_CheckPredicate, 1, 231, 20, // Skip to: 5636
/* 285 */     MCD::OPC_Decode, 147, 1, 27, // Opcode: BREAK
/* 289 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 301
/* 293 */     MCD::OPC_CheckPredicate, 1, 219, 20, // Skip to: 5636
/* 297 */     MCD::OPC_Decode, 151, 6, 28, // Opcode: SYNC
/* 301 */     MCD::OPC_FilterValue, 16, 43, 0, // Skip to: 348
/* 305 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 308 */     MCD::OPC_FilterValue, 0, 204, 20, // Skip to: 5636
/* 312 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 315 */     MCD::OPC_FilterValue, 0, 197, 20, // Skip to: 5636
/* 319 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 322 */     MCD::OPC_FilterValue, 0, 190, 20, // Skip to: 5636
/* 326 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 340
/* 330 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 340
/* 336 */     MCD::OPC_Decode, 230, 3, 29, // Opcode: MFHI
/* 340 */     MCD::OPC_CheckPredicate, 5, 172, 20, // Skip to: 5636
/* 344 */     MCD::OPC_Decode, 232, 3, 30, // Opcode: MFHI_DSP
/* 348 */     MCD::OPC_FilterValue, 17, 36, 0, // Skip to: 388
/* 352 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 355 */     MCD::OPC_FilterValue, 0, 157, 20, // Skip to: 5636
/* 359 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 362 */     MCD::OPC_FilterValue, 0, 150, 20, // Skip to: 5636
/* 366 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 380
/* 370 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 380
/* 376 */     MCD::OPC_Decode, 149, 4, 23, // Opcode: MTHI
/* 380 */     MCD::OPC_CheckPredicate, 5, 132, 20, // Skip to: 5636
/* 384 */     MCD::OPC_Decode, 151, 4, 31, // Opcode: MTHI_DSP
/* 388 */     MCD::OPC_FilterValue, 18, 43, 0, // Skip to: 435
/* 392 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 395 */     MCD::OPC_FilterValue, 0, 117, 20, // Skip to: 5636
/* 399 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 402 */     MCD::OPC_FilterValue, 0, 110, 20, // Skip to: 5636
/* 406 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 409 */     MCD::OPC_FilterValue, 0, 103, 20, // Skip to: 5636
/* 413 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 427
/* 417 */     MCD::OPC_CheckField, 21, 2, 0, 4, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 233, 3, 29, // Opcode: MFLO
/* 427 */     MCD::OPC_CheckPredicate, 5, 85, 20, // Skip to: 5636
/* 431 */     MCD::OPC_Decode, 235, 3, 32, // Opcode: MFLO_DSP
/* 435 */     MCD::OPC_FilterValue, 19, 36, 0, // Skip to: 475
/* 439 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 442 */     MCD::OPC_FilterValue, 0, 70, 20, // Skip to: 5636
/* 446 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 449 */     MCD::OPC_FilterValue, 0, 63, 20, // Skip to: 5636
/* 453 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 467
/* 457 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 467
/* 463 */     MCD::OPC_Decode, 153, 4, 23, // Opcode: MTLO
/* 467 */     MCD::OPC_CheckPredicate, 5, 45, 20, // Skip to: 5636
/* 471 */     MCD::OPC_Decode, 155, 4, 33, // Opcode: MTLO_DSP
/* 475 */     MCD::OPC_FilterValue, 24, 36, 0, // Skip to: 515
/* 479 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 482 */     MCD::OPC_FilterValue, 0, 30, 20, // Skip to: 5636
/* 486 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 489 */     MCD::OPC_FilterValue, 0, 23, 20, // Skip to: 5636
/* 493 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 507
/* 497 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 507
/* 503 */     MCD::OPC_Decode, 167, 4, 34, // Opcode: MULT
/* 507 */     MCD::OPC_CheckPredicate, 5, 5, 20, // Skip to: 5636
/* 511 */     MCD::OPC_Decode, 169, 4, 35, // Opcode: MULT_DSP
/* 515 */     MCD::OPC_FilterValue, 25, 36, 0, // Skip to: 555
/* 519 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 522 */     MCD::OPC_FilterValue, 0, 246, 19, // Skip to: 5636
/* 526 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 529 */     MCD::OPC_FilterValue, 0, 239, 19, // Skip to: 5636
/* 533 */     MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 547
/* 537 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 547
/* 543 */     MCD::OPC_Decode, 171, 4, 34, // Opcode: MULTu
/* 547 */     MCD::OPC_CheckPredicate, 5, 221, 19, // Skip to: 5636
/* 551 */     MCD::OPC_Decode, 168, 4, 35, // Opcode: MULTU_DSP
/* 555 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 573
/* 559 */     MCD::OPC_CheckPredicate, 1, 209, 19, // Skip to: 5636
/* 563 */     MCD::OPC_CheckField, 6, 10, 0, 203, 19, // Skip to: 5636
/* 569 */     MCD::OPC_Decode, 159, 5, 34, // Opcode: SDIV
/* 573 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 591
/* 577 */     MCD::OPC_CheckPredicate, 1, 191, 19, // Skip to: 5636
/* 581 */     MCD::OPC_CheckField, 6, 10, 0, 185, 19, // Skip to: 5636
/* 587 */     MCD::OPC_Decode, 201, 6, 34, // Opcode: UDIV
/* 591 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 608
/* 595 */     MCD::OPC_CheckPredicate, 1, 173, 19, // Skip to: 5636
/* 599 */     MCD::OPC_CheckField, 6, 5, 0, 167, 19, // Skip to: 5636
/* 605 */     MCD::OPC_Decode, 20, 11, // Opcode: ADD
/* 608 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 625
/* 612 */     MCD::OPC_CheckPredicate, 1, 156, 19, // Skip to: 5636
/* 616 */     MCD::OPC_CheckField, 6, 5, 0, 150, 19, // Skip to: 5636
/* 622 */     MCD::OPC_Decode, 41, 11, // Opcode: ADDu
/* 625 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 643
/* 629 */     MCD::OPC_CheckPredicate, 1, 139, 19, // Skip to: 5636
/* 633 */     MCD::OPC_CheckField, 6, 5, 0, 133, 19, // Skip to: 5636
/* 639 */     MCD::OPC_Decode, 240, 5, 11, // Opcode: SUB
/* 643 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 661
/* 647 */     MCD::OPC_CheckPredicate, 1, 121, 19, // Skip to: 5636
/* 651 */     MCD::OPC_CheckField, 6, 5, 0, 115, 19, // Skip to: 5636
/* 657 */     MCD::OPC_Decode, 255, 5, 11, // Opcode: SUBu
/* 661 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 678
/* 665 */     MCD::OPC_CheckPredicate, 1, 103, 19, // Skip to: 5636
/* 669 */     MCD::OPC_CheckField, 6, 5, 0, 97, 19, // Skip to: 5636
/* 675 */     MCD::OPC_Decode, 45, 11, // Opcode: AND
/* 678 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 696
/* 682 */     MCD::OPC_CheckPredicate, 1, 86, 19, // Skip to: 5636
/* 686 */     MCD::OPC_CheckField, 6, 5, 0, 80, 19, // Skip to: 5636
/* 692 */     MCD::OPC_Decode, 196, 4, 11, // Opcode: OR
/* 696 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 714
/* 700 */     MCD::OPC_CheckPredicate, 1, 68, 19, // Skip to: 5636
/* 704 */     MCD::OPC_CheckField, 6, 5, 0, 62, 19, // Skip to: 5636
/* 710 */     MCD::OPC_Decode, 204, 6, 11, // Opcode: XOR
/* 714 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 732
/* 718 */     MCD::OPC_CheckPredicate, 1, 50, 19, // Skip to: 5636
/* 722 */     MCD::OPC_CheckField, 6, 5, 0, 44, 19, // Skip to: 5636
/* 728 */     MCD::OPC_Decode, 191, 4, 11, // Opcode: NOR
/* 732 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 750
/* 736 */     MCD::OPC_CheckPredicate, 1, 32, 19, // Skip to: 5636
/* 740 */     MCD::OPC_CheckField, 6, 5, 0, 26, 19, // Skip to: 5636
/* 746 */     MCD::OPC_Decode, 208, 5, 11, // Opcode: SLT
/* 750 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 768
/* 754 */     MCD::OPC_CheckPredicate, 1, 14, 19, // Skip to: 5636
/* 758 */     MCD::OPC_CheckField, 6, 5, 0, 8, 19, // Skip to: 5636
/* 764 */     MCD::OPC_Decode, 217, 5, 11, // Opcode: SLTu
/* 768 */     MCD::OPC_FilterValue, 52, 0, 19, // Skip to: 5636
/* 772 */     MCD::OPC_CheckPredicate, 1, 252, 18, // Skip to: 5636
/* 776 */     MCD::OPC_Decode, 194, 6, 36, // Opcode: TEQ
/* 780 */     MCD::OPC_FilterValue, 1, 69, 0, // Skip to: 853
/* 784 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 787 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 799
/* 791 */     MCD::OPC_CheckPredicate, 1, 233, 18, // Skip to: 5636
/* 795 */     MCD::OPC_Decode, 140, 1, 37, // Opcode: BLTZ
/* 799 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 811
/* 803 */     MCD::OPC_CheckPredicate, 1, 221, 18, // Skip to: 5636
/* 807 */     MCD::OPC_Decode, 132, 1, 37, // Opcode: BGEZ
/* 811 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 823
/* 815 */     MCD::OPC_CheckPredicate, 1, 209, 18, // Skip to: 5636
/* 819 */     MCD::OPC_Decode, 142, 1, 37, // Opcode: BLTZAL
/* 823 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 835
/* 827 */     MCD::OPC_CheckPredicate, 1, 197, 18, // Skip to: 5636
/* 831 */     MCD::OPC_Decode, 134, 1, 37, // Opcode: BGEZAL
/* 835 */     MCD::OPC_FilterValue, 28, 189, 18, // Skip to: 5636
/* 839 */     MCD::OPC_CheckPredicate, 5, 185, 18, // Skip to: 5636
/* 843 */     MCD::OPC_CheckField, 21, 5, 0, 179, 18, // Skip to: 5636
/* 849 */     MCD::OPC_Decode, 145, 1, 38, // Opcode: BPOSGE32
/* 853 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 865
/* 857 */     MCD::OPC_CheckPredicate, 6, 167, 18, // Skip to: 5636
/* 861 */     MCD::OPC_Decode, 235, 2, 39, // Opcode: J
/* 865 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 877
/* 869 */     MCD::OPC_CheckPredicate, 1, 155, 18, // Skip to: 5636
/* 873 */     MCD::OPC_Decode, 236, 2, 39, // Opcode: JAL
/* 877 */     MCD::OPC_FilterValue, 4, 21, 0, // Skip to: 902
/* 881 */     MCD::OPC_CheckPredicate, 6, 9, 0, // Skip to: 894
/* 885 */     MCD::OPC_CheckField, 16, 10, 0, 3, 0, // Skip to: 894
/* 891 */     MCD::OPC_Decode, 125, 38, // Opcode: B
/* 894 */     MCD::OPC_CheckPredicate, 1, 130, 18, // Skip to: 5636
/* 898 */     MCD::OPC_Decode, 130, 1, 40, // Opcode: BEQ
/* 902 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 914
/* 906 */     MCD::OPC_CheckPredicate, 1, 118, 18, // Skip to: 5636
/* 910 */     MCD::OPC_Decode, 143, 1, 40, // Opcode: BNE
/* 914 */     MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 932
/* 918 */     MCD::OPC_CheckPredicate, 1, 106, 18, // Skip to: 5636
/* 922 */     MCD::OPC_CheckField, 16, 5, 0, 100, 18, // Skip to: 5636
/* 928 */     MCD::OPC_Decode, 138, 1, 37, // Opcode: BLEZ
/* 932 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 950
/* 936 */     MCD::OPC_CheckPredicate, 1, 88, 18, // Skip to: 5636
/* 940 */     MCD::OPC_CheckField, 16, 5, 0, 82, 18, // Skip to: 5636
/* 946 */     MCD::OPC_Decode, 135, 1, 37, // Opcode: BGTZ
/* 950 */     MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 961
/* 954 */     MCD::OPC_CheckPredicate, 1, 70, 18, // Skip to: 5636
/* 958 */     MCD::OPC_Decode, 37, 20, // Opcode: ADDi
/* 961 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 972
/* 965 */     MCD::OPC_CheckPredicate, 1, 59, 18, // Skip to: 5636
/* 969 */     MCD::OPC_Decode, 39, 20, // Opcode: ADDiu
/* 972 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 984
/* 976 */     MCD::OPC_CheckPredicate, 1, 48, 18, // Skip to: 5636
/* 980 */     MCD::OPC_Decode, 211, 5, 20, // Opcode: SLTi
/* 984 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 996
/* 988 */     MCD::OPC_CheckPredicate, 1, 36, 18, // Skip to: 5636
/* 992 */     MCD::OPC_Decode, 214, 5, 20, // Opcode: SLTiu
/* 996 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1007
/* 1000 */    MCD::OPC_CheckPredicate, 1, 24, 18, // Skip to: 5636
/* 1004 */    MCD::OPC_Decode, 48, 41, // Opcode: ANDi
/* 1007 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1019
/* 1011 */    MCD::OPC_CheckPredicate, 1, 13, 18, // Skip to: 5636
/* 1015 */    MCD::OPC_Decode, 199, 4, 41, // Opcode: ORi
/* 1019 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1031
/* 1023 */    MCD::OPC_CheckPredicate, 1, 1, 18, // Skip to: 5636
/* 1027 */    MCD::OPC_Decode, 207, 6, 41, // Opcode: XORi
/* 1031 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1049
/* 1035 */    MCD::OPC_CheckPredicate, 1, 245, 17, // Skip to: 5636
/* 1039 */    MCD::OPC_CheckField, 21, 5, 0, 239, 17, // Skip to: 5636
/* 1045 */    MCD::OPC_Decode, 178, 3, 16, // Opcode: LUi
/* 1049 */    MCD::OPC_FilterValue, 16, 105, 0, // Skip to: 1158
/* 1053 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1056 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1074
/* 1060 */    MCD::OPC_CheckPredicate, 1, 220, 17, // Skip to: 5636
/* 1064 */    MCD::OPC_CheckField, 3, 8, 0, 214, 17, // Skip to: 5636
/* 1070 */    MCD::OPC_Decode, 227, 3, 42, // Opcode: MFC0_3OP
/* 1074 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1092
/* 1078 */    MCD::OPC_CheckPredicate, 1, 202, 17, // Skip to: 5636
/* 1082 */    MCD::OPC_CheckField, 3, 8, 0, 196, 17, // Skip to: 5636
/* 1088 */    MCD::OPC_Decode, 146, 4, 43, // Opcode: MTC0_3OP
/* 1092 */    MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 1127
/* 1096 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 1099 */    MCD::OPC_FilterValue, 128, 192, 1, 8, 0, // Skip to: 1113
/* 1105 */    MCD::OPC_CheckPredicate, 1, 175, 17, // Skip to: 5636
/* 1109 */    MCD::OPC_Decode, 138, 2, 44, // Opcode: DI
/* 1113 */    MCD::OPC_FilterValue, 160, 192, 1, 165, 17, // Skip to: 5636
/* 1119 */    MCD::OPC_CheckPredicate, 1, 161, 17, // Skip to: 5636
/* 1123 */    MCD::OPC_Decode, 185, 2, 44, // Opcode: EI
/* 1127 */    MCD::OPC_FilterValue, 16, 153, 17, // Skip to: 5636
/* 1131 */    MCD::OPC_ExtractField, 0, 21,  // Inst{20-0} ...
/* 1134 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1146
/* 1138 */    MCD::OPC_CheckPredicate, 1, 142, 17, // Skip to: 5636
/* 1142 */    MCD::OPC_Decode, 186, 2, 2, // Opcode: ERET
/* 1146 */    MCD::OPC_FilterValue, 31, 134, 17, // Skip to: 5636
/* 1150 */    MCD::OPC_CheckPredicate, 1, 130, 17, // Skip to: 5636
/* 1154 */    MCD::OPC_Decode, 134, 2, 2, // Opcode: DERET
/* 1158 */    MCD::OPC_FilterValue, 17, 97, 5, // Skip to: 2539
/* 1162 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1165 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1183
/* 1169 */    MCD::OPC_CheckPredicate, 1, 111, 17, // Skip to: 5636
/* 1173 */    MCD::OPC_CheckField, 0, 11, 0, 105, 17, // Skip to: 5636
/* 1179 */    MCD::OPC_Decode, 228, 3, 45, // Opcode: MFC1
/* 1183 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1201
/* 1187 */    MCD::OPC_CheckPredicate, 1, 93, 17, // Skip to: 5636
/* 1191 */    MCD::OPC_CheckField, 0, 11, 0, 87, 17, // Skip to: 5636
/* 1197 */    MCD::OPC_Decode, 143, 2, 46, // Opcode: DMFC1
/* 1201 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1219
/* 1205 */    MCD::OPC_CheckPredicate, 1, 75, 17, // Skip to: 5636
/* 1209 */    MCD::OPC_CheckField, 0, 11, 0, 69, 17, // Skip to: 5636
/* 1215 */    MCD::OPC_Decode, 174, 1, 47, // Opcode: CFC1
/* 1219 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1237
/* 1223 */    MCD::OPC_CheckPredicate, 1, 57, 17, // Skip to: 5636
/* 1227 */    MCD::OPC_CheckField, 0, 11, 0, 51, 17, // Skip to: 5636
/* 1233 */    MCD::OPC_Decode, 147, 4, 48, // Opcode: MTC1
/* 1237 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1255
/* 1241 */    MCD::OPC_CheckPredicate, 1, 39, 17, // Skip to: 5636
/* 1245 */    MCD::OPC_CheckField, 0, 11, 0, 33, 17, // Skip to: 5636
/* 1251 */    MCD::OPC_Decode, 146, 2, 49, // Opcode: DMTC1
/* 1255 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1273
/* 1259 */    MCD::OPC_CheckPredicate, 1, 21, 17, // Skip to: 5636
/* 1263 */    MCD::OPC_CheckField, 0, 11, 0, 15, 17, // Skip to: 5636
/* 1269 */    MCD::OPC_Decode, 189, 1, 50, // Opcode: CTC1
/* 1273 */    MCD::OPC_FilterValue, 8, 27, 0, // Skip to: 1304
/* 1277 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1280 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1292
/* 1284 */    MCD::OPC_CheckPredicate, 1, 252, 16, // Skip to: 5636
/* 1288 */    MCD::OPC_Decode, 128, 1, 51, // Opcode: BC1F
/* 1292 */    MCD::OPC_FilterValue, 1, 244, 16, // Skip to: 5636
/* 1296 */    MCD::OPC_CheckPredicate, 1, 240, 16, // Skip to: 5636
/* 1300 */    MCD::OPC_Decode, 129, 1, 51, // Opcode: BC1T
/* 1304 */    MCD::OPC_FilterValue, 16, 80, 2, // Skip to: 1900
/* 1308 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1311 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1323
/* 1315 */    MCD::OPC_CheckPredicate, 1, 221, 16, // Skip to: 5636
/* 1319 */    MCD::OPC_Decode, 206, 2, 52, // Opcode: FADD_S
/* 1323 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1335
/* 1327 */    MCD::OPC_CheckPredicate, 1, 209, 16, // Skip to: 5636
/* 1331 */    MCD::OPC_Decode, 232, 2, 52, // Opcode: FSUB_S
/* 1335 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1347
/* 1339 */    MCD::OPC_CheckPredicate, 1, 197, 16, // Skip to: 5636
/* 1343 */    MCD::OPC_Decode, 223, 2, 52, // Opcode: FMUL_S
/* 1347 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1359
/* 1351 */    MCD::OPC_CheckPredicate, 1, 185, 16, // Skip to: 5636
/* 1355 */    MCD::OPC_Decode, 212, 2, 52, // Opcode: FDIV_S
/* 1359 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1377
/* 1363 */    MCD::OPC_CheckPredicate, 1, 173, 16, // Skip to: 5636
/* 1367 */    MCD::OPC_CheckField, 16, 5, 0, 167, 16, // Skip to: 5636
/* 1373 */    MCD::OPC_Decode, 229, 2, 53, // Opcode: FSQRT_S
/* 1377 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1395
/* 1381 */    MCD::OPC_CheckPredicate, 6, 155, 16, // Skip to: 5636
/* 1385 */    MCD::OPC_CheckField, 16, 5, 0, 149, 16, // Skip to: 5636
/* 1391 */    MCD::OPC_Decode, 203, 2, 53, // Opcode: FABS_S
/* 1395 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 1413
/* 1399 */    MCD::OPC_CheckPredicate, 1, 137, 16, // Skip to: 5636
/* 1403 */    MCD::OPC_CheckField, 16, 5, 0, 131, 16, // Skip to: 5636
/* 1409 */    MCD::OPC_Decode, 220, 2, 53, // Opcode: FMOV_S
/* 1413 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 1431
/* 1417 */    MCD::OPC_CheckPredicate, 6, 119, 16, // Skip to: 5636
/* 1421 */    MCD::OPC_CheckField, 16, 5, 0, 113, 16, // Skip to: 5636
/* 1427 */    MCD::OPC_Decode, 226, 2, 53, // Opcode: FNEG_S
/* 1431 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1449
/* 1435 */    MCD::OPC_CheckPredicate, 1, 101, 16, // Skip to: 5636
/* 1439 */    MCD::OPC_CheckField, 16, 5, 0, 95, 16, // Skip to: 5636
/* 1445 */    MCD::OPC_Decode, 140, 5, 53, // Opcode: ROUND_W_S
/* 1449 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 1467
/* 1453 */    MCD::OPC_CheckPredicate, 1, 83, 16, // Skip to: 5636
/* 1457 */    MCD::OPC_CheckField, 16, 5, 0, 77, 16, // Skip to: 5636
/* 1463 */    MCD::OPC_Decode, 200, 6, 53, // Opcode: TRUNC_W_S
/* 1467 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 1485
/* 1471 */    MCD::OPC_CheckPredicate, 1, 65, 16, // Skip to: 5636
/* 1475 */    MCD::OPC_CheckField, 16, 5, 0, 59, 16, // Skip to: 5636
/* 1481 */    MCD::OPC_Decode, 173, 1, 53, // Opcode: CEIL_W_S
/* 1485 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1503
/* 1489 */    MCD::OPC_CheckPredicate, 1, 47, 16, // Skip to: 5636
/* 1493 */    MCD::OPC_CheckField, 16, 5, 0, 41, 16, // Skip to: 5636
/* 1499 */    MCD::OPC_Decode, 217, 2, 53, // Opcode: FLOOR_W_S
/* 1503 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 1534
/* 1507 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1510 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1522
/* 1514 */    MCD::OPC_CheckPredicate, 1, 22, 16, // Skip to: 5636
/* 1518 */    MCD::OPC_Decode, 243, 3, 54, // Opcode: MOVF_S
/* 1522 */    MCD::OPC_FilterValue, 1, 14, 16, // Skip to: 5636
/* 1526 */    MCD::OPC_CheckPredicate, 1, 10, 16, // Skip to: 5636
/* 1530 */    MCD::OPC_Decode, 129, 4, 54, // Opcode: MOVT_S
/* 1534 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 1546
/* 1538 */    MCD::OPC_CheckPredicate, 1, 254, 15, // Skip to: 5636
/* 1542 */    MCD::OPC_Decode, 138, 4, 55, // Opcode: MOVZ_I_S
/* 1546 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 1558
/* 1550 */    MCD::OPC_CheckPredicate, 1, 242, 15, // Skip to: 5636
/* 1554 */    MCD::OPC_Decode, 252, 3, 55, // Opcode: MOVN_I_S
/* 1558 */    MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 1576
/* 1562 */    MCD::OPC_CheckPredicate, 7, 230, 15, // Skip to: 5636
/* 1566 */    MCD::OPC_CheckField, 16, 5, 0, 224, 15, // Skip to: 5636
/* 1572 */    MCD::OPC_Decode, 190, 1, 56, // Opcode: CVT_D32_S
/* 1576 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 1594
/* 1580 */    MCD::OPC_CheckPredicate, 1, 212, 15, // Skip to: 5636
/* 1584 */    MCD::OPC_CheckField, 16, 5, 0, 206, 15, // Skip to: 5636
/* 1590 */    MCD::OPC_Decode, 203, 1, 53, // Opcode: CVT_W_S
/* 1594 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 1612
/* 1598 */    MCD::OPC_CheckPredicate, 1, 194, 15, // Skip to: 5636
/* 1602 */    MCD::OPC_CheckField, 16, 5, 0, 188, 15, // Skip to: 5636
/* 1608 */    MCD::OPC_Decode, 196, 1, 57, // Opcode: CVT_L_S
/* 1612 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 1630
/* 1616 */    MCD::OPC_CheckPredicate, 1, 176, 15, // Skip to: 5636
/* 1620 */    MCD::OPC_CheckField, 6, 5, 0, 170, 15, // Skip to: 5636
/* 1626 */    MCD::OPC_Decode, 209, 1, 58, // Opcode: C_F_S
/* 1630 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 1648
/* 1634 */    MCD::OPC_CheckPredicate, 1, 158, 15, // Skip to: 5636
/* 1638 */    MCD::OPC_CheckField, 6, 5, 0, 152, 15, // Skip to: 5636
/* 1644 */    MCD::OPC_Decode, 251, 1, 58, // Opcode: C_UN_S
/* 1648 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 1666
/* 1652 */    MCD::OPC_CheckPredicate, 1, 140, 15, // Skip to: 5636
/* 1656 */    MCD::OPC_CheckField, 6, 5, 0, 134, 15, // Skip to: 5636
/* 1662 */    MCD::OPC_Decode, 206, 1, 58, // Opcode: C_EQ_S
/* 1666 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 1684
/* 1670 */    MCD::OPC_CheckPredicate, 1, 122, 15, // Skip to: 5636
/* 1674 */    MCD::OPC_CheckField, 6, 5, 0, 116, 15, // Skip to: 5636
/* 1680 */    MCD::OPC_Decode, 242, 1, 58, // Opcode: C_UEQ_S
/* 1684 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 1702
/* 1688 */    MCD::OPC_CheckPredicate, 1, 104, 15, // Skip to: 5636
/* 1692 */    MCD::OPC_CheckField, 6, 5, 0, 98, 15, // Skip to: 5636
/* 1698 */    MCD::OPC_Decode, 233, 1, 58, // Opcode: C_OLT_S
/* 1702 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 1720
/* 1706 */    MCD::OPC_CheckPredicate, 1, 86, 15, // Skip to: 5636
/* 1710 */    MCD::OPC_CheckField, 6, 5, 0, 80, 15, // Skip to: 5636
/* 1716 */    MCD::OPC_Decode, 248, 1, 58, // Opcode: C_ULT_S
/* 1720 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 1738
/* 1724 */    MCD::OPC_CheckPredicate, 1, 68, 15, // Skip to: 5636
/* 1728 */    MCD::OPC_CheckField, 6, 5, 0, 62, 15, // Skip to: 5636
/* 1734 */    MCD::OPC_Decode, 230, 1, 58, // Opcode: C_OLE_S
/* 1738 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 1756
/* 1742 */    MCD::OPC_CheckPredicate, 1, 50, 15, // Skip to: 5636
/* 1746 */    MCD::OPC_CheckField, 6, 5, 0, 44, 15, // Skip to: 5636
/* 1752 */    MCD::OPC_Decode, 245, 1, 58, // Opcode: C_ULE_S
/* 1756 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 1774
/* 1760 */    MCD::OPC_CheckPredicate, 1, 32, 15, // Skip to: 5636
/* 1764 */    MCD::OPC_CheckField, 6, 5, 0, 26, 15, // Skip to: 5636
/* 1770 */    MCD::OPC_Decode, 239, 1, 58, // Opcode: C_SF_S
/* 1774 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 1792
/* 1778 */    MCD::OPC_CheckPredicate, 1, 14, 15, // Skip to: 5636
/* 1782 */    MCD::OPC_CheckField, 6, 5, 0, 8, 15, // Skip to: 5636
/* 1788 */    MCD::OPC_Decode, 221, 1, 58, // Opcode: C_NGLE_S
/* 1792 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 1810
/* 1796 */    MCD::OPC_CheckPredicate, 1, 252, 14, // Skip to: 5636
/* 1800 */    MCD::OPC_CheckField, 6, 5, 0, 246, 14, // Skip to: 5636
/* 1806 */    MCD::OPC_Decode, 236, 1, 58, // Opcode: C_SEQ_S
/* 1810 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 1828
/* 1814 */    MCD::OPC_CheckPredicate, 1, 234, 14, // Skip to: 5636
/* 1818 */    MCD::OPC_CheckField, 6, 5, 0, 228, 14, // Skip to: 5636
/* 1824 */    MCD::OPC_Decode, 224, 1, 58, // Opcode: C_NGL_S
/* 1828 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 1846
/* 1832 */    MCD::OPC_CheckPredicate, 1, 216, 14, // Skip to: 5636
/* 1836 */    MCD::OPC_CheckField, 6, 5, 0, 210, 14, // Skip to: 5636
/* 1842 */    MCD::OPC_Decode, 215, 1, 58, // Opcode: C_LT_S
/* 1846 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 1864
/* 1850 */    MCD::OPC_CheckPredicate, 1, 198, 14, // Skip to: 5636
/* 1854 */    MCD::OPC_CheckField, 6, 5, 0, 192, 14, // Skip to: 5636
/* 1860 */    MCD::OPC_Decode, 218, 1, 58, // Opcode: C_NGE_S
/* 1864 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 1882
/* 1868 */    MCD::OPC_CheckPredicate, 1, 180, 14, // Skip to: 5636
/* 1872 */    MCD::OPC_CheckField, 6, 5, 0, 174, 14, // Skip to: 5636
/* 1878 */    MCD::OPC_Decode, 212, 1, 58, // Opcode: C_LE_S
/* 1882 */    MCD::OPC_FilterValue, 63, 166, 14, // Skip to: 5636
/* 1886 */    MCD::OPC_CheckPredicate, 1, 162, 14, // Skip to: 5636
/* 1890 */    MCD::OPC_CheckField, 6, 5, 0, 156, 14, // Skip to: 5636
/* 1896 */    MCD::OPC_Decode, 227, 1, 58, // Opcode: C_NGT_S
/* 1900 */    MCD::OPC_FilterValue, 17, 80, 2, // Skip to: 2496
/* 1904 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1907 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1919
/* 1911 */    MCD::OPC_CheckPredicate, 7, 137, 14, // Skip to: 5636
/* 1915 */    MCD::OPC_Decode, 204, 2, 59, // Opcode: FADD_D32
/* 1919 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1931
/* 1923 */    MCD::OPC_CheckPredicate, 7, 125, 14, // Skip to: 5636
/* 1927 */    MCD::OPC_Decode, 230, 2, 59, // Opcode: FSUB_D32
/* 1931 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1943
/* 1935 */    MCD::OPC_CheckPredicate, 7, 113, 14, // Skip to: 5636
/* 1939 */    MCD::OPC_Decode, 221, 2, 59, // Opcode: FMUL_D32
/* 1943 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1955
/* 1947 */    MCD::OPC_CheckPredicate, 7, 101, 14, // Skip to: 5636
/* 1951 */    MCD::OPC_Decode, 210, 2, 59, // Opcode: FDIV_D32
/* 1955 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1973
/* 1959 */    MCD::OPC_CheckPredicate, 7, 89, 14, // Skip to: 5636
/* 1963 */    MCD::OPC_CheckField, 16, 5, 0, 83, 14, // Skip to: 5636
/* 1969 */    MCD::OPC_Decode, 227, 2, 60, // Opcode: FSQRT_D32
/* 1973 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1991
/* 1977 */    MCD::OPC_CheckPredicate, 6, 71, 14, // Skip to: 5636
/* 1981 */    MCD::OPC_CheckField, 16, 5, 0, 65, 14, // Skip to: 5636
/* 1987 */    MCD::OPC_Decode, 201, 2, 60, // Opcode: FABS_D32
/* 1991 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2009
/* 1995 */    MCD::OPC_CheckPredicate, 7, 53, 14, // Skip to: 5636
/* 1999 */    MCD::OPC_CheckField, 16, 5, 0, 47, 14, // Skip to: 5636
/* 2005 */    MCD::OPC_Decode, 218, 2, 60, // Opcode: FMOV_D32
/* 2009 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2027
/* 2013 */    MCD::OPC_CheckPredicate, 6, 35, 14, // Skip to: 5636
/* 2017 */    MCD::OPC_CheckField, 16, 5, 0, 29, 14, // Skip to: 5636
/* 2023 */    MCD::OPC_Decode, 224, 2, 60, // Opcode: FNEG_D32
/* 2027 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 2045
/* 2031 */    MCD::OPC_CheckPredicate, 7, 17, 14, // Skip to: 5636
/* 2035 */    MCD::OPC_CheckField, 16, 5, 0, 11, 14, // Skip to: 5636
/* 2041 */    MCD::OPC_Decode, 138, 5, 61, // Opcode: ROUND_W_D32
/* 2045 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2063
/* 2049 */    MCD::OPC_CheckPredicate, 7, 255, 13, // Skip to: 5636
/* 2053 */    MCD::OPC_CheckField, 16, 5, 0, 249, 13, // Skip to: 5636
/* 2059 */    MCD::OPC_Decode, 198, 6, 61, // Opcode: TRUNC_W_D32
/* 2063 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2081
/* 2067 */    MCD::OPC_CheckPredicate, 7, 237, 13, // Skip to: 5636
/* 2071 */    MCD::OPC_CheckField, 16, 5, 0, 231, 13, // Skip to: 5636
/* 2077 */    MCD::OPC_Decode, 171, 1, 61, // Opcode: CEIL_W_D32
/* 2081 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 2099
/* 2085 */    MCD::OPC_CheckPredicate, 7, 219, 13, // Skip to: 5636
/* 2089 */    MCD::OPC_CheckField, 16, 5, 0, 213, 13, // Skip to: 5636
/* 2095 */    MCD::OPC_Decode, 215, 2, 61, // Opcode: FLOOR_W_D32
/* 2099 */    MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 2130
/* 2103 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2106 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2118
/* 2110 */    MCD::OPC_CheckPredicate, 7, 194, 13, // Skip to: 5636
/* 2114 */    MCD::OPC_Decode, 239, 3, 62, // Opcode: MOVF_D32
/* 2118 */    MCD::OPC_FilterValue, 1, 186, 13, // Skip to: 5636
/* 2122 */    MCD::OPC_CheckPredicate, 7, 182, 13, // Skip to: 5636
/* 2126 */    MCD::OPC_Decode, 253, 3, 62, // Opcode: MOVT_D32
/* 2130 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 2142
/* 2134 */    MCD::OPC_CheckPredicate, 7, 170, 13, // Skip to: 5636
/* 2138 */    MCD::OPC_Decode, 134, 4, 63, // Opcode: MOVZ_I_D32
/* 2142 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 2154
/* 2146 */    MCD::OPC_CheckPredicate, 7, 158, 13, // Skip to: 5636
/* 2150 */    MCD::OPC_Decode, 248, 3, 63, // Opcode: MOVN_I_D32
/* 2154 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2172
/* 2158 */    MCD::OPC_CheckPredicate, 7, 146, 13, // Skip to: 5636
/* 2162 */    MCD::OPC_CheckField, 16, 5, 0, 140, 13, // Skip to: 5636
/* 2168 */    MCD::OPC_Decode, 197, 1, 61, // Opcode: CVT_S_D32
/* 2172 */    MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 2190
/* 2176 */    MCD::OPC_CheckPredicate, 7, 128, 13, // Skip to: 5636
/* 2180 */    MCD::OPC_CheckField, 16, 5, 0, 122, 13, // Skip to: 5636
/* 2186 */    MCD::OPC_Decode, 201, 1, 61, // Opcode: CVT_W_D32
/* 2190 */    MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 2208
/* 2194 */    MCD::OPC_CheckPredicate, 1, 110, 13, // Skip to: 5636
/* 2198 */    MCD::OPC_CheckField, 16, 5, 0, 104, 13, // Skip to: 5636
/* 2204 */    MCD::OPC_Decode, 195, 1, 64, // Opcode: CVT_L_D64
/* 2208 */    MCD::OPC_FilterValue, 48, 14, 0, // Skip to: 2226
/* 2212 */    MCD::OPC_CheckPredicate, 7, 92, 13, // Skip to: 5636
/* 2216 */    MCD::OPC_CheckField, 6, 5, 0, 86, 13, // Skip to: 5636
/* 2222 */    MCD::OPC_Decode, 207, 1, 65, // Opcode: C_F_D32
/* 2226 */    MCD::OPC_FilterValue, 49, 14, 0, // Skip to: 2244
/* 2230 */    MCD::OPC_CheckPredicate, 7, 74, 13, // Skip to: 5636
/* 2234 */    MCD::OPC_CheckField, 6, 5, 0, 68, 13, // Skip to: 5636
/* 2240 */    MCD::OPC_Decode, 249, 1, 65, // Opcode: C_UN_D32
/* 2244 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 2262
/* 2248 */    MCD::OPC_CheckPredicate, 7, 56, 13, // Skip to: 5636
/* 2252 */    MCD::OPC_CheckField, 6, 5, 0, 50, 13, // Skip to: 5636
/* 2258 */    MCD::OPC_Decode, 204, 1, 65, // Opcode: C_EQ_D32
/* 2262 */    MCD::OPC_FilterValue, 51, 14, 0, // Skip to: 2280
/* 2266 */    MCD::OPC_CheckPredicate, 7, 38, 13, // Skip to: 5636
/* 2270 */    MCD::OPC_CheckField, 6, 5, 0, 32, 13, // Skip to: 5636
/* 2276 */    MCD::OPC_Decode, 240, 1, 65, // Opcode: C_UEQ_D32
/* 2280 */    MCD::OPC_FilterValue, 52, 14, 0, // Skip to: 2298
/* 2284 */    MCD::OPC_CheckPredicate, 7, 20, 13, // Skip to: 5636
/* 2288 */    MCD::OPC_CheckField, 6, 5, 0, 14, 13, // Skip to: 5636
/* 2294 */    MCD::OPC_Decode, 231, 1, 65, // Opcode: C_OLT_D32
/* 2298 */    MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 2316
/* 2302 */    MCD::OPC_CheckPredicate, 7, 2, 13, // Skip to: 5636
/* 2306 */    MCD::OPC_CheckField, 6, 5, 0, 252, 12, // Skip to: 5636
/* 2312 */    MCD::OPC_Decode, 246, 1, 65, // Opcode: C_ULT_D32
/* 2316 */    MCD::OPC_FilterValue, 54, 14, 0, // Skip to: 2334
/* 2320 */    MCD::OPC_CheckPredicate, 7, 240, 12, // Skip to: 5636
/* 2324 */    MCD::OPC_CheckField, 6, 5, 0, 234, 12, // Skip to: 5636
/* 2330 */    MCD::OPC_Decode, 228, 1, 65, // Opcode: C_OLE_D32
/* 2334 */    MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 2352
/* 2338 */    MCD::OPC_CheckPredicate, 7, 222, 12, // Skip to: 5636
/* 2342 */    MCD::OPC_CheckField, 6, 5, 0, 216, 12, // Skip to: 5636
/* 2348 */    MCD::OPC_Decode, 243, 1, 65, // Opcode: C_ULE_D32
/* 2352 */    MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 2370
/* 2356 */    MCD::OPC_CheckPredicate, 7, 204, 12, // Skip to: 5636
/* 2360 */    MCD::OPC_CheckField, 6, 5, 0, 198, 12, // Skip to: 5636
/* 2366 */    MCD::OPC_Decode, 237, 1, 65, // Opcode: C_SF_D32
/* 2370 */    MCD::OPC_FilterValue, 57, 14, 0, // Skip to: 2388
/* 2374 */    MCD::OPC_CheckPredicate, 7, 186, 12, // Skip to: 5636
/* 2378 */    MCD::OPC_CheckField, 6, 5, 0, 180, 12, // Skip to: 5636
/* 2384 */    MCD::OPC_Decode, 219, 1, 65, // Opcode: C_NGLE_D32
/* 2388 */    MCD::OPC_FilterValue, 58, 14, 0, // Skip to: 2406
/* 2392 */    MCD::OPC_CheckPredicate, 7, 168, 12, // Skip to: 5636
/* 2396 */    MCD::OPC_CheckField, 6, 5, 0, 162, 12, // Skip to: 5636
/* 2402 */    MCD::OPC_Decode, 234, 1, 65, // Opcode: C_SEQ_D32
/* 2406 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 2424
/* 2410 */    MCD::OPC_CheckPredicate, 7, 150, 12, // Skip to: 5636
/* 2414 */    MCD::OPC_CheckField, 6, 5, 0, 144, 12, // Skip to: 5636
/* 2420 */    MCD::OPC_Decode, 222, 1, 65, // Opcode: C_NGL_D32
/* 2424 */    MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 2442
/* 2428 */    MCD::OPC_CheckPredicate, 7, 132, 12, // Skip to: 5636
/* 2432 */    MCD::OPC_CheckField, 6, 5, 0, 126, 12, // Skip to: 5636
/* 2438 */    MCD::OPC_Decode, 213, 1, 65, // Opcode: C_LT_D32
/* 2442 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 2460
/* 2446 */    MCD::OPC_CheckPredicate, 7, 114, 12, // Skip to: 5636
/* 2450 */    MCD::OPC_CheckField, 6, 5, 0, 108, 12, // Skip to: 5636
/* 2456 */    MCD::OPC_Decode, 216, 1, 65, // Opcode: C_NGE_D32
/* 2460 */    MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 2478
/* 2464 */    MCD::OPC_CheckPredicate, 7, 96, 12, // Skip to: 5636
/* 2468 */    MCD::OPC_CheckField, 6, 5, 0, 90, 12, // Skip to: 5636
/* 2474 */    MCD::OPC_Decode, 210, 1, 65, // Opcode: C_LE_D32
/* 2478 */    MCD::OPC_FilterValue, 63, 82, 12, // Skip to: 5636
/* 2482 */    MCD::OPC_CheckPredicate, 7, 78, 12, // Skip to: 5636
/* 2486 */    MCD::OPC_CheckField, 6, 5, 0, 72, 12, // Skip to: 5636
/* 2492 */    MCD::OPC_Decode, 225, 1, 65, // Opcode: C_NGT_D32
/* 2496 */    MCD::OPC_FilterValue, 20, 64, 12, // Skip to: 5636
/* 2500 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2503 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 2521
/* 2507 */    MCD::OPC_CheckPredicate, 1, 53, 12, // Skip to: 5636
/* 2511 */    MCD::OPC_CheckField, 16, 5, 0, 47, 12, // Skip to: 5636
/* 2517 */    MCD::OPC_Decode, 200, 1, 53, // Opcode: CVT_S_W
/* 2521 */    MCD::OPC_FilterValue, 33, 39, 12, // Skip to: 5636
/* 2525 */    MCD::OPC_CheckPredicate, 7, 35, 12, // Skip to: 5636
/* 2529 */    MCD::OPC_CheckField, 16, 5, 0, 29, 12, // Skip to: 5636
/* 2535 */    MCD::OPC_Decode, 191, 1, 56, // Opcode: CVT_D32_W
/* 2539 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 2582
/* 2543 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 2546 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2564
/* 2550 */    MCD::OPC_CheckPredicate, 1, 10, 12, // Skip to: 5636
/* 2554 */    MCD::OPC_CheckField, 3, 8, 0, 4, 12, // Skip to: 5636
/* 2560 */    MCD::OPC_Decode, 229, 3, 42, // Opcode: MFC2_3OP
/* 2564 */    MCD::OPC_FilterValue, 4, 252, 11, // Skip to: 5636
/* 2568 */    MCD::OPC_CheckPredicate, 1, 248, 11, // Skip to: 5636
/* 2572 */    MCD::OPC_CheckField, 3, 8, 0, 242, 11, // Skip to: 5636
/* 2578 */    MCD::OPC_Decode, 148, 4, 43, // Opcode: MTC2_3OP
/* 2582 */    MCD::OPC_FilterValue, 19, 207, 0, // Skip to: 2793
/* 2586 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2589 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2607
/* 2593 */    MCD::OPC_CheckPredicate, 8, 223, 11, // Skip to: 5636
/* 2597 */    MCD::OPC_CheckField, 11, 5, 0, 217, 11, // Skip to: 5636
/* 2603 */    MCD::OPC_Decode, 197, 3, 66, // Opcode: LWXC1
/* 2607 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2625
/* 2611 */    MCD::OPC_CheckPredicate, 9, 205, 11, // Skip to: 5636
/* 2615 */    MCD::OPC_CheckField, 11, 5, 0, 199, 11, // Skip to: 5636
/* 2621 */    MCD::OPC_Decode, 141, 3, 67, // Opcode: LDXC1
/* 2625 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 2643
/* 2629 */    MCD::OPC_CheckPredicate, 10, 187, 11, // Skip to: 5636
/* 2633 */    MCD::OPC_CheckField, 11, 5, 0, 181, 11, // Skip to: 5636
/* 2639 */    MCD::OPC_Decode, 176, 3, 67, // Opcode: LUXC1
/* 2643 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 2661
/* 2647 */    MCD::OPC_CheckPredicate, 8, 169, 11, // Skip to: 5636
/* 2651 */    MCD::OPC_CheckField, 6, 5, 0, 163, 11, // Skip to: 5636
/* 2657 */    MCD::OPC_Decode, 146, 6, 68, // Opcode: SWXC1
/* 2661 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 2679
/* 2665 */    MCD::OPC_CheckPredicate, 9, 151, 11, // Skip to: 5636
/* 2669 */    MCD::OPC_CheckField, 6, 5, 0, 145, 11, // Skip to: 5636
/* 2675 */    MCD::OPC_Decode, 164, 5, 69, // Opcode: SDXC1
/* 2679 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 2697
/* 2683 */    MCD::OPC_CheckPredicate, 10, 133, 11, // Skip to: 5636
/* 2687 */    MCD::OPC_CheckField, 6, 5, 0, 127, 11, // Skip to: 5636
/* 2693 */    MCD::OPC_Decode, 129, 6, 69, // Opcode: SUXC1
/* 2697 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2709
/* 2701 */    MCD::OPC_CheckPredicate, 4, 115, 11, // Skip to: 5636
/* 2705 */    MCD::OPC_Decode, 222, 3, 70, // Opcode: MADD_S
/* 2709 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 2721
/* 2713 */    MCD::OPC_CheckPredicate, 11, 103, 11, // Skip to: 5636
/* 2717 */    MCD::OPC_Decode, 219, 3, 71, // Opcode: MADD_D32
/* 2721 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2733
/* 2725 */    MCD::OPC_CheckPredicate, 4, 91, 11, // Skip to: 5636
/* 2729 */    MCD::OPC_Decode, 145, 4, 70, // Opcode: MSUB_S
/* 2733 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 2745
/* 2737 */    MCD::OPC_CheckPredicate, 11, 79, 11, // Skip to: 5636
/* 2741 */    MCD::OPC_Decode, 142, 4, 71, // Opcode: MSUB_D32
/* 2745 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2757
/* 2749 */    MCD::OPC_CheckPredicate, 12, 67, 11, // Skip to: 5636
/* 2753 */    MCD::OPC_Decode, 186, 4, 70, // Opcode: NMADD_S
/* 2757 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 2769
/* 2761 */    MCD::OPC_CheckPredicate, 13, 55, 11, // Skip to: 5636
/* 2765 */    MCD::OPC_Decode, 184, 4, 71, // Opcode: NMADD_D32
/* 2769 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 2781
/* 2773 */    MCD::OPC_CheckPredicate, 12, 43, 11, // Skip to: 5636
/* 2777 */    MCD::OPC_Decode, 189, 4, 70, // Opcode: NMSUB_S
/* 2781 */    MCD::OPC_FilterValue, 57, 35, 11, // Skip to: 5636
/* 2785 */    MCD::OPC_CheckPredicate, 13, 31, 11, // Skip to: 5636
/* 2789 */    MCD::OPC_Decode, 187, 4, 71, // Opcode: NMSUB_D32
/* 2793 */    MCD::OPC_FilterValue, 28, 171, 0, // Skip to: 2968
/* 2797 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 2800 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 2833
/* 2804 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2807 */    MCD::OPC_FilterValue, 0, 9, 11, // Skip to: 5636
/* 2811 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2825
/* 2815 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2825
/* 2821 */    MCD::OPC_Decode, 216, 3, 34, // Opcode: MADD
/* 2825 */    MCD::OPC_CheckPredicate, 5, 247, 10, // Skip to: 5636
/* 2829 */    MCD::OPC_Decode, 221, 3, 72, // Opcode: MADD_DSP
/* 2833 */    MCD::OPC_FilterValue, 1, 29, 0, // Skip to: 2866
/* 2837 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2840 */    MCD::OPC_FilterValue, 0, 232, 10, // Skip to: 5636
/* 2844 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2858
/* 2848 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2858
/* 2854 */    MCD::OPC_Decode, 217, 3, 34, // Opcode: MADDU
/* 2858 */    MCD::OPC_CheckPredicate, 5, 214, 10, // Skip to: 5636
/* 2862 */    MCD::OPC_Decode, 218, 3, 72, // Opcode: MADDU_DSP
/* 2866 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2878
/* 2870 */    MCD::OPC_CheckPredicate, 1, 202, 10, // Skip to: 5636
/* 2874 */    MCD::OPC_Decode, 156, 4, 11, // Opcode: MUL
/* 2878 */    MCD::OPC_FilterValue, 4, 29, 0, // Skip to: 2911
/* 2882 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2885 */    MCD::OPC_FilterValue, 0, 187, 10, // Skip to: 5636
/* 2889 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2903
/* 2893 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2903
/* 2899 */    MCD::OPC_Decode, 139, 4, 34, // Opcode: MSUB
/* 2903 */    MCD::OPC_CheckPredicate, 5, 169, 10, // Skip to: 5636
/* 2907 */    MCD::OPC_Decode, 144, 4, 72, // Opcode: MSUB_DSP
/* 2911 */    MCD::OPC_FilterValue, 5, 29, 0, // Skip to: 2944
/* 2915 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2918 */    MCD::OPC_FilterValue, 0, 154, 10, // Skip to: 5636
/* 2922 */    MCD::OPC_CheckPredicate, 1, 10, 0, // Skip to: 2936
/* 2926 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2936
/* 2932 */    MCD::OPC_Decode, 140, 4, 34, // Opcode: MSUBU
/* 2936 */    MCD::OPC_CheckPredicate, 5, 136, 10, // Skip to: 5636
/* 2940 */    MCD::OPC_Decode, 141, 4, 72, // Opcode: MSUBU_DSP
/* 2944 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2956
/* 2948 */    MCD::OPC_CheckPredicate, 14, 124, 10, // Skip to: 5636
/* 2952 */    MCD::OPC_Decode, 176, 1, 73, // Opcode: CLZ
/* 2956 */    MCD::OPC_FilterValue, 33, 116, 10, // Skip to: 5636
/* 2960 */    MCD::OPC_CheckPredicate, 14, 112, 10, // Skip to: 5636
/* 2964 */    MCD::OPC_Decode, 175, 1, 73, // Opcode: CLO
/* 2968 */    MCD::OPC_FilterValue, 30, 147, 0, // Skip to: 3119
/* 2972 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 2975 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 2993
/* 2979 */    MCD::OPC_CheckPredicate, 15, 93, 10, // Skip to: 5636
/* 2983 */    MCD::OPC_CheckField, 0, 6, 7, 87, 10, // Skip to: 5636
/* 2989 */    MCD::OPC_Decode, 144, 3, 2, // Opcode: LD_B
/* 2993 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 3011
/* 2997 */    MCD::OPC_CheckPredicate, 15, 75, 10, // Skip to: 5636
/* 3001 */    MCD::OPC_CheckField, 0, 6, 7, 69, 10, // Skip to: 5636
/* 3007 */    MCD::OPC_Decode, 146, 3, 2, // Opcode: LD_H
/* 3011 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 3029
/* 3015 */    MCD::OPC_CheckPredicate, 15, 57, 10, // Skip to: 5636
/* 3019 */    MCD::OPC_CheckField, 0, 6, 7, 51, 10, // Skip to: 5636
/* 3025 */    MCD::OPC_Decode, 148, 3, 2, // Opcode: LD_W
/* 3029 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 3047
/* 3033 */    MCD::OPC_CheckPredicate, 15, 39, 10, // Skip to: 5636
/* 3037 */    MCD::OPC_CheckField, 0, 6, 7, 33, 10, // Skip to: 5636
/* 3043 */    MCD::OPC_Decode, 145, 3, 2, // Opcode: LD_D
/* 3047 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 3065
/* 3051 */    MCD::OPC_CheckPredicate, 15, 21, 10, // Skip to: 5636
/* 3055 */    MCD::OPC_CheckField, 0, 6, 7, 15, 10, // Skip to: 5636
/* 3061 */    MCD::OPC_Decode, 236, 5, 2, // Opcode: ST_B
/* 3065 */    MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 3083
/* 3069 */    MCD::OPC_CheckPredicate, 15, 3, 10, // Skip to: 5636
/* 3073 */    MCD::OPC_CheckField, 0, 6, 7, 253, 9, // Skip to: 5636
/* 3079 */    MCD::OPC_Decode, 238, 5, 2, // Opcode: ST_H
/* 3083 */    MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 3101
/* 3087 */    MCD::OPC_CheckPredicate, 15, 241, 9, // Skip to: 5636
/* 3091 */    MCD::OPC_CheckField, 0, 6, 7, 235, 9, // Skip to: 5636
/* 3097 */    MCD::OPC_Decode, 239, 5, 2, // Opcode: ST_W
/* 3101 */    MCD::OPC_FilterValue, 31, 227, 9, // Skip to: 5636
/* 3105 */    MCD::OPC_CheckPredicate, 15, 223, 9, // Skip to: 5636
/* 3109 */    MCD::OPC_CheckField, 0, 6, 7, 217, 9, // Skip to: 5636
/* 3115 */    MCD::OPC_Decode, 237, 5, 2, // Opcode: ST_D
/* 3119 */    MCD::OPC_FilterValue, 31, 249, 8, // Skip to: 5420
/* 3123 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3126 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3138
/* 3130 */    MCD::OPC_CheckPredicate, 4, 198, 9, // Skip to: 5636
/* 3134 */    MCD::OPC_Decode, 187, 2, 74, // Opcode: EXT
/* 3138 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3150
/* 3142 */    MCD::OPC_CheckPredicate, 4, 186, 9, // Skip to: 5636
/* 3146 */    MCD::OPC_Decode, 233, 2, 75, // Opcode: INS
/* 3150 */    MCD::OPC_FilterValue, 10, 39, 0, // Skip to: 3193
/* 3154 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3157 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3169
/* 3161 */    MCD::OPC_CheckPredicate, 5, 167, 9, // Skip to: 5636
/* 3165 */    MCD::OPC_Decode, 196, 3, 11, // Opcode: LWX
/* 3169 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3181
/* 3173 */    MCD::OPC_CheckPredicate, 5, 155, 9, // Skip to: 5636
/* 3177 */    MCD::OPC_Decode, 154, 3, 11, // Opcode: LHX
/* 3181 */    MCD::OPC_FilterValue, 6, 147, 9, // Skip to: 5636
/* 3185 */    MCD::OPC_CheckPredicate, 5, 143, 9, // Skip to: 5636
/* 3189 */    MCD::OPC_Decode, 251, 2, 11, // Opcode: LBUX
/* 3193 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 3211
/* 3197 */    MCD::OPC_CheckPredicate, 5, 131, 9, // Skip to: 5636
/* 3201 */    MCD::OPC_CheckField, 6, 10, 0, 125, 9, // Skip to: 5636
/* 3207 */    MCD::OPC_Decode, 234, 2, 76, // Opcode: INSV
/* 3211 */    MCD::OPC_FilterValue, 16, 32, 1, // Skip to: 3503
/* 3215 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3218 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 3229
/* 3222 */    MCD::OPC_CheckPredicate, 5, 106, 9, // Skip to: 5636
/* 3226 */    MCD::OPC_Decode, 32, 77, // Opcode: ADDU_QB
/* 3229 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3241
/* 3233 */    MCD::OPC_CheckPredicate, 5, 95, 9, // Skip to: 5636
/* 3237 */    MCD::OPC_Decode, 251, 5, 77, // Opcode: SUBU_QB
/* 3241 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 3252
/* 3245 */    MCD::OPC_CheckPredicate, 5, 83, 9, // Skip to: 5636
/* 3249 */    MCD::OPC_Decode, 34, 77, // Opcode: ADDU_S_QB
/* 3252 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3264
/* 3256 */    MCD::OPC_CheckPredicate, 5, 72, 9, // Skip to: 5636
/* 3260 */    MCD::OPC_Decode, 253, 5, 77, // Opcode: SUBU_S_QB
/* 3264 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3276
/* 3268 */    MCD::OPC_CheckPredicate, 5, 60, 9, // Skip to: 5636
/* 3272 */    MCD::OPC_Decode, 159, 4, 77, // Opcode: MULEU_S_PH_QBL
/* 3276 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3288
/* 3280 */    MCD::OPC_CheckPredicate, 5, 48, 9, // Skip to: 5636
/* 3284 */    MCD::OPC_Decode, 160, 4, 77, // Opcode: MULEU_S_PH_QBR
/* 3288 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 3299
/* 3292 */    MCD::OPC_CheckPredicate, 16, 36, 9, // Skip to: 5636
/* 3296 */    MCD::OPC_Decode, 31, 77, // Opcode: ADDU_PH
/* 3299 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3311
/* 3303 */    MCD::OPC_CheckPredicate, 16, 25, 9, // Skip to: 5636
/* 3307 */    MCD::OPC_Decode, 250, 5, 77, // Opcode: SUBU_PH
/* 3311 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 3322
/* 3315 */    MCD::OPC_CheckPredicate, 5, 13, 9, // Skip to: 5636
/* 3319 */    MCD::OPC_Decode, 25, 77, // Opcode: ADDQ_PH
/* 3322 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3334
/* 3326 */    MCD::OPC_CheckPredicate, 5, 2, 9, // Skip to: 5636
/* 3330 */    MCD::OPC_Decode, 245, 5, 77, // Opcode: SUBQ_PH
/* 3334 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 3345
/* 3338 */    MCD::OPC_CheckPredicate, 16, 246, 8, // Skip to: 5636
/* 3342 */    MCD::OPC_Decode, 33, 77, // Opcode: ADDU_S_PH
/* 3345 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3357
/* 3349 */    MCD::OPC_CheckPredicate, 16, 235, 8, // Skip to: 5636
/* 3353 */    MCD::OPC_Decode, 252, 5, 77, // Opcode: SUBU_S_PH
/* 3357 */    MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 3368
/* 3361 */    MCD::OPC_CheckPredicate, 5, 223, 8, // Skip to: 5636
/* 3365 */    MCD::OPC_Decode, 26, 77, // Opcode: ADDQ_S_PH
/* 3368 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3380
/* 3372 */    MCD::OPC_CheckPredicate, 5, 212, 8, // Skip to: 5636
/* 3376 */    MCD::OPC_Decode, 246, 5, 77, // Opcode: SUBQ_S_PH
/* 3380 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 3391
/* 3384 */    MCD::OPC_CheckPredicate, 5, 200, 8, // Skip to: 5636
/* 3388 */    MCD::OPC_Decode, 28, 11, // Opcode: ADDSC
/* 3391 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3402
/* 3395 */    MCD::OPC_CheckPredicate, 5, 189, 8, // Skip to: 5636
/* 3399 */    MCD::OPC_Decode, 35, 11, // Opcode: ADDWC
/* 3402 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 3414
/* 3406 */    MCD::OPC_CheckPredicate, 5, 178, 8, // Skip to: 5636
/* 3410 */    MCD::OPC_Decode, 238, 3, 11, // Opcode: MODSUB
/* 3414 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 3432
/* 3418 */    MCD::OPC_CheckPredicate, 5, 166, 8, // Skip to: 5636
/* 3422 */    MCD::OPC_CheckField, 16, 5, 0, 160, 8, // Skip to: 5636
/* 3428 */    MCD::OPC_Decode, 251, 4, 78, // Opcode: RADDU_W_QB
/* 3432 */    MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 3443
/* 3436 */    MCD::OPC_CheckPredicate, 5, 148, 8, // Skip to: 5636
/* 3440 */    MCD::OPC_Decode, 27, 11, // Opcode: ADDQ_S_W
/* 3443 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 3455
/* 3447 */    MCD::OPC_CheckPredicate, 5, 137, 8, // Skip to: 5636
/* 3451 */    MCD::OPC_Decode, 247, 5, 11, // Opcode: SUBQ_S_W
/* 3455 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3467
/* 3459 */    MCD::OPC_CheckPredicate, 5, 125, 8, // Skip to: 5636
/* 3463 */    MCD::OPC_Decode, 157, 4, 79, // Opcode: MULEQ_S_W_PHL
/* 3467 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3479
/* 3471 */    MCD::OPC_CheckPredicate, 5, 113, 8, // Skip to: 5636
/* 3475 */    MCD::OPC_Decode, 158, 4, 79, // Opcode: MULEQ_S_W_PHR
/* 3479 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3491
/* 3483 */    MCD::OPC_CheckPredicate, 16, 101, 8, // Skip to: 5636
/* 3487 */    MCD::OPC_Decode, 163, 4, 77, // Opcode: MULQ_S_PH
/* 3491 */    MCD::OPC_FilterValue, 31, 93, 8, // Skip to: 5636
/* 3495 */    MCD::OPC_CheckPredicate, 5, 89, 8, // Skip to: 5636
/* 3499 */    MCD::OPC_Decode, 161, 4, 77, // Opcode: MULQ_RS_PH
/* 3503 */    MCD::OPC_FilterValue, 17, 47, 1, // Skip to: 3810
/* 3507 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3510 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3528
/* 3514 */    MCD::OPC_CheckPredicate, 5, 70, 8, // Skip to: 5636
/* 3518 */    MCD::OPC_CheckField, 11, 5, 0, 64, 8, // Skip to: 5636
/* 3524 */    MCD::OPC_Decode, 183, 1, 80, // Opcode: CMPU_EQ_QB
/* 3528 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 3546
/* 3532 */    MCD::OPC_CheckPredicate, 5, 52, 8, // Skip to: 5636
/* 3536 */    MCD::OPC_CheckField, 11, 5, 0, 46, 8, // Skip to: 5636
/* 3542 */    MCD::OPC_Decode, 185, 1, 80, // Opcode: CMPU_LT_QB
/* 3546 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3564
/* 3550 */    MCD::OPC_CheckPredicate, 5, 34, 8, // Skip to: 5636
/* 3554 */    MCD::OPC_CheckField, 11, 5, 0, 28, 8, // Skip to: 5636
/* 3560 */    MCD::OPC_Decode, 184, 1, 80, // Opcode: CMPU_LE_QB
/* 3564 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3576
/* 3568 */    MCD::OPC_CheckPredicate, 5, 16, 8, // Skip to: 5636
/* 3572 */    MCD::OPC_Decode, 205, 4, 77, // Opcode: PICK_QB
/* 3576 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3588
/* 3580 */    MCD::OPC_CheckPredicate, 5, 4, 8, // Skip to: 5636
/* 3584 */    MCD::OPC_Decode, 180, 1, 79, // Opcode: CMPGU_EQ_QB
/* 3588 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3600
/* 3592 */    MCD::OPC_CheckPredicate, 5, 248, 7, // Skip to: 5636
/* 3596 */    MCD::OPC_Decode, 182, 1, 79, // Opcode: CMPGU_LT_QB
/* 3600 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3612
/* 3604 */    MCD::OPC_CheckPredicate, 5, 236, 7, // Skip to: 5636
/* 3608 */    MCD::OPC_Decode, 181, 1, 79, // Opcode: CMPGU_LE_QB
/* 3612 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 3630
/* 3616 */    MCD::OPC_CheckPredicate, 5, 224, 7, // Skip to: 5636
/* 3620 */    MCD::OPC_CheckField, 11, 5, 0, 218, 7, // Skip to: 5636
/* 3626 */    MCD::OPC_Decode, 186, 1, 80, // Opcode: CMP_EQ_PH
/* 3630 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 3648
/* 3634 */    MCD::OPC_CheckPredicate, 5, 206, 7, // Skip to: 5636
/* 3638 */    MCD::OPC_CheckField, 11, 5, 0, 200, 7, // Skip to: 5636
/* 3644 */    MCD::OPC_Decode, 188, 1, 80, // Opcode: CMP_LT_PH
/* 3648 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 3666
/* 3652 */    MCD::OPC_CheckPredicate, 5, 188, 7, // Skip to: 5636
/* 3656 */    MCD::OPC_CheckField, 11, 5, 0, 182, 7, // Skip to: 5636
/* 3662 */    MCD::OPC_Decode, 187, 1, 80, // Opcode: CMP_LE_PH
/* 3666 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3678
/* 3670 */    MCD::OPC_CheckPredicate, 5, 170, 7, // Skip to: 5636
/* 3674 */    MCD::OPC_Decode, 204, 4, 77, // Opcode: PICK_PH
/* 3678 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3690
/* 3682 */    MCD::OPC_CheckPredicate, 5, 158, 7, // Skip to: 5636
/* 3686 */    MCD::OPC_Decode, 218, 4, 77, // Opcode: PRECRQ_QB_PH
/* 3690 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3702
/* 3694 */    MCD::OPC_CheckPredicate, 16, 146, 7, // Skip to: 5636
/* 3698 */    MCD::OPC_Decode, 220, 4, 77, // Opcode: PRECR_QB_PH
/* 3702 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3714
/* 3706 */    MCD::OPC_CheckPredicate, 5, 134, 7, // Skip to: 5636
/* 3710 */    MCD::OPC_Decode, 203, 4, 77, // Opcode: PACKRL_PH
/* 3714 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3726
/* 3718 */    MCD::OPC_CheckPredicate, 5, 122, 7, // Skip to: 5636
/* 3722 */    MCD::OPC_Decode, 216, 4, 77, // Opcode: PRECRQU_S_QB_PH
/* 3726 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3738
/* 3730 */    MCD::OPC_CheckPredicate, 5, 110, 7, // Skip to: 5636
/* 3734 */    MCD::OPC_Decode, 217, 4, 81, // Opcode: PRECRQ_PH_W
/* 3738 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 3750
/* 3742 */    MCD::OPC_CheckPredicate, 5, 98, 7, // Skip to: 5636
/* 3746 */    MCD::OPC_Decode, 219, 4, 81, // Opcode: PRECRQ_RS_PH_W
/* 3750 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3762
/* 3754 */    MCD::OPC_CheckPredicate, 16, 86, 7, // Skip to: 5636
/* 3758 */    MCD::OPC_Decode, 177, 1, 79, // Opcode: CMPGDU_EQ_QB
/* 3762 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3774
/* 3766 */    MCD::OPC_CheckPredicate, 16, 74, 7, // Skip to: 5636
/* 3770 */    MCD::OPC_Decode, 179, 1, 79, // Opcode: CMPGDU_LT_QB
/* 3774 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3786
/* 3778 */    MCD::OPC_CheckPredicate, 16, 62, 7, // Skip to: 5636
/* 3782 */    MCD::OPC_Decode, 178, 1, 79, // Opcode: CMPGDU_LE_QB
/* 3786 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 3798
/* 3790 */    MCD::OPC_CheckPredicate, 16, 50, 7, // Skip to: 5636
/* 3794 */    MCD::OPC_Decode, 221, 4, 82, // Opcode: PRECR_SRA_PH_W
/* 3798 */    MCD::OPC_FilterValue, 31, 42, 7, // Skip to: 5636
/* 3802 */    MCD::OPC_CheckPredicate, 16, 38, 7, // Skip to: 5636
/* 3806 */    MCD::OPC_Decode, 222, 4, 82, // Opcode: PRECR_SRA_R_PH_W
/* 3810 */    MCD::OPC_FilterValue, 18, 56, 1, // Skip to: 4126
/* 3814 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3817 */    MCD::OPC_FilterValue, 1, 13, 0, // Skip to: 3834
/* 3821 */    MCD::OPC_CheckPredicate, 16, 19, 7, // Skip to: 5636
/* 3825 */    MCD::OPC_CheckField, 21, 5, 0, 13, 7, // Skip to: 5636
/* 3831 */    MCD::OPC_Decode, 18, 83, // Opcode: ABSQ_S_QB
/* 3834 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3846
/* 3838 */    MCD::OPC_CheckPredicate, 5, 2, 7, // Skip to: 5636
/* 3842 */    MCD::OPC_Decode, 130, 5, 84, // Opcode: REPL_QB
/* 3846 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 3864
/* 3850 */    MCD::OPC_CheckPredicate, 5, 246, 6, // Skip to: 5636
/* 3854 */    MCD::OPC_CheckField, 21, 5, 0, 240, 6, // Skip to: 5636
/* 3860 */    MCD::OPC_Decode, 128, 5, 85, // Opcode: REPLV_QB
/* 3864 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 3882
/* 3868 */    MCD::OPC_CheckPredicate, 5, 228, 6, // Skip to: 5636
/* 3872 */    MCD::OPC_CheckField, 21, 5, 0, 222, 6, // Skip to: 5636
/* 3878 */    MCD::OPC_Decode, 206, 4, 83, // Opcode: PRECEQU_PH_QBL
/* 3882 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 3900
/* 3886 */    MCD::OPC_CheckPredicate, 5, 210, 6, // Skip to: 5636
/* 3890 */    MCD::OPC_CheckField, 21, 5, 0, 204, 6, // Skip to: 5636
/* 3896 */    MCD::OPC_Decode, 208, 4, 83, // Opcode: PRECEQU_PH_QBR
/* 3900 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 3918
/* 3904 */    MCD::OPC_CheckPredicate, 5, 192, 6, // Skip to: 5636
/* 3908 */    MCD::OPC_CheckField, 21, 5, 0, 186, 6, // Skip to: 5636
/* 3914 */    MCD::OPC_Decode, 207, 4, 83, // Opcode: PRECEQU_PH_QBLA
/* 3918 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 3936
/* 3922 */    MCD::OPC_CheckPredicate, 5, 174, 6, // Skip to: 5636
/* 3926 */    MCD::OPC_CheckField, 21, 5, 0, 168, 6, // Skip to: 5636
/* 3932 */    MCD::OPC_Decode, 209, 4, 83, // Opcode: PRECEQU_PH_QBRA
/* 3936 */    MCD::OPC_FilterValue, 9, 13, 0, // Skip to: 3953
/* 3940 */    MCD::OPC_CheckPredicate, 5, 156, 6, // Skip to: 5636
/* 3944 */    MCD::OPC_CheckField, 21, 5, 0, 150, 6, // Skip to: 5636
/* 3950 */    MCD::OPC_Decode, 17, 83, // Opcode: ABSQ_S_PH
/* 3953 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3965
/* 3957 */    MCD::OPC_CheckPredicate, 5, 139, 6, // Skip to: 5636
/* 3961 */    MCD::OPC_Decode, 129, 5, 84, // Opcode: REPL_PH
/* 3965 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 3983
/* 3969 */    MCD::OPC_CheckPredicate, 5, 127, 6, // Skip to: 5636
/* 3973 */    MCD::OPC_CheckField, 21, 5, 0, 121, 6, // Skip to: 5636
/* 3979 */    MCD::OPC_Decode, 255, 4, 85, // Opcode: REPLV_PH
/* 3983 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 4001
/* 3987 */    MCD::OPC_CheckPredicate, 5, 109, 6, // Skip to: 5636
/* 3991 */    MCD::OPC_CheckField, 21, 5, 0, 103, 6, // Skip to: 5636
/* 3997 */    MCD::OPC_Decode, 210, 4, 86, // Opcode: PRECEQ_W_PHL
/* 4001 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 4019
/* 4005 */    MCD::OPC_CheckPredicate, 5, 91, 6, // Skip to: 5636
/* 4009 */    MCD::OPC_CheckField, 21, 5, 0, 85, 6, // Skip to: 5636
/* 4015 */    MCD::OPC_Decode, 211, 4, 86, // Opcode: PRECEQ_W_PHR
/* 4019 */    MCD::OPC_FilterValue, 17, 13, 0, // Skip to: 4036
/* 4023 */    MCD::OPC_CheckPredicate, 5, 73, 6, // Skip to: 5636
/* 4027 */    MCD::OPC_CheckField, 21, 5, 0, 67, 6, // Skip to: 5636
/* 4033 */    MCD::OPC_Decode, 19, 87, // Opcode: ABSQ_S_W
/* 4036 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 4054
/* 4040 */    MCD::OPC_CheckPredicate, 5, 56, 6, // Skip to: 5636
/* 4044 */    MCD::OPC_CheckField, 21, 5, 0, 50, 6, // Skip to: 5636
/* 4050 */    MCD::OPC_Decode, 137, 1, 87, // Opcode: BITREV
/* 4054 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 4072
/* 4058 */    MCD::OPC_CheckPredicate, 5, 38, 6, // Skip to: 5636
/* 4062 */    MCD::OPC_CheckField, 21, 5, 0, 32, 6, // Skip to: 5636
/* 4068 */    MCD::OPC_Decode, 212, 4, 83, // Opcode: PRECEU_PH_QBL
/* 4072 */    MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 4090
/* 4076 */    MCD::OPC_CheckPredicate, 5, 20, 6, // Skip to: 5636
/* 4080 */    MCD::OPC_CheckField, 21, 5, 0, 14, 6, // Skip to: 5636
/* 4086 */    MCD::OPC_Decode, 214, 4, 83, // Opcode: PRECEU_PH_QBR
/* 4090 */    MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 4108
/* 4094 */    MCD::OPC_CheckPredicate, 5, 2, 6, // Skip to: 5636
/* 4098 */    MCD::OPC_CheckField, 21, 5, 0, 252, 5, // Skip to: 5636
/* 4104 */    MCD::OPC_Decode, 213, 4, 83, // Opcode: PRECEU_PH_QBLA
/* 4108 */    MCD::OPC_FilterValue, 31, 244, 5, // Skip to: 5636
/* 4112 */    MCD::OPC_CheckPredicate, 5, 240, 5, // Skip to: 5636
/* 4116 */    MCD::OPC_CheckField, 21, 5, 0, 234, 5, // Skip to: 5636
/* 4122 */    MCD::OPC_Decode, 215, 4, 83, // Opcode: PRECEU_PH_QBRA
/* 4126 */    MCD::OPC_FilterValue, 19, 11, 1, // Skip to: 4397
/* 4130 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4133 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4145
/* 4137 */    MCD::OPC_CheckPredicate, 5, 215, 5, // Skip to: 5636
/* 4141 */    MCD::OPC_Decode, 182, 5, 88, // Opcode: SHLL_QB
/* 4145 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4157
/* 4149 */    MCD::OPC_CheckPredicate, 5, 203, 5, // Skip to: 5636
/* 4153 */    MCD::OPC_Decode, 198, 5, 88, // Opcode: SHRL_QB
/* 4157 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4169
/* 4161 */    MCD::OPC_CheckPredicate, 5, 191, 5, // Skip to: 5636
/* 4165 */    MCD::OPC_Decode, 178, 5, 89, // Opcode: SHLLV_QB
/* 4169 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4181
/* 4173 */    MCD::OPC_CheckPredicate, 5, 179, 5, // Skip to: 5636
/* 4177 */    MCD::OPC_Decode, 196, 5, 89, // Opcode: SHRLV_QB
/* 4181 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4193
/* 4185 */    MCD::OPC_CheckPredicate, 16, 167, 5, // Skip to: 5636
/* 4189 */    MCD::OPC_Decode, 191, 5, 88, // Opcode: SHRA_QB
/* 4193 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4205
/* 4197 */    MCD::OPC_CheckPredicate, 16, 155, 5, // Skip to: 5636
/* 4201 */    MCD::OPC_Decode, 193, 5, 88, // Opcode: SHRA_R_QB
/* 4205 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4217
/* 4209 */    MCD::OPC_CheckPredicate, 16, 143, 5, // Skip to: 5636
/* 4213 */    MCD::OPC_Decode, 186, 5, 89, // Opcode: SHRAV_QB
/* 4217 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 4229
/* 4221 */    MCD::OPC_CheckPredicate, 16, 131, 5, // Skip to: 5636
/* 4225 */    MCD::OPC_Decode, 188, 5, 89, // Opcode: SHRAV_R_QB
/* 4229 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 4241
/* 4233 */    MCD::OPC_CheckPredicate, 5, 119, 5, // Skip to: 5636
/* 4237 */    MCD::OPC_Decode, 181, 5, 88, // Opcode: SHLL_PH
/* 4241 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4253
/* 4245 */    MCD::OPC_CheckPredicate, 5, 107, 5, // Skip to: 5636
/* 4249 */    MCD::OPC_Decode, 190, 5, 88, // Opcode: SHRA_PH
/* 4253 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 4265
/* 4257 */    MCD::OPC_CheckPredicate, 5, 95, 5, // Skip to: 5636
/* 4261 */    MCD::OPC_Decode, 177, 5, 89, // Opcode: SHLLV_PH
/* 4265 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4277
/* 4269 */    MCD::OPC_CheckPredicate, 5, 83, 5, // Skip to: 5636
/* 4273 */    MCD::OPC_Decode, 185, 5, 89, // Opcode: SHRAV_PH
/* 4277 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4289
/* 4281 */    MCD::OPC_CheckPredicate, 5, 71, 5, // Skip to: 5636
/* 4285 */    MCD::OPC_Decode, 183, 5, 88, // Opcode: SHLL_S_PH
/* 4289 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 4301
/* 4293 */    MCD::OPC_CheckPredicate, 5, 59, 5, // Skip to: 5636
/* 4297 */    MCD::OPC_Decode, 192, 5, 88, // Opcode: SHRA_R_PH
/* 4301 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4313
/* 4305 */    MCD::OPC_CheckPredicate, 5, 47, 5, // Skip to: 5636
/* 4309 */    MCD::OPC_Decode, 179, 5, 89, // Opcode: SHLLV_S_PH
/* 4313 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 4325
/* 4317 */    MCD::OPC_CheckPredicate, 5, 35, 5, // Skip to: 5636
/* 4321 */    MCD::OPC_Decode, 187, 5, 89, // Opcode: SHRAV_R_PH
/* 4325 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 4337
/* 4329 */    MCD::OPC_CheckPredicate, 5, 23, 5, // Skip to: 5636
/* 4333 */    MCD::OPC_Decode, 184, 5, 90, // Opcode: SHLL_S_W
/* 4337 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 4349
/* 4341 */    MCD::OPC_CheckPredicate, 5, 11, 5, // Skip to: 5636
/* 4345 */    MCD::OPC_Decode, 194, 5, 90, // Opcode: SHRA_R_W
/* 4349 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4361
/* 4353 */    MCD::OPC_CheckPredicate, 5, 255, 4, // Skip to: 5636
/* 4357 */    MCD::OPC_Decode, 180, 5, 12, // Opcode: SHLLV_S_W
/* 4361 */    MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 4373
/* 4365 */    MCD::OPC_CheckPredicate, 5, 243, 4, // Skip to: 5636
/* 4369 */    MCD::OPC_Decode, 189, 5, 12, // Opcode: SHRAV_R_W
/* 4373 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 4385
/* 4377 */    MCD::OPC_CheckPredicate, 16, 231, 4, // Skip to: 5636
/* 4381 */    MCD::OPC_Decode, 197, 5, 88, // Opcode: SHRL_PH
/* 4385 */    MCD::OPC_FilterValue, 27, 223, 4, // Skip to: 5636
/* 4389 */    MCD::OPC_CheckPredicate, 16, 219, 4, // Skip to: 5636
/* 4393 */    MCD::OPC_Decode, 195, 5, 89, // Opcode: SHRLV_PH
/* 4397 */    MCD::OPC_FilterValue, 24, 189, 0, // Skip to: 4590
/* 4401 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4404 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 4415
/* 4408 */    MCD::OPC_CheckPredicate, 16, 200, 4, // Skip to: 5636
/* 4412 */    MCD::OPC_Decode, 29, 77, // Opcode: ADDUH_QB
/* 4415 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4427
/* 4419 */    MCD::OPC_CheckPredicate, 16, 189, 4, // Skip to: 5636
/* 4423 */    MCD::OPC_Decode, 248, 5, 77, // Opcode: SUBUH_QB
/* 4427 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 4438
/* 4431 */    MCD::OPC_CheckPredicate, 16, 177, 4, // Skip to: 5636
/* 4435 */    MCD::OPC_Decode, 30, 77, // Opcode: ADDUH_R_QB
/* 4438 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4450
/* 4442 */    MCD::OPC_CheckPredicate, 16, 166, 4, // Skip to: 5636
/* 4446 */    MCD::OPC_Decode, 249, 5, 77, // Opcode: SUBUH_R_QB
/* 4450 */    MCD::OPC_FilterValue, 8, 7, 0, // Skip to: 4461
/* 4454 */    MCD::OPC_CheckPredicate, 16, 154, 4, // Skip to: 5636
/* 4458 */    MCD::OPC_Decode, 21, 77, // Opcode: ADDQH_PH
/* 4461 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4473
/* 4465 */    MCD::OPC_CheckPredicate, 16, 143, 4, // Skip to: 5636
/* 4469 */    MCD::OPC_Decode, 241, 5, 77, // Opcode: SUBQH_PH
/* 4473 */    MCD::OPC_FilterValue, 10, 7, 0, // Skip to: 4484
/* 4477 */    MCD::OPC_CheckPredicate, 16, 131, 4, // Skip to: 5636
/* 4481 */    MCD::OPC_Decode, 22, 77, // Opcode: ADDQH_R_PH
/* 4484 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4496
/* 4488 */    MCD::OPC_CheckPredicate, 16, 120, 4, // Skip to: 5636
/* 4492 */    MCD::OPC_Decode, 242, 5, 77, // Opcode: SUBQH_R_PH
/* 4496 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 4508
/* 4500 */    MCD::OPC_CheckPredicate, 16, 108, 4, // Skip to: 5636
/* 4504 */    MCD::OPC_Decode, 174, 4, 77, // Opcode: MUL_PH
/* 4508 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 4520
/* 4512 */    MCD::OPC_CheckPredicate, 16, 96, 4, // Skip to: 5636
/* 4516 */    MCD::OPC_Decode, 175, 4, 77, // Opcode: MUL_S_PH
/* 4520 */    MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 4531
/* 4524 */    MCD::OPC_CheckPredicate, 16, 84, 4, // Skip to: 5636
/* 4528 */    MCD::OPC_Decode, 24, 11, // Opcode: ADDQH_W
/* 4531 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 4543
/* 4535 */    MCD::OPC_CheckPredicate, 16, 73, 4, // Skip to: 5636
/* 4539 */    MCD::OPC_Decode, 244, 5, 11, // Opcode: SUBQH_W
/* 4543 */    MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 4554
/* 4547 */    MCD::OPC_CheckPredicate, 16, 61, 4, // Skip to: 5636
/* 4551 */    MCD::OPC_Decode, 23, 11, // Opcode: ADDQH_R_W
/* 4554 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 4566
/* 4558 */    MCD::OPC_CheckPredicate, 16, 50, 4, // Skip to: 5636
/* 4562 */    MCD::OPC_Decode, 243, 5, 11, // Opcode: SUBQH_R_W
/* 4566 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 4578
/* 4570 */    MCD::OPC_CheckPredicate, 16, 38, 4, // Skip to: 5636
/* 4574 */    MCD::OPC_Decode, 164, 4, 11, // Opcode: MULQ_S_W
/* 4578 */    MCD::OPC_FilterValue, 23, 30, 4, // Skip to: 5636
/* 4582 */    MCD::OPC_CheckPredicate, 16, 26, 4, // Skip to: 5636
/* 4586 */    MCD::OPC_Decode, 162, 4, 11, // Opcode: MULQ_RS_W
/* 4590 */    MCD::OPC_FilterValue, 32, 57, 0, // Skip to: 4651
/* 4594 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4597 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4615
/* 4601 */    MCD::OPC_CheckPredicate, 17, 7, 4, // Skip to: 5636
/* 4605 */    MCD::OPC_CheckField, 21, 5, 0, 1, 4, // Skip to: 5636
/* 4611 */    MCD::OPC_Decode, 203, 6, 87, // Opcode: WSBH
/* 4615 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 4633
/* 4619 */    MCD::OPC_CheckPredicate, 18, 245, 3, // Skip to: 5636
/* 4623 */    MCD::OPC_CheckField, 21, 5, 0, 239, 3, // Skip to: 5636
/* 4629 */    MCD::OPC_Decode, 168, 5, 87, // Opcode: SEB
/* 4633 */    MCD::OPC_FilterValue, 24, 231, 3, // Skip to: 5636
/* 4637 */    MCD::OPC_CheckPredicate, 18, 227, 3, // Skip to: 5636
/* 4641 */    MCD::OPC_CheckField, 21, 5, 0, 221, 3, // Skip to: 5636
/* 4647 */    MCD::OPC_Decode, 170, 5, 87, // Opcode: SEH
/* 4651 */    MCD::OPC_FilterValue, 48, 143, 1, // Skip to: 5054
/* 4655 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4658 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 4676
/* 4662 */    MCD::OPC_CheckPredicate, 16, 202, 3, // Skip to: 5636
/* 4666 */    MCD::OPC_CheckField, 13, 3, 0, 196, 3, // Skip to: 5636
/* 4672 */    MCD::OPC_Decode, 157, 2, 72, // Opcode: DPA_W_PH
/* 4676 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 4694
/* 4680 */    MCD::OPC_CheckPredicate, 16, 184, 3, // Skip to: 5636
/* 4684 */    MCD::OPC_CheckField, 13, 3, 0, 178, 3, // Skip to: 5636
/* 4690 */    MCD::OPC_Decode, 165, 2, 72, // Opcode: DPS_W_PH
/* 4694 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4712
/* 4698 */    MCD::OPC_CheckPredicate, 16, 166, 3, // Skip to: 5636
/* 4702 */    MCD::OPC_CheckField, 13, 3, 0, 160, 3, // Skip to: 5636
/* 4708 */    MCD::OPC_Decode, 166, 4, 72, // Opcode: MULSA_W_PH
/* 4712 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 4730
/* 4716 */    MCD::OPC_CheckPredicate, 5, 148, 3, // Skip to: 5636
/* 4720 */    MCD::OPC_CheckField, 13, 3, 0, 142, 3, // Skip to: 5636
/* 4726 */    MCD::OPC_Decode, 154, 2, 72, // Opcode: DPAU_H_QBL
/* 4730 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 4748
/* 4734 */    MCD::OPC_CheckPredicate, 5, 130, 3, // Skip to: 5636
/* 4738 */    MCD::OPC_CheckField, 13, 3, 0, 124, 3, // Skip to: 5636
/* 4744 */    MCD::OPC_Decode, 153, 2, 72, // Opcode: DPAQ_S_W_PH
/* 4748 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 4766
/* 4752 */    MCD::OPC_CheckPredicate, 5, 112, 3, // Skip to: 5636
/* 4756 */    MCD::OPC_CheckField, 13, 3, 0, 106, 3, // Skip to: 5636
/* 4762 */    MCD::OPC_Decode, 161, 2, 72, // Opcode: DPSQ_S_W_PH
/* 4766 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 4784
/* 4770 */    MCD::OPC_CheckPredicate, 5, 94, 3, // Skip to: 5636
/* 4774 */    MCD::OPC_CheckField, 13, 3, 0, 88, 3, // Skip to: 5636
/* 4780 */    MCD::OPC_Decode, 165, 4, 72, // Opcode: MULSAQ_S_W_PH
/* 4784 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 4802
/* 4788 */    MCD::OPC_CheckPredicate, 5, 76, 3, // Skip to: 5636
/* 4792 */    MCD::OPC_CheckField, 13, 3, 0, 70, 3, // Skip to: 5636
/* 4798 */    MCD::OPC_Decode, 155, 2, 72, // Opcode: DPAU_H_QBR
/* 4802 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 4820
/* 4806 */    MCD::OPC_CheckPredicate, 16, 58, 3, // Skip to: 5636
/* 4810 */    MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 5636
/* 4816 */    MCD::OPC_Decode, 156, 2, 72, // Opcode: DPAX_W_PH
/* 4820 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 4838
/* 4824 */    MCD::OPC_CheckPredicate, 16, 40, 3, // Skip to: 5636
/* 4828 */    MCD::OPC_CheckField, 13, 3, 0, 34, 3, // Skip to: 5636
/* 4834 */    MCD::OPC_Decode, 164, 2, 72, // Opcode: DPSX_W_PH
/* 4838 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 4856
/* 4842 */    MCD::OPC_CheckPredicate, 5, 22, 3, // Skip to: 5636
/* 4846 */    MCD::OPC_CheckField, 13, 3, 0, 16, 3, // Skip to: 5636
/* 4852 */    MCD::OPC_Decode, 162, 2, 72, // Opcode: DPSU_H_QBL
/* 4856 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 4874
/* 4860 */    MCD::OPC_CheckPredicate, 5, 4, 3, // Skip to: 5636
/* 4864 */    MCD::OPC_CheckField, 13, 3, 0, 254, 2, // Skip to: 5636
/* 4870 */    MCD::OPC_Decode, 152, 2, 72, // Opcode: DPAQ_SA_L_W
/* 4874 */    MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 4892
/* 4878 */    MCD::OPC_CheckPredicate, 5, 242, 2, // Skip to: 5636
/* 4882 */    MCD::OPC_CheckField, 13, 3, 0, 236, 2, // Skip to: 5636
/* 4888 */    MCD::OPC_Decode, 160, 2, 72, // Opcode: DPSQ_SA_L_W
/* 4892 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 4910
/* 4896 */    MCD::OPC_CheckPredicate, 5, 224, 2, // Skip to: 5636
/* 4900 */    MCD::OPC_CheckField, 13, 3, 0, 218, 2, // Skip to: 5636
/* 4906 */    MCD::OPC_Decode, 163, 2, 72, // Opcode: DPSU_H_QBR
/* 4910 */    MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 4928
/* 4914 */    MCD::OPC_CheckPredicate, 5, 206, 2, // Skip to: 5636
/* 4918 */    MCD::OPC_CheckField, 13, 3, 0, 200, 2, // Skip to: 5636
/* 4924 */    MCD::OPC_Decode, 223, 3, 72, // Opcode: MAQ_SA_W_PHL
/* 4928 */    MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 4946
/* 4932 */    MCD::OPC_CheckPredicate, 5, 188, 2, // Skip to: 5636
/* 4936 */    MCD::OPC_CheckField, 13, 3, 0, 182, 2, // Skip to: 5636
/* 4942 */    MCD::OPC_Decode, 224, 3, 72, // Opcode: MAQ_SA_W_PHR
/* 4946 */    MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 4964
/* 4950 */    MCD::OPC_CheckPredicate, 5, 170, 2, // Skip to: 5636
/* 4954 */    MCD::OPC_CheckField, 13, 3, 0, 164, 2, // Skip to: 5636
/* 4960 */    MCD::OPC_Decode, 225, 3, 72, // Opcode: MAQ_S_W_PHL
/* 4964 */    MCD::OPC_FilterValue, 22, 14, 0, // Skip to: 4982
/* 4968 */    MCD::OPC_CheckPredicate, 5, 152, 2, // Skip to: 5636
/* 4972 */    MCD::OPC_CheckField, 13, 3, 0, 146, 2, // Skip to: 5636
/* 4978 */    MCD::OPC_Decode, 226, 3, 72, // Opcode: MAQ_S_W_PHR
/* 4982 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 5000
/* 4986 */    MCD::OPC_CheckPredicate, 16, 134, 2, // Skip to: 5636
/* 4990 */    MCD::OPC_CheckField, 13, 3, 0, 128, 2, // Skip to: 5636
/* 4996 */    MCD::OPC_Decode, 151, 2, 72, // Opcode: DPAQX_S_W_PH
/* 5000 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 5018
/* 5004 */    MCD::OPC_CheckPredicate, 16, 116, 2, // Skip to: 5636
/* 5008 */    MCD::OPC_CheckField, 13, 3, 0, 110, 2, // Skip to: 5636
/* 5014 */    MCD::OPC_Decode, 159, 2, 72, // Opcode: DPSQX_S_W_PH
/* 5018 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 5036
/* 5022 */    MCD::OPC_CheckPredicate, 16, 98, 2, // Skip to: 5636
/* 5026 */    MCD::OPC_CheckField, 13, 3, 0, 92, 2, // Skip to: 5636
/* 5032 */    MCD::OPC_Decode, 150, 2, 72, // Opcode: DPAQX_SA_W_PH
/* 5036 */    MCD::OPC_FilterValue, 27, 84, 2, // Skip to: 5636
/* 5040 */    MCD::OPC_CheckPredicate, 16, 80, 2, // Skip to: 5636
/* 5044 */    MCD::OPC_CheckField, 13, 3, 0, 74, 2, // Skip to: 5636
/* 5050 */    MCD::OPC_Decode, 158, 2, 72, // Opcode: DPSQX_SA_W_PH
/* 5054 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 5095
/* 5058 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5061 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 5072
/* 5065 */    MCD::OPC_CheckPredicate, 16, 55, 2, // Skip to: 5636
/* 5069 */    MCD::OPC_Decode, 51, 91, // Opcode: APPEND
/* 5072 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 5084
/* 5076 */    MCD::OPC_CheckPredicate, 16, 44, 2, // Skip to: 5636
/* 5080 */    MCD::OPC_Decode, 223, 4, 91, // Opcode: PREPEND
/* 5084 */    MCD::OPC_FilterValue, 16, 36, 2, // Skip to: 5636
/* 5088 */    MCD::OPC_CheckPredicate, 16, 32, 2, // Skip to: 5636
/* 5092 */    MCD::OPC_Decode, 126, 91, // Opcode: BALIGN
/* 5095 */    MCD::OPC_FilterValue, 56, 41, 1, // Skip to: 5396
/* 5099 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5102 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 5120
/* 5106 */    MCD::OPC_CheckPredicate, 5, 14, 2, // Skip to: 5636
/* 5110 */    MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 5636
/* 5116 */    MCD::OPC_Decode, 199, 2, 92, // Opcode: EXTR_W
/* 5120 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 5138
/* 5124 */    MCD::OPC_CheckPredicate, 5, 252, 1, // Skip to: 5636
/* 5128 */    MCD::OPC_CheckField, 13, 3, 0, 246, 1, // Skip to: 5636
/* 5134 */    MCD::OPC_Decode, 195, 2, 93, // Opcode: EXTRV_W
/* 5138 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 5156
/* 5142 */    MCD::OPC_CheckPredicate, 5, 234, 1, // Skip to: 5636
/* 5146 */    MCD::OPC_CheckField, 13, 3, 0, 228, 1, // Skip to: 5636
/* 5152 */    MCD::OPC_Decode, 188, 2, 92, // Opcode: EXTP
/* 5156 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 5174
/* 5160 */    MCD::OPC_CheckPredicate, 5, 216, 1, // Skip to: 5636
/* 5164 */    MCD::OPC_CheckField, 13, 3, 0, 210, 1, // Skip to: 5636
/* 5170 */    MCD::OPC_Decode, 191, 2, 93, // Opcode: EXTPV
/* 5174 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 5192
/* 5178 */    MCD::OPC_CheckPredicate, 5, 198, 1, // Skip to: 5636
/* 5182 */    MCD::OPC_CheckField, 13, 3, 0, 192, 1, // Skip to: 5636
/* 5188 */    MCD::OPC_Decode, 197, 2, 92, // Opcode: EXTR_R_W
/* 5192 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 5210
/* 5196 */    MCD::OPC_CheckPredicate, 5, 180, 1, // Skip to: 5636
/* 5200 */    MCD::OPC_CheckField, 13, 3, 0, 174, 1, // Skip to: 5636
/* 5206 */    MCD::OPC_Decode, 193, 2, 93, // Opcode: EXTRV_R_W
/* 5210 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 5228
/* 5214 */    MCD::OPC_CheckPredicate, 5, 162, 1, // Skip to: 5636
/* 5218 */    MCD::OPC_CheckField, 13, 3, 0, 156, 1, // Skip to: 5636
/* 5224 */    MCD::OPC_Decode, 196, 2, 92, // Opcode: EXTR_RS_W
/* 5228 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 5246
/* 5232 */    MCD::OPC_CheckPredicate, 5, 144, 1, // Skip to: 5636
/* 5236 */    MCD::OPC_CheckField, 13, 3, 0, 138, 1, // Skip to: 5636
/* 5242 */    MCD::OPC_Decode, 192, 2, 93, // Opcode: EXTRV_RS_W
/* 5246 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 5264
/* 5250 */    MCD::OPC_CheckPredicate, 5, 126, 1, // Skip to: 5636
/* 5254 */    MCD::OPC_CheckField, 13, 3, 0, 120, 1, // Skip to: 5636
/* 5260 */    MCD::OPC_Decode, 189, 2, 92, // Opcode: EXTPDP
/* 5264 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 5282
/* 5268 */    MCD::OPC_CheckPredicate, 5, 108, 1, // Skip to: 5636
/* 5272 */    MCD::OPC_CheckField, 13, 3, 0, 102, 1, // Skip to: 5636
/* 5278 */    MCD::OPC_Decode, 190, 2, 93, // Opcode: EXTPDPV
/* 5282 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 5300
/* 5286 */    MCD::OPC_CheckPredicate, 5, 90, 1, // Skip to: 5636
/* 5290 */    MCD::OPC_CheckField, 13, 3, 0, 84, 1, // Skip to: 5636
/* 5296 */    MCD::OPC_Decode, 198, 2, 92, // Opcode: EXTR_S_H
/* 5300 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 5318
/* 5304 */    MCD::OPC_CheckPredicate, 5, 72, 1, // Skip to: 5636
/* 5308 */    MCD::OPC_CheckField, 13, 3, 0, 66, 1, // Skip to: 5636
/* 5314 */    MCD::OPC_Decode, 194, 2, 93, // Opcode: EXTRV_S_H
/* 5318 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 5330
/* 5322 */    MCD::OPC_CheckPredicate, 5, 54, 1, // Skip to: 5636
/* 5326 */    MCD::OPC_Decode, 252, 4, 94, // Opcode: RDDSP
/* 5330 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 5342
/* 5334 */    MCD::OPC_CheckPredicate, 5, 42, 1, // Skip to: 5636
/* 5338 */    MCD::OPC_Decode, 202, 6, 95, // Opcode: WRDSP
/* 5342 */    MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 5360
/* 5346 */    MCD::OPC_CheckPredicate, 5, 30, 1, // Skip to: 5636
/* 5350 */    MCD::OPC_CheckField, 13, 7, 0, 24, 1, // Skip to: 5636
/* 5356 */    MCD::OPC_Decode, 175, 5, 96, // Opcode: SHILO
/* 5360 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 5378
/* 5364 */    MCD::OPC_CheckPredicate, 5, 12, 1, // Skip to: 5636
/* 5368 */    MCD::OPC_CheckField, 13, 8, 0, 6, 1, // Skip to: 5636
/* 5374 */    MCD::OPC_Decode, 176, 5, 97, // Opcode: SHILOV
/* 5378 */    MCD::OPC_FilterValue, 31, 254, 0, // Skip to: 5636
/* 5382 */    MCD::OPC_CheckPredicate, 5, 250, 0, // Skip to: 5636
/* 5386 */    MCD::OPC_CheckField, 13, 8, 0, 244, 0, // Skip to: 5636
/* 5392 */    MCD::OPC_Decode, 152, 4, 97, // Opcode: MTHLIP
/* 5396 */    MCD::OPC_FilterValue, 59, 236, 0, // Skip to: 5636
/* 5400 */    MCD::OPC_CheckPredicate, 1, 232, 0, // Skip to: 5636
/* 5404 */    MCD::OPC_CheckField, 21, 5, 0, 226, 0, // Skip to: 5636
/* 5410 */    MCD::OPC_CheckField, 6, 5, 0, 220, 0, // Skip to: 5636
/* 5416 */    MCD::OPC_Decode, 253, 4, 98, // Opcode: RDHWR
/* 5420 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 5432
/* 5424 */    MCD::OPC_CheckPredicate, 2, 208, 0, // Skip to: 5636
/* 5428 */    MCD::OPC_Decode, 248, 2, 15, // Opcode: LB
/* 5432 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 5444
/* 5436 */    MCD::OPC_CheckPredicate, 2, 196, 0, // Skip to: 5636
/* 5440 */    MCD::OPC_Decode, 151, 3, 15, // Opcode: LH
/* 5444 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 5456
/* 5448 */    MCD::OPC_CheckPredicate, 19, 184, 0, // Skip to: 5636
/* 5452 */    MCD::OPC_Decode, 186, 3, 15, // Opcode: LWL
/* 5456 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 5468
/* 5460 */    MCD::OPC_CheckPredicate, 2, 172, 0, // Skip to: 5636
/* 5464 */    MCD::OPC_Decode, 181, 3, 15, // Opcode: LW
/* 5468 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 5480
/* 5472 */    MCD::OPC_CheckPredicate, 2, 160, 0, // Skip to: 5636
/* 5476 */    MCD::OPC_Decode, 255, 2, 15, // Opcode: LBu
/* 5480 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 5492
/* 5484 */    MCD::OPC_CheckPredicate, 2, 148, 0, // Skip to: 5636
/* 5488 */    MCD::OPC_Decode, 158, 3, 15, // Opcode: LHu
/* 5492 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 5504
/* 5496 */    MCD::OPC_CheckPredicate, 19, 136, 0, // Skip to: 5636
/* 5500 */    MCD::OPC_Decode, 191, 3, 15, // Opcode: LWR
/* 5504 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 5516
/* 5508 */    MCD::OPC_CheckPredicate, 2, 124, 0, // Skip to: 5636
/* 5512 */    MCD::OPC_Decode, 145, 5, 15, // Opcode: SB
/* 5516 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 5528
/* 5520 */    MCD::OPC_CheckPredicate, 2, 112, 0, // Skip to: 5636
/* 5524 */    MCD::OPC_Decode, 172, 5, 15, // Opcode: SH
/* 5528 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 5540
/* 5532 */    MCD::OPC_CheckPredicate, 19, 100, 0, // Skip to: 5636
/* 5536 */    MCD::OPC_Decode, 136, 6, 15, // Opcode: SWL
/* 5540 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 5552
/* 5544 */    MCD::OPC_CheckPredicate, 2, 88, 0, // Skip to: 5636
/* 5548 */    MCD::OPC_Decode, 131, 6, 15, // Opcode: SW
/* 5552 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 5564
/* 5556 */    MCD::OPC_CheckPredicate, 19, 76, 0, // Skip to: 5636
/* 5560 */    MCD::OPC_Decode, 141, 6, 15, // Opcode: SWR
/* 5564 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 5576
/* 5568 */    MCD::OPC_CheckPredicate, 2, 64, 0, // Skip to: 5636
/* 5572 */    MCD::OPC_Decode, 164, 3, 15, // Opcode: LL
/* 5576 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 5588
/* 5580 */    MCD::OPC_CheckPredicate, 2, 52, 0, // Skip to: 5636
/* 5584 */    MCD::OPC_Decode, 184, 3, 99, // Opcode: LWC1
/* 5588 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 5600
/* 5592 */    MCD::OPC_CheckPredicate, 20, 40, 0, // Skip to: 5636
/* 5596 */    MCD::OPC_Decode, 134, 3, 99, // Opcode: LDC1
/* 5600 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 5612
/* 5604 */    MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 5636
/* 5608 */    MCD::OPC_Decode, 151, 5, 15, // Opcode: SC
/* 5612 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 5624
/* 5616 */    MCD::OPC_CheckPredicate, 2, 16, 0, // Skip to: 5636
/* 5620 */    MCD::OPC_Decode, 134, 6, 99, // Opcode: SWC1
/* 5624 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 5636
/* 5628 */    MCD::OPC_CheckPredicate, 20, 4, 0, // Skip to: 5636
/* 5632 */    MCD::OPC_Decode, 156, 5, 99, // Opcode: SDC1
/* 5636 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 61, 1, // Skip to: 324
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 14, 0, // Skip to: 28
/* 14 */      MCD::OPC_CheckPredicate, 1, 137, 6, // Skip to: 1691
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 131, 6, // Skip to: 1691
/* 24 */      MCD::OPC_Decode, 174, 2, 100, // Opcode: DSLLV
/* 28 */      MCD::OPC_FilterValue, 22, 27, 0, // Skip to: 59
/* 32 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 35 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 47
/* 39 */      MCD::OPC_CheckPredicate, 1, 112, 6, // Skip to: 1691
/* 43 */      MCD::OPC_Decode, 180, 2, 100, // Opcode: DSRLV
/* 47 */      MCD::OPC_FilterValue, 1, 104, 6, // Skip to: 1691
/* 51 */      MCD::OPC_CheckPredicate, 21, 100, 6, // Skip to: 1691
/* 55 */      MCD::OPC_Decode, 167, 2, 100, // Opcode: DROTRV
/* 59 */      MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 1, 88, 6, // Skip to: 1691
/* 67 */      MCD::OPC_CheckField, 6, 5, 0, 82, 6, // Skip to: 1691
/* 73 */      MCD::OPC_Decode, 177, 2, 100, // Opcode: DSRAV
/* 77 */      MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 1, 70, 6, // Skip to: 1691
/* 85 */      MCD::OPC_CheckField, 6, 10, 0, 64, 6, // Skip to: 1691
/* 91 */      MCD::OPC_Decode, 148, 2, 101, // Opcode: DMULT
/* 95 */      MCD::OPC_FilterValue, 29, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 1, 52, 6, // Skip to: 1691
/* 103 */     MCD::OPC_CheckField, 6, 10, 0, 46, 6, // Skip to: 1691
/* 109 */     MCD::OPC_Decode, 149, 2, 101, // Opcode: DMULTu
/* 113 */     MCD::OPC_FilterValue, 30, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 1, 34, 6, // Skip to: 1691
/* 121 */     MCD::OPC_CheckField, 6, 10, 0, 28, 6, // Skip to: 1691
/* 127 */     MCD::OPC_Decode, 169, 2, 101, // Opcode: DSDIV
/* 131 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 1, 16, 6, // Skip to: 1691
/* 139 */     MCD::OPC_CheckField, 6, 10, 0, 10, 6, // Skip to: 1691
/* 145 */     MCD::OPC_Decode, 182, 2, 101, // Opcode: DUDIV
/* 149 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 1, 254, 5, // Skip to: 1691
/* 157 */     MCD::OPC_CheckField, 6, 5, 0, 248, 5, // Skip to: 1691
/* 163 */     MCD::OPC_Decode, 128, 2, 102, // Opcode: DADD
/* 167 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 1, 236, 5, // Skip to: 1691
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 230, 5, // Skip to: 1691
/* 181 */     MCD::OPC_Decode, 131, 2, 102, // Opcode: DADDu
/* 185 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 1, 218, 5, // Skip to: 1691
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 212, 5, // Skip to: 1691
/* 199 */     MCD::OPC_Decode, 181, 2, 102, // Opcode: DSUBu
/* 203 */     MCD::OPC_FilterValue, 56, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 1, 200, 5, // Skip to: 1691
/* 211 */     MCD::OPC_CheckField, 21, 5, 0, 194, 5, // Skip to: 1691
/* 217 */     MCD::OPC_Decode, 171, 2, 103, // Opcode: DSLL
/* 221 */     MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 252
/* 225 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 228 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 240
/* 232 */     MCD::OPC_CheckPredicate, 1, 175, 5, // Skip to: 1691
/* 236 */     MCD::OPC_Decode, 178, 2, 103, // Opcode: DSRL
/* 240 */     MCD::OPC_FilterValue, 1, 167, 5, // Skip to: 1691
/* 244 */     MCD::OPC_CheckPredicate, 21, 163, 5, // Skip to: 1691
/* 248 */     MCD::OPC_Decode, 166, 2, 103, // Opcode: DROTR
/* 252 */     MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 270
/* 256 */     MCD::OPC_CheckPredicate, 1, 151, 5, // Skip to: 1691
/* 260 */     MCD::OPC_CheckField, 21, 5, 0, 145, 5, // Skip to: 1691
/* 266 */     MCD::OPC_Decode, 175, 2, 103, // Opcode: DSRA
/* 270 */     MCD::OPC_FilterValue, 60, 14, 0, // Skip to: 288
/* 274 */     MCD::OPC_CheckPredicate, 1, 133, 5, // Skip to: 1691
/* 278 */     MCD::OPC_CheckField, 21, 5, 0, 127, 5, // Skip to: 1691
/* 284 */     MCD::OPC_Decode, 172, 2, 103, // Opcode: DSLL32
/* 288 */     MCD::OPC_FilterValue, 62, 14, 0, // Skip to: 306
/* 292 */     MCD::OPC_CheckPredicate, 1, 115, 5, // Skip to: 1691
/* 296 */     MCD::OPC_CheckField, 21, 5, 0, 109, 5, // Skip to: 1691
/* 302 */     MCD::OPC_Decode, 179, 2, 103, // Opcode: DSRL32
/* 306 */     MCD::OPC_FilterValue, 63, 101, 5, // Skip to: 1691
/* 310 */     MCD::OPC_CheckPredicate, 1, 97, 5, // Skip to: 1691
/* 314 */     MCD::OPC_CheckField, 21, 5, 0, 91, 5, // Skip to: 1691
/* 320 */     MCD::OPC_Decode, 176, 2, 103, // Opcode: DSRA32
/* 324 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 367
/* 328 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 331 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 349
/* 335 */     MCD::OPC_CheckPredicate, 1, 72, 5, // Skip to: 1691
/* 339 */     MCD::OPC_CheckField, 3, 8, 0, 66, 5, // Skip to: 1691
/* 345 */     MCD::OPC_Decode, 142, 2, 104, // Opcode: DMFC0_3OP64
/* 349 */     MCD::OPC_FilterValue, 5, 58, 5, // Skip to: 1691
/* 353 */     MCD::OPC_CheckPredicate, 1, 54, 5, // Skip to: 1691
/* 357 */     MCD::OPC_CheckField, 3, 8, 0, 48, 5, // Skip to: 1691
/* 363 */     MCD::OPC_Decode, 145, 2, 105, // Opcode: DMTC0_3OP64
/* 367 */     MCD::OPC_FilterValue, 17, 73, 3, // Skip to: 1212
/* 371 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 374 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 392
/* 378 */     MCD::OPC_CheckPredicate, 22, 29, 5, // Skip to: 1691
/* 382 */     MCD::OPC_CheckField, 21, 5, 17, 23, 5, // Skip to: 1691
/* 388 */     MCD::OPC_Decode, 205, 2, 106, // Opcode: FADD_D64
/* 392 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 410
/* 396 */     MCD::OPC_CheckPredicate, 22, 11, 5, // Skip to: 1691
/* 400 */     MCD::OPC_CheckField, 21, 5, 17, 5, 5, // Skip to: 1691
/* 406 */     MCD::OPC_Decode, 231, 2, 106, // Opcode: FSUB_D64
/* 410 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 428
/* 414 */     MCD::OPC_CheckPredicate, 22, 249, 4, // Skip to: 1691
/* 418 */     MCD::OPC_CheckField, 21, 5, 17, 243, 4, // Skip to: 1691
/* 424 */     MCD::OPC_Decode, 222, 2, 106, // Opcode: FMUL_D64
/* 428 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 446
/* 432 */     MCD::OPC_CheckPredicate, 22, 231, 4, // Skip to: 1691
/* 436 */     MCD::OPC_CheckField, 21, 5, 17, 225, 4, // Skip to: 1691
/* 442 */     MCD::OPC_Decode, 211, 2, 106, // Opcode: FDIV_D64
/* 446 */     MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 465
/* 450 */     MCD::OPC_CheckPredicate, 22, 213, 4, // Skip to: 1691
/* 454 */     MCD::OPC_CheckField, 16, 10, 160, 4, 206, 4, // Skip to: 1691
/* 461 */     MCD::OPC_Decode, 228, 2, 64, // Opcode: FSQRT_D64
/* 465 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 484
/* 469 */     MCD::OPC_CheckPredicate, 6, 194, 4, // Skip to: 1691
/* 473 */     MCD::OPC_CheckField, 16, 10, 160, 4, 187, 4, // Skip to: 1691
/* 480 */     MCD::OPC_Decode, 202, 2, 64, // Opcode: FABS_D64
/* 484 */     MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 503
/* 488 */     MCD::OPC_CheckPredicate, 22, 175, 4, // Skip to: 1691
/* 492 */     MCD::OPC_CheckField, 16, 10, 160, 4, 168, 4, // Skip to: 1691
/* 499 */     MCD::OPC_Decode, 219, 2, 64, // Opcode: FMOV_D64
/* 503 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 522
/* 507 */     MCD::OPC_CheckPredicate, 6, 156, 4, // Skip to: 1691
/* 511 */     MCD::OPC_CheckField, 16, 10, 160, 4, 149, 4, // Skip to: 1691
/* 518 */     MCD::OPC_Decode, 225, 2, 64, // Opcode: FNEG_D64
/* 522 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 555
/* 526 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 529 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 542
/* 534 */     MCD::OPC_CheckPredicate, 22, 129, 4, // Skip to: 1691
/* 538 */     MCD::OPC_Decode, 137, 5, 57, // Opcode: ROUND_L_S
/* 542 */     MCD::OPC_FilterValue, 160, 4, 120, 4, // Skip to: 1691
/* 547 */     MCD::OPC_CheckPredicate, 22, 116, 4, // Skip to: 1691
/* 551 */     MCD::OPC_Decode, 136, 5, 64, // Opcode: ROUND_L_D64
/* 555 */     MCD::OPC_FilterValue, 9, 29, 0, // Skip to: 588
/* 559 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 562 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 575
/* 567 */     MCD::OPC_CheckPredicate, 22, 96, 4, // Skip to: 1691
/* 571 */     MCD::OPC_Decode, 197, 6, 57, // Opcode: TRUNC_L_S
/* 575 */     MCD::OPC_FilterValue, 160, 4, 87, 4, // Skip to: 1691
/* 580 */     MCD::OPC_CheckPredicate, 22, 83, 4, // Skip to: 1691
/* 584 */     MCD::OPC_Decode, 196, 6, 64, // Opcode: TRUNC_L_D64
/* 588 */     MCD::OPC_FilterValue, 10, 29, 0, // Skip to: 621
/* 592 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 595 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 608
/* 600 */     MCD::OPC_CheckPredicate, 22, 63, 4, // Skip to: 1691
/* 604 */     MCD::OPC_Decode, 170, 1, 57, // Opcode: CEIL_L_S
/* 608 */     MCD::OPC_FilterValue, 160, 4, 54, 4, // Skip to: 1691
/* 613 */     MCD::OPC_CheckPredicate, 22, 50, 4, // Skip to: 1691
/* 617 */     MCD::OPC_Decode, 169, 1, 64, // Opcode: CEIL_L_D64
/* 621 */     MCD::OPC_FilterValue, 11, 29, 0, // Skip to: 654
/* 625 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 628 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 641
/* 633 */     MCD::OPC_CheckPredicate, 22, 30, 4, // Skip to: 1691
/* 637 */     MCD::OPC_Decode, 214, 2, 57, // Opcode: FLOOR_L_S
/* 641 */     MCD::OPC_FilterValue, 160, 4, 21, 4, // Skip to: 1691
/* 646 */     MCD::OPC_CheckPredicate, 22, 17, 4, // Skip to: 1691
/* 650 */     MCD::OPC_Decode, 213, 2, 64, // Opcode: FLOOR_L_D64
/* 654 */     MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 673
/* 658 */     MCD::OPC_CheckPredicate, 22, 5, 4, // Skip to: 1691
/* 662 */     MCD::OPC_CheckField, 16, 10, 160, 4, 254, 3, // Skip to: 1691
/* 669 */     MCD::OPC_Decode, 139, 5, 107, // Opcode: ROUND_W_D64
/* 673 */     MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 692
/* 677 */     MCD::OPC_CheckPredicate, 22, 242, 3, // Skip to: 1691
/* 681 */     MCD::OPC_CheckField, 16, 10, 160, 4, 235, 3, // Skip to: 1691
/* 688 */     MCD::OPC_Decode, 199, 6, 107, // Opcode: TRUNC_W_D64
/* 692 */     MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 711
/* 696 */     MCD::OPC_CheckPredicate, 22, 223, 3, // Skip to: 1691
/* 700 */     MCD::OPC_CheckField, 16, 10, 160, 4, 216, 3, // Skip to: 1691
/* 707 */     MCD::OPC_Decode, 172, 1, 107, // Opcode: CEIL_W_D64
/* 711 */     MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 730
/* 715 */     MCD::OPC_CheckPredicate, 22, 204, 3, // Skip to: 1691
/* 719 */     MCD::OPC_CheckField, 16, 10, 160, 4, 197, 3, // Skip to: 1691
/* 726 */     MCD::OPC_Decode, 216, 2, 107, // Opcode: FLOOR_W_D64
/* 730 */     MCD::OPC_FilterValue, 32, 29, 0, // Skip to: 763
/* 734 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 737 */     MCD::OPC_FilterValue, 160, 4, 8, 0, // Skip to: 750
/* 742 */     MCD::OPC_CheckPredicate, 22, 177, 3, // Skip to: 1691
/* 746 */     MCD::OPC_Decode, 198, 1, 107, // Opcode: CVT_S_D64
/* 750 */     MCD::OPC_FilterValue, 160, 5, 168, 3, // Skip to: 1691
/* 755 */     MCD::OPC_CheckPredicate, 22, 164, 3, // Skip to: 1691
/* 759 */     MCD::OPC_Decode, 199, 1, 107, // Opcode: CVT_S_L
/* 763 */     MCD::OPC_FilterValue, 33, 42, 0, // Skip to: 809
/* 767 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 770 */     MCD::OPC_FilterValue, 128, 4, 8, 0, // Skip to: 783
/* 775 */     MCD::OPC_CheckPredicate, 22, 144, 3, // Skip to: 1691
/* 779 */     MCD::OPC_Decode, 193, 1, 57, // Opcode: CVT_D64_S
/* 783 */     MCD::OPC_FilterValue, 128, 5, 8, 0, // Skip to: 796
/* 788 */     MCD::OPC_CheckPredicate, 22, 131, 3, // Skip to: 1691
/* 792 */     MCD::OPC_Decode, 194, 1, 57, // Opcode: CVT_D64_W
/* 796 */     MCD::OPC_FilterValue, 160, 5, 122, 3, // Skip to: 1691
/* 801 */     MCD::OPC_CheckPredicate, 22, 118, 3, // Skip to: 1691
/* 805 */     MCD::OPC_Decode, 192, 1, 64, // Opcode: CVT_D64_L
/* 809 */     MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 828
/* 813 */     MCD::OPC_CheckPredicate, 22, 106, 3, // Skip to: 1691
/* 817 */     MCD::OPC_CheckField, 16, 10, 160, 4, 99, 3, // Skip to: 1691
/* 824 */     MCD::OPC_Decode, 202, 1, 107, // Opcode: CVT_W_D64
/* 828 */     MCD::OPC_FilterValue, 48, 20, 0, // Skip to: 852
/* 832 */     MCD::OPC_CheckPredicate, 22, 87, 3, // Skip to: 1691
/* 836 */     MCD::OPC_CheckField, 21, 5, 17, 81, 3, // Skip to: 1691
/* 842 */     MCD::OPC_CheckField, 6, 5, 0, 75, 3, // Skip to: 1691
/* 848 */     MCD::OPC_Decode, 208, 1, 108, // Opcode: C_F_D64
/* 852 */     MCD::OPC_FilterValue, 49, 20, 0, // Skip to: 876
/* 856 */     MCD::OPC_CheckPredicate, 22, 63, 3, // Skip to: 1691
/* 860 */     MCD::OPC_CheckField, 21, 5, 17, 57, 3, // Skip to: 1691
/* 866 */     MCD::OPC_CheckField, 6, 5, 0, 51, 3, // Skip to: 1691
/* 872 */     MCD::OPC_Decode, 250, 1, 108, // Opcode: C_UN_D64
/* 876 */     MCD::OPC_FilterValue, 50, 20, 0, // Skip to: 900
/* 880 */     MCD::OPC_CheckPredicate, 22, 39, 3, // Skip to: 1691
/* 884 */     MCD::OPC_CheckField, 21, 5, 17, 33, 3, // Skip to: 1691
/* 890 */     MCD::OPC_CheckField, 6, 5, 0, 27, 3, // Skip to: 1691
/* 896 */     MCD::OPC_Decode, 205, 1, 108, // Opcode: C_EQ_D64
/* 900 */     MCD::OPC_FilterValue, 51, 20, 0, // Skip to: 924
/* 904 */     MCD::OPC_CheckPredicate, 22, 15, 3, // Skip to: 1691
/* 908 */     MCD::OPC_CheckField, 21, 5, 17, 9, 3, // Skip to: 1691
/* 914 */     MCD::OPC_CheckField, 6, 5, 0, 3, 3, // Skip to: 1691
/* 920 */     MCD::OPC_Decode, 241, 1, 108, // Opcode: C_UEQ_D64
/* 924 */     MCD::OPC_FilterValue, 52, 20, 0, // Skip to: 948
/* 928 */     MCD::OPC_CheckPredicate, 22, 247, 2, // Skip to: 1691
/* 932 */     MCD::OPC_CheckField, 21, 5, 17, 241, 2, // Skip to: 1691
/* 938 */     MCD::OPC_CheckField, 6, 5, 0, 235, 2, // Skip to: 1691
/* 944 */     MCD::OPC_Decode, 232, 1, 108, // Opcode: C_OLT_D64
/* 948 */     MCD::OPC_FilterValue, 53, 20, 0, // Skip to: 972
/* 952 */     MCD::OPC_CheckPredicate, 22, 223, 2, // Skip to: 1691
/* 956 */     MCD::OPC_CheckField, 21, 5, 17, 217, 2, // Skip to: 1691
/* 962 */     MCD::OPC_CheckField, 6, 5, 0, 211, 2, // Skip to: 1691
/* 968 */     MCD::OPC_Decode, 247, 1, 108, // Opcode: C_ULT_D64
/* 972 */     MCD::OPC_FilterValue, 54, 20, 0, // Skip to: 996
/* 976 */     MCD::OPC_CheckPredicate, 22, 199, 2, // Skip to: 1691
/* 980 */     MCD::OPC_CheckField, 21, 5, 17, 193, 2, // Skip to: 1691
/* 986 */     MCD::OPC_CheckField, 6, 5, 0, 187, 2, // Skip to: 1691
/* 992 */     MCD::OPC_Decode, 229, 1, 108, // Opcode: C_OLE_D64
/* 996 */     MCD::OPC_FilterValue, 55, 20, 0, // Skip to: 1020
/* 1000 */    MCD::OPC_CheckPredicate, 22, 175, 2, // Skip to: 1691
/* 1004 */    MCD::OPC_CheckField, 21, 5, 17, 169, 2, // Skip to: 1691
/* 1010 */    MCD::OPC_CheckField, 6, 5, 0, 163, 2, // Skip to: 1691
/* 1016 */    MCD::OPC_Decode, 244, 1, 108, // Opcode: C_ULE_D64
/* 1020 */    MCD::OPC_FilterValue, 56, 20, 0, // Skip to: 1044
/* 1024 */    MCD::OPC_CheckPredicate, 22, 151, 2, // Skip to: 1691
/* 1028 */    MCD::OPC_CheckField, 21, 5, 17, 145, 2, // Skip to: 1691
/* 1034 */    MCD::OPC_CheckField, 6, 5, 0, 139, 2, // Skip to: 1691
/* 1040 */    MCD::OPC_Decode, 238, 1, 108, // Opcode: C_SF_D64
/* 1044 */    MCD::OPC_FilterValue, 57, 20, 0, // Skip to: 1068
/* 1048 */    MCD::OPC_CheckPredicate, 22, 127, 2, // Skip to: 1691
/* 1052 */    MCD::OPC_CheckField, 21, 5, 17, 121, 2, // Skip to: 1691
/* 1058 */    MCD::OPC_CheckField, 6, 5, 0, 115, 2, // Skip to: 1691
/* 1064 */    MCD::OPC_Decode, 220, 1, 108, // Opcode: C_NGLE_D64
/* 1068 */    MCD::OPC_FilterValue, 58, 20, 0, // Skip to: 1092
/* 1072 */    MCD::OPC_CheckPredicate, 22, 103, 2, // Skip to: 1691
/* 1076 */    MCD::OPC_CheckField, 21, 5, 17, 97, 2, // Skip to: 1691
/* 1082 */    MCD::OPC_CheckField, 6, 5, 0, 91, 2, // Skip to: 1691
/* 1088 */    MCD::OPC_Decode, 235, 1, 108, // Opcode: C_SEQ_D64
/* 1092 */    MCD::OPC_FilterValue, 59, 20, 0, // Skip to: 1116
/* 1096 */    MCD::OPC_CheckPredicate, 22, 79, 2, // Skip to: 1691
/* 1100 */    MCD::OPC_CheckField, 21, 5, 17, 73, 2, // Skip to: 1691
/* 1106 */    MCD::OPC_CheckField, 6, 5, 0, 67, 2, // Skip to: 1691
/* 1112 */    MCD::OPC_Decode, 223, 1, 108, // Opcode: C_NGL_D64
/* 1116 */    MCD::OPC_FilterValue, 60, 20, 0, // Skip to: 1140
/* 1120 */    MCD::OPC_CheckPredicate, 22, 55, 2, // Skip to: 1691
/* 1124 */    MCD::OPC_CheckField, 21, 5, 17, 49, 2, // Skip to: 1691
/* 1130 */    MCD::OPC_CheckField, 6, 5, 0, 43, 2, // Skip to: 1691
/* 1136 */    MCD::OPC_Decode, 214, 1, 108, // Opcode: C_LT_D64
/* 1140 */    MCD::OPC_FilterValue, 61, 20, 0, // Skip to: 1164
/* 1144 */    MCD::OPC_CheckPredicate, 22, 31, 2, // Skip to: 1691
/* 1148 */    MCD::OPC_CheckField, 21, 5, 17, 25, 2, // Skip to: 1691
/* 1154 */    MCD::OPC_CheckField, 6, 5, 0, 19, 2, // Skip to: 1691
/* 1160 */    MCD::OPC_Decode, 217, 1, 108, // Opcode: C_NGE_D64
/* 1164 */    MCD::OPC_FilterValue, 62, 20, 0, // Skip to: 1188
/* 1168 */    MCD::OPC_CheckPredicate, 22, 7, 2, // Skip to: 1691
/* 1172 */    MCD::OPC_CheckField, 21, 5, 17, 1, 2, // Skip to: 1691
/* 1178 */    MCD::OPC_CheckField, 6, 5, 0, 251, 1, // Skip to: 1691
/* 1184 */    MCD::OPC_Decode, 211, 1, 108, // Opcode: C_LE_D64
/* 1188 */    MCD::OPC_FilterValue, 63, 243, 1, // Skip to: 1691
/* 1192 */    MCD::OPC_CheckPredicate, 22, 239, 1, // Skip to: 1691
/* 1196 */    MCD::OPC_CheckField, 21, 5, 17, 233, 1, // Skip to: 1691
/* 1202 */    MCD::OPC_CheckField, 6, 5, 0, 227, 1, // Skip to: 1691
/* 1208 */    MCD::OPC_Decode, 226, 1, 108, // Opcode: C_NGT_D64
/* 1212 */    MCD::OPC_FilterValue, 18, 39, 0, // Skip to: 1255
/* 1216 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1219 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1237
/* 1223 */    MCD::OPC_CheckPredicate, 1, 208, 1, // Skip to: 1691
/* 1227 */    MCD::OPC_CheckField, 3, 8, 0, 202, 1, // Skip to: 1691
/* 1233 */    MCD::OPC_Decode, 144, 2, 104, // Opcode: DMFC2_3OP64
/* 1237 */    MCD::OPC_FilterValue, 5, 194, 1, // Skip to: 1691
/* 1241 */    MCD::OPC_CheckPredicate, 1, 190, 1, // Skip to: 1691
/* 1245 */    MCD::OPC_CheckField, 3, 8, 0, 184, 1, // Skip to: 1691
/* 1251 */    MCD::OPC_Decode, 147, 2, 105, // Opcode: DMTC2_3OP64
/* 1255 */    MCD::OPC_FilterValue, 19, 75, 0, // Skip to: 1334
/* 1259 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1262 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1280
/* 1266 */    MCD::OPC_CheckPredicate, 23, 165, 1, // Skip to: 1691
/* 1270 */    MCD::OPC_CheckField, 11, 5, 0, 159, 1, // Skip to: 1691
/* 1276 */    MCD::OPC_Decode, 142, 3, 109, // Opcode: LDXC164
/* 1280 */    MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 1298
/* 1284 */    MCD::OPC_CheckPredicate, 24, 147, 1, // Skip to: 1691
/* 1288 */    MCD::OPC_CheckField, 11, 5, 0, 141, 1, // Skip to: 1691
/* 1294 */    MCD::OPC_Decode, 177, 3, 109, // Opcode: LUXC164
/* 1298 */    MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 1316
/* 1302 */    MCD::OPC_CheckPredicate, 23, 129, 1, // Skip to: 1691
/* 1306 */    MCD::OPC_CheckField, 6, 5, 0, 123, 1, // Skip to: 1691
/* 1312 */    MCD::OPC_Decode, 165, 5, 110, // Opcode: SDXC164
/* 1316 */    MCD::OPC_FilterValue, 13, 115, 1, // Skip to: 1691
/* 1320 */    MCD::OPC_CheckPredicate, 24, 111, 1, // Skip to: 1691
/* 1324 */    MCD::OPC_CheckField, 6, 5, 0, 105, 1, // Skip to: 1691
/* 1330 */    MCD::OPC_Decode, 130, 6, 110, // Opcode: SUXC164
/* 1334 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1346
/* 1338 */    MCD::OPC_CheckPredicate, 1, 93, 1, // Skip to: 1691
/* 1342 */    MCD::OPC_Decode, 129, 2, 111, // Opcode: DADDi
/* 1346 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 1358
/* 1350 */    MCD::OPC_CheckPredicate, 1, 81, 1, // Skip to: 1691
/* 1354 */    MCD::OPC_Decode, 130, 2, 111, // Opcode: DADDiu
/* 1358 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 1370
/* 1362 */    MCD::OPC_CheckPredicate, 19, 69, 1, // Skip to: 1691
/* 1366 */    MCD::OPC_Decode, 137, 3, 15, // Opcode: LDL
/* 1370 */    MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 1382
/* 1374 */    MCD::OPC_CheckPredicate, 19, 57, 1, // Skip to: 1691
/* 1378 */    MCD::OPC_Decode, 139, 3, 15, // Opcode: LDR
/* 1382 */    MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 1413
/* 1386 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1389 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 1401
/* 1393 */    MCD::OPC_CheckPredicate, 14, 38, 1, // Skip to: 1691
/* 1397 */    MCD::OPC_Decode, 133, 2, 112, // Opcode: DCLZ
/* 1401 */    MCD::OPC_FilterValue, 37, 30, 1, // Skip to: 1691
/* 1405 */    MCD::OPC_CheckPredicate, 14, 26, 1, // Skip to: 1691
/* 1409 */    MCD::OPC_Decode, 132, 2, 112, // Opcode: DCLO
/* 1413 */    MCD::OPC_FilterValue, 31, 118, 0, // Skip to: 1535
/* 1417 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1420 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1432
/* 1424 */    MCD::OPC_CheckPredicate, 4, 7, 1, // Skip to: 1691
/* 1428 */    MCD::OPC_Decode, 136, 2, 113, // Opcode: DEXTM
/* 1432 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1444
/* 1436 */    MCD::OPC_CheckPredicate, 4, 251, 0, // Skip to: 1691
/* 1440 */    MCD::OPC_Decode, 137, 2, 113, // Opcode: DEXTU
/* 1444 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1456
/* 1448 */    MCD::OPC_CheckPredicate, 4, 239, 0, // Skip to: 1691
/* 1452 */    MCD::OPC_Decode, 135, 2, 113, // Opcode: DEXT
/* 1456 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1468
/* 1460 */    MCD::OPC_CheckPredicate, 4, 227, 0, // Skip to: 1691
/* 1464 */    MCD::OPC_Decode, 140, 2, 114, // Opcode: DINSM
/* 1468 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1480
/* 1472 */    MCD::OPC_CheckPredicate, 4, 215, 0, // Skip to: 1691
/* 1476 */    MCD::OPC_Decode, 141, 2, 114, // Opcode: DINSU
/* 1480 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1492
/* 1484 */    MCD::OPC_CheckPredicate, 4, 203, 0, // Skip to: 1691
/* 1488 */    MCD::OPC_Decode, 139, 2, 114, // Opcode: DINS
/* 1492 */    MCD::OPC_FilterValue, 36, 195, 0, // Skip to: 1691
/* 1496 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1499 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1517
/* 1503 */    MCD::OPC_CheckPredicate, 17, 184, 0, // Skip to: 1691
/* 1507 */    MCD::OPC_CheckField, 21, 5, 0, 178, 0, // Skip to: 1691
/* 1513 */    MCD::OPC_Decode, 168, 2, 115, // Opcode: DSBH
/* 1517 */    MCD::OPC_FilterValue, 5, 170, 0, // Skip to: 1691
/* 1521 */    MCD::OPC_CheckPredicate, 17, 166, 0, // Skip to: 1691
/* 1525 */    MCD::OPC_CheckField, 21, 5, 0, 160, 0, // Skip to: 1691
/* 1531 */    MCD::OPC_Decode, 170, 2, 115, // Opcode: DSHD
/* 1535 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 1547
/* 1539 */    MCD::OPC_CheckPredicate, 2, 148, 0, // Skip to: 1691
/* 1543 */    MCD::OPC_Decode, 202, 3, 15, // Opcode: LWu
/* 1547 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1559
/* 1551 */    MCD::OPC_CheckPredicate, 19, 136, 0, // Skip to: 1691
/* 1555 */    MCD::OPC_Decode, 160, 5, 15, // Opcode: SDL
/* 1559 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 1571
/* 1563 */    MCD::OPC_CheckPredicate, 19, 124, 0, // Skip to: 1691
/* 1567 */    MCD::OPC_Decode, 162, 5, 15, // Opcode: SDR
/* 1571 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 1583
/* 1575 */    MCD::OPC_CheckPredicate, 25, 112, 0, // Skip to: 1691
/* 1579 */    MCD::OPC_Decode, 167, 3, 15, // Opcode: LL_P8
/* 1583 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 1595
/* 1587 */    MCD::OPC_CheckPredicate, 25, 100, 0, // Skip to: 1691
/* 1591 */    MCD::OPC_Decode, 185, 3, 99, // Opcode: LWC1_P8
/* 1595 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 1607
/* 1599 */    MCD::OPC_CheckPredicate, 2, 88, 0, // Skip to: 1691
/* 1603 */    MCD::OPC_Decode, 165, 3, 15, // Opcode: LLD
/* 1607 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 1619
/* 1611 */    MCD::OPC_CheckPredicate, 26, 76, 0, // Skip to: 1691
/* 1615 */    MCD::OPC_Decode, 135, 3, 99, // Opcode: LDC164
/* 1619 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 1631
/* 1623 */    MCD::OPC_CheckPredicate, 2, 64, 0, // Skip to: 1691
/* 1627 */    MCD::OPC_Decode, 133, 3, 15, // Opcode: LD
/* 1631 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 1643
/* 1635 */    MCD::OPC_CheckPredicate, 25, 52, 0, // Skip to: 1691
/* 1639 */    MCD::OPC_Decode, 154, 5, 15, // Opcode: SC_P8
/* 1643 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 1655
/* 1647 */    MCD::OPC_CheckPredicate, 25, 40, 0, // Skip to: 1691
/* 1651 */    MCD::OPC_Decode, 135, 6, 99, // Opcode: SWC1_P8
/* 1655 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 1667
/* 1659 */    MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 1691
/* 1663 */    MCD::OPC_Decode, 152, 5, 15, // Opcode: SCD
/* 1667 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 1679
/* 1671 */    MCD::OPC_CheckPredicate, 26, 16, 0, // Skip to: 1691
/* 1675 */    MCD::OPC_Decode, 157, 5, 99, // Opcode: SDC164
/* 1679 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1691
/* 1683 */    MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 1691
/* 1687 */    MCD::OPC_Decode, 155, 5, 15, // Opcode: SD
/* 1691 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return ((Bits & Mips::FeatureMips16));
  case 1:
    return (!(Bits & Mips::FeatureMips16));
  case 2:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 3:
    return ((Bits & Mips::FeatureMicroMips));
  case 4:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips16));
  case 5:
    return ((Bits & Mips::FeatureDSP));
  case 6:
    return ((Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 7:
    return (!(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 8:
    return ((Bits & Mips::FeatureFPIdx) && !(Bits & Mips::FeatureMips16));
  case 9:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 10:
    return (!(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 11:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 12:
    return ((Bits & Mips::FeatureMips32r2) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 13:
    return ((Bits & Mips::FeatureMips32r2) && !(Bits & Mips::FeatureFP64Bit) && (Bits & Mips::FeatureMips32) && !(Bits & Mips::FeatureMips16));
  case 14:
    return ((Bits & Mips::FeatureBitCount) && !(Bits & Mips::FeatureMips16));
  case 15:
    return ((Bits & Mips::FeatureMSA));
  case 16:
    return ((Bits & Mips::FeatureDSPR2));
  case 17:
    return ((Bits & Mips::FeatureSwap) && !(Bits & Mips::FeatureMips16));
  case 18:
    return ((Bits & Mips::FeatureSEInReg) && !(Bits & Mips::FeatureMips16));
  case 19:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16) && !(Bits & Mips::FeatureMicroMips));
  case 20:
    return (!(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 21:
    return ((Bits & Mips::FeatureMips64r2) && !(Bits & Mips::FeatureMips16));
  case 22:
    return ((Bits & Mips::FeatureFP64Bit) && !(Bits & Mips::FeatureMips16));
  case 23:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 24:
    return ((Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  case 25:
    return ((Bits & Mips::FeatureN64) && !(Bits & Mips::FeatureMips16));
  case 26:
    return (!(Bits & Mips::FeatureN64) && (Bits & Mips::FeatureMips64) && !(Bits & Mips::FeatureMips16));
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    return S;
  case 3:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 3, 2) << 3);
    tmp |= (fieldFromInstruction(insn, 5, 3) << 0);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 11);
    tmp |= (fieldFromInstruction(insn, 21, 6) << 5);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 12) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 12) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSimm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 112:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeExtSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
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
