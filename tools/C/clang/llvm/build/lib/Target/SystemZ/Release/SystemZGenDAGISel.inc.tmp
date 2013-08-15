/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the SystemZ target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*86 cases */, 55|128,24/*3127*/,  TARGET_VAL(ISD::STORE),// ->3132
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 25|128,19/*2457*/, /*->2467*/ // 2 children in Scope
/*10*/        OPC_MoveChild, 1,
/*12*/        OPC_SwitchOpcode /*7 cases */, 3|128,11/*1411*/,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->1428
/*17*/          OPC_CaptureGlueInput,
/*18*/          OPC_Scope, 79, /*->99*/ // 18 children in Scope
/*20*/            OPC_RecordChild0, // #1 = $new
/*21*/            OPC_MoveChild, 1,
/*23*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*26*/            OPC_RecordMemRef,
/*27*/            OPC_RecordNode, // #2 = 'ld' chained node
/*28*/            OPC_CheckFoldableChainNode,
/*29*/            OPC_RecordChild1, // #3 = $addr
/*30*/            OPC_CheckChild1Type, MVT::i64,
/*32*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*34*/            OPC_CheckPredicate, 1, // Predicate_anyextload
/*36*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*38*/            OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*40*/            OPC_MoveParent,
/*41*/            OPC_RecordChild2, // #4 = $valid
/*42*/            OPC_MoveChild, 2,
/*44*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*47*/            OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*49*/            OPC_MoveParent,
/*50*/            OPC_RecordChild3, // #5 = $cc
/*51*/            OPC_MoveChild, 3,
/*53*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*56*/            OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*58*/            OPC_MoveParent,
/*59*/            OPC_CheckType, MVT::i32,
/*61*/            OPC_MoveParent,
/*62*/            OPC_MoveChild, 2,
/*64*/            OPC_CheckSame, 3,
/*66*/            OPC_MoveParent,
/*67*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*69*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*71*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*73*/            OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*75*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*78*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*82*/            OPC_EmitConvertToTarget, 4,
/*84*/            OPC_EmitConvertToTarget, 5,
/*86*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*99*/          /*Scope*/ 79, /*->179*/
/*100*/           OPC_MoveChild, 0,
/*102*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*105*/           OPC_RecordMemRef,
/*106*/           OPC_RecordNode, // #1 = 'ld' chained node
/*107*/           OPC_CheckFoldableChainNode,
/*108*/           OPC_RecordChild1, // #2 = $addr
/*109*/           OPC_CheckChild1Type, MVT::i64,
/*111*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*113*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*115*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*117*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*119*/           OPC_MoveParent,
/*120*/           OPC_RecordChild1, // #3 = $new
/*121*/           OPC_RecordChild2, // #4 = $valid
/*122*/           OPC_MoveChild, 2,
/*124*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*127*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*129*/           OPC_MoveParent,
/*130*/           OPC_RecordChild3, // #5 = $cc
/*131*/           OPC_MoveChild, 3,
/*133*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*136*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*138*/           OPC_MoveParent,
/*139*/           OPC_CheckType, MVT::i32,
/*141*/           OPC_MoveParent,
/*142*/           OPC_MoveChild, 2,
/*144*/           OPC_CheckSame, 2,
/*146*/           OPC_MoveParent,
/*147*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*149*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*151*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*153*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*155*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*158*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*162*/           OPC_EmitConvertToTarget, 4,
/*164*/           OPC_EmitConvertToTarget, 5,
/*166*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*179*/         /*Scope*/ 79, /*->259*/
/*180*/           OPC_RecordChild0, // #1 = $new
/*181*/           OPC_MoveChild, 1,
/*183*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*186*/           OPC_RecordMemRef,
/*187*/           OPC_RecordNode, // #2 = 'ld' chained node
/*188*/           OPC_CheckFoldableChainNode,
/*189*/           OPC_RecordChild1, // #3 = $addr
/*190*/           OPC_CheckChild1Type, MVT::i64,
/*192*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*194*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*196*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*198*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*200*/           OPC_MoveParent,
/*201*/           OPC_RecordChild2, // #4 = $valid
/*202*/           OPC_MoveChild, 2,
/*204*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*207*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*209*/           OPC_MoveParent,
/*210*/           OPC_RecordChild3, // #5 = $cc
/*211*/           OPC_MoveChild, 3,
/*213*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*216*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*218*/           OPC_MoveParent,
/*219*/           OPC_CheckType, MVT::i32,
/*221*/           OPC_MoveParent,
/*222*/           OPC_MoveChild, 2,
/*224*/           OPC_CheckSame, 3,
/*226*/           OPC_MoveParent,
/*227*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*229*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*231*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*233*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*235*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*238*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*242*/           OPC_EmitConvertToTarget, 4,
/*244*/           OPC_EmitConvertToTarget, 5,
/*246*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*259*/         /*Scope*/ 79, /*->339*/
/*260*/           OPC_MoveChild, 0,
/*262*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*265*/           OPC_RecordMemRef,
/*266*/           OPC_RecordNode, // #1 = 'ld' chained node
/*267*/           OPC_CheckFoldableChainNode,
/*268*/           OPC_RecordChild1, // #2 = $addr
/*269*/           OPC_CheckChild1Type, MVT::i64,
/*271*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*273*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*275*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*277*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*279*/           OPC_MoveParent,
/*280*/           OPC_RecordChild1, // #3 = $new
/*281*/           OPC_RecordChild2, // #4 = $valid
/*282*/           OPC_MoveChild, 2,
/*284*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*287*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*289*/           OPC_MoveParent,
/*290*/           OPC_RecordChild3, // #5 = $cc
/*291*/           OPC_MoveChild, 3,
/*293*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*296*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*298*/           OPC_MoveParent,
/*299*/           OPC_CheckType, MVT::i32,
/*301*/           OPC_MoveParent,
/*302*/           OPC_MoveChild, 2,
/*304*/           OPC_CheckSame, 2,
/*306*/           OPC_MoveParent,
/*307*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*309*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*311*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*313*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*315*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*318*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*322*/           OPC_EmitConvertToTarget, 4,
/*324*/           OPC_EmitConvertToTarget, 5,
/*326*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*339*/         /*Scope*/ 75, /*->415*/
/*340*/           OPC_RecordChild0, // #1 = $new
/*341*/           OPC_MoveChild, 1,
/*343*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*346*/           OPC_RecordMemRef,
/*347*/           OPC_RecordNode, // #2 = 'ld' chained node
/*348*/           OPC_CheckFoldableChainNode,
/*349*/           OPC_RecordChild1, // #3 = $addr
/*350*/           OPC_CheckChild1Type, MVT::i64,
/*352*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*354*/           OPC_CheckPredicate, 13, // Predicate_load
/*356*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*358*/           OPC_MoveParent,
/*359*/           OPC_RecordChild2, // #4 = $valid
/*360*/           OPC_MoveChild, 2,
/*362*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*365*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*367*/           OPC_MoveParent,
/*368*/           OPC_RecordChild3, // #5 = $cc
/*369*/           OPC_MoveChild, 3,
/*371*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*374*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*376*/           OPC_MoveParent,
/*377*/           OPC_CheckType, MVT::i32,
/*379*/           OPC_MoveParent,
/*380*/           OPC_MoveChild, 2,
/*382*/           OPC_CheckSame, 3,
/*384*/           OPC_MoveParent,
/*385*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*387*/           OPC_CheckPredicate, 15, // Predicate_store
/*389*/           OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*391*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*394*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*398*/           OPC_EmitConvertToTarget, 4,
/*400*/           OPC_EmitConvertToTarget, 5,
/*402*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32_32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 GR32:i32:$new, (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore32_32:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*415*/         /*Scope*/ 75, /*->491*/
/*416*/           OPC_MoveChild, 0,
/*418*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*421*/           OPC_RecordMemRef,
/*422*/           OPC_RecordNode, // #1 = 'ld' chained node
/*423*/           OPC_CheckFoldableChainNode,
/*424*/           OPC_RecordChild1, // #2 = $addr
/*425*/           OPC_CheckChild1Type, MVT::i64,
/*427*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*429*/           OPC_CheckPredicate, 13, // Predicate_load
/*431*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*433*/           OPC_MoveParent,
/*434*/           OPC_RecordChild1, // #3 = $new
/*435*/           OPC_RecordChild2, // #4 = $valid
/*436*/           OPC_MoveChild, 2,
/*438*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*441*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*443*/           OPC_MoveParent,
/*444*/           OPC_RecordChild3, // #5 = $cc
/*445*/           OPC_MoveChild, 3,
/*447*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*450*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*452*/           OPC_MoveParent,
/*453*/           OPC_CheckType, MVT::i32,
/*455*/           OPC_MoveParent,
/*456*/           OPC_MoveChild, 2,
/*458*/           OPC_CheckSame, 2,
/*460*/           OPC_MoveParent,
/*461*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*463*/           OPC_CheckPredicate, 15, // Predicate_store
/*465*/           OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*467*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*470*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*474*/           OPC_EmitConvertToTarget, 4,
/*476*/           OPC_EmitConvertToTarget, 5,
/*478*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32_32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i32 (ld:i32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR32:i32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore32_32Inv:i32 GR32:i32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*491*/         /*Scope*/ 79, /*->571*/
/*492*/           OPC_RecordChild0, // #1 = $new
/*493*/           OPC_MoveChild, 1,
/*495*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*498*/           OPC_RecordMemRef,
/*499*/           OPC_RecordNode, // #2 = 'ld' chained node
/*500*/           OPC_CheckFoldableChainNode,
/*501*/           OPC_RecordChild1, // #3 = $addr
/*502*/           OPC_CheckChild1Type, MVT::i64,
/*504*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*506*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*508*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*510*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*512*/           OPC_MoveParent,
/*513*/           OPC_RecordChild2, // #4 = $valid
/*514*/           OPC_MoveChild, 2,
/*516*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*519*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*521*/           OPC_MoveParent,
/*522*/           OPC_RecordChild3, // #5 = $cc
/*523*/           OPC_MoveChild, 3,
/*525*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*528*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*530*/           OPC_MoveParent,
/*531*/           OPC_CheckType, MVT::i64,
/*533*/           OPC_MoveParent,
/*534*/           OPC_MoveChild, 2,
/*536*/           OPC_CheckSame, 3,
/*538*/           OPC_MoveParent,
/*539*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*541*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*543*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*545*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*547*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*550*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*554*/           OPC_EmitConvertToTarget, 4,
/*556*/           OPC_EmitConvertToTarget, 5,
/*558*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*571*/         /*Scope*/ 79, /*->651*/
/*572*/           OPC_MoveChild, 0,
/*574*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*577*/           OPC_RecordMemRef,
/*578*/           OPC_RecordNode, // #1 = 'ld' chained node
/*579*/           OPC_CheckFoldableChainNode,
/*580*/           OPC_RecordChild1, // #2 = $addr
/*581*/           OPC_CheckChild1Type, MVT::i64,
/*583*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*585*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*587*/           OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*589*/           OPC_CheckPredicate, 3, // Predicate_nonvolatile_anyextloadi8
/*591*/           OPC_MoveParent,
/*592*/           OPC_RecordChild1, // #3 = $new
/*593*/           OPC_RecordChild2, // #4 = $valid
/*594*/           OPC_MoveChild, 2,
/*596*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*599*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*601*/           OPC_MoveParent,
/*602*/           OPC_RecordChild3, // #5 = $cc
/*603*/           OPC_MoveChild, 3,
/*605*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*608*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*610*/           OPC_MoveParent,
/*611*/           OPC_CheckType, MVT::i64,
/*613*/           OPC_MoveParent,
/*614*/           OPC_MoveChild, 2,
/*616*/           OPC_CheckSame, 2,
/*618*/           OPC_MoveParent,
/*619*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*621*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*623*/           OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*625*/           OPC_CheckPredicate, 8, // Predicate_nonvolatile_truncstorei8
/*627*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*630*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*634*/           OPC_EmitConvertToTarget, 4,
/*636*/           OPC_EmitConvertToTarget, 5,
/*638*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore8Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>><<P:Predicate_nonvolatile_anyextloadi8>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_nonvolatile_truncstorei8>> - Complexity = 43
                  // Dst: (CondStore8Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*651*/         /*Scope*/ 79, /*->731*/
/*652*/           OPC_RecordChild0, // #1 = $new
/*653*/           OPC_MoveChild, 1,
/*655*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*658*/           OPC_RecordMemRef,
/*659*/           OPC_RecordNode, // #2 = 'ld' chained node
/*660*/           OPC_CheckFoldableChainNode,
/*661*/           OPC_RecordChild1, // #3 = $addr
/*662*/           OPC_CheckChild1Type, MVT::i64,
/*664*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*666*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*668*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*670*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*672*/           OPC_MoveParent,
/*673*/           OPC_RecordChild2, // #4 = $valid
/*674*/           OPC_MoveChild, 2,
/*676*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*679*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*681*/           OPC_MoveParent,
/*682*/           OPC_RecordChild3, // #5 = $cc
/*683*/           OPC_MoveChild, 3,
/*685*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*688*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*690*/           OPC_MoveParent,
/*691*/           OPC_CheckType, MVT::i64,
/*693*/           OPC_MoveParent,
/*694*/           OPC_MoveChild, 2,
/*696*/           OPC_CheckSame, 3,
/*698*/           OPC_MoveParent,
/*699*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*701*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*703*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*705*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*707*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*710*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*714*/           OPC_EmitConvertToTarget, 4,
/*716*/           OPC_EmitConvertToTarget, 5,
/*718*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*731*/         /*Scope*/ 79, /*->811*/
/*732*/           OPC_MoveChild, 0,
/*734*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*737*/           OPC_RecordMemRef,
/*738*/           OPC_RecordNode, // #1 = 'ld' chained node
/*739*/           OPC_CheckFoldableChainNode,
/*740*/           OPC_RecordChild1, // #2 = $addr
/*741*/           OPC_CheckChild1Type, MVT::i64,
/*743*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*745*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*747*/           OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*749*/           OPC_CheckPredicate, 10, // Predicate_nonvolatile_anyextloadi16
/*751*/           OPC_MoveParent,
/*752*/           OPC_RecordChild1, // #3 = $new
/*753*/           OPC_RecordChild2, // #4 = $valid
/*754*/           OPC_MoveChild, 2,
/*756*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*759*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*761*/           OPC_MoveParent,
/*762*/           OPC_RecordChild3, // #5 = $cc
/*763*/           OPC_MoveChild, 3,
/*765*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*768*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*770*/           OPC_MoveParent,
/*771*/           OPC_CheckType, MVT::i64,
/*773*/           OPC_MoveParent,
/*774*/           OPC_MoveChild, 2,
/*776*/           OPC_CheckSame, 2,
/*778*/           OPC_MoveParent,
/*779*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*781*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*783*/           OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*785*/           OPC_CheckPredicate, 12, // Predicate_nonvolatile_truncstorei16
/*787*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*790*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*794*/           OPC_EmitConvertToTarget, 4,
/*796*/           OPC_EmitConvertToTarget, 5,
/*798*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore16Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>><<P:Predicate_nonvolatile_anyextloadi16>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_nonvolatile_truncstorei16>> - Complexity = 43
                  // Dst: (CondStore16Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*811*/         /*Scope*/ 79, /*->891*/
/*812*/           OPC_RecordChild0, // #1 = $new
/*813*/           OPC_MoveChild, 1,
/*815*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*818*/           OPC_RecordMemRef,
/*819*/           OPC_RecordNode, // #2 = 'ld' chained node
/*820*/           OPC_CheckFoldableChainNode,
/*821*/           OPC_RecordChild1, // #3 = $addr
/*822*/           OPC_CheckChild1Type, MVT::i64,
/*824*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*826*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*828*/           OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*830*/           OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*832*/           OPC_MoveParent,
/*833*/           OPC_RecordChild2, // #4 = $valid
/*834*/           OPC_MoveChild, 2,
/*836*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*839*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*841*/           OPC_MoveParent,
/*842*/           OPC_RecordChild3, // #5 = $cc
/*843*/           OPC_MoveChild, 3,
/*845*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*848*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*850*/           OPC_MoveParent,
/*851*/           OPC_CheckType, MVT::i64,
/*853*/           OPC_MoveParent,
/*854*/           OPC_MoveChild, 2,
/*856*/           OPC_CheckSame, 3,
/*858*/           OPC_MoveParent,
/*859*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*861*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*863*/           OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*865*/           OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*867*/           OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*870*/           OPC_EmitMergeInputChains, 2, 0, 2, 
/*874*/           OPC_EmitConvertToTarget, 4,
/*876*/           OPC_EmitConvertToTarget, 5,
/*878*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                  // Dst: (CondStore32:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*891*/         /*Scope*/ 79, /*->971*/
/*892*/           OPC_MoveChild, 0,
/*894*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*897*/           OPC_RecordMemRef,
/*898*/           OPC_RecordNode, // #1 = 'ld' chained node
/*899*/           OPC_CheckFoldableChainNode,
/*900*/           OPC_RecordChild1, // #2 = $addr
/*901*/           OPC_CheckChild1Type, MVT::i64,
/*903*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*905*/           OPC_CheckPredicate, 1, // Predicate_anyextload
/*907*/           OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*909*/           OPC_CheckPredicate, 18, // Predicate_nonvolatile_anyextloadi32
/*911*/           OPC_MoveParent,
/*912*/           OPC_RecordChild1, // #3 = $new
/*913*/           OPC_RecordChild2, // #4 = $valid
/*914*/           OPC_MoveChild, 2,
/*916*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*919*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*921*/           OPC_MoveParent,
/*922*/           OPC_RecordChild3, // #5 = $cc
/*923*/           OPC_MoveChild, 3,
/*925*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*928*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*930*/           OPC_MoveParent,
/*931*/           OPC_CheckType, MVT::i64,
/*933*/           OPC_MoveParent,
/*934*/           OPC_MoveChild, 2,
/*936*/           OPC_CheckSame, 2,
/*938*/           OPC_MoveParent,
/*939*/           OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*941*/           OPC_CheckPredicate, 6, // Predicate_truncstore
/*943*/           OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*945*/           OPC_CheckPredicate, 20, // Predicate_nonvolatile_truncstorei32
/*947*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*950*/           OPC_EmitMergeInputChains, 2, 0, 1, 
/*954*/           OPC_EmitConvertToTarget, 4,
/*956*/           OPC_EmitConvertToTarget, 5,
/*958*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>><<P:Predicate_nonvolatile_anyextloadi32>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_nonvolatile_truncstorei32>> - Complexity = 43
                  // Dst: (CondStore32Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*971*/         /*Scope*/ 75, /*->1047*/
/*972*/           OPC_RecordChild0, // #1 = $new
/*973*/           OPC_MoveChild, 1,
/*975*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*978*/           OPC_RecordMemRef,
/*979*/           OPC_RecordNode, // #2 = 'ld' chained node
/*980*/           OPC_CheckFoldableChainNode,
/*981*/           OPC_RecordChild1, // #3 = $addr
/*982*/           OPC_CheckChild1Type, MVT::i64,
/*984*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*986*/           OPC_CheckPredicate, 13, // Predicate_load
/*988*/           OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*990*/           OPC_MoveParent,
/*991*/           OPC_RecordChild2, // #4 = $valid
/*992*/           OPC_MoveChild, 2,
/*994*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*997*/           OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*999*/           OPC_MoveParent,
/*1000*/          OPC_RecordChild3, // #5 = $cc
/*1001*/          OPC_MoveChild, 3,
/*1003*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1006*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_CheckType, MVT::i64,
/*1011*/          OPC_MoveParent,
/*1012*/          OPC_MoveChild, 2,
/*1014*/          OPC_CheckSame, 3,
/*1016*/          OPC_MoveParent,
/*1017*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1019*/          OPC_CheckPredicate, 15, // Predicate_store
/*1021*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1023*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1026*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1030*/          OPC_EmitConvertToTarget, 4,
/*1032*/          OPC_EmitConvertToTarget, 5,
/*1034*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 GR64:i64:$new, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore64:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1047*/        /*Scope*/ 75, /*->1123*/
/*1048*/          OPC_MoveChild, 0,
/*1050*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1053*/          OPC_RecordMemRef,
/*1054*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1055*/          OPC_CheckFoldableChainNode,
/*1056*/          OPC_RecordChild1, // #2 = $addr
/*1057*/          OPC_CheckChild1Type, MVT::i64,
/*1059*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1061*/          OPC_CheckPredicate, 13, // Predicate_load
/*1063*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1065*/          OPC_MoveParent,
/*1066*/          OPC_RecordChild1, // #3 = $new
/*1067*/          OPC_RecordChild2, // #4 = $valid
/*1068*/          OPC_MoveChild, 2,
/*1070*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1073*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1075*/          OPC_MoveParent,
/*1076*/          OPC_RecordChild3, // #5 = $cc
/*1077*/          OPC_MoveChild, 3,
/*1079*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1082*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1084*/          OPC_MoveParent,
/*1085*/          OPC_CheckType, MVT::i64,
/*1087*/          OPC_MoveParent,
/*1088*/          OPC_MoveChild, 2,
/*1090*/          OPC_CheckSame, 2,
/*1092*/          OPC_MoveParent,
/*1093*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1095*/          OPC_CheckPredicate, 15, // Predicate_store
/*1097*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1099*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1102*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1106*/          OPC_EmitConvertToTarget, 4,
/*1108*/          OPC_EmitConvertToTarget, 5,
/*1110*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStore64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, GR64:i64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStore64Inv:i32 GR64:i64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1123*/        /*Scope*/ 75, /*->1199*/
/*1124*/          OPC_RecordChild0, // #1 = $new
/*1125*/          OPC_MoveChild, 1,
/*1127*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1130*/          OPC_RecordMemRef,
/*1131*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1132*/          OPC_CheckFoldableChainNode,
/*1133*/          OPC_RecordChild1, // #3 = $addr
/*1134*/          OPC_CheckChild1Type, MVT::i64,
/*1136*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1138*/          OPC_CheckPredicate, 13, // Predicate_load
/*1140*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1142*/          OPC_MoveParent,
/*1143*/          OPC_RecordChild2, // #4 = $valid
/*1144*/          OPC_MoveChild, 2,
/*1146*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1149*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1151*/          OPC_MoveParent,
/*1152*/          OPC_RecordChild3, // #5 = $cc
/*1153*/          OPC_MoveChild, 3,
/*1155*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1158*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1160*/          OPC_MoveParent,
/*1161*/          OPC_CheckType, MVT::f32,
/*1163*/          OPC_MoveParent,
/*1164*/          OPC_MoveChild, 2,
/*1166*/          OPC_CheckSame, 3,
/*1168*/          OPC_MoveParent,
/*1169*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1171*/          OPC_CheckPredicate, 15, // Predicate_store
/*1173*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1175*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1178*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1182*/          OPC_EmitConvertToTarget, 4,
/*1184*/          OPC_EmitConvertToTarget, 5,
/*1186*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f32 FP32:f32:$new, (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF32:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1199*/        /*Scope*/ 75, /*->1275*/
/*1200*/          OPC_MoveChild, 0,
/*1202*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1205*/          OPC_RecordMemRef,
/*1206*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1207*/          OPC_CheckFoldableChainNode,
/*1208*/          OPC_RecordChild1, // #2 = $addr
/*1209*/          OPC_CheckChild1Type, MVT::i64,
/*1211*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1213*/          OPC_CheckPredicate, 13, // Predicate_load
/*1215*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1217*/          OPC_MoveParent,
/*1218*/          OPC_RecordChild1, // #3 = $new
/*1219*/          OPC_RecordChild2, // #4 = $valid
/*1220*/          OPC_MoveChild, 2,
/*1222*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1225*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1227*/          OPC_MoveParent,
/*1228*/          OPC_RecordChild3, // #5 = $cc
/*1229*/          OPC_MoveChild, 3,
/*1231*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1234*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1236*/          OPC_MoveParent,
/*1237*/          OPC_CheckType, MVT::f32,
/*1239*/          OPC_MoveParent,
/*1240*/          OPC_MoveChild, 2,
/*1242*/          OPC_CheckSame, 2,
/*1244*/          OPC_MoveParent,
/*1245*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1247*/          OPC_CheckPredicate, 15, // Predicate_store
/*1249*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1251*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1254*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1258*/          OPC_EmitConvertToTarget, 4,
/*1260*/          OPC_EmitConvertToTarget, 5,
/*1262*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF32Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f32 (ld:f32 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP32:f32:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF32Inv:i32 FP32:f32:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1275*/        /*Scope*/ 75, /*->1351*/
/*1276*/          OPC_RecordChild0, // #1 = $new
/*1277*/          OPC_MoveChild, 1,
/*1279*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1282*/          OPC_RecordMemRef,
/*1283*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1284*/          OPC_CheckFoldableChainNode,
/*1285*/          OPC_RecordChild1, // #3 = $addr
/*1286*/          OPC_CheckChild1Type, MVT::i64,
/*1288*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1290*/          OPC_CheckPredicate, 13, // Predicate_load
/*1292*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1294*/          OPC_MoveParent,
/*1295*/          OPC_RecordChild2, // #4 = $valid
/*1296*/          OPC_MoveChild, 2,
/*1298*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1301*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1303*/          OPC_MoveParent,
/*1304*/          OPC_RecordChild3, // #5 = $cc
/*1305*/          OPC_MoveChild, 3,
/*1307*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1310*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1312*/          OPC_MoveParent,
/*1313*/          OPC_CheckType, MVT::f64,
/*1315*/          OPC_MoveParent,
/*1316*/          OPC_MoveChild, 2,
/*1318*/          OPC_CheckSame, 3,
/*1320*/          OPC_MoveParent,
/*1321*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1323*/          OPC_CheckPredicate, 15, // Predicate_store
/*1325*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1327*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // selectBDXAddr20Only:$addr #6 #7 #8
/*1330*/          OPC_EmitMergeInputChains, 2, 0, 2, 
/*1334*/          OPC_EmitConvertToTarget, 4,
/*1336*/          OPC_EmitConvertToTarget, 5,
/*1338*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f64 FP64:f64:$new, (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF64:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1351*/        /*Scope*/ 75, /*->1427*/
/*1352*/          OPC_MoveChild, 0,
/*1354*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1357*/          OPC_RecordMemRef,
/*1358*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1359*/          OPC_CheckFoldableChainNode,
/*1360*/          OPC_RecordChild1, // #2 = $addr
/*1361*/          OPC_CheckChild1Type, MVT::i64,
/*1363*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1365*/          OPC_CheckPredicate, 13, // Predicate_load
/*1367*/          OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*1369*/          OPC_MoveParent,
/*1370*/          OPC_RecordChild1, // #3 = $new
/*1371*/          OPC_RecordChild2, // #4 = $valid
/*1372*/          OPC_MoveChild, 2,
/*1374*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1377*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1379*/          OPC_MoveParent,
/*1380*/          OPC_RecordChild3, // #5 = $cc
/*1381*/          OPC_MoveChild, 3,
/*1383*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1386*/          OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*1388*/          OPC_MoveParent,
/*1389*/          OPC_CheckType, MVT::f64,
/*1391*/          OPC_MoveParent,
/*1392*/          OPC_MoveChild, 2,
/*1394*/          OPC_CheckSame, 2,
/*1396*/          OPC_MoveParent,
/*1397*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1399*/          OPC_CheckPredicate, 15, // Predicate_store
/*1401*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*1403*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #6 #7 #8
/*1406*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1410*/          OPC_EmitConvertToTarget, 4,
/*1412*/          OPC_EmitConvertToTarget, 5,
/*1414*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CondStoreF64Inv), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 6/*#Ops*/, 3, 6, 7, 8, 9, 10, 
                  // Src: (st (z_select_ccmask:f64 (ld:f64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>, FP64:f64:$new, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), bdxaddr20only:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 43
                  // Dst: (CondStoreF64Inv:i32 FP64:f64:$new, bdxaddr20only:i64:$addr, (imm:i8):$valid, (imm:i8):$cc)
/*1427*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 100,  TARGET_VAL(ISD::ADD),// ->1531
/*1431*/        OPC_MoveChild, 0,
/*1433*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1436*/        OPC_RecordMemRef,
/*1437*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1438*/        OPC_CheckFoldableChainNode,
/*1439*/        OPC_RecordChild1, // #2 = $BD1
/*1440*/        OPC_CheckChild1Type, MVT::i64,
/*1442*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1444*/        OPC_CheckPredicate, 13, // Predicate_load
/*1446*/        OPC_MoveParent,
/*1447*/        OPC_RecordChild1, // #3 = $I2
/*1448*/        OPC_MoveChild, 1,
/*1450*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1453*/        OPC_Scope, 37, /*->1492*/ // 2 children in Scope
/*1455*/          OPC_CheckPredicate, 21, // Predicate_imm32sx8
/*1457*/          OPC_MoveParent,
/*1458*/          OPC_CheckType, MVT::i32,
/*1460*/          OPC_MoveParent,
/*1461*/          OPC_MoveChild, 2,
/*1463*/          OPC_CheckSame, 2,
/*1465*/          OPC_MoveParent,
/*1466*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1468*/          OPC_CheckPredicate, 15, // Predicate_store
/*1470*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*1473*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1477*/          OPC_EmitConvertToTarget, 3,
/*1479*/          OPC_EmitNodeXForm, 0, 6, // SIMM8
/*1482*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ASI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i32 (ld:i32 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (ASI:i32 bdaddr20only:i64:$BD1, (SIMM8:i32 (imm:i32):$I2))
/*1492*/        /*Scope*/ 37, /*->1530*/
/*1493*/          OPC_CheckPredicate, 22, // Predicate_imm64sx8
/*1495*/          OPC_MoveParent,
/*1496*/          OPC_CheckType, MVT::i64,
/*1498*/          OPC_MoveParent,
/*1499*/          OPC_MoveChild, 2,
/*1501*/          OPC_CheckSame, 2,
/*1503*/          OPC_MoveParent,
/*1504*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1506*/          OPC_CheckPredicate, 15, // Predicate_store
/*1508*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectBDAddr20Only:$BD1 #4 #5
/*1511*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*1515*/          OPC_EmitConvertToTarget, 3,
/*1517*/          OPC_EmitNodeXForm, 0, 6, // SIMM8
/*1520*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGSI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                  // Src: (st (add:i64 (ld:i64 bdaddr20only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx8>><<X:SIMM8>>:$I2), bdaddr20only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 33
                  // Dst: (AGSI:i32 bdaddr20only:i64:$BD1, (SIMM8:i64 (imm:i64):$I2))
/*1530*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::AND),// ->1686
/*1535*/        OPC_MoveChild, 0,
/*1537*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1540*/        OPC_RecordMemRef,
/*1541*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1542*/        OPC_CheckFoldableChainNode,
/*1543*/        OPC_RecordChild1, // #2 = $addr
/*1544*/        OPC_CheckChild1Type, MVT::i64,
/*1546*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1548*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1550*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1552*/        OPC_MoveParent,
/*1553*/        OPC_RecordChild1, // #3 = $src
/*1554*/        OPC_MoveChild, 1,
/*1556*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1559*/        OPC_MoveParent,
/*1560*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1623
/*1563*/          OPC_MoveParent,
/*1564*/          OPC_MoveChild, 2,
/*1566*/          OPC_CheckSame, 2,
/*1568*/          OPC_MoveParent,
/*1569*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1571*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1573*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1575*/          OPC_Scope, 22, /*->1599*/ // 2 children in Scope
/*1577*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1580*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1584*/            OPC_EmitConvertToTarget, 3,
/*1586*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1589*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1599*/          /*Scope*/ 22, /*->1622*/
/*1600*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1603*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1607*/            OPC_EmitConvertToTarget, 3,
/*1609*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1612*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1622*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1685
/*1625*/          OPC_MoveParent,
/*1626*/          OPC_MoveChild, 2,
/*1628*/          OPC_CheckSame, 2,
/*1630*/          OPC_MoveParent,
/*1631*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1633*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1635*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1637*/          OPC_Scope, 22, /*->1661*/ // 2 children in Scope
/*1639*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1642*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1646*/            OPC_EmitConvertToTarget, 3,
/*1648*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1651*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1661*/          /*Scope*/ 22, /*->1684*/
/*1662*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1665*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1669*/            OPC_EmitConvertToTarget, 3,
/*1671*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1674*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (and:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (NIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1684*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::OR),// ->1841
/*1690*/        OPC_MoveChild, 0,
/*1692*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1695*/        OPC_RecordMemRef,
/*1696*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1697*/        OPC_CheckFoldableChainNode,
/*1698*/        OPC_RecordChild1, // #2 = $addr
/*1699*/        OPC_CheckChild1Type, MVT::i64,
/*1701*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1703*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1705*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1707*/        OPC_MoveParent,
/*1708*/        OPC_RecordChild1, // #3 = $src
/*1709*/        OPC_MoveChild, 1,
/*1711*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1714*/        OPC_MoveParent,
/*1715*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1778
/*1718*/          OPC_MoveParent,
/*1719*/          OPC_MoveChild, 2,
/*1721*/          OPC_CheckSame, 2,
/*1723*/          OPC_MoveParent,
/*1724*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1726*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1728*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1730*/          OPC_Scope, 22, /*->1754*/ // 2 children in Scope
/*1732*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1735*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1739*/            OPC_EmitConvertToTarget, 3,
/*1741*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1744*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1754*/          /*Scope*/ 22, /*->1777*/
/*1755*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1758*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1762*/            OPC_EmitConvertToTarget, 3,
/*1764*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1767*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1777*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1840
/*1780*/          OPC_MoveParent,
/*1781*/          OPC_MoveChild, 2,
/*1783*/          OPC_CheckSame, 2,
/*1785*/          OPC_MoveParent,
/*1786*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1788*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1790*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1792*/          OPC_Scope, 22, /*->1816*/ // 2 children in Scope
/*1794*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1797*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1801*/            OPC_EmitConvertToTarget, 3,
/*1803*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1806*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1816*/          /*Scope*/ 22, /*->1839*/
/*1817*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1820*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1824*/            OPC_EmitConvertToTarget, 3,
/*1826*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1829*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (or:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (OIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1839*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::XOR),// ->1996
/*1845*/        OPC_MoveChild, 0,
/*1847*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1850*/        OPC_RecordMemRef,
/*1851*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1852*/        OPC_CheckFoldableChainNode,
/*1853*/        OPC_RecordChild1, // #2 = $addr
/*1854*/        OPC_CheckChild1Type, MVT::i64,
/*1856*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1858*/        OPC_CheckPredicate, 1, // Predicate_anyextload
/*1860*/        OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*1862*/        OPC_MoveParent,
/*1863*/        OPC_RecordChild1, // #3 = $src
/*1864*/        OPC_MoveChild, 1,
/*1866*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1869*/        OPC_MoveParent,
/*1870*/        OPC_SwitchType /*2 cases */, 60,  MVT::i32,// ->1933
/*1873*/          OPC_MoveParent,
/*1874*/          OPC_MoveChild, 2,
/*1876*/          OPC_CheckSame, 2,
/*1878*/          OPC_MoveParent,
/*1879*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1881*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1883*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1885*/          OPC_Scope, 22, /*->1909*/ // 2 children in Scope
/*1887*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1890*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1894*/            OPC_EmitConvertToTarget, 3,
/*1896*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1899*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1909*/          /*Scope*/ 22, /*->1932*/
/*1910*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1913*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1917*/            OPC_EmitConvertToTarget, 3,
/*1919*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1922*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i32 (ld:i32 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i32):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i32):$src))
/*1932*/          0, /*End of Scope*/
                /*SwitchType*/ 60,  MVT::i64,// ->1995
/*1935*/          OPC_MoveParent,
/*1936*/          OPC_MoveChild, 2,
/*1938*/          OPC_CheckSame, 2,
/*1940*/          OPC_MoveParent,
/*1941*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*1943*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*1945*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*1947*/          OPC_Scope, 22, /*->1971*/ // 2 children in Scope
/*1949*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$addr #4 #5
/*1952*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1956*/            OPC_EmitConvertToTarget, 3,
/*1958*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1961*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XI), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr12pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr12pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XI:i32 bdaddr12pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1971*/          /*Scope*/ 22, /*->1994*/
/*1972*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$addr #4 #5
/*1975*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*1979*/            OPC_EmitConvertToTarget, 3,
/*1981*/            OPC_EmitNodeXForm, 1, 6, // UIMM8
/*1984*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 5, 7, 
                    // Src: (st (xor:i64 (ld:i64 bdaddr20pair:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, (imm:i64):$src), bdaddr20pair:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 32
                    // Dst: (XIY:i32 bdaddr20pair:i64:$addr, (UIMM8:i8 (imm:i64):$src))
/*1994*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchOpcode*/ 24|128,3/*408*/,  TARGET_VAL(ISD::LOAD),// ->2408
/*2000*/        OPC_RecordMemRef,
/*2001*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2002*/        OPC_CheckFoldableChainNode,
/*2003*/        OPC_RecordChild1, // #2 = $src
/*2004*/        OPC_CheckChild1Type, MVT::i64,
/*2006*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2008*/        OPC_Scope, 84, /*->2094*/ // 4 children in Scope
/*2010*/          OPC_CheckPredicate, 1, // Predicate_anyextload
/*2012*/          OPC_CheckType, MVT::i32,
/*2014*/          OPC_Scope, 38, /*->2054*/ // 2 children in Scope
/*2016*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2018*/            OPC_MoveParent,
/*2019*/            OPC_RecordChild2, // #3 = $dest
/*2020*/            OPC_CheckChild2Type, MVT::i64,
/*2022*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2024*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2026*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2028*/            OPC_CheckPredicate, 23, // Predicate_LoadStore8_32Pat
/*2030*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2033*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2036*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2040*/            OPC_EmitInteger, MVT::i32, 1, 
/*2043*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_LoadStore8_32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i32)
/*2054*/          /*Scope*/ 38, /*->2093*/
/*2055*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2057*/            OPC_MoveParent,
/*2058*/            OPC_RecordChild2, // #3 = $dest
/*2059*/            OPC_CheckChild2Type, MVT::i64,
/*2061*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2063*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2065*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2067*/            OPC_CheckPredicate, 24, // Predicate_LoadStore16_32Pat
/*2069*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2072*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2075*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2079*/            OPC_EmitInteger, MVT::i32, 2, 
/*2082*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_LoadStore16_32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i32)
/*2093*/          0, /*End of Scope*/
/*2094*/        /*Scope*/ 38, /*->2133*/
/*2095*/          OPC_CheckPredicate, 13, // Predicate_load
/*2097*/          OPC_CheckType, MVT::i32,
/*2099*/          OPC_MoveParent,
/*2100*/          OPC_RecordChild2, // #3 = $dest
/*2101*/          OPC_CheckChild2Type, MVT::i64,
/*2103*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2105*/          OPC_CheckPredicate, 15, // Predicate_store
/*2107*/          OPC_CheckPredicate, 25, // Predicate_LoadStore32_32Pat
/*2109*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2112*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2115*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*2119*/          OPC_EmitInteger, MVT::i32, 4, 
/*2122*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                  // Src: (st (ld:i32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStore32_32Pat>> - Complexity = 26
                  // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i32)
/*2133*/        /*Scope*/ 123, /*->2257*/
/*2134*/          OPC_CheckPredicate, 1, // Predicate_anyextload
/*2136*/          OPC_CheckType, MVT::i64,
/*2138*/          OPC_Scope, 38, /*->2178*/ // 3 children in Scope
/*2140*/            OPC_CheckPredicate, 2, // Predicate_anyextloadi8
/*2142*/            OPC_MoveParent,
/*2143*/            OPC_RecordChild2, // #3 = $dest
/*2144*/            OPC_CheckChild2Type, MVT::i64,
/*2146*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2148*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2150*/            OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2152*/            OPC_CheckPredicate, 26, // Predicate_LoadStore8Pat
/*2154*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2157*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2160*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2164*/            OPC_EmitInteger, MVT::i32, 1, 
/*2167*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi8>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_LoadStore8Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 1:i32)
/*2178*/          /*Scope*/ 38, /*->2217*/
/*2179*/            OPC_CheckPredicate, 9, // Predicate_anyextloadi16
/*2181*/            OPC_MoveParent,
/*2182*/            OPC_RecordChild2, // #3 = $dest
/*2183*/            OPC_CheckChild2Type, MVT::i64,
/*2185*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2187*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2189*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2191*/            OPC_CheckPredicate, 27, // Predicate_LoadStore16Pat
/*2193*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2196*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2199*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2203*/            OPC_EmitInteger, MVT::i32, 2, 
/*2206*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi16>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_LoadStore16Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 2:i32)
/*2217*/          /*Scope*/ 38, /*->2256*/
/*2218*/            OPC_CheckPredicate, 17, // Predicate_anyextloadi32
/*2220*/            OPC_MoveParent,
/*2221*/            OPC_RecordChild2, // #3 = $dest
/*2222*/            OPC_CheckChild2Type, MVT::i64,
/*2224*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2226*/            OPC_CheckPredicate, 6, // Predicate_truncstore
/*2228*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2230*/            OPC_CheckPredicate, 28, // Predicate_LoadStore32Pat
/*2232*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2235*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2238*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2242*/            OPC_EmitInteger, MVT::i32, 4, 
/*2245*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_anyextload>><<P:Predicate_anyextloadi32>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_LoadStore32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i32)
/*2256*/          0, /*End of Scope*/
/*2257*/        /*Scope*/ 20|128,1/*148*/, /*->2407*/
/*2259*/          OPC_CheckPredicate, 13, // Predicate_load
/*2261*/          OPC_SwitchType /*4 cases */, 34,  MVT::i64,// ->2298
/*2264*/            OPC_MoveParent,
/*2265*/            OPC_RecordChild2, // #3 = $dest
/*2266*/            OPC_CheckChild2Type, MVT::i64,
/*2268*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2270*/            OPC_CheckPredicate, 15, // Predicate_store
/*2272*/            OPC_CheckPredicate, 29, // Predicate_LoadStore64Pat
/*2274*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2277*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2280*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2284*/            OPC_EmitInteger, MVT::i32, 8, 
/*2287*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:i64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStore64Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i32)
                  /*SwitchType*/ 34,  MVT::f32,// ->2334
