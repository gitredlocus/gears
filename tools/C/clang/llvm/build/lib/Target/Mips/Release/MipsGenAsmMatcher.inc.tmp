/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Assembly Matcher Source Fragment                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  unsigned ComputeAvailableFeatures(uint64_t FeatureBits) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands);
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID);
  unsigned MatchInstructionImpl(
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                                MCInst &Inst,
                                unsigned &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    SmallVectorImpl<MCParsedAsmOperand*> &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag {
  Feature_HasSEInReg = (1 << 10),
  Feature_HasBitCount = (1 << 0),
  Feature_HasSwap = (1 << 12),
  Feature_HasCondMov = (1 << 1),
  Feature_HasFPIdx = (1 << 4),
  Feature_HasMips32 = (1 << 6),
  Feature_HasMips32r2 = (1 << 7),
  Feature_HasMips64 = (1 << 8),
  Feature_NotMips64 = (1 << 22),
  Feature_HasMips64r2 = (1 << 9),
  Feature_IsN64 = (1 << 16),
  Feature_NotN64 = (1 << 23),
  Feature_InMips16Mode = (1 << 14),
  Feature_RelocStatic = (1 << 25),
  Feature_RelocPIC = (1 << 24),
  Feature_NoNaNsFPMath = (1 << 19),
  Feature_HasStdEnc = (1 << 11),
  Feature_InMicroMips = (1 << 13),
  Feature_NotInMicroMips = (1 << 21),
  Feature_IsFP64bit = (1 << 15),
  Feature_NotFP64bit = (1 << 20),
  Feature_IsSingleFloat = (1 << 18),
  Feature_IsNotSingleFloat = (1 << 17),
  Feature_HasDSP = (1 << 2),
  Feature_HasDSPR2 = (1 << 3),
  Feature_HasMSA = (1 << 5),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
  case Feature_HasSEInReg: return "";
  case Feature_HasBitCount: return "";
  case Feature_HasSwap: return "";
  case Feature_HasCondMov: return "";
  case Feature_HasFPIdx: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips64: return "";
  case Feature_NotMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_IsN64: return "";
  case Feature_NotN64: return "";
  case Feature_InMips16Mode: return "";
  case Feature_RelocStatic: return "";
  case Feature_RelocPIC: return "";
  case Feature_NoNaNsFPMath: return "";
  case Feature_HasStdEnc: return "";
  case Feature_InMicroMips: return "";
  case Feature_NotInMicroMips: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  case Feature_HasMSA: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addRegAsmOperands,
  CVT_95_addImmOperands,
  CVT_95_Reg,
  CVT_regZERO,
  CVT_regFCC0,
  CVT_imm_0,
  CVT_regRA,
  CVT_95_addMemOperands,
  CVT_regZERO_64,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__AFGR64Asm1_0__AFGR64Asm1_1,
  Convert__FGR64Asm1_0__FGR64Asm1_1,
  Convert__FGR32Asm1_0__FGR32Asm1_1,
  Convert__GPR32Asm1_0__GPR32Asm1_1,
  Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2,
  Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2,
  Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2,
  Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2,
  Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1,
  Convert__Reg1_0__Imm1_1,
  Convert__Imm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Imm1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Tie0,
  Convert__Imm1_0,
  Convert__regZERO__Imm1_0,
  Convert__regFCC0__Imm1_0,
  Convert__FCCRegsAsm1_0__Imm1_1,
  Convert__GPR32Asm1_0__regZERO__Imm1_1,
  Convert__GPR32Asm1_0__Imm1_1,
  Convert__imm_0__imm_0,
  Convert_NoOperands,
  Convert__Imm1_0__imm_0,
  Convert__Imm1_0__Imm1_1,
  Convert__FGR64Asm1_0__FGR32Asm1_1,
  Convert__FGR32Asm1_0__AFGR64Asm1_1,
  Convert__FGR32Asm1_0__FGR64Asm1_1,
  Convert__GPR32Asm1_0__CCRAsm1_1,
  Convert__Reg1_0__Reg1_1,
  Convert__CCRAsm1_1__GPR32Asm1_0,
  Convert__AFGR64Asm1_0__FGR32Asm1_1,
  Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1,
  Convert__GPR64Asm1_0__GPR64Asm1_1,
  Convert__GPR64Asm1_1__GPR64Asm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3,
  Convert__regZERO,
  Convert__GPR32Asm1_0,
  Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0,
  Convert__Reg1_1__Reg1_2,
  Convert__GPR32Asm1_1__GPR32Asm1_2,
  Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0,
  Convert__GPR64Asm1_0__FGR64Asm1_1,
  Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0,
  Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0,
  Convert__FGR64Asm1_1__GPR64Asm1_0,
  Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0,
  Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2,
  Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3,
  Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2,
  Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2,
  Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3__Tie0,
  Convert__GPR32Asm1_0__Tie0__GPR32Asm1_1,
  Convert__regRA__GPR32Asm1_0,
  Convert__Reg1_0,
  Convert__GPR32Asm1_0__Mem2_1,
  Convert__GPR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1,
  Convert__GPR64Asm1_0__Mem2_1,
  Convert__Reg1_0__Mem2_1,
  Convert__AFGR64Asm1_0__Mem2_1,
  Convert__FGR64Asm1_0__Mem2_1,
  Convert__GPR64Asm1_0__Mem2_1__Tie0,
  Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1,
  Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1,
  Convert__Reg1_0__Reg1_3__Imm1_1,
  Convert__FGR32Asm1_0__Mem2_1,
  Convert__GPR32Asm1_0__Mem2_1__Tie0,
  Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3,
  Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3,
  Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0,
  Convert__GPR32Asm1_0__FGR32Asm1_1,
  Convert__GPR32Asm1_0__HI32DSPAsm1_1,
  Convert__GPR32Asm1_0__LO32DSPAsm1_1,
  Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO,
  Convert__GPR64Asm1_0__GPR64Asm1_1__regZERO_64,
  Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0,
  Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0,
  Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0,
  Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0,
  Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0,
  Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0,
  Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0,
  Convert__FGR32Asm1_1__GPR32Asm1_0,
  Convert__HI32DSPAsm1_1__GPR32Asm1_0,
  Convert__ACC64DSPAsm1_1__GPR32Asm1_0__Tie0,
  Convert__LO32DSPAsm1_1__GPR32Asm1_0,
  Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2,
  Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1,
  Convert__regZERO__regZERO__imm_0,
  Convert__GPR32Asm1_0__HWRegsAsm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3,
  Convert__GPR32Asm1_0__Tie0__Mem2_1,
  Convert__GPR64Asm1_0__Tie0__Mem2_1,
  Convert__ACC64DSPAsm1_0__Imm1_1__Tie0,
  Convert__ACC64DSPAsm1_0__GPR32Asm1_1__Tie0,
  Convert__imm_0,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__FGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regZERO__Imm1_0
  { CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regFCC0__Imm1_0
  { CVT_regFCC0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FCCRegsAsm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__regZERO__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_regZERO, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_0__imm_0
  { CVT_imm_0, 0, CVT_imm_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Imm1_0__imm_0
  { CVT_95_addImmOperands, 1, CVT_imm_0, 0, CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__AFGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__FGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__CCRAsm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__CCRAsm1_1__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__AFGR64Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_1__GPR64Asm1_2
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regZERO
  { CVT_regZERO, 0, CVT_Done },
  // Convert__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPR32Asm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR64Asm1_0__FGR64Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__FGR64Asm1_1__GPR64Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32Asm1_0__Tie0__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_Tied, 0, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__regRA__GPR32Asm1_0
  { CVT_regRA, 0, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__GPR32Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 4, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__Reg1_0__Mem2_1
  { CVT_95_Reg, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__AFGR64Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__Mem2_1__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 4, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 4, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Imm1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR32Asm1_0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__Mem2_1__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 4, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_95_addRegAsmOperands, 4, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_95_addRegAsmOperands, 4, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR32Asm1_0__FGR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__HI32DSPAsm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__LO32DSPAsm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR64Asm1_0__GPR64Asm1_1__regZERO_64
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_imm_0, 0, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__FGR32Asm1_1__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__HI32DSPAsm1_1__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsm1_1__GPR32Asm1_0__Tie0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__LO32DSPAsm1_1__GPR32Asm1_0
  { CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_95_addRegAsmOperands, 3, CVT_Done },
  // Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_regZERO, 0, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__regZERO__regZERO__imm_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_0, 0, CVT_Done },
  // Convert__GPR32Asm1_0__HWRegsAsm1_1
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__GPR32Asm1_0__Tie0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64Asm1_0__Tie0__Mem2_1
  { CVT_95_addRegAsmOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__ACC64DSPAsm1_0__Imm1_1__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsm1_0__GPR32Asm1_1__Tie0
  { CVT_95_addRegAsmOperands, 1, CVT_95_addRegAsmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__imm_0
  { CVT_imm_0, 0, CVT_Done },
};

void MipsAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegAsmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegAsmOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO));
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::CreateReg(Mips::FCC0));
      break;
    case CVT_imm_0:
      Inst.addOperand(MCOperand::CreateImm(0));
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::CreateReg(Mips::RA));
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand*>(Operands[*(p + 1)])->addMemOperands(Inst, 2);
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::CreateReg(Mips::ZERO_64));
      break;
    }
  }
}

void MipsAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addRegAsmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__41__59_, // ');'
  MCK_0, // '0'
  MCK_16, // '16'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_Reg1, // derived register class
  MCK_Reg11, // derived register class
  MCK_Reg2, // derived register class
  MCK_Reg12, // derived register class
  MCK_GPR64, // register class 'GPR64'
  MCK_FGR32, // register class 'FGR32'
  MCK_AFGR64, // register class 'AFGR64'
  MCK_ZERO, // register class 'ZERO'
  MCK_CPU16Regs, // register class 'CPU16Regs'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP'
  MCK_CPU16RegsPlusSP, // register class 'CPU16RegsPlusSP'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_DSPR, // register class 'DSPR,GPR32'
  MCK_ACC64, // register class 'ACC64'
  MCK_ACC64DSP, // register class 'ACC64DSP'
  MCK_FGR64, // register class 'FGR64'
  MCK_MSA128, // register class 'MSA128'
  MCK_HI32, // register class 'HI32'
  MCK_HI32DSP, // register class 'HI32DSP'
  MCK_LO32, // register class 'LO32'
  MCK_LO32DSP, // register class 'LO32DSP'
  MCK_HI64, // register class 'HI64'
  MCK_LO64, // register class 'LO64'
  MCK_CCR, // register class 'CCR'
  MCK_FCC, // register class 'FCC'
  MCK_PC, // register class 'PC'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_ACC128, // register class 'ACC128'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_ACC64DSPAsm, // user defined class 'ACC64DSPAsmOperand'
  MCK_AFGR64Asm, // user defined class 'AFGR64AsmOperand'
  MCK_CCRAsm, // user defined class 'CCRAsmOperand'
  MCK_FCCRegsAsm, // user defined class 'FCCRegsAsmOperand'
  MCK_FGR32Asm, // user defined class 'FGR32AsmOperand'
  MCK_FGR64Asm, // user defined class 'FGR64AsmOperand'
  MCK_GPR32Asm, // user defined class 'GPR32AsmOperand'
  MCK_GPR64Asm, // user defined class 'GPR64AsmOperand'
  MCK_HI32DSPAsm, // user defined class 'HI32DSPAsmOperand'
  MCK_HWRegsAsm, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_LO32DSPAsm, // user defined class 'LO32DSPAsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    }
    break;
  case 2:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case ')':	 // 1 string to match.
      if (Name[1] != ';')
        break;
      return MCK__41__59_;	 // ");"
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "bit", 3))
      break;
    return MCK_bit;	 // "bit"
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "inst", 4))
      break;
    return MCK_inst;	 // "inst"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg1:
    switch (B) {
    default: return false;
    case MCK_Reg2: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg11:
    switch (B) {
    default: return false;
    case MCK_Reg2: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg2:
    return B == MCK_GPR64;

  case MCK_Reg12:
    return B == MCK_GPR64;

  case MCK_ZERO:
    return B == MCK_DSPR;

  case MCK_CPU16Regs:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPUSPReg:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16RegsPlusSP:
    return B == MCK_DSPR;

  case MCK_CPURAReg:
    return B == MCK_DSPR;

  case MCK_ACC64:
    return B == MCK_ACC64DSP;

  case MCK_HI32:
    return B == MCK_HI32DSP;

  case MCK_LO32:
    return B == MCK_LO32DSP;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  MipsOperand &Operand = *(MipsOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ACC64DSPAsm' class
  if (Kind == MCK_ACC64DSPAsm) {
    if (Operand.isACC64DSPAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AFGR64Asm' class
  if (Kind == MCK_AFGR64Asm) {
    if (Operand.isAFGR64Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CCRAsm' class
  if (Kind == MCK_CCRAsm) {
    if (Operand.isCCRAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FCCRegsAsm' class
  if (Kind == MCK_FCCRegsAsm) {
    if (Operand.isFCCRegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR32Asm' class
  if (Kind == MCK_FGR32Asm) {
    if (Operand.isFGR32Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR64Asm' class
  if (Kind == MCK_FGR64Asm) {
    if (Operand.isFGR64Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR32Asm' class
  if (Kind == MCK_GPR32Asm) {
    if (Operand.isGPR32Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR64Asm' class
  if (Kind == MCK_GPR64Asm) {
    if (Operand.isGPR64Asm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HI32DSPAsm' class
  if (Kind == MCK_HI32DSPAsm) {
    if (Operand.isHI32DSPAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HWRegsAsm' class
  if (Kind == MCK_HWRegsAsm) {
    if (Operand.isHWRegsAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LO32DSPAsm' class
  if (Kind == MCK_LO32DSPAsm) {
    if (Operand.isLO32DSPAsm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_DSPR; break;
    case Mips::V0: OpKind = MCK_CPU16Regs; break;
    case Mips::V1: OpKind = MCK_CPU16Regs; break;
    case Mips::A0: OpKind = MCK_CPU16Regs; break;
    case Mips::A1: OpKind = MCK_CPU16Regs; break;
    case Mips::A2: OpKind = MCK_CPU16Regs; break;
    case Mips::A3: OpKind = MCK_CPU16Regs; break;
    case Mips::T0: OpKind = MCK_DSPR; break;
    case Mips::T1: OpKind = MCK_DSPR; break;
    case Mips::T2: OpKind = MCK_DSPR; break;
    case Mips::T3: OpKind = MCK_DSPR; break;
    case Mips::T4: OpKind = MCK_DSPR; break;
    case Mips::T5: OpKind = MCK_DSPR; break;
    case Mips::T6: OpKind = MCK_DSPR; break;
    case Mips::T7: OpKind = MCK_DSPR; break;
    case Mips::S0: OpKind = MCK_CPU16Regs; break;
    case Mips::S1: OpKind = MCK_CPU16Regs; break;
    case Mips::S2: OpKind = MCK_DSPR; break;
    case Mips::S3: OpKind = MCK_DSPR; break;
    case Mips::S4: OpKind = MCK_DSPR; break;
    case Mips::S5: OpKind = MCK_DSPR; break;
    case Mips::S6: OpKind = MCK_DSPR; break;
    case Mips::S7: OpKind = MCK_DSPR; break;
    case Mips::T8: OpKind = MCK_DSPR; break;
    case Mips::T9: OpKind = MCK_DSPR; break;
    case Mips::K0: OpKind = MCK_DSPR; break;
    case Mips::K1: OpKind = MCK_DSPR; break;
    case Mips::GP: OpKind = MCK_DSPR; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_DSPR; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_GPR64; break;
    case Mips::AT_64: OpKind = MCK_GPR64; break;
    case Mips::V0_64: OpKind = MCK_Reg1; break;
    case Mips::V1_64: OpKind = MCK_Reg1; break;
    case Mips::A0_64: OpKind = MCK_Reg1; break;
    case Mips::A1_64: OpKind = MCK_Reg1; break;
    case Mips::A2_64: OpKind = MCK_Reg1; break;
    case Mips::A3_64: OpKind = MCK_Reg1; break;
    case Mips::T0_64: OpKind = MCK_GPR64; break;
    case Mips::T1_64: OpKind = MCK_GPR64; break;
    case Mips::T2_64: OpKind = MCK_GPR64; break;
    case Mips::T3_64: OpKind = MCK_GPR64; break;
    case Mips::T4_64: OpKind = MCK_GPR64; break;
    case Mips::T5_64: OpKind = MCK_GPR64; break;
    case Mips::T6_64: OpKind = MCK_GPR64; break;
    case Mips::T7_64: OpKind = MCK_GPR64; break;
    case Mips::S0_64: OpKind = MCK_Reg1; break;
    case Mips::S1_64: OpKind = MCK_Reg1; break;
    case Mips::S2_64: OpKind = MCK_GPR64; break;
    case Mips::S3_64: OpKind = MCK_GPR64; break;
    case Mips::S4_64: OpKind = MCK_GPR64; break;
    case Mips::S5_64: OpKind = MCK_GPR64; break;
    case Mips::S6_64: OpKind = MCK_GPR64; break;
    case Mips::S7_64: OpKind = MCK_GPR64; break;
    case Mips::T8_64: OpKind = MCK_GPR64; break;
    case Mips::T9_64: OpKind = MCK_GPR64; break;
    case Mips::K0_64: OpKind = MCK_GPR64; break;
    case Mips::K1_64: OpKind = MCK_GPR64; break;
    case Mips::GP_64: OpKind = MCK_GPR64; break;
    case Mips::SP_64: OpKind = MCK_Reg11; break;
    case Mips::FP_64: OpKind = MCK_GPR64; break;
    case Mips::RA_64: OpKind = MCK_Reg12; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_FGR32; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_FGR32; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_FGR32; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_FGR32; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_FGR32; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_FGR32; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_FGR32; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_FGR32; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_FGR32; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_FGR32; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_FGR32; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_FGR32; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_FGR32; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_FGR32; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_FGR32; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_FGR32; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_AFGR64; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_AFGR64; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_AFGR64; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_AFGR64; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_AFGR64; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_AFGR64; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_AFGR64; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_AFGR64; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_FGR64; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_FGR64; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_FGR64; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_FGR64; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_FGR64; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_FGR64; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_FGR64; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_FGR64; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_FGR64; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_FGR64; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_FGR64; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_FGR64; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_FGR64; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_FGR64; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_FGR64; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_FGR64; break;
    case Mips::W0: OpKind = MCK_MSA128; break;
    case Mips::W1: OpKind = MCK_MSA128; break;
    case Mips::W2: OpKind = MCK_MSA128; break;
    case Mips::W3: OpKind = MCK_MSA128; break;
    case Mips::W4: OpKind = MCK_MSA128; break;
    case Mips::W5: OpKind = MCK_MSA128; break;
    case Mips::W6: OpKind = MCK_MSA128; break;
    case Mips::W7: OpKind = MCK_MSA128; break;
    case Mips::W8: OpKind = MCK_MSA128; break;
    case Mips::W9: OpKind = MCK_MSA128; break;
    case Mips::W10: OpKind = MCK_MSA128; break;
    case Mips::W11: OpKind = MCK_MSA128; break;
    case Mips::W12: OpKind = MCK_MSA128; break;
    case Mips::W13: OpKind = MCK_MSA128; break;
    case Mips::W14: OpKind = MCK_MSA128; break;
    case Mips::W15: OpKind = MCK_MSA128; break;
    case Mips::W16: OpKind = MCK_MSA128; break;
    case Mips::W17: OpKind = MCK_MSA128; break;
    case Mips::W18: OpKind = MCK_MSA128; break;
    case Mips::W19: OpKind = MCK_MSA128; break;
    case Mips::W20: OpKind = MCK_MSA128; break;
    case Mips::W21: OpKind = MCK_MSA128; break;
    case Mips::W22: OpKind = MCK_MSA128; break;
    case Mips::W23: OpKind = MCK_MSA128; break;
    case Mips::W24: OpKind = MCK_MSA128; break;
    case Mips::W25: OpKind = MCK_MSA128; break;
    case Mips::W26: OpKind = MCK_MSA128; break;
    case Mips::W27: OpKind = MCK_MSA128; break;
    case Mips::W28: OpKind = MCK_MSA128; break;
    case Mips::W29: OpKind = MCK_MSA128; break;
    case Mips::W30: OpKind = MCK_MSA128; break;
    case Mips::W31: OpKind = MCK_MSA128; break;
    case Mips::HI0: OpKind = MCK_HI32; break;
    case Mips::HI1: OpKind = MCK_HI32DSP; break;
    case Mips::HI2: OpKind = MCK_HI32DSP; break;
    case Mips::HI3: OpKind = MCK_HI32DSP; break;
    case Mips::LO0: OpKind = MCK_LO32; break;
    case Mips::LO1: OpKind = MCK_LO32DSP; break;
    case Mips::LO2: OpKind = MCK_LO32DSP; break;
    case Mips::LO3: OpKind = MCK_LO32DSP; break;
    case Mips::HI0_64: OpKind = MCK_HI64; break;
    case Mips::LO0_64: OpKind = MCK_LO64; break;
    case Mips::FCR0: OpKind = MCK_CCR; break;
    case Mips::FCR1: OpKind = MCK_CCR; break;
    case Mips::FCR2: OpKind = MCK_CCR; break;
    case Mips::FCR3: OpKind = MCK_CCR; break;
    case Mips::FCR4: OpKind = MCK_CCR; break;
    case Mips::FCR5: OpKind = MCK_CCR; break;
    case Mips::FCR6: OpKind = MCK_CCR; break;
    case Mips::FCR7: OpKind = MCK_CCR; break;
    case Mips::FCR8: OpKind = MCK_CCR; break;
    case Mips::FCR9: OpKind = MCK_CCR; break;
    case Mips::FCR10: OpKind = MCK_CCR; break;
    case Mips::FCR11: OpKind = MCK_CCR; break;
    case Mips::FCR12: OpKind = MCK_CCR; break;
    case Mips::FCR13: OpKind = MCK_CCR; break;
    case Mips::FCR14: OpKind = MCK_CCR; break;
    case Mips::FCR15: OpKind = MCK_CCR; break;
    case Mips::FCR16: OpKind = MCK_CCR; break;
    case Mips::FCR17: OpKind = MCK_CCR; break;
    case Mips::FCR18: OpKind = MCK_CCR; break;
    case Mips::FCR19: OpKind = MCK_CCR; break;
    case Mips::FCR20: OpKind = MCK_CCR; break;
    case Mips::FCR21: OpKind = MCK_CCR; break;
    case Mips::FCR22: OpKind = MCK_CCR; break;
    case Mips::FCR23: OpKind = MCK_CCR; break;
    case Mips::FCR24: OpKind = MCK_CCR; break;
    case Mips::FCR25: OpKind = MCK_CCR; break;
    case Mips::FCR26: OpKind = MCK_CCR; break;
    case Mips::FCR27: OpKind = MCK_CCR; break;
    case Mips::FCR28: OpKind = MCK_CCR; break;
    case Mips::FCR29: OpKind = MCK_CCR; break;
    case Mips::FCR30: OpKind = MCK_CCR; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC; break;
    case Mips::FCC1: OpKind = MCK_FCC; break;
    case Mips::FCC2: OpKind = MCK_FCC; break;
    case Mips::FCC3: OpKind = MCK_FCC; break;
    case Mips::FCC4: OpKind = MCK_FCC; break;
    case Mips::FCC5: OpKind = MCK_FCC; break;
    case Mips::FCC6: OpKind = MCK_FCC; break;
    case Mips::FCC7: OpKind = MCK_FCC; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::AC0: OpKind = MCK_ACC64; break;
    case Mips::AC1: OpKind = MCK_ACC64DSP; break;
    case Mips::AC2: OpKind = MCK_ACC64DSP; break;
    case Mips::AC3: OpKind = MCK_ACC64DSP; break;
    case Mips::AC0_64: OpKind = MCK_ACC128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned MipsAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  if (((FB & Mips::FeatureSEInReg) != 0))
    Features |= Feature_HasSEInReg;
  if (((FB & Mips::FeatureBitCount) != 0))
    Features |= Feature_HasBitCount;
  if (((FB & Mips::FeatureSwap) != 0))
    Features |= Feature_HasSwap;
  if (((FB & Mips::FeatureCondMov) != 0))
    Features |= Feature_HasCondMov;
  if (((FB & Mips::FeatureFPIdx) != 0))
    Features |= Feature_HasFPIdx;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_HasMips32;
  if (((FB & Mips::FeatureMips32r2) != 0))
    Features |= Feature_HasMips32r2;
  if (((FB & Mips::FeatureMips64) != 0))
    Features |= Feature_HasMips64;
  if (((FB & Mips::FeatureMips64) == 0))
    Features |= Feature_NotMips64;
  if (((FB & Mips::FeatureMips64r2) != 0))
    Features |= Feature_HasMips64r2;
  if (((FB & Mips::FeatureN64) != 0))
    Features |= Feature_IsN64;
  if (((FB & Mips::FeatureN64) == 0))
    Features |= Feature_NotN64;
  if (((FB & Mips::FeatureMips16) != 0))
    Features |= Feature_InMips16Mode;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocStatic;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_RelocPIC;
  if (((FB & Mips::FeatureMips32) != 0))
    Features |= Feature_NoNaNsFPMath;
  if (((FB & Mips::FeatureMips16) == 0))
    Features |= Feature_HasStdEnc;
  if (((FB & Mips::FeatureMicroMips) != 0))
    Features |= Feature_InMicroMips;
  if (((FB & Mips::FeatureMicroMips) == 0))
    Features |= Feature_NotInMicroMips;
  if (((FB & Mips::FeatureFP64Bit) != 0))
    Features |= Feature_IsFP64bit;
  if (((FB & Mips::FeatureFP64Bit) == 0))
    Features |= Feature_NotFP64bit;
  if (((FB & Mips::FeatureSingleFloat) != 0))
    Features |= Feature_IsSingleFloat;
  if (((FB & Mips::FeatureSingleFloat) == 0))
    Features |= Feature_IsNotSingleFloat;
  if (((FB & Mips::FeatureDSP) != 0))
    Features |= Feature_HasDSP;
  if (((FB & Mips::FeatureDSPR2) != 0))
    Features |= Feature_HasDSPR2;
  if (((FB & Mips::FeatureMSA) != 0))
    Features |= Feature_HasMSA;
  return Features;
}

static const char *const MnemonicTable =
    "\005abs.d\005abs.s\tabsq_s.ph\tabsq_s.qb\010absq_s.w\003add\005add.d\005"
    "add.s\004addi\005addiu\007addq.ph\taddq_s.ph\010addq_s.w\010addqh.ph\007"
    "addqh.w\naddqh_r.ph\taddqh_r.w\005addsc\004addu\007addu.ph\007addu.qb\t"
    "addu_s.ph\taddu_s.qb\010adduh.qb\nadduh_r.qb\005addwc\003and\004andi\006"
    "append\001b\003bal\006balign\004bc1f\004bc1t\003beq\004beqz\004bgez\006"
    "bgezal\004bgtz\006bitrev\004blez\004bltz\006bltzal\003bne\004bnez\010bp"
    "osge32\005break\005bteqz\005btnez\006c.eq.d\006c.eq.s\005c.f.d\005c.f.s"
    "\006c.le.d\006c.le.s\006c.lt.d\006c.lt.s\007c.nge.d\007c.nge.s\007c.ngl"
    ".d\007c.ngl.s\010c.ngle.d\010c.ngle.s\007c.ngt.d\007c.ngt.s\007c.ole.d\007"
    "c.ole.s\007c.olt.d\007c.olt.s\007c.seq.d\007c.seq.s\006c.sf.d\006c.sf.s"
    "\007c.ueq.d\007c.ueq.s\007c.ule.d\007c.ule.s\007c.ult.d\007c.ult.s\006c"
    ".un.d\006c.un.s\010ceil.l.d\010ceil.l.s\010ceil.w.d\010ceil.w.s\004cfc1"
    "\003clo\003clz\003cmp\tcmp.eq.ph\tcmp.le.ph\tcmp.lt.ph\014cmpgdu.eq.qb\014"
    "cmpgdu.le.qb\014cmpgdu.lt.qb\013cmpgu.eq.qb\013cmpgu.le.qb\013cmpgu.lt."
    "qb\004cmpi\ncmpu.eq.qb\ncmpu.le.qb\ncmpu.lt.qb\004ctc1\007cvt.d.l\007cv"
    "t.d.s\007cvt.d.w\007cvt.l.d\007cvt.l.s\007cvt.s.d\007cvt.s.l\007cvt.s.w"
    "\007cvt.w.d\007cvt.w.s\004dadd\005daddi\006daddiu\005daddu\004dclo\004d"
    "clz\004ddiv\005ddivu\005deret\004dext\005dextm\005dextu\002di\004dins\005"
    "dinsm\005dinsu\003div\005div.d\005div.s\004divu\005dmfc0\005dmfc1\005dm"
    "fc2\005dmtc0\005dmtc1\005dmtc2\005dmult\006dmultu\010dpa.w.ph\013dpaq_s"
    ".w.ph\013dpaq_sa.l.w\014dpaqx_s.w.ph\015dpaqx_sa.w.ph\ndpau.h.qbl\ndpau"
    ".h.qbr\tdpax.w.ph\010dps.w.ph\013dpsq_s.w.ph\013dpsq_sa.l.w\014dpsqx_s."
    "w.ph\015dpsqx_sa.w.ph\ndpsu.h.qbl\ndpsu.h.qbr\tdpsx.w.ph\005drotr\006dr"
    "otrv\004dsbh\004dshd\004dsll\006dsll32\005dsllv\004dsra\006dsra32\005ds"
    "rav\004dsrl\006dsrl32\005dsrlv\005dsubu\002ei\004eret\003ext\004extp\006"
    "extpdp\007extpdpv\005extpv\006extr.w\010extr_r.w\textr_rs.w\010extr_s.h"
    "\007extrv.w\textrv_r.w\nextrv_rs.w\textrv_s.h\tfloor.l.d\tfloor.l.s\tfl"
    "oor.w.d\tfloor.w.s\003ins\004insv\001j\003jal\004jalr\005jalrc\002jr\003"
    "jrc\002la\002lb\003lbu\004lbux\002ld\004ld.b\004ld.d\004ld.h\004ld.w\004"
    "ldc1\003ldl\003ldr\005ldxc1\002lh\003lhu\003lhx\002li\002ll\003lld\003l"
    "ui\005luxc1\002lw\004lwc1\003lwl\003lwr\003lwu\003lwx\005lwxc1\004madd\006"
    "madd.d\006madd.s\005maddu\013maq_s.w.phl\013maq_s.w.phr\014maq_sa.w.phl"
    "\014maq_sa.w.phr\004mfc0\004mfc1\004mfc2\004mfhi\004mflo\006modsub\005m"
    "ov.d\005mov.s\004move\004movf\006movf.d\006movf.s\004movn\006movn.d\006"
    "movn.s\004movt\006movt.d\006movt.s\004movz\006movz.d\006movz.s\004msub\006"
    "msub.d\006msub.s\005msubu\004mtc0\004mtc1\004mtc2\004mthi\006mthlip\004"
    "mtlo\003mul\005mul.d\006mul.ph\005mul.s\010mul_s.ph\015muleq_s.w.phl\015"
    "muleq_s.w.phr\016muleu_s.ph.qbl\016muleu_s.ph.qbr\nmulq_rs.ph\tmulq_rs."
    "w\tmulq_s.ph\010mulq_s.w\nmulsa.w.ph\015mulsaq_s.w.ph\004mult\005multu\003"
    "neg\005neg.d\005neg.s\004negu\007nmadd.d\007nmadd.s\007nmsub.d\007nmsub"
    ".s\003nop\003nor\003not\002or\003ori\tpackrl.ph\007pick.ph\007pick.qb\014"
    "preceq.w.phl\014preceq.w.phr\016precequ.ph.qbl\017precequ.ph.qbla\016pr"
    "ecequ.ph.qbr\017precequ.ph.qbra\015preceu.ph.qbl\016preceu.ph.qbla\015p"
    "receu.ph.qbr\016preceu.ph.qbra\013precr.qb.ph\016precr_sra.ph.w\020prec"
    "r_sra_r.ph.w\013precrq.ph.w\014precrq.qb.ph\016precrq_rs.ph.w\017precrq"
    "u_s.qb.ph\007prepend\nraddu.w.qb\005rddsp\005rdhwr\007repl.ph\007repl.q"
    "b\010replv.ph\010replv.qb\004rotr\005rotrv\tround.l.d\tround.l.s\tround"
    ".w.d\tround.w.s\002sb\002sc\003scd\002sd\004sdc1\003sdl\003sdr\005sdxc1"
    "\003seb\003seh\002sh\005shilo\006shilov\007shll.ph\007shll.qb\tshll_s.p"
    "h\010shll_s.w\010shllv.ph\010shllv.qb\nshllv_s.ph\tshllv_s.w\007shra.ph"
    "\007shra.qb\tshra_r.ph\tshra_r.qb\010shra_r.w\010shrav.ph\010shrav.qb\n"
    "shrav_r.ph\nshrav_r.qb\tshrav_r.w\007shrl.ph\007shrl.qb\010shrlv.ph\010"
    "shrlv.qb\003sll\004sllv\003slt\004slti\005sltiu\004sltu\006sqrt.d\006sq"
    "rt.s\003sra\004srav\003srl\004srlv\004st.b\004st.d\004st.h\004st.w\003s"
    "ub\005sub.d\005sub.s\007subq.ph\tsubq_s.ph\010subq_s.w\010subqh.ph\007s"
    "ubqh.w\nsubqh_r.ph\tsubqh_r.w\004subu\007subu.ph\007subu.qb\tsubu_s.ph\t"
    "subu_s.qb\010subuh.qb\nsubuh_r.qb\005suxc1\002sw\004swc1\003swl\003swr\005"
    "swxc1\004sync\007syscall\003teq\ttrunc.l.d\ttrunc.l.s\ttrunc.w.d\ttrunc"
    ".w.s\005wrdsp\004wsbh\003xor\004xori";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint32_t RequiredFeatures;
    uint8_t Classes[6];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* abs.d */, Mips::FABS_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 0 /* abs.d */, Mips::FABS_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 6 /* abs.s */, Mips::FABS_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 12 /* absq_s.ph */, Mips::ABSQ_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 22 /* absq_s.qb */, Mips::ABSQ_S_QB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 32 /* absq_s.w */, Mips::ABSQ_S_W, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 45 /* add.d */, Mips::FADD_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 45 /* add.d */, Mips::FADD_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 51 /* add.s */, Mips::FADD_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 57 /* addi */, Mips::ADDi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 57 /* addi */, Mips::ADDi_MM, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 57 /* addi */, Mips::ADDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 57 /* addi */, Mips::ADDi_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuSpImmX16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm }, },
  { 62 /* addiu */, Mips::ADDiu, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::ADDiu_MM, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_Imm }, },
  { 62 /* addiu */, Mips::ADDiu, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::ADDiu_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 62 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 62 /* addiu */, Mips::AddiuSpImm16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 68 /* addq.ph */, Mips::ADDQ_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 76 /* addq_s.ph */, Mips::ADDQ_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 86 /* addq_s.w */, Mips::ADDQ_S_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 95 /* addqh.ph */, Mips::ADDQH_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 104 /* addqh.w */, Mips::ADDQH_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 112 /* addqh_r.ph */, Mips::ADDQH_R_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 123 /* addqh_r.w */, Mips::ADDQH_R_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 133 /* addsc */, Mips::ADDSC, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 139 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 139 /* addu */, Mips::ADDu, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 139 /* addu */, Mips::ADDu_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 139 /* addu */, Mips::ADDiu, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 144 /* addu.ph */, Mips::ADDU_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 152 /* addu.qb */, Mips::ADDU_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 160 /* addu_s.ph */, Mips::ADDU_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 170 /* addu_s.qb */, Mips::ADDU_S_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 180 /* adduh.qb */, Mips::ADDUH_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 189 /* adduh_r.qb */, Mips::ADDUH_R_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 200 /* addwc */, Mips::ADDWC, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 206 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 206 /* and */, Mips::AND, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 206 /* and */, Mips::AND_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 206 /* and */, Mips::ANDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 210 /* andi */, Mips::ANDi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 210 /* andi */, Mips::ANDi_MM, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 210 /* andi */, Mips::ANDi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 210 /* andi */, Mips::ANDi_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 215 /* append */, Mips::APPEND, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 222 /* b */, Mips::B, Convert__Imm1_0, Feature_RelocPIC|Feature_HasStdEnc, { MCK_Imm }, },
  { 222 /* b */, Mips::BimmX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 224 /* bal */, Mips::BGEZAL, Convert__regZERO__Imm1_0, 0, { MCK_Imm }, },
  { 228 /* balign */, Mips::BALIGN, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 235 /* bc1f */, Mips::BC1F, Convert__regFCC0__Imm1_0, 0, { MCK_Imm }, },
  { 235 /* bc1f */, Mips::BC1F, Convert__FCCRegsAsm1_0__Imm1_1, Feature_HasStdEnc, { MCK_FCCRegsAsm, MCK_Imm }, },
  { 240 /* bc1t */, Mips::BC1T, Convert__regFCC0__Imm1_0, 0, { MCK_Imm }, },
  { 240 /* bc1t */, Mips::BC1T, Convert__FCCRegsAsm1_0__Imm1_1, Feature_HasStdEnc, { MCK_FCCRegsAsm, MCK_Imm }, },
  { 245 /* beq */, Mips::BEQ, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 249 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 249 /* beqz */, Mips::BEQ, Convert__GPR32Asm1_0__regZERO__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 249 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 254 /* bgez */, Mips::BGEZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 259 /* bgezal */, Mips::BGEZAL, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 266 /* bgtz */, Mips::BGTZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 271 /* bitrev */, Mips::BITREV, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 278 /* blez */, Mips::BLEZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 283 /* bltz */, Mips::BLTZ, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 288 /* bltzal */, Mips::BLTZAL, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 295 /* bne */, Mips::BNE, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 299 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 299 /* bnez */, Mips::BNE, Convert__GPR32Asm1_0__regZERO__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 299 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 304 /* bposge32 */, Mips::BPOSGE32, Convert__Imm1_0, Feature_HasDSP, { MCK_Imm }, },
  { 313 /* break */, Mips::BREAK, Convert__imm_0__imm_0, 0, {  }, },
  { 313 /* break */, Mips::Break16, Convert_NoOperands, Feature_InMips16Mode, { MCK_0 }, },
  { 313 /* break */, Mips::BREAK, Convert__Imm1_0__imm_0, 0, { MCK_Imm }, },
  { 313 /* break */, Mips::BREAK, Convert__Imm1_0__Imm1_1, Feature_HasStdEnc, { MCK_Imm, MCK_Imm }, },
  { 319 /* bteqz */, Mips::BteqzX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 325 /* btnez */, Mips::BtnezX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 331 /* c.eq.d */, Mips::C_EQ_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 331 /* c.eq.d */, Mips::C_EQ_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 338 /* c.eq.s */, Mips::C_EQ_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 345 /* c.f.d */, Mips::C_F_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 345 /* c.f.d */, Mips::C_F_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 351 /* c.f.s */, Mips::C_F_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 357 /* c.le.d */, Mips::C_LE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 357 /* c.le.d */, Mips::C_LE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 364 /* c.le.s */, Mips::C_LE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 371 /* c.lt.d */, Mips::C_LT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 371 /* c.lt.d */, Mips::C_LT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 378 /* c.lt.s */, Mips::C_LT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 385 /* c.nge.d */, Mips::C_NGE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 385 /* c.nge.d */, Mips::C_NGE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 393 /* c.nge.s */, Mips::C_NGE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 401 /* c.ngl.d */, Mips::C_NGL_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 401 /* c.ngl.d */, Mips::C_NGL_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 409 /* c.ngl.s */, Mips::C_NGL_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 417 /* c.ngle.d */, Mips::C_NGLE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 417 /* c.ngle.d */, Mips::C_NGLE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 426 /* c.ngle.s */, Mips::C_NGLE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 435 /* c.ngt.d */, Mips::C_NGT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 435 /* c.ngt.d */, Mips::C_NGT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 443 /* c.ngt.s */, Mips::C_NGT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 451 /* c.ole.d */, Mips::C_OLE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 451 /* c.ole.d */, Mips::C_OLE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 459 /* c.ole.s */, Mips::C_OLE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 467 /* c.olt.d */, Mips::C_OLT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 467 /* c.olt.d */, Mips::C_OLT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 475 /* c.olt.s */, Mips::C_OLT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 483 /* c.seq.d */, Mips::C_SEQ_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 483 /* c.seq.d */, Mips::C_SEQ_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 491 /* c.seq.s */, Mips::C_SEQ_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 499 /* c.sf.d */, Mips::C_SF_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 499 /* c.sf.d */, Mips::C_SF_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 506 /* c.sf.s */, Mips::C_SF_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 513 /* c.ueq.d */, Mips::C_UEQ_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 513 /* c.ueq.d */, Mips::C_UEQ_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 521 /* c.ueq.s */, Mips::C_UEQ_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 529 /* c.ule.d */, Mips::C_ULE_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 529 /* c.ule.d */, Mips::C_ULE_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 537 /* c.ule.s */, Mips::C_ULE_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 545 /* c.ult.d */, Mips::C_ULT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 545 /* c.ult.d */, Mips::C_ULT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 553 /* c.ult.s */, Mips::C_ULT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 561 /* c.un.d */, Mips::C_UN_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 561 /* c.un.d */, Mips::C_UN_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 568 /* c.un.s */, Mips::C_UN_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 575 /* ceil.l.d */, Mips::CEIL_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 584 /* ceil.l.s */, Mips::CEIL_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 593 /* ceil.w.d */, Mips::CEIL_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 593 /* ceil.w.d */, Mips::CEIL_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 602 /* ceil.w.s */, Mips::CEIL_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 611 /* cfc1 */, Mips::CFC1, Convert__GPR32Asm1_0__CCRAsm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_CCRAsm }, },
  { 616 /* clo */, Mips::CLO, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 620 /* clz */, Mips::CLZ, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 624 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 628 /* cmp.eq.ph */, Mips::CMP_EQ_PH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 638 /* cmp.le.ph */, Mips::CMP_LE_PH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 648 /* cmp.lt.ph */, Mips::CMP_LT_PH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 658 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 671 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 684 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 697 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 709 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 721 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 733 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 733 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 738 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 749 /* cmpu.le.qb */, Mips::CMPU_LE_QB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 760 /* cmpu.lt.qb */, Mips::CMPU_LT_QB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 771 /* ctc1 */, Mips::CTC1, Convert__CCRAsm1_1__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_CCRAsm }, },
  { 776 /* cvt.d.l */, Mips::CVT_D64_L, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 784 /* cvt.d.s */, Mips::CVT_D32_S, Convert__AFGR64Asm1_0__FGR32Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_FGR32Asm }, },
  { 784 /* cvt.d.s */, Mips::CVT_D64_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 792 /* cvt.d.w */, Mips::CVT_D32_W, Convert__AFGR64Asm1_0__FGR32Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_FGR32Asm }, },
  { 792 /* cvt.d.w */, Mips::CVT_D64_W, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 800 /* cvt.l.d */, Mips::CVT_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 808 /* cvt.l.s */, Mips::CVT_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 816 /* cvt.s.d */, Mips::CVT_S_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 816 /* cvt.s.d */, Mips::CVT_S_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 824 /* cvt.s.l */, Mips::CVT_S_L, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 832 /* cvt.s.w */, Mips::CVT_S_W, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 840 /* cvt.w.d */, Mips::CVT_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 840 /* cvt.w.d */, Mips::CVT_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 848 /* cvt.w.s */, Mips::CVT_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 856 /* dadd */, Mips::DADD, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 856 /* dadd */, Mips::DADDi, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, 0, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 861 /* daddi */, Mips::DADDi, Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Imm }, },
  { 861 /* daddi */, Mips::DADDi, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 867 /* daddiu */, Mips::DADDiu, Convert__GPR64Asm1_0__GPR64Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Imm }, },
  { 867 /* daddiu */, Mips::DADDiu, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 874 /* daddu */, Mips::DADDu, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 874 /* daddu */, Mips::DADDiu, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, 0, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 880 /* dclo */, Mips::DCLO, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 885 /* dclz */, Mips::DCLZ, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasBitCount|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 890 /* ddiv */, Mips::DSDIV, Convert__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 895 /* ddivu */, Mips::DUDIV, Convert__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 901 /* deret */, Mips::DERET, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 907 /* dext */, Mips::DEXT, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 912 /* dextm */, Mips::DEXTM, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 918 /* dextu */, Mips::DEXTU, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 924 /* di */, Mips::DI, Convert__regZERO, 0, {  }, },
  { 924 /* di */, Mips::DI, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 927 /* dins */, Mips::DINS, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 932 /* dinsm */, Mips::DINSM, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 938 /* dinsu */, Mips::DINSU, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm, MCK_Imm }, },
  { 944 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 944 /* div */, Mips::SDIV, Convert__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 948 /* div.d */, Mips::FDIV_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 948 /* div.d */, Mips::FDIV_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 954 /* div.s */, Mips::FDIV_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 960 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 960 /* divu */, Mips::UDIV, Convert__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_ZERO, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 965 /* dmfc0 */, Mips::DMFC0_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 965 /* dmfc0 */, Mips::DMFC0_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 971 /* dmfc1 */, Mips::DMFC1, Convert__GPR64Asm1_0__FGR64Asm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_FGR64Asm }, },
  { 977 /* dmfc2 */, Mips::DMFC2_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__imm_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 977 /* dmfc2 */, Mips::DMFC2_3OP64, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 983 /* dmtc0 */, Mips::DMTC0_3OP64, Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 983 /* dmtc0 */, Mips::DMTC0_3OP64, Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 989 /* dmtc1 */, Mips::DMTC1, Convert__FGR64Asm1_1__GPR64Asm1_0, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_FGR64Asm }, },
  { 995 /* dmtc2 */, Mips::DMTC2_3OP64, Convert__GPR64Asm1_1__imm_0__GPR64Asm1_0, 0, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 995 /* dmtc2 */, Mips::DMTC2_3OP64, Convert__GPR64Asm1_1__Imm1_2__GPR64Asm1_0, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1001 /* dmult */, Mips::DMULT, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1007 /* dmultu */, Mips::DMULTu, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1014 /* dpa.w.ph */, Mips::DPA_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1023 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1035 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1047 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1060 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1074 /* dpau.h.qbl */, Mips::DPAU_H_QBL, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1085 /* dpau.h.qbr */, Mips::DPAU_H_QBR, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1096 /* dpax.w.ph */, Mips::DPAX_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1106 /* dps.w.ph */, Mips::DPS_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1115 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1127 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1139 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1152 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1166 /* dpsu.h.qbl */, Mips::DPSU_H_QBL, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1177 /* dpsu.h.qbr */, Mips::DPSU_H_QBR, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1188 /* dpsx.w.ph */, Mips::DPSX_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1198 /* drotr */, Mips::DROTR, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasMips64r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1204 /* drotrv */, Mips::DROTRV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasMips64r2|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1211 /* dsbh */, Mips::DSBH, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1216 /* dshd */, Mips::DSHD, Convert__GPR64Asm1_0__GPR64Asm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1221 /* dsll */, Mips::DSLL, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1226 /* dsll32 */, Mips::DSLL32, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1233 /* dsllv */, Mips::DSLLV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1239 /* dsra */, Mips::DSRA, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1244 /* dsra32 */, Mips::DSRA32, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1251 /* dsrav */, Mips::DSRAV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1257 /* dsrl */, Mips::DSRL, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1262 /* dsrl32 */, Mips::DSRL32, Convert__GPR64Asm1_0__GPR64Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_Imm }, },
  { 1269 /* dsrlv */, Mips::DSRLV, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR32Asm }, },
  { 1275 /* dsubu */, Mips::DSUBu, Convert__GPR64Asm1_0__GPR64Asm1_1__GPR64Asm1_2, Feature_HasStdEnc, { MCK_GPR64Asm, MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1281 /* ei */, Mips::EI, Convert__regZERO, 0, {  }, },
  { 1281 /* ei */, Mips::EI, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1284 /* eret */, Mips::ERET, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 1289 /* ext */, Mips::EXT, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm, MCK_Imm }, },
  { 1293 /* extp */, Mips::EXTP, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_Imm }, },
  { 1298 /* extpdp */, Mips::EXTPDP, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_Imm }, },
  { 1305 /* extpdpv */, Mips::EXTPDPV, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_GPR32Asm }, },
  { 1313 /* extpv */, Mips::EXTPV, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_GPR32Asm }, },
  { 1319 /* extr.w */, Mips::EXTR_W, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_Imm }, },
  { 1326 /* extr_r.w */, Mips::EXTR_R_W, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_Imm }, },
  { 1335 /* extr_rs.w */, Mips::EXTR_RS_W, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_Imm }, },
  { 1345 /* extr_s.h */, Mips::EXTR_S_H, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_Imm }, },
  { 1354 /* extrv.w */, Mips::EXTRV_W, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_GPR32Asm }, },
  { 1362 /* extrv_r.w */, Mips::EXTRV_R_W, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_GPR32Asm }, },
  { 1372 /* extrv_rs.w */, Mips::EXTRV_RS_W, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_GPR32Asm }, },
  { 1383 /* extrv_s.h */, Mips::EXTRV_S_H, Convert__GPR32Asm1_0__ACC64DSPAsm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm, MCK_GPR32Asm }, },
  { 1393 /* floor.l.d */, Mips::FLOOR_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 1403 /* floor.l.s */, Mips::FLOOR_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 1413 /* floor.w.d */, Mips::FLOOR_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 1413 /* floor.w.d */, Mips::FLOOR_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 1423 /* floor.w.s */, Mips::FLOOR_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1433 /* ins */, Mips::INS, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Imm1_3__Tie0, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm, MCK_Imm }, },
  { 1437 /* insv */, Mips::INSV, Convert__GPR32Asm1_0__Tie0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1442 /* j */, Mips::JR, Convert__GPR32Asm1_0, 0, { MCK_GPR32Asm }, },
  { 1442 /* j */, Mips::J, Convert__Imm1_0, Feature_RelocStatic|Feature_HasStdEnc, { MCK_Imm }, },
  { 1444 /* jal */, Mips::JALR, Convert__regRA__GPR32Asm1_0, 0, { MCK_GPR32Asm }, },
  { 1444 /* jal */, Mips::JAL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 1444 /* jal */, Mips::JALR, Convert__GPR32Asm1_0__GPR32Asm1_1, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1448 /* jalr */, Mips::JALR, Convert__regRA__GPR32Asm1_0, 0, { MCK_GPR32Asm }, },
  { 1448 /* jalr */, Mips::JALR, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1453 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1459 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 1459 /* jr */, Mips::JR, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1462 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1462 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 1466 /* la */, Mips::LoadAddr32Imm, Convert__GPR32Asm1_0__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 1466 /* la */, Mips::LoadAddr32Reg, Convert__GPR32Asm1_0__Mem2_1, 0, { MCK_GPR32Asm, MCK_Mem }, },
  { 1469 /* lb */, Mips::LB, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1469 /* lb */, Mips::LB_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1472 /* lbu */, Mips::LBu, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1472 /* lbu */, Mips::LBu_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1476 /* lbux */, Mips::LBUX, Convert__GPR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1481 /* ld */, Mips::LD, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1484 /* ld.b */, Mips::LD_B, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 1489 /* ld.d */, Mips::LD_D, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 1494 /* ld.h */, Mips::LD_H, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 1499 /* ld.w */, Mips::LD_W, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 1504 /* ldc1 */, Mips::LDC1, Convert__AFGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_Mem }, },
  { 1504 /* ldc1 */, Mips::LDC164, Convert__FGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_Mem }, },
  { 1509 /* ldl */, Mips::LDL, Convert__GPR64Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR64Asm, MCK_Mem }, },
  { 1513 /* ldr */, Mips::LDR, Convert__GPR64Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR64Asm, MCK_Mem }, },
  { 1517 /* ldxc1 */, Mips::LDXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1517 /* ldxc1 */, Mips::LDXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1523 /* lh */, Mips::LH, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1523 /* lh */, Mips::LH_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1526 /* lhu */, Mips::LHu, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1526 /* lhu */, Mips::LHu_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1530 /* lhx */, Mips::LHX, Convert__GPR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1534 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 1534 /* li */, Mips::LoadImm32Reg, Convert__GPR32Asm1_0__Imm1_1, 0, { MCK_GPR32Asm, MCK_Imm }, },
  { 1534 /* li */, Mips::LiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1537 /* ll */, Mips::LL, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1537 /* ll */, Mips::LL_P8, Convert__GPR32Asm1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1540 /* lld */, Mips::LLD, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1544 /* lui */, Mips::LUi, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 1544 /* lui */, Mips::LUi_MM, Convert__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 1548 /* luxc1 */, Mips::LUXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1548 /* luxc1 */, Mips::LUXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1554 /* lw */, Mips::LW, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1554 /* lw */, Mips::LW_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 1554 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 1557 /* lwc1 */, Mips::LWC1, Convert__FGR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 1557 /* lwc1 */, Mips::LWC1_P8, Convert__FGR32Asm1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 1562 /* lwl */, Mips::LWL, Convert__GPR32Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 1562 /* lwl */, Mips::LWL_MM, Convert__GPR32Asm1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 1566 /* lwr */, Mips::LWR, Convert__GPR32Asm1_0__Mem2_1__Tie0, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 1566 /* lwr */, Mips::LWR_MM, Convert__GPR32Asm1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 1570 /* lwu */, Mips::LWu, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 1574 /* lwx */, Mips::LWX, Convert__GPR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1578 /* lwxc1 */, Mips::LWXC1, Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasFPIdx|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 1584 /* madd */, Mips::MADD, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1584 /* madd */, Mips::MADD_DSP, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1589 /* madd.d */, Mips::MADD_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1596 /* madd.s */, Mips::MADD_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1603 /* maddu */, Mips::MADDU, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1603 /* maddu */, Mips::MADDU_DSP, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1609 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1621 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1633 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1646 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1659 /* mfc0 */, Mips::MFC0_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1659 /* mfc0 */, Mips::MFC0_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1664 /* mfc1 */, Mips::MFC1, Convert__GPR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_FGR32Asm }, },
  { 1669 /* mfc2 */, Mips::MFC2_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__imm_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1669 /* mfc2 */, Mips::MFC2_3OP, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1674 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1674 /* mfhi */, Mips::MFHI, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1674 /* mfhi */, Mips::MFHI_DSP, Convert__GPR32Asm1_0__HI32DSPAsm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_HI32DSPAsm }, },
  { 1679 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 1679 /* mflo */, Mips::MFLO, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1679 /* mflo */, Mips::MFLO_DSP, Convert__GPR32Asm1_0__LO32DSPAsm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_LO32DSPAsm }, },
  { 1684 /* modsub */, Mips::MODSUB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1691 /* mov.d */, Mips::FMOV_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1691 /* mov.d */, Mips::FMOV_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 1697 /* mov.s */, Mips::FMOV_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1703 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_DSPR }, },
  { 1703 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_DSPR, MCK_CPU16Regs }, },
  { 1703 /* move */, Mips::ADDu, Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO, Feature_NotMips64, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1703 /* move */, Mips::DADDu, Convert__GPR64Asm1_0__GPR64Asm1_1__regZERO_64, Feature_HasMips64, { MCK_GPR64Asm, MCK_GPR64Asm }, },
  { 1708 /* movf */, Mips::MOVF_I, Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_FCCRegsAsm }, },
  { 1713 /* movf.d */, Mips::MOVF_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_FCCRegsAsm }, },
  { 1720 /* movf.s */, Mips::MOVF_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FCCRegsAsm }, },
  { 1727 /* movn */, Mips::MOVN_I_I, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1732 /* movn.d */, Mips::MOVN_I_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_GPR32Asm }, },
  { 1739 /* movn.s */, Mips::MOVN_I_S, Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_GPR32Asm }, },
  { 1746 /* movt */, Mips::MOVT_I, Convert__GPR32Asm1_0__GPR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_FCCRegsAsm }, },
  { 1751 /* movt.d */, Mips::MOVT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__FCCRegsAsm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_FCCRegsAsm }, },
  { 1758 /* movt.s */, Mips::MOVT_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FCCRegsAsm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FCCRegsAsm }, },
  { 1765 /* movz */, Mips::MOVZ_I_I, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1770 /* movz.d */, Mips::MOVZ_I_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__GPR32Asm1_2__Tie0, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_GPR32Asm }, },
  { 1777 /* movz.s */, Mips::MOVZ_I_S, Convert__FGR32Asm1_0__FGR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_GPR32Asm }, },
  { 1784 /* msub */, Mips::MSUB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1784 /* msub */, Mips::MSUB_DSP, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1789 /* msub.d */, Mips::MSUB_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1796 /* msub.s */, Mips::MSUB_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1803 /* msubu */, Mips::MSUBU, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1803 /* msubu */, Mips::MSUBU_DSP, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1809 /* mtc0 */, Mips::MTC0_3OP, Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1809 /* mtc0 */, Mips::MTC0_3OP, Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1814 /* mtc1 */, Mips::MTC1, Convert__FGR32Asm1_1__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_FGR32Asm }, },
  { 1819 /* mtc2 */, Mips::MTC2_3OP, Convert__GPR32Asm1_1__imm_0__GPR32Asm1_0, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1819 /* mtc2 */, Mips::MTC2_3OP, Convert__GPR32Asm1_1__Imm1_2__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 1824 /* mthi */, Mips::MTHI, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1824 /* mthi */, Mips::MTHI_DSP, Convert__HI32DSPAsm1_1__GPR32Asm1_0, Feature_HasDSP, { MCK_GPR32Asm, MCK_HI32DSPAsm }, },
  { 1829 /* mthlip */, Mips::MTHLIP, Convert__ACC64DSPAsm1_1__GPR32Asm1_0__Tie0, Feature_HasDSP, { MCK_GPR32Asm, MCK_ACC64DSPAsm }, },
  { 1836 /* mtlo */, Mips::MTLO, Convert__GPR32Asm1_0, Feature_HasStdEnc, { MCK_GPR32Asm }, },
  { 1836 /* mtlo */, Mips::MTLO_DSP, Convert__LO32DSPAsm1_1__GPR32Asm1_0, Feature_HasDSP, { MCK_GPR32Asm, MCK_LO32DSPAsm }, },
  { 1841 /* mul */, Mips::MUL, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1841 /* mul */, Mips::MUL_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1845 /* mul.d */, Mips::FMUL_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 1845 /* mul.d */, Mips::FMUL_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 1851 /* mul.ph */, Mips::MUL_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1858 /* mul.s */, Mips::FMUL_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 1864 /* mul_s.ph */, Mips::MUL_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1873 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1887 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1901 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1916 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1931 /* mulq_rs.ph */, Mips::MULQ_RS_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1942 /* mulq_rs.w */, Mips::MULQ_RS_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1952 /* mulq_s.ph */, Mips::MULQ_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1962 /* mulq_s.w */, Mips::MULQ_S_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1971 /* mulsa.w.ph */, Mips::MULSA_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1982 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1996 /* mult */, Mips::MULT, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1996 /* mult */, Mips::MULT_MM, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 1996 /* mult */, Mips::MULT_DSP, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2001 /* multu */, Mips::MULTu, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2001 /* multu */, Mips::MULTu_MM, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2001 /* multu */, Mips::MULTU_DSP, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2007 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2007 /* neg */, Mips::SUB, Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2011 /* neg.d */, Mips::FNEG_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2011 /* neg.d */, Mips::FNEG_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2017 /* neg.s */, Mips::FNEG_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2023 /* negu */, Mips::SUBu, Convert__GPR32Asm1_0__regZERO__GPR32Asm1_1, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2028 /* nmadd.d */, Mips::NMADD_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2036 /* nmadd.s */, Mips::NMADD_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2044 /* nmsub.d */, Mips::NMSUB_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2__AFGR64Asm1_3, Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2052 /* nmsub.s */, Mips::NMSUB_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2__FGR32Asm1_3, Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2060 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_0, 0, {  }, },
  { 2064 /* nor */, Mips::NOR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2064 /* nor */, Mips::NOR_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2068 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2068 /* not */, Mips::NOR, Convert__GPR32Asm1_0__GPR32Asm1_1__regZERO, 0, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2072 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2072 /* or */, Mips::OR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2072 /* or */, Mips::OR_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2072 /* or */, Mips::ORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2075 /* ori */, Mips::ORi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 2075 /* ori */, Mips::ORi_MM, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 2075 /* ori */, Mips::ORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2075 /* ori */, Mips::ORi_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2079 /* packrl.ph */, Mips::PACKRL_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2089 /* pick.ph */, Mips::PICK_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2097 /* pick.qb */, Mips::PICK_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2105 /* preceq.w.phl */, Mips::PRECEQ_W_PHL, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2118 /* preceq.w.phr */, Mips::PRECEQ_W_PHR, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2131 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2146 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2162 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2177 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2193 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2207 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2222 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2236 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2251 /* precr.qb.ph */, Mips::PRECR_QB_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2263 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2278 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2295 /* precrq.ph.w */, Mips::PRECRQ_PH_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2307 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2320 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2335 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2351 /* prepend */, Mips::PREPEND, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2__Tie0, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2359 /* raddu.w.qb */, Mips::RADDU_W_QB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2370 /* rddsp */, Mips::RDDSP, Convert__GPR32Asm1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_Imm }, },
  { 2376 /* rdhwr */, Mips::RDHWR, Convert__GPR32Asm1_0__HWRegsAsm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_HWRegsAsm }, },
  { 2382 /* repl.ph */, Mips::REPL_PH, Convert__GPR32Asm1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_Imm }, },
  { 2390 /* repl.qb */, Mips::REPL_QB, Convert__GPR32Asm1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_Imm }, },
  { 2398 /* replv.ph */, Mips::REPLV_PH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2407 /* replv.qb */, Mips::REPLV_QB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2416 /* rotr */, Mips::ROTR, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2416 /* rotr */, Mips::ROTR_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2421 /* rotrv */, Mips::ROTRV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasMips32r2|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2421 /* rotrv */, Mips::ROTRV_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2427 /* round.l.d */, Mips::ROUND_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2437 /* round.l.s */, Mips::ROUND_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 2447 /* round.w.d */, Mips::ROUND_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 2447 /* round.w.d */, Mips::ROUND_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 2457 /* round.w.s */, Mips::ROUND_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2467 /* sb */, Mips::SB, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2467 /* sb */, Mips::SB_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2467 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 2470 /* sc */, Mips::SC, Convert__GPR32Asm1_0__Tie0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2470 /* sc */, Mips::SC_P8, Convert__GPR32Asm1_0__Tie0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2473 /* scd */, Mips::SCD, Convert__GPR64Asm1_0__Tie0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 2477 /* sd */, Mips::SD, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR64Asm, MCK_Mem }, },
  { 2480 /* sdc1 */, Mips::SDC1, Convert__AFGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_Mem }, },
  { 2480 /* sdc1 */, Mips::SDC164, Convert__FGR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_Mem }, },
  { 2485 /* sdl */, Mips::SDL, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR64Asm, MCK_Mem }, },
  { 2489 /* sdr */, Mips::SDR, Convert__GPR64Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR64Asm, MCK_Mem }, },
  { 2493 /* sdxc1 */, Mips::SDXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2493 /* sdxc1 */, Mips::SDXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2499 /* seb */, Mips::SEB, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2503 /* seh */, Mips::SEH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasSEInReg|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2507 /* sh */, Mips::SH, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2507 /* sh */, Mips::SH_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2507 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 2510 /* shilo */, Mips::SHILO, Convert__ACC64DSPAsm1_0__Imm1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_Imm }, },
  { 2516 /* shilov */, Mips::SHILOV, Convert__ACC64DSPAsm1_0__GPR32Asm1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsm, MCK_GPR32Asm }, },
  { 2523 /* shll.ph */, Mips::SHLL_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2531 /* shll.qb */, Mips::SHLL_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2539 /* shll_s.ph */, Mips::SHLL_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2549 /* shll_s.w */, Mips::SHLL_S_W, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2558 /* shllv.ph */, Mips::SHLLV_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2567 /* shllv.qb */, Mips::SHLLV_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2576 /* shllv_s.ph */, Mips::SHLLV_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2587 /* shllv_s.w */, Mips::SHLLV_S_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2597 /* shra.ph */, Mips::SHRA_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2605 /* shra.qb */, Mips::SHRA_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2613 /* shra_r.ph */, Mips::SHRA_R_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2623 /* shra_r.qb */, Mips::SHRA_R_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2633 /* shra_r.w */, Mips::SHRA_R_W, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2642 /* shrav.ph */, Mips::SHRAV_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2651 /* shrav.qb */, Mips::SHRAV_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2660 /* shrav_r.ph */, Mips::SHRAV_R_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2671 /* shrav_r.qb */, Mips::SHRAV_R_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2682 /* shrav_r.w */, Mips::SHRAV_R_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2692 /* shrl.ph */, Mips::SHRL_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2700 /* shrl.qb */, Mips::SHRL_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2708 /* shrlv.ph */, Mips::SHRLV_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2717 /* shrlv.qb */, Mips::SHRLV_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2726 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 2726 /* sll */, Mips::SLL, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2726 /* sll */, Mips::SLL_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2730 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2730 /* sllv */, Mips::SLLV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2730 /* sllv */, Mips::SLLV_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2735 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2735 /* slt */, Mips::SLT, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2735 /* slt */, Mips::SLT_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2735 /* slt */, Mips::SLTi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2739 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2739 /* slti */, Mips::SLTi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2739 /* slti */, Mips::SLTi_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2739 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2744 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2744 /* sltiu */, Mips::SLTiu, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2744 /* sltiu */, Mips::SLTiu_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2744 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2750 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2750 /* sltu */, Mips::SLTu, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2750 /* sltu */, Mips::SLTu_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2755 /* sqrt.d */, Mips::FSQRT_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2755 /* sqrt.d */, Mips::FSQRT_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2762 /* sqrt.s */, Mips::FSQRT_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2769 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 2769 /* sra */, Mips::SRA, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2769 /* sra */, Mips::SRA_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2773 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2773 /* srav */, Mips::SRAV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2773 /* srav */, Mips::SRAV_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2778 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm }, },
  { 2778 /* srl */, Mips::SRL, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2778 /* srl */, Mips::SRL_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2782 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2782 /* srlv */, Mips::SRLV, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2782 /* srlv */, Mips::SRLV_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2787 /* st.b */, Mips::ST_B, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 2792 /* st.d */, Mips::ST_D, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 2797 /* st.h */, Mips::ST_H, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 2802 /* st.w */, Mips::ST_W, Convert__Reg1_0__Mem2_1, Feature_HasMSA, { MCK_MSA128, MCK_Mem }, },
  { 2807 /* sub */, Mips::SUB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2807 /* sub */, Mips::SUB_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2811 /* sub.d */, Mips::FSUB_D32, Convert__AFGR64Asm1_0__AFGR64Asm1_1__AFGR64Asm1_2, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_AFGR64Asm, MCK_AFGR64Asm }, },
  { 2811 /* sub.d */, Mips::FSUB_D64, Convert__FGR64Asm1_0__FGR64Asm1_1__FGR64Asm1_2, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 2817 /* sub.s */, Mips::FSUB_S, Convert__FGR32Asm1_0__FGR32Asm1_1__FGR32Asm1_2, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 2823 /* subq.ph */, Mips::SUBQ_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2831 /* subq_s.ph */, Mips::SUBQ_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2841 /* subq_s.w */, Mips::SUBQ_S_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2850 /* subqh.ph */, Mips::SUBQH_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2859 /* subqh.w */, Mips::SUBQH_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2867 /* subqh_r.ph */, Mips::SUBQH_R_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2878 /* subqh_r.w */, Mips::SUBQH_R_W, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2888 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2888 /* subu */, Mips::SUBu, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2888 /* subu */, Mips::SUBu_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2893 /* subu.ph */, Mips::SUBU_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2901 /* subu.qb */, Mips::SUBU_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2909 /* subu_s.ph */, Mips::SUBU_S_PH, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2919 /* subu_s.qb */, Mips::SUBU_S_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSP, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2929 /* subuh.qb */, Mips::SUBUH_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2938 /* subuh_r.qb */, Mips::SUBUH_R_QB, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasDSPR2, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 2949 /* suxc1 */, Mips::SUXC1, Convert__AFGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_NotMips64|Feature_HasStdEnc, { MCK_AFGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2949 /* suxc1 */, Mips::SUXC164, Convert__FGR64Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasMips64|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2955 /* sw */, Mips::SW, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2955 /* sw */, Mips::SW_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Mem }, },
  { 2955 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 2955 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 2958 /* swc1 */, Mips::SWC1, Convert__FGR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 2958 /* swc1 */, Mips::SWC1_P8, Convert__FGR32Asm1_0__Mem2_1, Feature_IsN64|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_Mem }, },
  { 2963 /* swl */, Mips::SWL, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 2963 /* swl */, Mips::SWL_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 2967 /* swr */, Mips::SWR, Convert__GPR32Asm1_0__Mem2_1, Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 2967 /* swr */, Mips::SWR_MM, Convert__GPR32Asm1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32Asm, MCK_Mem }, },
  { 2971 /* swxc1 */, Mips::SWXC1, Convert__FGR32Asm1_0__GPR32Asm1_3__GPR32Asm1_1, Feature_HasFPIdx|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_GPR32Asm, MCK__40_, MCK_GPR32Asm, MCK__41_ }, },
  { 2977 /* sync */, Mips::SYNC, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 2982 /* syscall */, Mips::SYSCALL, Convert__imm_0, 0, {  }, },
  { 2982 /* syscall */, Mips::SYSCALL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 2990 /* teq */, Mips::TEQ, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 2994 /* trunc.l.d */, Mips::TRUNC_L_D64, Convert__FGR64Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR64Asm }, },
  { 3004 /* trunc.l.s */, Mips::TRUNC_L_S, Convert__FGR64Asm1_0__FGR32Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR64Asm, MCK_FGR32Asm }, },
  { 3014 /* trunc.w.d */, Mips::TRUNC_W_D32, Convert__FGR32Asm1_0__AFGR64Asm1_1, Feature_NotFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_AFGR64Asm }, },
  { 3014 /* trunc.w.d */, Mips::TRUNC_W_D64, Convert__FGR32Asm1_0__FGR64Asm1_1, Feature_IsFP64bit|Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR64Asm }, },
  { 3024 /* trunc.w.s */, Mips::TRUNC_W_S, Convert__FGR32Asm1_0__FGR32Asm1_1, Feature_HasStdEnc, { MCK_FGR32Asm, MCK_FGR32Asm }, },
  { 3034 /* wrdsp */, Mips::WRDSP, Convert__GPR32Asm1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32Asm, MCK_Imm }, },
  { 3040 /* wsbh */, Mips::WSBH, Convert__GPR32Asm1_0__GPR32Asm1_1, Feature_HasSwap|Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 3045 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3045 /* xor */, Mips::XOR, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 3045 /* xor */, Mips::XOR_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__GPR32Asm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_GPR32Asm }, },
  { 3045 /* xor */, Mips::XORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, 0, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 3049 /* xori */, Mips::XORi, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 3049 /* xori */, Mips::XORi_MM, Convert__GPR32Asm1_0__GPR32Asm1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_Imm }, },
  { 3049 /* xori */, Mips::XORi, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
  { 3049 /* xori */, Mips::XORi_MM, Convert__GPR32Asm1_0__GPR32Asm1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32Asm, MCK_GPR32Asm, MCK_Imm }, },
};

