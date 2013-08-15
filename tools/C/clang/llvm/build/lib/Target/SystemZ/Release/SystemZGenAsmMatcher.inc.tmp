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
  Feature_FeatureDistinctOps = (1 << 0),
  Feature_FeatureLoadStoreOnCond = (1 << 2),
  Feature_FeatureHighWord = (1 << 1),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(unsigned Val) {
  switch(Val) {
  case Feature_FeatureDistinctOps: return "distinct-ops";
  case Feature_FeatureLoadStoreOnCond: return "load-store-on-cond";
  case Feature_FeatureHighWord: return "high-word";
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
  CVT_95_addRegOperands,
  CVT_95_addBDXAddrOperands,
  CVT_95_addImmOperands,
  CVT_95_addBDAddrOperands,
  CVT_95_addBDLAddrOperands,
  CVT_95_addAccessRegOperands,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__GR321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP641_0__Tie0__FP641_1,
  Convert__FP321_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP321_0__Tie0__FP321_1,
  Convert__GR321_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR641_0__Tie0__S32Imm1_1,
  Convert__GR641_0__Tie0__GR321_1,
  Convert__GR641_0__Tie0__S16Imm1_1,
  Convert__GR641_0__GR641_1__S16Imm1_2,
  Convert__GR641_0__Tie0__GR641_1,
  Convert__GR641_0__GR641_1__GR641_2,
  Convert__BDAddr64Disp202_0__S8Imm1_1,
  Convert__GR321_0__Tie0__S16Imm1_1,
  Convert__GR321_0__GR321_1__S16Imm1_2,
  Convert__GR321_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR321_0__Tie0__GR321_1,
  Convert__GR321_0__Tie0__U32Imm1_1,
  Convert__GR641_0__Tie0__U32Imm1_1,
  Convert__GR321_0__GR321_1__GR321_2,
  Convert__FP1281_0__Tie0__FP1281_1,
  Convert__GR641_0__ADDR641_1,
  Convert__ADDR641_0,
  Convert__GR641_0__PCRel161_1,
  Convert__GR641_0__PCRel321_1,
  Convert__U4Imm1_0__PCRel161_1,
  Convert__U4Imm1_0__PCRel321_1,
  Convert__GR321_0__Tie0__PCRel161_1,
  Convert__GR641_0__Tie0__PCRel161_1,
  Convert__GR321_0__BDXAddr64Disp123_1,
  Convert__FP641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP641_1,
  Convert__FP641_0__GR321_1,
  Convert__FP641_0__GR641_1,
  Convert__FP321_0__BDXAddr64Disp123_1,
  Convert__FP321_0__FP321_1,
  Convert__FP321_0__GR321_1,
  Convert__FP321_0__GR641_1,
  Convert__GR321_0__U4Imm1_1__FP641_2,
  Convert__GR321_0__U4Imm1_1__FP321_2,
  Convert__GR321_0__S32Imm1_1,
  Convert__GR321_0__U4Imm1_1__FP1281_2,
  Convert__GR641_0__BDXAddr64Disp203_1,
  Convert__GR641_0__U4Imm1_1__FP641_2,
  Convert__GR641_0__U4Imm1_1__FP321_2,
  Convert__GR641_0__S32Imm1_1,
  Convert__GR641_0__GR321_1,
  Convert__GR641_0__S16Imm1_1,
  Convert__BDAddr64Disp122_0__S16Imm1_1,
  Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__S8Imm1_1__PCRel161_2,
  Convert__GR641_0__GR641_1,
  Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3,
  Convert__GR641_0__GR641_1__PCRel161_2,
  Convert__GR641_0__U4Imm1_1__FP1281_2,
  Convert__GR321_0__S16Imm1_1,
  Convert__GR321_0__PCRel321_1,
  Convert__GR321_0__BDXAddr64Disp203_1,
  Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__S8Imm1_1__PCRel161_2,
  Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1,
  Convert__BDAddr64Disp122_0__U16Imm1_1,
  Convert__GR321_0__U32Imm1_1,
  Convert__GR641_0__U32Imm1_1,
  Convert__BDAddr64Disp122_0__U8Imm1_1,
  Convert__BDAddr64Disp202_0__U8Imm1_1,
  Convert__GR321_0__GR321_1,
  Convert__FP641_0__FP641_1__FP641_2,
  Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3,
  Convert__GR321_0__GR321_1__PCRel161_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2,
  Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2,
  Convert__FP1281_0__FP1281_1,
  Convert__FP1281_0__GR321_1,
  Convert__FP1281_0__GR641_1,
  Convert__GR1281_0__Tie0__BDXAddr64Disp203_1,
  Convert__GR1281_0__Tie0__GR641_1,
  Convert__GR1281_0__Tie0__GR321_1,
  Convert__GR321_0__AccessReg1_1,
  Convert__FP641_0__U4Imm1_1__FP641_2,
  Convert__FP321_0__U4Imm1_1__FP321_2,
  Convert__FP1281_0__U4Imm1_1__FP1281_2,
  Convert__GR1281_0__GR641_1,
  Convert__GR641_0__Tie0__BDXAddr64Disp123_1,
  Convert__GR641_0__Tie0__U16Imm1_1,
  Convert__GR321_0,
  Convert__PCRel161_0,
  Convert__PCRel321_0,
  Convert__GR641_0__BDXAddr64Disp123_1,
  Convert__FP641_0__FP321_1,
  Convert__FP641_0__BDXAddr64Disp203_1,
  Convert__FP321_0__FP641_1,
  Convert__FP321_0__BDXAddr64Disp203_1,
  Convert__GR641_0__FP641_1,
  Convert__GR641_0__U16Imm1_1,
  Convert__GR641_0__GR641_1__BDAddr64Disp202_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__Tie0__BDAddr64Disp202_1,
  Convert__GR641_0__Tie0__GR641_1__U4Imm1_2,
  Convert__GR321_0__Tie0__GR321_1__U4Imm1_2,
  Convert__FP1281_0__BDXAddr64Disp123_1,
  Convert__FP1281_0__FP641_1,
  Convert__FP1281_0__FP321_1,
  Convert__FP641_0,
  Convert__FP321_0,
  Convert__FP1281_0,
  Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2,
  Convert__FP641_0__Tie0__FP641_1__FP641_2,
  Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2,
  Convert__FP321_0__Tie0__FP321_1__FP321_2,
  Convert__FP641_0__Tie0__FP321_1,
  Convert__FP1281_0__Tie0__BDXAddr64Disp123_1,
  Convert__FP1281_0__Tie0__FP641_1,
  Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4,
  Convert__GR321_0__GR321_1__BDAddr32Disp202_2,
  Convert__GR641_0__GR641_1__BDAddr32Disp202_2,
  Convert__GR321_0__Tie0__BDAddr32Disp122_1,
  Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR321_0__BDAddr64Disp202_1,
  Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2,
  Convert__GR641_0__BDAddr64Disp202_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][13] = {
  // Convert__GR321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__GR641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__BDAddr64Disp202_0__S8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__S16Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1__GR321_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__Tie0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__ADDR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__ADDR641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__GR641_0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel161_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__U4Imm1_0__PCRel321_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__PCRel161_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR641_0__S32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__S16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR641_0__GR641_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__S16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__PCRel321_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__S8Imm1_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1
  { CVT_95_addBDLAddrOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U16Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__U32Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp122_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__BDAddr64Disp202_0__U8Imm1_1
  { CVT_95_addBDAddrOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GR321_0__GR321_1__PCRel161_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__FP1281_0__FP1281_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR1281_0__Tie0__GR321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR321_0__AccessReg1_1
  { CVT_95_addRegOperands, 1, CVT_95_addAccessRegOperands, 2, CVT_Done },
  // Convert__FP641_0__U4Imm1_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__U4Imm1_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP1281_0__U4Imm1_1__FP1281_2
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__GR1281_0__GR641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__PCRel161_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__PCRel321_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GR641_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP641_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP321_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP321_0__BDXAddr64Disp203_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__U16Imm1_1
  { CVT_95_addRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr64Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__Tie0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__GR321_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FP1281_0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP641_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP321_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP1281_0
  { CVT_95_addRegOperands, 1, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP641_1__FP641_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addBDXAddrOperands, 3, CVT_Done },
  // Convert__FP321_0__Tie0__FP321_1__FP321_2
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addRegOperands, 3, CVT_Done },
  // Convert__FP641_0__Tie0__FP321_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__BDXAddr64Disp123_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDXAddrOperands, 2, CVT_Done },
  // Convert__FP1281_0__Tie0__FP641_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_Done },
  // Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addRegOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__GR321_0__GR321_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR641_0__GR641_1__BDAddr32Disp202_2
  { CVT_95_addRegOperands, 1, CVT_95_addRegOperands, 2, CVT_95_addBDAddrOperands, 3, CVT_Done },
  // Convert__GR321_0__Tie0__BDAddr32Disp122_1
  { CVT_95_addRegOperands, 1, CVT_Tied, 0, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR321_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GR641_0__BDAddr64Disp202_1
  { CVT_95_addRegOperands, 1, CVT_95_addBDAddrOperands, 2, CVT_Done },
};

void SystemZAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const SmallVectorImpl<MCParsedAsmOperand*> &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addRegOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addRegOperands(Inst, 1);
      break;
    case CVT_95_addBDXAddrOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addBDXAddrOperands(Inst, 3);
      break;
    case CVT_95_addImmOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addImmOperands(Inst, 1);
      break;
    case CVT_95_addBDAddrOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addBDAddrOperands(Inst, 2);
      break;
    case CVT_95_addBDLAddrOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addBDLAddrOperands(Inst, 3);
      break;
    case CVT_95_addAccessRegOperands:
      static_cast<SystemZOperand*>(Operands[*(p + 1)])->addAccessRegOperands(Inst, 1);
      break;
    }
  }
}

void SystemZAsmParser::
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
    case CVT_95_addRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDXAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBDAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addBDLAddrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 3;
      break;
    case CVT_95_addAccessRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK_GR128Bit, // register class 'GR128Bit'
  MCK_ADDR64Bit, // register class 'ADDR64Bit'
  MCK_GR64Bit, // register class 'GR64Bit'
  MCK_ADDR32Bit, // register class 'ADDR32Bit'
  MCK_GR32Bit, // register class 'GR32Bit'
  MCK_FP64Bit, // register class 'FP64Bit'
  MCK_ADDR128Bit, // register class 'ADDR128Bit'
  MCK_FP32Bit, // register class 'FP32Bit'
  MCK_FP128Bit, // register class 'FP128Bit'
  MCK_CCRegs, // register class 'CCRegs'
  MCK_ADDR128, // user defined class 'ADDR128AsmOperand'
  MCK_ADDR32, // user defined class 'ADDR32AsmOperand'
  MCK_ADDR64, // user defined class 'ADDR64AsmOperand'
  MCK_AccessReg, // user defined class 'AccessReg'
  MCK_BDAddr32Disp12, // user defined class 'BDAddr32Disp12'
  MCK_BDAddr32Disp20, // user defined class 'BDAddr32Disp20'
  MCK_BDAddr64Disp12, // user defined class 'BDAddr64Disp12'
  MCK_BDAddr64Disp20, // user defined class 'BDAddr64Disp20'
  MCK_BDLAddr64Disp12Len8, // user defined class 'BDLAddr64Disp12Len8'
  MCK_BDXAddr64Disp12, // user defined class 'BDXAddr64Disp12'
  MCK_BDXAddr64Disp20, // user defined class 'BDXAddr64Disp20'
  MCK_FP128, // user defined class 'FP128AsmOperand'
  MCK_FP32, // user defined class 'FP32AsmOperand'
  MCK_FP64, // user defined class 'FP64AsmOperand'
  MCK_GR128, // user defined class 'GR128AsmOperand'
  MCK_GR32, // user defined class 'GR32AsmOperand'
  MCK_GR64, // user defined class 'GR64AsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_PCRel16, // user defined class 'PCRel16'
  MCK_PCRel32, // user defined class 'PCRel32'
  MCK_S16Imm, // user defined class 'S16Imm'
  MCK_S32Imm, // user defined class 'S32Imm'
  MCK_S8Imm, // user defined class 'S8Imm'
  MCK_U16Imm, // user defined class 'U16Imm'
  MCK_U32Imm, // user defined class 'U32Imm'
  MCK_U4Imm, // user defined class 'U4Imm'
  MCK_U6Imm, // user defined class 'U6Imm'
  MCK_U8Imm, // user defined class 'U8Imm'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ADDR64Bit:
    return B == MCK_GR64Bit;

  case MCK_ADDR32Bit:
    return B == MCK_GR32Bit;

  case MCK_ADDR128Bit:
    return B == MCK_GR128Bit;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand *GOp, MatchClassKind Kind) {
  SystemZOperand &Operand = *(SystemZOperand*)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ADDR128' class
  if (Kind == MCK_ADDR128) {
    if (Operand.isADDR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR32' class
  if (Kind == MCK_ADDR32) {
    if (Operand.isADDR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ADDR64' class
  if (Kind == MCK_ADDR64) {
    if (Operand.isADDR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AccessReg' class
  if (Kind == MCK_AccessReg) {
    if (Operand.isAccessReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp12' class
  if (Kind == MCK_BDAddr32Disp12) {
    if (Operand.isBDAddr32Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr32Disp20' class
  if (Kind == MCK_BDAddr32Disp20) {
    if (Operand.isBDAddr32Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp12' class
  if (Kind == MCK_BDAddr64Disp12) {
    if (Operand.isBDAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDAddr64Disp20' class
  if (Kind == MCK_BDAddr64Disp20) {
    if (Operand.isBDAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDLAddr64Disp12Len8' class
  if (Kind == MCK_BDLAddr64Disp12Len8) {
    if (Operand.isBDLAddr64Disp12Len8())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp12' class
  if (Kind == MCK_BDXAddr64Disp12) {
    if (Operand.isBDXAddr64Disp12())
      return MCTargetAsmParser::Match_Success;
  }

  // 'BDXAddr64Disp20' class
  if (Kind == MCK_BDXAddr64Disp20) {
    if (Operand.isBDXAddr64Disp20())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP128' class
  if (Kind == MCK_FP128) {
    if (Operand.isFP128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP32' class
  if (Kind == MCK_FP32) {
    if (Operand.isFP32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FP64' class
  if (Kind == MCK_FP64) {
    if (Operand.isFP64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR128' class
  if (Kind == MCK_GR128) {
    if (Operand.isGR128())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR32' class
  if (Kind == MCK_GR32) {
    if (Operand.isGR32())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GR64' class
  if (Kind == MCK_GR64) {
    if (Operand.isGR64())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel16' class
  if (Kind == MCK_PCRel16) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'PCRel32' class
  if (Kind == MCK_PCRel32) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S16Imm' class
  if (Kind == MCK_S16Imm) {
    if (Operand.isS16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S32Imm' class
  if (Kind == MCK_S32Imm) {
    if (Operand.isS32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'S8Imm' class
  if (Kind == MCK_S8Imm) {
    if (Operand.isS8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U16Imm' class
  if (Kind == MCK_U16Imm) {
    if (Operand.isU16Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U32Imm' class
  if (Kind == MCK_U32Imm) {
    if (Operand.isU32Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U4Imm' class
  if (Kind == MCK_U4Imm) {
    if (Operand.isU4Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U6Imm' class
  if (Kind == MCK_U6Imm) {
    if (Operand.isU6Imm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'U8Imm' class
  if (Kind == MCK_U8Imm) {
    if (Operand.isU8Imm())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case SystemZ::R0W: OpKind = MCK_GR32Bit; break;
    case SystemZ::R1W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R2W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R3W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R4W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R5W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R6W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R7W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R8W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R9W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R10W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R11W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R12W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R13W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R14W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R15W: OpKind = MCK_ADDR32Bit; break;
    case SystemZ::R0D: OpKind = MCK_GR64Bit; break;
    case SystemZ::R1D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R2D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R3D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R4D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R5D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R6D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R7D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R8D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R9D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R10D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R11D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R12D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R13D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R14D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R15D: OpKind = MCK_ADDR64Bit; break;
    case SystemZ::R0Q: OpKind = MCK_GR128Bit; break;
    case SystemZ::R2Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R4Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R6Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R8Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R10Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R12Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::R14Q: OpKind = MCK_ADDR128Bit; break;
    case SystemZ::F0S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F1S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F2S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F3S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F4S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F5S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F6S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F7S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F8S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F9S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F10S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F11S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F12S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F13S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F14S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F15S: OpKind = MCK_FP32Bit; break;
    case SystemZ::F0D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F1D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F2D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F3D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F4D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F5D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F6D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F7D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F8D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F9D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F10D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F11D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F12D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F13D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F14D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F15D: OpKind = MCK_FP64Bit; break;
    case SystemZ::F0Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F1Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F4Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F5Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F8Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F9Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F12Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::F13Q: OpKind = MCK_FP128Bit; break;
    case SystemZ::CC: OpKind = MCK_CCRegs; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

unsigned SystemZAsmParser::
ComputeAvailableFeatures(uint64_t FB) const {
  unsigned Features = 0;
  if (((FB & SystemZ::FeatureDistinctOps) != 0))
    Features |= Feature_FeatureDistinctOps;
  if (((FB & SystemZ::FeatureLoadStoreOnCond) != 0))
    Features |= Feature_FeatureLoadStoreOnCond;
  if (((FB & SystemZ::FeatureHighWord) != 0))
    Features |= Feature_FeatureHighWord;
  return Features;
}

static const char *const MnemonicTable =
    "\001a\003adb\004adbr\003aeb\004aebr\003afi\002ag\003agf\004agfi\004agfr"
    "\004aghi\005aghik\003agr\004agrk\004agsi\002ah\003ahi\004ahik\003ahy\002"
    "al\003alc\004alcg\005alcgr\004alcr\004alfi\003alg\004algf\005algfi\005a"
    "lgfr\007alghsik\004algr\005algrk\006alhsik\003alr\004alrk\003aly\002ar\003"
    "ark\003asi\004axbr\002ay\004basr\002br\004bras\005brasl\003brc\004brcl\004"
    "brct\005brctg\001c\003cdb\004cdbr\005cdfbr\005cdgbr\003ceb\004cebr\005c"
    "efbr\005cegbr\005cfdbr\005cfebr\003cfi\005cfxbr\002cg\005cgdbr\005cgebr"
    "\003cgf\004cgfi\004cgfr\005cgfrl\003cgh\004cghi\005cghrl\005cghsi\004cg"
    "ij\005cgije\005cgijh\006cgijhe\005cgijl\006cgijle\006cgijlh\006cgijne\006"
    "cgijnh\007cgijnhe\006cgijnl\007cgijnle\007cgijnlh\003cgr\004cgrj\005cgr"
    "je\005cgrjh\006cgrjhe\005cgrjl\006cgrjle\006cgrjlh\006cgrjne\006cgrjnh\007"
    "cgrjnhe\006cgrjnl\007cgrjnle\007cgrjnlh\004cgrl\005cgxbr\002ch\005chhsi"
    "\003chi\004chrl\004chsi\003chy\003cij\004cije\004cijh\005cijhe\004cijl\005"
    "cijle\005cijlh\005cijne\005cijnh\006cijnhe\005cijnl\006cijnle\006cijnlh"
    "\002cl\003clc\006clfhsi\004clfi\003clg\004clgf\005clgfi\005clgfr\006clg"
    "frl\006clghrl\006clghsi\004clgr\005clgrl\006clhhsi\005clhrl\003cli\004c"
    "liy\003clr\004clrl\003cly\005cpsdr\002cr\003crj\004crje\004crjh\005crjh"
    "e\004crjl\005crjle\005crjlh\005crjne\005crjnh\006crjnhe\005crjnl\006crj"
    "nle\006crjnlh\003crl\002cs\003csg\003csy\004cxbr\005cxfbr\005cxgbr\002c"
    "y\003ddb\004ddbr\003deb\004debr\002dl\003dlg\004dlgr\003dlr\003dsg\004d"
    "sgf\005dsgfr\004dsgr\004dxbr\003ear\005fidbr\005fiebr\005fixbr\005flogr"
    "\002ic\003icy\004iihf\004iihh\004iihl\004iilf\004iilh\004iill\003ipm\001"
    "j\002je\002jg\003jge\003jgh\004jghe\003jgl\004jgle\004jglh\004jgne\004j"
    "gnh\005jgnhe\004jgnl\005jgnle\005jgnlh\004jgno\003jgo\002jh\003jhe\002j"
    "l\003jle\003jlh\003jne\003jnh\004jnhe\003jnl\004jnle\004jnlh\003jno\002"
    "jo\001l\002la\004larl\003lay\002lb\003lbr\005lcdbr\005lcebr\005lcgfr\004"
    "lcgr\003lcr\005lcxbr\002ld\004ldeb\005ldebr\004ldgr\003ldr\005ldxbr\003"
    "ldy\002le\005ledbr\003ler\005lexbr\003ley\002lg\003lgb\004lgbr\004lgdr\003"
    "lgf\004lgfi\004lgfr\005lgfrl\003lgh\004lghi\004lghr\005lghrl\003lgr\004"
    "lgrl\002lh\003lhi\003lhr\004lhrl\003lhy\003llc\004llcr\004llgc\005llgcr"
    "\004llgf\005llgfr\006llgfrl\004llgh\005llghr\006llghrl\003llh\004llhr\005"
    "llhrl\005llihf\005llihh\005llihl\005llilf\005llilh\005llill\003lmg\005l"
    "ndbr\005lnebr\005lnxbr\003loc\004loce\004locg\005locge\005locgh\006locg"
    "he\005locgl\006locgle\006locglh\006locgne\006locgnh\007locgnhe\006locgn"
    "l\007locgnle\007locgnlh\006locgno\005locgo\005locgr\006locgre\006locgrh"
    "\007locgrhe\006locgrl\007locgrle\007locgrlh\007locgrne\007locgrnh\010lo"
    "cgrnhe\007locgrnl\010locgrnle\010locgrnlh\007locgrno\006locgro\004loch\005"
    "loche\004locl\005locle\005loclh\005locne\005locnh\006locnhe\005locnl\006"
    "locnle\006locnlh\005locno\004loco\004locr\005locre\005locrh\006locrhe\005"
    "locrl\006locrle\006locrlh\006locrne\006locrnh\007locrnhe\006locrnl\007l"
    "ocrnle\007locrnlh\006locrno\005locro\005lpdbr\005lpebr\005lpxbr\002lr\003"
    "lrl\003lrv\004lrvg\005lrvgr\004lrvr\002lt\005ltdbr\005ltebr\003ltg\004l"
    "tgf\005ltgfr\004ltgr\003ltr\005ltxbr\004lxdb\005lxdbr\004lxeb\005lxebr\003"
    "lxr\002ly\004lzdr\004lzer\004lzxr\004madb\005madbr\004maeb\005maebr\003"
    "mdb\004mdbr\004mdeb\005mdebr\004meeb\005meebr\004mghi\002mh\003mhi\003m"
    "hy\003mlg\004mlgr\002ms\004msdb\005msdbr\004mseb\005msebr\004msfi\003ms"
    "g\004msgf\005msgfi\005msgfr\004msgr\003msr\003msy\003mvc\005mvghi\005mv"
    "hhi\004mvhi\003mvi\004mviy\004mxbr\004mxdb\005mxdbr\001n\002ng\003ngr\004"
    "ngrk\002ni\004nihf\004nihh\004nihl\004nilf\004nilh\004nill\003niy\002nr"
    "\003nrk\002ny\001o\002og\003ogr\004ogrk\002oi\004oihf\004oihh\004oihl\004"
    "oilf\004oilh\004oill\003oiy\002or\003ork\002oy\005risbg\006risbhg\006ri"
    "sblg\003rll\004rllg\005rnsbg\005rosbg\005rxsbg\001s\003sdb\004sdbr\003s"
    "eb\004sebr\002sg\003sgf\004sgfr\003sgr\004sgrk\002sh\003shy\002sl\003sl"
    "b\004slbg\005slbgr\004slbr\004slfi\003slg\004slgf\005slgfi\005slgfr\004"
    "slgr\005slgrk\003sll\004sllg\004sllk\003slr\004slrk\003sly\004sqdb\005s"
    "qdbr\004sqeb\005sqebr\005sqxbr\002sr\003sra\004srag\004srak\003srk\003s"
    "rl\004srlg\004srlk\002st\003stc\004stcy\003std\004stdy\003ste\004stey\003"
    "stg\005stgrl\003sth\005sthrl\004sthy\004stmg\004stoc\005stoce\005stocg\006"
    "stocge\006stocgh\007stocghe\006stocgl\007stocgle\007stocglh\007stocgne\007"
    "stocgnh\010stocgnhe\007stocgnl\010stocgnle\010stocgnlh\007stocgno\006st"
    "ocgo\005stoch\006stoche\005stocl\006stocle\006stoclh\006stocne\006stocn"
    "h\007stocnhe\006stocnl\007stocnle\007stocnlh\006stocno\005stoco\004strl"
    "\004strv\005strvg\003sty\004sxbr\002sy\001x\002xg\003xgr\004xgrk\002xi\004"
    "xihf\004xilf\003xiy\002xr\003xrk\002xy";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[5];
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
  { 0 /* a */, SystemZ::A, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2 /* adb */, SystemZ::ADB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 6 /* adbr */, SystemZ::ADBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 11 /* aeb */, SystemZ::AEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 15 /* aebr */, SystemZ::AEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 20 /* afi */, SystemZ::AFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 24 /* ag */, SystemZ::AG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 27 /* agf */, SystemZ::AGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 31 /* agfi */, SystemZ::AGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 36 /* agfr */, SystemZ::AGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 41 /* aghi */, SystemZ::AGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 46 /* aghik */, SystemZ::AGHIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 52 /* agr */, SystemZ::AGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 56 /* agrk */, SystemZ::AGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 61 /* agsi */, SystemZ::AGSI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 66 /* ah */, SystemZ::AH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 69 /* ahi */, SystemZ::AHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 73 /* ahik */, SystemZ::AHIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 78 /* ahy */, SystemZ::AHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 82 /* al */, SystemZ::AL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 85 /* alc */, SystemZ::ALC, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 89 /* alcg */, SystemZ::ALCG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 94 /* alcgr */, SystemZ::ALCGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 100 /* alcr */, SystemZ::ALCR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 105 /* alfi */, SystemZ::ALFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 110 /* alg */, SystemZ::ALG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 114 /* algf */, SystemZ::ALGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 119 /* algfi */, SystemZ::ALGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 125 /* algfr */, SystemZ::ALGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 131 /* alghsik */, SystemZ::ALGHSIK, Convert__GR641_0__GR641_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_S16Imm }, },
  { 139 /* algr */, SystemZ::ALGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 144 /* algrk */, SystemZ::ALGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 150 /* alhsik */, SystemZ::ALHSIK, Convert__GR321_0__GR321_1__S16Imm1_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_S16Imm }, },
  { 157 /* alr */, SystemZ::ALR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 161 /* alrk */, SystemZ::ALRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 166 /* aly */, SystemZ::ALY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 170 /* ar */, SystemZ::AR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 173 /* ark */, SystemZ::ARK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 177 /* asi */, SystemZ::ASI, Convert__BDAddr64Disp202_0__S8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_S8Imm }, },
  { 181 /* axbr */, SystemZ::AXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 186 /* ay */, SystemZ::AY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 189 /* basr */, SystemZ::AsmBASR, Convert__GR641_0__ADDR641_1, 0, { MCK_GR64, MCK_ADDR64 }, },
  { 194 /* br */, SystemZ::BR, Convert__ADDR641_0, 0, { MCK_ADDR64 }, },
  { 197 /* bras */, SystemZ::AsmBRAS, Convert__GR641_0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 202 /* brasl */, SystemZ::AsmBRASL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 208 /* brc */, SystemZ::AsmBRC, Convert__U4Imm1_0__PCRel161_1, 0, { MCK_U4Imm, MCK_PCRel16 }, },
  { 212 /* brcl */, SystemZ::AsmBRCL, Convert__U4Imm1_0__PCRel321_1, 0, { MCK_U4Imm, MCK_PCRel32 }, },
  { 217 /* brct */, SystemZ::BRCT, Convert__GR321_0__Tie0__PCRel161_1, 0, { MCK_GR32, MCK_PCRel16 }, },
  { 222 /* brctg */, SystemZ::BRCTG, Convert__GR641_0__Tie0__PCRel161_1, 0, { MCK_GR64, MCK_PCRel16 }, },
  { 228 /* c */, SystemZ::C, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 230 /* cdb */, SystemZ::CDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 234 /* cdbr */, SystemZ::CDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 239 /* cdfbr */, SystemZ::CDFBR, Convert__FP641_0__GR321_1, 0, { MCK_FP64, MCK_GR32 }, },
  { 245 /* cdgbr */, SystemZ::CDGBR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 251 /* ceb */, SystemZ::CEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 255 /* cebr */, SystemZ::CEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 260 /* cefbr */, SystemZ::CEFBR, Convert__FP321_0__GR321_1, 0, { MCK_FP32, MCK_GR32 }, },
  { 266 /* cegbr */, SystemZ::CEGBR, Convert__FP321_0__GR641_1, 0, { MCK_FP32, MCK_GR64 }, },
  { 272 /* cfdbr */, SystemZ::CFDBR, Convert__GR321_0__U4Imm1_1__FP641_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP64 }, },
  { 278 /* cfebr */, SystemZ::CFEBR, Convert__GR321_0__U4Imm1_1__FP321_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP32 }, },
  { 284 /* cfi */, SystemZ::CFI, Convert__GR321_0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 288 /* cfxbr */, SystemZ::CFXBR, Convert__GR321_0__U4Imm1_1__FP1281_2, 0, { MCK_GR32, MCK_U4Imm, MCK_FP128 }, },
  { 294 /* cg */, SystemZ::CG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 297 /* cgdbr */, SystemZ::CGDBR, Convert__GR641_0__U4Imm1_1__FP641_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP64 }, },
  { 303 /* cgebr */, SystemZ::CGEBR, Convert__GR641_0__U4Imm1_1__FP321_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP32 }, },
  { 309 /* cgf */, SystemZ::CGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 313 /* cgfi */, SystemZ::CGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 318 /* cgfr */, SystemZ::CGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 323 /* cgfrl */, SystemZ::CGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 329 /* cgh */, SystemZ::CGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 333 /* cghi */, SystemZ::CGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 338 /* cghrl */, SystemZ::CGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 344 /* cghsi */, SystemZ::CGHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 350 /* cgij */, SystemZ::AsmCGIJ, Convert__GR641_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 355 /* cgije */, SystemZ::AsmJECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 361 /* cgijh */, SystemZ::AsmJHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 367 /* cgijhe */, SystemZ::AsmJHECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 374 /* cgijl */, SystemZ::AsmJLCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 380 /* cgijle */, SystemZ::AsmJLECGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 387 /* cgijlh */, SystemZ::AsmJLHCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 394 /* cgijne */, SystemZ::AsmJLHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 401 /* cgijnh */, SystemZ::AsmJLEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 408 /* cgijnhe */, SystemZ::AsmJLAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 416 /* cgijnl */, SystemZ::AsmJHEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 423 /* cgijnle */, SystemZ::AsmJHAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 431 /* cgijnlh */, SystemZ::AsmJEAltCGI, Convert__GR641_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR64, MCK_S8Imm, MCK_PCRel16 }, },
  { 439 /* cgr */, SystemZ::CGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 443 /* cgrj */, SystemZ::AsmCGRJ, Convert__GR641_0__GR641_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR64, MCK_GR64, MCK_U4Imm, MCK_PCRel16 }, },
  { 448 /* cgrje */, SystemZ::AsmJECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 454 /* cgrjh */, SystemZ::AsmJHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 460 /* cgrjhe */, SystemZ::AsmJHECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 467 /* cgrjl */, SystemZ::AsmJLCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 473 /* cgrjle */, SystemZ::AsmJLECGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 480 /* cgrjlh */, SystemZ::AsmJLHCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 487 /* cgrjne */, SystemZ::AsmJLHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 494 /* cgrjnh */, SystemZ::AsmJLEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 501 /* cgrjnhe */, SystemZ::AsmJLAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 509 /* cgrjnl */, SystemZ::AsmJHEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 516 /* cgrjnle */, SystemZ::AsmJHAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 524 /* cgrjnlh */, SystemZ::AsmJEAltCGR, Convert__GR641_0__GR641_1__PCRel161_2, 0, { MCK_GR64, MCK_GR64, MCK_PCRel16 }, },
  { 532 /* cgrl */, SystemZ::CGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 537 /* cgxbr */, SystemZ::CGXBR, Convert__GR641_0__U4Imm1_1__FP1281_2, 0, { MCK_GR64, MCK_U4Imm, MCK_FP128 }, },
  { 543 /* ch */, SystemZ::CH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 546 /* chhsi */, SystemZ::CHHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 552 /* chi */, SystemZ::CHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 556 /* chrl */, SystemZ::CHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 561 /* chsi */, SystemZ::CHSI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 566 /* chy */, SystemZ::CHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 570 /* cij */, SystemZ::AsmCIJ, Convert__GR321_0__S8Imm1_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_S8Imm, MCK_U4Imm, MCK_PCRel16 }, },
  { 574 /* cije */, SystemZ::AsmJECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 579 /* cijh */, SystemZ::AsmJHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 584 /* cijhe */, SystemZ::AsmJHECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 590 /* cijl */, SystemZ::AsmJLCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 595 /* cijle */, SystemZ::AsmJLECI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 601 /* cijlh */, SystemZ::AsmJLHCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 607 /* cijne */, SystemZ::AsmJLHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 613 /* cijnh */, SystemZ::AsmJLEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 619 /* cijnhe */, SystemZ::AsmJLAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 626 /* cijnl */, SystemZ::AsmJHEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 632 /* cijnle */, SystemZ::AsmJHAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 639 /* cijnlh */, SystemZ::AsmJEAltCI, Convert__GR321_0__S8Imm1_1__PCRel161_2, 0, { MCK_GR32, MCK_S8Imm, MCK_PCRel16 }, },
  { 646 /* cl */, SystemZ::CL, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 649 /* clc */, SystemZ::CLC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 653 /* clfhsi */, SystemZ::CLFHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 660 /* clfi */, SystemZ::CLFI, Convert__GR321_0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 665 /* clg */, SystemZ::CLG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 669 /* clgf */, SystemZ::CLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 674 /* clgfi */, SystemZ::CLGFI, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 680 /* clgfr */, SystemZ::CLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 686 /* clgfrl */, SystemZ::CLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 693 /* clghrl */, SystemZ::CLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 700 /* clghsi */, SystemZ::CLGHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 707 /* clgr */, SystemZ::CLGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 712 /* clgrl */, SystemZ::CLGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 718 /* clhhsi */, SystemZ::CLHHSI, Convert__BDAddr64Disp122_0__U16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U16Imm }, },
  { 725 /* clhrl */, SystemZ::CLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 731 /* cli */, SystemZ::CLI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 735 /* cliy */, SystemZ::CLIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 740 /* clr */, SystemZ::CLR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 744 /* clrl */, SystemZ::CLRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 749 /* cly */, SystemZ::CLY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 753 /* cpsdr */, SystemZ::CPSDRdd, Convert__FP641_0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 759 /* cr */, SystemZ::CR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 762 /* crj */, SystemZ::AsmCRJ, Convert__GR321_0__GR321_1__U4Imm1_2__PCRel161_3, 0, { MCK_GR32, MCK_GR32, MCK_U4Imm, MCK_PCRel16 }, },
  { 766 /* crje */, SystemZ::AsmJECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 771 /* crjh */, SystemZ::AsmJHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 776 /* crjhe */, SystemZ::AsmJHECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 782 /* crjl */, SystemZ::AsmJLCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 787 /* crjle */, SystemZ::AsmJLECR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 793 /* crjlh */, SystemZ::AsmJLHCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 799 /* crjne */, SystemZ::AsmJLHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 805 /* crjnh */, SystemZ::AsmJLEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 811 /* crjnhe */, SystemZ::AsmJLAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 818 /* crjnl */, SystemZ::AsmJHEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 824 /* crjnle */, SystemZ::AsmJHAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 831 /* crjnlh */, SystemZ::AsmJEAltCR, Convert__GR321_0__GR321_1__PCRel161_2, 0, { MCK_GR32, MCK_GR32, MCK_PCRel16 }, },
  { 838 /* crl */, SystemZ::CRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 842 /* cs */, SystemZ::CS, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp122_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp12 }, },
  { 845 /* csg */, SystemZ::CSG, Convert__GR641_0__Tie0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 849 /* csy */, SystemZ::CSY, Convert__GR321_0__Tie0__GR321_1__BDAddr64Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 853 /* cxbr */, SystemZ::CXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 858 /* cxfbr */, SystemZ::CXFBR, Convert__FP1281_0__GR321_1, 0, { MCK_FP128, MCK_GR32 }, },
  { 864 /* cxgbr */, SystemZ::CXGBR, Convert__FP1281_0__GR641_1, 0, { MCK_FP128, MCK_GR64 }, },
  { 870 /* cy */, SystemZ::CY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 873 /* ddb */, SystemZ::DDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 877 /* ddbr */, SystemZ::DDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 882 /* deb */, SystemZ::DEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 886 /* debr */, SystemZ::DEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 891 /* dl */, SystemZ::DL, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 894 /* dlg */, SystemZ::DLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 898 /* dlgr */, SystemZ::DLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 903 /* dlr */, SystemZ::DLR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 907 /* dsg */, SystemZ::DSG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 911 /* dsgf */, SystemZ::DSGF, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 916 /* dsgfr */, SystemZ::DSGFR, Convert__GR1281_0__Tie0__GR321_1, 0, { MCK_GR128, MCK_GR32 }, },
  { 922 /* dsgr */, SystemZ::DSGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 927 /* dxbr */, SystemZ::DXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 932 /* ear */, SystemZ::EAR, Convert__GR321_0__AccessReg1_1, 0, { MCK_GR32, MCK_AccessReg }, },
  { 936 /* fidbr */, SystemZ::FIDBR, Convert__FP641_0__U4Imm1_1__FP641_2, 0, { MCK_FP64, MCK_U4Imm, MCK_FP64 }, },
  { 942 /* fiebr */, SystemZ::FIEBR, Convert__FP321_0__U4Imm1_1__FP321_2, 0, { MCK_FP32, MCK_U4Imm, MCK_FP32 }, },
  { 948 /* fixbr */, SystemZ::FIXBR, Convert__FP1281_0__U4Imm1_1__FP1281_2, 0, { MCK_FP128, MCK_U4Imm, MCK_FP128 }, },
  { 954 /* flogr */, SystemZ::FLOGR, Convert__GR1281_0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 960 /* ic */, SystemZ::IC, Convert__GR641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 963 /* icy */, SystemZ::ICY, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 967 /* iihf */, SystemZ::IIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 972 /* iihh */, SystemZ::IIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 977 /* iihl */, SystemZ::IIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 982 /* iilf */, SystemZ::IILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 987 /* iilh */, SystemZ::IILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 992 /* iill */, SystemZ::IILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 997 /* ipm */, SystemZ::IPM, Convert__GR321_0, 0, { MCK_GR32 }, },
  { 1001 /* j */, SystemZ::J, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1003 /* je */, SystemZ::AsmEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1006 /* jg */, SystemZ::JG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1009 /* jge */, SystemZ::AsmEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1013 /* jgh */, SystemZ::AsmHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1017 /* jghe */, SystemZ::AsmHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1022 /* jgl */, SystemZ::AsmLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1026 /* jgle */, SystemZ::AsmLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1031 /* jglh */, SystemZ::AsmLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1036 /* jgne */, SystemZ::AsmNEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1041 /* jgnh */, SystemZ::AsmNHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1046 /* jgnhe */, SystemZ::AsmNHEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1052 /* jgnl */, SystemZ::AsmNLJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1057 /* jgnle */, SystemZ::AsmNLEJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1063 /* jgnlh */, SystemZ::AsmNLHJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1069 /* jgno */, SystemZ::AsmNOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1074 /* jgo */, SystemZ::AsmOJG, Convert__PCRel321_0, 0, { MCK_PCRel32 }, },
  { 1078 /* jh */, SystemZ::AsmHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1081 /* jhe */, SystemZ::AsmHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1085 /* jl */, SystemZ::AsmLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1088 /* jle */, SystemZ::AsmLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1092 /* jlh */, SystemZ::AsmLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1096 /* jne */, SystemZ::AsmNEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1100 /* jnh */, SystemZ::AsmNHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1104 /* jnhe */, SystemZ::AsmNHEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1109 /* jnl */, SystemZ::AsmNLJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1113 /* jnle */, SystemZ::AsmNLEJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1118 /* jnlh */, SystemZ::AsmNLHJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1123 /* jno */, SystemZ::AsmNOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1127 /* jo */, SystemZ::AsmOJ, Convert__PCRel161_0, 0, { MCK_PCRel16 }, },
  { 1130 /* l */, SystemZ::L, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1132 /* la */, SystemZ::LA, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 1135 /* larl */, SystemZ::LARL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1140 /* lay */, SystemZ::LAY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1144 /* lb */, SystemZ::LB, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1147 /* lbr */, SystemZ::LBR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1151 /* lcdbr */, SystemZ::LCDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1157 /* lcebr */, SystemZ::LCEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1163 /* lcgfr */, SystemZ::LCGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1169 /* lcgr */, SystemZ::LCGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1174 /* lcr */, SystemZ::LCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1178 /* lcxbr */, SystemZ::LCXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1184 /* ld */, SystemZ::LD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1187 /* ldeb */, SystemZ::LDEB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 1192 /* ldebr */, SystemZ::LDEBR, Convert__FP641_0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 1198 /* ldgr */, SystemZ::LDGR, Convert__FP641_0__GR641_1, 0, { MCK_FP64, MCK_GR64 }, },
  { 1203 /* ldr */, SystemZ::LDR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1207 /* ldxbr */, SystemZ::LDXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1213 /* ldy */, SystemZ::LDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 1217 /* le */, SystemZ::LE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 1220 /* ledbr */, SystemZ::LEDBR, Convert__FP321_0__FP641_1, 0, { MCK_FP32, MCK_FP64 }, },
  { 1226 /* ler */, SystemZ::LER, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1230 /* lexbr */, SystemZ::LEXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1236 /* ley */, SystemZ::LEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 1240 /* lg */, SystemZ::LG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1243 /* lgb */, SystemZ::LGB, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1247 /* lgbr */, SystemZ::LGBR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1252 /* lgdr */, SystemZ::LGDR, Convert__GR641_0__FP641_1, 0, { MCK_GR64, MCK_FP64 }, },
  { 1257 /* lgf */, SystemZ::LGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1261 /* lgfi */, SystemZ::LGFI, Convert__GR641_0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 1266 /* lgfr */, SystemZ::LGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1271 /* lgfrl */, SystemZ::LGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1277 /* lgh */, SystemZ::LGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1281 /* lghi */, SystemZ::LGHI, Convert__GR641_0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 1286 /* lghr */, SystemZ::LGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1291 /* lghrl */, SystemZ::LGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1297 /* lgr */, SystemZ::LGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1301 /* lgrl */, SystemZ::LGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1306 /* lh */, SystemZ::LH, Convert__GR321_0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 1309 /* lhi */, SystemZ::LHI, Convert__GR321_0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 1313 /* lhr */, SystemZ::LHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1317 /* lhrl */, SystemZ::LHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1322 /* lhy */, SystemZ::LHY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1326 /* llc */, SystemZ::LLC, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1330 /* llcr */, SystemZ::LLCR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1335 /* llgc */, SystemZ::LLGC, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1340 /* llgcr */, SystemZ::LLGCR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1346 /* llgf */, SystemZ::LLGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1351 /* llgfr */, SystemZ::LLGFR, Convert__GR641_0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 1357 /* llgfrl */, SystemZ::LLGFRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1364 /* llgh */, SystemZ::LLGH, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1369 /* llghr */, SystemZ::LLGHR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1375 /* llghrl */, SystemZ::LLGHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 1382 /* llh */, SystemZ::LLH, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1386 /* llhr */, SystemZ::LLHR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1391 /* llhrl */, SystemZ::LLHRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1397 /* llihf */, SystemZ::LLIHF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 1403 /* llihh */, SystemZ::LLIHH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1409 /* llihl */, SystemZ::LLIHL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1415 /* llilf */, SystemZ::LLILF, Convert__GR641_0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 1421 /* llilh */, SystemZ::LLILH, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1427 /* llill */, SystemZ::LLILL, Convert__GR641_0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 1433 /* lmg */, SystemZ::LMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1437 /* lndbr */, SystemZ::LNDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1443 /* lnebr */, SystemZ::LNEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1449 /* lnxbr */, SystemZ::LNXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1455 /* loc */, SystemZ::AsmLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 1459 /* loce */, SystemZ::AsmELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1464 /* locg */, SystemZ::AsmLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 1469 /* locge */, SystemZ::AsmELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1475 /* locgh */, SystemZ::AsmHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1481 /* locghe */, SystemZ::AsmHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1488 /* locgl */, SystemZ::AsmLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1494 /* locgle */, SystemZ::AsmLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1501 /* locglh */, SystemZ::AsmLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1508 /* locgne */, SystemZ::AsmNELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1515 /* locgnh */, SystemZ::AsmNHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1522 /* locgnhe */, SystemZ::AsmNHELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1530 /* locgnl */, SystemZ::AsmNLLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1537 /* locgnle */, SystemZ::AsmNLELOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1545 /* locgnlh */, SystemZ::AsmNLHLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1553 /* locgno */, SystemZ::AsmNOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1560 /* locgo */, SystemZ::AsmOLOCG, Convert__GR641_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 1566 /* locgr */, SystemZ::AsmLOCGR, Convert__GR641_0__Tie0__GR641_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64, MCK_U4Imm }, },
  { 1572 /* locgre */, SystemZ::AsmELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1579 /* locgrh */, SystemZ::AsmHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1586 /* locgrhe */, SystemZ::AsmHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1594 /* locgrl */, SystemZ::AsmLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1601 /* locgrle */, SystemZ::AsmLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1609 /* locgrlh */, SystemZ::AsmLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1617 /* locgrne */, SystemZ::AsmNELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1625 /* locgrnh */, SystemZ::AsmNHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1633 /* locgrnhe */, SystemZ::AsmNHELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1642 /* locgrnl */, SystemZ::AsmNLLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1650 /* locgrnle */, SystemZ::AsmNLELOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1659 /* locgrnlh */, SystemZ::AsmNLHLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1668 /* locgrno */, SystemZ::AsmNOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1676 /* locgro */, SystemZ::AsmOLOCGR, Convert__GR641_0__Tie0__GR641_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_GR64 }, },
  { 1683 /* loch */, SystemZ::AsmHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1688 /* loche */, SystemZ::AsmHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1694 /* locl */, SystemZ::AsmLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1699 /* locle */, SystemZ::AsmLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1705 /* loclh */, SystemZ::AsmLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1711 /* locne */, SystemZ::AsmNELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1717 /* locnh */, SystemZ::AsmNHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1723 /* locnhe */, SystemZ::AsmNHELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1730 /* locnl */, SystemZ::AsmNLLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1736 /* locnle */, SystemZ::AsmNLELOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1743 /* locnlh */, SystemZ::AsmNLHLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1750 /* locno */, SystemZ::AsmNOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1756 /* loco */, SystemZ::AsmOLOC, Convert__GR321_0__Tie0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 1761 /* locr */, SystemZ::AsmLOCR, Convert__GR321_0__Tie0__GR321_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32, MCK_U4Imm }, },
  { 1766 /* locre */, SystemZ::AsmELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1772 /* locrh */, SystemZ::AsmHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1778 /* locrhe */, SystemZ::AsmHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1785 /* locrl */, SystemZ::AsmLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1791 /* locrle */, SystemZ::AsmLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1798 /* locrlh */, SystemZ::AsmLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1805 /* locrne */, SystemZ::AsmNELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1812 /* locrnh */, SystemZ::AsmNHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1819 /* locrnhe */, SystemZ::AsmNHELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1827 /* locrnl */, SystemZ::AsmNLLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1834 /* locrnle */, SystemZ::AsmNLELOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1842 /* locrnlh */, SystemZ::AsmNLHLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1850 /* locrno */, SystemZ::AsmNOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1857 /* locro */, SystemZ::AsmOLOCR, Convert__GR321_0__Tie0__GR321_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_GR32 }, },
  { 1863 /* lpdbr */, SystemZ::LPDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1869 /* lpebr */, SystemZ::LPEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1875 /* lpxbr */, SystemZ::LPXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1881 /* lr */, SystemZ::LR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1884 /* lrl */, SystemZ::LRL, Convert__GR321_0__PCRel321_1, 0, { MCK_GR32, MCK_PCRel32 }, },
  { 1888 /* lrv */, SystemZ::LRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1892 /* lrvg */, SystemZ::LRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1897 /* lrvgr */, SystemZ::LRVGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1903 /* lrvr */, SystemZ::LRVR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1908 /* lt */, SystemZ::LT, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1911 /* ltdbr */, SystemZ::LTDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 1917 /* ltebr */, SystemZ::LTEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 1923 /* ltg */, SystemZ::LTG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1927 /* ltgf */, SystemZ::LTGF, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 1932 /* ltgfr */, SystemZ::LTGFR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1938 /* ltgr */, SystemZ::LTGR, Convert__GR641_0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 1943 /* ltr */, SystemZ::LTR, Convert__GR321_0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 1947 /* ltxbr */, SystemZ::LTXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1953 /* lxdb */, SystemZ::LXDB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 1958 /* lxdbr */, SystemZ::LXDBR, Convert__FP1281_0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 1964 /* lxeb */, SystemZ::LXEB, Convert__FP1281_0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 1969 /* lxebr */, SystemZ::LXEBR, Convert__FP1281_0__FP321_1, 0, { MCK_FP128, MCK_FP32 }, },
  { 1975 /* lxr */, SystemZ::LXR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 1979 /* ly */, SystemZ::LY, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 1982 /* lzdr */, SystemZ::LZDR, Convert__FP641_0, 0, { MCK_FP64 }, },
  { 1987 /* lzer */, SystemZ::LZER, Convert__FP321_0, 0, { MCK_FP32 }, },
  { 1992 /* lzxr */, SystemZ::LZXR, Convert__FP1281_0, 0, { MCK_FP128 }, },
  { 1997 /* madb */, SystemZ::MADB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2002 /* madbr */, SystemZ::MADBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2008 /* maeb */, SystemZ::MAEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2013 /* maebr */, SystemZ::MAEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2019 /* mdb */, SystemZ::MDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2023 /* mdbr */, SystemZ::MDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2028 /* mdeb */, SystemZ::MDEB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2033 /* mdebr */, SystemZ::MDEBR, Convert__FP641_0__Tie0__FP321_1, 0, { MCK_FP64, MCK_FP32 }, },
  { 2039 /* meeb */, SystemZ::MEEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2044 /* meebr */, SystemZ::MEEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2050 /* mghi */, SystemZ::MGHI, Convert__GR641_0__Tie0__S16Imm1_1, 0, { MCK_GR64, MCK_S16Imm }, },
  { 2055 /* mh */, SystemZ::MH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2058 /* mhi */, SystemZ::MHI, Convert__GR321_0__Tie0__S16Imm1_1, 0, { MCK_GR32, MCK_S16Imm }, },
  { 2062 /* mhy */, SystemZ::MHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2066 /* mlg */, SystemZ::MLG, Convert__GR1281_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR128, MCK_BDXAddr64Disp20 }, },
  { 2070 /* mlgr */, SystemZ::MLGR, Convert__GR1281_0__Tie0__GR641_1, 0, { MCK_GR128, MCK_GR64 }, },
  { 2075 /* ms */, SystemZ::MS, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2078 /* msdb */, SystemZ::MSDB, Convert__FP641_0__Tie0__FP641_1__BDXAddr64Disp123_2, 0, { MCK_FP64, MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2083 /* msdbr */, SystemZ::MSDBR, Convert__FP641_0__Tie0__FP641_1__FP641_2, 0, { MCK_FP64, MCK_FP64, MCK_FP64 }, },
  { 2089 /* mseb */, SystemZ::MSEB, Convert__FP321_0__Tie0__FP321_1__BDXAddr64Disp123_2, 0, { MCK_FP32, MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2094 /* msebr */, SystemZ::MSEBR, Convert__FP321_0__Tie0__FP321_1__FP321_2, 0, { MCK_FP32, MCK_FP32, MCK_FP32 }, },
  { 2100 /* msfi */, SystemZ::MSFI, Convert__GR321_0__Tie0__S32Imm1_1, 0, { MCK_GR32, MCK_S32Imm }, },
  { 2105 /* msg */, SystemZ::MSG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2109 /* msgf */, SystemZ::MSGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2114 /* msgfi */, SystemZ::MSGFI, Convert__GR641_0__Tie0__S32Imm1_1, 0, { MCK_GR64, MCK_S32Imm }, },
  { 2120 /* msgfr */, SystemZ::MSGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2126 /* msgr */, SystemZ::MSGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2131 /* msr */, SystemZ::MSR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2135 /* msy */, SystemZ::MSY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2139 /* mvc */, SystemZ::MVC, Convert__BDLAddr64Disp12Len83_0__BDAddr64Disp122_1, 0, { MCK_BDLAddr64Disp12Len8, MCK_BDAddr64Disp12 }, },
  { 2143 /* mvghi */, SystemZ::MVGHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2149 /* mvhhi */, SystemZ::MVHHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2155 /* mvhi */, SystemZ::MVHI, Convert__BDAddr64Disp122_0__S16Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_S16Imm }, },
  { 2160 /* mvi */, SystemZ::MVI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2164 /* mviy */, SystemZ::MVIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2169 /* mxbr */, SystemZ::MXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2174 /* mxdb */, SystemZ::MXDB, Convert__FP1281_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP128, MCK_BDXAddr64Disp12 }, },
  { 2179 /* mxdbr */, SystemZ::MXDBR, Convert__FP1281_0__Tie0__FP641_1, 0, { MCK_FP128, MCK_FP64 }, },
  { 2185 /* n */, SystemZ::N, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2187 /* ng */, SystemZ::NG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2190 /* ngr */, SystemZ::NGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2194 /* ngrk */, SystemZ::NGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2199 /* ni */, SystemZ::NI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2202 /* nihf */, SystemZ::NIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2207 /* nihh */, SystemZ::NIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2212 /* nihl */, SystemZ::NIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2217 /* nilf */, SystemZ::NILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2222 /* nilh */, SystemZ::NILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2227 /* nill */, SystemZ::NILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2232 /* niy */, SystemZ::NIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2236 /* nr */, SystemZ::NR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2239 /* nrk */, SystemZ::NRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2243 /* ny */, SystemZ::NY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2246 /* o */, SystemZ::O, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2248 /* og */, SystemZ::OG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2251 /* ogr */, SystemZ::OGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2255 /* ogrk */, SystemZ::OGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2260 /* oi */, SystemZ::OI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2263 /* oihf */, SystemZ::OIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2268 /* oihh */, SystemZ::OIHH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2273 /* oihl */, SystemZ::OIHL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2278 /* oilf */, SystemZ::OILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2283 /* oilh */, SystemZ::OILH, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2288 /* oill */, SystemZ::OILL, Convert__GR641_0__Tie0__U16Imm1_1, 0, { MCK_GR64, MCK_U16Imm }, },
  { 2293 /* oiy */, SystemZ::OIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2297 /* or */, SystemZ::OR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2300 /* ork */, SystemZ::ORK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2304 /* oy */, SystemZ::OY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2307 /* risbg */, SystemZ::RISBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 2313 /* risbhg */, SystemZ::RISBHG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 2320 /* risblg */, SystemZ::RISBLG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, Feature_FeatureHighWord, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 2327 /* rll */, SystemZ::RLL, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, 0, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 2331 /* rllg */, SystemZ::RLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 2336 /* rnsbg */, SystemZ::RNSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 2342 /* rosbg */, SystemZ::ROSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 2348 /* rxsbg */, SystemZ::RXSBG, Convert__GR641_0__Tie0__GR641_1__U8Imm1_2__U8Imm1_3__U6Imm1_4, 0, { MCK_GR64, MCK_GR64, MCK_U8Imm, MCK_U8Imm, MCK_U6Imm }, },
  { 2354 /* s */, SystemZ::S, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2356 /* sdb */, SystemZ::SDB, Convert__FP641_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2360 /* sdbr */, SystemZ::SDBR, Convert__FP641_0__Tie0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2365 /* seb */, SystemZ::SEB, Convert__FP321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2369 /* sebr */, SystemZ::SEBR, Convert__FP321_0__Tie0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2374 /* sg */, SystemZ::SG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2377 /* sgf */, SystemZ::SGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2381 /* sgfr */, SystemZ::SGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2386 /* sgr */, SystemZ::SGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2390 /* sgrk */, SystemZ::SGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2395 /* sh */, SystemZ::SH, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2398 /* shy */, SystemZ::SHY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2402 /* sl */, SystemZ::SL, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2405 /* slb */, SystemZ::SLB, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2409 /* slbg */, SystemZ::SLBG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2414 /* slbgr */, SystemZ::SLGBR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2420 /* slbr */, SystemZ::SLBR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2425 /* slfi */, SystemZ::SLFI, Convert__GR321_0__Tie0__U32Imm1_1, 0, { MCK_GR32, MCK_U32Imm }, },
  { 2430 /* slg */, SystemZ::SLG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2434 /* slgf */, SystemZ::SLGF, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2439 /* slgfi */, SystemZ::SLGFI, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2445 /* slgfr */, SystemZ::SLGFR, Convert__GR641_0__Tie0__GR321_1, 0, { MCK_GR64, MCK_GR32 }, },
  { 2451 /* slgr */, SystemZ::SLGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2456 /* slgrk */, SystemZ::SLGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2462 /* sll */, SystemZ::SLL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 2466 /* sllg */, SystemZ::SLLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 2471 /* sllk */, SystemZ::SLLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 2476 /* slr */, SystemZ::SLR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2480 /* slrk */, SystemZ::SLRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2485 /* sly */, SystemZ::SLY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2489 /* sqdb */, SystemZ::SQDB, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2494 /* sqdbr */, SystemZ::SQDBR, Convert__FP641_0__FP641_1, 0, { MCK_FP64, MCK_FP64 }, },
  { 2500 /* sqeb */, SystemZ::SQEB, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2505 /* sqebr */, SystemZ::SQEBR, Convert__FP321_0__FP321_1, 0, { MCK_FP32, MCK_FP32 }, },
  { 2511 /* sqxbr */, SystemZ::SQXBR, Convert__FP1281_0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2517 /* sr */, SystemZ::SR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2520 /* sra */, SystemZ::SRA, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 2524 /* srag */, SystemZ::SRAG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 2529 /* srak */, SystemZ::SRAK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 2534 /* srk */, SystemZ::SRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2538 /* srl */, SystemZ::SRL, Convert__GR321_0__Tie0__BDAddr32Disp122_1, 0, { MCK_GR32, MCK_BDAddr32Disp12 }, },
  { 2542 /* srlg */, SystemZ::SRLG, Convert__GR641_0__GR641_1__BDAddr32Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr32Disp20 }, },
  { 2547 /* srlk */, SystemZ::SRLK, Convert__GR321_0__GR321_1__BDAddr32Disp202_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_BDAddr32Disp20 }, },
  { 2552 /* st */, SystemZ::ST, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 2555 /* stc */, SystemZ::STC, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 2559 /* stcy */, SystemZ::STCY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2564 /* std */, SystemZ::STD, Convert__FP641_0__BDXAddr64Disp123_1, 0, { MCK_FP64, MCK_BDXAddr64Disp12 }, },
  { 2568 /* stdy */, SystemZ::STDY, Convert__FP641_0__BDXAddr64Disp203_1, 0, { MCK_FP64, MCK_BDXAddr64Disp20 }, },
  { 2573 /* ste */, SystemZ::STE, Convert__FP321_0__BDXAddr64Disp123_1, 0, { MCK_FP32, MCK_BDXAddr64Disp12 }, },
  { 2577 /* stey */, SystemZ::STEY, Convert__FP321_0__BDXAddr64Disp203_1, 0, { MCK_FP32, MCK_BDXAddr64Disp20 }, },
  { 2582 /* stg */, SystemZ::STG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2586 /* stgrl */, SystemZ::STGRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2592 /* sth */, SystemZ::STH, Convert__GR641_0__BDXAddr64Disp123_1, 0, { MCK_GR64, MCK_BDXAddr64Disp12 }, },
  { 2596 /* sthrl */, SystemZ::STHRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2602 /* sthy */, SystemZ::STHY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2607 /* stmg */, SystemZ::STMG, Convert__GR641_0__GR641_1__BDAddr64Disp202_2, 0, { MCK_GR64, MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2612 /* stoc */, SystemZ::AsmSTOC, Convert__GR321_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2617 /* stoce */, SystemZ::AsmESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2623 /* stocg */, SystemZ::AsmSTOCG, Convert__GR641_0__BDAddr64Disp202_1__U4Imm1_2, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20, MCK_U4Imm }, },
  { 2629 /* stocge */, SystemZ::AsmESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2636 /* stocgh */, SystemZ::AsmHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2643 /* stocghe */, SystemZ::AsmHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2651 /* stocgl */, SystemZ::AsmLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2658 /* stocgle */, SystemZ::AsmLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2666 /* stocglh */, SystemZ::AsmLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2674 /* stocgne */, SystemZ::AsmNESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2682 /* stocgnh */, SystemZ::AsmNHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2690 /* stocgnhe */, SystemZ::AsmNHESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2699 /* stocgnl */, SystemZ::AsmNLSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2707 /* stocgnle */, SystemZ::AsmNLESTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2716 /* stocgnlh */, SystemZ::AsmNLHSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2725 /* stocgno */, SystemZ::AsmNOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2733 /* stocgo */, SystemZ::AsmOSTOCG, Convert__GR641_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR64, MCK_BDAddr64Disp20 }, },
  { 2740 /* stoch */, SystemZ::AsmHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2746 /* stoche */, SystemZ::AsmHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2753 /* stocl */, SystemZ::AsmLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2759 /* stocle */, SystemZ::AsmLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2766 /* stoclh */, SystemZ::AsmLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2773 /* stocne */, SystemZ::AsmNESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2780 /* stocnh */, SystemZ::AsmNHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2787 /* stocnhe */, SystemZ::AsmNHESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2795 /* stocnl */, SystemZ::AsmNLSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2802 /* stocnle */, SystemZ::AsmNLESTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2810 /* stocnlh */, SystemZ::AsmNLHSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2818 /* stocno */, SystemZ::AsmNOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2825 /* stoco */, SystemZ::AsmOSTOC, Convert__GR321_0__BDAddr64Disp202_1, Feature_FeatureLoadStoreOnCond, { MCK_GR32, MCK_BDAddr64Disp20 }, },
  { 2831 /* strl */, SystemZ::STRL, Convert__GR641_0__PCRel321_1, 0, { MCK_GR64, MCK_PCRel32 }, },
  { 2836 /* strv */, SystemZ::STRV, Convert__GR321_0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2841 /* strvg */, SystemZ::STRVG, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2847 /* sty */, SystemZ::STY, Convert__GR641_0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2851 /* sxbr */, SystemZ::SXBR, Convert__FP1281_0__Tie0__FP1281_1, 0, { MCK_FP128, MCK_FP128 }, },
  { 2856 /* sy */, SystemZ::SY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
  { 2859 /* x */, SystemZ::X, Convert__GR321_0__Tie0__BDXAddr64Disp123_1, 0, { MCK_GR32, MCK_BDXAddr64Disp12 }, },
  { 2861 /* xg */, SystemZ::XG, Convert__GR641_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR64, MCK_BDXAddr64Disp20 }, },
  { 2864 /* xgr */, SystemZ::XGR, Convert__GR641_0__Tie0__GR641_1, 0, { MCK_GR64, MCK_GR64 }, },
  { 2868 /* xgrk */, SystemZ::XGRK, Convert__GR641_0__GR641_1__GR641_2, Feature_FeatureDistinctOps, { MCK_GR64, MCK_GR64, MCK_GR64 }, },
  { 2873 /* xi */, SystemZ::XI, Convert__BDAddr64Disp122_0__U8Imm1_1, 0, { MCK_BDAddr64Disp12, MCK_U8Imm }, },
  { 2876 /* xihf */, SystemZ::XIHF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2881 /* xilf */, SystemZ::XILF, Convert__GR641_0__Tie0__U32Imm1_1, 0, { MCK_GR64, MCK_U32Imm }, },
  { 2886 /* xiy */, SystemZ::XIY, Convert__BDAddr64Disp202_0__U8Imm1_1, 0, { MCK_BDAddr64Disp20, MCK_U8Imm }, },
  { 2890 /* xr */, SystemZ::XR, Convert__GR321_0__Tie0__GR321_1, 0, { MCK_GR32, MCK_GR32 }, },
  { 2893 /* xrk */, SystemZ::XRK, Convert__GR321_0__GR321_1__GR321_2, Feature_FeatureDistinctOps, { MCK_GR32, MCK_GR32, MCK_GR32 }, },
  { 2897 /* xy */, SystemZ::XY, Convert__GR321_0__Tie0__BDXAddr64Disp203_1, 0, { MCK_GR32, MCK_BDXAddr64Disp20 }, },
};

bool SystemZAsmParser::
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

unsigned SystemZAsmParser::
MatchInstructionImpl(const SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                     MCInst &Inst,
unsigned &ErrorInfo, bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SystemZOperand*)Operands[0])->getToken();

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
    for (unsigned i = 0; i != 5; ++i) {
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
    uint8_t RequiredFeatures;
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

static const OperandMatchEntry OperandMatchTable[863] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 0 /* a */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 0 /* a */, MCK_GR32, 1 /* 0 */ },
  { 0, 2 /* adb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2 /* adb */, MCK_FP64, 1 /* 0 */ },
  { 0, 6 /* adbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 11 /* aeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 11 /* aeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 15 /* aebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 20 /* afi */, MCK_GR32, 1 /* 0 */ },
  { 0, 24 /* ag */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 24 /* ag */, MCK_GR64, 1 /* 0 */ },
  { 0, 27 /* agf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 27 /* agf */, MCK_GR64, 1 /* 0 */ },
  { 0, 31 /* agfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 36 /* agfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 36 /* agfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 41 /* aghi */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 46 /* aghik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 52 /* agr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 56 /* agrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 61 /* agsi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 66 /* ah */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 66 /* ah */, MCK_GR32, 1 /* 0 */ },
  { 0, 69 /* ahi */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 73 /* ahik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 78 /* ahy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 78 /* ahy */, MCK_GR32, 1 /* 0 */ },
  { 0, 82 /* al */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 82 /* al */, MCK_GR32, 1 /* 0 */ },
  { 0, 85 /* alc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 85 /* alc */, MCK_GR32, 1 /* 0 */ },
  { 0, 89 /* alcg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 89 /* alcg */, MCK_GR64, 1 /* 0 */ },
  { 0, 94 /* alcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 100 /* alcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 105 /* alfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 110 /* alg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 110 /* alg */, MCK_GR64, 1 /* 0 */ },
  { 0, 114 /* algf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 114 /* algf */, MCK_GR64, 1 /* 0 */ },
  { 0, 119 /* algfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 125 /* algfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 125 /* algfr */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureDistinctOps, 131 /* alghsik */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 139 /* algr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 144 /* algrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { Feature_FeatureDistinctOps, 150 /* alhsik */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 157 /* alr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 161 /* alrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 166 /* aly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 166 /* aly */, MCK_GR32, 1 /* 0 */ },
  { 0, 170 /* ar */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 173 /* ark */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 177 /* asi */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 181 /* axbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 186 /* ay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 186 /* ay */, MCK_GR32, 1 /* 0 */ },
  { 0, 189 /* basr */, MCK_ADDR64, 2 /* 1 */ },
  { 0, 189 /* basr */, MCK_GR64, 1 /* 0 */ },
  { 0, 194 /* br */, MCK_ADDR64, 1 /* 0 */ },
  { 0, 197 /* bras */, MCK_GR64, 1 /* 0 */ },
  { 0, 197 /* bras */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 202 /* brasl */, MCK_GR64, 1 /* 0 */ },
  { 0, 202 /* brasl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 208 /* brc */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 212 /* brcl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 217 /* brct */, MCK_GR32, 1 /* 0 */ },
  { 0, 217 /* brct */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 222 /* brctg */, MCK_GR64, 1 /* 0 */ },
  { 0, 222 /* brctg */, MCK_PCRel16, 2 /* 1 */ },
  { 0, 228 /* c */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 228 /* c */, MCK_GR32, 1 /* 0 */ },
  { 0, 230 /* cdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 230 /* cdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 234 /* cdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 239 /* cdfbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 239 /* cdfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 245 /* cdgbr */, MCK_FP64, 1 /* 0 */ },
  { 0, 245 /* cdgbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 251 /* ceb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 251 /* ceb */, MCK_FP32, 1 /* 0 */ },
  { 0, 255 /* cebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 260 /* cefbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 260 /* cefbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 266 /* cegbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 266 /* cegbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 272 /* cfdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 272 /* cfdbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 278 /* cfebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 278 /* cfebr */, MCK_GR32, 1 /* 0 */ },
  { 0, 284 /* cfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 288 /* cfxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 288 /* cfxbr */, MCK_GR32, 1 /* 0 */ },
  { 0, 294 /* cg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 294 /* cg */, MCK_GR64, 1 /* 0 */ },
  { 0, 297 /* cgdbr */, MCK_FP64, 4 /* 2 */ },
  { 0, 297 /* cgdbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 303 /* cgebr */, MCK_FP32, 4 /* 2 */ },
  { 0, 303 /* cgebr */, MCK_GR64, 1 /* 0 */ },
  { 0, 309 /* cgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 309 /* cgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 313 /* cgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 318 /* cgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 318 /* cgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 323 /* cgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 323 /* cgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 329 /* cgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 329 /* cgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 333 /* cghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 338 /* cghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 338 /* cghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 344 /* cghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 350 /* cgij */, MCK_GR64, 1 /* 0 */ },
  { 0, 350 /* cgij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 355 /* cgije */, MCK_GR64, 1 /* 0 */ },
  { 0, 355 /* cgije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 361 /* cgijh */, MCK_GR64, 1 /* 0 */ },
  { 0, 361 /* cgijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 367 /* cgijhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 367 /* cgijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 374 /* cgijl */, MCK_GR64, 1 /* 0 */ },
  { 0, 374 /* cgijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 380 /* cgijle */, MCK_GR64, 1 /* 0 */ },
  { 0, 380 /* cgijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 387 /* cgijlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 387 /* cgijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 394 /* cgijne */, MCK_GR64, 1 /* 0 */ },
  { 0, 394 /* cgijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 401 /* cgijnh */, MCK_GR64, 1 /* 0 */ },
  { 0, 401 /* cgijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 408 /* cgijnhe */, MCK_GR64, 1 /* 0 */ },
  { 0, 408 /* cgijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 416 /* cgijnl */, MCK_GR64, 1 /* 0 */ },
  { 0, 416 /* cgijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 423 /* cgijnle */, MCK_GR64, 1 /* 0 */ },
  { 0, 423 /* cgijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 431 /* cgijnlh */, MCK_GR64, 1 /* 0 */ },
  { 0, 431 /* cgijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 439 /* cgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 443 /* cgrj */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 443 /* cgrj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 448 /* cgrje */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 448 /* cgrje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 454 /* cgrjh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 454 /* cgrjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 460 /* cgrjhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 460 /* cgrjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 467 /* cgrjl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 467 /* cgrjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 473 /* cgrjle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 473 /* cgrjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 480 /* cgrjlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 480 /* cgrjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 487 /* cgrjne */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 487 /* cgrjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 494 /* cgrjnh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 494 /* cgrjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 501 /* cgrjnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 501 /* cgrjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 509 /* cgrjnl */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 509 /* cgrjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 516 /* cgrjnle */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 516 /* cgrjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 524 /* cgrjnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 524 /* cgrjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 532 /* cgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 532 /* cgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 537 /* cgxbr */, MCK_FP128, 4 /* 2 */ },
  { 0, 537 /* cgxbr */, MCK_GR64, 1 /* 0 */ },
  { 0, 543 /* ch */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 543 /* ch */, MCK_GR32, 1 /* 0 */ },
  { 0, 546 /* chhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 552 /* chi */, MCK_GR32, 1 /* 0 */ },
  { 0, 556 /* chrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 556 /* chrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 561 /* chsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 566 /* chy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 566 /* chy */, MCK_GR32, 1 /* 0 */ },
  { 0, 570 /* cij */, MCK_GR32, 1 /* 0 */ },
  { 0, 570 /* cij */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 574 /* cije */, MCK_GR32, 1 /* 0 */ },
  { 0, 574 /* cije */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 579 /* cijh */, MCK_GR32, 1 /* 0 */ },
  { 0, 579 /* cijh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 584 /* cijhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 584 /* cijhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 590 /* cijl */, MCK_GR32, 1 /* 0 */ },
  { 0, 590 /* cijl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 595 /* cijle */, MCK_GR32, 1 /* 0 */ },
  { 0, 595 /* cijle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 601 /* cijlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 601 /* cijlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 607 /* cijne */, MCK_GR32, 1 /* 0 */ },
  { 0, 607 /* cijne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 613 /* cijnh */, MCK_GR32, 1 /* 0 */ },
  { 0, 613 /* cijnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 619 /* cijnhe */, MCK_GR32, 1 /* 0 */ },
  { 0, 619 /* cijnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 626 /* cijnl */, MCK_GR32, 1 /* 0 */ },
  { 0, 626 /* cijnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 632 /* cijnle */, MCK_GR32, 1 /* 0 */ },
  { 0, 632 /* cijnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 639 /* cijnlh */, MCK_GR32, 1 /* 0 */ },
  { 0, 639 /* cijnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 646 /* cl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 646 /* cl */, MCK_GR32, 1 /* 0 */ },
  { 0, 649 /* clc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 649 /* clc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 653 /* clfhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 660 /* clfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 665 /* clg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 665 /* clg */, MCK_GR64, 1 /* 0 */ },
  { 0, 669 /* clgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 669 /* clgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 674 /* clgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 680 /* clgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 680 /* clgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 686 /* clgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 686 /* clgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 693 /* clghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 693 /* clghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 700 /* clghsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 707 /* clgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 712 /* clgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 712 /* clgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 718 /* clhhsi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 725 /* clhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 725 /* clhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 731 /* cli */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 735 /* cliy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 740 /* clr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 744 /* clrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 744 /* clrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 749 /* cly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 749 /* cly */, MCK_GR32, 1 /* 0 */ },
  { 0, 753 /* cpsdr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 759 /* cr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 762 /* crj */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 762 /* crj */, MCK_PCRel16, 8 /* 3 */ },
  { 0, 766 /* crje */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 766 /* crje */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 771 /* crjh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 771 /* crjh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 776 /* crjhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 776 /* crjhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 782 /* crjl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 782 /* crjl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 787 /* crjle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 787 /* crjle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 793 /* crjlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 793 /* crjlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 799 /* crjne */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 799 /* crjne */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 805 /* crjnh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 805 /* crjnh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 811 /* crjnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 811 /* crjnhe */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 818 /* crjnl */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 818 /* crjnl */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 824 /* crjnle */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 824 /* crjnle */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 831 /* crjnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 831 /* crjnlh */, MCK_PCRel16, 4 /* 2 */ },
  { 0, 838 /* crl */, MCK_GR32, 1 /* 0 */ },
  { 0, 838 /* crl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 842 /* cs */, MCK_BDAddr64Disp12, 4 /* 2 */ },
  { 0, 842 /* cs */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 845 /* csg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 845 /* csg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 849 /* csy */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 849 /* csy */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 853 /* cxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 858 /* cxfbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 858 /* cxfbr */, MCK_GR32, 2 /* 1 */ },
  { 0, 864 /* cxgbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 864 /* cxgbr */, MCK_GR64, 2 /* 1 */ },
  { 0, 870 /* cy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 870 /* cy */, MCK_GR32, 1 /* 0 */ },
  { 0, 873 /* ddb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 873 /* ddb */, MCK_FP64, 1 /* 0 */ },
  { 0, 877 /* ddbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 882 /* deb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 882 /* deb */, MCK_FP32, 1 /* 0 */ },
  { 0, 886 /* debr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 891 /* dl */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 891 /* dl */, MCK_GR128, 1 /* 0 */ },
  { 0, 894 /* dlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 894 /* dlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 898 /* dlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 898 /* dlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 903 /* dlr */, MCK_GR128, 1 /* 0 */ },
  { 0, 903 /* dlr */, MCK_GR32, 2 /* 1 */ },
  { 0, 907 /* dsg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 907 /* dsg */, MCK_GR128, 1 /* 0 */ },
  { 0, 911 /* dsgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 911 /* dsgf */, MCK_GR128, 1 /* 0 */ },
  { 0, 916 /* dsgfr */, MCK_GR128, 1 /* 0 */ },
  { 0, 916 /* dsgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 922 /* dsgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 922 /* dsgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 927 /* dxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 932 /* ear */, MCK_AccessReg, 2 /* 1 */ },
  { 0, 932 /* ear */, MCK_GR32, 1 /* 0 */ },
  { 0, 936 /* fidbr */, MCK_FP64, 5 /* 0, 2 */ },
  { 0, 942 /* fiebr */, MCK_FP32, 5 /* 0, 2 */ },
  { 0, 948 /* fixbr */, MCK_FP128, 5 /* 0, 2 */ },
  { 0, 954 /* flogr */, MCK_GR128, 1 /* 0 */ },
  { 0, 954 /* flogr */, MCK_GR64, 2 /* 1 */ },
  { 0, 960 /* ic */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 960 /* ic */, MCK_GR64, 1 /* 0 */ },
  { 0, 963 /* icy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 963 /* icy */, MCK_GR64, 1 /* 0 */ },
  { 0, 967 /* iihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 972 /* iihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 977 /* iihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 982 /* iilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 987 /* iilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 992 /* iill */, MCK_GR64, 1 /* 0 */ },
  { 0, 997 /* ipm */, MCK_GR32, 1 /* 0 */ },
  { 0, 1001 /* j */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1003 /* je */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1006 /* jg */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1009 /* jge */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1013 /* jgh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1017 /* jghe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1022 /* jgl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1026 /* jgle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1031 /* jglh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1036 /* jgne */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1041 /* jgnh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1046 /* jgnhe */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1052 /* jgnl */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1057 /* jgnle */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1063 /* jgnlh */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1069 /* jgno */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1074 /* jgo */, MCK_PCRel32, 1 /* 0 */ },
  { 0, 1078 /* jh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1081 /* jhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1085 /* jl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1088 /* jle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1092 /* jlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1096 /* jne */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1100 /* jnh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1104 /* jnhe */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1109 /* jnl */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1113 /* jnle */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1118 /* jnlh */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1123 /* jno */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1127 /* jo */, MCK_PCRel16, 1 /* 0 */ },
  { 0, 1130 /* l */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1130 /* l */, MCK_GR32, 1 /* 0 */ },
  { 0, 1132 /* la */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1132 /* la */, MCK_GR64, 1 /* 0 */ },
  { 0, 1135 /* larl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1135 /* larl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1140 /* lay */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1140 /* lay */, MCK_GR64, 1 /* 0 */ },
  { 0, 1144 /* lb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1144 /* lb */, MCK_GR32, 1 /* 0 */ },
  { 0, 1147 /* lbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1151 /* lcdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1157 /* lcebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1163 /* lcgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1163 /* lcgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1169 /* lcgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1174 /* lcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1178 /* lcxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1184 /* ld */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1184 /* ld */, MCK_FP64, 1 /* 0 */ },
  { 0, 1187 /* ldeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1187 /* ldeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 1192 /* ldebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1192 /* ldebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1198 /* ldgr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1198 /* ldgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 1203 /* ldr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1207 /* ldxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1213 /* ldy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1213 /* ldy */, MCK_FP64, 1 /* 0 */ },
  { 0, 1217 /* le */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1217 /* le */, MCK_FP32, 1 /* 0 */ },
  { 0, 1220 /* ledbr */, MCK_FP32, 1 /* 0 */ },
  { 0, 1220 /* ledbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1226 /* ler */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1230 /* lexbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1236 /* ley */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1236 /* ley */, MCK_FP32, 1 /* 0 */ },
  { 0, 1240 /* lg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1240 /* lg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1243 /* lgb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1243 /* lgb */, MCK_GR64, 1 /* 0 */ },
  { 0, 1247 /* lgbr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1252 /* lgdr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1252 /* lgdr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1257 /* lgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1257 /* lgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1261 /* lgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1266 /* lgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1266 /* lgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1271 /* lgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1271 /* lgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1277 /* lgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1277 /* lgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1281 /* lghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 1286 /* lghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1291 /* lghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1291 /* lghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1297 /* lgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1301 /* lgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1301 /* lgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1306 /* lh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1306 /* lh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1309 /* lhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 1313 /* lhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1317 /* lhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1317 /* lhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1322 /* lhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1322 /* lhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 1326 /* llc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1326 /* llc */, MCK_GR32, 1 /* 0 */ },
  { 0, 1330 /* llcr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1335 /* llgc */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1335 /* llgc */, MCK_GR64, 1 /* 0 */ },
  { 0, 1340 /* llgcr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1346 /* llgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1346 /* llgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1351 /* llgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 1351 /* llgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 1357 /* llgfrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1357 /* llgfrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1364 /* llgh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1364 /* llgh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1369 /* llghr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1375 /* llghrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1375 /* llghrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1382 /* llh */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1382 /* llh */, MCK_GR32, 1 /* 0 */ },
  { 0, 1386 /* llhr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1391 /* llhrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1391 /* llhrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1397 /* llihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1403 /* llihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1409 /* llihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 1415 /* llilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1421 /* llilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 1427 /* llill */, MCK_GR64, 1 /* 0 */ },
  { 0, 1433 /* lmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 1433 /* lmg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1437 /* lndbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1443 /* lnebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1449 /* lnxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1455 /* loc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1455 /* loc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1459 /* loce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1459 /* loce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1464 /* locg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1464 /* locg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1469 /* locge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1469 /* locge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1475 /* locgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1475 /* locgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1481 /* locghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1481 /* locghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1488 /* locgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1488 /* locgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1494 /* locgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1494 /* locgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1501 /* locglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1501 /* locglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1508 /* locgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1508 /* locgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1515 /* locgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1515 /* locgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1522 /* locgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1522 /* locgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1530 /* locgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1530 /* locgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1537 /* locgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1537 /* locgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1545 /* locgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1545 /* locgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1553 /* locgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1553 /* locgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1560 /* locgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1560 /* locgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1566 /* locgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1572 /* locgre */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1579 /* locgrh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1586 /* locgrhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1594 /* locgrl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1601 /* locgrle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1609 /* locgrlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1617 /* locgrne */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1625 /* locgrnh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1633 /* locgrnhe */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1642 /* locgrnl */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1650 /* locgrnle */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1659 /* locgrnlh */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1668 /* locgrno */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1676 /* locgro */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1683 /* loch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1683 /* loch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1688 /* loche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1688 /* loche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1694 /* locl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1694 /* locl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1699 /* locle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1699 /* locle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1705 /* loclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1705 /* loclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1711 /* locne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1711 /* locne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1717 /* locnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1717 /* locnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1723 /* locnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1723 /* locnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1730 /* locnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1730 /* locnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1736 /* locnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1736 /* locnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1743 /* locnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1743 /* locnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1750 /* locno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1750 /* locno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1756 /* loco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1756 /* loco */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 1761 /* locr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1766 /* locre */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1772 /* locrh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1778 /* locrhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1785 /* locrl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1791 /* locrle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1798 /* locrlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1805 /* locrne */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1812 /* locrnh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1819 /* locrnhe */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1827 /* locrnl */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1834 /* locrnle */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1842 /* locrnlh */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1850 /* locrno */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 1857 /* locro */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1863 /* lpdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1869 /* lpebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1875 /* lpxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1881 /* lr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1884 /* lrl */, MCK_GR32, 1 /* 0 */ },
  { 0, 1884 /* lrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 1888 /* lrv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1888 /* lrv */, MCK_GR32, 1 /* 0 */ },
  { 0, 1892 /* lrvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1892 /* lrvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1897 /* lrvgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1903 /* lrvr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1908 /* lt */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1908 /* lt */, MCK_GR32, 1 /* 0 */ },
  { 0, 1911 /* ltdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 1917 /* ltebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 1923 /* ltg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1923 /* ltg */, MCK_GR64, 1 /* 0 */ },
  { 0, 1927 /* ltgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1927 /* ltgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 1932 /* ltgfr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1938 /* ltgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 1943 /* ltr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 1947 /* ltxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1953 /* lxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1953 /* lxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1958 /* lxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1958 /* lxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 1964 /* lxeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 1964 /* lxeb */, MCK_FP128, 1 /* 0 */ },
  { 0, 1969 /* lxebr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1969 /* lxebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 1975 /* lxr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 1979 /* ly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 1979 /* ly */, MCK_GR32, 1 /* 0 */ },
  { 0, 1982 /* lzdr */, MCK_FP64, 1 /* 0 */ },
  { 0, 1987 /* lzer */, MCK_FP32, 1 /* 0 */ },
  { 0, 1992 /* lzxr */, MCK_FP128, 1 /* 0 */ },
  { 0, 1997 /* madb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 1997 /* madb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2002 /* madbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2008 /* maeb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2008 /* maeb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2013 /* maebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2019 /* mdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2019 /* mdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2023 /* mdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2028 /* mdeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2028 /* mdeb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2033 /* mdebr */, MCK_FP32, 2 /* 1 */ },
  { 0, 2033 /* mdebr */, MCK_FP64, 1 /* 0 */ },
  { 0, 2039 /* meeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2039 /* meeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 2044 /* meebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2050 /* mghi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2055 /* mh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2055 /* mh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2058 /* mhi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2062 /* mhy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2062 /* mhy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2066 /* mlg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2066 /* mlg */, MCK_GR128, 1 /* 0 */ },
  { 0, 2070 /* mlgr */, MCK_GR128, 1 /* 0 */ },
  { 0, 2070 /* mlgr */, MCK_GR64, 2 /* 1 */ },
  { 0, 2075 /* ms */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2075 /* ms */, MCK_GR32, 1 /* 0 */ },
  { 0, 2078 /* msdb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2078 /* msdb */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2083 /* msdbr */, MCK_FP64, 7 /* 0, 1, 2 */ },
  { 0, 2089 /* mseb */, MCK_BDXAddr64Disp12, 4 /* 2 */ },
  { 0, 2089 /* mseb */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2094 /* msebr */, MCK_FP32, 7 /* 0, 1, 2 */ },
  { 0, 2100 /* msfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2105 /* msg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2105 /* msg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2109 /* msgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2109 /* msgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2114 /* msgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2120 /* msgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2120 /* msgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2126 /* msgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2131 /* msr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2135 /* msy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2135 /* msy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2139 /* mvc */, MCK_BDAddr64Disp12, 2 /* 1 */ },
  { 0, 2139 /* mvc */, MCK_BDLAddr64Disp12Len8, 1 /* 0 */ },
  { 0, 2143 /* mvghi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2149 /* mvhhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2155 /* mvhi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2160 /* mvi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2164 /* mviy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2169 /* mxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2174 /* mxdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2174 /* mxdb */, MCK_FP128, 1 /* 0 */ },
  { 0, 2179 /* mxdbr */, MCK_FP128, 1 /* 0 */ },
  { 0, 2179 /* mxdbr */, MCK_FP64, 2 /* 1 */ },
  { 0, 2185 /* n */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2185 /* n */, MCK_GR32, 1 /* 0 */ },
  { 0, 2187 /* ng */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2187 /* ng */, MCK_GR64, 1 /* 0 */ },
  { 0, 2190 /* ngr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2194 /* ngrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2199 /* ni */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2202 /* nihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2207 /* nihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2212 /* nihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2217 /* nilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2222 /* nilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2227 /* nill */, MCK_GR64, 1 /* 0 */ },
  { 0, 2232 /* niy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2236 /* nr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2239 /* nrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 2243 /* ny */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2243 /* ny */, MCK_GR32, 1 /* 0 */ },
  { 0, 2246 /* o */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2246 /* o */, MCK_GR32, 1 /* 0 */ },
  { 0, 2248 /* og */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2248 /* og */, MCK_GR64, 1 /* 0 */ },
  { 0, 2251 /* ogr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2255 /* ogrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2260 /* oi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2263 /* oihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2268 /* oihh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2273 /* oihl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2278 /* oilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2283 /* oilh */, MCK_GR64, 1 /* 0 */ },
  { 0, 2288 /* oill */, MCK_GR64, 1 /* 0 */ },
  { 0, 2293 /* oiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2297 /* or */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2300 /* ork */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 2304 /* oy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2304 /* oy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2307 /* risbg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 2313 /* risbhg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureHighWord, 2320 /* risblg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2327 /* rll */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 2327 /* rll */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2331 /* rllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 2331 /* rllg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2336 /* rnsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2342 /* rosbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2348 /* rxsbg */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2354 /* s */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2354 /* s */, MCK_GR32, 1 /* 0 */ },
  { 0, 2356 /* sdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2356 /* sdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2360 /* sdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2365 /* seb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2365 /* seb */, MCK_FP32, 1 /* 0 */ },
  { 0, 2369 /* sebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2374 /* sg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2374 /* sg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2377 /* sgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2377 /* sgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2381 /* sgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2381 /* sgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2386 /* sgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2390 /* sgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2395 /* sh */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2395 /* sh */, MCK_GR32, 1 /* 0 */ },
  { 0, 2398 /* shy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2398 /* shy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2402 /* sl */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2402 /* sl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2405 /* slb */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2405 /* slb */, MCK_GR32, 1 /* 0 */ },
  { 0, 2409 /* slbg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2409 /* slbg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2414 /* slbgr */, MCK_GR64, 3 /* 0, 1 */ },
  { 0, 2420 /* slbr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2425 /* slfi */, MCK_GR32, 1 /* 0 */ },
  { 0, 2430 /* slg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2430 /* slg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2434 /* slgf */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2434 /* slgf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2439 /* slgfi */, MCK_GR64, 1 /* 0 */ },
  { 0, 2445 /* slgfr */, MCK_GR32, 2 /* 1 */ },
  { 0, 2445 /* slgfr */, MCK_GR64, 1 /* 0 */ },
  { 0, 2451 /* slgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2456 /* slgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2462 /* sll */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 2462 /* sll */, MCK_GR32, 1 /* 0 */ },
  { 0, 2466 /* sllg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 2466 /* sllg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2471 /* sllk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 2471 /* sllk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2476 /* slr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2480 /* slrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 2485 /* sly */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2485 /* sly */, MCK_GR32, 1 /* 0 */ },
  { 0, 2489 /* sqdb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2489 /* sqdb */, MCK_FP64, 1 /* 0 */ },
  { 0, 2494 /* sqdbr */, MCK_FP64, 3 /* 0, 1 */ },
  { 0, 2500 /* sqeb */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2500 /* sqeb */, MCK_FP32, 1 /* 0 */ },
  { 0, 2505 /* sqebr */, MCK_FP32, 3 /* 0, 1 */ },
  { 0, 2511 /* sqxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2517 /* sr */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2520 /* sra */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 2520 /* sra */, MCK_GR32, 1 /* 0 */ },
  { 0, 2524 /* srag */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 2524 /* srag */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2529 /* srak */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 2529 /* srak */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2534 /* srk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 2538 /* srl */, MCK_BDAddr32Disp12, 2 /* 1 */ },
  { 0, 2538 /* srl */, MCK_GR32, 1 /* 0 */ },
  { 0, 2542 /* srlg */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { 0, 2542 /* srlg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2547 /* srlk */, MCK_BDAddr32Disp20, 4 /* 2 */ },
  { Feature_FeatureDistinctOps, 2547 /* srlk */, MCK_GR32, 3 /* 0, 1 */ },
  { 0, 2552 /* st */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2552 /* st */, MCK_GR64, 1 /* 0 */ },
  { 0, 2555 /* stc */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2555 /* stc */, MCK_GR64, 1 /* 0 */ },
  { 0, 2559 /* stcy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2559 /* stcy */, MCK_GR64, 1 /* 0 */ },
  { 0, 2564 /* std */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2564 /* std */, MCK_FP64, 1 /* 0 */ },
  { 0, 2568 /* stdy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2568 /* stdy */, MCK_FP64, 1 /* 0 */ },
  { 0, 2573 /* ste */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2573 /* ste */, MCK_FP32, 1 /* 0 */ },
  { 0, 2577 /* stey */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2577 /* stey */, MCK_FP32, 1 /* 0 */ },
  { 0, 2582 /* stg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2582 /* stg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2586 /* stgrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2586 /* stgrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2592 /* sth */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2592 /* sth */, MCK_GR64, 1 /* 0 */ },
  { 0, 2596 /* sthrl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2596 /* sthrl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2602 /* sthy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2602 /* sthy */, MCK_GR64, 1 /* 0 */ },
  { 0, 2607 /* stmg */, MCK_BDAddr64Disp20, 4 /* 2 */ },
  { 0, 2607 /* stmg */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2612 /* stoc */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2612 /* stoc */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2617 /* stoce */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2617 /* stoce */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2623 /* stocg */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2623 /* stocg */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2629 /* stocge */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2629 /* stocge */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2636 /* stocgh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2636 /* stocgh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2643 /* stocghe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2643 /* stocghe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2651 /* stocgl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2651 /* stocgl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2658 /* stocgle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2658 /* stocgle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2666 /* stocglh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2666 /* stocglh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2674 /* stocgne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2674 /* stocgne */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2682 /* stocgnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2682 /* stocgnh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2690 /* stocgnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2690 /* stocgnhe */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2699 /* stocgnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2699 /* stocgnl */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2707 /* stocgnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2707 /* stocgnle */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2716 /* stocgnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2716 /* stocgnlh */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2725 /* stocgno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2725 /* stocgno */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2733 /* stocgo */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2733 /* stocgo */, MCK_GR64, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2740 /* stoch */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2740 /* stoch */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2746 /* stoche */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2746 /* stoche */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2753 /* stocl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2753 /* stocl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2759 /* stocle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2759 /* stocle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2766 /* stoclh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2766 /* stoclh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2773 /* stocne */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2773 /* stocne */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2780 /* stocnh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2780 /* stocnh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2787 /* stocnhe */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2787 /* stocnhe */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2795 /* stocnl */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2795 /* stocnl */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2802 /* stocnle */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2802 /* stocnle */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2810 /* stocnlh */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2810 /* stocnlh */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2818 /* stocno */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2818 /* stocno */, MCK_GR32, 1 /* 0 */ },
  { Feature_FeatureLoadStoreOnCond, 2825 /* stoco */, MCK_BDAddr64Disp20, 2 /* 1 */ },
  { Feature_FeatureLoadStoreOnCond, 2825 /* stoco */, MCK_GR32, 1 /* 0 */ },
  { 0, 2831 /* strl */, MCK_GR64, 1 /* 0 */ },
  { 0, 2831 /* strl */, MCK_PCRel32, 2 /* 1 */ },
  { 0, 2836 /* strv */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2836 /* strv */, MCK_GR32, 1 /* 0 */ },
  { 0, 2841 /* strvg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2841 /* strvg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2847 /* sty */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2847 /* sty */, MCK_GR64, 1 /* 0 */ },
  { 0, 2851 /* sxbr */, MCK_FP128, 3 /* 0, 1 */ },
  { 0, 2856 /* sy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2856 /* sy */, MCK_GR32, 1 /* 0 */ },
  { 0, 2859 /* x */, MCK_BDXAddr64Disp12, 2 /* 1 */ },
  { 0, 2859 /* x */, MCK_GR32, 1 /* 0 */ },
  { 0, 2861 /* xg */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2861 /* xg */, MCK_GR64, 1 /* 0 */ },
  { 0, 2864 /* xgr */, MCK_GR64, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2868 /* xgrk */, MCK_GR64, 7 /* 0, 1, 2 */ },
  { 0, 2873 /* xi */, MCK_BDAddr64Disp12, 1 /* 0 */ },
  { 0, 2876 /* xihf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2881 /* xilf */, MCK_GR64, 1 /* 0 */ },
  { 0, 2886 /* xiy */, MCK_BDAddr64Disp20, 1 /* 0 */ },
  { 0, 2890 /* xr */, MCK_GR32, 3 /* 0, 1 */ },
  { Feature_FeatureDistinctOps, 2893 /* xrk */, MCK_GR32, 7 /* 0, 1, 2 */ },
  { 0, 2897 /* xy */, MCK_BDXAddr64Disp20, 2 /* 1 */ },
  { 0, 2897 /* xy */, MCK_GR32, 1 /* 0 */ },
};

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
tryCustomParseOperand(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ADDR128:
    return parseADDR128(Operands);
  case MCK_ADDR32:
    return parseADDR32(Operands);
  case MCK_ADDR64:
    return parseADDR64(Operands);
  case MCK_AccessReg:
    return parseAccessReg(Operands);
  case MCK_BDAddr32Disp12:
    return parseBDAddr32(Operands);
  case MCK_BDAddr32Disp20:
    return parseBDAddr32(Operands);
  case MCK_BDAddr64Disp12:
    return parseBDAddr64(Operands);
  case MCK_BDAddr64Disp20:
    return parseBDAddr64(Operands);
  case MCK_BDLAddr64Disp12Len8:
    return parseBDLAddr64(Operands);
  case MCK_BDXAddr64Disp12:
    return parseBDXAddr64(Operands);
  case MCK_BDXAddr64Disp20:
    return parseBDXAddr64(Operands);
  case MCK_FP128:
    return parseFP128(Operands);
  case MCK_FP32:
    return parseFP32(Operands);
  case MCK_FP64:
    return parseFP64(Operands);
  case MCK_GR128:
    return parseGR128(Operands);
  case MCK_GR32:
    return parseGR32(Operands);
  case MCK_GR64:
    return parseGR64(Operands);
  case MCK_PCRel16:
    return parsePCRel16(Operands);
  case MCK_PCRel32:
    return parsePCRel32(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SystemZAsmParser::OperandMatchResultTy SystemZAsmParser::
MatchOperandParserImpl(SmallVectorImpl<MCParsedAsmOperand*> &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  unsigned AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+863, Mnemonic,
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