/*2300*/            OPC_MoveParent,
/*2301*/            OPC_RecordChild2, // #3 = $dest
/*2302*/            OPC_CheckChild2Type, MVT::i64,
/*2304*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2306*/            OPC_CheckPredicate, 15, // Predicate_store
/*2308*/            OPC_CheckPredicate, 30, // Predicate_LoadStoreF32Pat
/*2310*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2313*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2316*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2320*/            OPC_EmitInteger, MVT::i32, 4, 
/*2323*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f32 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF32Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 4:i32)
                  /*SwitchType*/ 34,  MVT::f64,// ->2370
/*2336*/            OPC_MoveParent,
/*2337*/            OPC_RecordChild2, // #3 = $dest
/*2338*/            OPC_CheckChild2Type, MVT::i64,
/*2340*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2342*/            OPC_CheckPredicate, 15, // Predicate_store
/*2344*/            OPC_CheckPredicate, 31, // Predicate_LoadStoreF64Pat
/*2346*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2349*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2352*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2356*/            OPC_EmitInteger, MVT::i32, 8, 
/*2359*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f64 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF64Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 8:i32)
                  /*SwitchType*/ 34,  MVT::f128,// ->2406
/*2372*/            OPC_MoveParent,
/*2373*/            OPC_RecordChild2, // #3 = $dest
/*2374*/            OPC_CheckChild2Type, MVT::i64,
/*2376*/            OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2378*/            OPC_CheckPredicate, 15, // Predicate_store
/*2380*/            OPC_CheckPredicate, 32, // Predicate_LoadStoreF128Pat
/*2382*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #4 #5
/*2385*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // selectBDAddr12Only:$dest #6 #7
/*2388*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2392*/            OPC_EmitInteger, MVT::i32, 16, 
/*2395*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 6, 7, 4, 5, 8, 
                    // Src: (st (ld:f128 bdaddr12only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, bdaddr12only:i64:$dest)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_LoadStoreF128Pat>> - Complexity = 26
                    // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, 16:i32)
                  0, // EndSwitchType
/*2407*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 55,  TARGET_VAL(ISD::BSWAP),// ->2466
/*2411*/        OPC_RecordChild0, // #1 = $R1
/*2412*/        OPC_SwitchType /*2 cases */, 24,  MVT::i32,// ->2439
/*2415*/          OPC_MoveParent,
/*2416*/          OPC_RecordChild2, // #2 = $XBD2
/*2417*/          OPC_CheckChild2Type, MVT::i64,
/*2419*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2421*/          OPC_CheckPredicate, 15, // Predicate_store
/*2423*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*2425*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2428*/          OPC_EmitMergeInputChains1_0,
/*2429*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRV), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i32 GR32:i32:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRV GR32:i32:$R1, bdxaddr20only:i64:$XBD2)
                /*SwitchType*/ 24,  MVT::i64,// ->2465
/*2441*/          OPC_MoveParent,
/*2442*/          OPC_RecordChild2, // #2 = $XBD2
/*2443*/          OPC_CheckChild2Type, MVT::i64,
/*2445*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2447*/          OPC_CheckPredicate, 15, // Predicate_store
/*2449*/          OPC_CheckPredicate, 16, // Predicate_nonvolatile_store
/*2451*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2454*/          OPC_EmitMergeInputChains1_0,
/*2455*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRVG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st (bswap:i64 GR64:i64:$R1), bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_nonvolatile_store>> - Complexity = 19
                  // Dst: (STRVG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*2467*/    /*Scope*/ 22|128,5/*662*/, /*->3131*/
/*2469*/      OPC_RecordChild1, // #1 = $R1
/*2470*/      OPC_Scope, 23, /*->2495*/ // 12 children in Scope
/*2472*/        OPC_CheckChild1Type, MVT::i32,
/*2474*/        OPC_RecordChild2, // #2 = $I2
/*2475*/        OPC_CheckChild2Type, MVT::i64,
/*2477*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2479*/        OPC_CheckPredicate, 15, // Predicate_store
/*2481*/        OPC_CheckPredicate, 33, // Predicate_aligned_store
/*2483*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2486*/        OPC_EmitMergeInputChains1_0,
/*2487*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL32), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*2495*/      /*Scope*/ 23, /*->2519*/
/*2496*/        OPC_CheckChild1Type, MVT::i64,
/*2498*/        OPC_RecordChild2, // #2 = $I2
/*2499*/        OPC_CheckChild2Type, MVT::i64,
/*2501*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2503*/        OPC_CheckPredicate, 15, // Predicate_store
/*2505*/        OPC_CheckPredicate, 33, // Predicate_aligned_store
/*2507*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2510*/        OPC_EmitMergeInputChains1_0,
/*2511*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned_store>> - Complexity = 17
                // Dst: (STGRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2519*/      /*Scope*/ 67, /*->2587*/
/*2520*/        OPC_MoveChild, 1,
/*2522*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2525*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->2556
/*2528*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*2530*/          OPC_MoveParent,
/*2531*/          OPC_RecordChild2, // #2 = $BD1
/*2532*/          OPC_CheckChild2Type, MVT::i64,
/*2534*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2536*/          OPC_CheckPredicate, 15, // Predicate_store
/*2538*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*2541*/          OPC_EmitMergeInputChains1_0,
/*2542*/          OPC_EmitConvertToTarget, 1,
/*2544*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2547*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVHI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 28,  MVT::i64,// ->2586
/*2558*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*2560*/          OPC_MoveParent,
/*2561*/          OPC_RecordChild2, // #2 = $BD1
/*2562*/          OPC_CheckChild2Type, MVT::i64,
/*2564*/          OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2566*/          OPC_CheckPredicate, 15, // Predicate_store
/*2568*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*2571*/          OPC_EmitMergeInputChains1_0,
/*2572*/          OPC_EmitConvertToTarget, 1,
/*2574*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2577*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVGHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                  // Dst: (MVGHI bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*2587*/      /*Scope*/ 63, /*->2651*/
/*2588*/        OPC_CheckChild1Type, MVT::i32,
/*2590*/        OPC_RecordChild2, // #2 = $I2
/*2591*/        OPC_CheckChild2Type, MVT::i64,
/*2593*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2595*/        OPC_Scope, 18, /*->2615*/ // 2 children in Scope
/*2597*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*2599*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2601*/          OPC_CheckPredicate, 36, // Predicate_aligned_truncstorei16
/*2603*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2606*/          OPC_EmitMergeInputChains1_0,
/*2607*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL32), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (st GR32:i32:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                  // Dst: (STHRL32 GR32:i32:$R1, pcrel32:i64:$I2)
/*2615*/        /*Scope*/ 34, /*->2650*/
/*2616*/          OPC_CheckPredicate, 15, // Predicate_store
/*2618*/          OPC_Scope, 14, /*->2634*/ // 2 children in Scope
/*2620*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2623*/            OPC_EmitMergeInputChains1_0,
/*2624*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2634*/          /*Scope*/ 14, /*->2649*/
/*2635*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2638*/            OPC_EmitMergeInputChains1_0,
/*2639*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (ST32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2649*/          0, /*End of Scope*/
/*2650*/        0, /*End of Scope*/
/*2651*/      /*Scope*/ 65, /*->2717*/
/*2652*/        OPC_CheckChild1Type, MVT::i64,
/*2654*/        OPC_RecordChild2, // #2 = $I2
/*2655*/        OPC_CheckChild2Type, MVT::i64,
/*2657*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2659*/        OPC_Scope, 38, /*->2699*/ // 2 children in Scope
/*2661*/          OPC_CheckPredicate, 6, // Predicate_truncstore
/*2663*/          OPC_Scope, 16, /*->2681*/ // 2 children in Scope
/*2665*/            OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2667*/            OPC_CheckPredicate, 36, // Predicate_aligned_truncstorei16
/*2669*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2672*/            OPC_EmitMergeInputChains1_0,
/*2673*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_aligned_truncstorei16>> - Complexity = 17
                    // Dst: (STHRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2681*/          /*Scope*/ 16, /*->2698*/
/*2682*/            OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2684*/            OPC_CheckPredicate, 37, // Predicate_aligned_truncstorei32
/*2686*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*2689*/            OPC_EmitMergeInputChains1_0,
/*2690*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STRL), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                    // Src: (st GR64:i64:$R1, pcrel32:i64:$I2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>><<P:Predicate_aligned_truncstorei32>> - Complexity = 17
                    // Dst: (STRL GR64:i64:$R1, pcrel32:i64:$I2)
/*2698*/          0, /*End of Scope*/
/*2699*/        /*Scope*/ 16, /*->2716*/
/*2700*/          OPC_CheckPredicate, 15, // Predicate_store
/*2702*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*2705*/          OPC_EmitMergeInputChains1_0,
/*2706*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STG), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st GR64:i64:$R1, bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STG GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*2716*/        0, /*End of Scope*/
/*2717*/      /*Scope*/ 23, /*->2741*/
/*2718*/        OPC_CheckChild1Type, MVT::Untyped,
/*2720*/        OPC_RecordChild2, // #2 = $dst
/*2721*/        OPC_CheckChild2Type, MVT::i64,
/*2723*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2725*/        OPC_CheckPredicate, 15, // Predicate_store
/*2727*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*2730*/        OPC_EmitMergeInputChains1_0,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST128), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st GR128:Untyped:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (ST128 GR128:Untyped:$src, bdxaddr20only128:i64:$dst)
/*2741*/      /*Scope*/ 81, /*->2823*/
/*2742*/        OPC_MoveChild, 1,
/*2744*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2747*/        OPC_CheckType, MVT::i32,
/*2749*/        OPC_MoveParent,
/*2750*/        OPC_RecordChild2, // #2 = $BD1
/*2751*/        OPC_CheckChild2Type, MVT::i64,
/*2753*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2755*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2757*/        OPC_Scope, 42, /*->2801*/ // 2 children in Scope
/*2759*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2761*/          OPC_Scope, 18, /*->2781*/ // 2 children in Scope
/*2763*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectBDAddr12Pair:$BD1 #3 #4
/*2766*/            OPC_EmitMergeInputChains1_0,
/*2767*/            OPC_EmitConvertToTarget, 1,
/*2769*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2772*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVI bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2781*/          /*Scope*/ 18, /*->2800*/
/*2782*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectBDAddr20Pair:$BD1 #3 #4
/*2785*/            OPC_EmitMergeInputChains1_0,
/*2786*/            OPC_EmitConvertToTarget, 1,
/*2788*/            OPC_EmitNodeXForm, 1, 5, // UIMM8
/*2791*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVIY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (st (imm:i32)<<X:UIMM8>>:$I2, bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MVIY bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*2800*/          0, /*End of Scope*/
/*2801*/        /*Scope*/ 20, /*->2822*/
/*2802*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2804*/          OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$BD1 #3 #4
/*2807*/          OPC_EmitMergeInputChains1_0,
/*2808*/          OPC_EmitConvertToTarget, 1,
/*2810*/          OPC_EmitNodeXForm, 2, 5, // SIMM16
/*2813*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVHHI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<X:SIMM16>>:$I2, bdaddr12only:i64:$BD1)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                  // Dst: (MVHHI bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*2822*/        0, /*End of Scope*/
/*2823*/      /*Scope*/ 81, /*->2905*/
/*2824*/        OPC_CheckChild1Type, MVT::i32,
/*2826*/        OPC_RecordChild2, // #2 = $XBD2
/*2827*/        OPC_CheckChild2Type, MVT::i64,
/*2829*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2831*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2833*/        OPC_Scope, 34, /*->2869*/ // 2 children in Scope
/*2835*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2837*/          OPC_Scope, 14, /*->2853*/ // 2 children in Scope
/*2839*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2842*/            OPC_EmitMergeInputChains1_0,
/*2843*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2853*/          /*Scope*/ 14, /*->2868*/
/*2854*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2857*/            OPC_EmitMergeInputChains1_0,
/*2858*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2868*/          0, /*End of Scope*/
/*2869*/        /*Scope*/ 34, /*->2904*/
/*2870*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2872*/          OPC_Scope, 14, /*->2888*/ // 2 children in Scope
/*2874*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2877*/            OPC_EmitMergeInputChains1_0,
/*2878*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*2888*/          /*Scope*/ 14, /*->2903*/
/*2889*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2892*/            OPC_EmitMergeInputChains1_0,
/*2893*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH32Y GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*2903*/          0, /*End of Scope*/
/*2904*/        0, /*End of Scope*/
/*2905*/      /*Scope*/ 116, /*->3022*/
/*2906*/        OPC_CheckChild1Type, MVT::i64,
/*2908*/        OPC_RecordChild2, // #2 = $XBD2
/*2909*/        OPC_CheckChild2Type, MVT::i64,
/*2911*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*2913*/        OPC_CheckPredicate, 6, // Predicate_truncstore
/*2915*/        OPC_Scope, 34, /*->2951*/ // 3 children in Scope
/*2917*/          OPC_CheckPredicate, 7, // Predicate_truncstorei8
/*2919*/          OPC_Scope, 14, /*->2935*/ // 2 children in Scope
/*2921*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2924*/            OPC_EmitMergeInputChains1_0,
/*2925*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STC), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STC GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2935*/          /*Scope*/ 14, /*->2950*/
/*2936*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2939*/            OPC_EmitMergeInputChains1_0,
/*2940*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STCY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (STCY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2950*/          0, /*End of Scope*/
/*2951*/        /*Scope*/ 34, /*->2986*/
/*2952*/          OPC_CheckPredicate, 11, // Predicate_truncstorei16
/*2954*/          OPC_Scope, 14, /*->2970*/ // 2 children in Scope
/*2956*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2959*/            OPC_EmitMergeInputChains1_0,
/*2960*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STH GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*2970*/          /*Scope*/ 14, /*->2985*/
/*2971*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*2974*/            OPC_EmitMergeInputChains1_0,
/*2975*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STHY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (STHY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*2985*/          0, /*End of Scope*/
/*2986*/        /*Scope*/ 34, /*->3021*/
/*2987*/          OPC_CheckPredicate, 19, // Predicate_truncstorei32
/*2989*/          OPC_Scope, 14, /*->3005*/ // 2 children in Scope
/*2991*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*2994*/            OPC_EmitMergeInputChains1_0,
/*2995*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ST), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (ST GR64:i64:$R1, bdxaddr12pair:i64:$XBD2)
/*3005*/          /*Scope*/ 14, /*->3020*/
/*3006*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3009*/            OPC_EmitMergeInputChains1_0,
/*3010*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::STY), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (STY GR64:i64:$R1, bdxaddr20pair:i64:$XBD2)
/*3020*/          0, /*End of Scope*/
/*3021*/        0, /*End of Scope*/
/*3022*/      /*Scope*/ 41, /*->3064*/
/*3023*/        OPC_CheckChild1Type, MVT::f32,
/*3025*/        OPC_RecordChild2, // #2 = $XBD2
/*3026*/        OPC_CheckChild2Type, MVT::i64,
/*3028*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3030*/        OPC_CheckPredicate, 15, // Predicate_store
/*3032*/        OPC_Scope, 14, /*->3048*/ // 2 children in Scope
/*3034*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3037*/          OPC_EmitMergeInputChains1_0,
/*3038*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STE), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STE FP32:f32:$R1, bdxaddr12pair:i64:$XBD2)
/*3048*/        /*Scope*/ 14, /*->3063*/
/*3049*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3052*/          OPC_EmitMergeInputChains1_0,
/*3053*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STEY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STEY FP32:f32:$R1, bdxaddr20pair:i64:$XBD2)
/*3063*/        0, /*End of Scope*/
/*3064*/      /*Scope*/ 41, /*->3106*/
/*3065*/        OPC_CheckChild1Type, MVT::f64,
/*3067*/        OPC_RecordChild2, // #2 = $XBD2
/*3068*/        OPC_CheckChild2Type, MVT::i64,
/*3070*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3072*/        OPC_CheckPredicate, 15, // Predicate_store
/*3074*/        OPC_Scope, 14, /*->3090*/ // 2 children in Scope
/*3076*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3079*/          OPC_EmitMergeInputChains1_0,
/*3080*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STD FP64:f64:$R1, bdxaddr12pair:i64:$XBD2)
/*3090*/        /*Scope*/ 14, /*->3105*/
/*3091*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3094*/          OPC_EmitMergeInputChains1_0,
/*3095*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::STDY), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (STDY FP64:f64:$R1, bdxaddr20pair:i64:$XBD2)
/*3105*/        0, /*End of Scope*/
/*3106*/      /*Scope*/ 23, /*->3130*/
/*3107*/        OPC_CheckChild1Type, MVT::f128,
/*3109*/        OPC_RecordChild2, // #2 = $dst
/*3110*/        OPC_CheckChild2Type, MVT::i64,
/*3112*/        OPC_CheckPredicate, 5, // Predicate_unindexedstore
/*3114*/        OPC_CheckPredicate, 15, // Predicate_store
/*3116*/        OPC_CheckComplexPat, /*CP*/8, /*#*/2, // selectBDXAddr20Only128:$dst #3 #4 #5
/*3119*/        OPC_EmitMergeInputChains1_0,
/*3120*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::STX), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                // Src: (st FP128:f128:$src, bdxaddr20only128:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (STX FP128:f128:$src, bdxaddr20only128:i64:$dst)
/*3130*/      0, /*End of Scope*/
/*3131*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 122|128,1/*250*/,  TARGET_VAL(ISD::SRA),// ->3386
/*3136*/    OPC_Scope, 79|128,1/*207*/, /*->3346*/ // 2 children in Scope
/*3139*/      OPC_MoveChild, 0,
/*3141*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*3144*/      OPC_MoveChild, 0,
/*3146*/      OPC_SwitchOpcode /*2 cases */, 98,  TARGET_VAL(ISD::ANY_EXTEND),// ->3248
/*3150*/        OPC_MoveChild, 0,
/*3152*/        OPC_CheckOpcode, TARGET_VAL(SystemZISD::SELECT_CCMASK),
/*3155*/        OPC_CaptureGlueInput,
/*3156*/        OPC_MoveChild, 0,
/*3158*/        OPC_CheckInteger, 1, 
/*3160*/        OPC_MoveParent,
/*3161*/        OPC_MoveChild, 1,
/*3163*/        OPC_CheckInteger, 0, 
/*3165*/        OPC_MoveParent,
/*3166*/        OPC_RecordChild2, // #0 = $valid
/*3167*/        OPC_MoveChild, 2,
/*3169*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3172*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3174*/        OPC_MoveParent,
/*3175*/        OPC_RecordChild3, // #1 = $cc
/*3176*/        OPC_MoveChild, 3,
/*3178*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3181*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3183*/        OPC_MoveParent,
/*3184*/        OPC_MoveParent,
/*3185*/        OPC_MoveParent,
/*3186*/        OPC_MoveChild, 1,
/*3188*/        OPC_CheckInteger, 63, 
/*3190*/        OPC_CheckType, MVT::i32,
/*3192*/        OPC_MoveParent,
/*3193*/        OPC_MoveParent,
/*3194*/        OPC_MoveChild, 1,
/*3196*/        OPC_CheckInteger, 63, 
/*3198*/        OPC_CheckType, MVT::i32,
/*3200*/        OPC_MoveParent,
/*3201*/        OPC_EmitInteger, MVT::i64, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3213*/        OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*3221*/        OPC_EmitInteger, MVT::i64, 0, 
/*3224*/        OPC_EmitNode, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 4,  // Results = #5
/*3232*/        OPC_EmitConvertToTarget, 0,
/*3234*/        OPC_EmitConvertToTarget, 1,
/*3236*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                // Src: (sra:i64 (shl:i64 (anyext:i64 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)), 63:i32), 63:i32) - Complexity = 40
                // Dst: (Select64:i64:i32 (LGHI:i64 -1:i64), (LGHI:i64 0:i64), (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)
              /*SwitchOpcode*/ 94,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->3345
/*3251*/        OPC_CaptureGlueInput,
/*3252*/        OPC_MoveChild, 0,
/*3254*/        OPC_CheckInteger, 1, 
/*3256*/        OPC_MoveParent,
/*3257*/        OPC_MoveChild, 1,
/*3259*/        OPC_CheckInteger, 0, 
/*3261*/        OPC_MoveParent,
/*3262*/        OPC_RecordChild2, // #0 = $valid
/*3263*/        OPC_MoveChild, 2,
/*3265*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3268*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3270*/        OPC_MoveParent,
/*3271*/        OPC_RecordChild3, // #1 = $cc
/*3272*/        OPC_MoveChild, 3,
/*3274*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3277*/        OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*3279*/        OPC_MoveParent,
/*3280*/        OPC_MoveParent,
/*3281*/        OPC_MoveChild, 1,
/*3283*/        OPC_CheckInteger, 31, 
/*3285*/        OPC_CheckType, MVT::i32,
/*3287*/        OPC_MoveParent,
/*3288*/        OPC_MoveParent,
/*3289*/        OPC_MoveChild, 1,
/*3291*/        OPC_CheckInteger, 31, 
/*3293*/        OPC_CheckType, MVT::i32,
/*3295*/        OPC_MoveParent,
/*3296*/        OPC_CheckType, MVT::i32,
/*3298*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3310*/        OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*3318*/        OPC_EmitInteger, MVT::i32, 0, 
/*3321*/        OPC_EmitNode, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/*3329*/        OPC_EmitConvertToTarget, 0,
/*3331*/        OPC_EmitConvertToTarget, 1,
/*3333*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 3, 5, 6, 7, 
                // Src: (sra:i32 (shl:i32 (z_select_ccmask:i32 1:i32, 0:i32, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc), 31:i32), 31:i32) - Complexity = 37
                // Dst: (Select32:i32:i32 (LHI:i32 -1:i32), (LHI:i32 0:i32), (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc)
              0, // EndSwitchOpcode
/*3346*/    /*Scope*/ 38, /*->3385*/
/*3347*/      OPC_RecordChild0, // #0 = $R1src
/*3348*/      OPC_RecordChild1, // #1 = $BD2
/*3349*/      OPC_CheckChild1Type, MVT::i32,
/*3351*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3368
/*3354*/        OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*3357*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (sra:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
                // Dst: (SRA:i32:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
              /*SwitchType*/ 14,  MVT::i64,// ->3384
/*3370*/        OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*3373*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRAG), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
                // Src: (sra:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
                // Dst: (SRAG:i64:i32 GR64:i64:$R3, shift20only:i32:$BD2)
              0, // EndSwitchType
/*3385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 66|128,12/*1602*/,  TARGET_VAL(ISD::OR),// ->4992
/*3390*/    OPC_Scope, 88|128,1/*216*/, /*->3609*/ // 20 children in Scope
/*3393*/      OPC_MoveChild, 0,
/*3395*/      OPC_Scope, 105, /*->3502*/ // 2 children in Scope
/*3397*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*3408*/        OPC_RecordChild0, // #0 = $R1src
/*3409*/        OPC_MoveParent,
/*3410*/        OPC_MoveChild, 1,
/*3412*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3415*/        OPC_RecordMemRef,
/*3416*/        OPC_RecordNode, // #1 = 'ld' chained node
/*3417*/        OPC_CheckFoldableChainNode,
/*3418*/        OPC_RecordChild1, // #2 = $XBD2
/*3419*/        OPC_CheckChild1Type, MVT::i64,
/*3421*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3423*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*3425*/        OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3427*/        OPC_MoveParent,
/*3428*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3465
/*3431*/          OPC_Scope, 15, /*->3448*/ // 2 children in Scope
/*3433*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3436*/            OPC_EmitMergeInputChains1_1,
/*3437*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*3448*/          /*Scope*/ 15, /*->3464*/
/*3449*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3452*/            OPC_EmitMergeInputChains1_1,
/*3453*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 (and:i32 GR32:i32:$R1src, -256:i32), (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*3464*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->3501
/*3467*/          OPC_Scope, 15, /*->3484*/ // 2 children in Scope
/*3469*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3472*/            OPC_EmitMergeInputChains1_1,
/*3473*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*3484*/          /*Scope*/ 15, /*->3500*/
/*3485*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3488*/            OPC_EmitMergeInputChains1_1,
/*3489*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i64 (and:i64 GR64:i64:$R1src, -256:i64), (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*3500*/          0, /*End of Scope*/
                0, // EndSwitchType
/*3502*/      /*Scope*/ 105, /*->3608*/
/*3503*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3506*/        OPC_RecordMemRef,
/*3507*/        OPC_RecordNode, // #0 = 'ld' chained node
/*3508*/        OPC_CheckFoldableChainNode,
/*3509*/        OPC_RecordChild1, // #1 = $XBD2
/*3510*/        OPC_CheckChild1Type, MVT::i64,
/*3512*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3514*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*3516*/        OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3518*/        OPC_MoveParent,
/*3519*/        OPC_MoveChild, 1,
/*3521*/        OPC_CheckAndImm, 0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551360*/, 
/*3532*/        OPC_RecordChild0, // #2 = $R1src
/*3533*/        OPC_MoveParent,
/*3534*/        OPC_SwitchType /*2 cases */, 34,  MVT::i32,// ->3571
/*3537*/          OPC_Scope, 15, /*->3554*/ // 2 children in Scope
/*3539*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3542*/            OPC_EmitMergeInputChains1_0,
/*3543*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*3554*/          /*Scope*/ 15, /*->3570*/
/*3555*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3558*/            OPC_EmitMergeInputChains1_0,
/*3559*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i32 GR32:i32:$R1src, -256:i32)) - Complexity = 27
                    // Dst: (IC32Y:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*3570*/          0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::i64,// ->3607
/*3573*/          OPC_Scope, 15, /*->3590*/ // 2 children in Scope
/*3575*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*3578*/            OPC_EmitMergeInputChains1_0,
/*3579*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (IC:i64 GR64:i64:$R1src, bdxaddr12pair:i64:$XBD2)
/*3590*/          /*Scope*/ 15, /*->3606*/
/*3591*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*3594*/            OPC_EmitMergeInputChains1_0,
/*3595*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (and:i64 GR64:i64:$R1src, -256:i64)) - Complexity = 27
                    // Dst: (ICY:i64 GR64:i64:$R1src, bdxaddr20pair:i64:$XBD2)
/*3606*/          0, /*End of Scope*/
                0, // EndSwitchType
/*3608*/      0, /*End of Scope*/
/*3609*/    /*Scope*/ 38, /*->3648*/
/*3610*/      OPC_RecordChild0, // #0 = $src1
/*3611*/      OPC_MoveChild, 1,
/*3613*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3616*/      OPC_RecordMemRef,
/*3617*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3618*/      OPC_CheckFoldableChainNode,
/*3619*/      OPC_RecordChild1, // #2 = $src2
/*3620*/      OPC_CheckChild1Type, MVT::i64,
/*3622*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3624*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3626*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3628*/      OPC_MoveParent,
/*3629*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3631*/      OPC_CheckType, MVT::i32,
/*3633*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3636*/      OPC_EmitMergeInputChains1_1,
/*3637*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3648*/    /*Scope*/ 38, /*->3687*/
/*3649*/      OPC_MoveChild, 0,
/*3651*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3654*/      OPC_RecordMemRef,
/*3655*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3656*/      OPC_CheckFoldableChainNode,
/*3657*/      OPC_RecordChild1, // #1 = $src2
/*3658*/      OPC_CheckChild1Type, MVT::i64,
/*3660*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3662*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3664*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3666*/      OPC_MoveParent,
/*3667*/      OPC_RecordChild1, // #2 = $src1
/*3668*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3670*/      OPC_CheckType, MVT::i32,
/*3672*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3675*/      OPC_EmitMergeInputChains1_0,
/*3676*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3687*/    /*Scope*/ 38, /*->3726*/
/*3688*/      OPC_RecordChild0, // #0 = $src1
/*3689*/      OPC_MoveChild, 1,
/*3691*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3694*/      OPC_RecordMemRef,
/*3695*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3696*/      OPC_CheckFoldableChainNode,
/*3697*/      OPC_RecordChild1, // #2 = $src2
/*3698*/      OPC_CheckChild1Type, MVT::i64,
/*3700*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3702*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3704*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3706*/      OPC_MoveParent,
/*3707*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3709*/      OPC_CheckType, MVT::i32,
/*3711*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3714*/      OPC_EmitMergeInputChains1_1,
/*3715*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3726*/    /*Scope*/ 38, /*->3765*/
/*3727*/      OPC_MoveChild, 0,
/*3729*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3732*/      OPC_RecordMemRef,
/*3733*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3734*/      OPC_CheckFoldableChainNode,
/*3735*/      OPC_RecordChild1, // #1 = $src2
/*3736*/      OPC_CheckChild1Type, MVT::i64,
/*3738*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3740*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3742*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3744*/      OPC_MoveParent,
/*3745*/      OPC_RecordChild1, // #2 = $src1
/*3746*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3748*/      OPC_CheckType, MVT::i32,
/*3750*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3753*/      OPC_EmitMergeInputChains1_0,
/*3754*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*3765*/    /*Scope*/ 38, /*->3804*/
/*3766*/      OPC_RecordChild0, // #0 = $src1
/*3767*/      OPC_MoveChild, 1,
/*3769*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3772*/      OPC_RecordMemRef,
/*3773*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3774*/      OPC_CheckFoldableChainNode,
/*3775*/      OPC_RecordChild1, // #2 = $src2
/*3776*/      OPC_CheckChild1Type, MVT::i64,
/*3778*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3780*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3782*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3784*/      OPC_MoveParent,
/*3785*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3787*/      OPC_CheckType, MVT::i64,
/*3789*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3792*/      OPC_EmitMergeInputChains1_1,
/*3793*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3804*/    /*Scope*/ 38, /*->3843*/
/*3805*/      OPC_MoveChild, 0,
/*3807*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3810*/      OPC_RecordMemRef,
/*3811*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3812*/      OPC_CheckFoldableChainNode,
/*3813*/      OPC_RecordChild1, // #1 = $src2
/*3814*/      OPC_CheckChild1Type, MVT::i64,
/*3816*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3818*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3820*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3822*/      OPC_MoveParent,
/*3823*/      OPC_RecordChild1, // #2 = $src1
/*3824*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3826*/      OPC_CheckType, MVT::i64,
/*3828*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3831*/      OPC_EmitMergeInputChains1_0,
/*3832*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*3843*/    /*Scope*/ 38, /*->3882*/
/*3844*/      OPC_RecordChild0, // #0 = $src1
/*3845*/      OPC_MoveChild, 1,
/*3847*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3850*/      OPC_RecordMemRef,
/*3851*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3852*/      OPC_CheckFoldableChainNode,
/*3853*/      OPC_RecordChild1, // #2 = $src2
/*3854*/      OPC_CheckChild1Type, MVT::i64,
/*3856*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3858*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3860*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3862*/      OPC_MoveParent,
/*3863*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3865*/      OPC_CheckType, MVT::i64,
/*3867*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3870*/      OPC_EmitMergeInputChains1_1,
/*3871*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*3882*/    /*Scope*/ 59, /*->3942*/
/*3883*/      OPC_MoveChild, 0,
/*3885*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3888*/      OPC_RecordMemRef,
/*3889*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3890*/      OPC_CheckFoldableChainNode,
/*3891*/      OPC_RecordChild1, // #1 = $src2
/*3892*/      OPC_CheckChild1Type, MVT::i64,
/*3894*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3896*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3898*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3900*/      OPC_MoveParent,
/*3901*/      OPC_RecordChild1, // #2 = $src1
/*3902*/      OPC_SwitchType /*2 cases */, 17,  MVT::i64,// ->3922
/*3905*/        OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3907*/        OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*3910*/        OPC_EmitMergeInputChains1_0,
/*3911*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
              /*SwitchType*/ 17,  MVT::i32,// ->3941
/*3924*/        OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*3926*/        OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3929*/        OPC_EmitMergeInputChains1_0,
/*3930*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
                // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
              0, // EndSwitchType
/*3942*/    /*Scope*/ 38, /*->3981*/
/*3943*/      OPC_RecordChild0, // #0 = $src1
/*3944*/      OPC_MoveChild, 1,
/*3946*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3949*/      OPC_RecordMemRef,
/*3950*/      OPC_RecordNode, // #1 = 'ld' chained node
/*3951*/      OPC_CheckFoldableChainNode,
/*3952*/      OPC_RecordChild1, // #2 = $src2
/*3953*/      OPC_CheckChild1Type, MVT::i64,
/*3955*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3957*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3959*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3961*/      OPC_MoveParent,
/*3962*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*3964*/      OPC_CheckType, MVT::i32,
/*3966*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*3969*/      OPC_EmitMergeInputChains1_1,
/*3970*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32:i32 GR32:i32:$src1, bdxaddr12pair:i64:$src2)
/*3981*/    /*Scope*/ 38, /*->4020*/
/*3982*/      OPC_MoveChild, 0,
/*3984*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3987*/      OPC_RecordMemRef,
/*3988*/      OPC_RecordNode, // #0 = 'ld' chained node
/*3989*/      OPC_CheckFoldableChainNode,
/*3990*/      OPC_RecordChild1, // #1 = $src2
/*3991*/      OPC_CheckChild1Type, MVT::i64,
/*3993*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3995*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*3997*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*3999*/      OPC_MoveParent,
/*4000*/      OPC_RecordChild1, // #2 = $src1
/*4001*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*4003*/      OPC_CheckType, MVT::i32,
/*4005*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4008*/      OPC_EmitMergeInputChains1_0,
/*4009*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR32:i32:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*4020*/    /*Scope*/ 38, /*->4059*/
/*4021*/      OPC_RecordChild0, // #0 = $src1
/*4022*/      OPC_MoveChild, 1,
/*4024*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4027*/      OPC_RecordMemRef,
/*4028*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4029*/      OPC_CheckFoldableChainNode,
/*4030*/      OPC_RecordChild1, // #2 = $src2
/*4031*/      OPC_CheckChild1Type, MVT::i64,
/*4033*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4035*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4037*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4039*/      OPC_MoveParent,
/*4040*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*4042*/      OPC_CheckType, MVT::i32,
/*4044*/      OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4047*/      OPC_EmitMergeInputChains1_1,
/*4048*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC32Y), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC32Y:i32 GR32:i32:$src1, bdxaddr20pair:i64:$src2)
/*4059*/    /*Scope*/ 38, /*->4098*/
/*4060*/      OPC_MoveChild, 0,
/*4062*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4065*/      OPC_RecordMemRef,
/*4066*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4067*/      OPC_CheckFoldableChainNode,
/*4068*/      OPC_RecordChild1, // #1 = $src2
/*4069*/      OPC_CheckChild1Type, MVT::i64,
/*4071*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4073*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4075*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4077*/      OPC_MoveParent,
/*4078*/      OPC_RecordChild1, // #2 = $src1
/*4079*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*4081*/      OPC_CheckType, MVT::i64,
/*4083*/      OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*4086*/      OPC_EmitMergeInputChains1_0,
/*4087*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*4098*/    /*Scope*/ 38, /*->4137*/
/*4099*/      OPC_RecordChild0, // #0 = $src1
/*4100*/      OPC_MoveChild, 1,
/*4102*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4105*/      OPC_RecordMemRef,
/*4106*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4107*/      OPC_CheckFoldableChainNode,
/*4108*/      OPC_RecordChild1, // #2 = $src2
/*4109*/      OPC_CheckChild1Type, MVT::i64,
/*4111*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4113*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4115*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*4120*/      OPC_CheckType, MVT::i64,
/*4122*/      OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$src2 #3 #4 #5
/*4125*/      OPC_EmitMergeInputChains1_1,
/*4126*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IC), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr12pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
              // Dst: (IC:i64 GR64:i64:$src1, bdxaddr12pair:i64:$src2)
/*4137*/    /*Scope*/ 38, /*->4176*/
/*4138*/      OPC_MoveChild, 0,
/*4140*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4143*/      OPC_RecordMemRef,
/*4144*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4145*/      OPC_CheckFoldableChainNode,
/*4146*/      OPC_RecordChild1, // #1 = $src2
/*4147*/      OPC_CheckChild1Type, MVT::i64,
/*4149*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4151*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*4153*/      OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4155*/      OPC_MoveParent,
/*4156*/      OPC_RecordChild1, // #2 = $src1
/*4157*/      OPC_CheckPredicate, 40, // Predicate_or_as_inserti8
/*4159*/      OPC_CheckType, MVT::i64,
/*4161*/      OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4164*/      OPC_EmitMergeInputChains1_0,
/*4165*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i64 (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, GR64:i64:$src1)<<P:Predicate_or_as_inserti8>> - Complexity = 20
              // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*4176*/    /*Scope*/ 103, /*->4280*/