bool MipsAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: // unreachable
  case 0: Start = MatchTable0; End = array_endof(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MipsAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 7) {
    ErrorInfo = 7;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand*)Operands[0])->getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  unsigned MissingFeatures = ~0U;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0U;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: // unreachable
  case 0: Start = MatchTable0; End = array_endof(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 6; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      unsigned NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (CountPopulation_32(NewMissingFeatures) <=
          CountPopulation_32(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint32_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[669] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 0 /* abs.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 0 /* abs.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 6 /* abs.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 12 /* absq_s.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 22 /* absq_s.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 32 /* absq_s.w */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 41 /* add */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 45 /* add.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 45 /* add.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 51 /* add.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 57 /* addi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 57 /* addi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 57 /* addi */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 57 /* addi */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 62 /* addiu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 62 /* addiu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 62 /* addiu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 62 /* addiu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 68 /* addq.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 76 /* addq_s.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 86 /* addq_s.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 95 /* addqh.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 104 /* addqh.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 112 /* addqh_r.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 123 /* addqh_r.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 133 /* addsc */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 139 /* addu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 139 /* addu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 139 /* addu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 144 /* addu.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 152 /* addu.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 160 /* addu_s.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 170 /* addu_s.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 180 /* adduh.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 189 /* adduh_r.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 200 /* addwc */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 206 /* and */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 206 /* and */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 206 /* and */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 210 /* andi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 210 /* andi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 210 /* andi */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 210 /* andi */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 215 /* append */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 228 /* balign */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 235 /* bc1f */, MCK_FCCRegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 240 /* bc1t */, MCK_FCCRegsAsm, 1 /* 0 */ },
  { Feature_HasStdEnc, 245 /* beq */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 249 /* beqz */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 254 /* bgez */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 259 /* bgezal */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 266 /* bgtz */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 271 /* bitrev */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 278 /* blez */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 283 /* bltz */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 288 /* bltzal */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 295 /* bne */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 299 /* bnez */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 331 /* c.eq.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 331 /* c.eq.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 338 /* c.eq.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 345 /* c.f.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 345 /* c.f.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 351 /* c.f.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 357 /* c.le.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 357 /* c.le.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 364 /* c.le.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 371 /* c.lt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 371 /* c.lt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 378 /* c.lt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 385 /* c.nge.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 385 /* c.nge.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 393 /* c.nge.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 401 /* c.ngl.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 401 /* c.ngl.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 409 /* c.ngl.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 417 /* c.ngle.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 417 /* c.ngle.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 426 /* c.ngle.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 435 /* c.ngt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 435 /* c.ngt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 443 /* c.ngt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 451 /* c.ole.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 451 /* c.ole.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 459 /* c.ole.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 467 /* c.olt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 467 /* c.olt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 475 /* c.olt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 483 /* c.seq.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 483 /* c.seq.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 491 /* c.seq.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 499 /* c.sf.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 499 /* c.sf.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 506 /* c.sf.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 513 /* c.ueq.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 513 /* c.ueq.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 521 /* c.ueq.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 529 /* c.ule.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 529 /* c.ule.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 537 /* c.ule.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 545 /* c.ult.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 545 /* c.ult.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 553 /* c.ult.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 561 /* c.un.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 561 /* c.un.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 568 /* c.un.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 575 /* ceil.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 584 /* ceil.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 584 /* ceil.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 593 /* ceil.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 602 /* ceil.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 611 /* cfc1 */, MCK_CCRAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 611 /* cfc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 616 /* clo */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 620 /* clz */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 628 /* cmp.eq.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 638 /* cmp.le.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 648 /* cmp.lt.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 658 /* cmpgdu.eq.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 671 /* cmpgdu.le.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 684 /* cmpgdu.lt.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 697 /* cmpgu.eq.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 709 /* cmpgu.le.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 721 /* cmpgu.lt.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 738 /* cmpu.eq.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 749 /* cmpu.le.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 760 /* cmpu.lt.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 771 /* ctc1 */, MCK_CCRAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 771 /* ctc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 776 /* cvt.d.l */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 784 /* cvt.d.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 792 /* cvt.d.w */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 800 /* cvt.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 808 /* cvt.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 808 /* cvt.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 816 /* cvt.s.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 824 /* cvt.s.l */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 824 /* cvt.s.l */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 832 /* cvt.s.w */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 840 /* cvt.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 848 /* cvt.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 856 /* dadd */, MCK_GPR64Asm, 7 /* 0, 1, 2 */ },
  { 0, 856 /* dadd */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 861 /* daddi */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 861 /* daddi */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 867 /* daddiu */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 867 /* daddiu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 874 /* daddu */, MCK_GPR64Asm, 7 /* 0, 1, 2 */ },
  { 0, 874 /* daddu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 880 /* dclo */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasBitCount|Feature_HasStdEnc, 885 /* dclz */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 890 /* ddiv */, MCK_GPR64Asm, 6 /* 1, 2 */ },
  { Feature_HasStdEnc, 895 /* ddivu */, MCK_GPR64Asm, 6 /* 1, 2 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 907 /* dext */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 912 /* dextm */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 918 /* dextu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 924 /* di */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 927 /* dins */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 932 /* dinsm */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 938 /* dinsu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 944 /* div */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 948 /* div.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 948 /* div.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 954 /* div.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 960 /* divu */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { 0, 965 /* dmfc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 965 /* dmfc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 971 /* dmfc1 */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 971 /* dmfc1 */, MCK_GPR64Asm, 1 /* 0 */ },
  { 0, 977 /* dmfc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 977 /* dmfc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { 0, 983 /* dmtc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 983 /* dmtc0 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 989 /* dmtc1 */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 989 /* dmtc1 */, MCK_GPR64Asm, 1 /* 0 */ },
  { 0, 995 /* dmtc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 995 /* dmtc2 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1001 /* dmult */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1007 /* dmultu */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 1014 /* dpa.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1014 /* dpa.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1023 /* dpaq_s.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1023 /* dpaq_s.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1035 /* dpaq_sa.l.w */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1035 /* dpaq_sa.l.w */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 1047 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1047 /* dpaqx_s.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 1060 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1060 /* dpaqx_sa.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1074 /* dpau.h.qbl */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1074 /* dpau.h.qbl */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1085 /* dpau.h.qbr */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1085 /* dpau.h.qbr */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 1096 /* dpax.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1096 /* dpax.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 1106 /* dps.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1106 /* dps.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1115 /* dpsq_s.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1115 /* dpsq_s.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1127 /* dpsq_sa.l.w */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1127 /* dpsq_sa.l.w */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 1139 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1139 /* dpsqx_s.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 1152 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1152 /* dpsqx_sa.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1166 /* dpsu.h.qbl */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1166 /* dpsu.h.qbl */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1177 /* dpsu.h.qbr */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1177 /* dpsu.h.qbr */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 1188 /* dpsx.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1188 /* dpsx.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 1198 /* drotr */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 1204 /* drotrv */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasMips64r2|Feature_HasStdEnc, 1204 /* drotrv */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 1211 /* dsbh */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 1216 /* dshd */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1221 /* dsll */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1226 /* dsll32 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1233 /* dsllv */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1233 /* dsllv */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1239 /* dsra */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1244 /* dsra32 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1251 /* dsrav */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1251 /* dsrav */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1257 /* dsrl */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1262 /* dsrl32 */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1269 /* dsrlv */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1269 /* dsrlv */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1275 /* dsubu */, MCK_GPR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1281 /* ei */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1289 /* ext */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1293 /* extp */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1293 /* extp */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1298 /* extpdp */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1298 /* extpdp */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1305 /* extpdpv */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1305 /* extpdpv */, MCK_GPR32Asm, 5 /* 0, 2 */ },
  { Feature_HasDSP, 1313 /* extpv */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1313 /* extpv */, MCK_GPR32Asm, 5 /* 0, 2 */ },
  { Feature_HasDSP, 1319 /* extr.w */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1319 /* extr.w */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1326 /* extr_r.w */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1326 /* extr_r.w */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1335 /* extr_rs.w */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1335 /* extr_rs.w */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1345 /* extr_s.h */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1345 /* extr_s.h */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1354 /* extrv.w */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1354 /* extrv.w */, MCK_GPR32Asm, 5 /* 0, 2 */ },
  { Feature_HasDSP, 1362 /* extrv_r.w */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1362 /* extrv_r.w */, MCK_GPR32Asm, 5 /* 0, 2 */ },
  { Feature_HasDSP, 1372 /* extrv_rs.w */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1372 /* extrv_rs.w */, MCK_GPR32Asm, 5 /* 0, 2 */ },
  { Feature_HasDSP, 1383 /* extrv_s.h */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1383 /* extrv_s.h */, MCK_GPR32Asm, 5 /* 0, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1393 /* floor.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1403 /* floor.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1403 /* floor.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1413 /* floor.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1413 /* floor.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1413 /* floor.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1413 /* floor.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1423 /* floor.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1433 /* ins */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1437 /* insv */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 1442 /* j */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1444 /* jal */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1444 /* jal */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { 0, 1448 /* jalr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1448 /* jalr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1459 /* jr */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1466 /* la */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1466 /* la */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1466 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1469 /* lb */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1469 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1469 /* lb */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1469 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1472 /* lbu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1472 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1472 /* lbu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1472 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP, 1476 /* lbux */, MCK_GPR32Asm, 11 /* 0, 1, 3 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1481 /* ld */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1481 /* ld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 1484 /* ld.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 1489 /* ld.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 1494 /* ld.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 1499 /* ld.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 1504 /* ldc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 1504 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 1504 /* ldc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 1504 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1509 /* ldl */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1509 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1513 /* ldr */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1513 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 1517 /* ldxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 1517 /* ldxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 1517 /* ldxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 1517 /* ldxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1523 /* lh */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1523 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1523 /* lh */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1523 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1526 /* lhu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1526 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1526 /* lhu */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1526 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP, 1530 /* lhx */, MCK_GPR32Asm, 11 /* 0, 1, 3 */ },
  { 0, 1534 /* li */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1537 /* ll */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1537 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1537 /* ll */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1537 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1540 /* lld */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1540 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 1544 /* lui */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1544 /* lui */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 1548 /* luxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 1548 /* luxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 1548 /* luxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 1548 /* luxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1554 /* lw */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1554 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1554 /* lw */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1554 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1557 /* lwc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1557 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1557 /* lwc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 1557 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1562 /* lwl */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1562 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 1562 /* lwl */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_InMicroMips, 1562 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1566 /* lwr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 1566 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 1566 /* lwr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_InMicroMips, 1566 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1570 /* lwu */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 1570 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP, 1574 /* lwx */, MCK_GPR32Asm, 11 /* 0, 1, 3 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 1578 /* lwxc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 1578 /* lwxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 1584 /* madd */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1584 /* madd */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1584 /* madd */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, 1589 /* madd.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1596 /* madd.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 1603 /* maddu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1603 /* maddu */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1603 /* maddu */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1609 /* maq_s.w.phl */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1609 /* maq_s.w.phl */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1621 /* maq_s.w.phr */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1621 /* maq_s.w.phr */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1633 /* maq_sa.w.phl */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1633 /* maq_sa.w.phl */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1646 /* maq_sa.w.phr */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1646 /* maq_sa.w.phr */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { 0, 1659 /* mfc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1659 /* mfc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1664 /* mfc1 */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1664 /* mfc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1669 /* mfc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1669 /* mfc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1674 /* mfhi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1674 /* mfhi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1674 /* mfhi */, MCK_HI32DSPAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1679 /* mflo */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1679 /* mflo */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1679 /* mflo */, MCK_LO32DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1684 /* modsub */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1691 /* mov.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1691 /* mov.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1697 /* mov.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotMips64, 1703 /* move */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips64, 1703 /* move */, MCK_GPR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1708 /* movf */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1708 /* movf */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1713 /* movf.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1713 /* movf.d */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1720 /* movf.s */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1720 /* movf.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1727 /* movn */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1732 /* movn.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1732 /* movn.d */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1739 /* movn.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1739 /* movn.s */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1746 /* movt */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1746 /* movt */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1751 /* movt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1751 /* movt.d */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1758 /* movt.s */, MCK_FCCRegsAsm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1758 /* movt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1765 /* movz */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1770 /* movz.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1770 /* movz.d */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1777 /* movz.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1777 /* movz.s */, MCK_GPR32Asm, 4 /* 2 */ },
  { Feature_HasStdEnc, 1784 /* msub */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1784 /* msub */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1784 /* msub */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_HasStdEnc, 1789 /* msub.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 1796 /* msub.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 1803 /* msubu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1803 /* msubu */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1803 /* msubu */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { 0, 1809 /* mtc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1809 /* mtc0 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1814 /* mtc1 */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1814 /* mtc1 */, MCK_GPR32Asm, 1 /* 0 */ },
  { 0, 1819 /* mtc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1819 /* mtc2 */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1824 /* mthi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1824 /* mthi */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1824 /* mthi */, MCK_HI32DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1829 /* mthlip */, MCK_ACC64DSPAsm, 2 /* 1 */ },
  { Feature_HasDSP, 1829 /* mthlip */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 1836 /* mtlo */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1836 /* mtlo */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 1836 /* mtlo */, MCK_LO32DSPAsm, 2 /* 1 */ },
  { Feature_HasStdEnc, 1841 /* mul */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1841 /* mul */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 1845 /* mul.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 1845 /* mul.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 1851 /* mul.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 1858 /* mul.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 1864 /* mul_s.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 1873 /* muleq_s.w.phl */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 1887 /* muleq_s.w.phr */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 1901 /* muleu_s.ph.qbl */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 1916 /* muleu_s.ph.qbr */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 1931 /* mulq_rs.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 1942 /* mulq_rs.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 1952 /* mulq_s.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 1962 /* mulq_s.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 1971 /* mulsa.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSPR2, 1971 /* mulsa.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasDSP, 1982 /* mulsaq_s.w.ph */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1982 /* mulsaq_s.w.ph */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasStdEnc, 1996 /* mult */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1996 /* mult */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1996 /* mult */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 1996 /* mult */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { Feature_HasStdEnc, 2001 /* multu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2001 /* multu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2001 /* multu */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 2001 /* multu */, MCK_GPR32Asm, 6 /* 1, 2 */ },
  { 0, 2007 /* neg */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 2011 /* neg.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 2011 /* neg.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_NoNaNsFPMath|Feature_HasStdEnc, 2017 /* neg.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { 0, 2023 /* negu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2028 /* nmadd.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2036 /* nmadd.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_NotFP64bit|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2044 /* nmsub.d */, MCK_AFGR64Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasMips32r2|Feature_NoNaNsFPMath|Feature_HasStdEnc, 2052 /* nmsub.s */, MCK_FGR32Asm, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc, 2064 /* nor */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2064 /* nor */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 2068 /* not */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2072 /* or */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2072 /* or */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 2072 /* or */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2075 /* ori */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 2075 /* ori */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 2075 /* ori */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2075 /* ori */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2079 /* packrl.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2089 /* pick.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2097 /* pick.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2105 /* preceq.w.phl */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2118 /* preceq.w.phr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2131 /* precequ.ph.qbl */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2146 /* precequ.ph.qbla */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2162 /* precequ.ph.qbr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2177 /* precequ.ph.qbra */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2193 /* preceu.ph.qbl */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2207 /* preceu.ph.qbla */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2222 /* preceu.ph.qbr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2236 /* preceu.ph.qbra */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 2251 /* precr.qb.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2263 /* precr_sra.ph.w */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 2278 /* precr_sra_r.ph.w */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2295 /* precrq.ph.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2307 /* precrq.qb.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2320 /* precrq_rs.ph.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2335 /* precrqu_s.qb.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2351 /* prepend */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2359 /* raddu.w.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2370 /* rddsp */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 2376 /* rdhwr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 2376 /* rdhwr */, MCK_HWRegsAsm, 2 /* 1 */ },
  { Feature_HasDSP, 2382 /* repl.ph */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 2390 /* repl.qb */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasDSP, 2398 /* replv.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2407 /* replv.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 2416 /* rotr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2416 /* rotr */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasMips32r2|Feature_HasStdEnc, 2421 /* rotrv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2421 /* rotrv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2427 /* round.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2437 /* round.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2437 /* round.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2447 /* round.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2447 /* round.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2447 /* round.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2447 /* round.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 2457 /* round.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2467 /* sb */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2467 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2467 /* sb */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2467 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2470 /* sc */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2470 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2470 /* sc */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2470 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2473 /* scd */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2473 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2477 /* sd */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2477 /* sd */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 2480 /* sdc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_NotMips64|Feature_HasStdEnc, 2480 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 2480 /* sdc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasMips64|Feature_HasStdEnc, 2480 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2485 /* sdl */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2485 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2489 /* sdr */, MCK_GPR64Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2489 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 2493 /* sdxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_HasMips32r2|Feature_NotMips64|Feature_HasStdEnc, 2493 /* sdxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 2493 /* sdxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_NotN64|Feature_HasStdEnc, 2493 /* sdxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasSEInReg|Feature_HasStdEnc, 2499 /* seb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasSEInReg|Feature_HasStdEnc, 2503 /* seh */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2507 /* sh */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2507 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2507 /* sh */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2507 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP, 2510 /* shilo */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 2516 /* shilov */, MCK_ACC64DSPAsm, 1 /* 0 */ },
  { Feature_HasDSP, 2516 /* shilov */, MCK_GPR32Asm, 2 /* 1 */ },
  { Feature_HasDSP, 2523 /* shll.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2531 /* shll.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2539 /* shll_s.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2549 /* shll_s.w */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2558 /* shllv.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2567 /* shllv.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2576 /* shllv_s.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2587 /* shllv_s.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2597 /* shra.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 2605 /* shra.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2613 /* shra_r.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 2623 /* shra_r.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2633 /* shra_r.w */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2642 /* shrav.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2651 /* shrav.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2660 /* shrav_r.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2671 /* shrav_r.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2682 /* shrav_r.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2692 /* shrl.ph */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2700 /* shrl.qb */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 2708 /* shrlv.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2717 /* shrlv.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2726 /* sll */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2726 /* sll */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2730 /* sllv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2730 /* sllv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2735 /* slt */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2735 /* slt */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 2735 /* slt */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2739 /* slti */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2739 /* slti */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2744 /* sltiu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2744 /* sltiu */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2750 /* sltu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2750 /* sltu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2755 /* sqrt.d */, MCK_AFGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2755 /* sqrt.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2762 /* sqrt.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2769 /* sra */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2769 /* sra */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2773 /* srav */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2773 /* srav */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2778 /* srl */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2778 /* srl */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 2782 /* srlv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2782 /* srlv */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasMSA, 2787 /* st.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 2792 /* st.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 2797 /* st.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasMSA, 2802 /* st.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 2807 /* sub */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2807 /* sub */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 2811 /* sub.d */, MCK_AFGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2811 /* sub.d */, MCK_FGR64Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2817 /* sub.s */, MCK_FGR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2823 /* subq.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2831 /* subq_s.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2841 /* subq_s.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2850 /* subqh.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2859 /* subqh.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2867 /* subqh_r.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2878 /* subqh_r.w */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2888 /* subu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 2888 /* subu */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2893 /* subu.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2901 /* subu.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2909 /* subu_s.ph */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2919 /* subu_s.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2929 /* subuh.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2938 /* subuh_r.qb */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 2949 /* suxc1 */, MCK_AFGR64Asm, 1 /* 0 */ },
  { Feature_NotMips64|Feature_HasStdEnc, 2949 /* suxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 2949 /* suxc1 */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_HasMips64|Feature_HasStdEnc, 2949 /* suxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2955 /* sw */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2955 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2955 /* sw */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2955 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2958 /* swc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc, 2958 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2958 /* swc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsN64|Feature_HasStdEnc, 2958 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2963 /* swl */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2963 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 2963 /* swl */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_InMicroMips, 2963 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2967 /* swr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_NotN64|Feature_HasStdEnc|Feature_NotInMicroMips, 2967 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 2967 /* swr */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_InMicroMips, 2967 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 2971 /* swxc1 */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_HasFPIdx|Feature_HasStdEnc, 2971 /* swxc1 */, MCK_GPR32Asm, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 2990 /* teq */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 2994 /* trunc.l.d */, MCK_FGR64Asm, 3 /* 0, 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3004 /* trunc.l.s */, MCK_FGR32Asm, 2 /* 1 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3004 /* trunc.l.s */, MCK_FGR64Asm, 1 /* 0 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 3014 /* trunc.w.d */, MCK_AFGR64Asm, 2 /* 1 */ },
  { Feature_NotFP64bit|Feature_HasStdEnc, 3014 /* trunc.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3014 /* trunc.w.d */, MCK_FGR32Asm, 1 /* 0 */ },
  { Feature_IsFP64bit|Feature_HasStdEnc, 3014 /* trunc.w.d */, MCK_FGR64Asm, 2 /* 1 */ },
  { Feature_HasStdEnc, 3024 /* trunc.w.s */, MCK_FGR32Asm, 3 /* 0, 1 */ },
  { Feature_HasDSP, 3034 /* wrdsp */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasSwap|Feature_HasStdEnc, 3040 /* wsbh */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 3045 /* xor */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 3045 /* xor */, MCK_GPR32Asm, 7 /* 0, 1, 2 */ },
  { 0, 3045 /* xor */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 3049 /* xori */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 3049 /* xori */, MCK_GPR32Asm, 1 /* 0 */ },
  { Feature_HasStdEnc, 3049 /* xori */, MCK_GPR32Asm, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 3049 /* xori */, MCK_GPR32Asm, 3 /* 0, 1 */ },
};

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ACC64DSPAsm:
    return parseACC64DSP(Operands);
  case MCK_AFGR64Asm:
    return parseAFGR64Regs(Operands);
  case MCK_CCRAsm:
    return parseCCRRegs(Operands);
  case MCK_FCCRegsAsm:
    return parseFCCRegs(Operands);
  case MCK_FGR32Asm:
    return parseFGR32Regs(Operands);
  case MCK_FGR64Asm:
    return parseFGR64Regs(Operands);
  case MCK_GPR32Asm:
    return parseGPR32(Operands);
  case MCK_GPR64Asm:
    return parseGPR64(Operands);
  case MCK_HI32DSPAsm:
    return parseHI32DSP(Operands);
  case MCK_HWRegsAsm:
    return parseHWRegs(Operands);
  case MCK_LO32DSPAsm:
    return parseLO32DSP(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+669, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