/*4177*/      OPC_RecordChild0, // #0 = $src1
/*4178*/      OPC_MoveChild, 1,
/*4180*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4183*/      OPC_RecordMemRef,
/*4184*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4185*/      OPC_CheckFoldableChainNode,
/*4186*/      OPC_RecordChild1, // #2 = $src2
/*4187*/      OPC_CheckChild1Type, MVT::i64,
/*4189*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4191*/      OPC_Scope, 24, /*->4217*/ // 2 children in Scope
/*4193*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*4195*/        OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*4197*/        OPC_MoveParent,
/*4198*/        OPC_CheckPredicate, 41, // Predicate_or_as_revinserti8
/*4200*/        OPC_CheckType, MVT::i64,
/*4202*/        OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$src2 #3 #4 #5
/*4205*/        OPC_EmitMergeInputChains1_1,
/*4206*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ICY), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 bdxaddr20pair:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>)<<P:Predicate_or_as_revinserti8>> - Complexity = 20
                // Dst: (ICY:i64 GR64:i64:$src1, bdxaddr20pair:i64:$src2)
/*4217*/      /*Scope*/ 61, /*->4279*/
/*4218*/        OPC_CheckPredicate, 13, // Predicate_load
/*4220*/        OPC_MoveParent,
/*4221*/        OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->4260
/*4224*/          OPC_Scope, 16, /*->4242*/ // 2 children in Scope
/*4226*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4229*/            OPC_EmitMergeInputChains1_1,
/*4230*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*4242*/          /*Scope*/ 16, /*->4259*/
/*4243*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4246*/            OPC_EmitMergeInputChains1_1,
/*4247*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (or:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*4259*/          0, /*End of Scope*/
                /*SwitchType*/ 16,  MVT::i64,// ->4278
/*4262*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4265*/          OPC_EmitMergeInputChains1_1,
/*4266*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (or:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*4279*/      0, /*End of Scope*/
/*4280*/    /*Scope*/ 126|128,2/*382*/, /*->4664*/
/*4282*/      OPC_MoveChild, 0,
/*4284*/      OPC_Scope, 73, /*->4359*/ // 9 children in Scope
/*4286*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4289*/        OPC_RecordMemRef,
/*4290*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4291*/        OPC_CheckFoldableChainNode,
/*4292*/        OPC_RecordChild1, // #1 = $XBD2
/*4293*/        OPC_CheckChild1Type, MVT::i64,
/*4295*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4297*/        OPC_CheckPredicate, 13, // Predicate_load
/*4299*/        OPC_MoveParent,
/*4300*/        OPC_RecordChild1, // #2 = $R1src
/*4301*/        OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->4340
/*4304*/          OPC_Scope, 16, /*->4322*/ // 2 children in Scope
/*4306*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*4309*/            OPC_EmitMergeInputChains1_0,
/*4310*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::O), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (O:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*4322*/          /*Scope*/ 16, /*->4339*/
/*4323*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*4326*/            OPC_EmitMergeInputChains1_0,
/*4327*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::OY), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (or:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                    // Dst: (OY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*4339*/          0, /*End of Scope*/
                /*SwitchType*/ 16,  MVT::i64,// ->4358
/*4342*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*4345*/          OPC_EmitMergeInputChains1_0,
/*4346*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (or:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                  // Dst: (OG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
                0, // EndSwitchType
/*4359*/      /*Scope*/ 38, /*->4398*/
/*4360*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*4371*/        OPC_RecordChild0, // #0 = $R1src
/*4372*/        OPC_MoveParent,
/*4373*/        OPC_RecordChild1, // #1 = $I2
/*4374*/        OPC_MoveChild, 1,
/*4376*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4379*/        OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*4381*/        OPC_MoveParent,
/*4382*/        OPC_CheckType, MVT::i32,
/*4384*/        OPC_EmitConvertToTarget, 1,
/*4386*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*4389*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -65536:i32), (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*4398*/      /*Scope*/ 38, /*->4437*/
/*4399*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*4410*/        OPC_RecordChild0, // #0 = $R1src
/*4411*/        OPC_MoveParent,
/*4412*/        OPC_RecordChild1, // #1 = $I2
/*4413*/        OPC_MoveChild, 1,
/*4415*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4418*/        OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*4420*/        OPC_MoveParent,
/*4421*/        OPC_CheckType, MVT::i32,
/*4423*/        OPC_EmitConvertToTarget, 1,
/*4425*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*4428*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 (and:i32 GR32:i32:$R1src, -4294901761:i32), (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*4437*/      /*Scope*/ 38, /*->4476*/
/*4438*/        OPC_CheckAndImm, 0|128,0|128,124|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709486080*/, 
/*4449*/        OPC_RecordChild0, // #0 = $R1src
/*4450*/        OPC_MoveParent,
/*4451*/        OPC_RecordChild1, // #1 = $I2
/*4452*/        OPC_MoveChild, 1,
/*4454*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4457*/        OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*4459*/        OPC_MoveParent,
/*4460*/        OPC_CheckType, MVT::i64,
/*4462*/        OPC_EmitConvertToTarget, 1,
/*4464*/        OPC_EmitNodeXForm, 3, 2, // LL16
/*4467*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -65536:i64), (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 15
                // Dst: (IILL:i64 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*4476*/      /*Scope*/ 38, /*->4515*/
/*4477*/        OPC_CheckAndImm, 127|128,127|128,3|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414649855*/, 
/*4488*/        OPC_RecordChild0, // #0 = $R1src
/*4489*/        OPC_MoveParent,
/*4490*/        OPC_RecordChild1, // #1 = $I2
/*4491*/        OPC_MoveChild, 1,
/*4493*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4496*/        OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*4498*/        OPC_MoveParent,
/*4499*/        OPC_CheckType, MVT::i64,
/*4501*/        OPC_EmitConvertToTarget, 1,
/*4503*/        OPC_EmitNodeXForm, 4, 2, // LH16
/*4506*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294901761:i64), (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 15
                // Dst: (IILH:i64 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*4515*/      /*Scope*/ 38, /*->4554*/
/*4516*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15|128,0|128,64|128,127|128,127|128,1/*18446462603027808255*/, 
/*4527*/        OPC_RecordChild0, // #0 = $R1src
/*4528*/        OPC_MoveParent,
/*4529*/        OPC_RecordChild1, // #1 = $I2
/*4530*/        OPC_MoveChild, 1,
/*4532*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4535*/        OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*4537*/        OPC_MoveParent,
/*4538*/        OPC_CheckType, MVT::i64,
/*4540*/        OPC_EmitConvertToTarget, 1,
/*4542*/        OPC_EmitNodeXForm, 5, 2, // HL16
/*4545*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -281470681743361:i64), (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 15
                // Dst: (IIHL:i64 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*4554*/      /*Scope*/ 35, /*->4590*/
/*4555*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,127|128,127|128,63/*281474976710655*/, 
/*4563*/        OPC_RecordChild0, // #0 = $R1src
/*4564*/        OPC_MoveParent,
/*4565*/        OPC_RecordChild1, // #1 = $I2
/*4566*/        OPC_MoveChild, 1,
/*4568*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4571*/        OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*4573*/        OPC_MoveParent,
/*4574*/        OPC_CheckType, MVT::i64,
/*4576*/        OPC_EmitConvertToTarget, 1,
/*4578*/        OPC_EmitNodeXForm, 6, 2, // HH16
/*4581*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHH), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 281474976710655:i64), (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 15
                // Dst: (IIHH:i64 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*4590*/      /*Scope*/ 38, /*->4629*/
/*4591*/        OPC_CheckAndImm, 0|128,0|128,0|128,0|128,112|128,127|128,127|128,127|128,127|128,1/*18446744069414584320*/, 
/*4602*/        OPC_RecordChild0, // #0 = $R1src
/*4603*/        OPC_MoveParent,
/*4604*/        OPC_RecordChild1, // #1 = $I2
/*4605*/        OPC_MoveChild, 1,
/*4607*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4610*/        OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*4612*/        OPC_MoveParent,
/*4613*/        OPC_CheckType, MVT::i64,
/*4615*/        OPC_EmitConvertToTarget, 1,
/*4617*/        OPC_EmitNodeXForm, 7, 2, // LF32
/*4620*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, -4294967296:i64), (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 15
                // Dst: (IILF:i64 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*4629*/      /*Scope*/ 33, /*->4663*/
/*4630*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*4636*/        OPC_RecordChild0, // #0 = $R1src
/*4637*/        OPC_MoveParent,
/*4638*/        OPC_RecordChild1, // #1 = $I2
/*4639*/        OPC_MoveChild, 1,
/*4641*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4644*/        OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*4646*/        OPC_MoveParent,
/*4647*/        OPC_CheckType, MVT::i64,
/*4649*/        OPC_EmitConvertToTarget, 1,
/*4651*/        OPC_EmitNodeXForm, 8, 2, // HF32
/*4654*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 (and:i64 GR64:i64:$R1src, 4294967295:i64), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 15
                // Dst: (IIHF:i64 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*4663*/      0, /*End of Scope*/
/*4664*/    /*Scope*/ 47, /*->4712*/
/*4665*/      OPC_RecordNode, // #0 = $src
/*4666*/      OPC_CheckType, MVT::i64,
/*4668*/      OPC_Scope, 13, /*->4683*/ // 3 children in Scope
/*4670*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*4673*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*4683*/      /*Scope*/ 13, /*->4697*/
/*4684*/        OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*4687*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*4697*/      /*Scope*/ 13, /*->4711*/
/*4698*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*4701*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*4711*/      0, /*End of Scope*/
/*4712*/    /*Scope*/ 50, /*->4763*/
/*4713*/      OPC_MoveChild, 0,
/*4715*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*4718*/      OPC_RecordChild0, // #0 = $src
/*4719*/      OPC_MoveParent,
/*4720*/      OPC_RecordChild1, // #1 = $imm
/*4721*/      OPC_MoveChild, 1,
/*4723*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4726*/      OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*4728*/      OPC_MoveParent,
/*4729*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #2
/*4736*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4739*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*4749*/      OPC_EmitConvertToTarget, 1,
/*4751*/      OPC_EmitNodeXForm, 8, 5, // HF32
/*4754*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::IIHF), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 4, 6, 
              // Src: (or:i64 (zext:i64 GR32:i32:$src), (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$imm) - Complexity = 10
              // Dst: (IIHF:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32), (HF32:i64 (imm:i64)<<P:Predicate_imm64hf32>>:$imm))
/*4763*/    /*Scope*/ 98|128,1/*226*/, /*->4991*/
/*4765*/      OPC_RecordChild0, // #0 = $R1src
/*4766*/      OPC_RecordChild1, // #1 = $I2
/*4767*/      OPC_Scope, 66|128,1/*194*/, /*->4964*/ // 3 children in Scope
/*4770*/        OPC_MoveChild, 1,
/*4772*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4775*/        OPC_Scope, 20, /*->4797*/ // 9 children in Scope
/*4777*/          OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*4779*/          OPC_MoveParent,
/*4780*/          OPC_CheckType, MVT::i32,
/*4782*/          OPC_EmitConvertToTarget, 1,
/*4784*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*4787*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL32:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*4797*/        /*Scope*/ 20, /*->4818*/
/*4798*/          OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*4800*/          OPC_MoveParent,
/*4801*/          OPC_CheckType, MVT::i32,
/*4803*/          OPC_EmitConvertToTarget, 1,
/*4805*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*4808*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH32:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*4818*/        /*Scope*/ 20, /*->4839*/
/*4819*/          OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*4821*/          OPC_MoveParent,
/*4822*/          OPC_CheckType, MVT::i64,
/*4824*/          OPC_EmitConvertToTarget, 1,
/*4826*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*4829*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (OILL:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*4839*/        /*Scope*/ 20, /*->4860*/
/*4840*/          OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*4842*/          OPC_MoveParent,
/*4843*/          OPC_CheckType, MVT::i64,
/*4845*/          OPC_EmitConvertToTarget, 1,
/*4847*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*4850*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (OILH:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*4860*/        /*Scope*/ 20, /*->4881*/
/*4861*/          OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*4863*/          OPC_MoveParent,
/*4864*/          OPC_CheckType, MVT::i64,
/*4866*/          OPC_EmitConvertToTarget, 1,
/*4868*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*4871*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (OIHL:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*4881*/        /*Scope*/ 20, /*->4902*/
/*4882*/          OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*4884*/          OPC_MoveParent,
/*4885*/          OPC_CheckType, MVT::i64,
/*4887*/          OPC_EmitConvertToTarget, 1,
/*4889*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*4892*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (OIHH:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*4902*/        /*Scope*/ 20, /*->4923*/
/*4903*/          OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*4905*/          OPC_MoveParent,
/*4906*/          OPC_CheckType, MVT::i64,
/*4908*/          OPC_EmitConvertToTarget, 1,
/*4910*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*4913*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (OILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*4923*/        /*Scope*/ 20, /*->4944*/
/*4924*/          OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*4926*/          OPC_MoveParent,
/*4927*/          OPC_CheckType, MVT::i64,
/*4929*/          OPC_EmitConvertToTarget, 1,
/*4931*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*4934*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (OIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*4944*/        /*Scope*/ 18, /*->4963*/
/*4945*/          OPC_MoveParent,
/*4946*/          OPC_CheckType, MVT::i32,
/*4948*/          OPC_EmitConvertToTarget, 1,
/*4950*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*4953*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (OILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*4963*/        0, /*End of Scope*/
/*4964*/      /*Scope*/ 12, /*->4977*/
/*4965*/        OPC_CheckType, MVT::i32,
/*4967*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (OR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*4977*/      /*Scope*/ 12, /*->4990*/
/*4978*/        OPC_CheckType, MVT::i64,
/*4980*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (OGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*4990*/      0, /*End of Scope*/
/*4991*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(SystemZISD::MVC),// ->5031
/*4995*/    OPC_RecordNode,   // #0 = 'z_mvc' chained node
/*4996*/    OPC_RecordChild1, // #1 = $dest
/*4997*/    OPC_CheckChild1Type, MVT::i64,
/*4999*/    OPC_RecordChild2, // #2 = $src
/*5000*/    OPC_CheckChild2Type, MVT::i64,
/*5002*/    OPC_RecordChild3, // #3 = $length
/*5003*/    OPC_MoveChild, 3,
/*5005*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5008*/    OPC_CheckPredicate, 50, // Predicate_imm32len8
/*5010*/    OPC_MoveParent,
/*5011*/    OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*5014*/    OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*5017*/    OPC_EmitMergeInputChains1_0,
/*5018*/    OPC_EmitConvertToTarget, 3,
/*5020*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MVCWrapper), 0|OPFL_Chain,
                0/*#VTs*/, 5/*#Ops*/, 4, 5, 6, 7, 8, 
            // Src: (z_mvc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i32)<<P:Predicate_imm32len8>>:$length) - Complexity = 25
            // Dst: (MVCWrapper bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i32):$length)
          /*SwitchOpcode*/ 37,  TARGET_VAL(SystemZISD::CLC),// ->5071
/*5034*/    OPC_RecordNode,   // #0 = 'z_clc' chained node
/*5035*/    OPC_RecordChild1, // #1 = $dest
/*5036*/    OPC_CheckChild1Type, MVT::i64,
/*5038*/    OPC_RecordChild2, // #2 = $src
/*5039*/    OPC_CheckChild2Type, MVT::i64,
/*5041*/    OPC_RecordChild3, // #3 = $length
/*5042*/    OPC_MoveChild, 3,
/*5044*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5047*/    OPC_CheckPredicate, 50, // Predicate_imm32len8
/*5049*/    OPC_MoveParent,
/*5050*/    OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$dest #4 #5
/*5053*/    OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectBDAddr12Only:$src #6 #7
/*5056*/    OPC_EmitMergeInputChains1_0,
/*5057*/    OPC_EmitConvertToTarget, 3,
/*5059*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLCWrapper), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 5/*#Ops*/, 4, 5, 6, 7, 8, 
            // Src: (z_clc bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i32)<<P:Predicate_imm32len8>>:$length) - Complexity = 25
            // Dst: (CLCWrapper:i32 bdaddr12only:i64:$dest, bdaddr12only:i64:$src, (imm:i32):$length)
          /*SwitchOpcode*/ 74|128,1/*202*/,  TARGET_VAL(SystemZISD::SELECT_CCMASK),// ->5277
/*5075*/    OPC_CaptureGlueInput,
/*5076*/    OPC_Scope, 85, /*->5163*/ // 2 children in Scope
/*5078*/      OPC_MoveChild, 0,
/*5080*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5083*/      OPC_RecordMemRef,
/*5084*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5085*/      OPC_CheckFoldableChainNode,
/*5086*/      OPC_RecordChild1, // #1 = $BD2
/*5087*/      OPC_CheckChild1Type, MVT::i64,
/*5089*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5091*/      OPC_CheckPredicate, 13, // Predicate_load
/*5093*/      OPC_MoveParent,
/*5094*/      OPC_RecordChild1, // #2 = $R1src
/*5095*/      OPC_RecordChild2, // #3 = $valid
/*5096*/      OPC_MoveChild, 2,
/*5098*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5101*/      OPC_CheckPredicate, 51, // Predicate_cond4
/*5103*/      OPC_MoveParent,
/*5104*/      OPC_RecordChild3, // #4 = $R3
/*5105*/      OPC_MoveChild, 3,
/*5107*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5110*/      OPC_CheckPredicate, 51, // Predicate_cond4
/*5112*/      OPC_MoveParent,
/*5113*/      OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->5138
/*5116*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasLoadStoreOnCond())
/*5118*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*5121*/        OPC_EmitMergeInputChains1_0,
/*5122*/        OPC_EmitConvertToTarget, 3,
/*5124*/        OPC_EmitConvertToTarget, 4,
/*5126*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                // Src: (z_select_ccmask:i32 (ld:i32 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src, (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                // Dst: (LOC:i32 GR32:i32:$R1src, bdaddr20only:i64:$BD2, (imm:i8):$valid, (imm:i8):$R3)
              /*SwitchType*/ 22,  MVT::i64,// ->5162
/*5140*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasLoadStoreOnCond())
/*5142*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #5 #6
/*5145*/        OPC_EmitMergeInputChains1_0,
/*5146*/        OPC_EmitConvertToTarget, 3,
/*5148*/        OPC_EmitConvertToTarget, 4,
/*5150*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LOCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 5/*#Ops*/, 2, 5, 6, 7, 8, 
                // Src: (z_select_ccmask:i64 (ld:i64 bdaddr20only:i64:$BD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src, (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R3) - Complexity = 24
                // Dst: (LOCG:i64 GR64:i64:$R1src, bdaddr20only:i64:$BD2, (imm:i8):$valid, (imm:i8):$R3)
              0, // EndSwitchType
/*5163*/    /*Scope*/ 112, /*->5276*/
/*5164*/      OPC_RecordChild0, // #0 = $src1
/*5165*/      OPC_RecordChild1, // #1 = $src2
/*5166*/      OPC_RecordChild2, // #2 = $valid
/*5167*/      OPC_MoveChild, 2,
/*5169*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5172*/      OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*5174*/      OPC_MoveParent,
/*5175*/      OPC_RecordChild3, // #3 = $cc
/*5176*/      OPC_MoveChild, 3,
/*5178*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5181*/      OPC_CheckPredicate, 4, // Predicate_uimm8zx4
/*5183*/      OPC_MoveParent,
/*5184*/      OPC_SwitchType /*5 cases */, 16,  MVT::i32,// ->5203
/*5187*/        OPC_EmitConvertToTarget, 2,
/*5189*/        OPC_EmitConvertToTarget, 3,
/*5191*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (Select32:i32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::i64,// ->5221
/*5205*/        OPC_EmitConvertToTarget, 2,
/*5207*/        OPC_EmitConvertToTarget, 3,
/*5209*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (Select64:i64:i32 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f32,// ->5239
/*5223*/        OPC_EmitConvertToTarget, 2,
/*5225*/        OPC_EmitConvertToTarget, 3,
/*5227*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF32:f32:i32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f64,// ->5257
/*5241*/        OPC_EmitConvertToTarget, 2,
/*5243*/        OPC_EmitConvertToTarget, 3,
/*5245*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF64:f64:i32 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$valid, (imm:i8):$cc)
              /*SwitchType*/ 16,  MVT::f128,// ->5275
/*5259*/        OPC_EmitConvertToTarget, 2,
/*5261*/        OPC_EmitConvertToTarget, 3,
/*5263*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF128), 0|OPFL_GlueInput,
                    2/*#VTs*/, MVT::f128, MVT::i32, 4/*#Ops*/, 0, 1, 4, 5, 
                // Src: (z_select_ccmask:f128 FP128:f128:$src1, FP128:f128:$src2, (imm:i8)<<P:Predicate_uimm8zx4>>:$valid, (imm:i8)<<P:Predicate_uimm8zx4>>:$cc) - Complexity = 11
                // Dst: (SelectF128:f128:i32 FP128:f128:$src1, FP128:f128:$src2, (imm:i8):$valid, (imm:i8):$cc)
              0, // EndSwitchType
/*5276*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::BSWAP),// ->5358
/*5280*/    OPC_Scope, 51, /*->5333*/ // 2 children in Scope
/*5282*/      OPC_MoveChild, 0,
/*5284*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5287*/      OPC_RecordMemRef,
/*5288*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5289*/      OPC_RecordChild1, // #1 = $XBD2
/*5290*/      OPC_CheckChild1Type, MVT::i64,
/*5292*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5294*/      OPC_CheckPredicate, 13, // Predicate_load
/*5296*/      OPC_CheckPredicate, 14, // Predicate_nonvolatile_load
/*5298*/      OPC_MoveParent,
/*5299*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->5316
/*5302*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*5305*/        OPC_EmitMergeInputChains1_0,
/*5306*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRV), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRV:i32 bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::i64,// ->5332
/*5318*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*5321*/        OPC_EmitMergeInputChains1_0,
/*5322*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_nonvolatile_load>>) - Complexity = 19
                // Dst: (LRVG:i64 bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*5333*/    /*Scope*/ 23, /*->5357*/
/*5334*/      OPC_RecordChild0, // #0 = $R2
/*5335*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5346
/*5338*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (bswap:i32 GR32:i32:$R2) - Complexity = 3
                // Dst: (LRVR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->5356
/*5348*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRVGR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:i64 GR64:i64:$R2) - Complexity = 3
                // Dst: (LRVGR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*5357*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,6/*786*/,  TARGET_VAL(ISD::ADD),// ->6148
/*5362*/    OPC_Scope, 44|128,1/*172*/, /*->5537*/ // 10 children in Scope
/*5365*/      OPC_RecordChild0, // #0 = $R1src
/*5366*/      OPC_MoveChild, 1,
/*5368*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5371*/      OPC_RecordMemRef,
/*5372*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5373*/      OPC_CheckFoldableChainNode,
/*5374*/      OPC_RecordChild1, // #2 = $XBD2
/*5375*/      OPC_CheckChild1Type, MVT::i64,
/*5377*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5379*/      OPC_Scope, 43, /*->5424*/ // 5 children in Scope
/*5381*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5383*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*5385*/        OPC_MoveParent,
/*5386*/        OPC_CheckType, MVT::i32,
/*5388*/        OPC_Scope, 16, /*->5406*/ // 2 children in Scope
/*5390*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5393*/          OPC_EmitMergeInputChains1_1,
/*5394*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5406*/        /*Scope*/ 16, /*->5423*/
/*5407*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5410*/          OPC_EmitMergeInputChains1_1,
/*5411*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5423*/        0, /*End of Scope*/
/*5424*/      /*Scope*/ 41, /*->5466*/
/*5425*/        OPC_CheckPredicate, 13, // Predicate_load
/*5427*/        OPC_MoveParent,
/*5428*/        OPC_CheckType, MVT::i32,
/*5430*/        OPC_Scope, 16, /*->5448*/ // 2 children in Scope
/*5432*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5435*/          OPC_EmitMergeInputChains1_1,
/*5436*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5448*/        /*Scope*/ 16, /*->5465*/
/*5449*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5452*/          OPC_EmitMergeInputChains1_1,
/*5453*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (add:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5465*/        0, /*End of Scope*/
/*5466*/      /*Scope*/ 23, /*->5490*/
/*5467*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5469*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*5471*/        OPC_MoveParent,
/*5472*/        OPC_CheckType, MVT::i64,
/*5474*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5477*/        OPC_EmitMergeInputChains1_1,
/*5478*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5490*/      /*Scope*/ 21, /*->5512*/
/*5491*/        OPC_CheckPredicate, 13, // Predicate_load
/*5493*/        OPC_MoveParent,
/*5494*/        OPC_CheckType, MVT::i64,
/*5496*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5499*/        OPC_EmitMergeInputChains1_1,
/*5500*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5512*/      /*Scope*/ 23, /*->5536*/
/*5513*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*5515*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*5517*/        OPC_MoveParent,
/*5518*/        OPC_CheckType, MVT::i64,
/*5520*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*5523*/        OPC_EmitMergeInputChains1_1,
/*5524*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5536*/      0, /*End of Scope*/
/*5537*/    /*Scope*/ 48|128,1/*176*/, /*->5715*/
/*5539*/      OPC_MoveChild, 0,
/*5541*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5544*/      OPC_RecordMemRef,
/*5545*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5546*/      OPC_CheckFoldableChainNode,
/*5547*/      OPC_RecordChild1, // #1 = $XBD2
/*5548*/      OPC_CheckChild1Type, MVT::i64,
/*5550*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5552*/      OPC_Scope, 44, /*->5598*/ // 5 children in Scope
/*5554*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5556*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*5558*/        OPC_MoveParent,
/*5559*/        OPC_RecordChild1, // #2 = $R1src
/*5560*/        OPC_CheckType, MVT::i32,
/*5562*/        OPC_Scope, 16, /*->5580*/ // 2 children in Scope
/*5564*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5567*/          OPC_EmitMergeInputChains1_0,
/*5568*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5580*/        /*Scope*/ 16, /*->5597*/
/*5581*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5584*/          OPC_EmitMergeInputChains1_0,
/*5585*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5597*/        0, /*End of Scope*/
/*5598*/      /*Scope*/ 42, /*->5641*/
/*5599*/        OPC_CheckPredicate, 13, // Predicate_load
/*5601*/        OPC_MoveParent,
/*5602*/        OPC_RecordChild1, // #2 = $R1src
/*5603*/        OPC_CheckType, MVT::i32,
/*5605*/        OPC_Scope, 16, /*->5623*/ // 2 children in Scope
/*5607*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*5610*/          OPC_EmitMergeInputChains1_0,
/*5611*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::A), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (A:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*5623*/        /*Scope*/ 16, /*->5640*/
/*5624*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*5627*/          OPC_EmitMergeInputChains1_0,
/*5628*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (add:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*5640*/        0, /*End of Scope*/
/*5641*/      /*Scope*/ 24, /*->5666*/
/*5642*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*5644*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*5646*/        OPC_MoveParent,
/*5647*/        OPC_RecordChild1, // #2 = $R1src
/*5648*/        OPC_CheckType, MVT::i64,
/*5650*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5653*/        OPC_EmitMergeInputChains1_0,
/*5654*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5666*/      /*Scope*/ 22, /*->5689*/
/*5667*/        OPC_CheckPredicate, 13, // Predicate_load
/*5669*/        OPC_MoveParent,
/*5670*/        OPC_RecordChild1, // #2 = $R1src
/*5671*/        OPC_CheckType, MVT::i64,
/*5673*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*5676*/        OPC_EmitMergeInputChains1_0,
/*5677*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (AG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*5689*/      /*Scope*/ 24, /*->5714*/
/*5690*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*5692*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*5694*/        OPC_MoveParent,
/*5695*/        OPC_RecordChild1, // #2 = $src1
/*5696*/        OPC_CheckType, MVT::i64,
/*5698*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$addr #3 #4 #5
/*5701*/        OPC_EmitMergeInputChains1_0,
/*5702*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*5714*/      0, /*End of Scope*/
/*5715*/    /*Scope*/ 47, /*->5763*/
/*5716*/      OPC_RecordNode, // #0 = $src
/*5717*/      OPC_CheckType, MVT::i64,
/*5719*/      OPC_Scope, 13, /*->5734*/ // 3 children in Scope
/*5721*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*5724*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*5734*/      /*Scope*/ 13, /*->5748*/
/*5735*/        OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*5738*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*5748*/      /*Scope*/ 13, /*->5762*/
/*5749*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*5752*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*5762*/      0, /*End of Scope*/
/*5763*/    /*Scope*/ 35, /*->5799*/
/*5764*/      OPC_RecordChild0, // #0 = $src1
/*5765*/      OPC_MoveChild, 1,
/*5767*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5773*/      OPC_RecordChild0, // #1 = $src2
/*5774*/      OPC_MoveParent,
/*5775*/      OPC_CheckType, MVT::i64,
/*5777*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5780*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*5789*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5799*/    /*Scope*/ 35, /*->5835*/
/*5800*/      OPC_MoveChild, 0,
/*5802*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*5808*/      OPC_RecordChild0, // #0 = $src2
/*5809*/      OPC_MoveParent,
/*5810*/      OPC_RecordChild1, // #1 = $src1
/*5811*/      OPC_CheckType, MVT::i64,
/*5813*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*5816*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*5825*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*5835*/    /*Scope*/ 44|128,1/*172*/, /*->6009*/
/*5837*/      OPC_RecordChild0, // #0 = $R1src
/*5838*/      OPC_Scope, 4|128,1/*132*/, /*->5973*/ // 2 children in Scope
/*5841*/        OPC_RecordChild1, // #1 = $I2
/*5842*/        OPC_MoveChild, 1,
/*5844*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5847*/        OPC_Scope, 20, /*->5869*/ // 6 children in Scope
/*5849*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*5851*/          OPC_MoveParent,
/*5852*/          OPC_CheckType, MVT::i32,
/*5854*/          OPC_EmitConvertToTarget, 1,
/*5856*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5859*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AHI), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AHI:i32:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*5869*/        /*Scope*/ 20, /*->5890*/
/*5870*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*5872*/          OPC_MoveParent,
/*5873*/          OPC_CheckType, MVT::i64,
/*5875*/          OPC_EmitConvertToTarget, 1,
/*5877*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*5880*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGHI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (AGHI:i64:i32 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*5890*/        /*Scope*/ 20, /*->5911*/
/*5891*/          OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*5893*/          OPC_MoveParent,
/*5894*/          OPC_CheckType, MVT::i64,
/*5896*/          OPC_EmitConvertToTarget, 1,
/*5898*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5901*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (AGFI:i64:i32 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*5911*/        /*Scope*/ 20, /*->5932*/
/*5912*/          OPC_CheckPredicate, 57, // Predicate_imm64zx32
/*5914*/          OPC_MoveParent,
/*5915*/          OPC_CheckType, MVT::i64,
/*5917*/          OPC_EmitConvertToTarget, 1,
/*5919*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*5922*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$src2) - Complexity = 7
                  // Dst: (ALGFI:i64:i32 GR64:i64:$src1, (UIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32>>:$src2))
/*5932*/        /*Scope*/ 20, /*->5953*/
/*5933*/          OPC_CheckPredicate, 58, // Predicate_imm64zx32n
/*5935*/          OPC_MoveParent,
/*5936*/          OPC_CheckType, MVT::i64,
/*5938*/          OPC_EmitConvertToTarget, 1,
/*5940*/          OPC_EmitNodeXForm, 11, 2, // NEGIMM32
/*5943*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFI), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_imm64zx32n>><<X:NEGIMM32>>:$src2) - Complexity = 7
                  // Dst: (SLGFI:i64:i32 GR64:i64:$src1, (NEGIMM32:i64 (imm:i64)<<P:Predicate_imm64zx32n>>:$src2))
/*5953*/        /*Scope*/ 18, /*->5972*/
/*5954*/          OPC_MoveParent,
/*5955*/          OPC_CheckType, MVT::i32,
/*5957*/          OPC_EmitConvertToTarget, 1,
/*5959*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*5962*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AFI), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                  // Dst: (AFI:i32:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*5972*/        0, /*End of Scope*/
/*5973*/      /*Scope*/ 34, /*->6008*/
/*5974*/        OPC_MoveChild, 1,
/*5976*/        OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->5992
/*5980*/          OPC_RecordChild0, // #1 = $src2
/*5981*/          OPC_MoveParent,
/*5982*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6007
/*5995*/          OPC_RecordChild0, // #1 = $src2
/*5996*/          OPC_MoveParent,
/*5997*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                0, // EndSwitchOpcode
/*6008*/      0, /*End of Scope*/
/*6009*/    /*Scope*/ 36, /*->6046*/
/*6010*/      OPC_MoveChild, 0,
/*6012*/      OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6029
/*6016*/        OPC_RecordChild0, // #0 = $src2
/*6017*/        OPC_MoveParent,
/*6018*/        OPC_RecordChild1, // #1 = $src1
/*6019*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (AGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6045
/*6032*/        OPC_RecordChild0, // #0 = $src2
/*6033*/        OPC_MoveParent,
/*6034*/        OPC_RecordChild1, // #1 = $src1
/*6035*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
              0, // EndSwitchOpcode
/*6046*/    /*Scope*/ 35, /*->6082*/
/*6047*/      OPC_RecordChild0, // #0 = $src1
/*6048*/      OPC_MoveChild, 1,
/*6050*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6053*/      OPC_RecordChild0, // #1 = $src2
/*6054*/      OPC_MoveChild, 1,
/*6056*/      OPC_CheckValueType, MVT::i32,
/*6058*/      OPC_MoveParent,
/*6059*/      OPC_MoveParent,
/*6060*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6063*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6072*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (add:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6082*/    /*Scope*/ 35, /*->6118*/
/*6083*/      OPC_MoveChild, 0,
/*6085*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*6088*/      OPC_RecordChild0, // #0 = $src2
/*6089*/      OPC_MoveChild, 1,
/*6091*/      OPC_CheckValueType, MVT::i32,
/*6093*/      OPC_MoveParent,
/*6094*/      OPC_MoveParent,
/*6095*/      OPC_RecordChild1, // #1 = $src1
/*6096*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6099*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6108*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (add:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (AGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6118*/    /*Scope*/ 28, /*->6147*/
/*6119*/      OPC_RecordChild0, // #0 = $R1src
/*6120*/      OPC_RecordChild1, // #1 = $R2
/*6121*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6134
/*6124*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (AR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->6146
/*6136*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::AGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (AGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6147*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67|128,3/*451*/,  TARGET_VAL(ISD::ADDC),// ->6603
/*6152*/    OPC_Scope, 104, /*->6258*/ // 7 children in Scope
/*6154*/      OPC_RecordChild0, // #0 = $R1src
/*6155*/      OPC_MoveChild, 1,
/*6157*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6160*/      OPC_RecordMemRef,
/*6161*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6162*/      OPC_CheckFoldableChainNode,
/*6163*/      OPC_RecordChild1, // #2 = $XBD2
/*6164*/      OPC_CheckChild1Type, MVT::i64,
/*6166*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6168*/      OPC_Scope, 41, /*->6211*/ // 3 children in Scope
/*6170*/        OPC_CheckPredicate, 13, // Predicate_load
/*6172*/        OPC_MoveParent,
/*6173*/        OPC_CheckType, MVT::i32,
/*6175*/        OPC_Scope, 16, /*->6193*/ // 2 children in Scope
/*6177*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6180*/          OPC_EmitMergeInputChains1_1,
/*6181*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6193*/        /*Scope*/ 16, /*->6210*/
/*6194*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6197*/          OPC_EmitMergeInputChains1_1,
/*6198*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (addc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6210*/        0, /*End of Scope*/
/*6211*/      /*Scope*/ 23, /*->6235*/
/*6212*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*6214*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*6216*/        OPC_MoveParent,
/*6217*/        OPC_CheckType, MVT::i64,
/*6219*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6222*/        OPC_EmitMergeInputChains1_1,
/*6223*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6235*/      /*Scope*/ 21, /*->6257*/
/*6236*/        OPC_CheckPredicate, 13, // Predicate_load
/*6238*/        OPC_MoveParent,
/*6239*/        OPC_CheckType, MVT::i64,
/*6241*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6244*/        OPC_EmitMergeInputChains1_1,
/*6245*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (addc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6257*/      0, /*End of Scope*/
/*6258*/    /*Scope*/ 106, /*->6365*/
/*6259*/      OPC_MoveChild, 0,
/*6261*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6264*/      OPC_RecordMemRef,
/*6265*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6266*/      OPC_CheckFoldableChainNode,
/*6267*/      OPC_RecordChild1, // #1 = $XBD2
/*6268*/      OPC_CheckChild1Type, MVT::i64,
/*6270*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6272*/      OPC_Scope, 42, /*->6316*/ // 3 children in Scope
/*6274*/        OPC_CheckPredicate, 13, // Predicate_load
/*6276*/        OPC_MoveParent,
/*6277*/        OPC_RecordChild1, // #2 = $R1src
/*6278*/        OPC_CheckType, MVT::i32,
/*6280*/        OPC_Scope, 16, /*->6298*/ // 2 children in Scope
/*6282*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6285*/          OPC_EmitMergeInputChains1_0,
/*6286*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::AL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (AL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6298*/        /*Scope*/ 16, /*->6315*/
/*6299*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6302*/          OPC_EmitMergeInputChains1_0,
/*6303*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (addc:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (ALY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6315*/        0, /*End of Scope*/
/*6316*/      /*Scope*/ 24, /*->6341*/
/*6317*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*6319*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*6321*/        OPC_MoveParent,
/*6322*/        OPC_RecordChild1, // #2 = $R1src
/*6323*/        OPC_CheckType, MVT::i64,
/*6325*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6328*/        OPC_EmitMergeInputChains1_0,
/*6329*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6341*/      /*Scope*/ 22, /*->6364*/
/*6342*/        OPC_CheckPredicate, 13, // Predicate_load
/*6344*/        OPC_MoveParent,
/*6345*/        OPC_RecordChild1, // #2 = $R1src
/*6346*/        OPC_CheckType, MVT::i64,
/*6348*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6351*/        OPC_EmitMergeInputChains1_0,
/*6352*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (addc:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6364*/      0, /*End of Scope*/
/*6365*/    /*Scope*/ 35, /*->6401*/
/*6366*/      OPC_RecordChild0, // #0 = $src1
/*6367*/      OPC_MoveChild, 1,
/*6369*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6375*/      OPC_RecordChild0, // #1 = $src2
/*6376*/      OPC_MoveParent,
/*6377*/      OPC_CheckType, MVT::i64,
/*6379*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6382*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*6391*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (addc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6401*/    /*Scope*/ 35, /*->6437*/
/*6402*/      OPC_MoveChild, 0,
/*6404*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*6410*/      OPC_RecordChild0, // #0 = $src2
/*6411*/      OPC_MoveParent,
/*6412*/      OPC_RecordChild1, // #1 = $src1
/*6413*/      OPC_CheckType, MVT::i64,
/*6415*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*6418*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*6427*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 3, 
              // Src: (addc:i64 (and:i64 GR64:i64:$src2, 4294967295:i64), GR64:i64:$src1) - Complexity = 11
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*6437*/    /*Scope*/ 116, /*->6554*/
/*6438*/      OPC_RecordChild0, // #0 = $R3
/*6439*/      OPC_Scope, 94, /*->6535*/ // 2 children in Scope
/*6441*/        OPC_RecordChild1, // #1 = $I2
/*6442*/        OPC_MoveChild, 1,
/*6444*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6447*/        OPC_Scope, 22, /*->6471*/ // 4 children in Scope
/*6449*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*6451*/          OPC_MoveParent,
/*6452*/          OPC_CheckType, MVT::i32,
/*6454*/          OPC_CheckPatternPredicate, 1, // (Subtarget.hasDistinctOps())
/*6456*/          OPC_EmitConvertToTarget, 1,
/*6458*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*6461*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALHSIK), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$R3, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (ALHSIK:i32:i32 GR32:i32:$R3, (SIMM16:i32 (imm:i32):$I2))
/*6471*/        /*Scope*/ 22, /*->6494*/
/*6472*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*6474*/          OPC_MoveParent,
/*6475*/          OPC_CheckType, MVT::i64,
/*6477*/          OPC_CheckPatternPredicate, 1, // (Subtarget.hasDistinctOps())
/*6479*/          OPC_EmitConvertToTarget, 1,
/*6481*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*6484*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGHSIK), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$R3, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (ALGHSIK:i64:i32 GR64:i64:$R3, (SIMM16:i64 (imm:i64):$I2))
/*6494*/        /*Scope*/ 20, /*->6515*/
/*6495*/          OPC_CheckPredicate, 57, // Predicate_imm64zx32
/*6497*/          OPC_MoveParent,
/*6498*/          OPC_CheckType, MVT::i64,
/*6500*/          OPC_EmitConvertToTarget, 1,
/*6502*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6505*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFI), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (ALGFI:i64:i32 GR64:i64:$R1src, (UIMM32:i64 (imm:i64):$I2))
/*6515*/        /*Scope*/ 18, /*->6534*/
/*6516*/          OPC_MoveParent,
/*6517*/          OPC_CheckType, MVT::i32,
/*6519*/          OPC_EmitConvertToTarget, 1,
/*6521*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*6524*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALFI), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (addc:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (ALFI:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*6534*/        0, /*End of Scope*/
/*6535*/      /*Scope*/ 17, /*->6553*/
/*6536*/        OPC_MoveChild, 1,
/*6538*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6541*/        OPC_RecordChild0, // #1 = $src2
/*6542*/        OPC_MoveParent,
/*6543*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*6553*/      0, /*End of Scope*/
/*6554*/    /*Scope*/ 18, /*->6573*/
/*6555*/      OPC_MoveChild, 0,
/*6557*/      OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*6560*/      OPC_RecordChild0, // #0 = $src2
/*6561*/      OPC_MoveParent,
/*6562*/      OPC_RecordChild1, // #1 = $src1
/*6563*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGFR), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (addc:i64 (zext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (ALGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*6573*/    /*Scope*/ 28, /*->6602*/
/*6574*/      OPC_RecordChild0, // #0 = $R1src
/*6575*/      OPC_RecordChild1, // #1 = $R2
/*6576*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6589
/*6579*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->6601
/*6591*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALGR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6602*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16|128,1/*144*/,  TARGET_VAL(ISD::ADDE),// ->6751
/*6607*/    OPC_CaptureGlueInput,
/*6608*/    OPC_Scope, 55, /*->6665*/ // 3 children in Scope
/*6610*/      OPC_RecordChild0, // #0 = $R1src
/*6611*/      OPC_MoveChild, 1,
/*6613*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6616*/      OPC_RecordMemRef,
/*6617*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6618*/      OPC_CheckFoldableChainNode,
/*6619*/      OPC_RecordChild1, // #2 = $XBD2
/*6620*/      OPC_CheckChild1Type, MVT::i64,
/*6622*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6624*/      OPC_CheckPredicate, 13, // Predicate_load
/*6626*/      OPC_MoveParent,
/*6627*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->6646
/*6630*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6633*/        OPC_EmitMergeInputChains1_1,
/*6634*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->6664
/*6648*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6651*/        OPC_EmitMergeInputChains1_1,
/*6652*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (adde:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*6665*/    /*Scope*/ 55, /*->6721*/
/*6666*/      OPC_MoveChild, 0,
/*6668*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6671*/      OPC_RecordMemRef,
/*6672*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6673*/      OPC_CheckFoldableChainNode,
/*6674*/      OPC_RecordChild1, // #1 = $XBD2
/*6675*/      OPC_CheckChild1Type, MVT::i64,
/*6677*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6679*/      OPC_CheckPredicate, 13, // Predicate_load
/*6681*/      OPC_MoveParent,
/*6682*/      OPC_RecordChild1, // #2 = $R1src
/*6683*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->6702
/*6686*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6689*/        OPC_EmitMergeInputChains1_0,
/*6690*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALC), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i32 (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                // Dst: (ALC:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->6720
/*6704*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6707*/        OPC_EmitMergeInputChains1_0,
/*6708*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (adde:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (ALCG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*6721*/    /*Scope*/ 28, /*->6750*/
/*6722*/      OPC_RecordChild0, // #0 = $R1src
/*6723*/      OPC_RecordChild1, // #1 = $R2
/*6724*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6737
/*6727*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (ALCR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->6749
/*6739*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ALCGR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (ALCGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*6750*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 61|128,3/*445*/,  TARGET_VAL(ISD::SUB),// ->7200
/*6755*/    OPC_Scope, 44|128,1/*172*/, /*->6930*/ // 6 children in Scope
/*6758*/      OPC_RecordChild0, // #0 = $R1src
/*6759*/      OPC_MoveChild, 1,
/*6761*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6764*/      OPC_RecordMemRef,
/*6765*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6766*/      OPC_CheckFoldableChainNode,
/*6767*/      OPC_RecordChild1, // #2 = $XBD2
/*6768*/      OPC_CheckChild1Type, MVT::i64,
/*6770*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6772*/      OPC_Scope, 43, /*->6817*/ // 5 children in Scope
/*6774*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*6776*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*6778*/        OPC_MoveParent,
/*6779*/        OPC_CheckType, MVT::i32,
/*6781*/        OPC_Scope, 16, /*->6799*/ // 2 children in Scope
/*6783*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6786*/          OPC_EmitMergeInputChains1_1,
/*6787*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SH), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SH:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6799*/        /*Scope*/ 16, /*->6816*/
/*6800*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6803*/          OPC_EmitMergeInputChains1_1,
/*6804*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (SHY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6816*/        0, /*End of Scope*/
/*6817*/      /*Scope*/ 41, /*->6859*/
/*6818*/        OPC_CheckPredicate, 13, // Predicate_load
/*6820*/        OPC_MoveParent,
/*6821*/        OPC_CheckType, MVT::i32,
/*6823*/        OPC_Scope, 16, /*->6841*/ // 2 children in Scope
/*6825*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*6828*/          OPC_EmitMergeInputChains1_1,
/*6829*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::S), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (S:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*6841*/        /*Scope*/ 16, /*->6858*/
/*6842*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*6845*/          OPC_EmitMergeInputChains1_1,
/*6846*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*6858*/        0, /*End of Scope*/
/*6859*/      /*Scope*/ 23, /*->6883*/
/*6860*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*6862*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*6864*/        OPC_MoveParent,
/*6865*/        OPC_CheckType, MVT::i64,
/*6867*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6870*/        OPC_EmitMergeInputChains1_1,
/*6871*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (SGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6883*/      /*Scope*/ 21, /*->6905*/
/*6884*/        OPC_CheckPredicate, 13, // Predicate_load
/*6886*/        OPC_MoveParent,
/*6887*/        OPC_CheckType, MVT::i64,
/*6889*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*6892*/        OPC_EmitMergeInputChains1_1,
/*6893*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*6905*/      /*Scope*/ 23, /*->6929*/
/*6906*/        OPC_CheckPredicate, 38, // Predicate_zextload
/*6908*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*6910*/        OPC_MoveParent,
/*6911*/        OPC_CheckType, MVT::i64,
/*6913*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$addr #3 #4 #5
/*6916*/        OPC_EmitMergeInputChains1_1,
/*6917*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 bdxaddr20only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                // Dst: (SLGF:i64:i32 GR64:i64:$src1, bdxaddr20only:i64:$addr)
/*6929*/      0, /*End of Scope*/
/*6930*/    /*Scope*/ 47, /*->6978*/
/*6931*/      OPC_RecordNode, // #0 = $src
/*6932*/      OPC_CheckType, MVT::i64,
/*6934*/      OPC_Scope, 13, /*->6949*/ // 3 children in Scope
/*6936*/        OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*6939*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: dynalloc12only:i64:$src - Complexity = 12
                // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*6949*/      /*Scope*/ 13, /*->6963*/
/*6950*/        OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*6953*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
                // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*6963*/      /*Scope*/ 13, /*->6977*/
/*6964*/        OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*6967*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
                // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*6977*/      0, /*End of Scope*/
/*6978*/    /*Scope*/ 54, /*->7033*/
/*6979*/      OPC_MoveChild, 0,
/*6981*/      OPC_CheckInteger, 0, 
/*6983*/      OPC_MoveParent,
/*6984*/      OPC_MoveChild, 1,
/*6986*/      OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->7001
/*6990*/        OPC_RecordChild0, // #0 = $src
/*6991*/        OPC_MoveParent,
/*6992*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                // Dst: (LCGFR:i64:i32 GR32:i32:$src)
              /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7032
/*7004*/        OPC_RecordChild0, // #0 = $src
/*7005*/        OPC_MoveChild, 1,
/*7007*/        OPC_CheckValueType, MVT::i32,
/*7009*/        OPC_MoveParent,
/*7010*/        OPC_MoveParent,
/*7011*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7014*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*7023*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGFR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (sub:i64 0:i64, (sext_inreg:i64 GR64:i64:$src, i32:Other)) - Complexity = 11
                // Dst: (LCGFR:i64:i32 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
              0, // EndSwitchOpcode
/*7033*/    /*Scope*/ 35, /*->7069*/
/*7034*/      OPC_RecordChild0, // #0 = $src1
/*7035*/      OPC_MoveChild, 1,
/*7037*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7043*/      OPC_RecordChild0, // #1 = $src2
/*7044*/      OPC_MoveParent,
/*7045*/      OPC_CheckType, MVT::i64,
/*7047*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7050*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7059*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sub:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
              // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*7069*/    /*Scope*/ 30, /*->7100*/
/*7070*/      OPC_MoveChild, 0,
/*7072*/      OPC_CheckInteger, 0, 
/*7074*/      OPC_MoveParent,
/*7075*/      OPC_RecordChild1, // #0 = $R2
/*7076*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7088
/*7079*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GR32:i32:$R2) - Complexity = 8
                // Dst: (LCR:i32:i32 GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->7099
/*7090*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, GR64:i64:$R2) - Complexity = 8
                // Dst: (LCGR:i64:i32 GR64:i64:$R2)
              0, // EndSwitchType
/*7100*/    /*Scope*/ 98, /*->7199*/
/*7101*/      OPC_RecordChild0, // #0 = $src1
/*7102*/      OPC_Scope, 66, /*->7170*/ // 2 children in Scope
/*7104*/        OPC_MoveChild, 1,
/*7106*/        OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::SIGN_EXTEND),// ->7122
/*7110*/          OPC_RecordChild0, // #1 = $src2
/*7111*/          OPC_MoveParent,
/*7112*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ZERO_EXTEND),// ->7137
/*7125*/          OPC_RecordChild0, // #1 = $src2
/*7126*/          OPC_MoveParent,
/*7127*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7169
/*7140*/          OPC_RecordChild0, // #1 = $src2
/*7141*/          OPC_MoveChild, 1,
/*7143*/          OPC_CheckValueType, MVT::i32,
/*7145*/          OPC_MoveParent,
/*7146*/          OPC_MoveParent,
/*7147*/          OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7150*/          OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7159*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGFR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (SGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*7170*/      /*Scope*/ 27, /*->7198*/
/*7171*/        OPC_RecordChild1, // #1 = $R2
/*7172*/        OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7185
/*7175*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SR), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                  // Dst: (SR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
                /*SwitchType*/ 10,  MVT::i64,// ->7197
/*7187*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SGR), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                  // Dst: (SGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
                0, // EndSwitchType
/*7198*/      0, /*End of Scope*/
/*7199*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60|128,1/*188*/,  TARGET_VAL(ISD::SUBC),// ->7392
/*7204*/    OPC_RecordChild0, // #0 = $R1src
/*7205*/    OPC_Scope, 27|128,1/*155*/, /*->7363*/ // 2 children in Scope
/*7208*/      OPC_MoveChild, 1,
/*7210*/      OPC_Scope, 101, /*->7313*/ // 3 children in Scope
/*7212*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7215*/        OPC_RecordMemRef,
/*7216*/        OPC_RecordNode, // #1 = 'ld' chained node
/*7217*/        OPC_CheckFoldableChainNode,
/*7218*/        OPC_RecordChild1, // #2 = $XBD2
/*7219*/        OPC_CheckChild1Type, MVT::i64,
/*7221*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7223*/        OPC_Scope, 41, /*->7266*/ // 3 children in Scope
/*7225*/          OPC_CheckPredicate, 13, // Predicate_load
/*7227*/          OPC_MoveParent,
/*7228*/          OPC_CheckType, MVT::i32,
/*7230*/          OPC_Scope, 16, /*->7248*/ // 2 children in Scope
/*7232*/            OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7235*/            OPC_EmitMergeInputChains1_1,
/*7236*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SL:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7248*/          /*Scope*/ 16, /*->7265*/
/*7249*/            OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7252*/            OPC_EmitMergeInputChains1_1,
/*7253*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (subc:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (SLY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7265*/          0, /*End of Scope*/
/*7266*/        /*Scope*/ 23, /*->7290*/
/*7267*/          OPC_CheckPredicate, 38, // Predicate_zextload
/*7269*/          OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*7271*/          OPC_MoveParent,
/*7272*/          OPC_CheckType, MVT::i64,
/*7274*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7277*/          OPC_EmitMergeInputChains1_1,
/*7278*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                  // Dst: (SLGF:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*7290*/        /*Scope*/ 21, /*->7312*/
/*7291*/          OPC_CheckPredicate, 13, // Predicate_load
/*7293*/          OPC_MoveParent,
/*7294*/          OPC_CheckType, MVT::i64,
/*7296*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7299*/          OPC_EmitMergeInputChains1_1,
/*7300*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (subc:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SLG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*7312*/        0, /*End of Scope*/
/*7313*/      /*Scope*/ 32, /*->7346*/
/*7314*/        OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7320*/        OPC_RecordChild0, // #1 = $src2
/*7321*/        OPC_MoveParent,
/*7322*/        OPC_CheckType, MVT::i64,
/*7324*/        OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7327*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*7336*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (subc:i64 GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                // Dst: (SLGFR:i64:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*7346*/      /*Scope*/ 15, /*->7362*/
/*7347*/        OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*7350*/        OPC_RecordChild0, // #1 = $src2
/*7351*/        OPC_MoveParent,
/*7352*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGFR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (SLGFR:i64:i32 GR64:i64:$src1, GR32:i32:$src2)
/*7362*/      0, /*End of Scope*/
/*7363*/    /*Scope*/ 27, /*->7391*/
/*7364*/      OPC_RecordChild1, // #1 = $R2
/*7365*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7378
/*7368*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->7390
/*7380*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGR), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*7391*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::SUBE),// ->7482
/*7395*/    OPC_CaptureGlueInput,
/*7396*/    OPC_RecordChild0, // #0 = $R1src
/*7397*/    OPC_Scope, 54, /*->7453*/ // 2 children in Scope
/*7399*/      OPC_MoveChild, 1,
/*7401*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7404*/      OPC_RecordMemRef,
/*7405*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7406*/      OPC_CheckFoldableChainNode,
/*7407*/      OPC_RecordChild1, // #2 = $XBD2
/*7408*/      OPC_CheckChild1Type, MVT::i64,
/*7410*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7412*/      OPC_CheckPredicate, 13, // Predicate_load
/*7414*/      OPC_MoveParent,
/*7415*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->7434
/*7418*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7421*/        OPC_EmitMergeInputChains1_1,
/*7422*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLB), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLB:i32:i32 GR32:i32:$R1src, bdxaddr20only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::i64,// ->7452
/*7436*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7439*/        OPC_EmitMergeInputChains1_1,
/*7440*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBG), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sube:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SLBG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7453*/    /*Scope*/ 27, /*->7481*/
/*7454*/      OPC_RecordChild1, // #1 = $R2
/*7455*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7468
/*7458*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (SLBR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 10,  MVT::i64,// ->7480
/*7470*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLGBR), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (SLGBR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*7481*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,3/*474*/,  TARGET_VAL(ISD::AND),// ->7960
/*7486*/    OPC_Scope, 75, /*->7563*/ // 8 children in Scope
/*7488*/      OPC_RecordChild0, // #0 = $R1src
/*7489*/      OPC_MoveChild, 1,
/*7491*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7494*/      OPC_RecordMemRef,
/*7495*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7496*/      OPC_CheckFoldableChainNode,
/*7497*/      OPC_RecordChild1, // #2 = $XBD2
/*7498*/      OPC_CheckChild1Type, MVT::i64,
/*7500*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7502*/      OPC_CheckPredicate, 13, // Predicate_load
/*7504*/      OPC_MoveParent,
/*7505*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->7544
/*7508*/        OPC_Scope, 16, /*->7526*/ // 2 children in Scope
/*7510*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7513*/          OPC_EmitMergeInputChains1_1,
/*7514*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7526*/        /*Scope*/ 16, /*->7543*/
/*7527*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7530*/          OPC_EmitMergeInputChains1_1,
/*7531*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (and:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7543*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->7562
/*7546*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7549*/        OPC_EmitMergeInputChains1_1,
/*7550*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7563*/    /*Scope*/ 75, /*->7639*/
/*7564*/      OPC_MoveChild, 0,
/*7566*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7569*/      OPC_RecordMemRef,
/*7570*/      OPC_RecordNode, // #0 = 'ld' chained node
/*7571*/      OPC_CheckFoldableChainNode,
/*7572*/      OPC_RecordChild1, // #1 = $XBD2
/*7573*/      OPC_CheckChild1Type, MVT::i64,
/*7575*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7577*/      OPC_CheckPredicate, 13, // Predicate_load
/*7579*/      OPC_MoveParent,
/*7580*/      OPC_RecordChild1, // #2 = $R1src
/*7581*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->7620
/*7584*/        OPC_Scope, 16, /*->7602*/ // 2 children in Scope
/*7586*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7589*/          OPC_EmitMergeInputChains1_0,
/*7590*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::N), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (N:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*7602*/        /*Scope*/ 16, /*->7619*/
/*7603*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*7606*/          OPC_EmitMergeInputChains1_0,
/*7607*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (and:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (NY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*7619*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->7638
/*7622*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*7625*/        OPC_EmitMergeInputChains1_0,
/*7626*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (NG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*7639*/    /*Scope*/ 14, /*->7654*/
/*7640*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7643*/      OPC_RecordChild0, // #0 = $R2
/*7644*/      OPC_CheckType, MVT::i32,
/*7646*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLCR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 255:i32) - Complexity = 8
              // Dst: (LLCR:i32 GR32:i32:$R2)
/*7654*/    /*Scope*/ 15, /*->7670*/
/*7655*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7659*/      OPC_RecordChild0, // #0 = $R2
/*7660*/      OPC_CheckType, MVT::i32,
/*7662*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (and:i32 GR32:i32:$R2, 65535:i32) - Complexity = 8
              // Dst: (LLHR:i32 GR32:i32:$R2)
/*7670*/    /*Scope*/ 14, /*->7685*/
/*7671*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*7674*/      OPC_RecordChild0, // #0 = $R2
/*7675*/      OPC_CheckType, MVT::i64,
/*7677*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGCR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 255:i64) - Complexity = 8
              // Dst: (LLGCR:i64 GR64:i64:$R2)
/*7685*/    /*Scope*/ 15, /*->7701*/
/*7686*/      OPC_CheckAndImm, 127|128,127|128,3/*65535*/, 
/*7690*/      OPC_RecordChild0, // #0 = $R2
/*7691*/      OPC_CheckType, MVT::i64,
/*7693*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (and:i64 GR64:i64:$R2, 65535:i64) - Complexity = 8
              // Dst: (LLGHR:i64 GR64:i64:$R2)
/*7701*/    /*Scope*/ 29, /*->7731*/
/*7702*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*7708*/      OPC_RecordChild0, // #0 = $src
/*7709*/      OPC_CheckType, MVT::i64,
/*7711*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*7714*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*7723*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (and:i64 GR64:i64:$src, 4294967295:i64) - Complexity = 8
              // Dst: (LLGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*7731*/    /*Scope*/ 98|128,1/*226*/, /*->7959*/
/*7733*/      OPC_RecordChild0, // #0 = $R1src
/*7734*/      OPC_RecordChild1, // #1 = $I2
/*7735*/      OPC_Scope, 66|128,1/*194*/, /*->7932*/ // 3 children in Scope
/*7738*/        OPC_MoveChild, 1,
/*7740*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7743*/        OPC_Scope, 20, /*->7765*/ // 9 children in Scope
/*7745*/          OPC_CheckPredicate, 59, // Predicate_imm32ll16c
/*7747*/          OPC_MoveParent,
/*7748*/          OPC_CheckType, MVT::i32,
/*7750*/          OPC_EmitConvertToTarget, 1,
/*7752*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7755*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL32:i32:i32 GR32:i32:$R1src, (LL16:i32 (imm:i32):$I2))
/*7765*/        /*Scope*/ 20, /*->7786*/
/*7766*/          OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*7768*/          OPC_MoveParent,
/*7769*/          OPC_CheckType, MVT::i32,
/*7771*/          OPC_EmitConvertToTarget, 1,
/*7773*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7776*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH32:i32:i32 GR32:i32:$R1src, (LH16:i32 (imm:i32):$I2))
/*7786*/        /*Scope*/ 20, /*->7807*/
/*7787*/          OPC_CheckPredicate, 61, // Predicate_imm64ll16c
/*7789*/          OPC_MoveParent,
/*7790*/          OPC_CheckType, MVT::i64,
/*7792*/          OPC_EmitConvertToTarget, 1,
/*7794*/          OPC_EmitNodeXForm, 3, 2, // LL16
/*7797*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$I2) - Complexity = 7
                  // Dst: (NILL:i64:i32 GR64:i64:$R1src, (LL16:i64 (imm:i64):$I2))
/*7807*/        /*Scope*/ 20, /*->7828*/
/*7808*/          OPC_CheckPredicate, 62, // Predicate_imm64lh16c
/*7810*/          OPC_MoveParent,
/*7811*/          OPC_CheckType, MVT::i64,
/*7813*/          OPC_EmitConvertToTarget, 1,
/*7815*/          OPC_EmitNodeXForm, 4, 2, // LH16
/*7818*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$I2) - Complexity = 7
                  // Dst: (NILH:i64:i32 GR64:i64:$R1src, (LH16:i64 (imm:i64):$I2))
/*7828*/        /*Scope*/ 20, /*->7849*/
/*7829*/          OPC_CheckPredicate, 63, // Predicate_imm64hl16c
/*7831*/          OPC_MoveParent,
/*7832*/          OPC_CheckType, MVT::i64,
/*7834*/          OPC_EmitConvertToTarget, 1,
/*7836*/          OPC_EmitNodeXForm, 5, 2, // HL16
/*7839*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHL), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$I2) - Complexity = 7
                  // Dst: (NIHL:i64:i32 GR64:i64:$R1src, (HL16:i64 (imm:i64):$I2))
/*7849*/        /*Scope*/ 20, /*->7870*/
/*7850*/          OPC_CheckPredicate, 64, // Predicate_imm64hh16c
/*7852*/          OPC_MoveParent,
/*7853*/          OPC_CheckType, MVT::i64,
/*7855*/          OPC_EmitConvertToTarget, 1,
/*7857*/          OPC_EmitNodeXForm, 6, 2, // HH16
/*7860*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHH), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$I2) - Complexity = 7
                  // Dst: (NIHH:i64:i32 GR64:i64:$R1src, (HH16:i64 (imm:i64):$I2))
/*7870*/        /*Scope*/ 20, /*->7891*/
/*7871*/          OPC_CheckPredicate, 65, // Predicate_imm64lf32c
/*7873*/          OPC_MoveParent,
/*7874*/          OPC_CheckType, MVT::i64,
/*7876*/          OPC_EmitConvertToTarget, 1,
/*7878*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*7881*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (NILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*7891*/        /*Scope*/ 20, /*->7912*/
/*7892*/          OPC_CheckPredicate, 66, // Predicate_imm64hf32c
/*7894*/          OPC_MoveParent,
/*7895*/          OPC_CheckType, MVT::i64,
/*7897*/          OPC_EmitConvertToTarget, 1,
/*7899*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*7902*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (NIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*7912*/        /*Scope*/ 18, /*->7931*/
/*7913*/          OPC_MoveParent,
/*7914*/          OPC_CheckType, MVT::i32,
/*7916*/          OPC_EmitConvertToTarget, 1,
/*7918*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*7921*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (NILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*7931*/        0, /*End of Scope*/
/*7932*/      /*Scope*/ 12, /*->7945*/
/*7933*/        OPC_CheckType, MVT::i32,
/*7935*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (NR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*7945*/      /*Scope*/ 12, /*->7958*/
/*7946*/        OPC_CheckType, MVT::i64,
/*7948*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (NGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*7958*/      0, /*End of Scope*/
/*7959*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126|128,1/*254*/,  TARGET_VAL(ISD::XOR),// ->8218
/*7964*/    OPC_Scope, 75, /*->8041*/ // 3 children in Scope
/*7966*/      OPC_RecordChild0, // #0 = $R1src
/*7967*/      OPC_MoveChild, 1,
/*7969*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*7972*/      OPC_RecordMemRef,
/*7973*/      OPC_RecordNode, // #1 = 'ld' chained node
/*7974*/      OPC_CheckFoldableChainNode,
/*7975*/      OPC_RecordChild1, // #2 = $XBD2
/*7976*/      OPC_CheckChild1Type, MVT::i64,
/*7978*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*7980*/      OPC_CheckPredicate, 13, // Predicate_load
/*7982*/      OPC_MoveParent,
/*7983*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->8022
/*7986*/        OPC_Scope, 16, /*->8004*/ // 2 children in Scope
/*7988*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*7991*/          OPC_EmitMergeInputChains1_1,
/*7992*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8004*/        /*Scope*/ 16, /*->8021*/
/*8005*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8008*/          OPC_EmitMergeInputChains1_1,
/*8009*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (xor:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8021*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->8040
/*8024*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8027*/        OPC_EmitMergeInputChains1_1,
/*8028*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*8041*/    /*Scope*/ 75, /*->8117*/
/*8042*/      OPC_MoveChild, 0,
/*8044*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8047*/      OPC_RecordMemRef,
/*8048*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8049*/      OPC_CheckFoldableChainNode,
/*8050*/      OPC_RecordChild1, // #1 = $XBD2
/*8051*/      OPC_CheckChild1Type, MVT::i64,
/*8053*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8055*/      OPC_CheckPredicate, 13, // Predicate_load
/*8057*/      OPC_MoveParent,
/*8058*/      OPC_RecordChild1, // #2 = $R1src
/*8059*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->8098
/*8062*/        OPC_Scope, 16, /*->8080*/ // 2 children in Scope
/*8064*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8067*/          OPC_EmitMergeInputChains1_0,
/*8068*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::X), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (X:i32:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8080*/        /*Scope*/ 16, /*->8097*/
/*8081*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8084*/          OPC_EmitMergeInputChains1_0,
/*8085*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XY), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (xor:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (XY:i32:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8097*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->8116
/*8100*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8103*/        OPC_EmitMergeInputChains1_0,
/*8104*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XG), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (XG:i64:i32 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
              0, // EndSwitchType
/*8117*/    /*Scope*/ 99, /*->8217*/
/*8118*/      OPC_RecordChild0, // #0 = $R1src
/*8119*/      OPC_RecordChild1, // #1 = $I2
/*8120*/      OPC_Scope, 68, /*->8190*/ // 3 children in Scope
/*8122*/        OPC_MoveChild, 1,
/*8124*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8127*/        OPC_Scope, 20, /*->8149*/ // 3 children in Scope
/*8129*/          OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*8131*/          OPC_MoveParent,
/*8132*/          OPC_CheckType, MVT::i64,
/*8134*/          OPC_EmitConvertToTarget, 1,
/*8136*/          OPC_EmitNodeXForm, 7, 2, // LF32
/*8139*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2) - Complexity = 7
                  // Dst: (XILF:i64:i32 GR64:i64:$R1src, (LF32:i64 (imm:i64):$I2))
/*8149*/        /*Scope*/ 20, /*->8170*/
/*8150*/          OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*8152*/          OPC_MoveParent,
/*8153*/          OPC_CheckType, MVT::i64,
/*8155*/          OPC_EmitConvertToTarget, 1,
/*8157*/          OPC_EmitNodeXForm, 8, 2, // HF32
/*8160*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XIHF), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2) - Complexity = 7
                  // Dst: (XIHF:i64:i32 GR64:i64:$R1src, (HF32:i64 (imm:i64):$I2))
/*8170*/        /*Scope*/ 18, /*->8189*/
/*8171*/          OPC_MoveParent,
/*8172*/          OPC_CheckType, MVT::i32,
/*8174*/          OPC_EmitConvertToTarget, 1,
/*8176*/          OPC_EmitNodeXForm, 9, 2, // UIMM32
/*8179*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::XILF32), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 GR32:i32:$R1src, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (XILF32:i32:i32 GR32:i32:$R1src, (UIMM32:i32 (imm:i32):$I2))
/*8189*/        0, /*End of Scope*/
/*8190*/      /*Scope*/ 12, /*->8203*/
/*8191*/        OPC_CheckType, MVT::i32,
/*8193*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (XR:i32:i32 GR32:i32:$R1src, GR32:i32:$R2)
/*8203*/      /*Scope*/ 12, /*->8216*/
/*8204*/        OPC_CheckType, MVT::i64,
/*8206*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XGR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (XGR:i64:i32 GR64:i64:$R1src, GR64:i64:$R2)
/*8216*/      0, /*End of Scope*/
/*8217*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,4/*522*/,  TARGET_VAL(ISD::MUL),// ->8744
/*8222*/    OPC_Scope, 14|128,1/*142*/, /*->8367*/ // 7 children in Scope
/*8225*/      OPC_RecordChild0, // #0 = $R1src
/*8226*/      OPC_MoveChild, 1,
/*8228*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8231*/      OPC_RecordMemRef,
/*8232*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8233*/      OPC_CheckFoldableChainNode,
/*8234*/      OPC_RecordChild1, // #2 = $XBD2
/*8235*/      OPC_CheckChild1Type, MVT::i64,
/*8237*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8239*/      OPC_Scope, 41, /*->8282*/ // 4 children in Scope
/*8241*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8243*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*8245*/        OPC_MoveParent,
/*8246*/        OPC_CheckType, MVT::i32,
/*8248*/        OPC_Scope, 15, /*->8265*/ // 2 children in Scope
/*8250*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8253*/          OPC_EmitMergeInputChains1_1,
/*8254*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8265*/        /*Scope*/ 15, /*->8281*/
/*8266*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8269*/          OPC_EmitMergeInputChains1_1,
/*8270*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8281*/        0, /*End of Scope*/
/*8282*/      /*Scope*/ 39, /*->8322*/
/*8283*/        OPC_CheckPredicate, 13, // Predicate_load
/*8285*/        OPC_MoveParent,
/*8286*/        OPC_CheckType, MVT::i32,
/*8288*/        OPC_Scope, 15, /*->8305*/ // 2 children in Scope
/*8290*/          OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8293*/          OPC_EmitMergeInputChains1_1,
/*8294*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8305*/        /*Scope*/ 15, /*->8321*/
/*8306*/          OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8309*/          OPC_EmitMergeInputChains1_1,
/*8310*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (mul:i32 GR32:i32:$R1src, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8321*/        0, /*End of Scope*/
/*8322*/      /*Scope*/ 22, /*->8345*/
/*8323*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8325*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*8327*/        OPC_MoveParent,
/*8328*/        OPC_CheckType, MVT::i64,
/*8330*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8333*/        OPC_EmitMergeInputChains1_1,
/*8334*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8345*/      /*Scope*/ 20, /*->8366*/
/*8346*/        OPC_CheckPredicate, 13, // Predicate_load
/*8348*/        OPC_MoveParent,
/*8349*/        OPC_CheckType, MVT::i64,
/*8351*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8354*/        OPC_EmitMergeInputChains1_1,
/*8355*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8366*/      0, /*End of Scope*/
/*8367*/    /*Scope*/ 17|128,1/*145*/, /*->8514*/
/*8369*/      OPC_MoveChild, 0,
/*8371*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8374*/      OPC_RecordMemRef,
/*8375*/      OPC_RecordNode, // #0 = 'ld' chained node
/*8376*/      OPC_CheckFoldableChainNode,
/*8377*/      OPC_RecordChild1, // #1 = $XBD2
/*8378*/      OPC_CheckChild1Type, MVT::i64,
/*8380*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8382*/      OPC_Scope, 42, /*->8426*/ // 4 children in Scope
/*8384*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8386*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*8388*/        OPC_MoveParent,
/*8389*/        OPC_RecordChild1, // #2 = $R1src
/*8390*/        OPC_CheckType, MVT::i32,
/*8392*/        OPC_Scope, 15, /*->8409*/ // 2 children in Scope
/*8394*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8397*/          OPC_EmitMergeInputChains1_0,
/*8398*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MH:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8409*/        /*Scope*/ 15, /*->8425*/
/*8410*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8413*/          OPC_EmitMergeInputChains1_0,
/*8414*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MHY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8425*/        0, /*End of Scope*/
/*8426*/      /*Scope*/ 40, /*->8467*/
/*8427*/        OPC_CheckPredicate, 13, // Predicate_load
/*8429*/        OPC_MoveParent,
/*8430*/        OPC_RecordChild1, // #2 = $R1src
/*8431*/        OPC_CheckType, MVT::i32,
/*8433*/        OPC_Scope, 15, /*->8450*/ // 2 children in Scope
/*8435*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*8438*/          OPC_EmitMergeInputChains1_0,
/*8439*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MS:i32 GR32:i32:$R1src, bdxaddr12pair:i64:$XBD2)
/*8450*/        /*Scope*/ 15, /*->8466*/
/*8451*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*8454*/          OPC_EmitMergeInputChains1_0,
/*8455*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (mul:i32 (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$R1src) - Complexity = 19
                  // Dst: (MSY:i32 GR32:i32:$R1src, bdxaddr20pair:i64:$XBD2)
/*8466*/        0, /*End of Scope*/
/*8467*/      /*Scope*/ 23, /*->8491*/
/*8468*/        OPC_CheckPredicate, 52, // Predicate_sextload
/*8470*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*8472*/        OPC_MoveParent,
/*8473*/        OPC_RecordChild1, // #2 = $R1src
/*8474*/        OPC_CheckType, MVT::i64,
/*8476*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8479*/        OPC_EmitMergeInputChains1_0,
/*8480*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSGF:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8491*/      /*Scope*/ 21, /*->8513*/
/*8492*/        OPC_CheckPredicate, 13, // Predicate_load
/*8494*/        OPC_MoveParent,
/*8495*/        OPC_RecordChild1, // #2 = $R1src
/*8496*/        OPC_CheckType, MVT::i64,
/*8498*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8501*/        OPC_EmitMergeInputChains1_0,
/*8502*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSG), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$R1src) - Complexity = 19
                // Dst: (MSG:i64 GR64:i64:$R1src, bdxaddr20only:i64:$XBD2)
/*8513*/      0, /*End of Scope*/
/*8514*/    /*Scope*/ 113, /*->8628*/
/*8515*/      OPC_RecordChild0, // #0 = $R1src
/*8516*/      OPC_Scope, 68, /*->8586*/ // 3 children in Scope
/*8518*/        OPC_RecordChild1, // #1 = $I2
/*8519*/        OPC_MoveChild, 1,
/*8521*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8524*/        OPC_Scope, 19, /*->8545*/ // 3 children in Scope
/*8526*/          OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*8528*/          OPC_MoveParent,
/*8529*/          OPC_CheckType, MVT::i32,
/*8531*/          OPC_EmitConvertToTarget, 1,
/*8533*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8536*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MHI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MHI:i32 GR32:i32:$R1src, (SIMM16:i32 (imm:i32):$I2))
/*8545*/        /*Scope*/ 19, /*->8565*/
/*8546*/          OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*8548*/          OPC_MoveParent,
/*8549*/          OPC_CheckType, MVT::i64,
/*8551*/          OPC_EmitConvertToTarget, 1,
/*8553*/          OPC_EmitNodeXForm, 2, 2, // SIMM16
/*8556*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MGHI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                  // Dst: (MGHI:i64 GR64:i64:$R1src, (SIMM16:i64 (imm:i64):$I2))
/*8565*/        /*Scope*/ 19, /*->8585*/
/*8566*/          OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*8568*/          OPC_MoveParent,
/*8569*/          OPC_CheckType, MVT::i64,
/*8571*/          OPC_EmitConvertToTarget, 1,
/*8573*/          OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8576*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFI), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$R1src, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                  // Dst: (MSGFI:i64 GR64:i64:$R1src, (SIMM32:i64 (imm:i64):$I2))
/*8585*/        0, /*End of Scope*/
/*8586*/      /*Scope*/ 16, /*->8603*/
/*8587*/        OPC_MoveChild, 1,
/*8589*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8592*/        OPC_RecordChild0, // #1 = $src2
/*8593*/        OPC_MoveParent,
/*8594*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8603*/      /*Scope*/ 23, /*->8627*/
/*8604*/        OPC_RecordChild1, // #1 = $I2
/*8605*/        OPC_MoveChild, 1,
/*8607*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8610*/        OPC_MoveParent,
/*8611*/        OPC_CheckType, MVT::i32,
/*8613*/        OPC_EmitConvertToTarget, 1,
/*8615*/        OPC_EmitNodeXForm, 10, 2, // SIMM32
/*8618*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (mul:i32 GR32:i32:$R1src, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                // Dst: (MSFI:i32 GR32:i32:$R1src, (SIMM32:i32 (imm:i32):$I2))
/*8627*/      0, /*End of Scope*/
/*8628*/    /*Scope*/ 17, /*->8646*/
/*8629*/      OPC_MoveChild, 0,
/*8631*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*8634*/      OPC_RecordChild0, // #0 = $src2
/*8635*/      OPC_MoveParent,
/*8636*/      OPC_RecordChild1, // #1 = $src1
/*8637*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, GR32:i32:$src2)
/*8646*/    /*Scope*/ 34, /*->8681*/
/*8647*/      OPC_RecordChild0, // #0 = $src1
/*8648*/      OPC_MoveChild, 1,
/*8650*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8653*/      OPC_RecordChild0, // #1 = $src2
/*8654*/      OPC_MoveChild, 1,
/*8656*/      OPC_CheckValueType, MVT::i32,
/*8658*/      OPC_MoveParent,
/*8659*/      OPC_MoveParent,
/*8660*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8663*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*8672*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
              // Src: (mul:i64 GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8681*/    /*Scope*/ 34, /*->8716*/
/*8682*/      OPC_MoveChild, 0,
/*8684*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND_INREG),
/*8687*/      OPC_RecordChild0, // #0 = $src2
/*8688*/      OPC_MoveChild, 1,
/*8690*/      OPC_CheckValueType, MVT::i32,
/*8692*/      OPC_MoveParent,
/*8693*/      OPC_MoveParent,
/*8694*/      OPC_RecordChild1, // #1 = $src1
/*8695*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*8698*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*8707*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGFR), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
              // Src: (mul:i64 (sext_inreg:i64 GR64:i64:$src2, i32:Other), GR64:i64:$src1) - Complexity = 6
              // Dst: (MSGFR:i64 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*8716*/    /*Scope*/ 26, /*->8743*/
/*8717*/      OPC_RecordChild0, // #0 = $R1src
/*8718*/      OPC_RecordChild1, // #1 = $R2
/*8719*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8731
/*8722*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GR32:i32:$R1src, GR32:i32:$R2) - Complexity = 3
                // Dst: (MSR:i32 GR32:i32:$R1src, GR32:i32:$R2)
              /*SwitchType*/ 9,  MVT::i64,// ->8742
/*8733*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSGR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$R1src, GR64:i64:$R2) - Complexity = 3
                // Dst: (MSGR:i64 GR64:i64:$R1src, GR64:i64:$R2)
              0, // EndSwitchType
/*8743*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UMUL_LOHI64),// ->8793
/*8747*/    OPC_RecordChild0, // #0 = $R1src
/*8748*/    OPC_Scope, 31, /*->8781*/ // 2 children in Scope
/*8750*/      OPC_MoveChild, 1,
/*8752*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8755*/      OPC_RecordMemRef,
/*8756*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8757*/      OPC_CheckFoldableChainNode,
/*8758*/      OPC_RecordChild1, // #2 = $XBD2
/*8759*/      OPC_CheckChild1Type, MVT::i64,
/*8761*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8763*/      OPC_CheckPredicate, 13, // Predicate_load
/*8765*/      OPC_MoveParent,
/*8766*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8769*/      OPC_EmitMergeInputChains1_1,
/*8770*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (MLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8781*/    /*Scope*/ 10, /*->8792*/
/*8782*/      OPC_RecordChild1, // #1 = $R2
/*8783*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_umul_lohi64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (MLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8792*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::SDIVREM32),// ->8842
/*8796*/    OPC_RecordChild0, // #0 = $R1src
/*8797*/    OPC_Scope, 31, /*->8830*/ // 2 children in Scope
/*8799*/      OPC_MoveChild, 1,
/*8801*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8804*/      OPC_RecordMemRef,
/*8805*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8806*/      OPC_CheckFoldableChainNode,
/*8807*/      OPC_RecordChild1, // #2 = $XBD2
/*8808*/      OPC_CheckChild1Type, MVT::i64,
/*8810*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8812*/      OPC_CheckPredicate, 13, // Predicate_load
/*8814*/      OPC_MoveParent,
/*8815*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8818*/      OPC_EmitMergeInputChains1_1,
/*8819*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGF), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DSGF:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8830*/    /*Scope*/ 10, /*->8841*/
/*8831*/      OPC_RecordChild1, // #1 = $R2
/*8832*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGFR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
              // Dst: (DSGFR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*8841*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::SDIVREM64),// ->8891
/*8845*/    OPC_RecordChild0, // #0 = $R1src
/*8846*/    OPC_Scope, 31, /*->8879*/ // 2 children in Scope
/*8848*/      OPC_MoveChild, 1,
/*8850*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8853*/      OPC_RecordMemRef,
/*8854*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8855*/      OPC_CheckFoldableChainNode,
/*8856*/      OPC_RecordChild1, // #2 = $XBD2
/*8857*/      OPC_CheckChild1Type, MVT::i64,
/*8859*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8861*/      OPC_CheckPredicate, 13, // Predicate_load
/*8863*/      OPC_MoveParent,
/*8864*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8867*/      OPC_EmitMergeInputChains1_1,
/*8868*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DSG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8879*/    /*Scope*/ 10, /*->8890*/
/*8880*/      OPC_RecordChild1, // #1 = $R2
/*8881*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DSGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_sdivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DSGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8890*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM32),// ->8940
/*8894*/    OPC_RecordChild0, // #0 = $R1src
/*8895*/    OPC_Scope, 31, /*->8928*/ // 2 children in Scope
/*8897*/      OPC_MoveChild, 1,
/*8899*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8902*/      OPC_RecordMemRef,
/*8903*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8904*/      OPC_CheckFoldableChainNode,
/*8905*/      OPC_RecordChild1, // #2 = $XBD2
/*8906*/      OPC_CheckChild1Type, MVT::i64,
/*8908*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8910*/      OPC_CheckPredicate, 13, // Predicate_load
/*8912*/      OPC_MoveParent,
/*8913*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8916*/      OPC_EmitMergeInputChains1_1,
/*8917*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DL:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8928*/    /*Scope*/ 10, /*->8939*/
/*8929*/      OPC_RecordChild1, // #1 = $R2
/*8930*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem32:Untyped GR128:Untyped:$R1src, GR32:i32:$R2) - Complexity = 3
              // Dst: (DLR:Untyped GR128:Untyped:$R1src, GR32:i32:$R2)
/*8939*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(SystemZISD::UDIVREM64),// ->8989
/*8943*/    OPC_RecordChild0, // #0 = $R1src
/*8944*/    OPC_Scope, 31, /*->8977*/ // 2 children in Scope
/*8946*/      OPC_MoveChild, 1,
/*8948*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*8951*/      OPC_RecordMemRef,
/*8952*/      OPC_RecordNode, // #1 = 'ld' chained node
/*8953*/      OPC_CheckFoldableChainNode,
/*8954*/      OPC_RecordChild1, // #2 = $XBD2
/*8955*/      OPC_CheckChild1Type, MVT::i64,
/*8957*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*8959*/      OPC_CheckPredicate, 13, // Predicate_load
/*8961*/      OPC_MoveParent,
/*8962*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*8965*/      OPC_EmitMergeInputChains1_1,
/*8966*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLG), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::Untyped, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (DLG:Untyped GR128:Untyped:$R1src, bdxaddr20only:i64:$XBD2)
/*8977*/    /*Scope*/ 10, /*->8988*/
/*8978*/      OPC_RecordChild1, // #1 = $R2
/*8979*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::DLGR), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (z_udivrem64:Untyped GR128:Untyped:$R1src, GR64:i64:$R2) - Complexity = 3
              // Dst: (DLGR:Untyped GR128:Untyped:$R1src, GR64:i64:$R2)
/*8988*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_AND),// ->9079
/*8992*/    OPC_RecordMemRef,
/*8993*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_and' chained node
/*8994*/    OPC_RecordChild1, // #1 = $ptr
/*8995*/    OPC_CheckChild1Type, MVT::i64,
/*8997*/    OPC_RecordChild2, // #2 = $src2
/*8998*/    OPC_Scope, 45, /*->9045*/ // 2 children in Scope
/*9000*/      OPC_MoveChild, 2,
/*9002*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9005*/      OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*9007*/      OPC_MoveParent,
/*9008*/      OPC_RecordChild3, // #3 = $bitshift
/*9009*/      OPC_RecordChild4, // #4 = $negbitshift
/*9010*/      OPC_RecordChild5, // #5 = $bitsize
/*9011*/      OPC_MoveChild, 5,
/*9013*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9016*/      OPC_MoveParent,
/*9017*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9020*/      OPC_EmitMergeInputChains1_0,
/*9021*/      OPC_EmitConvertToTarget, 2,
/*9023*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*9026*/      OPC_EmitConvertToTarget, 5,
/*9028*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9031*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9045*/    /*Scope*/ 32, /*->9078*/
/*9046*/      OPC_RecordChild3, // #3 = $bitshift
/*9047*/      OPC_RecordChild4, // #4 = $negbitshift
/*9048*/      OPC_RecordChild5, // #5 = $bitsize
/*9049*/      OPC_MoveChild, 5,
/*9051*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9054*/      OPC_MoveParent,
/*9055*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9058*/      OPC_EmitMergeInputChains1_0,
/*9059*/      OPC_EmitConvertToTarget, 5,
/*9061*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9064*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9078*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_OR),// ->9169
/*9082*/    OPC_RecordMemRef,
/*9083*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_or' chained node
/*9084*/    OPC_RecordChild1, // #1 = $ptr
/*9085*/    OPC_CheckChild1Type, MVT::i64,
/*9087*/    OPC_RecordChild2, // #2 = $src2
/*9088*/    OPC_Scope, 45, /*->9135*/ // 2 children in Scope
/*9090*/      OPC_MoveChild, 2,
/*9092*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9095*/      OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*9097*/      OPC_MoveParent,
/*9098*/      OPC_RecordChild3, // #3 = $bitshift
/*9099*/      OPC_RecordChild4, // #4 = $negbitshift
/*9100*/      OPC_RecordChild5, // #5 = $bitsize
/*9101*/      OPC_MoveChild, 5,
/*9103*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9106*/      OPC_MoveParent,
/*9107*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9110*/      OPC_EmitMergeInputChains1_0,
/*9111*/      OPC_EmitConvertToTarget, 2,
/*9113*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*9116*/      OPC_EmitConvertToTarget, 5,
/*9118*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9121*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_OILH:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9135*/    /*Scope*/ 32, /*->9168*/
/*9136*/      OPC_RecordChild3, // #3 = $bitshift
/*9137*/      OPC_RecordChild4, // #4 = $negbitshift
/*9138*/      OPC_RecordChild5, // #5 = $bitsize
/*9139*/      OPC_MoveChild, 5,
/*9141*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9144*/      OPC_MoveParent,
/*9145*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9148*/      OPC_EmitMergeInputChains1_0,
/*9149*/      OPC_EmitConvertToTarget, 5,
/*9151*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9154*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9168*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 87,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_NAND),// ->9259
/*9172*/    OPC_RecordMemRef,
/*9173*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_nand' chained node
/*9174*/    OPC_RecordChild1, // #1 = $ptr
/*9175*/    OPC_CheckChild1Type, MVT::i64,
/*9177*/    OPC_RecordChild2, // #2 = $src2
/*9178*/    OPC_Scope, 45, /*->9225*/ // 2 children in Scope
/*9180*/      OPC_MoveChild, 2,
/*9182*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9185*/      OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*9187*/      OPC_MoveParent,
/*9188*/      OPC_RecordChild3, // #3 = $bitshift
/*9189*/      OPC_RecordChild4, // #4 = $negbitshift
/*9190*/      OPC_RecordChild5, // #5 = $bitsize
/*9191*/      OPC_MoveChild, 5,
/*9193*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9196*/      OPC_MoveParent,
/*9197*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9200*/      OPC_EmitMergeInputChains1_0,
/*9201*/      OPC_EmitConvertToTarget, 2,
/*9203*/      OPC_EmitNodeXForm, 4, 8, // LH16
/*9206*/      OPC_EmitConvertToTarget, 5,
/*9208*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9211*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 19
              // Dst: (ATOMIC_LOADW_NILHi:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9225*/    /*Scope*/ 32, /*->9258*/
/*9226*/      OPC_RecordChild3, // #3 = $bitshift
/*9227*/      OPC_RecordChild4, // #4 = $negbitshift
/*9228*/      OPC_RecordChild5, // #5 = $bitsize
/*9229*/      OPC_MoveChild, 5,
/*9231*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9234*/      OPC_MoveParent,
/*9235*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9238*/      OPC_EmitMergeInputChains1_0,
/*9239*/      OPC_EmitConvertToTarget, 5,
/*9241*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9244*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9258*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_ADD),// ->9347
/*9262*/    OPC_RecordMemRef,
/*9263*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_add' chained node
/*9264*/    OPC_RecordChild1, // #1 = $ptr
/*9265*/    OPC_CheckChild1Type, MVT::i64,
/*9267*/    OPC_RecordChild2, // #2 = $src2
/*9268*/    OPC_Scope, 43, /*->9313*/ // 2 children in Scope
/*9270*/      OPC_MoveChild, 2,
/*9272*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9275*/      OPC_MoveParent,
/*9276*/      OPC_RecordChild3, // #3 = $bitshift
/*9277*/      OPC_RecordChild4, // #4 = $negbitshift
/*9278*/      OPC_RecordChild5, // #5 = $bitsize
/*9279*/      OPC_MoveChild, 5,
/*9281*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9284*/      OPC_MoveParent,
/*9285*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9288*/      OPC_EmitMergeInputChains1_0,
/*9289*/      OPC_EmitConvertToTarget, 2,
/*9291*/      OPC_EmitNodeXForm, 10, 8, // SIMM32
/*9294*/      OPC_EmitConvertToTarget, 5,
/*9296*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9299*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9313*/    /*Scope*/ 32, /*->9346*/
/*9314*/      OPC_RecordChild3, // #3 = $bitshift
/*9315*/      OPC_RecordChild4, // #4 = $negbitshift
/*9316*/      OPC_RecordChild5, // #5 = $bitsize
/*9317*/      OPC_MoveChild, 5,
/*9319*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9322*/      OPC_MoveParent,
/*9323*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9326*/      OPC_EmitMergeInputChains1_0,
/*9327*/      OPC_EmitConvertToTarget, 5,
/*9329*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9332*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9346*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_XOR),// ->9435
/*9350*/    OPC_RecordMemRef,
/*9351*/    OPC_RecordNode,   // #0 = 'z_atomic_loadw_xor' chained node
/*9352*/    OPC_RecordChild1, // #1 = $ptr
/*9353*/    OPC_CheckChild1Type, MVT::i64,
/*9355*/    OPC_RecordChild2, // #2 = $src2
/*9356*/    OPC_Scope, 43, /*->9401*/ // 2 children in Scope
/*9358*/      OPC_MoveChild, 2,
/*9360*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9363*/      OPC_MoveParent,
/*9364*/      OPC_RecordChild3, // #3 = $bitshift
/*9365*/      OPC_RecordChild4, // #4 = $negbitshift
/*9366*/      OPC_RecordChild5, // #5 = $bitsize
/*9367*/      OPC_MoveChild, 5,
/*9369*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9372*/      OPC_MoveParent,
/*9373*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9376*/      OPC_EmitMergeInputChains1_0,
/*9377*/      OPC_EmitConvertToTarget, 2,
/*9379*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9382*/      OPC_EmitConvertToTarget, 5,
/*9384*/      OPC_EmitNodeXForm, 9, 10, // UIMM32
/*9387*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 9, 3, 4, 11, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 18
              // Dst: (ATOMIC_LOADW_XILF:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2), ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9401*/    /*Scope*/ 32, /*->9434*/
/*9402*/      OPC_RecordChild3, // #3 = $bitshift
/*9403*/      OPC_RecordChild4, // #4 = $negbitshift
/*9404*/      OPC_RecordChild5, // #5 = $bitsize
/*9405*/      OPC_MoveChild, 5,
/*9407*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9410*/      OPC_MoveParent,
/*9411*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*9414*/      OPC_EmitMergeInputChains1_0,
/*9415*/      OPC_EmitConvertToTarget, 5,
/*9417*/      OPC_EmitNodeXForm, 9, 8, // UIMM32
/*9420*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
              // Src: (z_atomic_loadw_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
              // Dst: (ATOMIC_LOADW_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
/*9434*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,6/*795*/,  TARGET_VAL(ISD::LOAD),// ->10234
/*9439*/    OPC_RecordMemRef,
/*9440*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*9441*/    OPC_RecordChild1, // #1 = $I2
/*9442*/    OPC_CheckChild1Type, MVT::i64,
/*9444*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*9446*/    OPC_Scope, 34, /*->9482*/ // 10 children in Scope
/*9448*/      OPC_CheckPredicate, 13, // Predicate_load
/*9450*/      OPC_CheckPredicate, 67, // Predicate_aligned_load
/*9452*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9467
/*9455*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9458*/        OPC_EmitMergeInputChains1_0,
/*9459*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LRL:i32 pcrel32:i64:$I2)
              /*SwitchType*/ 12,  MVT::i64,// ->9481
/*9469*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9472*/        OPC_EmitMergeInputChains1_0,
/*9473*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>> - Complexity = 17
                // Dst: (LGRL:i64 pcrel32:i64:$I2)
              0, // EndSwitchType
/*9482*/    /*Scope*/ 58, /*->9541*/
/*9483*/      OPC_CheckPredicate, 52, // Predicate_sextload
/*9485*/      OPC_Scope, 34, /*->9521*/ // 2 children in Scope
/*9487*/        OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*9489*/        OPC_CheckPredicate, 68, // Predicate_aligned_sextloadi16
/*9491*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9506
/*9494*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9497*/          OPC_EmitMergeInputChains1_0,
/*9498*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->9520
/*9508*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9511*/          OPC_EmitMergeInputChains1_0,
/*9512*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>> - Complexity = 17
                  // Dst: (LGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*9521*/      /*Scope*/ 18, /*->9540*/
/*9522*/        OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*9524*/        OPC_CheckPredicate, 69, // Predicate_aligned_sextloadi32
/*9526*/        OPC_CheckType, MVT::i64,
/*9528*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9531*/        OPC_EmitMergeInputChains1_0,
/*9532*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>> - Complexity = 17
                // Dst: (LGFRL:i64 pcrel32:i64:$I2)
/*9540*/      0, /*End of Scope*/
/*9541*/    /*Scope*/ 34, /*->9576*/
/*9542*/      OPC_CheckPredicate, 70, // Predicate_extload
/*9544*/      OPC_CheckPredicate, 71, // Predicate_extloadi16
/*9546*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9561
/*9549*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$src #2
/*9552*/        OPC_EmitMergeInputChains1_0,
/*9553*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (ld:i32 pcrel32:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 17
                // Dst: (LHRL:i32 pcrel32:i64:$src)
              /*SwitchType*/ 12,  MVT::i64,// ->9575
/*9563*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$src #2
/*9566*/        OPC_EmitMergeInputChains1_0,
/*9567*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 17
                // Dst: (LGHRL:i64 pcrel32:i64:$src)
              0, // EndSwitchType
/*9576*/    /*Scope*/ 58, /*->9635*/
/*9577*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*9579*/      OPC_Scope, 34, /*->9615*/ // 2 children in Scope
/*9581*/        OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*9583*/        OPC_CheckPredicate, 73, // Predicate_aligned_zextloadi16
/*9585*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9600
/*9588*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9591*/          OPC_EmitMergeInputChains1_0,
/*9592*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLHRL:i32 pcrel32:i64:$I2)
                /*SwitchType*/ 12,  MVT::i64,// ->9614
/*9602*/          OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9605*/          OPC_EmitMergeInputChains1_0,
/*9606*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGHRL), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>> - Complexity = 17
                  // Dst: (LLGHRL:i64 pcrel32:i64:$I2)
                0, // EndSwitchType
/*9615*/      /*Scope*/ 18, /*->9634*/
/*9616*/        OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*9618*/        OPC_CheckPredicate, 74, // Predicate_aligned_zextloadi32
/*9620*/        OPC_CheckType, MVT::i64,
/*9622*/        OPC_CheckComplexPat, /*CP*/5, /*#*/1, // selectPCRelAddress:$I2 #2
/*9625*/        OPC_EmitMergeInputChains1_0,
/*9626*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFRL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>> - Complexity = 17
                // Dst: (LLGFRL:i64 pcrel32:i64:$I2)
/*9634*/      0, /*End of Scope*/
/*9635*/    /*Scope*/ 101, /*->9737*/
/*9636*/      OPC_CheckPredicate, 13, // Predicate_load
/*9638*/      OPC_SwitchType /*3 cases */, 48,  MVT::i32,// ->9689
/*9641*/        OPC_Scope, 14, /*->9657*/ // 3 children in Scope
/*9643*/          OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9646*/          OPC_EmitMergeInputChains1_0,
/*9647*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::L), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (L:i32 bdxaddr12pair:i64:$XBD2)
/*9657*/        /*Scope*/ 14, /*->9672*/
/*9658*/          OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9661*/          OPC_EmitMergeInputChains1_0,
/*9662*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LY:i32 bdxaddr20pair:i64:$XBD2)
/*9672*/        /*Scope*/ 15, /*->9688*/
/*9673*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9676*/          OPC_EmitMergeInputChains1_0,
/*9677*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LT), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LT:i32:i32 bdxaddr20only:i64:$XBD2)
/*9688*/        0, /*End of Scope*/
              /*SwitchType*/ 29,  MVT::i64,// ->9720
/*9691*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9694*/        OPC_EmitMergeInputChains1_0,
/*9695*/        OPC_Scope, 10, /*->9707*/ // 2 children in Scope
/*9697*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LG), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LG:i64 bdxaddr20only:i64:$XBD2)
/*9707*/        /*Scope*/ 11, /*->9719*/
/*9708*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTG), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LTG:i64:i32 bdxaddr20only:i64:$XBD2)
/*9719*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::Untyped,// ->9736
/*9722*/        OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*9725*/        OPC_EmitMergeInputChains1_0,
/*9726*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::L128), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:Untyped bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (L128:Untyped bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*9737*/    /*Scope*/ 2|128,1/*130*/, /*->9869*/
/*9739*/      OPC_CheckPredicate, 52, // Predicate_sextload
/*9741*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9798
/*9744*/        OPC_Scope, 16, /*->9762*/ // 2 children in Scope
/*9746*/          OPC_CheckPredicate, 75, // Predicate_sextloadi8
/*9748*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9751*/          OPC_EmitMergeInputChains1_0,
/*9752*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$XBD2)
/*9762*/        /*Scope*/ 34, /*->9797*/
/*9763*/          OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*9765*/          OPC_Scope, 14, /*->9781*/ // 2 children in Scope
/*9767*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*9770*/            OPC_EmitMergeInputChains1_0,
/*9771*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$XBD2)
/*9781*/          /*Scope*/ 14, /*->9796*/
/*9782*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*9785*/            OPC_EmitMergeInputChains1_0,
/*9786*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$XBD2)
/*9796*/          0, /*End of Scope*/
/*9797*/        0, /*End of Scope*/
              /*SwitchType*/ 68,  MVT::i64,// ->9868
/*9800*/        OPC_Scope, 16, /*->9818*/ // 3 children in Scope
/*9802*/          OPC_CheckPredicate, 75, // Predicate_sextloadi8
/*9804*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9807*/          OPC_EmitMergeInputChains1_0,
/*9808*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$XBD2)
/*9818*/        /*Scope*/ 16, /*->9835*/
/*9819*/          OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*9821*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9824*/          OPC_EmitMergeInputChains1_0,
/*9825*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$XBD2)
/*9835*/        /*Scope*/ 31, /*->9867*/
/*9836*/          OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*9838*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9841*/          OPC_EmitMergeInputChains1_0,
/*9842*/          OPC_Scope, 10, /*->9854*/ // 2 children in Scope
/*9844*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                    // Dst: (LGF:i64 bdxaddr20only:i64:$XBD2)
/*9854*/          /*Scope*/ 11, /*->9866*/
/*9855*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTGF), 0|OPFL_Chain|OPFL_MemRefs,
                        2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                    // Dst: (LTGF:i64:i32 bdxaddr20only:i64:$XBD2)
/*9866*/          0, /*End of Scope*/
/*9867*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9869*/    /*Scope*/ 115, /*->9985*/
/*9870*/      OPC_CheckPredicate, 70, // Predicate_extload
/*9872*/      OPC_SwitchType /*2 cases */, 54,  MVT::i32,// ->9929
/*9875*/        OPC_Scope, 16, /*->9893*/ // 2 children in Scope
/*9877*/          OPC_CheckPredicate, 76, // Predicate_extloadi8
/*9879*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9882*/          OPC_EmitMergeInputChains1_0,
/*9883*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LB:i32 bdxaddr20only:i64:$src)
/*9893*/        /*Scope*/ 34, /*->9928*/
/*9894*/          OPC_CheckPredicate, 71, // Predicate_extloadi16
/*9896*/          OPC_Scope, 14, /*->9912*/ // 2 children in Scope
/*9898*/            OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$src #2 #3 #4
/*9901*/            OPC_EmitMergeInputChains1_0,
/*9902*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LH), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr12pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LH:i32 bdxaddr12pair:i64:$src)
/*9912*/          /*Scope*/ 14, /*->9927*/
/*9913*/            OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$src #2 #3 #4
/*9916*/            OPC_EmitMergeInputChains1_0,
/*9917*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHY), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:i32 bdxaddr20pair:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                    // Dst: (LHY:i32 bdxaddr20pair:i64:$src)
/*9927*/          0, /*End of Scope*/
/*9928*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->9984
/*9931*/        OPC_Scope, 16, /*->9949*/ // 3 children in Scope
/*9933*/          OPC_CheckPredicate, 76, // Predicate_extloadi8
/*9935*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9938*/          OPC_EmitMergeInputChains1_0,
/*9939*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LGB:i64 bdxaddr20only:i64:$src)
/*9949*/        /*Scope*/ 16, /*->9966*/
/*9950*/          OPC_CheckPredicate, 71, // Predicate_extloadi16
/*9952*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9955*/          OPC_EmitMergeInputChains1_0,
/*9956*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LGH:i64 bdxaddr20only:i64:$src)
/*9966*/        /*Scope*/ 16, /*->9983*/
/*9967*/          OPC_CheckPredicate, 77, // Predicate_extloadi32
/*9969*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$src #2 #3 #4
/*9972*/          OPC_EmitMergeInputChains1_0,
/*9973*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 16
                  // Dst: (LGF:i64 bdxaddr20only:i64:$src)
/*9983*/        0, /*End of Scope*/
              0, // EndSwitchType
/*9985*/    /*Scope*/ 97, /*->10083*/
/*9986*/      OPC_CheckPredicate, 38, // Predicate_zextload
/*9988*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->10027
/*9991*/        OPC_Scope, 16, /*->10009*/ // 2 children in Scope
/*9993*/          OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*9995*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*9998*/          OPC_EmitMergeInputChains1_0,
/*9999*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLC:i32 bdxaddr20only:i64:$XBD2)
/*10009*/       /*Scope*/ 16, /*->10026*/
/*10010*/         OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*10012*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*10015*/         OPC_EmitMergeInputChains1_0,
/*10016*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLH:i32 bdxaddr20only:i64:$XBD2)
/*10026*/       0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->10082
/*10029*/       OPC_Scope, 16, /*->10047*/ // 3 children in Scope
/*10031*/         OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*10033*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*10036*/         OPC_EmitMergeInputChains1_0,
/*10037*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGC), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (LLGC:i64 bdxaddr20only:i64:$XBD2)
/*10047*/       /*Scope*/ 16, /*->10064*/
/*10048*/         OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*10050*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*10053*/         OPC_EmitMergeInputChains1_0,
/*10054*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (LLGH:i64 bdxaddr20only:i64:$XBD2)
/*10064*/       /*Scope*/ 16, /*->10081*/
/*10065*/         OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*10067*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectBDXAddr20Only:$XBD2 #2 #3 #4
/*10070*/         OPC_EmitMergeInputChains1_0,
/*10071*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGF), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (LLGF:i64 bdxaddr20only:i64:$XBD2)
/*10081*/       0, /*End of Scope*/
              0, // EndSwitchType
/*10083*/   /*Scope*/ 88, /*->10172*/
/*10084*/     OPC_CheckPredicate, 13, // Predicate_load
/*10086*/     OPC_SwitchType /*3 cases */, 32,  MVT::f32,// ->10121
/*10089*/       OPC_Scope, 14, /*->10105*/ // 2 children in Scope
/*10091*/         OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*10094*/         OPC_EmitMergeInputChains1_0,
/*10095*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LE), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LE:f32 bdxaddr12pair:i64:$XBD2)
/*10105*/       /*Scope*/ 14, /*->10120*/
/*10106*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*10109*/         OPC_EmitMergeInputChains1_0,
/*10110*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LEY:f32 bdxaddr20pair:i64:$XBD2)
/*10120*/       0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f64,// ->10155
/*10123*/       OPC_Scope, 14, /*->10139*/ // 2 children in Scope
/*10125*/         OPC_CheckComplexPat, /*CP*/6, /*#*/1, // selectBDXAddr12Pair:$XBD2 #2 #3 #4
/*10128*/         OPC_EmitMergeInputChains1_0,
/*10129*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LD:f64 bdxaddr12pair:i64:$XBD2)
/*10139*/       /*Scope*/ 14, /*->10154*/
/*10140*/         OPC_CheckComplexPat, /*CP*/7, /*#*/1, // selectBDXAddr20Pair:$XBD2 #2 #3 #4
/*10143*/         OPC_EmitMergeInputChains1_0,
/*10144*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDY), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (LDY:f64 bdxaddr20pair:i64:$XBD2)
/*10154*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::f128,// ->10171
/*10157*/       OPC_CheckComplexPat, /*CP*/8, /*#*/1, // selectBDXAddr20Only128:$src #2 #3 #4
/*10160*/       OPC_EmitMergeInputChains1_0,
/*10161*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr20only128:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LX:f128 bdxaddr20only128:i64:$src)
              0, // EndSwitchType
/*10172*/   /*Scope*/ 60, /*->10233*/
/*10173*/     OPC_CheckPredicate, 70, // Predicate_extload
/*10175*/     OPC_Scope, 36, /*->10213*/ // 2 children in Scope
/*10177*/       OPC_CheckPredicate, 78, // Predicate_extloadf32
/*10179*/       OPC_SwitchType /*2 cases */, 14,  MVT::f64,// ->10196
/*10182*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*10185*/         OPC_EmitMergeInputChains1_0,
/*10186*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LDEB:f64 bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 14,  MVT::f128,// ->10212
/*10198*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*10201*/         OPC_EmitMergeInputChains1_0,
/*10202*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 16
                  // Dst: (LXEB:f128 bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*10213*/     /*Scope*/ 18, /*->10232*/
/*10214*/       OPC_CheckPredicate, 79, // Predicate_extloadf64
/*10216*/       OPC_CheckType, MVT::f128,
/*10218*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*10221*/       OPC_EmitMergeInputChains1_0,
/*10222*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:f128 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>> - Complexity = 16
                // Dst: (LXDB:f128 bdxaddr12only:i64:$XBD2)
/*10232*/     0, /*End of Scope*/
/*10233*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 38|128,1/*166*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->10404
/*10238*/   OPC_RecordMemRef,
/*10239*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*10240*/   OPC_RecordChild1, // #1 = $ptr
/*10241*/   OPC_CheckChild1Type, MVT::i64,
/*10243*/   OPC_RecordChild2, // #2 = $src2
/*10244*/   OPC_Scope, 117, /*->10363*/ // 3 children in Scope
/*10246*/     OPC_MoveChild, 2,
/*10248*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10251*/     OPC_Scope, 27, /*->10280*/ // 4 children in Scope
/*10253*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*10255*/       OPC_MoveParent,
/*10256*/       OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*10258*/       OPC_CheckType, MVT::i32,
/*10260*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10263*/       OPC_EmitMergeInputChains1_0,
/*10264*/       OPC_EmitConvertToTarget, 2,
/*10266*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*10269*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AHI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AHI:i32:i32 bdaddr20only:i64:$ptr, (SIMM16:i32 (imm:i32):$src2))
/*10280*/     /*Scope*/ 27, /*->10308*/
/*10281*/       OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*10283*/       OPC_MoveParent,
/*10284*/       OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*10286*/       OPC_CheckType, MVT::i64,
/*10288*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10291*/       OPC_EmitMergeInputChains1_0,
/*10292*/       OPC_EmitConvertToTarget, 2,
/*10294*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*10297*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGHI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGHI:i64:i32 bdaddr20only:i64:$ptr, (SIMM16:i64 (imm:i64):$src2))
/*10308*/     /*Scope*/ 27, /*->10336*/
/*10309*/       OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*10311*/       OPC_MoveParent,
/*10312*/       OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*10314*/       OPC_CheckType, MVT::i64,
/*10316*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10319*/       OPC_EmitMergeInputChains1_0,
/*10320*/       OPC_EmitConvertToTarget, 2,
/*10322*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10325*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGFI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_AGFI:i64:i32 bdaddr20only:i64:$ptr, (SIMM32:i64 (imm:i64):$src2))
/*10336*/     /*Scope*/ 25, /*->10362*/
/*10337*/       OPC_MoveParent,
/*10338*/       OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*10340*/       OPC_CheckType, MVT::i32,
/*10342*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10345*/       OPC_EmitMergeInputChains1_0,
/*10346*/       OPC_EmitConvertToTarget, 2,
/*10348*/       OPC_EmitNodeXForm, 10, 5, // SIMM32
/*10351*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AFI), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:SIMM32>>:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_AFI:i32:i32 bdaddr20only:i64:$ptr, (SIMM32:i32 (imm:i32):$src2))
/*10362*/     0, /*End of Scope*/
/*10363*/   /*Scope*/ 19, /*->10383*/
/*10364*/     OPC_CheckPredicate, 80, // Predicate_atomic_load_add_32
/*10366*/     OPC_CheckType, MVT::i32,
/*10368*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10371*/     OPC_EmitMergeInputChains1_0,
/*10372*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10383*/   /*Scope*/ 19, /*->10403*/
/*10384*/     OPC_CheckPredicate, 81, // Predicate_atomic_load_add_64
/*10386*/     OPC_CheckType, MVT::i64,
/*10388*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10391*/     OPC_EmitMergeInputChains1_0,
/*10392*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_AGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10403*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->10715
/*10408*/   OPC_RecordMemRef,
/*10409*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*10410*/   OPC_RecordChild1, // #1 = $ptr
/*10411*/   OPC_CheckChild1Type, MVT::i64,
/*10413*/   OPC_RecordChild2, // #2 = $src2
/*10414*/   OPC_Scope, 1|128,2/*257*/, /*->10674*/ // 3 children in Scope
/*10417*/     OPC_MoveChild, 2,
/*10419*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10422*/     OPC_Scope, 27, /*->10451*/ // 9 children in Scope
/*10424*/       OPC_CheckPredicate, 59, // Predicate_imm32ll16c
/*10426*/       OPC_MoveParent,
/*10427*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10429*/       OPC_CheckType, MVT::i32,
/*10431*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10434*/       OPC_EmitMergeInputChains1_0,
/*10435*/       OPC_EmitConvertToTarget, 2,
/*10437*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10440*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10451*/     /*Scope*/ 27, /*->10479*/
/*10452*/       OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*10454*/       OPC_MoveParent,
/*10455*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10457*/       OPC_CheckType, MVT::i32,
/*10459*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10462*/       OPC_EmitMergeInputChains1_0,
/*10463*/       OPC_EmitConvertToTarget, 2,
/*10465*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10468*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10479*/     /*Scope*/ 27, /*->10507*/
/*10480*/       OPC_CheckPredicate, 61, // Predicate_imm64ll16c
/*10482*/       OPC_MoveParent,
/*10483*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10485*/       OPC_CheckType, MVT::i64,
/*10487*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10490*/       OPC_EmitMergeInputChains1_0,
/*10491*/       OPC_EmitConvertToTarget, 2,
/*10493*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10496*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10507*/     /*Scope*/ 27, /*->10535*/
/*10508*/       OPC_CheckPredicate, 62, // Predicate_imm64lh16c
/*10510*/       OPC_MoveParent,
/*10511*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10513*/       OPC_CheckType, MVT::i64,
/*10515*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10518*/       OPC_EmitMergeInputChains1_0,
/*10519*/       OPC_EmitConvertToTarget, 2,
/*10521*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10524*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10535*/     /*Scope*/ 27, /*->10563*/
/*10536*/       OPC_CheckPredicate, 63, // Predicate_imm64hl16c
/*10538*/       OPC_MoveParent,
/*10539*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10541*/       OPC_CheckType, MVT::i64,
/*10543*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10546*/       OPC_EmitMergeInputChains1_0,
/*10547*/       OPC_EmitConvertToTarget, 2,
/*10549*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10552*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHL:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10563*/     /*Scope*/ 27, /*->10591*/
/*10564*/       OPC_CheckPredicate, 64, // Predicate_imm64hh16c
/*10566*/       OPC_MoveParent,
/*10567*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10569*/       OPC_CheckType, MVT::i64,
/*10571*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10574*/       OPC_EmitMergeInputChains1_0,
/*10575*/       OPC_EmitConvertToTarget, 2,
/*10577*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10580*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHH:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10591*/     /*Scope*/ 27, /*->10619*/
/*10592*/       OPC_CheckPredicate, 65, // Predicate_imm64lf32c
/*10594*/       OPC_MoveParent,
/*10595*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10597*/       OPC_CheckType, MVT::i64,
/*10599*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10602*/       OPC_EmitMergeInputChains1_0,
/*10603*/       OPC_EmitConvertToTarget, 2,
/*10605*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10608*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10619*/     /*Scope*/ 27, /*->10647*/
/*10620*/       OPC_CheckPredicate, 66, // Predicate_imm64hf32c
/*10622*/       OPC_MoveParent,
/*10623*/       OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10625*/       OPC_CheckType, MVT::i64,
/*10627*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10630*/       OPC_EmitMergeInputChains1_0,
/*10631*/       OPC_EmitConvertToTarget, 2,
/*10633*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10636*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10647*/     /*Scope*/ 25, /*->10673*/
/*10648*/       OPC_MoveParent,
/*10649*/       OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10651*/       OPC_CheckType, MVT::i32,
/*10653*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10656*/       OPC_EmitMergeInputChains1_0,
/*10657*/       OPC_EmitConvertToTarget, 2,
/*10659*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10662*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10673*/     0, /*End of Scope*/
/*10674*/   /*Scope*/ 19, /*->10694*/
/*10675*/     OPC_CheckPredicate, 82, // Predicate_atomic_load_and_32
/*10677*/     OPC_CheckType, MVT::i32,
/*10679*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10682*/     OPC_EmitMergeInputChains1_0,
/*10683*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*10694*/   /*Scope*/ 19, /*->10714*/
/*10695*/     OPC_CheckPredicate, 83, // Predicate_atomic_load_and_64
/*10697*/     OPC_CheckType, MVT::i64,
/*10699*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10702*/     OPC_EmitMergeInputChains1_0,
/*10703*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*10714*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->11026
/*10719*/   OPC_RecordMemRef,
/*10720*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*10721*/   OPC_RecordChild1, // #1 = $ptr
/*10722*/   OPC_CheckChild1Type, MVT::i64,
/*10724*/   OPC_RecordChild2, // #2 = $src2
/*10725*/   OPC_Scope, 1|128,2/*257*/, /*->10985*/ // 3 children in Scope
/*10728*/     OPC_MoveChild, 2,
/*10730*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10733*/     OPC_Scope, 27, /*->10762*/ // 9 children in Scope
/*10735*/       OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*10737*/       OPC_MoveParent,
/*10738*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10740*/       OPC_CheckType, MVT::i32,
/*10742*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10745*/       OPC_EmitMergeInputChains1_0,
/*10746*/       OPC_EmitConvertToTarget, 2,
/*10748*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10751*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL32:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*10762*/     /*Scope*/ 27, /*->10790*/
/*10763*/       OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*10765*/       OPC_MoveParent,
/*10766*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10768*/       OPC_CheckType, MVT::i32,
/*10770*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10773*/       OPC_EmitMergeInputChains1_0,
/*10774*/       OPC_EmitConvertToTarget, 2,
/*10776*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10779*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH32:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*10790*/     /*Scope*/ 27, /*->10818*/
/*10791*/       OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*10793*/       OPC_MoveParent,
/*10794*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10796*/       OPC_CheckType, MVT::i64,
/*10798*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10801*/       OPC_EmitMergeInputChains1_0,
/*10802*/       OPC_EmitConvertToTarget, 2,
/*10804*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*10807*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILL:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*10818*/     /*Scope*/ 27, /*->10846*/
/*10819*/       OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*10821*/       OPC_MoveParent,
/*10822*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10824*/       OPC_CheckType, MVT::i64,
/*10826*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10829*/       OPC_EmitMergeInputChains1_0,
/*10830*/       OPC_EmitConvertToTarget, 2,
/*10832*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*10835*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILH:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*10846*/     /*Scope*/ 27, /*->10874*/
/*10847*/       OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*10849*/       OPC_MoveParent,
/*10850*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10852*/       OPC_CheckType, MVT::i64,
/*10854*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10857*/       OPC_EmitMergeInputChains1_0,
/*10858*/       OPC_EmitConvertToTarget, 2,
/*10860*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*10863*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHL), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHL:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*10874*/     /*Scope*/ 27, /*->10902*/
/*10875*/       OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*10877*/       OPC_MoveParent,
/*10878*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10880*/       OPC_CheckType, MVT::i64,
/*10882*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10885*/       OPC_EmitMergeInputChains1_0,
/*10886*/       OPC_EmitConvertToTarget, 2,
/*10888*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*10891*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHH), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHH:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*10902*/     /*Scope*/ 27, /*->10930*/
/*10903*/       OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*10905*/       OPC_MoveParent,
/*10906*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10908*/       OPC_CheckType, MVT::i64,
/*10910*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10913*/       OPC_EmitMergeInputChains1_0,
/*10914*/       OPC_EmitConvertToTarget, 2,
/*10916*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*10919*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*10930*/     /*Scope*/ 27, /*->10958*/
/*10931*/       OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*10933*/       OPC_MoveParent,
/*10934*/       OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*10936*/       OPC_CheckType, MVT::i64,
/*10938*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10941*/       OPC_EmitMergeInputChains1_0,
/*10942*/       OPC_EmitConvertToTarget, 2,
/*10944*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*10947*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_OIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*10958*/     /*Scope*/ 25, /*->10984*/
/*10959*/       OPC_MoveParent,
/*10960*/       OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10962*/       OPC_CheckType, MVT::i32,
/*10964*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10967*/       OPC_EmitMergeInputChains1_0,
/*10968*/       OPC_EmitConvertToTarget, 2,
/*10970*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*10973*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_OILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*10984*/     0, /*End of Scope*/
/*10985*/   /*Scope*/ 19, /*->11005*/
/*10986*/     OPC_CheckPredicate, 84, // Predicate_atomic_load_or_32
/*10988*/     OPC_CheckType, MVT::i32,
/*10990*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*10993*/     OPC_EmitMergeInputChains1_0,
/*10994*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*11005*/   /*Scope*/ 19, /*->11025*/
/*11006*/     OPC_CheckPredicate, 85, // Predicate_atomic_load_or_64
/*11008*/     OPC_CheckType, MVT::i64,
/*11010*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11013*/     OPC_EmitMergeInputChains1_0,
/*11014*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_OGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*11025*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,1/*138*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->11168
/*11030*/   OPC_RecordMemRef,
/*11031*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*11032*/   OPC_RecordChild1, // #1 = $ptr
/*11033*/   OPC_CheckChild1Type, MVT::i64,
/*11035*/   OPC_RecordChild2, // #2 = $src2
/*11036*/   OPC_Scope, 89, /*->11127*/ // 3 children in Scope
/*11038*/     OPC_MoveChild, 2,
/*11040*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11043*/     OPC_Scope, 27, /*->11072*/ // 3 children in Scope
/*11045*/       OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*11047*/       OPC_MoveParent,
/*11048*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*11050*/       OPC_CheckType, MVT::i64,
/*11052*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11055*/       OPC_EmitMergeInputChains1_0,
/*11056*/       OPC_EmitConvertToTarget, 2,
/*11058*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*11061*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XILF:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*11072*/     /*Scope*/ 27, /*->11100*/
/*11073*/       OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*11075*/       OPC_MoveParent,
/*11076*/       OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*11078*/       OPC_CheckType, MVT::i64,
/*11080*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11083*/       OPC_EmitMergeInputChains1_0,
/*11084*/       OPC_EmitConvertToTarget, 2,
/*11086*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*11089*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XIHF), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_XIHF:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*11100*/     /*Scope*/ 25, /*->11126*/
/*11101*/       OPC_MoveParent,
/*11102*/       OPC_CheckPredicate, 87, // Predicate_atomic_load_xor_32
/*11104*/       OPC_CheckType, MVT::i32,
/*11106*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11109*/       OPC_EmitMergeInputChains1_0,
/*11110*/       OPC_EmitConvertToTarget, 2,
/*11112*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*11115*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XILF32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_XILF32:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*11126*/     0, /*End of Scope*/
/*11127*/   /*Scope*/ 19, /*->11147*/
/*11128*/     OPC_CheckPredicate, 87, // Predicate_atomic_load_xor_32
/*11130*/     OPC_CheckType, MVT::i32,
/*11132*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11135*/     OPC_EmitMergeInputChains1_0,
/*11136*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*11147*/   /*Scope*/ 19, /*->11167*/
/*11148*/     OPC_CheckPredicate, 86, // Predicate_atomic_load_xor_64
/*11150*/     OPC_CheckType, MVT::i64,
/*11152*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11155*/     OPC_EmitMergeInputChains1_0,
/*11156*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_XGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*11167*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,2/*307*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->11479
/*11172*/   OPC_RecordMemRef,
/*11173*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*11174*/   OPC_RecordChild1, // #1 = $ptr
/*11175*/   OPC_CheckChild1Type, MVT::i64,
/*11177*/   OPC_RecordChild2, // #2 = $src2
/*11178*/   OPC_Scope, 1|128,2/*257*/, /*->11438*/ // 3 children in Scope
/*11181*/     OPC_MoveChild, 2,
/*11183*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11186*/     OPC_Scope, 27, /*->11215*/ // 9 children in Scope
/*11188*/       OPC_CheckPredicate, 59, // Predicate_imm32ll16c
/*11190*/       OPC_MoveParent,
/*11191*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11193*/       OPC_CheckType, MVT::i32,
/*11195*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11198*/       OPC_EmitMergeInputChains1_0,
/*11199*/       OPC_EmitConvertToTarget, 2,
/*11201*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*11204*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILL32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILL32i:i32:i32 bdaddr20only:i64:$ptr, (LL16:i32 (imm:i32):$src2))
/*11215*/     /*Scope*/ 27, /*->11243*/
/*11216*/       OPC_CheckPredicate, 60, // Predicate_imm32lh16c
/*11218*/       OPC_MoveParent,
/*11219*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11221*/       OPC_CheckType, MVT::i32,
/*11223*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11226*/       OPC_EmitMergeInputChains1_0,
/*11227*/       OPC_EmitConvertToTarget, 2,
/*11229*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*11232*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILH32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<P:Predicate_imm32lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILH32i:i32:i32 bdaddr20only:i64:$ptr, (LH16:i32 (imm:i32):$src2))
/*11243*/     /*Scope*/ 27, /*->11271*/
/*11244*/       OPC_CheckPredicate, 61, // Predicate_imm64ll16c
/*11246*/       OPC_MoveParent,
/*11247*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11249*/       OPC_CheckType, MVT::i64,
/*11251*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11254*/       OPC_EmitMergeInputChains1_0,
/*11255*/       OPC_EmitConvertToTarget, 2,
/*11257*/       OPC_EmitNodeXForm, 3, 5, // LL16
/*11260*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILLi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64ll16c>><<X:LL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILLi:i64:i32 bdaddr20only:i64:$ptr, (LL16:i64 (imm:i64):$src2))
/*11271*/     /*Scope*/ 27, /*->11299*/
/*11272*/       OPC_CheckPredicate, 62, // Predicate_imm64lh16c
/*11274*/       OPC_MoveParent,
/*11275*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11277*/       OPC_CheckType, MVT::i64,
/*11279*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11282*/       OPC_EmitMergeInputChains1_0,
/*11283*/       OPC_EmitConvertToTarget, 2,
/*11285*/       OPC_EmitNodeXForm, 4, 5, // LH16
/*11288*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILHi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lh16c>><<X:LH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILHi:i64:i32 bdaddr20only:i64:$ptr, (LH16:i64 (imm:i64):$src2))
/*11299*/     /*Scope*/ 27, /*->11327*/
/*11300*/       OPC_CheckPredicate, 63, // Predicate_imm64hl16c
/*11302*/       OPC_MoveParent,
/*11303*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11305*/       OPC_CheckType, MVT::i64,
/*11307*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11310*/       OPC_EmitMergeInputChains1_0,
/*11311*/       OPC_EmitConvertToTarget, 2,
/*11313*/       OPC_EmitNodeXForm, 5, 5, // HL16
/*11316*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHLi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hl16c>><<X:HL16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHLi:i64:i32 bdaddr20only:i64:$ptr, (HL16:i64 (imm:i64):$src2))
/*11327*/     /*Scope*/ 27, /*->11355*/
/*11328*/       OPC_CheckPredicate, 64, // Predicate_imm64hh16c
/*11330*/       OPC_MoveParent,
/*11331*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11333*/       OPC_CheckType, MVT::i64,
/*11335*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11338*/       OPC_EmitMergeInputChains1_0,
/*11339*/       OPC_EmitConvertToTarget, 2,
/*11341*/       OPC_EmitNodeXForm, 6, 5, // HH16
/*11344*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHHi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hh16c>><<X:HH16>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHHi:i64:i32 bdaddr20only:i64:$ptr, (HH16:i64 (imm:i64):$src2))
/*11355*/     /*Scope*/ 27, /*->11383*/
/*11356*/       OPC_CheckPredicate, 65, // Predicate_imm64lf32c
/*11358*/       OPC_MoveParent,
/*11359*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11361*/       OPC_CheckType, MVT::i64,
/*11363*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11366*/       OPC_EmitMergeInputChains1_0,
/*11367*/       OPC_EmitConvertToTarget, 2,
/*11369*/       OPC_EmitNodeXForm, 7, 5, // LF32
/*11372*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILFi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64lf32c>><<X:LF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NILFi:i64:i32 bdaddr20only:i64:$ptr, (LF32:i64 (imm:i64):$src2))
/*11383*/     /*Scope*/ 27, /*->11411*/
/*11384*/       OPC_CheckPredicate, 66, // Predicate_imm64hf32c
/*11386*/       OPC_MoveParent,
/*11387*/       OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11389*/       OPC_CheckType, MVT::i64,
/*11391*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11394*/       OPC_EmitMergeInputChains1_0,
/*11395*/       OPC_EmitConvertToTarget, 2,
/*11397*/       OPC_EmitNodeXForm, 8, 5, // HF32
/*11400*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NIHFi), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, (imm:i64)<<P:Predicate_imm64hf32c>><<X:HF32>>:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 17
                // Dst: (ATOMIC_LOAD_NIHFi:i64:i32 bdaddr20only:i64:$ptr, (HF32:i64 (imm:i64):$src2))
/*11411*/     /*Scope*/ 25, /*->11437*/
/*11412*/       OPC_MoveParent,
/*11413*/       OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11415*/       OPC_CheckType, MVT::i32,
/*11417*/       OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11420*/       OPC_EmitMergeInputChains1_0,
/*11421*/       OPC_EmitConvertToTarget, 2,
/*11423*/       OPC_EmitNodeXForm, 9, 5, // UIMM32
/*11426*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NILF32i), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, (imm:i32)<<X:UIMM32>>:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 16
                // Dst: (ATOMIC_LOAD_NILF32i:i32:i32 bdaddr20only:i64:$ptr, (UIMM32:i32 (imm:i32):$src2))
/*11437*/     0, /*End of Scope*/
/*11438*/   /*Scope*/ 19, /*->11458*/
/*11439*/     OPC_CheckPredicate, 88, // Predicate_atomic_load_nand_32
/*11441*/     OPC_CheckType, MVT::i32,
/*11443*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11446*/     OPC_EmitMergeInputChains1_0,
/*11447*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NRi:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
/*11458*/   /*Scope*/ 19, /*->11478*/
/*11459*/     OPC_CheckPredicate, 89, // Predicate_atomic_load_nand_64
/*11461*/     OPC_CheckType, MVT::i64,
/*11463*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11466*/     OPC_EmitMergeInputChains1_0,
/*11467*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_NGRi), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NGRi:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
/*11478*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_SWAPW),// ->11520
/*11482*/   OPC_RecordMemRef,
/*11483*/   OPC_RecordNode,   // #0 = 'z_atomic_swapw' chained node
/*11484*/   OPC_RecordChild1, // #1 = $ptr
/*11485*/   OPC_CheckChild1Type, MVT::i64,
/*11487*/   OPC_RecordChild2, // #2 = $src2
/*11488*/   OPC_RecordChild3, // #3 = $bitshift
/*11489*/   OPC_RecordChild4, // #4 = $negbitshift
/*11490*/   OPC_RecordChild5, // #5 = $bitsize
/*11491*/   OPC_MoveChild, 5,
/*11493*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11496*/   OPC_MoveParent,
/*11497*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11500*/   OPC_EmitMergeInputChains1_0,
/*11501*/   OPC_EmitConvertToTarget, 5,
/*11503*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11506*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_swapw:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_SWAPW:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_SUB),// ->11561
/*11523*/   OPC_RecordMemRef,
/*11524*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_sub' chained node
/*11525*/   OPC_RecordChild1, // #1 = $ptr
/*11526*/   OPC_CheckChild1Type, MVT::i64,
/*11528*/   OPC_RecordChild2, // #2 = $src2
/*11529*/   OPC_RecordChild3, // #3 = $bitshift
/*11530*/   OPC_RecordChild4, // #4 = $negbitshift
/*11531*/   OPC_RecordChild5, // #5 = $bitsize
/*11532*/   OPC_MoveChild, 5,
/*11534*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11537*/   OPC_MoveParent,
/*11538*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11541*/   OPC_EmitMergeInputChains1_0,
/*11542*/   OPC_EmitConvertToTarget, 5,
/*11544*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11547*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_SR), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MIN),// ->11602
/*11564*/   OPC_RecordMemRef,
/*11565*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_min' chained node
/*11566*/   OPC_RecordChild1, // #1 = $ptr
/*11567*/   OPC_CheckChild1Type, MVT::i64,
/*11569*/   OPC_RecordChild2, // #2 = $src2
/*11570*/   OPC_RecordChild3, // #3 = $bitshift
/*11571*/   OPC_RecordChild4, // #4 = $negbitshift
/*11572*/   OPC_RecordChild5, // #5 = $bitsize
/*11573*/   OPC_MoveChild, 5,
/*11575*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11578*/   OPC_MoveParent,
/*11579*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11582*/   OPC_EmitMergeInputChains1_0,
/*11583*/   OPC_EmitConvertToTarget, 5,
/*11585*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11588*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MIN), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_MAX),// ->11643
/*11605*/   OPC_RecordMemRef,
/*11606*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_max' chained node
/*11607*/   OPC_RecordChild1, // #1 = $ptr
/*11608*/   OPC_CheckChild1Type, MVT::i64,
/*11610*/   OPC_RecordChild2, // #2 = $src2
/*11611*/   OPC_RecordChild3, // #3 = $bitshift
/*11612*/   OPC_RecordChild4, // #4 = $negbitshift
/*11613*/   OPC_RecordChild5, // #5 = $bitsize
/*11614*/   OPC_MoveChild, 5,
/*11616*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11619*/   OPC_MoveParent,
/*11620*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11623*/   OPC_EmitMergeInputChains1_0,
/*11624*/   OPC_EmitConvertToTarget, 5,
/*11626*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11629*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_MAX), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_MAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMIN),// ->11684
/*11646*/   OPC_RecordMemRef,
/*11647*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umin' chained node
/*11648*/   OPC_RecordChild1, // #1 = $ptr
/*11649*/   OPC_CheckChild1Type, MVT::i64,
/*11651*/   OPC_RecordChild2, // #2 = $src2
/*11652*/   OPC_RecordChild3, // #3 = $bitshift
/*11653*/   OPC_RecordChild4, // #4 = $negbitshift
/*11654*/   OPC_RecordChild5, // #5 = $bitsize
/*11655*/   OPC_MoveChild, 5,
/*11657*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11660*/   OPC_MoveParent,
/*11661*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11664*/   OPC_EmitMergeInputChains1_0,
/*11665*/   OPC_EmitConvertToTarget, 5,
/*11667*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11670*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMIN), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMIN:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 38,  TARGET_VAL(SystemZISD::ATOMIC_LOADW_UMAX),// ->11725
/*11687*/   OPC_RecordMemRef,
/*11688*/   OPC_RecordNode,   // #0 = 'z_atomic_loadw_umax' chained node
/*11689*/   OPC_RecordChild1, // #1 = $ptr
/*11690*/   OPC_CheckChild1Type, MVT::i64,
/*11692*/   OPC_RecordChild2, // #2 = $src2
/*11693*/   OPC_RecordChild3, // #3 = $bitshift
/*11694*/   OPC_RecordChild4, // #4 = $negbitshift
/*11695*/   OPC_RecordChild5, // #5 = $bitsize
/*11696*/   OPC_MoveChild, 5,
/*11698*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11701*/   OPC_MoveParent,
/*11702*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #6 #7
/*11705*/   OPC_EmitMergeInputChains1_0,
/*11706*/   OPC_EmitConvertToTarget, 5,
/*11708*/   OPC_EmitNodeXForm, 9, 8, // UIMM32
/*11711*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOADW_UMAX), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 6/*#Ops*/, 6, 7, 2, 3, 4, 9, 
            // Src: (z_atomic_loadw_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_LOADW_UMAX:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 40,  TARGET_VAL(SystemZISD::ATOMIC_CMP_SWAPW),// ->11768
/*11728*/   OPC_RecordMemRef,
/*11729*/   OPC_RecordNode,   // #0 = 'z_atomic_cmp_swapw' chained node
/*11730*/   OPC_RecordChild1, // #1 = $addr
/*11731*/   OPC_CheckChild1Type, MVT::i64,
/*11733*/   OPC_RecordChild2, // #2 = $cmp
/*11734*/   OPC_RecordChild3, // #3 = $swap
/*11735*/   OPC_RecordChild4, // #4 = $bitshift
/*11736*/   OPC_RecordChild5, // #5 = $negbitshift
/*11737*/   OPC_RecordChild6, // #6 = $bitsize
/*11738*/   OPC_MoveChild, 6,
/*11740*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11743*/   OPC_MoveParent,
/*11744*/   OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$addr #7 #8
/*11747*/   OPC_EmitMergeInputChains1_0,
/*11748*/   OPC_EmitConvertToTarget, 6,
/*11750*/   OPC_EmitNodeXForm, 9, 9, // UIMM32
/*11753*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_CMP_SWAPW), 0|OPFL_Chain|OPFL_MemRefs,
                2/*#VTs*/, MVT::i32, MVT::i32, 7/*#Ops*/, 7, 8, 2, 3, 4, 5, 10, 
            // Src: (z_atomic_cmp_swapw:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (imm:i32)<<X:UIMM32>>:$bitsize) - Complexity = 15
            // Dst: (ATOMIC_CMP_SWAPW:i32:i32 bdaddr20only:i64:$addr, GR32:i32:$cmp, GR32:i32:$swap, ADDR32:i32:$bitshift, ADDR32:i32:$negbitshift, (UIMM32:i32 (imm:i32):$bitsize))
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->11840
/*11771*/   OPC_RecordMemRef,
/*11772*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*11773*/   OPC_RecordChild1, // #1 = $BD2
/*11774*/   OPC_CheckChild1Type, MVT::i64,
/*11776*/   OPC_RecordChild2, // #2 = $R1src
/*11777*/   OPC_RecordChild3, // #3 = $R3
/*11778*/   OPC_SwitchType /*2 cases */, 38,  MVT::i32,// ->11819
/*11781*/     OPC_CheckPredicate, 90, // Predicate_atomic_cmp_swap_32
/*11783*/     OPC_Scope, 16, /*->11801*/ // 2 children in Scope
/*11785*/       OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD2 #4 #5
/*11788*/       OPC_EmitMergeInputChains1_0,
/*11789*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CS), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr12pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CS:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr12pair:i64:$BD2)
/*11801*/     /*Scope*/ 16, /*->11818*/
/*11802*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD2 #4 #5
/*11805*/       OPC_EmitMergeInputChains1_0,
/*11806*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSY), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (atomic_cmp_swap:i32 bdaddr20pair:i64:$BD2, GR32:i32:$R1src, GR32:i32:$R3)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (CSY:i32:i32 GR32:i32:$R1src, GR32:i32:$R3, bdaddr20pair:i64:$BD2)
/*11818*/     0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->11839
/*11821*/     OPC_CheckPredicate, 91, // Predicate_atomic_cmp_swap_64
/*11823*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$BD2 #4 #5
/*11826*/     OPC_EmitMergeInputChains1_0,
/*11827*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::CSG), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (atomic_cmp_swap:i64 bdaddr20only:i64:$BD2, GR64:i64:$R1src, GR64:i64:$R3)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (CSG:i64:i32 GR64:i64:$R1src, GR64:i64:$R3, bdaddr20only:i64:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->11889
/*11843*/   OPC_RecordMemRef,
/*11844*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*11845*/   OPC_RecordChild1, // #1 = $ptr
/*11846*/   OPC_CheckChild1Type, MVT::i64,
/*11848*/   OPC_RecordChild2, // #2 = $src2
/*11849*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11869
/*11852*/     OPC_CheckPredicate, 92, // Predicate_atomic_swap_32
/*11854*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11857*/     OPC_EmitMergeInputChains1_0,
/*11858*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_swap_32>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->11888
/*11871*/     OPC_CheckPredicate, 93, // Predicate_atomic_swap_64
/*11873*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11876*/     OPC_EmitMergeInputChains1_0,
/*11877*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_SWAP_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->11938
/*11892*/   OPC_RecordMemRef,
/*11893*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*11894*/   OPC_RecordChild1, // #1 = $ptr
/*11895*/   OPC_CheckChild1Type, MVT::i64,
/*11897*/   OPC_RecordChild2, // #2 = $src2
/*11898*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11918
/*11901*/     OPC_CheckPredicate, 94, // Predicate_atomic_load_sub_32
/*11903*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11906*/     OPC_EmitMergeInputChains1_0,
/*11907*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SR:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->11937
/*11920*/     OPC_CheckPredicate, 95, // Predicate_atomic_load_sub_64
/*11922*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11925*/     OPC_EmitMergeInputChains1_0,
/*11926*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_SGR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SGR:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->11987
/*11941*/   OPC_RecordMemRef,
/*11942*/   OPC_RecordNode,   // #0 = 'atomic_load_min' chained node
/*11943*/   OPC_RecordChild1, // #1 = $ptr
/*11944*/   OPC_CheckChild1Type, MVT::i64,
/*11946*/   OPC_RecordChild2, // #2 = $src2
/*11947*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11967
/*11950*/     OPC_CheckPredicate, 96, // Predicate_atomic_load_min_32
/*11952*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11955*/     OPC_EmitMergeInputChains1_0,
/*11956*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_min_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->11986
/*11969*/     OPC_CheckPredicate, 97, // Predicate_atomic_load_min_64
/*11971*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*11974*/     OPC_EmitMergeInputChains1_0,
/*11975*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_min:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_min_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->12036
/*11990*/   OPC_RecordMemRef,
/*11991*/   OPC_RecordNode,   // #0 = 'atomic_load_max' chained node
/*11992*/   OPC_RecordChild1, // #1 = $ptr
/*11993*/   OPC_CheckChild1Type, MVT::i64,
/*11995*/   OPC_RecordChild2, // #2 = $src2
/*11996*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->12016
/*11999*/     OPC_CheckPredicate, 98, // Predicate_atomic_load_max_32
/*12001*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12004*/     OPC_EmitMergeInputChains1_0,
/*12005*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_max_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->12035
/*12018*/     OPC_CheckPredicate, 99, // Predicate_atomic_load_max_64
/*12020*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12023*/     OPC_EmitMergeInputChains1_0,
/*12024*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_MAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_max:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_max_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_MAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->12085
/*12039*/   OPC_RecordMemRef,
/*12040*/   OPC_RecordNode,   // #0 = 'atomic_load_umin' chained node
/*12041*/   OPC_RecordChild1, // #1 = $ptr
/*12042*/   OPC_CheckChild1Type, MVT::i64,
/*12044*/   OPC_RecordChild2, // #2 = $src2
/*12045*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->12065
/*12048*/     OPC_CheckPredicate, 100, // Predicate_atomic_load_umin_32
/*12050*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12053*/     OPC_EmitMergeInputChains1_0,
/*12054*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umin_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->12084
/*12067*/     OPC_CheckPredicate, 101, // Predicate_atomic_load_umin_64
/*12069*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12072*/     OPC_EmitMergeInputChains1_0,
/*12073*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMIN_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umin:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umin_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMIN_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->12134
/*12088*/   OPC_RecordMemRef,
/*12089*/   OPC_RecordNode,   // #0 = 'atomic_load_umax' chained node
/*12090*/   OPC_RecordChild1, // #1 = $ptr
/*12091*/   OPC_CheckChild1Type, MVT::i64,
/*12093*/   OPC_RecordChild2, // #2 = $src2
/*12094*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->12114
/*12097*/     OPC_CheckPredicate, 102, // Predicate_atomic_load_umax_32
/*12099*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12102*/     OPC_EmitMergeInputChains1_0,
/*12103*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_32), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)<<P:Predicate_atomic_load_umax_32>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_32:i32:i32 bdaddr20only:i64:$ptr, GR32:i32:$src2)
            /*SwitchType*/ 17,  MVT::i64,// ->12133
/*12116*/     OPC_CheckPredicate, 103, // Predicate_atomic_load_umax_64
/*12118*/     OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectBDAddr20Only:$ptr #3 #4
/*12121*/     OPC_EmitMergeInputChains1_0,
/*12122*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ATOMIC_LOAD_UMAX_64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_umax:i64 bdaddr20only:i64:$ptr, GR64:i64:$src2)<<P:Predicate_atomic_load_umax_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_UMAX_64:i64:i32 bdaddr20only:i64:$ptr, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FrameIndex),// ->12184
/*12137*/   OPC_RecordNode,   // #0 = $src
/*12138*/   OPC_CheckType, MVT::i64,
/*12140*/   OPC_Scope, 13, /*->12155*/ // 3 children in Scope
/*12142*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*12145*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*12155*/   /*Scope*/ 13, /*->12169*/
/*12156*/     OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*12159*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*12169*/   /*Scope*/ 13, /*->12183*/
/*12170*/     OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*12173*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*12183*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(SystemZISD::ADJDYNALLOC),// ->12234
/*12187*/   OPC_RecordNode,   // #0 = $src
/*12188*/   OPC_CheckType, MVT::i64,
/*12190*/   OPC_Scope, 13, /*->12205*/ // 3 children in Scope
/*12192*/     OPC_CheckComplexPat, /*CP*/11, /*#*/0, // selectDynAlloc12Only:$src #1 #2 #3
/*12195*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJDYNALLOC), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: dynalloc12only:i64:$src - Complexity = 12
              // Dst: (ADJDYNALLOC:i64 dynalloc12only:i64:$src)
/*12205*/   /*Scope*/ 13, /*->12219*/
/*12206*/     OPC_CheckComplexPat, /*CP*/12, /*#*/0, // selectLAAddr12Pair:$XBD2 #1 #2 #3
/*12209*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr12pair:i64:$XBD2 - Complexity = 12
              // Dst: (LA:i64 laaddr12pair:i64:$XBD2)
/*12219*/   /*Scope*/ 13, /*->12233*/
/*12220*/     OPC_CheckComplexPat, /*CP*/13, /*#*/0, // selectLAAddr20Pair:$XBD2 #1 #2 #3
/*12223*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LAY), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr20pair:i64:$XBD2 - Complexity = 12
              // Dst: (LAY:i64 laaddr20pair:i64:$XBD2)
/*12233*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SHL),// ->12273
/*12237*/   OPC_RecordChild0, // #0 = $R1src
/*12238*/   OPC_RecordChild1, // #1 = $BD2
/*12239*/   OPC_CheckChild1Type, MVT::i32,
/*12241*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12257
/*12244*/     OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*12247*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SLL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12272
/*12259*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12262*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRL),// ->12312
/*12276*/   OPC_RecordChild0, // #0 = $R1src
/*12277*/   OPC_RecordChild1, // #1 = $BD2
/*12278*/   OPC_CheckChild1Type, MVT::i32,
/*12280*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12296
/*12283*/     OPC_CheckComplexPat, /*CP*/9, /*#*/1, // selectBDAddr12Only:$BD2 #2 #3
/*12286*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i32 GR32:i32:$R1src, shift12only:i32:$BD2) - Complexity = 12
              // Dst: (SRL:i32 GR32:i32:$R1src, shift12only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12311
/*12298*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12301*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (SRLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ROTL),// ->12351
/*12315*/   OPC_RecordChild0, // #0 = $R3
/*12316*/   OPC_RecordChild1, // #1 = $BD2
/*12317*/   OPC_CheckChild1Type, MVT::i32,
/*12319*/   OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12335
/*12322*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12325*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLL), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i32 GR32:i32:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLL:i32 GR32:i32:$R3, shift20only:i32:$BD2)
            /*SwitchType*/ 13,  MVT::i64,// ->12350
/*12337*/     OPC_CheckComplexPat, /*CP*/10, /*#*/1, // selectBDAddr20Only:$BD2 #2 #3
/*12340*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::RLLG), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i64 GR64:i64:$R3, shift20only:i32:$BD2) - Complexity = 12
              // Dst: (RLLG:i64 GR64:i64:$R3, shift20only:i32:$BD2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 19,  TARGET_VAL(SystemZISD::EXTRACT_ACCESS),// ->12373
/*12354*/   OPC_RecordChild0, // #0 = $R2
/*12355*/   OPC_MoveChild, 0,
/*12357*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12360*/   OPC_CheckPredicate, 104, // Predicate_access_reg
/*12362*/   OPC_MoveParent,
/*12363*/   OPC_EmitConvertToTarget, 0,
/*12365*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::EAR), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (z_extract_access:i32 (imm:i8)<<P:Predicate_access_reg>>:$R2) - Complexity = 7
            // Dst: (EAR:i32 (imm:i8):$R2)
          /*SwitchOpcode*/ 14,  TARGET_VAL(SystemZISD::PCREL_WRAPPER),// ->12390
/*12376*/   OPC_RecordNode,   // #0 = $I2
/*12377*/   OPC_CheckType, MVT::i64,
/*12379*/   OPC_CheckComplexPat, /*CP*/5, /*#*/0, // selectPCRelAddress:$I2 #1
/*12382*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LARL), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
            // Src: pcrel32:i64:$I2 - Complexity = 6
            // Dst: (LARL:i64 pcrel32:i64:$I2)
          /*SwitchOpcode*/ 98|128,1/*226*/,  TARGET_VAL(ISD::Constant),// ->12620
/*12394*/   OPC_RecordNode,   // #0 = $I2
/*12395*/   OPC_SwitchType /*2 cases */, 88,  MVT::i32,// ->12486
/*12398*/     OPC_Scope, 15, /*->12415*/ // 4 children in Scope
/*12400*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*12402*/       OPC_EmitConvertToTarget, 0,
/*12404*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12407*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LHI:i32 (SIMM16:i32 (imm:i32):$I2))
/*12415*/     /*Scope*/ 27, /*->12443*/
/*12416*/       OPC_CheckPredicate, 42, // Predicate_imm32ll16
/*12418*/       OPC_EmitConvertToTarget, 0,
/*12420*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12423*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12431*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12434*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32ll16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILL:i64 (LL16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12443*/     /*Scope*/ 27, /*->12471*/
/*12444*/       OPC_CheckPredicate, 43, // Predicate_imm32lh16
/*12446*/       OPC_EmitConvertToTarget, 0,
/*12448*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12451*/       OPC_EmitNode, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3
/*12459*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12462*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (imm:i32)<<P:Predicate_imm32lh16>><<X:LH16>>:$src - Complexity = 4
                // Dst: (EXTRACT_SUBREG:i32 (LLILH:i64 (LH16:i64 (imm:i32):$src)), subreg_32bit:i32)
/*12471*/     /*Scope*/ 13, /*->12485*/
/*12472*/       OPC_EmitConvertToTarget, 0,
/*12474*/       OPC_EmitNodeXForm, 9, 1, // UIMM32
/*12477*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::IILF32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<X:UIMM32>>:$I2 - Complexity = 3
                // Dst: (IILF32:i32 (UIMM32:i32 (imm:i32):$I2))
/*12485*/     0, /*End of Scope*/
            /*SwitchType*/ 2|128,1/*130*/,  MVT::i64,// ->12619
/*12489*/     OPC_Scope, 15, /*->12506*/ // 8 children in Scope
/*12491*/       OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*12493*/       OPC_EmitConvertToTarget, 0,
/*12495*/       OPC_EmitNodeXForm, 2, 1, // SIMM16
/*12498*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2 - Complexity = 4
                // Dst: (LGHI:i64 (SIMM16:i64 (imm:i64):$I2))
/*12506*/     /*Scope*/ 15, /*->12522*/
/*12507*/       OPC_CheckPredicate, 44, // Predicate_imm64ll16
/*12509*/       OPC_EmitConvertToTarget, 0,
/*12511*/       OPC_EmitNodeXForm, 3, 1, // LL16
/*12514*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64ll16>><<X:LL16>>:$I2 - Complexity = 4
                // Dst: (LLILL:i64 (LL16:i64 (imm:i64):$I2))
/*12522*/     /*Scope*/ 15, /*->12538*/
/*12523*/       OPC_CheckPredicate, 45, // Predicate_imm64lh16
/*12525*/       OPC_EmitConvertToTarget, 0,
/*12527*/       OPC_EmitNodeXForm, 4, 1, // LH16
/*12530*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lh16>><<X:LH16>>:$I2 - Complexity = 4
                // Dst: (LLILH:i64 (LH16:i64 (imm:i64):$I2))
/*12538*/     /*Scope*/ 15, /*->12554*/
/*12539*/       OPC_CheckPredicate, 46, // Predicate_imm64hl16
/*12541*/       OPC_EmitConvertToTarget, 0,
/*12543*/       OPC_EmitNodeXForm, 5, 1, // HL16
/*12546*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHL), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hl16>><<X:HL16>>:$I2 - Complexity = 4
                // Dst: (LLIHL:i64 (HL16:i64 (imm:i64):$I2))
/*12554*/     /*Scope*/ 15, /*->12570*/
/*12555*/       OPC_CheckPredicate, 47, // Predicate_imm64hh16
/*12557*/       OPC_EmitConvertToTarget, 0,
/*12559*/       OPC_EmitNodeXForm, 6, 1, // HH16
/*12562*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHH), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hh16>><<X:HH16>>:$I2 - Complexity = 4
                // Dst: (LLIHH:i64 (HH16:i64 (imm:i64):$I2))
/*12570*/     /*Scope*/ 15, /*->12586*/
/*12571*/       OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*12573*/       OPC_EmitConvertToTarget, 0,
/*12575*/       OPC_EmitNodeXForm, 10, 1, // SIMM32
/*12578*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFI), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2 - Complexity = 4
                // Dst: (LGFI:i64 (SIMM32:i64 (imm:i64):$I2))
/*12586*/     /*Scope*/ 15, /*->12602*/
/*12587*/       OPC_CheckPredicate, 48, // Predicate_imm64lf32
/*12589*/       OPC_EmitConvertToTarget, 0,
/*12591*/       OPC_EmitNodeXForm, 7, 1, // LF32
/*12594*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLILF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64lf32>><<X:LF32>>:$I2 - Complexity = 4
                // Dst: (LLILF:i64 (LF32:i64 (imm:i64):$I2))
/*12602*/     /*Scope*/ 15, /*->12618*/
/*12603*/       OPC_CheckPredicate, 49, // Predicate_imm64hf32
/*12605*/       OPC_EmitConvertToTarget, 0,
/*12607*/       OPC_EmitNodeXForm, 8, 1, // HF32
/*12610*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLIHF), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm64hf32>><<X:HF32>>:$I2 - Complexity = 4
                // Dst: (LLIHF:i64 (HF32:i64 (imm:i64):$I2))
/*12618*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->12704
/*12623*/   OPC_RecordChild0, // #0 = $R2
/*12624*/   OPC_MoveChild, 1,
/*12626*/   OPC_Scope, 25, /*->12653*/ // 3 children in Scope
/*12628*/     OPC_CheckValueType, MVT::i8,
/*12630*/     OPC_MoveParent,
/*12631*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12642
/*12634*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LBR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i8:Other) - Complexity = 3
                // Dst: (LBR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->12652
/*12644*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGBR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i8:Other) - Complexity = 3
                // Dst: (LGBR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*12653*/   /*Scope*/ 25, /*->12679*/
/*12654*/     OPC_CheckValueType, MVT::i16,
/*12656*/     OPC_MoveParent,
/*12657*/     OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->12668
/*12660*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LHR), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$R2, i16:Other) - Complexity = 3
                // Dst: (LHR:i32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::i64,// ->12678
/*12670*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGHR), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$R2, i16:Other) - Complexity = 3
                // Dst: (LGHR:i64 GR64:i64:$R2)
              0, // EndSwitchType
/*12679*/   /*Scope*/ 23, /*->12703*/
/*12680*/     OPC_CheckValueType, MVT::i32,
/*12682*/     OPC_MoveParent,
/*12683*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12686*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12695*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (LGFR:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*12703*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::SIGN_EXTEND),// ->12716
/*12707*/   OPC_RecordChild0, // #0 = $R2
/*12708*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::ZERO_EXTEND),// ->12728
/*12719*/   OPC_RecordChild0, // #0 = $R2
/*12720*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::LLGFR), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (zext:i64 GR32:i32:$R2) - Complexity = 3
            // Dst: (LLGFR:i64 GR32:i32:$R2)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TRUNCATE),// ->12744
/*12731*/   OPC_RecordChild0, // #0 = $src
/*12732*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12735*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 8,  TARGET_VAL(SystemZISD::IPM),// ->12755
/*12747*/   OPC_CaptureGlueInput,
/*12748*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::IPM), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (z_ipm:i32) - Complexity = 3
            // Dst: (IPM:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->12785
/*12758*/   OPC_RecordChild0, // #0 = $R2
/*12759*/   OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->12772
/*12762*/     OPC_CheckChild0Type, MVT::f64,
/*12764*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LGDR), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LGDR:i64 FP64:f64:$R2)
            /*SwitchType*/ 10,  MVT::f64,// ->12784
/*12774*/     OPC_CheckChild0Type, MVT::i64,
/*12776*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDGR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GR64:i64:$R2) - Complexity = 3
              // Dst: (LDGR:f64 GR64:i64:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 108,  TARGET_VAL(ISD::FP_TO_SINT),// ->12896
/*12788*/   OPC_RecordChild0, // #0 = $src
/*12789*/   OPC_Scope, 34, /*->12825*/ // 3 children in Scope
/*12791*/     OPC_CheckChild0Type, MVT::f32,
/*12793*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12809
/*12796*/       OPC_EmitInteger, MVT::i8, 5, 
/*12799*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFEBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                // Dst: (CFEBR:i32:i32 5:i8, FP32:f32:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->12824
/*12811*/       OPC_EmitInteger, MVT::i8, 5, 
/*12814*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGEBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                // Dst: (CGEBR:i64:i32 5:i8, FP32:f32:$src)
              0, // EndSwitchType
/*12825*/   /*Scope*/ 34, /*->12860*/
/*12826*/     OPC_CheckChild0Type, MVT::f64,
/*12828*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12844
/*12831*/       OPC_EmitInteger, MVT::i8, 5, 
/*12834*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFDBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                // Dst: (CFDBR:i32:i32 5:i8, FP64:f64:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->12859
/*12846*/       OPC_EmitInteger, MVT::i8, 5, 
/*12849*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGDBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                // Dst: (CGDBR:i64:i32 5:i8, FP64:f64:$src)
              0, // EndSwitchType
/*12860*/   /*Scope*/ 34, /*->12895*/
/*12861*/     OPC_CheckChild0Type, MVT::f128,
/*12863*/     OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12879
/*12866*/       OPC_EmitInteger, MVT::i8, 5, 
/*12869*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFXBR), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i32 FP128:f128:$src) - Complexity = 3
                // Dst: (CFXBR:i32:i32 5:i8, FP128:f128:$src)
              /*SwitchType*/ 13,  MVT::i64,// ->12894
/*12881*/       OPC_EmitInteger, MVT::i8, 5, 
/*12884*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGXBR), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (fp_to_sint:i64 FP128:f128:$src) - Complexity = 3
                // Dst: (CGXBR:i64:i32 5:i8, FP128:f128:$src)
              0, // EndSwitchType
/*12895*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::CTLZ),// ->12923
/*12899*/   OPC_RecordChild0, // #0 = $src
/*12900*/   OPC_CheckType, MVT::i64,
/*12902*/   OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR), 0,
                2/*#VTs*/, MVT::Untyped, MVT::i32, 1/*#Ops*/, 0,  // Results = #1 #2
/*12911*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*12914*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
            // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i64 (FLOGR:Untyped:i32 GR64:i64:$src), subreg_high:i32)
          /*SwitchOpcode*/ 21,  TARGET_VAL(ISD::ANY_EXTEND),// ->12947
/*12926*/   OPC_RecordChild0, // #0 = $src
/*12927*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*12934*/   OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*12937*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::FMA),// ->13125
/*12951*/   OPC_RecordChild0, // #0 = $R3
/*12952*/   OPC_Scope, 104, /*->13058*/ // 2 children in Scope
/*12954*/     OPC_MoveChild, 1,
/*12956*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*12959*/     OPC_RecordMemRef,
/*12960*/     OPC_RecordNode, // #1 = 'ld' chained node
/*12961*/     OPC_CheckFoldableChainNode,
/*12962*/     OPC_RecordChild1, // #2 = $XBD2
/*12963*/     OPC_CheckChild1Type, MVT::i64,
/*12965*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12967*/     OPC_CheckPredicate, 13, // Predicate_load
/*12969*/     OPC_MoveParent,
/*12970*/     OPC_Scope, 45, /*->13017*/ // 2 children in Scope
/*12972*/       OPC_MoveChild, 2,
/*12974*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*12977*/       OPC_RecordChild0, // #3 = $R1src
/*12978*/       OPC_MoveParent,
/*12979*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->12998
/*12982*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*12985*/         OPC_EmitMergeInputChains1_1,
/*12986*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f32 FP32:f32:$R1src)) - Complexity = 22
                  // Dst: (MSEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->13016
/*13000*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*13003*/         OPC_EmitMergeInputChains1_1,
/*13004*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (fneg:f64 FP64:f64:$R1src)) - Complexity = 22
                  // Dst: (MSDB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*13017*/     /*Scope*/ 39, /*->13057*/
/*13018*/       OPC_RecordChild2, // #3 = $R1src
/*13019*/       OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->13038
/*13022*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*13025*/         OPC_EmitMergeInputChains1_1,
/*13026*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f32 FP32:f32:$R3, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MAEB:f32 FP32:f32:$R1src, FP32:f32:$R3, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 16,  MVT::f64,// ->13056
/*13040*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #4 #5 #6
/*13043*/         OPC_EmitMergeInputChains1_1,
/*13044*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 0, 4, 5, 6, 
                  // Src: (fma:f64 FP64:f64:$R3, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MADB:f64 FP64:f64:$R1src, FP64:f64:$R3, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
/*13057*/     0, /*End of Scope*/
/*13058*/   /*Scope*/ 65, /*->13124*/
/*13059*/     OPC_RecordChild1, // #1 = $R2
/*13060*/     OPC_Scope, 33, /*->13095*/ // 2 children in Scope
/*13062*/       OPC_MoveChild, 2,
/*13064*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*13067*/       OPC_RecordChild0, // #2 = $R1src
/*13068*/       OPC_MoveParent,
/*13069*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->13082
/*13072*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, (fneg:f32 FP32:f32:$R1src)) - Complexity = 6
                  // Dst: (MSEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->13094
/*13084*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MSDBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, (fneg:f64 FP64:f64:$R1src)) - Complexity = 6
                  // Dst: (MSDBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*13095*/     /*Scope*/ 27, /*->13123*/
/*13096*/       OPC_RecordChild2, // #2 = $R1src
/*13097*/       OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->13110
/*13100*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MAEBR), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f32 FP32:f32:$R3, FP32:f32:$R2, FP32:f32:$R1src) - Complexity = 3
                  // Dst: (MAEBR:f32 FP32:f32:$R1src, FP32:f32:$R3, FP32:f32:$R2)
                /*SwitchType*/ 10,  MVT::f64,// ->13122
/*13112*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MADBR), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fma:f64 FP64:f64:$R3, FP64:f64:$R2, FP64:f64:$R1src) - Complexity = 3
                  // Dst: (MADBR:f64 FP64:f64:$R1src, FP64:f64:$R3, FP64:f64:$R2)
                0, // EndSwitchType
/*13123*/     0, /*End of Scope*/
/*13124*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,3/*482*/,  TARGET_VAL(ISD::FMUL),// ->13611
/*13129*/   OPC_Scope, 111|128,1/*239*/, /*->13371*/ // 4 children in Scope
/*13132*/     OPC_MoveChild, 0,
/*13134*/     OPC_SwitchOpcode /*2 cases */, 119,  TARGET_VAL(ISD::FP_EXTEND),// ->13257
/*13138*/       OPC_RecordChild0, // #0 = $src1
/*13139*/       OPC_Scope, 56, /*->13197*/ // 2 children in Scope
/*13141*/         OPC_MoveParent,
/*13142*/         OPC_MoveChild, 1,
/*13144*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13147*/         OPC_RecordMemRef,
/*13148*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13149*/         OPC_CheckFoldableChainNode,
/*13150*/         OPC_RecordChild1, // #2 = $addr
/*13151*/         OPC_CheckChild1Type, MVT::i64,
/*13153*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13155*/         OPC_CheckPredicate, 70, // Predicate_extload
/*13157*/         OPC_CheckPredicate, 78, // Predicate_extloadf32
/*13159*/         OPC_MoveParent,
/*13160*/         OPC_CheckType, MVT::f64,
/*13162*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*13165*/         OPC_EmitMergeInputChains1_1,
/*13166*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*13173*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13176*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*13186*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*13197*/       /*Scope*/ 58, /*->13256*/
/*13198*/         OPC_CheckChild0Type, MVT::f64,
/*13200*/         OPC_MoveParent,
/*13201*/         OPC_MoveChild, 1,
/*13203*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13206*/         OPC_RecordMemRef,
/*13207*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13208*/         OPC_CheckFoldableChainNode,
/*13209*/         OPC_RecordChild1, // #2 = $addr
/*13210*/         OPC_CheckChild1Type, MVT::i64,
/*13212*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13214*/         OPC_CheckPredicate, 70, // Predicate_extload
/*13216*/         OPC_CheckPredicate, 79, // Predicate_extloadf64
/*13218*/         OPC_MoveParent,
/*13219*/         OPC_CheckType, MVT::f128,
/*13221*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$addr #3 #4 #5
/*13224*/         OPC_EmitMergeInputChains1_1,
/*13225*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*13232*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13235*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 0, 7,  // Results = #8
/*13245*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13256*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::LOAD),// ->13370
/*13260*/       OPC_RecordMemRef,
/*13261*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13262*/       OPC_CheckFoldableChainNode,
/*13263*/       OPC_RecordChild1, // #1 = $addr
/*13264*/       OPC_CheckChild1Type, MVT::i64,
/*13266*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13268*/       OPC_CheckPredicate, 70, // Predicate_extload
/*13270*/       OPC_Scope, 47, /*->13319*/ // 2 children in Scope
/*13272*/         OPC_CheckPredicate, 78, // Predicate_extloadf32
/*13274*/         OPC_MoveParent,
/*13275*/         OPC_MoveChild, 1,
/*13277*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13280*/         OPC_RecordChild0, // #2 = $src1
/*13281*/         OPC_MoveParent,
/*13282*/         OPC_CheckType, MVT::f64,
/*13284*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13287*/         OPC_EmitMergeInputChains1_0,
/*13288*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #6
/*13295*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13298*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13308*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>, (fextend:f64 FP32:f32:$src1)) - Complexity = 22
                  // Dst: (MDEB:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), bdxaddr12only:i64:$addr)
/*13319*/       /*Scope*/ 49, /*->13369*/
/*13320*/         OPC_CheckPredicate, 79, // Predicate_extloadf64
/*13322*/         OPC_MoveParent,
/*13323*/         OPC_MoveChild, 1,
/*13325*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13328*/         OPC_RecordChild0, // #2 = $src1
/*13329*/         OPC_CheckChild0Type, MVT::f64,
/*13331*/         OPC_MoveParent,
/*13332*/         OPC_CheckType, MVT::f128,
/*13334*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$addr #3 #4 #5
/*13337*/         OPC_EmitMergeInputChains1_0,
/*13338*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #6
/*13345*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13348*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 6, 2, 7,  // Results = #8
/*13358*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f128, 4/*#Ops*/, 8, 3, 4, 5, 
                  // Src: (fmul:f128 (ld:f128 bdxaddr12only:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf64>>, (fextend:f128 FP64:f64:$src1)) - Complexity = 22
                  // Dst: (MXDB:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), bdxaddr12only:i64:$addr)
/*13369*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13371*/   /*Scope*/ 53, /*->13425*/
/*13372*/     OPC_RecordChild0, // #0 = $R1src
/*13373*/     OPC_MoveChild, 1,
/*13375*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13378*/     OPC_RecordMemRef,
/*13379*/     OPC_RecordNode, // #1 = 'ld' chained node
/*13380*/     OPC_CheckFoldableChainNode,
/*13381*/     OPC_RecordChild1, // #2 = $XBD2
/*13382*/     OPC_CheckChild1Type, MVT::i64,
/*13384*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13386*/     OPC_CheckPredicate, 13, // Predicate_load
/*13388*/     OPC_MoveParent,
/*13389*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13407
/*13392*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13395*/       OPC_EmitMergeInputChains1_1,
/*13396*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->13424
/*13409*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13412*/       OPC_EmitMergeInputChains1_1,
/*13413*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*13425*/   /*Scope*/ 17|128,1/*145*/, /*->13572*/
/*13427*/     OPC_MoveChild, 0,
/*13429*/     OPC_SwitchOpcode /*2 cases */, 48,  TARGET_VAL(ISD::LOAD),// ->13481
/*13433*/       OPC_RecordMemRef,
/*13434*/       OPC_RecordNode, // #0 = 'ld' chained node
/*13435*/       OPC_CheckFoldableChainNode,
/*13436*/       OPC_RecordChild1, // #1 = $XBD2
/*13437*/       OPC_CheckChild1Type, MVT::i64,
/*13439*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13441*/       OPC_CheckPredicate, 13, // Predicate_load
/*13443*/       OPC_MoveParent,
/*13444*/       OPC_RecordChild1, // #2 = $R1src
/*13445*/       OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->13463
/*13448*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13451*/         OPC_EmitMergeInputChains1_0,
/*13452*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                  // Dst: (MEEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
                /*SwitchType*/ 15,  MVT::f64,// ->13480
/*13465*/         OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*13468*/         OPC_EmitMergeInputChains1_0,
/*13469*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fmul:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                  // Dst: (MDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::FP_EXTEND),// ->13571
/*13484*/       OPC_RecordChild0, // #0 = $src1
/*13485*/       OPC_Scope, 39, /*->13526*/ // 2 children in Scope
/*13487*/         OPC_MoveParent,
/*13488*/         OPC_MoveChild, 1,
/*13490*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13493*/         OPC_RecordChild0, // #1 = $src2
/*13494*/         OPC_MoveParent,
/*13495*/         OPC_CheckType, MVT::f64,
/*13497*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #2
/*13504*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*13507*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13517*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDEBR), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f64 (fextend:f64 FP32:f32:$src1), (fextend:f64 FP32:f32:$src2)) - Complexity = 9
                  // Dst: (MDEBR:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), FP32:f32:$src1, subreg_32bit:i32), FP32:f32:$src2)
/*13526*/       /*Scope*/ 43, /*->13570*/
/*13527*/         OPC_CheckChild0Type, MVT::f64,
/*13529*/         OPC_MoveParent,
/*13530*/         OPC_MoveChild, 1,
/*13532*/         OPC_CheckOpcode, TARGET_VAL(ISD::FP_EXTEND),
/*13535*/         OPC_RecordChild0, // #1 = $src2
/*13536*/         OPC_CheckChild0Type, MVT::f64,
/*13538*/         OPC_MoveParent,
/*13539*/         OPC_CheckType, MVT::f128,
/*13541*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #2
/*13548*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*13551*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::f128, 3/*#Ops*/, 2, 0, 3,  // Results = #4
/*13561*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXDBR), 0,
                      1/*#VTs*/, MVT::f128, 2/*#Ops*/, 4, 1, 
                  // Src: (fmul:f128 (fextend:f128 FP64:f64:$src1), (fextend:f128 FP64:f64:$src2)) - Complexity = 9
                  // Dst: (MXDBR:f128 (INSERT_SUBREG:f128 (IMPLICIT_DEF:f128), FP64:f64:$src1, subreg_high:i32), FP64:f64:$src2)
/*13570*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*13572*/   /*Scope*/ 37, /*->13610*/
/*13573*/     OPC_RecordChild0, // #0 = $R1src
/*13574*/     OPC_RecordChild1, // #1 = $R2
/*13575*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->13587
/*13578*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MEEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (MEEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->13598
/*13589*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (MDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->13609
/*13600*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::MXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (MXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*13610*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,6/*777*/,  TARGET_VAL(SystemZISD::CMP),// ->14392
/*13615*/   OPC_Scope, 13|128,1/*141*/, /*->13759*/ // 3 children in Scope
/*13618*/     OPC_RecordChild0, // #0 = $R1
/*13619*/     OPC_Scope, 57, /*->13678*/ // 2 children in Scope
/*13621*/       OPC_CheckChild0Type, MVT::i32,
/*13623*/       OPC_MoveChild, 1,
/*13625*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13628*/       OPC_RecordMemRef,
/*13629*/       OPC_RecordNode, // #1 = 'ld' chained node
/*13630*/       OPC_CheckFoldableChainNode,
/*13631*/       OPC_RecordChild1, // #2 = $I2
/*13632*/       OPC_CheckChild1Type, MVT::i64,
/*13634*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13636*/       OPC_Scope, 20, /*->13658*/ // 2 children in Scope
/*13638*/         OPC_CheckPredicate, 52, // Predicate_sextload
/*13640*/         OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13642*/         OPC_CheckPredicate, 68, // Predicate_aligned_sextloadi16
/*13644*/         OPC_MoveParent,
/*13645*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13648*/         OPC_EmitMergeInputChains1_1,
/*13649*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                  // Dst: (CHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13658*/       /*Scope*/ 18, /*->13677*/
/*13659*/         OPC_CheckPredicate, 13, // Predicate_load
/*13661*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*13663*/         OPC_MoveParent,
/*13664*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13667*/         OPC_EmitMergeInputChains1_1,
/*13668*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*13677*/       0, /*End of Scope*/
/*13678*/     /*Scope*/ 79, /*->13758*/
/*13679*/       OPC_CheckChild0Type, MVT::i64,
/*13681*/       OPC_MoveChild, 1,
/*13683*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13686*/       OPC_RecordMemRef,
/*13687*/       OPC_RecordNode, // #1 = 'ld' chained node
/*13688*/       OPC_CheckFoldableChainNode,
/*13689*/       OPC_RecordChild1, // #2 = $I2
/*13690*/       OPC_CheckChild1Type, MVT::i64,
/*13692*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13694*/       OPC_Scope, 42, /*->13738*/ // 2 children in Scope
/*13696*/         OPC_CheckPredicate, 52, // Predicate_sextload
/*13698*/         OPC_Scope, 18, /*->13718*/ // 2 children in Scope
/*13700*/           OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13702*/           OPC_CheckPredicate, 68, // Predicate_aligned_sextloadi16
/*13704*/           OPC_MoveParent,
/*13705*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13708*/           OPC_EmitMergeInputChains1_1,
/*13709*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_aligned_sextloadi16>>) - Complexity = 20
                    // Dst: (CGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13718*/         /*Scope*/ 18, /*->13737*/
/*13719*/           OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*13721*/           OPC_CheckPredicate, 69, // Predicate_aligned_sextloadi32
/*13723*/           OPC_MoveParent,
/*13724*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13727*/           OPC_EmitMergeInputChains1_1,
/*13728*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned_sextloadi32>>) - Complexity = 20
                    // Dst: (CGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13737*/         0, /*End of Scope*/
/*13738*/       /*Scope*/ 18, /*->13757*/
/*13739*/         OPC_CheckPredicate, 13, // Predicate_load
/*13741*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*13743*/         OPC_MoveParent,
/*13744*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*13747*/         OPC_EmitMergeInputChains1_1,
/*13748*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*13757*/       0, /*End of Scope*/
/*13758*/     0, /*End of Scope*/
/*13759*/   /*Scope*/ 118, /*->13878*/
/*13760*/     OPC_MoveChild, 0,
/*13762*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13765*/     OPC_RecordMemRef,
/*13766*/     OPC_RecordNode, // #0 = 'ld' chained node
/*13767*/     OPC_CheckFoldableChainNode,
/*13768*/     OPC_RecordChild1, // #1 = $BD1
/*13769*/     OPC_CheckChild1Type, MVT::i64,
/*13771*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13773*/     OPC_Scope, 35, /*->13810*/ // 2 children in Scope
/*13775*/       OPC_CheckPredicate, 52, // Predicate_sextload
/*13777*/       OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13779*/       OPC_CheckType, MVT::i32,
/*13781*/       OPC_MoveParent,
/*13782*/       OPC_RecordChild1, // #2 = $I2
/*13783*/       OPC_MoveChild, 1,
/*13785*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13788*/       OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*13790*/       OPC_MoveParent,
/*13791*/       OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13794*/       OPC_EmitMergeInputChains1_0,
/*13795*/       OPC_EmitConvertToTarget, 2,
/*13797*/       OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13800*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                // Dst: (CHHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
/*13810*/     /*Scope*/ 66, /*->13877*/
/*13811*/       OPC_CheckPredicate, 13, // Predicate_load
/*13813*/       OPC_SwitchType /*2 cases */, 29,  MVT::i32,// ->13845
/*13816*/         OPC_MoveParent,
/*13817*/         OPC_RecordChild1, // #2 = $I2
/*13818*/         OPC_MoveChild, 1,
/*13820*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13823*/         OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*13825*/         OPC_MoveParent,
/*13826*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13829*/         OPC_EmitMergeInputChains1_0,
/*13830*/         OPC_EmitConvertToTarget, 2,
/*13832*/         OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13835*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 29,  MVT::i64,// ->13876
/*13847*/         OPC_MoveParent,
/*13848*/         OPC_RecordChild1, // #2 = $I2
/*13849*/         OPC_MoveChild, 1,
/*13851*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13854*/         OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*13856*/         OPC_MoveParent,
/*13857*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*13860*/         OPC_EmitMergeInputChains1_0,
/*13861*/         OPC_EmitConvertToTarget, 2,
/*13863*/         OPC_EmitNodeXForm, 2, 5, // SIMM16
/*13866*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_cmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 20
                  // Dst: (CGHSI:i32 bdaddr12only:i64:$BD1, (SIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*13877*/     0, /*End of Scope*/
/*13878*/   /*Scope*/ 127|128,3/*511*/, /*->14391*/
/*13880*/     OPC_RecordChild0, // #0 = $R1
/*13881*/     OPC_Scope, 13|128,1/*141*/, /*->14025*/ // 11 children in Scope
/*13884*/       OPC_CheckChild0Type, MVT::i32,
/*13886*/       OPC_Scope, 93, /*->13981*/ // 2 children in Scope
/*13888*/         OPC_MoveChild, 1,
/*13890*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13893*/         OPC_RecordMemRef,
/*13894*/         OPC_RecordNode, // #1 = 'ld' chained node
/*13895*/         OPC_CheckFoldableChainNode,
/*13896*/         OPC_RecordChild1, // #2 = $XBD2
/*13897*/         OPC_CheckChild1Type, MVT::i64,
/*13899*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*13901*/         OPC_Scope, 39, /*->13942*/ // 2 children in Scope
/*13903*/           OPC_CheckPredicate, 52, // Predicate_sextload
/*13905*/           OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*13907*/           OPC_MoveParent,
/*13908*/           OPC_Scope, 15, /*->13925*/ // 2 children in Scope
/*13910*/             OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*13913*/             OPC_EmitMergeInputChains1_1,
/*13914*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CH:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*13925*/           /*Scope*/ 15, /*->13941*/
/*13926*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*13929*/             OPC_EmitMergeInputChains1_1,
/*13930*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CHY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*13941*/           0, /*End of Scope*/
/*13942*/         /*Scope*/ 37, /*->13980*/
/*13943*/           OPC_CheckPredicate, 13, // Predicate_load
/*13945*/           OPC_MoveParent,
/*13946*/           OPC_Scope, 15, /*->13963*/ // 2 children in Scope
/*13948*/             OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*13951*/             OPC_EmitMergeInputChains1_1,
/*13952*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::C), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (C:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*13963*/           /*Scope*/ 15, /*->13979*/
/*13964*/             OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*13967*/             OPC_EmitMergeInputChains1_1,
/*13968*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*13979*/           0, /*End of Scope*/
/*13980*/         0, /*End of Scope*/
/*13981*/       /*Scope*/ 42, /*->14024*/
/*13982*/         OPC_RecordChild1, // #1 = $I2
/*13983*/         OPC_MoveChild, 1,
/*13985*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13988*/         OPC_Scope, 17, /*->14007*/ // 2 children in Scope
/*13990*/           OPC_CheckPredicate, 34, // Predicate_imm32sx16
/*13992*/           OPC_MoveParent,
/*13993*/           OPC_EmitConvertToTarget, 1,
/*13995*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*13998*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CHI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<P:Predicate_imm32sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CHI:i32 GR32:i32:$R1, (SIMM16:i32 (imm:i32):$I2))
/*14007*/         /*Scope*/ 15, /*->14023*/
/*14008*/           OPC_MoveParent,
/*14009*/           OPC_EmitConvertToTarget, 1,
/*14011*/           OPC_EmitNodeXForm, 10, 2, // SIMM32
/*14014*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CFI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR32:i32:$R1, (imm:i32)<<X:SIMM32>>:$I2) - Complexity = 6
                    // Dst: (CFI:i32 GR32:i32:$R1, (SIMM32:i32 (imm:i32):$I2))
/*14023*/         0, /*End of Scope*/
/*14024*/       0, /*End of Scope*/
/*14025*/     /*Scope*/ 127, /*->14153*/
/*14026*/       OPC_CheckChild0Type, MVT::i64,
/*14028*/       OPC_Scope, 77, /*->14107*/ // 2 children in Scope
/*14030*/         OPC_MoveChild, 1,
/*14032*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14035*/         OPC_RecordMemRef,
/*14036*/         OPC_RecordNode, // #1 = 'ld' chained node
/*14037*/         OPC_CheckFoldableChainNode,
/*14038*/         OPC_RecordChild1, // #2 = $XBD2
/*14039*/         OPC_CheckChild1Type, MVT::i64,
/*14041*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14043*/         OPC_Scope, 42, /*->14087*/ // 2 children in Scope
/*14045*/           OPC_CheckPredicate, 52, // Predicate_sextload
/*14047*/           OPC_Scope, 18, /*->14067*/ // 2 children in Scope
/*14049*/             OPC_CheckPredicate, 53, // Predicate_sextloadi16
/*14051*/             OPC_MoveParent,
/*14052*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14055*/             OPC_EmitMergeInputChains1_1,
/*14056*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGH), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>) - Complexity = 19
                      // Dst: (CGH:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14067*/           /*Scope*/ 18, /*->14086*/
/*14068*/             OPC_CheckPredicate, 54, // Predicate_sextloadi32
/*14070*/             OPC_MoveParent,
/*14071*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14074*/             OPC_EmitMergeInputChains1_1,
/*14075*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                      // Dst: (CGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14086*/           0, /*End of Scope*/
/*14087*/         /*Scope*/ 18, /*->14106*/
/*14088*/           OPC_CheckPredicate, 13, // Predicate_load
/*14090*/           OPC_MoveParent,
/*14091*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14094*/           OPC_EmitMergeInputChains1_1,
/*14095*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_cmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14106*/         0, /*End of Scope*/
/*14107*/       /*Scope*/ 44, /*->14152*/
/*14108*/         OPC_RecordChild1, // #1 = $I2
/*14109*/         OPC_MoveChild, 1,
/*14111*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14114*/         OPC_Scope, 17, /*->14133*/ // 2 children in Scope
/*14116*/           OPC_CheckPredicate, 35, // Predicate_imm64sx16
/*14118*/           OPC_MoveParent,
/*14119*/           OPC_EmitConvertToTarget, 1,
/*14121*/           OPC_EmitNodeXForm, 2, 2, // SIMM16
/*14124*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGHI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx16>><<X:SIMM16>>:$I2) - Complexity = 7
                    // Dst: (CGHI:i32 GR64:i64:$R1, (SIMM16:i64 (imm:i64):$I2))
/*14133*/         /*Scope*/ 17, /*->14151*/
/*14134*/           OPC_CheckPredicate, 56, // Predicate_imm64sx32
/*14136*/           OPC_MoveParent,
/*14137*/           OPC_EmitConvertToTarget, 1,
/*14139*/           OPC_EmitNodeXForm, 10, 2, // SIMM32
/*14142*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFI), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_cmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64sx32>><<X:SIMM32>>:$I2) - Complexity = 7
                    // Dst: (CGFI:i32 GR64:i64:$R1, (SIMM32:i64 (imm:i64):$I2))
/*14151*/         0, /*End of Scope*/
/*14152*/       0, /*End of Scope*/
/*14153*/     /*Scope*/ 50, /*->14204*/
/*14154*/       OPC_CheckChild0Type, MVT::f32,
/*14156*/       OPC_MoveChild, 1,
/*14158*/       OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::LOAD),// ->14188
/*14162*/         OPC_RecordMemRef,
/*14163*/         OPC_RecordNode, // #1 = 'ld' chained node
/*14164*/         OPC_CheckFoldableChainNode,
/*14165*/         OPC_RecordChild1, // #2 = $XBD2
/*14166*/         OPC_CheckChild1Type, MVT::i64,
/*14168*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14170*/         OPC_CheckPredicate, 13, // Predicate_load
/*14172*/         OPC_MoveParent,
/*14173*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*14176*/         OPC_EmitMergeInputChains1_1,
/*14177*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_cmp FP32:f32:$R1, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CEB:i32 FP32:f32:$R1, bdxaddr12only:i64:$XBD2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ConstantFP),// ->14203
/*14191*/         OPC_CheckPredicate, 105, // Predicate_fpimm0
/*14193*/         OPC_MoveParent,
/*14194*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTEBRCompare), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (z_cmp FP32:f32:$reg, (fpimm:f32)<<P:Predicate_fpimm0>>) - Complexity = 7
                  // Dst: (LTEBRCompare:i32 FP32:f32:$reg, FP32:f32:$reg)
                0, // EndSwitchOpcode
/*14204*/     /*Scope*/ 50, /*->14255*/
/*14205*/       OPC_CheckChild0Type, MVT::f64,
/*14207*/       OPC_MoveChild, 1,
/*14209*/       OPC_SwitchOpcode /*2 cases */, 26,  TARGET_VAL(ISD::LOAD),// ->14239
/*14213*/         OPC_RecordMemRef,
/*14214*/         OPC_RecordNode, // #1 = 'ld' chained node
/*14215*/         OPC_CheckFoldableChainNode,
/*14216*/         OPC_RecordChild1, // #2 = $XBD2
/*14217*/         OPC_CheckChild1Type, MVT::i64,
/*14219*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14221*/         OPC_CheckPredicate, 13, // Predicate_load
/*14223*/         OPC_MoveParent,
/*14224*/         OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*14227*/         OPC_EmitMergeInputChains1_1,
/*14228*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDB), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (z_cmp FP64:f64:$R1, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CDB:i32 FP64:f64:$R1, bdxaddr12only:i64:$XBD2)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::ConstantFP),// ->14254
/*14242*/         OPC_CheckPredicate, 105, // Predicate_fpimm0
/*14244*/         OPC_MoveParent,
/*14245*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTDBRCompare), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (z_cmp FP64:f64:$reg, (fpimm:f64)<<P:Predicate_fpimm0>>) - Complexity = 7
                  // Dst: (LTDBRCompare:i32 FP64:f64:$reg, FP64:f64:$reg)
                0, // EndSwitchOpcode
/*14255*/     /*Scope*/ 19, /*->14275*/
/*14256*/       OPC_CheckChild0Type, MVT::f128,
/*14258*/       OPC_MoveChild, 1,
/*14260*/       OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*14263*/       OPC_CheckPredicate, 105, // Predicate_fpimm0
/*14265*/       OPC_MoveParent,
/*14266*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LTXBRCompare), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (z_cmp FP128:f128:$reg, (fpimm:f128)<<P:Predicate_fpimm0>>) - Complexity = 7
                // Dst: (LTXBRCompare:i32 FP128:f128:$reg, FP128:f128:$reg)
/*14275*/     /*Scope*/ 49, /*->14325*/
/*14276*/       OPC_MoveChild, 1,
/*14278*/       OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::SIGN_EXTEND),// ->14293
/*14282*/         OPC_RecordChild0, // #1 = $src2
/*14283*/         OPC_MoveParent,
/*14284*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (z_cmp GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (CGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->14324
/*14296*/         OPC_RecordChild0, // #1 = $src2
/*14297*/         OPC_MoveChild, 1,
/*14299*/         OPC_CheckValueType, MVT::i32,
/*14301*/         OPC_MoveParent,
/*14302*/         OPC_MoveParent,
/*14303*/         OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*14306*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*14315*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGFR), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_cmp GR64:i64:$src1, (sext_inreg:i64 GR64:i64:$src2, i32:Other)) - Complexity = 6
                  // Dst: (CGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
                0, // EndSwitchOpcode
/*14325*/     /*Scope*/ 12, /*->14338*/
/*14326*/       OPC_CheckChild0Type, MVT::i32,
/*14328*/       OPC_RecordChild1, // #1 = $R2
/*14329*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*14338*/     /*Scope*/ 12, /*->14351*/
/*14339*/       OPC_CheckChild0Type, MVT::i64,
/*14341*/       OPC_RecordChild1, // #1 = $R2
/*14342*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*14351*/     /*Scope*/ 12, /*->14364*/
/*14352*/       OPC_CheckChild0Type, MVT::f32,
/*14354*/       OPC_RecordChild1, // #1 = $R2
/*14355*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP32:f32:$R1, FP32:f32:$R2) - Complexity = 3
                // Dst: (CEBR:i32 FP32:f32:$R1, FP32:f32:$R2)
/*14364*/     /*Scope*/ 12, /*->14377*/
/*14365*/       OPC_CheckChild0Type, MVT::f64,
/*14367*/       OPC_RecordChild1, // #1 = $R2
/*14368*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP64:f64:$R1, FP64:f64:$R2) - Complexity = 3
                // Dst: (CDBR:i32 FP64:f64:$R1, FP64:f64:$R2)
/*14377*/     /*Scope*/ 12, /*->14390*/
/*14378*/       OPC_CheckChild0Type, MVT::f128,
/*14380*/       OPC_RecordChild1, // #1 = $R2
/*14381*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXBR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_cmp FP128:f128:$R1, FP128:f128:$R2) - Complexity = 3
                // Dst: (CXBR:i32 FP128:f128:$R1, FP128:f128:$R2)
/*14390*/     0, /*End of Scope*/
/*14391*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 55|128,4/*567*/,  TARGET_VAL(SystemZISD::UCMP),// ->14963
/*14396*/   OPC_Scope, 13|128,1/*141*/, /*->14540*/ // 3 children in Scope
/*14399*/     OPC_RecordChild0, // #0 = $R1
/*14400*/     OPC_Scope, 57, /*->14459*/ // 2 children in Scope
/*14402*/       OPC_CheckChild0Type, MVT::i32,
/*14404*/       OPC_MoveChild, 1,
/*14406*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14409*/       OPC_RecordMemRef,
/*14410*/       OPC_RecordNode, // #1 = 'ld' chained node
/*14411*/       OPC_CheckFoldableChainNode,
/*14412*/       OPC_RecordChild1, // #2 = $I2
/*14413*/       OPC_CheckChild1Type, MVT::i64,
/*14415*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14417*/       OPC_Scope, 20, /*->14439*/ // 2 children in Scope
/*14419*/         OPC_CheckPredicate, 38, // Predicate_zextload
/*14421*/         OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*14423*/         OPC_CheckPredicate, 73, // Predicate_aligned_zextloadi16
/*14425*/         OPC_MoveParent,
/*14426*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14429*/         OPC_EmitMergeInputChains1_1,
/*14430*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                  // Dst: (CLHRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*14439*/       /*Scope*/ 18, /*->14458*/
/*14440*/         OPC_CheckPredicate, 13, // Predicate_load
/*14442*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*14444*/         OPC_MoveParent,
/*14445*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14448*/         OPC_EmitMergeInputChains1_1,
/*14449*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (ld:i32 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLRL:i32 GR32:i32:$R1, pcrel32:i64:$I2)
/*14458*/       0, /*End of Scope*/
/*14459*/     /*Scope*/ 79, /*->14539*/
/*14460*/       OPC_CheckChild0Type, MVT::i64,
/*14462*/       OPC_MoveChild, 1,
/*14464*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14467*/       OPC_RecordMemRef,
/*14468*/       OPC_RecordNode, // #1 = 'ld' chained node
/*14469*/       OPC_CheckFoldableChainNode,
/*14470*/       OPC_RecordChild1, // #2 = $I2
/*14471*/       OPC_CheckChild1Type, MVT::i64,
/*14473*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14475*/       OPC_Scope, 42, /*->14519*/ // 2 children in Scope
/*14477*/         OPC_CheckPredicate, 38, // Predicate_zextload
/*14479*/         OPC_Scope, 18, /*->14499*/ // 2 children in Scope
/*14481*/           OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*14483*/           OPC_CheckPredicate, 73, // Predicate_aligned_zextloadi16
/*14485*/           OPC_MoveParent,
/*14486*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14489*/           OPC_EmitMergeInputChains1_1,
/*14490*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>><<P:Predicate_aligned_zextloadi16>>) - Complexity = 20
                    // Dst: (CLGHRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*14499*/         /*Scope*/ 18, /*->14518*/
/*14500*/           OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*14502*/           OPC_CheckPredicate, 74, // Predicate_aligned_zextloadi32
/*14504*/           OPC_MoveParent,
/*14505*/           OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14508*/           OPC_EmitMergeInputChains1_1,
/*14509*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>><<P:Predicate_aligned_zextloadi32>>) - Complexity = 20
                    // Dst: (CLGFRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*14518*/         0, /*End of Scope*/
/*14519*/       /*Scope*/ 18, /*->14538*/
/*14520*/         OPC_CheckPredicate, 13, // Predicate_load
/*14522*/         OPC_CheckPredicate, 67, // Predicate_aligned_load
/*14524*/         OPC_MoveParent,
/*14525*/         OPC_CheckComplexPat, /*CP*/5, /*#*/2, // selectPCRelAddress:$I2 #3
/*14528*/         OPC_EmitMergeInputChains1_1,
/*14529*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGRL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (ld:i64 pcrel32:i64:$I2)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned_load>>) - Complexity = 20
                  // Dst: (CLGRL:i32 GR64:i64:$R1, pcrel32:i64:$I2)
/*14538*/       0, /*End of Scope*/
/*14539*/     0, /*End of Scope*/
/*14540*/   /*Scope*/ 48|128,1/*176*/, /*->14718*/
/*14542*/     OPC_MoveChild, 0,
/*14544*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14547*/     OPC_RecordMemRef,
/*14548*/     OPC_RecordNode, // #0 = 'ld' chained node
/*14549*/     OPC_CheckFoldableChainNode,
/*14550*/     OPC_RecordChild1, // #1 = $BD1
/*14551*/     OPC_CheckChild1Type, MVT::i64,
/*14553*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14555*/     OPC_Scope, 93, /*->14650*/ // 2 children in Scope
/*14557*/       OPC_CheckPredicate, 38, // Predicate_zextload
/*14559*/       OPC_CheckType, MVT::i32,
/*14561*/       OPC_Scope, 54, /*->14617*/ // 2 children in Scope
/*14563*/         OPC_CheckPredicate, 39, // Predicate_zextloadi8
/*14565*/         OPC_MoveParent,
/*14566*/         OPC_RecordChild1, // #2 = $I2
/*14567*/         OPC_MoveChild, 1,
/*14569*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14572*/         OPC_CheckPredicate, 106, // Predicate_imm32zx8
/*14574*/         OPC_MoveParent,
/*14575*/         OPC_Scope, 19, /*->14596*/ // 2 children in Scope
/*14577*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectBDAddr12Pair:$BD1 #3 #4
/*14580*/           OPC_EmitMergeInputChains1_0,
/*14581*/           OPC_EmitConvertToTarget, 2,
/*14583*/           OPC_EmitNodeXForm, 1, 5, // UIMM8
/*14586*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr12pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLI:i32 bdaddr12pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*14596*/         /*Scope*/ 19, /*->14616*/
/*14597*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectBDAddr20Pair:$BD1 #3 #4
/*14600*/           OPC_EmitMergeInputChains1_0,
/*14601*/           OPC_EmitConvertToTarget, 2,
/*14603*/           OPC_EmitNodeXForm, 1, 5, // UIMM8
/*14606*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLIY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                    // Src: (z_ucmp (ld:i32 bdaddr20pair:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>, (imm:i32)<<P:Predicate_imm32zx8>><<X:UIMM8>>:$I2) - Complexity = 20
                    // Dst: (CLIY:i32 bdaddr20pair:i64:$BD1, (UIMM8:i32 (imm:i32):$I2))
/*14616*/         0, /*End of Scope*/
/*14617*/       /*Scope*/ 31, /*->14649*/
/*14618*/         OPC_CheckPredicate, 72, // Predicate_zextloadi16
/*14620*/         OPC_MoveParent,
/*14621*/         OPC_RecordChild1, // #2 = $I2
/*14622*/         OPC_MoveChild, 1,
/*14624*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14627*/         OPC_CheckPredicate, 107, // Predicate_imm32zx16
/*14629*/         OPC_MoveParent,
/*14630*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*14633*/         OPC_EmitMergeInputChains1_0,
/*14634*/         OPC_EmitConvertToTarget, 2,
/*14636*/         OPC_EmitNodeXForm, 12, 5, // UIMM16
/*14639*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLHHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLHHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
/*14649*/       0, /*End of Scope*/
/*14650*/     /*Scope*/ 66, /*->14717*/
/*14651*/       OPC_CheckPredicate, 13, // Predicate_load
/*14653*/       OPC_SwitchType /*2 cases */, 29,  MVT::i32,// ->14685
/*14656*/         OPC_MoveParent,
/*14657*/         OPC_RecordChild1, // #2 = $I2
/*14658*/         OPC_MoveChild, 1,
/*14660*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14663*/         OPC_CheckPredicate, 107, // Predicate_imm32zx16
/*14665*/         OPC_MoveParent,
/*14666*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*14669*/         OPC_EmitMergeInputChains1_0,
/*14670*/         OPC_EmitConvertToTarget, 2,
/*14672*/         OPC_EmitNodeXForm, 12, 5, // UIMM16
/*14675*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i32 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i32)<<P:Predicate_imm32zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLFHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i32 (imm:i32):$I2))
                /*SwitchType*/ 29,  MVT::i64,// ->14716
/*14687*/         OPC_MoveParent,
/*14688*/         OPC_RecordChild1, // #2 = $I2
/*14689*/         OPC_MoveChild, 1,
/*14691*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14694*/         OPC_CheckPredicate, 108, // Predicate_imm64zx16
/*14696*/         OPC_MoveParent,
/*14697*/         OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectBDAddr12Only:$BD1 #3 #4
/*14700*/         OPC_EmitMergeInputChains1_0,
/*14701*/         OPC_EmitConvertToTarget, 2,
/*14703*/         OPC_EmitNodeXForm, 12, 5, // UIMM16
/*14706*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGHSI), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (z_ucmp (ld:i64 bdaddr12only:i64:$BD1)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i64)<<P:Predicate_imm64zx16>><<X:UIMM16>>:$I2) - Complexity = 20
                  // Dst: (CLGHSI:i32 bdaddr12only:i64:$BD1, (UIMM16:i64 (imm:i64):$I2))
                0, // EndSwitchType
/*14717*/     0, /*End of Scope*/
/*14718*/   /*Scope*/ 114|128,1/*242*/, /*->14962*/
/*14720*/     OPC_RecordChild0, // #0 = $R1
/*14721*/     OPC_Scope, 77, /*->14800*/ // 5 children in Scope
/*14723*/       OPC_CheckChild0Type, MVT::i32,
/*14725*/       OPC_Scope, 50, /*->14777*/ // 2 children in Scope
/*14727*/         OPC_MoveChild, 1,
/*14729*/         OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14732*/         OPC_RecordMemRef,
/*14733*/         OPC_RecordNode, // #1 = 'ld' chained node
/*14734*/         OPC_CheckFoldableChainNode,
/*14735*/         OPC_RecordChild1, // #2 = $XBD2
/*14736*/         OPC_CheckChild1Type, MVT::i64,
/*14738*/         OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14740*/         OPC_CheckPredicate, 13, // Predicate_load
/*14742*/         OPC_MoveParent,
/*14743*/         OPC_Scope, 15, /*->14760*/ // 2 children in Scope
/*14745*/           OPC_CheckComplexPat, /*CP*/6, /*#*/2, // selectBDXAddr12Pair:$XBD2 #3 #4 #5
/*14748*/           OPC_EmitMergeInputChains1_1,
/*14749*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CL), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr12pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CL:i32 GR32:i32:$R1, bdxaddr12pair:i64:$XBD2)
/*14760*/         /*Scope*/ 15, /*->14776*/
/*14761*/           OPC_CheckComplexPat, /*CP*/7, /*#*/2, // selectBDXAddr20Pair:$XBD2 #3 #4 #5
/*14764*/           OPC_EmitMergeInputChains1_1,
/*14765*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLY), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                    // Src: (z_ucmp GR32:i32:$R1, (ld:i32 bdxaddr20pair:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                    // Dst: (CLY:i32 GR32:i32:$R1, bdxaddr20pair:i64:$XBD2)
/*14776*/         0, /*End of Scope*/
/*14777*/       /*Scope*/ 21, /*->14799*/
/*14778*/         OPC_RecordChild1, // #1 = $I2
/*14779*/         OPC_MoveChild, 1,
/*14781*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14784*/         OPC_MoveParent,
/*14785*/         OPC_EmitConvertToTarget, 1,
/*14787*/         OPC_EmitNodeXForm, 9, 2, // UIMM32
/*14790*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR32:i32:$R1, (imm:i32)<<X:UIMM32>>:$I2) - Complexity = 6
                  // Dst: (CLFI:i32 GR32:i32:$R1, (UIMM32:i32 (imm:i32):$I2))
/*14799*/       0, /*End of Scope*/
/*14800*/     /*Scope*/ 117, /*->14918*/
/*14801*/       OPC_CheckChild0Type, MVT::i64,
/*14803*/       OPC_Scope, 88, /*->14893*/ // 2 children in Scope
/*14805*/         OPC_MoveChild, 1,
/*14807*/         OPC_Scope, 53, /*->14862*/ // 2 children in Scope
/*14809*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14812*/           OPC_RecordMemRef,
/*14813*/           OPC_RecordNode, // #1 = 'ld' chained node
/*14814*/           OPC_CheckFoldableChainNode,
/*14815*/           OPC_RecordChild1, // #2 = $XBD2
/*14816*/           OPC_CheckChild1Type, MVT::i64,
/*14818*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14820*/           OPC_Scope, 20, /*->14842*/ // 2 children in Scope
/*14822*/             OPC_CheckPredicate, 38, // Predicate_zextload
/*14824*/             OPC_CheckPredicate, 55, // Predicate_zextloadi32
/*14826*/             OPC_MoveParent,
/*14827*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14830*/             OPC_EmitMergeInputChains1_1,
/*14831*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGF), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                      // Dst: (CLGF:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14842*/           /*Scope*/ 18, /*->14861*/
/*14843*/             OPC_CheckPredicate, 13, // Predicate_load
/*14845*/             OPC_MoveParent,
/*14846*/             OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectBDXAddr20Only:$XBD2 #3 #4 #5
/*14849*/             OPC_EmitMergeInputChains1_1,
/*14850*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLG), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                      // Src: (z_ucmp GR64:i64:$R1, (ld:i64 bdxaddr20only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                      // Dst: (CLG:i32 GR64:i64:$R1, bdxaddr20only:i64:$XBD2)
/*14861*/           0, /*End of Scope*/
/*14862*/         /*Scope*/ 29, /*->14892*/
/*14863*/           OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*14869*/           OPC_RecordChild0, // #1 = $src2
/*14870*/           OPC_MoveParent,
/*14871*/           OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*14874*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*14883*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (z_ucmp GR64:i64:$src1, (and:i64 GR64:i64:$src2, 4294967295:i64)) - Complexity = 11
                    // Dst: (CLGFR:i32 GR64:i64:$src1, (EXTRACT_SUBREG:i32 GR64:i64:$src2, subreg_32bit:i32))
/*14892*/         0, /*End of Scope*/
/*14893*/       /*Scope*/ 23, /*->14917*/
/*14894*/         OPC_RecordChild1, // #1 = $I2
/*14895*/         OPC_MoveChild, 1,
/*14897*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14900*/         OPC_CheckPredicate, 57, // Predicate_imm64zx32
/*14902*/         OPC_MoveParent,
/*14903*/         OPC_EmitConvertToTarget, 1,
/*14905*/         OPC_EmitNodeXForm, 9, 2, // UIMM32
/*14908*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFI), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (z_ucmp GR64:i64:$R1, (imm:i64)<<P:Predicate_imm64zx32>><<X:UIMM32>>:$I2) - Complexity = 7
                  // Dst: (CLGFI:i32 GR64:i64:$R1, (UIMM32:i64 (imm:i64):$I2))
/*14917*/       0, /*End of Scope*/
/*14918*/     /*Scope*/ 16, /*->14935*/
/*14919*/       OPC_MoveChild, 1,
/*14921*/       OPC_CheckOpcode, TARGET_VAL(ISD::ZERO_EXTEND),
/*14924*/       OPC_RecordChild0, // #1 = $src2
/*14925*/       OPC_MoveParent,
/*14926*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGFR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (CLGFR:i32 GR64:i64:$src1, GR32:i32:$src2)
/*14935*/     /*Scope*/ 12, /*->14948*/
/*14936*/       OPC_CheckChild0Type, MVT::i32,
/*14938*/       OPC_RecordChild1, // #1 = $R2
/*14939*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR32:i32:$R1, GR32:i32:$R2) - Complexity = 3
                // Dst: (CLR:i32 GR32:i32:$R1, GR32:i32:$R2)
/*14948*/     /*Scope*/ 12, /*->14961*/
/*14949*/       OPC_CheckChild0Type, MVT::i64,
/*14951*/       OPC_RecordChild1, // #1 = $R2
/*14952*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CLGR), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (z_ucmp GR64:i64:$R1, GR64:i64:$R2) - Complexity = 3
                // Dst: (CLGR:i32 GR64:i64:$R1, GR64:i64:$R2)
/*14961*/     0, /*End of Scope*/
/*14962*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::FSQRT),// ->15052
/*14966*/   OPC_Scope, 49, /*->15017*/ // 2 children in Scope
/*14968*/     OPC_MoveChild, 0,
/*14970*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*14973*/     OPC_RecordMemRef,
/*14974*/     OPC_RecordNode, // #0 = 'ld' chained node
/*14975*/     OPC_RecordChild1, // #1 = $XBD2
/*14976*/     OPC_CheckChild1Type, MVT::i64,
/*14978*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*14980*/     OPC_CheckPredicate, 13, // Predicate_load
/*14982*/     OPC_MoveParent,
/*14983*/     OPC_SwitchType /*2 cases */, 14,  MVT::f32,// ->15000
/*14986*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*14989*/       OPC_EmitMergeInputChains1_0,
/*14990*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQEB:f32 bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 14,  MVT::f64,// ->15016
/*15002*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #2 #3 #4
/*15005*/       OPC_EmitMergeInputChains1_0,
/*15006*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SQDB:f64 bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15017*/   /*Scope*/ 33, /*->15051*/
/*15018*/     OPC_RecordChild0, // #0 = $R2
/*15019*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->15030
/*15022*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQEBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (SQEBR:f32 FP32:f32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->15040
/*15032*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQDBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (SQDBR:f64 FP64:f64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->15050
/*15042*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SQXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (SQXBR:f128 FP128:f128:$R2)
              0, // EndSwitchType
/*15051*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,1/*155*/,  TARGET_VAL(ISD::FADD),// ->15211
/*15056*/   OPC_Scope, 55, /*->15113*/ // 3 children in Scope
/*15058*/     OPC_RecordChild0, // #0 = $R1src
/*15059*/     OPC_MoveChild, 1,
/*15061*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15064*/     OPC_RecordMemRef,
/*15065*/     OPC_RecordNode, // #1 = 'ld' chained node
/*15066*/     OPC_CheckFoldableChainNode,
/*15067*/     OPC_RecordChild1, // #2 = $XBD2
/*15068*/     OPC_CheckChild1Type, MVT::i64,
/*15070*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15072*/     OPC_CheckPredicate, 13, // Predicate_load
/*15074*/     OPC_MoveParent,
/*15075*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15094
/*15078*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15081*/       OPC_EmitMergeInputChains1_1,
/*15082*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->15112
/*15096*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15099*/       OPC_EmitMergeInputChains1_1,
/*15100*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fadd:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15113*/   /*Scope*/ 55, /*->15169*/
/*15114*/     OPC_MoveChild, 0,
/*15116*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15119*/     OPC_RecordMemRef,
/*15120*/     OPC_RecordNode, // #0 = 'ld' chained node
/*15121*/     OPC_CheckFoldableChainNode,
/*15122*/     OPC_RecordChild1, // #1 = $XBD2
/*15123*/     OPC_CheckChild1Type, MVT::i64,
/*15125*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15127*/     OPC_CheckPredicate, 13, // Predicate_load
/*15129*/     OPC_MoveParent,
/*15130*/     OPC_RecordChild1, // #2 = $R1src
/*15131*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15150
/*15134*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15137*/       OPC_EmitMergeInputChains1_0,
/*15138*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f32 (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$R1src) - Complexity = 19
                // Dst: (AEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->15168
/*15152*/       OPC_CheckComplexPat, /*CP*/14, /*#*/1, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15155*/       OPC_EmitMergeInputChains1_0,
/*15156*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fadd:f64 (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$R1src) - Complexity = 19
                // Dst: (ADB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15169*/   /*Scope*/ 40, /*->15210*/
/*15170*/     OPC_RecordChild0, // #0 = $R1src
/*15171*/     OPC_RecordChild1, // #1 = $R2
/*15172*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->15185
/*15175*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (AEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 10,  MVT::f64,// ->15197
/*15187*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (ADBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 10,  MVT::f128,// ->15209
/*15199*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (AXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*15210*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 98,  TARGET_VAL(ISD::FSUB),// ->15312
/*15214*/   OPC_RecordChild0, // #0 = $R1src
/*15215*/   OPC_Scope, 54, /*->15271*/ // 2 children in Scope
/*15217*/     OPC_MoveChild, 1,
/*15219*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15222*/     OPC_RecordMemRef,
/*15223*/     OPC_RecordNode, // #1 = 'ld' chained node
/*15224*/     OPC_CheckFoldableChainNode,
/*15225*/     OPC_RecordChild1, // #2 = $XBD2
/*15226*/     OPC_CheckChild1Type, MVT::i64,
/*15228*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15230*/     OPC_CheckPredicate, 13, // Predicate_load
/*15232*/     OPC_MoveParent,
/*15233*/     OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->15252
/*15236*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15239*/       OPC_EmitMergeInputChains1_1,
/*15240*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SEB:f32:i32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 16,  MVT::f64,// ->15270
/*15254*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15257*/       OPC_EmitMergeInputChains1_1,
/*15258*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDB), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SDB:f64:i32 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15271*/   /*Scope*/ 39, /*->15311*/
/*15272*/     OPC_RecordChild1, // #1 = $R2
/*15273*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->15286
/*15276*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (SEBR:f32:i32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 10,  MVT::f64,// ->15298
/*15288*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (SDBR:f64:i32 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 10,  MVT::f128,// ->15310
/*15300*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::SXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (SXBR:f128:i32 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*15311*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::FDIV),// ->15408
/*15315*/   OPC_RecordChild0, // #0 = $R1src
/*15316*/   OPC_Scope, 52, /*->15370*/ // 2 children in Scope
/*15318*/     OPC_MoveChild, 1,
/*15320*/     OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*15323*/     OPC_RecordMemRef,
/*15324*/     OPC_RecordNode, // #1 = 'ld' chained node
/*15325*/     OPC_CheckFoldableChainNode,
/*15326*/     OPC_RecordChild1, // #2 = $XBD2
/*15327*/     OPC_CheckChild1Type, MVT::i64,
/*15329*/     OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15331*/     OPC_CheckPredicate, 13, // Predicate_load
/*15333*/     OPC_MoveParent,
/*15334*/     OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->15352
/*15337*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15340*/       OPC_EmitMergeInputChains1_1,
/*15341*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f32 FP32:f32:$R1src, (ld:f32 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DEB:f32 FP32:f32:$R1src, bdxaddr12only:i64:$XBD2)
              /*SwitchType*/ 15,  MVT::f64,// ->15369
/*15354*/       OPC_CheckComplexPat, /*CP*/14, /*#*/2, // selectBDXAddr12Only:$XBD2 #3 #4 #5
/*15357*/       OPC_EmitMergeInputChains1_1,
/*15358*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDB), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f64 FP64:f64:$R1src, (ld:f64 bdxaddr12only:i64:$XBD2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (DDB:f64 FP64:f64:$R1src, bdxaddr12only:i64:$XBD2)
              0, // EndSwitchType
/*15370*/   /*Scope*/ 36, /*->15407*/
/*15371*/     OPC_RecordChild1, // #1 = $R2
/*15372*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15384
/*15375*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DEBR), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 FP32:f32:$R1src, FP32:f32:$R2) - Complexity = 3
                // Dst: (DEBR:f32 FP32:f32:$R1src, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15395
/*15386*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DDBR), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FP64:f64:$R1src, FP64:f64:$R2) - Complexity = 3
                // Dst: (DDBR:f64 FP64:f64:$R1src, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->15406
/*15397*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::DXBR), 0,
                    1/*#VTs*/, MVT::f128, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f128 FP128:f128:$R1src, FP128:f128:$R2) - Complexity = 3
                // Dst: (DXBR:f128 FP128:f128:$R1src, FP128:f128:$R2)
              0, // EndSwitchType
/*15407*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(SystemZISD::BR_CCMASK),// ->15452
/*15411*/   OPC_RecordNode,   // #0 = 'z_br_ccmask' chained node
/*15412*/   OPC_CaptureGlueInput,
/*15413*/   OPC_RecordChild1, // #1 = $valid
/*15414*/   OPC_MoveChild, 1,
/*15416*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15419*/   OPC_CheckPredicate, 51, // Predicate_cond4
/*15421*/   OPC_MoveParent,
/*15422*/   OPC_RecordChild2, // #2 = $R1
/*15423*/   OPC_MoveChild, 2,
/*15425*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15428*/   OPC_CheckPredicate, 51, // Predicate_cond4
/*15430*/   OPC_MoveParent,
/*15431*/   OPC_RecordChild3, // #3 = $I2
/*15432*/   OPC_MoveChild, 3,
/*15434*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15437*/   OPC_MoveParent,
/*15438*/   OPC_EmitMergeInputChains1_0,
/*15439*/   OPC_EmitConvertToTarget, 1,
/*15441*/   OPC_EmitConvertToTarget, 2,
/*15443*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
            // Src: (z_br_ccmask (imm:i8)<<P:Predicate_cond4>>:$valid, (imm:i8)<<P:Predicate_cond4>>:$R1, (bb:Other):$I2) - Complexity = 11
            // Dst: (BRC (imm:i8):$valid, (imm:i8):$R1, (bb:Other):$I2)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->15480
/*15455*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*15456*/   OPC_CaptureGlueInput,
/*15457*/   OPC_RecordChild1, // #1 = $amt1
/*15458*/   OPC_MoveChild, 1,
/*15460*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15463*/   OPC_MoveParent,
/*15464*/   OPC_RecordChild2, // #2 = $amt2
/*15465*/   OPC_MoveChild, 2,
/*15467*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15470*/   OPC_MoveParent,
/*15471*/   OPC_EmitMergeInputChains1_0,
/*15472*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
          /*SwitchOpcode*/ 30,  TARGET_VAL(SystemZISD::CALL),// ->15513
/*15483*/   OPC_RecordNode,   // #0 = 'z_call' chained node
/*15484*/   OPC_CaptureGlueInput,
/*15485*/   OPC_RecordChild1, // #1 = $I2
/*15486*/   OPC_CheckChild1Type, MVT::i64,
/*15488*/   OPC_Scope, 12, /*->15502*/ // 2 children in Scope
/*15490*/     OPC_CheckComplexPat, /*CP*/15, /*#*/1, // selectPCRelAddress:$I2 #2
/*15493*/     OPC_EmitMergeInputChains1_0,
/*15494*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BRASL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (z_call pcrel32call:i64:$I2) - Complexity = 9
              // Dst: (BRASL:i64 pcrel32call:i64:$I2)
/*15502*/   /*Scope*/ 9, /*->15512*/
/*15503*/     OPC_EmitMergeInputChains1_0,
/*15504*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::BASR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (z_call ADDR64:i64:$R2) - Complexity = 3
              // Dst: (BASR:i64 ADDR64:i64:$R2)
/*15512*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->15532
/*15516*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*15517*/   OPC_RecordChild1, // #1 = $amt
/*15518*/   OPC_MoveChild, 1,
/*15520*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15523*/   OPC_MoveParent,
/*15524*/   OPC_EmitMergeInputChains1_0,
/*15525*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i64):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::FNEG),// ->15617
/*15535*/   OPC_Scope, 42, /*->15579*/ // 2 children in Scope
/*15537*/     OPC_MoveChild, 0,
/*15539*/     OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*15542*/     OPC_RecordChild0, // #0 = $R2
/*15543*/     OPC_MoveParent,
/*15544*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15556
/*15547*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 (fabs:f32 FP32:f32:$R2)) - Complexity = 6
                // Dst: (LNEBR:f32:i32 FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15567
/*15558*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 (fabs:f64 FP64:f64:$R2)) - Complexity = 6
                // Dst: (LNDBR:f64:i32 FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->15578
/*15569*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LNXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 (fabs:f128 FP128:f128:$R2)) - Complexity = 6
                // Dst: (LNXBR:f128:i32 FP128:f128:$R2)
              0, // EndSwitchType
/*15579*/   /*Scope*/ 36, /*->15616*/
/*15580*/     OPC_RecordChild0, // #0 = $R2
/*15581*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15593
/*15584*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 FP32:f32:$R2) - Complexity = 3
                // Dst: (LCEBR:f32:i32 FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15604
/*15595*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FP64:f64:$R2) - Complexity = 3
                // Dst: (LCDBR:f64:i32 FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f128,// ->15615
/*15606*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fneg:f128 FP128:f128:$R2) - Complexity = 3
                // Dst: (LCXBR:f128:i32 FP128:f128:$R2)
              0, // EndSwitchType
/*15616*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::ConstantFP),// ->15713
/*15620*/   OPC_Scope, 31, /*->15653*/ // 2 children in Scope
/*15622*/     OPC_CheckPredicate, 105, // Predicate_fpimm0
/*15624*/     OPC_SwitchType /*3 cases */, 7,  MVT::f32,// ->15634
/*15627*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZER:f32)
              /*SwitchType*/ 7,  MVT::f64,// ->15643
/*15636*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZDR:f64)
              /*SwitchType*/ 7,  MVT::f128,// ->15652
/*15645*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/, 
                // Src: (fpimm:f128)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LZXR:f128)
              0, // EndSwitchType
/*15653*/   /*Scope*/ 58, /*->15712*/
/*15654*/     OPC_CheckPredicate, 109, // Predicate_fpimmneg0
/*15656*/     OPC_SwitchType /*3 cases */, 16,  MVT::f32,// ->15675
/*15659*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZER), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0
/*15666*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCEBR), 0,
                    2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCEBR:f32:i32 (LZER:f32))
              /*SwitchType*/ 16,  MVT::f64,// ->15693
/*15677*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZDR), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0
/*15684*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCDBR), 0,
                    2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCDBR:f64:i32 (LZDR:f64))
              /*SwitchType*/ 16,  MVT::f128,// ->15711
/*15695*/       OPC_EmitNode, TARGET_VAL(SystemZ::LZXR), 0,
                    1/*#VTs*/, MVT::f128, 0/*#Ops*/,  // Results = #0
/*15702*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LCXBR), 0,
                    2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f128)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (LCXBR:f128:i32 (LZXR:f128))
              0, // EndSwitchType
/*15712*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(SystemZISD::RET_FLAG),// ->15725
/*15716*/   OPC_RecordNode,   // #0 = 'z_retflag' chained node
/*15717*/   OPC_CaptureGlueInput,
/*15718*/   OPC_EmitMergeInputChains1_0,
/*15719*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (z_retflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->15740
/*15728*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*15729*/   OPC_RecordChild1, // #1 = $R2
/*15730*/   OPC_CheckChild1Type, MVT::i64,
/*15732*/   OPC_EmitMergeInputChains1_0,
/*15733*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::BR), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind ADDR64:i64:$R2) - Complexity = 3
            // Dst: (BR ADDR64:i64:$R2)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->15759
/*15743*/   OPC_RecordNode,   // #0 = 'br' chained node
/*15744*/   OPC_RecordChild1, // #1 = $I2
/*15745*/   OPC_MoveChild, 1,
/*15747*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*15750*/   OPC_MoveParent,
/*15751*/   OPC_EmitMergeInputChains1_0,
/*15752*/   OPC_MorphNodeTo, TARGET_VAL(SystemZ::J), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$I2) - Complexity = 3
            // Dst: (J (bb:Other):$I2)
          /*SwitchOpcode*/ 101|128,1/*229*/,  TARGET_VAL(ISD::FCOPYSIGN),// ->15992
/*15763*/   OPC_RecordChild0, // #0 = $R3
/*15764*/   OPC_RecordChild1, // #1 = $R2
/*15765*/   OPC_Scope, 62, /*->15829*/ // 3 children in Scope
/*15767*/     OPC_CheckChild1Type, MVT::f32,
/*15769*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15781
/*15772*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRss), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRss:f32 FP32:f32:$R3, FP32:f32:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15792
/*15783*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP32:f32:$R2) - Complexity = 3
                // Dst: (CPSDRds:f64 FP64:f64:$R3, FP32:f32:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->15828
/*15794*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15797*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*15806*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRds), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*15815*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15818*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRds:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP32:f32:$src2), subreg_high:i32)
              0, // EndSwitchType
/*15829*/   /*Scope*/ 62, /*->15892*/
/*15830*/     OPC_CheckChild1Type, MVT::f64,
/*15832*/     OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->15844
/*15835*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f32 FP32:f32:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$R3, FP64:f64:$R2)
              /*SwitchType*/ 9,  MVT::f64,// ->15855
/*15846*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fcopysign:f64 FP64:f64:$R3, FP64:f64:$R2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$R3, FP64:f64:$R2)
              /*SwitchType*/ 34,  MVT::f128,// ->15891
/*15857*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15860*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*15869*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 1,  // Results = #4
/*15878*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15881*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 4, 5, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), FP64:f64:$src2), subreg_high:i32)
              0, // EndSwitchType
/*15892*/   /*Scope*/ 98, /*->15991*/
/*15893*/     OPC_CheckChild1Type, MVT::f128,
/*15895*/     OPC_SwitchType /*3 cases */, 21,  MVT::f32,// ->15919
/*15898*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15901*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*15910*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRsd), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f32 FP32:f32:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRsd:f32 FP32:f32:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->15942
/*15921*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15924*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2,  // Results = #3
/*15933*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 3, 
                // Src: (fcopysign:f64 FP64:f64:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (CPSDRdd:f64 FP64:f64:$src1, (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32))
              /*SwitchType*/ 46,  MVT::f128,// ->15990
/*15944*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15947*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 2,  // Results = #3
/*15956*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15959*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 4,  // Results = #5
/*15968*/       OPC_EmitNode, TARGET_VAL(SystemZ::CPSDRdd), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 3, 5,  // Results = #6
/*15977*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*15980*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::f128, 3/*#Ops*/, 0, 6, 7, 
                // Src: (fcopysign:f128 FP128:f128:$src1, FP128:f128:$src2) - Complexity = 3
                // Dst: (INSERT_SUBREG:f128 FP128:f128:$src1, (CPSDRdd:f64 (EXTRACT_SUBREG:f64 FP128:f128:$src1, subreg_high:i32), (EXTRACT_SUBREG:f64 FP128:f128:$src2, subreg_high:i32)), subreg_high:i32)
              0, // EndSwitchType
/*15991*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FP_ROUND),// ->16058
/*15995*/   OPC_RecordChild0, // #0 = $R2
/*15996*/   OPC_SwitchType /*2 cases */, 36,  MVT::f32,// ->16035
/*15999*/     OPC_Scope, 10, /*->16011*/ // 2 children in Scope
/*16001*/       OPC_CheckChild0Type, MVT::f64,
/*16003*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LEDBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fround:f32 FP64:f64:$R2) - Complexity = 3
                // Dst: (LEDBR:f32 FP64:f64:$R2)
/*16011*/     /*Scope*/ 22, /*->16034*/
/*16012*/       OPC_CheckChild0Type, MVT::f128,
/*16014*/       OPC_EmitNode, TARGET_VAL(SystemZ::LEXBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*16022*/       OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*16025*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (fround:f32 FP128:f128:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (LEXBR:f128 FP128:f128:$src), subreg_32bit:i32)
/*16034*/     0, /*End of Scope*/
            /*SwitchType*/ 20,  MVT::f64,// ->16057
/*16037*/     OPC_EmitNode, TARGET_VAL(SystemZ::LDXBR), 0,
                  1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0,  // Results = #1
/*16045*/     OPC_EmitInteger, MVT::i32, SystemZ::subreg_high,
/*16048*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
              // Src: (fround:f64 FP128:f128:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:f64 (LDXBR:f128 FP128:f128:$src), subreg_high:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FP_EXTEND),// ->16100
/*16061*/   OPC_RecordChild0, // #0 = $R2
/*16062*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->16073
/*16065*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LDEBR), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FP32:f32:$R2) - Complexity = 3
              // Dst: (LDEBR:f64 FP32:f32:$R2)
            /*SwitchType*/ 24,  MVT::f128,// ->16099
/*16075*/     OPC_Scope, 10, /*->16087*/ // 2 children in Scope
/*16077*/       OPC_CheckChild0Type, MVT::f32,
/*16079*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXEBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP32:f32:$R2) - Complexity = 3
                // Dst: (LXEBR:f128 FP32:f32:$R2)
/*16087*/     /*Scope*/ 10, /*->16098*/
/*16088*/       OPC_CheckChild0Type, MVT::f64,
/*16090*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LXDBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (fextend:f128 FP64:f64:$R2) - Complexity = 3
                // Dst: (LXDBR:f128 FP64:f64:$R2)
/*16098*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::SINT_TO_FP),// ->16176
/*16103*/   OPC_RecordChild0, // #0 = $R2
/*16104*/   OPC_Scope, 34, /*->16140*/ // 2 children in Scope
/*16106*/     OPC_CheckChild0Type, MVT::i32,
/*16108*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->16119
/*16111*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEFBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR32:i32:$R2) - Complexity = 3
                // Dst: (CEFBR:f32 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->16129
/*16121*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDFBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR32:i32:$R2) - Complexity = 3
                // Dst: (CDFBR:f64 GR32:i32:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->16139
/*16131*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXFBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR32:i32:$R2) - Complexity = 3
                // Dst: (CXFBR:f128 GR32:i32:$R2)
              0, // EndSwitchType
/*16140*/   /*Scope*/ 34, /*->16175*/
/*16141*/     OPC_CheckChild0Type, MVT::i64,
/*16143*/     OPC_SwitchType /*3 cases */, 8,  MVT::f32,// ->16154
/*16146*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CEGBR), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR64:i64:$R2) - Complexity = 3
                // Dst: (CEGBR:f32 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f64,// ->16164
/*16156*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CDGBR), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR64:i64:$R2) - Complexity = 3
                // Dst: (CDGBR:f64 GR64:i64:$R2)
              /*SwitchType*/ 8,  MVT::f128,// ->16174
/*16166*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::CXGBR), 0,
                    1/*#VTs*/, MVT::f128, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f128 GR64:i64:$R2) - Complexity = 3
                // Dst: (CXGBR:f128 GR64:i64:$R2)
              0, // EndSwitchType
/*16175*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::FABS),// ->16215
/*16179*/   OPC_RecordChild0, // #0 = $R2
/*16180*/   OPC_SwitchType /*3 cases */, 9,  MVT::f32,// ->16192
/*16183*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPEBR), 0,
                  2/*#VTs*/, MVT::f32, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FP32:f32:$R2) - Complexity = 3
              // Dst: (LPEBR:f32:i32 FP32:f32:$R2)
            /*SwitchType*/ 9,  MVT::f64,// ->16203
/*16194*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPDBR), 0,
                  2/*#VTs*/, MVT::f64, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 FP64:f64:$R2) - Complexity = 3
              // Dst: (LPDBR:f64:i32 FP64:f64:$R2)
            /*SwitchType*/ 9,  MVT::f128,// ->16214
/*16205*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::LPXBR), 0,
                  2/*#VTs*/, MVT::f128, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fabs:f128 FP128:f128:$R2) - Complexity = 3
              // Dst: (LPXBR:f128:i32 FP128:f128:$R2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FRINT),// ->16263
/*16218*/   OPC_RecordChild0, // #0 = $src
/*16219*/   OPC_SwitchType /*3 cases */, 12,  MVT::f32,// ->16234
/*16222*/     OPC_EmitInteger, MVT::i8, 0, 
/*16225*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIEBR), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FIEBR:f32 0:i8, FP32:f32:$src)
            /*SwitchType*/ 12,  MVT::f64,// ->16248
/*16236*/     OPC_EmitInteger, MVT::i8, 0, 
/*16239*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIDBR), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FIDBR:f64 0:i8, FP64:f64:$src)
            /*SwitchType*/ 12,  MVT::f128,// ->16262
/*16250*/     OPC_EmitInteger, MVT::i8, 0, 
/*16253*/     OPC_MorphNodeTo, TARGET_VAL(SystemZ::FIXBR), 0,
                  1/*#VTs*/, MVT::f128, 2/*#Ops*/, 1, 0, 
              // Src: (frint:f128 FP128:f128:$src) - Complexity = 3
              // Dst: (FIXBR:f128 0:i8, FP128:f128:$src)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 16265 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 184
  // #OPC_RecordNode                     = 128
  // #OPC_RecordChild                    = 515
  // #OPC_RecordMemRef                   = 112
  // #OPC_CaptureGlueInput               = 11
  // #OPC_MoveChild                      = 276
  // #OPC_MoveParent                     = 443
  // #OPC_CheckSame                      = 26
  // #OPC_CheckPatternPredicate          = 4
  // #OPC_CheckPredicate                 = 738
  // #OPC_CheckOpcode                    = 216
  // #OPC_SwitchOpcode                   = 12
  // #OPC_CheckType                      = 197
  // #OPC_SwitchType                     = 89
  // #OPC_CheckChildType                 = 192
  // #OPC_CheckInteger                   = 10
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 10
  // #OPC_CheckComplexPat                = 383
  // #OPC_CheckAndImm                    = 22
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 84
  // #OPC_EmitInteger                    = 23
  // #OPC_EmitStringInteger              = 39
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 204
  // #OPC_EmitMergeInputChains           = 354
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 52
  // #OPC_EmitNodeXForm                  = 145
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 601

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.hasLoadStoreOnCond());
  case 1: return (Subtarget.hasDistinctOps());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_anyextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_anyextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_nonvolatile_anyextloadi8
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 4: { // Predicate_uimm8zx4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<4>(N->getZExtValue());

  }
  case 5: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 7: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_nonvolatile_truncstorei8
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 9: { // Predicate_anyextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 10: { // Predicate_nonvolatile_anyextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 11: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_nonvolatile_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 13: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 14: { // Predicate_nonvolatile_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 15: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 16: { // Predicate_nonvolatile_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 17: { // Predicate_anyextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_nonvolatile_anyextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return !Load->isVolatile();

  }
  case 19: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 20: { // Predicate_nonvolatile_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return !Store->isVolatile();

  }
  case 21: { // Predicate_imm32sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 22: { // Predicate_imm64sx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<8>(N->getSExtValue());

  }
  case 23: { // Predicate_LoadStore8_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 24: { // Predicate_LoadStore16_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 25: { // Predicate_LoadStore32_32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 26: { // Predicate_LoadStore8Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 27: { // Predicate_LoadStore16Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 28: { // Predicate_LoadStore32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 29: { // Predicate_LoadStore64Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 30: { // Predicate_LoadStoreF32Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 31: { // Predicate_LoadStoreF64Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 32: { // Predicate_LoadStoreF128Pat
    SDNode *N = Node;
 return storeLoadCanUseMVC(N); 
  }
  case 33: { // Predicate_aligned_store
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 34: { // Predicate_imm32sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 35: { // Predicate_imm64sx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<16>(N->getSExtValue());

  }
  case 36: { // Predicate_aligned_truncstorei16
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 37: { // Predicate_aligned_truncstorei32
    SDNode *N = Node;

  StoreSDNode *Store = cast<StoreSDNode>(N);
  return Store->getAlignment() >= Store->getMemoryVT().getStoreSize();

  }
  case 38: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 39: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 40: { // Predicate_or_as_inserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(0),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 41: { // Predicate_or_as_revinserti8
    SDNode *N = Node;

  unsigned BitWidth = N->getValueType(0).getScalarType().getSizeInBits();
  return CurDAG->MaskedValueIsZero(N->getOperand(1),
                                   APInt::getLowBitsSet(BitWidth, 8));

  }
  case 42: { // Predicate_imm32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 43: { // Predicate_imm32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 44: { // Predicate_imm64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(N->getZExtValue());

  }
  case 45: { // Predicate_imm64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(N->getZExtValue());

  }
  case 46: { // Predicate_imm64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(N->getZExtValue());

  }
  case 47: { // Predicate_imm64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(N->getZExtValue());

  }
  case 48: { // Predicate_imm64lf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(N->getZExtValue());

  }
  case 49: { // Predicate_imm64hf32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(N->getZExtValue());

  }
  case 50: { // Predicate_imm32len8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue() - 1);

  }
  case 51: { // Predicate_cond4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return (N->getZExtValue() < 16); 
  }
  case 52: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 53: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 54: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 55: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 56: { // Predicate_imm64sx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<32>(N->getSExtValue());

  }
  case 57: { // Predicate_imm64zx32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(N->getZExtValue());

  }
  case 58: { // Predicate_imm64zx32n
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<32>(-N->getSExtValue());

  }
  case 59: { // Predicate_imm32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint32_t(~N->getZExtValue()));

  }
  case 60: { // Predicate_imm32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint32_t(~N->getZExtValue()));

  }
  case 61: { // Predicate_imm64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLL(uint64_t(~N->getZExtValue()));

  }
  case 62: { // Predicate_imm64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLH(uint64_t(~N->getZExtValue()));

  }
  case 63: { // Predicate_imm64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHL(uint64_t(~N->getZExtValue()));

  }
  case 64: { // Predicate_imm64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHH(uint64_t(~N->getZExtValue()));

  }
  case 65: { // Predicate_imm64lf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmLF(uint64_t(~N->getZExtValue()));

  }
  case 66: { // Predicate_imm64hf32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return SystemZ::isImmHF(uint64_t(~N->getZExtValue()));

  }
  case 67: { // Predicate_aligned_load
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 68: { // Predicate_aligned_sextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 69: { // Predicate_aligned_sextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 70: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 71: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 72: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 73: { // Predicate_aligned_zextloadi16
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 74: { // Predicate_aligned_zextloadi32
    SDNode *N = Node;

  LoadSDNode *Load = cast<LoadSDNode>(N);
  return Load->getAlignment() >= Load->getMemoryVT().getStoreSize();

  }
  case 75: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 76: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 77: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 78: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 79: { // Predicate_extloadf64
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

  }
  case 80: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 81: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 82: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 83: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 84: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 85: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 86: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 87: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 88: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 89: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 90: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 91: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 92: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 93: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 94: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 95: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 96: { // Predicate_atomic_load_min_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 97: { // Predicate_atomic_load_min_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 98: { // Predicate_atomic_load_max_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 99: { // Predicate_atomic_load_max_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 100: { // Predicate_atomic_load_umin_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 101: { // Predicate_atomic_load_umin_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 102: { // Predicate_atomic_load_umax_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 103: { // Predicate_atomic_load_umax_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 104: { // Predicate_access_reg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return N->getZExtValue() < 16; 
  }
  case 105: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(+0.0); 
  }
  case 106: { // Predicate_imm32zx8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<8>(N->getZExtValue());

  }
  case 107: { // Predicate_imm32zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 108: { // Predicate_imm64zx16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isUInt<16>(N->getZExtValue());

  }
  case 109: { // Predicate_fpimmneg0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
 return N->isExactlyValue(-0.0); 
  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return selectBDAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectBDAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  case 6:
    Result.resize(NextRes+3);
    return selectBDXAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 7:
    Result.resize(NextRes+3);
    return selectBDXAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 8:
    Result.resize(NextRes+3);
    return selectBDXAddr20Only128(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 9:
    Result.resize(NextRes+2);
    return selectBDAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 10:
    Result.resize(NextRes+2);
    return selectBDAddr20Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 11:
    Result.resize(NextRes+3);
    return selectDynAlloc12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 12:
    Result.resize(NextRes+3);
    return selectLAAddr12Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 13:
    Result.resize(NextRes+3);
    return selectLAAddr20Pair(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 14:
    Result.resize(NextRes+3);
    return selectBDXAddr12Only(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 15:
    Result.resize(NextRes+1);
    return selectPCRelAddress(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // SIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int8_t(N->getZExtValue()), MVT::i64);

  }
  case 1: {  // UIMM8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint8_t(N->getZExtValue()), MVT::i64);

  }
  case 2: {  // SIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int16_t(N->getZExtValue()), MVT::i64);

  }
  case 3: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x000000000000FFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 4: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 5: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 6: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = (N->getZExtValue() & 0xFFFF000000000000ULL) >> 48;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 7: {  // LF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() & 0x00000000FFFFFFFFULL;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 8: {  // HF32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  uint64_t Value = N->getZExtValue() >> 32;
  return CurDAG->getTargetConstant(Value, MVT::i64);

  }
  case 9: {  // UIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(N->getZExtValue()), MVT::i64);

  }
  case 10: {  // SIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(int32_t(N->getZExtValue()), MVT::i64);

  }
  case 11: {  // NEGIMM32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint32_t(-N->getZExtValue()), MVT::i64);

  }
  case 12: {  // UIMM16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(uint16_t(N->getZExtValue()), MVT::i64);

  }
  }
}

