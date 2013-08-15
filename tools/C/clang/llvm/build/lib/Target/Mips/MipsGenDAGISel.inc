/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Mips target                                *|
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
/*0*/     OPC_SwitchOpcode /*126 cases */, 122|128,11/*1530*/,  TARGET_VAL(ISD::LOAD),// ->1535
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_Scope, 123, /*->132*/ // 5 children in Scope
/*9*/         OPC_RecordChild1, // #1 = $a
/*10*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/        OPC_CheckType, MVT::i32,
/*14*/        OPC_Scope, 19, /*->35*/ // 6 children in Scope
/*16*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*18*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*20*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*22*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*25*/          OPC_EmitMergeInputChains1_0,
/*26*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu:i32 addrRegImm:i32:$a)
/*35*/        /*Scope*/ 19, /*->55*/
/*36*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*38*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*40*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*42*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*45*/          OPC_EmitMergeInputChains1_0,
/*46*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH:i32 addrRegImm:i32:$a)
/*55*/        /*Scope*/ 17, /*->73*/
/*56*/          OPC_CheckPredicate, 5, // Predicate_load
/*58*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*60*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*63*/          OPC_EmitMergeInputChains1_0,
/*64*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW:i32 addrRegImm:i32:$a)
/*73*/        /*Scope*/ 19, /*->93*/
/*74*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*76*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*78*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*80*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*83*/          OPC_EmitMergeInputChains1_0,
/*84*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu_P8:i32 addrRegImm:i64:$a)
/*93*/        /*Scope*/ 19, /*->113*/
/*94*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*96*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*98*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*100*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*103*/         OPC_EmitMergeInputChains1_0,
/*104*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH_P8:i32 addrRegImm:i64:$a)
/*113*/       /*Scope*/ 17, /*->131*/
/*114*/         OPC_CheckPredicate, 5, // Predicate_load
/*116*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*118*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*121*/         OPC_EmitMergeInputChains1_0,
/*122*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW_P8:i32 addrRegImm:i64:$a)
/*131*/       0, /*End of Scope*/
/*132*/     /*Scope*/ 65, /*->198*/
/*133*/       OPC_MoveChild, 1,
/*135*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*138*/       OPC_RecordChild0, // #1 = $base
/*139*/       OPC_RecordChild1, // #2 = $index
/*140*/       OPC_CheckType, MVT::i32,
/*142*/       OPC_MoveParent,
/*143*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*145*/       OPC_CheckType, MVT::i32,
/*147*/       OPC_Scope, 16, /*->165*/ // 3 children in Scope
/*149*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*151*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*153*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*155*/         OPC_EmitMergeInputChains1_0,
/*156*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 27
                // Dst: (LBUX:i32 i32:i32:$base, i32:i32:$index)
/*165*/       /*Scope*/ 16, /*->182*/
/*166*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*168*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*170*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*172*/         OPC_EmitMergeInputChains1_0,
/*173*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 27
                // Dst: (LHX:i32 i32:i32:$base, i32:i32:$index)
/*182*/       /*Scope*/ 14, /*->197*/
/*183*/         OPC_CheckPredicate, 5, // Predicate_load
/*185*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*187*/         OPC_EmitMergeInputChains1_0,
/*188*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                // Dst: (LWX:i32 i32:i32:$base, i32:i32:$index)
/*197*/       0, /*End of Scope*/
/*198*/     /*Scope*/ 115|128,7/*1011*/, /*->1211*/
/*200*/       OPC_RecordChild1, // #1 = $addr
/*201*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*203*/       OPC_Scope, 22, /*->227*/ // 21 children in Scope
/*205*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*207*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*209*/         OPC_CheckType, MVT::i32,
/*211*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*213*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*216*/         OPC_EmitMergeInputChains1_0,
/*217*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LbRxRyOffMemX16:i32 addr16:i32:$addr)
/*227*/       /*Scope*/ 22, /*->250*/
/*228*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*230*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*232*/         OPC_CheckType, MVT::i32,
/*234*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*236*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*239*/         OPC_EmitMergeInputChains1_0,
/*240*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$addr)
/*250*/       /*Scope*/ 22, /*->273*/
/*251*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*253*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*255*/         OPC_CheckType, MVT::i32,
/*257*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*259*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*262*/         OPC_EmitMergeInputChains1_0,
/*263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LhRxRyOffMemX16:i32 addr16:i32:$addr)
/*273*/       /*Scope*/ 22, /*->296*/
/*274*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*276*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*278*/         OPC_CheckType, MVT::i32,
/*280*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*282*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*285*/         OPC_EmitMergeInputChains1_0,
/*286*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$addr)
/*296*/       /*Scope*/ 20, /*->317*/
/*297*/         OPC_CheckPredicate, 5, // Predicate_load
/*299*/         OPC_CheckType, MVT::i32,
/*301*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*303*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*306*/         OPC_EmitMergeInputChains1_0,
/*307*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LwRxRyOffMemX16:i32 addr16:i32:$addr)
/*317*/       /*Scope*/ 44, /*->362*/
/*318*/         OPC_CheckPredicate, 8, // Predicate_extload
/*320*/         OPC_CheckType, MVT::i32,
/*322*/         OPC_Scope, 18, /*->342*/ // 2 children in Scope
/*324*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*326*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*328*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*331*/           OPC_EmitMergeInputChains1_0,
/*332*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$src)
/*342*/         /*Scope*/ 18, /*->361*/
/*343*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*345*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*347*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*350*/           OPC_EmitMergeInputChains1_0,
/*351*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$src)
/*361*/         0, /*End of Scope*/
/*362*/       /*Scope*/ 40, /*->403*/
/*363*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*365*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*367*/         OPC_CheckType, MVT::i32,
/*369*/         OPC_Scope, 15, /*->386*/ // 2 children in Scope
/*371*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*373*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*376*/           OPC_EmitMergeInputChains1_0,
/*377*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*386*/         /*Scope*/ 15, /*->402*/
/*387*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*389*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*392*/           OPC_EmitMergeInputChains1_0,
/*393*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*402*/         0, /*End of Scope*/
/*403*/       /*Scope*/ 40, /*->444*/
/*404*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*406*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*408*/         OPC_CheckType, MVT::i32,
/*410*/         OPC_Scope, 15, /*->427*/ // 2 children in Scope
/*412*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*414*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*417*/           OPC_EmitMergeInputChains1_0,
/*418*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addrDefault:i32:$addr)
/*427*/         /*Scope*/ 15, /*->443*/
/*428*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*430*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*433*/           OPC_EmitMergeInputChains1_0,
/*434*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addrDefault:i64:$addr)
/*443*/         0, /*End of Scope*/
/*444*/       /*Scope*/ 40, /*->485*/
/*445*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*447*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*449*/         OPC_CheckType, MVT::i32,
/*451*/         OPC_Scope, 15, /*->468*/ // 2 children in Scope
/*453*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*455*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*458*/           OPC_EmitMergeInputChains1_0,
/*459*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH:i32 addrDefault:i32:$addr)
/*468*/         /*Scope*/ 15, /*->484*/
/*469*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*471*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*474*/           OPC_EmitMergeInputChains1_0,
/*475*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH_P8:i32 addrDefault:i64:$addr)
/*484*/         0, /*End of Scope*/
/*485*/       /*Scope*/ 40, /*->526*/
/*486*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*488*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*490*/         OPC_CheckType, MVT::i32,
/*492*/         OPC_Scope, 15, /*->509*/ // 2 children in Scope
/*494*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*496*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*509*/         /*Scope*/ 15, /*->525*/
/*510*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*512*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*515*/           OPC_EmitMergeInputChains1_0,
/*516*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*525*/         0, /*End of Scope*/
/*526*/       /*Scope*/ 38, /*->565*/
/*527*/         OPC_CheckPredicate, 5, // Predicate_load
/*529*/         OPC_CheckType, MVT::i32,
/*531*/         OPC_Scope, 15, /*->548*/ // 2 children in Scope
/*533*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*535*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*538*/           OPC_EmitMergeInputChains1_0,
/*539*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW:i32 addrDefault:i32:$addr)
/*548*/         /*Scope*/ 15, /*->564*/
/*549*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*551*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*554*/           OPC_EmitMergeInputChains1_0,
/*555*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW_P8:i32 addrDefault:i64:$addr)
/*564*/         0, /*End of Scope*/
/*565*/       /*Scope*/ 114, /*->680*/
/*566*/         OPC_CheckPredicate, 8, // Predicate_extload
/*568*/         OPC_CheckType, MVT::i32,
/*570*/         OPC_Scope, 17, /*->589*/ // 6 children in Scope
/*572*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*574*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*576*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*579*/           OPC_EmitMergeInputChains1_0,
/*580*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*589*/         /*Scope*/ 17, /*->607*/
/*590*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*592*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*594*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*597*/           OPC_EmitMergeInputChains1_0,
/*598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*607*/         /*Scope*/ 17, /*->625*/
/*608*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*610*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*612*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*615*/           OPC_EmitMergeInputChains1_0,
/*616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$src)
/*625*/         /*Scope*/ 17, /*->643*/
/*626*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*628*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*630*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*633*/           OPC_EmitMergeInputChains1_0,
/*634*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*643*/         /*Scope*/ 17, /*->661*/
/*644*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*646*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*648*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*651*/           OPC_EmitMergeInputChains1_0,
/*652*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*661*/         /*Scope*/ 17, /*->679*/
/*662*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*664*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*666*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*669*/           OPC_EmitMergeInputChains1_0,
/*670*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$src)
/*679*/         0, /*End of Scope*/
/*680*/       /*Scope*/ 40, /*->721*/
/*681*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*683*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*685*/         OPC_CheckType, MVT::i64,
/*687*/         OPC_Scope, 15, /*->704*/ // 2 children in Scope
/*689*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*691*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*694*/           OPC_EmitMergeInputChains1_0,
/*695*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*704*/         /*Scope*/ 15, /*->720*/
/*705*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*707*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*710*/           OPC_EmitMergeInputChains1_0,
/*711*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*720*/         0, /*End of Scope*/
/*721*/       /*Scope*/ 40, /*->762*/
/*722*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*724*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*726*/         OPC_CheckType, MVT::i64,
/*728*/         OPC_Scope, 15, /*->745*/ // 2 children in Scope
/*730*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*732*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*735*/           OPC_EmitMergeInputChains1_0,
/*736*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*745*/         /*Scope*/ 15, /*->761*/
/*746*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*748*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*751*/           OPC_EmitMergeInputChains1_0,
/*752*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*761*/         0, /*End of Scope*/
/*762*/       /*Scope*/ 40, /*->803*/
/*763*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*765*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*767*/         OPC_CheckType, MVT::i64,
/*769*/         OPC_Scope, 15, /*->786*/ // 2 children in Scope
/*771*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*773*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*776*/           OPC_EmitMergeInputChains1_0,
/*777*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*786*/         /*Scope*/ 15, /*->802*/
/*787*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*789*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*792*/           OPC_EmitMergeInputChains1_0,
/*793*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*802*/         0, /*End of Scope*/
/*803*/       /*Scope*/ 40, /*->844*/
/*804*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*806*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*808*/         OPC_CheckType, MVT::i64,
/*810*/         OPC_Scope, 15, /*->827*/ // 2 children in Scope
/*812*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*814*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*817*/           OPC_EmitMergeInputChains1_0,
/*818*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*827*/         /*Scope*/ 15, /*->843*/
/*828*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*830*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*833*/           OPC_EmitMergeInputChains1_0,
/*834*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*843*/         0, /*End of Scope*/
/*844*/       /*Scope*/ 40, /*->885*/
/*845*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*847*/         OPC_CheckPredicate, 12, // Predicate_sextloadi32
/*849*/         OPC_CheckType, MVT::i64,
/*851*/         OPC_Scope, 15, /*->868*/ // 2 children in Scope
/*853*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*855*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*858*/           OPC_EmitMergeInputChains1_0,
/*859*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*868*/         /*Scope*/ 15, /*->884*/
/*869*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*871*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*874*/           OPC_EmitMergeInputChains1_0,
/*875*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*884*/         0, /*End of Scope*/
/*885*/       /*Scope*/ 40, /*->926*/
/*886*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*888*/         OPC_CheckPredicate, 13, // Predicate_zextloadi32
/*890*/         OPC_CheckType, MVT::i64,
/*892*/         OPC_Scope, 15, /*->909*/ // 2 children in Scope
/*894*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*896*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*899*/           OPC_EmitMergeInputChains1_0,
/*900*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu:i64 addr:i32:$addr)
/*909*/         /*Scope*/ 15, /*->925*/
/*910*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*912*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*915*/           OPC_EmitMergeInputChains1_0,
/*916*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu_P8:i64 addr:i64:$addr)
/*925*/         0, /*End of Scope*/
/*926*/       /*Scope*/ 38, /*->965*/
/*927*/         OPC_CheckPredicate, 5, // Predicate_load
/*929*/         OPC_CheckType, MVT::i64,
/*931*/         OPC_Scope, 15, /*->948*/ // 2 children in Scope
/*933*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*935*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*938*/           OPC_EmitMergeInputChains1_0,
/*939*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*948*/         /*Scope*/ 15, /*->964*/
/*949*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*951*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*954*/           OPC_EmitMergeInputChains1_0,
/*955*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*964*/         0, /*End of Scope*/
/*965*/       /*Scope*/ 22|128,1/*150*/, /*->1117*/
/*967*/         OPC_CheckPredicate, 8, // Predicate_extload
/*969*/         OPC_CheckType, MVT::i64,
/*971*/         OPC_Scope, 17, /*->990*/ // 8 children in Scope
/*973*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*975*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*977*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*980*/           OPC_EmitMergeInputChains1_0,
/*981*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*990*/         /*Scope*/ 17, /*->1008*/
/*991*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*993*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*995*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*998*/           OPC_EmitMergeInputChains1_0,
/*999*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1008*/        /*Scope*/ 17, /*->1026*/
/*1009*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1011*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1013*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1016*/          OPC_EmitMergeInputChains1_0,
/*1017*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$src)
/*1026*/        /*Scope*/ 17, /*->1044*/
/*1027*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1029*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1031*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1034*/          OPC_EmitMergeInputChains1_0,
/*1035*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$src)
/*1044*/        /*Scope*/ 17, /*->1062*/
/*1045*/          OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1047*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1052*/          OPC_EmitMergeInputChains1_0,
/*1053*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1062*/        /*Scope*/ 17, /*->1080*/
/*1063*/          OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1065*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1067*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1070*/          OPC_EmitMergeInputChains1_0,
/*1071*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1080*/        /*Scope*/ 17, /*->1098*/
/*1081*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1083*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1085*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1088*/          OPC_EmitMergeInputChains1_0,
/*1089*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$src)
/*1098*/        /*Scope*/ 17, /*->1116*/
/*1099*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1101*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1103*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1106*/          OPC_EmitMergeInputChains1_0,
/*1107*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$src)
/*1116*/        0, /*End of Scope*/
/*1117*/      /*Scope*/ 92, /*->1210*/
/*1118*/        OPC_CheckPredicate, 5, // Predicate_load
/*1120*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->1157
/*1123*/          OPC_Scope, 15, /*->1140*/ // 2 children in Scope
/*1125*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1127*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1130*/            OPC_EmitMergeInputChains1_0,
/*1131*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1_P8:f32 addrRegImm:i64:$a)
/*1140*/          /*Scope*/ 15, /*->1156*/
/*1141*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1143*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1146*/            OPC_EmitMergeInputChains1_0,
/*1147*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1:f32 addrRegImm:i32:$a)
/*1156*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->1209
/*1159*/          OPC_Scope, 15, /*->1176*/ // 3 children in Scope
/*1161*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1163*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1166*/            OPC_EmitMergeInputChains1_0,
/*1167*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164_P8:f64 addrRegImm:i64:$a)
/*1176*/          /*Scope*/ 15, /*->1192*/
/*1177*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1179*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1182*/            OPC_EmitMergeInputChains1_0,
/*1183*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164:f64 addrRegImm:i32:$a)
/*1192*/          /*Scope*/ 15, /*->1208*/
/*1193*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1195*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1198*/            OPC_EmitMergeInputChains1_0,
/*1199*/            OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoLDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (PseudoLDC1:f64 addrRegImm:i32:$a)
/*1208*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1210*/      0, /*End of Scope*/
/*1211*/    /*Scope*/ 99, /*->1311*/
/*1212*/      OPC_MoveChild, 1,
/*1214*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1217*/      OPC_RecordChild0, // #1 = $base
/*1218*/      OPC_RecordChild1, // #2 = $index
/*1219*/      OPC_SwitchType /*2 cases */, 51,  MVT::i32,// ->1273
/*1222*/        OPC_MoveParent,
/*1223*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1225*/        OPC_CheckPredicate, 5, // Predicate_load
/*1227*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1242
/*1230*/          OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1232*/          OPC_EmitMergeInputChains1_0,
/*1233*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1:f32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
                /*SwitchType*/ 28,  MVT::f64,// ->1272
/*1244*/          OPC_Scope, 12, /*->1258*/ // 2 children in Scope
/*1246*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1248*/            OPC_EmitMergeInputChains1_0,
/*1249*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC1:f64 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1258*/          /*Scope*/ 12, /*->1271*/
/*1259*/            OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1261*/            OPC_EmitMergeInputChains1_0,
/*1262*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC164:f64 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1271*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 35,  MVT::i64,// ->1310
/*1275*/        OPC_MoveParent,
/*1276*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1278*/        OPC_CheckPredicate, 5, // Predicate_load
/*1280*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1295
/*1283*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1285*/          OPC_EmitMergeInputChains1_0,
/*1286*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1_P8:f32 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                /*SwitchType*/ 12,  MVT::f64,// ->1309
/*1297*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1299*/          OPC_EmitMergeInputChains1_0,
/*1300*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LDXC164_P8:f64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*1311*/    /*Scope*/ 93|128,1/*221*/, /*->1534*/
/*1313*/      OPC_RecordChild1, // #1 = $addr
/*1314*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1316*/      OPC_CheckPredicate, 5, // Predicate_load
/*1318*/      OPC_SwitchType /*8 cases */, 34,  MVT::f32,// ->1355
/*1321*/        OPC_Scope, 15, /*->1338*/ // 2 children in Scope
/*1323*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1325*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1328*/          OPC_EmitMergeInputChains1_0,
/*1329*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1_P8:f32 addrDefault:i64:$addr)
/*1338*/        /*Scope*/ 15, /*->1354*/
/*1339*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1341*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1344*/          OPC_EmitMergeInputChains1_0,
/*1345*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1:f32 addrDefault:i32:$addr)
/*1354*/        0, /*End of Scope*/
              /*SwitchType*/ 50,  MVT::f64,// ->1407
/*1357*/        OPC_Scope, 15, /*->1374*/ // 3 children in Scope
/*1359*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1361*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1364*/          OPC_EmitMergeInputChains1_0,
/*1365*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164_P8:f64 addrDefault:i64:$addr)
/*1374*/        /*Scope*/ 15, /*->1390*/
/*1375*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1377*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1380*/          OPC_EmitMergeInputChains1_0,
/*1381*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164:f64 addrDefault:i32:$addr)
/*1390*/        /*Scope*/ 15, /*->1406*/
/*1391*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1393*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1396*/          OPC_EmitMergeInputChains1_0,
/*1397*/          OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoLDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (PseudoLDC1:f64 addrDefault:i32:$addr)
/*1406*/        0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::v16i8,// ->1424
/*1409*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*1411*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*1414*/        OPC_EmitMergeInputChains1_0,
/*1415*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LD_B), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
                // Src: (ld:v16i8 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD_B:v16i8 addr:i32:$addr)
              /*SwitchType*/ 15,  MVT::v8i16,// ->1441
/*1426*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*1428*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*1431*/        OPC_EmitMergeInputChains1_0,
/*1432*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LD_H), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
                // Src: (ld:v8i16 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD_H:v8i16 addr:i32:$addr)
              /*SwitchType*/ 15,  MVT::v4i32,// ->1458
/*1443*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*1445*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*1448*/        OPC_EmitMergeInputChains1_0,
/*1449*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LD_W), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:v4i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD_W:v4i32 addr:i32:$addr)
              /*SwitchType*/ 15,  MVT::v2i64,// ->1475
/*1460*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*1462*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*1465*/        OPC_EmitMergeInputChains1_0,
/*1466*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LD_D), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v2i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:v2i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD_D:v2i64 addr:i32:$addr)
              /*SwitchType*/ 27,  MVT::v2i16,// ->1504
/*1477*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1479*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1482*/        OPC_EmitMergeInputChains1_0,
/*1483*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1492*/        OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*1495*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v2i16 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v2i16 (LW:i32 addr:i32:$a), DSPR:i32)
              /*SwitchType*/ 27,  MVT::v4i8,// ->1533
/*1506*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1508*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1511*/        OPC_EmitMergeInputChains1_0,
/*1512*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1521*/        OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*1524*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v4i8 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v4i8 (LW:i32 addr:i32:$a), DSPR:i32)
              0, // EndSwitchType
/*1534*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 0|128,7/*896*/,  TARGET_VAL(ISD::STORE),// ->2435
/*1539*/    OPC_RecordMemRef,
/*1540*/    OPC_RecordNode,   // #0 = 'st' chained node
/*1541*/    OPC_Scope, 93|128,1/*221*/, /*->1765*/ // 3 children in Scope
/*1544*/      OPC_RecordChild1, // #1 = $v
/*1545*/      OPC_Scope, 92, /*->1639*/ // 2 children in Scope
/*1547*/        OPC_CheckChild1Type, MVT::f32,
/*1549*/        OPC_Scope, 39, /*->1590*/ // 2 children in Scope
/*1551*/          OPC_RecordChild2, // #2 = $a
/*1552*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1554*/          OPC_CheckPredicate, 16, // Predicate_store
/*1556*/          OPC_Scope, 15, /*->1573*/ // 2 children in Scope
/*1558*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1560*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1563*/            OPC_EmitMergeInputChains1_0,
/*1564*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1_P8 f32:f32:$v, addrRegImm:i64:$a)
/*1573*/          /*Scope*/ 15, /*->1589*/
/*1574*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1576*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1579*/            OPC_EmitMergeInputChains1_0,
/*1580*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1 f32:f32:$v, addrRegImm:i32:$a)
/*1589*/          0, /*End of Scope*/
/*1590*/        /*Scope*/ 47, /*->1638*/
/*1591*/          OPC_MoveChild, 2,
/*1593*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1596*/          OPC_RecordChild0, // #2 = $base
/*1597*/          OPC_RecordChild1, // #3 = $index
/*1598*/          OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->1618
/*1601*/            OPC_MoveParent,
/*1602*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1604*/            OPC_CheckPredicate, 16, // Predicate_store
/*1606*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1608*/            OPC_EmitMergeInputChains1_0,
/*1609*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32Opnd:f32:$fs, (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1 FGR32Opnd:f32:$fs, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
                  /*SwitchType*/ 17,  MVT::i64,// ->1637
/*1620*/            OPC_MoveParent,
/*1621*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1623*/            OPC_CheckPredicate, 16, // Predicate_store
/*1625*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1627*/            OPC_EmitMergeInputChains1_0,
/*1628*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32Opnd:f32:$fs, (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1_P8 FGR32Opnd:f32:$fs, GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                  0, // EndSwitchType
/*1638*/        0, /*End of Scope*/
/*1639*/      /*Scope*/ 124, /*->1764*/
/*1640*/        OPC_CheckChild1Type, MVT::f64,
/*1642*/        OPC_Scope, 55, /*->1699*/ // 2 children in Scope
/*1644*/          OPC_RecordChild2, // #2 = $a
/*1645*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1647*/          OPC_CheckPredicate, 16, // Predicate_store
/*1649*/          OPC_Scope, 15, /*->1666*/ // 3 children in Scope
/*1651*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1653*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1656*/            OPC_EmitMergeInputChains1_0,
/*1657*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164_P8 f64:f64:$v, addrRegImm:i64:$a)
/*1666*/          /*Scope*/ 15, /*->1682*/
/*1667*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1669*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1672*/            OPC_EmitMergeInputChains1_0,
/*1673*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164 f64:f64:$v, addrRegImm:i32:$a)
/*1682*/          /*Scope*/ 15, /*->1698*/
/*1683*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1685*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1688*/            OPC_EmitMergeInputChains1_0,
/*1689*/            OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (PseudoSDC1 f64:f64:$v, addrRegImm:i32:$a)
/*1698*/          0, /*End of Scope*/
/*1699*/        /*Scope*/ 63, /*->1763*/
/*1700*/          OPC_MoveChild, 2,
/*1702*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1705*/          OPC_RecordChild0, // #2 = $base
/*1706*/          OPC_RecordChild1, // #3 = $index
/*1707*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1743
/*1710*/            OPC_MoveParent,
/*1711*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1713*/            OPC_CheckPredicate, 16, // Predicate_store
/*1715*/            OPC_Scope, 12, /*->1729*/ // 2 children in Scope
/*1717*/              OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1719*/              OPC_EmitMergeInputChains1_0,
/*1720*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64Opnd:f64:$fs, (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC1 AFGR64Opnd:f64:$fs, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1729*/            /*Scope*/ 12, /*->1742*/
/*1730*/              OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1732*/              OPC_EmitMergeInputChains1_0,
/*1733*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64Opnd:f64:$fs, (add:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC164 FGR64Opnd:f64:$fs, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*1742*/            0, /*End of Scope*/
                  /*SwitchType*/ 17,  MVT::i64,// ->1762
/*1745*/            OPC_MoveParent,
/*1746*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1748*/            OPC_CheckPredicate, 16, // Predicate_store
/*1750*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1752*/            OPC_EmitMergeInputChains1_0,
/*1753*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64Opnd:f64:$fs, (add:i64 GPR64Opnd:i64:$base, GPR64Opnd:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SDXC164_P8 FGR64Opnd:f64:$fs, GPR64Opnd:i64:$base, GPR64Opnd:i64:$index)
                  0, // EndSwitchType
/*1763*/        0, /*End of Scope*/
/*1764*/      0, /*End of Scope*/
/*1765*/    /*Scope*/ 52, /*->1818*/
/*1766*/      OPC_MoveChild, 1,
/*1768*/      OPC_CheckInteger, 0, 
/*1770*/      OPC_CheckType, MVT::i32,
/*1772*/      OPC_MoveParent,
/*1773*/      OPC_RecordChild2, // #1 = $dst
/*1774*/      OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1776*/      OPC_CheckPredicate, 16, // Predicate_store
/*1778*/      OPC_Scope, 18, /*->1798*/ // 2 children in Scope
/*1780*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1782*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1785*/        OPC_EmitMergeInputChains1_0,
/*1786*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1789*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*1798*/      /*Scope*/ 18, /*->1817*/
/*1799*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1801*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1804*/        OPC_EmitMergeInputChains1_0,
/*1805*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1808*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*1817*/      0, /*End of Scope*/
/*1818*/    /*Scope*/ 102|128,4/*614*/, /*->2434*/
/*1820*/      OPC_RecordChild1, // #1 = $r
/*1821*/      OPC_Scope, 57|128,1/*185*/, /*->2009*/ // 10 children in Scope
/*1824*/        OPC_CheckChild1Type, MVT::i32,
/*1826*/        OPC_RecordChild2, // #2 = $addr
/*1827*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1829*/        OPC_Scope, 42, /*->1873*/ // 4 children in Scope
/*1831*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1833*/          OPC_Scope, 18, /*->1853*/ // 2 children in Scope
/*1835*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1837*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1839*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1842*/            OPC_EmitMergeInputChains1_0,
/*1843*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (SbRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1853*/          /*Scope*/ 18, /*->1872*/
/*1854*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1856*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1858*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1861*/            OPC_EmitMergeInputChains1_0,
/*1862*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ShRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (ShRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1872*/          0, /*End of Scope*/
/*1873*/        /*Scope*/ 18, /*->1892*/
/*1874*/          OPC_CheckPredicate, 16, // Predicate_store
/*1876*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1878*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1881*/          OPC_EmitMergeInputChains1_0,
/*1882*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SwRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1892*/        /*Scope*/ 78, /*->1971*/
/*1893*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1895*/          OPC_Scope, 36, /*->1933*/ // 2 children in Scope
/*1897*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1899*/            OPC_Scope, 15, /*->1916*/ // 2 children in Scope
/*1901*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1903*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1906*/              OPC_EmitMergeInputChains1_0,
/*1907*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB GPR32Opnd:i32:$rt, addr:i32:$addr)
/*1916*/            /*Scope*/ 15, /*->1932*/
/*1917*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1919*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1922*/              OPC_EmitMergeInputChains1_0,
/*1923*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*1932*/            0, /*End of Scope*/
/*1933*/          /*Scope*/ 36, /*->1970*/
/*1934*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1936*/            OPC_Scope, 15, /*->1953*/ // 2 children in Scope
/*1938*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1940*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1943*/              OPC_EmitMergeInputChains1_0,
/*1944*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH GPR32Opnd:i32:$rt, addr:i32:$addr)
/*1953*/            /*Scope*/ 15, /*->1969*/
/*1954*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1956*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1959*/              OPC_EmitMergeInputChains1_0,
/*1960*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*1969*/            0, /*End of Scope*/
/*1970*/          0, /*End of Scope*/
/*1971*/        /*Scope*/ 36, /*->2008*/
/*1972*/          OPC_CheckPredicate, 16, // Predicate_store
/*1974*/          OPC_Scope, 15, /*->1991*/ // 2 children in Scope
/*1976*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1978*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1981*/            OPC_EmitMergeInputChains1_0,
/*1982*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW GPR32Opnd:i32:$rt, addr:i32:$addr)
/*1991*/          /*Scope*/ 15, /*->2007*/
/*1992*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1994*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1997*/            OPC_EmitMergeInputChains1_0,
/*1998*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR32Opnd:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*2007*/          0, /*End of Scope*/
/*2008*/        0, /*End of Scope*/
/*2009*/      /*Scope*/ 41, /*->2051*/
/*2010*/        OPC_CheckChild1Type, MVT::f32,
/*2012*/        OPC_RecordChild2, // #2 = $addr
/*2013*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2015*/        OPC_CheckPredicate, 16, // Predicate_store
/*2017*/        OPC_Scope, 15, /*->2034*/ // 2 children in Scope
/*2019*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2021*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2024*/          OPC_EmitMergeInputChains1_0,
/*2025*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32Opnd:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1_P8 FGR32Opnd:f32:$rt, addrDefault:i64:$addr)
/*2034*/        /*Scope*/ 15, /*->2050*/
/*2035*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2037*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2040*/          OPC_EmitMergeInputChains1_0,
/*2041*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32Opnd:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1 FGR32Opnd:f32:$rt, addrDefault:i32:$addr)
/*2050*/        0, /*End of Scope*/
/*2051*/      /*Scope*/ 57, /*->2109*/
/*2052*/        OPC_CheckChild1Type, MVT::f64,
/*2054*/        OPC_RecordChild2, // #2 = $addr
/*2055*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2057*/        OPC_CheckPredicate, 16, // Predicate_store
/*2059*/        OPC_Scope, 15, /*->2076*/ // 3 children in Scope
/*2061*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2063*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2066*/          OPC_EmitMergeInputChains1_0,
/*2067*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64Opnd:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164_P8 FGR64Opnd:f64:$rt, addrDefault:i64:$addr)
/*2076*/        /*Scope*/ 15, /*->2092*/
/*2077*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2079*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2082*/          OPC_EmitMergeInputChains1_0,
/*2083*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64Opnd:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164 FGR64Opnd:f64:$rt, addrDefault:i32:$addr)
/*2092*/        /*Scope*/ 15, /*->2108*/
/*2093*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2095*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2098*/          OPC_EmitMergeInputChains1_0,
/*2099*/          OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st AFGR64Opnd:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (PseudoSDC1 AFGR64Opnd:f64:$rt, addrDefault:i32:$addr)
/*2108*/        0, /*End of Scope*/
/*2109*/      /*Scope*/ 32|128,1/*160*/, /*->2271*/
/*2111*/        OPC_CheckChild1Type, MVT::i64,
/*2113*/        OPC_RecordChild2, // #2 = $addr
/*2114*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2116*/        OPC_Scope, 115, /*->2233*/ // 2 children in Scope
/*2118*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*2120*/          OPC_Scope, 36, /*->2158*/ // 3 children in Scope
/*2122*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*2124*/            OPC_Scope, 15, /*->2141*/ // 2 children in Scope
/*2126*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2128*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2131*/              OPC_EmitMergeInputChains1_0,
/*2132*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2141*/            /*Scope*/ 15, /*->2157*/
/*2142*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2144*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2147*/              OPC_EmitMergeInputChains1_0,
/*2148*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2157*/            0, /*End of Scope*/
/*2158*/          /*Scope*/ 36, /*->2195*/
/*2159*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*2161*/            OPC_Scope, 15, /*->2178*/ // 2 children in Scope
/*2163*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2165*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2168*/              OPC_EmitMergeInputChains1_0,
/*2169*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2178*/            /*Scope*/ 15, /*->2194*/
/*2179*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2181*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2184*/              OPC_EmitMergeInputChains1_0,
/*2185*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2194*/            0, /*End of Scope*/
/*2195*/          /*Scope*/ 36, /*->2232*/
/*2196*/            OPC_CheckPredicate, 20, // Predicate_truncstorei32
/*2198*/            OPC_Scope, 15, /*->2215*/ // 2 children in Scope
/*2200*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2202*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2205*/              OPC_EmitMergeInputChains1_0,
/*2206*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2215*/            /*Scope*/ 15, /*->2231*/
/*2216*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2218*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2221*/              OPC_EmitMergeInputChains1_0,
/*2222*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2231*/            0, /*End of Scope*/
/*2232*/          0, /*End of Scope*/
/*2233*/        /*Scope*/ 36, /*->2270*/
/*2234*/          OPC_CheckPredicate, 16, // Predicate_store
/*2236*/          OPC_Scope, 15, /*->2253*/ // 2 children in Scope
/*2238*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2240*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2243*/            OPC_EmitMergeInputChains1_0,
/*2244*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD GPR64Opnd:i64:$rt, addr:i32:$addr)
/*2253*/          /*Scope*/ 15, /*->2269*/
/*2254*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2256*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2259*/            OPC_EmitMergeInputChains1_0,
/*2260*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR64Opnd:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*2269*/          0, /*End of Scope*/
/*2270*/        0, /*End of Scope*/
/*2271*/      /*Scope*/ 22, /*->2294*/
/*2272*/        OPC_CheckChild1Type, MVT::v16i8,
/*2274*/        OPC_RecordChild2, // #2 = $addr
/*2275*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2277*/        OPC_CheckPredicate, 16, // Predicate_store
/*2279*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*2281*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2284*/        OPC_EmitMergeInputChains1_0,
/*2285*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ST_B), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st MSA128:v16i8:$wd, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (ST_B MSA128:v16i8:$wd, addr:i32:$addr)
/*2294*/      /*Scope*/ 22, /*->2317*/
/*2295*/        OPC_CheckChild1Type, MVT::v8i16,
/*2297*/        OPC_RecordChild2, // #2 = $addr
/*2298*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2300*/        OPC_CheckPredicate, 16, // Predicate_store
/*2302*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*2304*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2307*/        OPC_EmitMergeInputChains1_0,
/*2308*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ST_H), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st MSA128:v8i16:$wd, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (ST_H MSA128:v8i16:$wd, addr:i32:$addr)
/*2317*/      /*Scope*/ 22, /*->2340*/
/*2318*/        OPC_CheckChild1Type, MVT::v4i32,
/*2320*/        OPC_RecordChild2, // #2 = $addr
/*2321*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2323*/        OPC_CheckPredicate, 16, // Predicate_store
/*2325*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*2327*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2330*/        OPC_EmitMergeInputChains1_0,
/*2331*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ST_W), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st MSA128:v4i32:$wd, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (ST_W MSA128:v4i32:$wd, addr:i32:$addr)
/*2340*/      /*Scope*/ 22, /*->2363*/
/*2341*/        OPC_CheckChild1Type, MVT::v2i64,
/*2343*/        OPC_RecordChild2, // #2 = $addr
/*2344*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2346*/        OPC_CheckPredicate, 16, // Predicate_store
/*2348*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasMSA())
/*2350*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2353*/        OPC_EmitMergeInputChains1_0,
/*2354*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ST_D), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st MSA128:v2i64:$wd, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (ST_D MSA128:v2i64:$wd, addr:i32:$addr)
/*2363*/      /*Scope*/ 34, /*->2398*/
/*2364*/        OPC_CheckChild1Type, MVT::v2i16,
/*2366*/        OPC_RecordChild2, // #2 = $a
/*2367*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2369*/        OPC_CheckPredicate, 16, // Predicate_store
/*2371*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2373*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2376*/        OPC_EmitMergeInputChains1_0,
/*2377*/        OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*2380*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2389*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPR:v2i16:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPR:v2i16:$val, GPR32:i32), addr:i32:$a)
/*2398*/      /*Scope*/ 34, /*->2433*/
/*2399*/        OPC_CheckChild1Type, MVT::v4i8,
/*2401*/        OPC_RecordChild2, // #2 = $a
/*2402*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2404*/        OPC_CheckPredicate, 16, // Predicate_store
/*2406*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2408*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2411*/        OPC_EmitMergeInputChains1_0,
/*2412*/        OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*2415*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2424*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPR:v4i8:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPR:v4i8:$val, GPR32:i32), addr:i32:$a)
/*2433*/      0, /*End of Scope*/
/*2434*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 57,  TARGET_VAL(MipsISD::ExtractLOHI),// ->2495
/*2438*/    OPC_RecordChild0, // #0 = $ac
/*2439*/    OPC_RecordChild1, // #1 = $lohi_idx
/*2440*/    OPC_MoveChild, 1,
/*2442*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2445*/    OPC_MoveParent,
/*2446*/    OPC_SwitchType /*2 cases */, 30,  MVT::i32,// ->2479
/*2449*/      OPC_Scope, 13, /*->2464*/ // 2 children in Scope
/*2451*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2453*/        OPC_EmitConvertToTarget, 1,
/*2455*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACC64DSP:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 26
                // Dst: (EXTRACT_SUBREG:i32 ACC64DSP:Untyped:$ac, (imm:i32):$lohi_idx)
/*2464*/      /*Scope*/ 13, /*->2478*/
/*2465*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2467*/        OPC_EmitConvertToTarget, 1,
/*2469*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACC64:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
                // Dst: (EXTRACT_SUBREG:i32 ACC64:Untyped:$ac, (imm:i32):$lohi_idx)
/*2478*/      0, /*End of Scope*/
            /*SwitchType*/ 13,  MVT::i64,// ->2494
/*2481*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2483*/      OPC_EmitConvertToTarget, 1,
/*2485*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (ExtractLOHI:i64 ACC128:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
              // Dst: (EXTRACT_SUBREG:i64 ACC128:Untyped:$ac, (imm:i32):$lohi_idx)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Mult),// ->2546
/*2498*/    OPC_RecordChild0, // #0 = $rs
/*2499*/    OPC_Scope, 29, /*->2530*/ // 2 children in Scope
/*2501*/      OPC_CheckChild0Type, MVT::i32,
/*2503*/      OPC_RecordChild1, // #1 = $rt
/*2504*/      OPC_Scope, 11, /*->2517*/ // 2 children in Scope
/*2506*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2508*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULT_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 23
                // Dst: (MULT_DSP:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*2517*/      /*Scope*/ 11, /*->2529*/
/*2518*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2520*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULT), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULT:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*2529*/      0, /*End of Scope*/
/*2530*/    /*Scope*/ 14, /*->2545*/
/*2531*/      OPC_CheckChild0Type, MVT::i64,
/*2533*/      OPC_RecordChild1, // #1 = $rt
/*2534*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2536*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULT), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMult:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULT:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*2545*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Multu),// ->2597
/*2549*/    OPC_RecordChild0, // #0 = $rs
/*2550*/    OPC_Scope, 29, /*->2581*/ // 2 children in Scope
/*2552*/      OPC_CheckChild0Type, MVT::i32,
/*2554*/      OPC_RecordChild1, // #1 = $rt
/*2555*/      OPC_Scope, 11, /*->2568*/ // 2 children in Scope
/*2557*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2559*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULTU_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 23
                // Dst: (MULTU_DSP:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*2568*/      /*Scope*/ 11, /*->2580*/
/*2569*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2571*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULTu), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULTu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*2580*/      0, /*End of Scope*/
/*2581*/    /*Scope*/ 14, /*->2596*/
/*2582*/      OPC_CheckChild0Type, MVT::i64,
/*2584*/      OPC_RecordChild1, // #1 = $rt
/*2585*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2587*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULTu), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMultu:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULTu:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*2596*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAdd),// ->2631
/*2600*/    OPC_RecordChild0, // #0 = $rs
/*2601*/    OPC_RecordChild1, // #1 = $rt
/*2602*/    OPC_RecordChild2, // #2 = $acin
/*2603*/    OPC_Scope, 12, /*->2617*/ // 2 children in Scope
/*2605*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2607*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 23
              // Dst: (MADD_DSP:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
/*2617*/    /*Scope*/ 12, /*->2630*/
/*2618*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2620*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADD), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADD:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin)
/*2630*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAddu),// ->2665
/*2634*/    OPC_RecordChild0, // #0 = $rs
/*2635*/    OPC_RecordChild1, // #1 = $rt
/*2636*/    OPC_RecordChild2, // #2 = $acin
/*2637*/    OPC_Scope, 12, /*->2651*/ // 2 children in Scope
/*2639*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2641*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 23
              // Dst: (MADDU_DSP:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
/*2651*/    /*Scope*/ 12, /*->2664*/
/*2652*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2654*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADDU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADDU:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin)
/*2664*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSub),// ->2699
/*2668*/    OPC_RecordChild0, // #0 = $rs
/*2669*/    OPC_RecordChild1, // #1 = $rt
/*2670*/    OPC_RecordChild2, // #2 = $acin
/*2671*/    OPC_Scope, 12, /*->2685*/ // 2 children in Scope
/*2673*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2675*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 23
              // Dst: (MSUB_DSP:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
/*2685*/    /*Scope*/ 12, /*->2698*/
/*2686*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2688*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUB), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUB:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin)
/*2698*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSubu),// ->2733
/*2702*/    OPC_RecordChild0, // #0 = $rs
/*2703*/    OPC_RecordChild1, // #1 = $rt
/*2704*/    OPC_RecordChild2, // #2 = $acin
/*2705*/    OPC_Scope, 12, /*->2719*/ // 2 children in Scope
/*2707*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2709*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 23
              // Dst: (MSUBU_DSP:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
/*2719*/    /*Scope*/ 12, /*->2732*/
/*2720*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*2722*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUBU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUBU:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64:Untyped:$acin)
/*2732*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 99,  TARGET_VAL(MipsISD::LWL),// ->2835
/*2736*/    OPC_RecordMemRef,
/*2737*/    OPC_RecordNode,   // #0 = 'MipsLWL' chained node
/*2738*/    OPC_RecordChild1, // #1 = $addr
/*2739*/    OPC_RecordChild2, // #2 = $src
/*2740*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2796
/*2743*/      OPC_Scope, 16, /*->2761*/ // 3 children in Scope
/*2745*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*2747*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2750*/        OPC_EmitMergeInputChains1_0,
/*2751*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWL:i32 addr:i32:$addr, GPR32Opnd:i32:$src)
/*2761*/      /*Scope*/ 16, /*->2778*/
/*2762*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2764*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2767*/        OPC_EmitMergeInputChains1_0,
/*2768*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWL_P8:i32 addr:i64:$addr, GPR32Opnd:i32:$src)
/*2778*/      /*Scope*/ 16, /*->2795*/
/*2779*/        OPC_CheckPatternPredicate, 12, // (Subtarget.inMicroMipsMode())
/*2781*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectIntAddrMM:$addr #3 #4
/*2784*/        OPC_EmitMergeInputChains1_0,
/*2785*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_MM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addrimm12:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWL_MM:i32 addrimm12:i32:$addr, GPR32Opnd:i32:$src)
/*2795*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2834
/*2798*/      OPC_Scope, 16, /*->2816*/ // 2 children in Scope
/*2800*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*2802*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2805*/        OPC_EmitMergeInputChains1_0,
/*2806*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWL64:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*2816*/      /*Scope*/ 16, /*->2833*/
/*2817*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2819*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2822*/        OPC_EmitMergeInputChains1_0,
/*2823*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWL64_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*2833*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 99,  TARGET_VAL(MipsISD::LWR),// ->2937
/*2838*/    OPC_RecordMemRef,
/*2839*/    OPC_RecordNode,   // #0 = 'MipsLWR' chained node
/*2840*/    OPC_RecordChild1, // #1 = $addr
/*2841*/    OPC_RecordChild2, // #2 = $src
/*2842*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2898
/*2845*/      OPC_Scope, 16, /*->2863*/ // 3 children in Scope
/*2847*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*2849*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2852*/        OPC_EmitMergeInputChains1_0,
/*2853*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWR:i32 addr:i32:$addr, GPR32Opnd:i32:$src)
/*2863*/      /*Scope*/ 16, /*->2880*/
/*2864*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2866*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2869*/        OPC_EmitMergeInputChains1_0,
/*2870*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWR_P8:i32 addr:i64:$addr, GPR32Opnd:i32:$src)
/*2880*/      /*Scope*/ 16, /*->2897*/
/*2881*/        OPC_CheckPatternPredicate, 12, // (Subtarget.inMicroMipsMode())
/*2883*/        OPC_CheckComplexPat, /*CP*/4, /*#*/1, // selectIntAddrMM:$addr #3 #4
/*2886*/        OPC_EmitMergeInputChains1_0,
/*2887*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_MM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addrimm12:iPTR:$addr, GPR32Opnd:i32:$src) - Complexity = 12
                // Dst: (LWR_MM:i32 addrimm12:i32:$addr, GPR32Opnd:i32:$src)
/*2897*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2936
/*2900*/      OPC_Scope, 16, /*->2918*/ // 2 children in Scope
/*2902*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*2904*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2907*/        OPC_EmitMergeInputChains1_0,
/*2908*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWR64:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*2918*/      /*Scope*/ 16, /*->2935*/
/*2919*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2921*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2924*/        OPC_EmitMergeInputChains1_0,
/*2925*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
                // Dst: (LWR64_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*2935*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 97,  TARGET_VAL(MipsISD::SWL),// ->3037
/*2940*/    OPC_RecordMemRef,
/*2941*/    OPC_RecordNode,   // #0 = 'MipsSWL' chained node
/*2942*/    OPC_RecordChild1, // #1 = $rt
/*2943*/    OPC_Scope, 53, /*->2998*/ // 2 children in Scope
/*2945*/      OPC_CheckChild1Type, MVT::i32,
/*2947*/      OPC_RecordChild2, // #2 = $addr
/*2948*/      OPC_Scope, 15, /*->2965*/ // 3 children in Scope
/*2950*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*2952*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2955*/        OPC_EmitMergeInputChains1_0,
/*2956*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL GPR32Opnd:i32:$rt, addr:i32:$addr)
/*2965*/      /*Scope*/ 15, /*->2981*/
/*2966*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2968*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2971*/        OPC_EmitMergeInputChains1_0,
/*2972*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*2981*/      /*Scope*/ 15, /*->2997*/
/*2982*/        OPC_CheckPatternPredicate, 12, // (Subtarget.inMicroMipsMode())
/*2984*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectIntAddrMM:$addr #3 #4
/*2987*/        OPC_EmitMergeInputChains1_0,
/*2988*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_MM), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR32Opnd:i32:$rt, addrimm12:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_MM GPR32Opnd:i32:$rt, addrimm12:i32:$addr)
/*2997*/      0, /*End of Scope*/
/*2998*/    /*Scope*/ 37, /*->3036*/
/*2999*/      OPC_CheckChild1Type, MVT::i64,
/*3001*/      OPC_RecordChild2, // #2 = $addr
/*3002*/      OPC_Scope, 15, /*->3019*/ // 2 children in Scope
/*3004*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*3006*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3009*/        OPC_EmitMergeInputChains1_0,
/*3010*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*3019*/      /*Scope*/ 15, /*->3035*/
/*3020*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3022*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3025*/        OPC_EmitMergeInputChains1_0,
/*3026*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*3035*/      0, /*End of Scope*/
/*3036*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97,  TARGET_VAL(MipsISD::SWR),// ->3137
/*3040*/    OPC_RecordMemRef,
/*3041*/    OPC_RecordNode,   // #0 = 'MipsSWR' chained node
/*3042*/    OPC_RecordChild1, // #1 = $rt
/*3043*/    OPC_Scope, 53, /*->3098*/ // 2 children in Scope
/*3045*/      OPC_CheckChild1Type, MVT::i32,
/*3047*/      OPC_RecordChild2, // #2 = $addr
/*3048*/      OPC_Scope, 15, /*->3065*/ // 3 children in Scope
/*3050*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*3052*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3055*/        OPC_EmitMergeInputChains1_0,
/*3056*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR GPR32Opnd:i32:$rt, addr:i32:$addr)
/*3065*/      /*Scope*/ 15, /*->3081*/
/*3066*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3068*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3071*/        OPC_EmitMergeInputChains1_0,
/*3072*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR32Opnd:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_P8 GPR32Opnd:i32:$rt, addr:i64:$addr)
/*3081*/      /*Scope*/ 15, /*->3097*/
/*3082*/        OPC_CheckPatternPredicate, 12, // (Subtarget.inMicroMipsMode())
/*3084*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // selectIntAddrMM:$addr #3 #4
/*3087*/        OPC_EmitMergeInputChains1_0,
/*3088*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_MM), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR32Opnd:i32:$rt, addrimm12:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_MM GPR32Opnd:i32:$rt, addrimm12:i32:$addr)
/*3097*/      0, /*End of Scope*/
/*3098*/    /*Scope*/ 37, /*->3136*/
/*3099*/      OPC_CheckChild1Type, MVT::i64,
/*3101*/      OPC_RecordChild2, // #2 = $addr
/*3102*/      OPC_Scope, 15, /*->3119*/ // 2 children in Scope
/*3104*/        OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*3106*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3109*/        OPC_EmitMergeInputChains1_0,
/*3110*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64 GPR64Opnd:i64:$rt, addr:i32:$addr)
/*3119*/      /*Scope*/ 15, /*->3135*/
/*3120*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3122*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3125*/        OPC_EmitMergeInputChains1_0,
/*3126*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*3135*/      0, /*End of Scope*/
/*3136*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDL),// ->3182
/*3140*/    OPC_RecordMemRef,
/*3141*/    OPC_RecordNode,   // #0 = 'MipsLDL' chained node
/*3142*/    OPC_RecordChild1, // #1 = $addr
/*3143*/    OPC_RecordChild2, // #2 = $src
/*3144*/    OPC_CheckType, MVT::i64,
/*3146*/    OPC_Scope, 16, /*->3164*/ // 2 children in Scope
/*3148*/      OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*3150*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*3153*/      OPC_EmitMergeInputChains1_0,
/*3154*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDL:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*3164*/    /*Scope*/ 16, /*->3181*/
/*3165*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3167*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*3170*/      OPC_EmitMergeInputChains1_0,
/*3171*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDL_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*3181*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDR),// ->3227
/*3185*/    OPC_RecordMemRef,
/*3186*/    OPC_RecordNode,   // #0 = 'MipsLDR' chained node
/*3187*/    OPC_RecordChild1, // #1 = $addr
/*3188*/    OPC_RecordChild2, // #2 = $src
/*3189*/    OPC_CheckType, MVT::i64,
/*3191*/    OPC_Scope, 16, /*->3209*/ // 2 children in Scope
/*3193*/      OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*3195*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*3198*/      OPC_EmitMergeInputChains1_0,
/*3199*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDR:i64 addr:i32:$addr, GPR64Opnd:i64:$src)
/*3209*/    /*Scope*/ 16, /*->3226*/
/*3210*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3212*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*3215*/      OPC_EmitMergeInputChains1_0,
/*3216*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, GPR64Opnd:i64:$src) - Complexity = 12
              // Dst: (LDR_P8:i64 addr:i64:$addr, GPR64Opnd:i64:$src)
/*3226*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDL),// ->3270
/*3230*/    OPC_RecordMemRef,
/*3231*/    OPC_RecordNode,   // #0 = 'MipsSDL' chained node
/*3232*/    OPC_RecordChild1, // #1 = $rt
/*3233*/    OPC_CheckChild1Type, MVT::i64,
/*3235*/    OPC_RecordChild2, // #2 = $addr
/*3236*/    OPC_Scope, 15, /*->3253*/ // 2 children in Scope
/*3238*/      OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*3240*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3243*/      OPC_EmitMergeInputChains1_0,
/*3244*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL GPR64Opnd:i64:$rt, addr:i32:$addr)
/*3253*/    /*Scope*/ 15, /*->3269*/
/*3254*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3256*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3259*/      OPC_EmitMergeInputChains1_0,
/*3260*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*3269*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDR),// ->3313
/*3273*/    OPC_RecordMemRef,
/*3274*/    OPC_RecordNode,   // #0 = 'MipsSDR' chained node
/*3275*/    OPC_RecordChild1, // #1 = $rt
/*3276*/    OPC_CheckChild1Type, MVT::i64,
/*3278*/    OPC_RecordChild2, // #2 = $addr
/*3279*/    OPC_Scope, 15, /*->3296*/ // 2 children in Scope
/*3281*/      OPC_CheckPatternPredicate, 11, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode())
/*3283*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3286*/      OPC_EmitMergeInputChains1_0,
/*3287*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR GPR64Opnd:i64:$rt, addr:i32:$addr)
/*3296*/    /*Scope*/ 15, /*->3312*/
/*3297*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3299*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3302*/      OPC_EmitMergeInputChains1_0,
/*3303*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR GPR64Opnd:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR_P8 GPR64Opnd:i64:$rt, addr:i64:$addr)
/*3312*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(ISD::FrameIndex),// ->3370
/*3316*/    OPC_RecordNode,   // #0 = $addr
/*3317*/    OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->3353
/*3320*/      OPC_Scope, 15, /*->3337*/ // 2 children in Scope
/*3322*/        OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*3324*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // selectAddr16:$addr #1 #2 #3
/*3327*/        OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRyOffMemX16), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: addr16:i32:$addr - Complexity = 12
                // Dst: (AddiuRxRyOffMemX16:i32 addr16:i32:$addr)
/*3337*/      /*Scope*/ 14, /*->3352*/
/*3338*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*3340*/        OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3343*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*3352*/      0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::i64,// ->3369
/*3355*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*3357*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3360*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: addr:i64:$addr - Complexity = 9
              // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37|128,8/*1061*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->4435
/*3374*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*3375*/    OPC_MoveChild, 1,
/*3377*/    OPC_Scope, 44, /*->3423*/ // 50 children in Scope
/*3379*/      OPC_CheckInteger, 22|128,9/*1174*/, 
/*3382*/      OPC_MoveParent,
/*3383*/      OPC_RecordChild2, // #1 = $rt
/*3384*/      OPC_RecordChild3, // #2 = $rs_sa
/*3385*/      OPC_Scope, 22, /*->3409*/ // 2 children in Scope
/*3387*/        OPC_MoveChild, 3,
/*3389*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3392*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3394*/        OPC_MoveParent,
/*3395*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3397*/        OPC_EmitMergeInputChains1_0,
/*3398*/        OPC_EmitConvertToTarget, 2,
/*3400*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 1174:iPTR, GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_W:i32 GPR32Opnd:i32:$rt, (imm:i32):$rs_sa)
/*3409*/      /*Scope*/ 12, /*->3422*/
/*3410*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3412*/        OPC_EmitMergeInputChains1_0,
/*3413*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 1174:iPTR, GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_W:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs_sa)
/*3422*/      0, /*End of Scope*/
/*3423*/    /*Scope*/ 26, /*->3450*/
/*3424*/      OPC_CheckInteger, 15|128,9/*1167*/, 
/*3427*/      OPC_MoveParent,
/*3428*/      OPC_RecordChild2, // #1 = $mask
/*3429*/      OPC_MoveChild, 2,
/*3431*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3434*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*3436*/      OPC_MoveParent,
/*3437*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3439*/      OPC_EmitMergeInputChains1_0,
/*3440*/      OPC_EmitConvertToTarget, 1,
/*3442*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RDDSP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1167:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (RDDSP:i32 (imm:i32):$mask)
/*3450*/    /*Scope*/ 18, /*->3469*/
/*3451*/      OPC_CheckInteger, 42|128,8/*1066*/, 
/*3454*/      OPC_MoveParent,
/*3455*/      OPC_RecordChild2, // #1 = $rs
/*3456*/      OPC_RecordChild3, // #2 = $rt
/*3457*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3459*/      OPC_EmitMergeInputChains1_0,
/*3460*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1066:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (ADDQ_S_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*3469*/    /*Scope*/ 18, /*->3488*/
/*3470*/      OPC_CheckInteger, 32|128,9/*1184*/, 
/*3473*/      OPC_MoveParent,
/*3474*/      OPC_RecordChild2, // #1 = $rs
/*3475*/      OPC_RecordChild3, // #2 = $rt
/*3476*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3478*/      OPC_EmitMergeInputChains1_0,
/*3479*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1184:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (SUBQ_S_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*3488*/    /*Scope*/ 16, /*->3505*/
/*3489*/      OPC_CheckInteger, 39|128,8/*1063*/, 
/*3492*/      OPC_MoveParent,
/*3493*/      OPC_RecordChild2, // #1 = $rt
/*3494*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3496*/      OPC_EmitMergeInputChains1_0,
/*3497*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1063:iPTR, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (ABSQ_S_W:i32 GPR32Opnd:i32:$rt)
/*3505*/    /*Scope*/ 18, /*->3524*/
/*3506*/      OPC_CheckInteger, 109|128,8/*1133*/, 
/*3509*/      OPC_MoveParent,
/*3510*/      OPC_RecordChild2, // #1 = $rs
/*3511*/      OPC_RecordChild3, // #2 = $rt
/*3512*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3514*/      OPC_EmitMergeInputChains1_0,
/*3515*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1133:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHL:i32 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*3524*/    /*Scope*/ 18, /*->3543*/
/*3525*/      OPC_CheckInteger, 110|128,8/*1134*/, 
/*3528*/      OPC_MoveParent,
/*3529*/      OPC_RecordChild2, // #1 = $rs
/*3530*/      OPC_RecordChild3, // #2 = $rt
/*3531*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3533*/      OPC_EmitMergeInputChains1_0,
/*3534*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1134:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHR:i32 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*3543*/    /*Scope*/ 18, /*->3562*/
/*3544*/      OPC_CheckInteger, 65|128,8/*1089*/, 
/*3547*/      OPC_MoveParent,
/*3548*/      OPC_RecordChild2, // #1 = $rs
/*3549*/      OPC_RecordChild3, // #2 = $rt
/*3550*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3552*/      OPC_EmitMergeInputChains1_0,
/*3553*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1089:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_EQ_QB:i32 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*3562*/    /*Scope*/ 18, /*->3581*/
/*3563*/      OPC_CheckInteger, 67|128,8/*1091*/, 
/*3566*/      OPC_MoveParent,
/*3567*/      OPC_RecordChild2, // #1 = $rs
/*3568*/      OPC_RecordChild3, // #2 = $rt
/*3569*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3571*/      OPC_EmitMergeInputChains1_0,
/*3572*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1091:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LT_QB:i32 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*3581*/    /*Scope*/ 18, /*->3600*/
/*3582*/      OPC_CheckInteger, 66|128,8/*1090*/, 
/*3585*/      OPC_MoveParent,
/*3586*/      OPC_RecordChild2, // #1 = $rs
/*3587*/      OPC_RecordChild3, // #2 = $rt
/*3588*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3590*/      OPC_EmitMergeInputChains1_0,
/*3591*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1090:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LE_QB:i32 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*3600*/    /*Scope*/ 20, /*->3621*/
/*3601*/      OPC_CheckInteger, 96|128,8/*1120*/, 
/*3604*/      OPC_MoveParent,
/*3605*/      OPC_RecordChild2, // #1 = $base
/*3606*/      OPC_CheckChild2Type, MVT::i32,
/*3608*/      OPC_RecordChild3, // #2 = $index
/*3609*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3611*/      OPC_EmitMergeInputChains1_0,
/*3612*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1120:iPTR, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index) - Complexity = 8
              // Dst: (LWX:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*3621*/    /*Scope*/ 20, /*->3642*/
/*3622*/      OPC_CheckInteger, 95|128,8/*1119*/, 
/*3625*/      OPC_MoveParent,
/*3626*/      OPC_RecordChild2, // #1 = $base
/*3627*/      OPC_CheckChild2Type, MVT::i32,
/*3629*/      OPC_RecordChild3, // #2 = $index
/*3630*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3632*/      OPC_EmitMergeInputChains1_0,
/*3633*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1119:iPTR, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index) - Complexity = 8
              // Dst: (LHX:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*3642*/    /*Scope*/ 20, /*->3663*/
/*3643*/      OPC_CheckInteger, 94|128,8/*1118*/, 
/*3646*/      OPC_MoveParent,
/*3647*/      OPC_RecordChild2, // #1 = $base
/*3648*/      OPC_CheckChild2Type, MVT::i32,
/*3650*/      OPC_RecordChild3, // #2 = $index
/*3651*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3653*/      OPC_EmitMergeInputChains1_0,
/*3654*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1118:iPTR, GPR32Opnd:i32:$base, GPR32Opnd:i32:$index) - Complexity = 8
              // Dst: (LBUX:i32 GPR32Opnd:i32:$base, GPR32Opnd:i32:$index)
/*3663*/    /*Scope*/ 18, /*->3682*/
/*3664*/      OPC_CheckInteger, 93|128,8/*1117*/, 
/*3667*/      OPC_MoveParent,
/*3668*/      OPC_RecordChild2, // #1 = $src
/*3669*/      OPC_RecordChild3, // #2 = $rs
/*3670*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3672*/      OPC_EmitMergeInputChains1_0,
/*3673*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INSV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1117:iPTR, GPR32Opnd:i32:$src, GPR32Opnd:i32:$rs) - Complexity = 8
              // Dst: (INSV:i32 GPR32Opnd:i32:$src, GPR32Opnd:i32:$rs)
/*3682*/    /*Scope*/ 18, /*->3701*/
/*3683*/      OPC_CheckInteger, 62|128,8/*1086*/, 
/*3686*/      OPC_MoveParent,
/*3687*/      OPC_RecordChild2, // #1 = $rs
/*3688*/      OPC_RecordChild3, // #2 = $rt
/*3689*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*3691*/      OPC_EmitMergeInputChains1_0,
/*3692*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1086:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_EQ_QB:i32 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*3701*/    /*Scope*/ 18, /*->3720*/
/*3702*/      OPC_CheckInteger, 64|128,8/*1088*/, 
/*3705*/      OPC_MoveParent,
/*3706*/      OPC_RecordChild2, // #1 = $rs
/*3707*/      OPC_RecordChild3, // #2 = $rt
/*3708*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*3710*/      OPC_EmitMergeInputChains1_0,
/*3711*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1088:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LT_QB:i32 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*3720*/    /*Scope*/ 18, /*->3739*/
/*3721*/      OPC_CheckInteger, 63|128,8/*1087*/, 
/*3724*/      OPC_MoveParent,
/*3725*/      OPC_RecordChild2, // #1 = $rs
/*3726*/      OPC_RecordChild3, // #2 = $rt
/*3727*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*3729*/      OPC_EmitMergeInputChains1_0,
/*3730*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1087:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LE_QB:i32 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*3739*/    /*Scope*/ 18, /*->3758*/
/*3740*/      OPC_CheckInteger, 116|128,8/*1140*/, 
/*3743*/      OPC_MoveParent,
/*3744*/      OPC_RecordChild2, // #1 = $rs
/*3745*/      OPC_RecordChild3, // #2 = $rt
/*3746*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*3748*/      OPC_EmitMergeInputChains1_0,
/*3749*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1140:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (MULQ_S_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*3758*/    /*Scope*/ 18, /*->3777*/
/*3759*/      OPC_CheckInteger, 114|128,8/*1138*/, 
/*3762*/      OPC_MoveParent,
/*3763*/      OPC_RecordChild2, // #1 = $rs
/*3764*/      OPC_RecordChild3, // #2 = $rt
/*3765*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*3767*/      OPC_EmitMergeInputChains1_0,
/*3768*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1138:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (MULQ_RS_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*3777*/    /*Scope*/ 18, /*->3796*/
/*3778*/      OPC_CheckInteger, 47|128,8/*1071*/, 
/*3781*/      OPC_MoveParent,
/*3782*/      OPC_RecordChild2, // #1 = $a
/*3783*/      OPC_RecordChild3, // #2 = $b
/*3784*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3786*/      OPC_EmitMergeInputChains1_0,
/*3787*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1071:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*3796*/    /*Scope*/ 18, /*->3815*/
/*3797*/      OPC_CheckInteger, 54|128,8/*1078*/, 
/*3800*/      OPC_MoveParent,
/*3801*/      OPC_RecordChild2, // #1 = $a
/*3802*/      OPC_RecordChild3, // #2 = $b
/*3803*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3805*/      OPC_EmitMergeInputChains1_0,
/*3806*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1078:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
/*3815*/    /*Scope*/ 12, /*->3828*/
/*3816*/      OPC_CheckInteger, 58|128,8/*1082*/, 
/*3819*/      OPC_MoveParent,
/*3820*/      OPC_EmitMergeInputChains1_0,
/*3821*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BPOSGE32_PSEUDO), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1082:iPTR) - Complexity = 8
              // Dst: (BPOSGE32_PSEUDO:i32)
/*3828*/    /*Scope*/ 44, /*->3873*/
/*3829*/      OPC_CheckInteger, 21|128,9/*1173*/, 
/*3832*/      OPC_MoveParent,
/*3833*/      OPC_RecordChild2, // #1 = $rt
/*3834*/      OPC_RecordChild3, // #2 = $rs_sa
/*3835*/      OPC_Scope, 22, /*->3859*/ // 2 children in Scope
/*3837*/        OPC_MoveChild, 3,
/*3839*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3842*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3844*/        OPC_MoveParent,
/*3845*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3847*/        OPC_EmitMergeInputChains1_0,
/*3848*/        OPC_EmitConvertToTarget, 2,
/*3850*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1173:iPTR, DSPROpnd:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_PH:v2i16 DSPROpnd:v2i16:$rt, (imm:i32):$rs_sa)
/*3859*/      /*Scope*/ 12, /*->3872*/
/*3860*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3862*/        OPC_EmitMergeInputChains1_0,
/*3863*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1173:iPTR, DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_PH:v2i16 DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa)
/*3872*/      0, /*End of Scope*/
/*3873*/    /*Scope*/ 44, /*->3918*/
/*3874*/      OPC_CheckInteger, 19|128,9/*1171*/, 
/*3877*/      OPC_MoveParent,
/*3878*/      OPC_RecordChild2, // #1 = $a
/*3879*/      OPC_RecordChild3, // #2 = $shamt
/*3880*/      OPC_Scope, 22, /*->3904*/ // 2 children in Scope
/*3882*/        OPC_MoveChild, 3,
/*3884*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3887*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3889*/        OPC_MoveParent,
/*3890*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3892*/        OPC_EmitMergeInputChains1_0,
/*3893*/        OPC_EmitConvertToTarget, 2,
/*3895*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1171:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*3904*/      /*Scope*/ 12, /*->3917*/
/*3905*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3907*/        OPC_EmitMergeInputChains1_0,
/*3908*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1171:iPTR, DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_PH:v2i16 DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa)
/*3917*/      0, /*End of Scope*/
/*3918*/    /*Scope*/ 44, /*->3963*/
/*3919*/      OPC_CheckInteger, 20|128,9/*1172*/, 
/*3922*/      OPC_MoveParent,
/*3923*/      OPC_RecordChild2, // #1 = $a
/*3924*/      OPC_RecordChild3, // #2 = $shamt
/*3925*/      OPC_Scope, 22, /*->3949*/ // 2 children in Scope
/*3927*/        OPC_MoveChild, 3,
/*3929*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3932*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*3934*/        OPC_MoveParent,
/*3935*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3937*/        OPC_EmitMergeInputChains1_0,
/*3938*/        OPC_EmitConvertToTarget, 2,
/*3940*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i8 1172:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*3949*/      /*Scope*/ 12, /*->3962*/
/*3950*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3952*/        OPC_EmitMergeInputChains1_0,
/*3953*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i8 1172:iPTR, DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_QB:v4i8 DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa)
/*3962*/      0, /*End of Scope*/
/*3963*/    /*Scope*/ 18, /*->3982*/
/*3964*/      OPC_CheckInteger, 51|128,8/*1075*/, 
/*3967*/      OPC_MoveParent,
/*3968*/      OPC_RecordChild2, // #1 = $rs
/*3969*/      OPC_RecordChild3, // #2 = $rt
/*3970*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3972*/      OPC_EmitMergeInputChains1_0,
/*3973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1075:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_S_QB:v4i8 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*3982*/    /*Scope*/ 18, /*->4001*/
/*3983*/      OPC_CheckInteger, 40|128,9/*1192*/, 
/*3986*/      OPC_MoveParent,
/*3987*/      OPC_RecordChild2, // #1 = $rs
/*3988*/      OPC_RecordChild3, // #2 = $rt
/*3989*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3991*/      OPC_EmitMergeInputChains1_0,
/*3992*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1192:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_S_QB:v4i8 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*4001*/    /*Scope*/ 18, /*->4020*/
/*4002*/      OPC_CheckInteger, 41|128,8/*1065*/, 
/*4005*/      OPC_MoveParent,
/*4006*/      OPC_RecordChild2, // #1 = $rs
/*4007*/      OPC_RecordChild3, // #2 = $rt
/*4008*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4010*/      OPC_EmitMergeInputChains1_0,
/*4011*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1065:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_S_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4020*/    /*Scope*/ 18, /*->4039*/
/*4021*/      OPC_CheckInteger, 31|128,9/*1183*/, 
/*4024*/      OPC_MoveParent,
/*4025*/      OPC_RecordChild2, // #1 = $rs
/*4026*/      OPC_RecordChild3, // #2 = $rt
/*4027*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4029*/      OPC_EmitMergeInputChains1_0,
/*4030*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1183:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_S_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4039*/    /*Scope*/ 16, /*->4056*/
/*4040*/      OPC_CheckInteger, 37|128,8/*1061*/, 
/*4043*/      OPC_MoveParent,
/*4044*/      OPC_RecordChild2, // #1 = $rt
/*4045*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4047*/      OPC_EmitMergeInputChains1_0,
/*4048*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v2i16 1061:iPTR, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (ABSQ_S_PH:v2i16 DSPROpnd:v2i16:$rt)
/*4056*/    /*Scope*/ 18, /*->4075*/
/*4057*/      OPC_CheckInteger, 11|128,9/*1163*/, 
/*4060*/      OPC_MoveParent,
/*4061*/      OPC_RecordChild2, // #1 = $rs
/*4062*/      OPC_RecordChild3, // #2 = $rt
/*4063*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4065*/      OPC_EmitMergeInputChains1_0,
/*4066*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_RS_PH_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1163:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_RS_PH_W:v2i16 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*4075*/    /*Scope*/ 18, /*->4094*/
/*4076*/      OPC_CheckInteger, 12|128,9/*1164*/, 
/*4079*/      OPC_MoveParent,
/*4080*/      OPC_RecordChild2, // #1 = $rs
/*4081*/      OPC_RecordChild3, // #2 = $rt
/*4082*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4084*/      OPC_EmitMergeInputChains1_0,
/*4085*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQU_S_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1164:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQU_S_QB_PH:v4i8 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4094*/    /*Scope*/ 18, /*->4113*/
/*4095*/      OPC_CheckInteger, 111|128,8/*1135*/, 
/*4098*/      OPC_MoveParent,
/*4099*/      OPC_RecordChild2, // #1 = $rs
/*4100*/      OPC_RecordChild3, // #2 = $rt
/*4101*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4103*/      OPC_EmitMergeInputChains1_0,
/*4104*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1135:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBL:v2i16 DSPROpnd:v4i8:$rs, DSPROpnd:v2i16:$rt)
/*4113*/    /*Scope*/ 18, /*->4132*/
/*4114*/      OPC_CheckInteger, 112|128,8/*1136*/, 
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_RecordChild2, // #1 = $rs
/*4119*/      OPC_RecordChild3, // #2 = $rt
/*4120*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4122*/      OPC_EmitMergeInputChains1_0,
/*4123*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1136:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBR:v2i16 DSPROpnd:v4i8:$rs, DSPROpnd:v2i16:$rt)
/*4132*/    /*Scope*/ 18, /*->4151*/
/*4133*/      OPC_CheckInteger, 113|128,8/*1137*/, 
/*4136*/      OPC_MoveParent,
/*4137*/      OPC_RecordChild2, // #1 = $rs
/*4138*/      OPC_RecordChild3, // #2 = $rt
/*4139*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4141*/      OPC_EmitMergeInputChains1_0,
/*4142*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1137:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_RS_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4151*/    /*Scope*/ 18, /*->4170*/
/*4152*/      OPC_CheckInteger, 123|128,8/*1147*/, 
/*4155*/      OPC_MoveParent,
/*4156*/      OPC_RecordChild2, // #1 = $rs
/*4157*/      OPC_RecordChild3, // #2 = $rt
/*4158*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4160*/      OPC_EmitMergeInputChains1_0,
/*4161*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1147:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PICK_QB:v4i8 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*4170*/    /*Scope*/ 18, /*->4189*/
/*4171*/      OPC_CheckInteger, 122|128,8/*1146*/, 
/*4174*/      OPC_MoveParent,
/*4175*/      OPC_RecordChild2, // #1 = $rs
/*4176*/      OPC_RecordChild3, // #2 = $rt
/*4177*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4179*/      OPC_EmitMergeInputChains1_0,
/*4180*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1146:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (PICK_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4189*/    /*Scope*/ 18, /*->4208*/
/*4190*/      OPC_CheckInteger, 48|128,8/*1072*/, 
/*4193*/      OPC_MoveParent,
/*4194*/      OPC_RecordChild2, // #1 = $rs
/*4195*/      OPC_RecordChild3, // #2 = $rt
/*4196*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4198*/      OPC_EmitMergeInputChains1_0,
/*4199*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1072:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4208*/    /*Scope*/ 18, /*->4227*/
/*4209*/      OPC_CheckInteger, 50|128,8/*1074*/, 
/*4212*/      OPC_MoveParent,
/*4213*/      OPC_RecordChild2, // #1 = $rs
/*4214*/      OPC_RecordChild3, // #2 = $rt
/*4215*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4217*/      OPC_EmitMergeInputChains1_0,
/*4218*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1074:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_S_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4227*/    /*Scope*/ 18, /*->4246*/
/*4228*/      OPC_CheckInteger, 37|128,9/*1189*/, 
/*4231*/      OPC_MoveParent,
/*4232*/      OPC_RecordChild2, // #1 = $rs
/*4233*/      OPC_RecordChild3, // #2 = $rt
/*4234*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4236*/      OPC_EmitMergeInputChains1_0,
/*4237*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1189:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4246*/    /*Scope*/ 18, /*->4265*/
/*4247*/      OPC_CheckInteger, 39|128,9/*1191*/, 
/*4250*/      OPC_MoveParent,
/*4251*/      OPC_RecordChild2, // #1 = $rs
/*4252*/      OPC_RecordChild3, // #2 = $rt
/*4253*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4255*/      OPC_EmitMergeInputChains1_0,
/*4256*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1191:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_S_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4265*/    /*Scope*/ 16, /*->4282*/
/*4266*/      OPC_CheckInteger, 38|128,8/*1062*/, 
/*4269*/      OPC_MoveParent,
/*4270*/      OPC_RecordChild2, // #1 = $rt
/*4271*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4273*/      OPC_EmitMergeInputChains1_0,
/*4274*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v4i8 1062:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (ABSQ_S_QB:v4i8 DSPROpnd:v4i8:$rt)
/*4282*/    /*Scope*/ 18, /*->4301*/
/*4283*/      OPC_CheckInteger, 108|128,8/*1132*/, 
/*4286*/      OPC_MoveParent,
/*4287*/      OPC_RecordChild2, // #1 = $rs
/*4288*/      OPC_RecordChild3, // #2 = $rt
/*4289*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4291*/      OPC_EmitMergeInputChains1_0,
/*4292*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1132:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_S_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4301*/    /*Scope*/ 18, /*->4320*/
/*4302*/      OPC_CheckInteger, 115|128,8/*1139*/, 
/*4305*/      OPC_MoveParent,
/*4306*/      OPC_RecordChild2, // #1 = $rs
/*4307*/      OPC_RecordChild3, // #2 = $rt
/*4308*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4310*/      OPC_EmitMergeInputChains1_0,
/*4311*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1139:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_S_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4320*/    /*Scope*/ 18, /*->4339*/
/*4321*/      OPC_CheckInteger, 6|128,9/*1158*/, 
/*4324*/      OPC_MoveParent,
/*4325*/      OPC_RecordChild2, // #1 = $rs
/*4326*/      OPC_RecordChild3, // #2 = $rt
/*4327*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4329*/      OPC_EmitMergeInputChains1_0,
/*4330*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1158:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (PRECR_QB_PH:v4i8 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*4339*/    /*Scope*/ 18, /*->4358*/
/*4340*/      OPC_CheckInteger, 40|128,8/*1064*/, 
/*4343*/      OPC_MoveParent,
/*4344*/      OPC_RecordChild2, // #1 = $a
/*4345*/      OPC_RecordChild3, // #2 = $b
/*4346*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4348*/      OPC_EmitMergeInputChains1_0,
/*4349*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1064:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4358*/    /*Scope*/ 18, /*->4377*/
/*4359*/      OPC_CheckInteger, 30|128,9/*1182*/, 
/*4362*/      OPC_MoveParent,
/*4363*/      OPC_RecordChild2, // #1 = $a
/*4364*/      OPC_RecordChild3, // #2 = $b
/*4365*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4367*/      OPC_EmitMergeInputChains1_0,
/*4368*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1182:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4377*/    /*Scope*/ 18, /*->4396*/
/*4378*/      OPC_CheckInteger, 107|128,8/*1131*/, 
/*4381*/      OPC_MoveParent,
/*4382*/      OPC_RecordChild2, // #1 = $a
/*4383*/      OPC_RecordChild3, // #2 = $b
/*4384*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4386*/      OPC_EmitMergeInputChains1_0,
/*4387*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1131:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4396*/    /*Scope*/ 18, /*->4415*/
/*4397*/      OPC_CheckInteger, 49|128,8/*1073*/, 
/*4400*/      OPC_MoveParent,
/*4401*/      OPC_RecordChild2, // #1 = $a
/*4402*/      OPC_RecordChild3, // #2 = $b
/*4403*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4405*/      OPC_EmitMergeInputChains1_0,
/*4406*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1073:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4415*/    /*Scope*/ 18, /*->4434*/
/*4416*/      OPC_CheckInteger, 38|128,9/*1190*/, 
/*4419*/      OPC_MoveParent,
/*4420*/      OPC_RecordChild2, // #1 = $a
/*4421*/      OPC_RecordChild3, // #2 = $b
/*4422*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4424*/      OPC_EmitMergeInputChains1_0,
/*4425*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1190:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4434*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,7/*1015*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->5454
/*4439*/    OPC_MoveChild, 0,
/*4441*/    OPC_Scope, 42, /*->4485*/ // 42 children in Scope
/*4443*/      OPC_CheckInteger, 27|128,9/*1179*/, 
/*4446*/      OPC_MoveParent,
/*4447*/      OPC_RecordChild1, // #0 = $rt
/*4448*/      OPC_RecordChild2, // #1 = $rs_sa
/*4449*/      OPC_Scope, 21, /*->4472*/ // 2 children in Scope
/*4451*/        OPC_MoveChild, 2,
/*4453*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4456*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4458*/        OPC_MoveParent,
/*4459*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4461*/        OPC_EmitConvertToTarget, 1,
/*4463*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1179:iPTR, GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_W:i32 GPR32Opnd:i32:$rt, (imm:i32):$rs_sa)
/*4472*/      /*Scope*/ 11, /*->4484*/
/*4473*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4475*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1179:iPTR, GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_W:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs_sa)
/*4484*/      0, /*End of Scope*/
/*4485*/    /*Scope*/ 29, /*->4515*/
/*4486*/      OPC_CheckInteger, 55|128,8/*1079*/, 
/*4489*/      OPC_MoveParent,
/*4490*/      OPC_RecordChild1, // #0 = $src
/*4491*/      OPC_RecordChild2, // #1 = $rs
/*4492*/      OPC_RecordChild3, // #2 = $sa
/*4493*/      OPC_MoveChild, 3,
/*4495*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4498*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4500*/      OPC_MoveParent,
/*4501*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4503*/      OPC_EmitConvertToTarget, 2,
/*4505*/      OPC_MorphNodeTo, TARGET_VAL(Mips::APPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1079:iPTR, GPR32Opnd:i32:$src, GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (APPEND:i32 GPR32Opnd:i32:$rs, (imm:i32):$sa, GPR32Opnd:i32:$src)
/*4515*/    /*Scope*/ 29, /*->4545*/
/*4516*/      OPC_CheckInteger, 56|128,8/*1080*/, 
/*4519*/      OPC_MoveParent,
/*4520*/      OPC_RecordChild1, // #0 = $src
/*4521*/      OPC_RecordChild2, // #1 = $rs
/*4522*/      OPC_RecordChild3, // #2 = $sa
/*4523*/      OPC_MoveChild, 3,
/*4525*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4528*/      OPC_CheckPredicate, 25, // Predicate_immZExt2
/*4530*/      OPC_MoveParent,
/*4531*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4533*/      OPC_EmitConvertToTarget, 2,
/*4535*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BALIGN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1080:iPTR, GPR32Opnd:i32:$src, GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt2>>:$sa) - Complexity = 12
              // Dst: (BALIGN:i32 GPR32Opnd:i32:$rs, (imm:i32):$sa, GPR32Opnd:i32:$src)
/*4545*/    /*Scope*/ 29, /*->4575*/
/*4546*/      OPC_CheckInteger, 13|128,9/*1165*/, 
/*4549*/      OPC_MoveParent,
/*4550*/      OPC_RecordChild1, // #0 = $src
/*4551*/      OPC_RecordChild2, // #1 = $rs
/*4552*/      OPC_RecordChild3, // #2 = $sa
/*4553*/      OPC_MoveChild, 3,
/*4555*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4558*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4560*/      OPC_MoveParent,
/*4561*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4563*/      OPC_EmitConvertToTarget, 2,
/*4565*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PREPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1165:iPTR, GPR32Opnd:i32:$src, GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PREPEND:i32 GPR32Opnd:i32:$rs, (imm:i32):$sa, GPR32Opnd:i32:$src)
/*4575*/    /*Scope*/ 17, /*->4593*/
/*4576*/      OPC_CheckInteger, 103|128,8/*1127*/, 
/*4579*/      OPC_MoveParent,
/*4580*/      OPC_RecordChild1, // #0 = $rs
/*4581*/      OPC_RecordChild2, // #1 = $rt
/*4582*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4584*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MODSUB), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1127:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (MODSUB:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*4593*/    /*Scope*/ 15, /*->4609*/
/*4594*/      OPC_CheckInteger, 14|128,9/*1166*/, 
/*4597*/      OPC_MoveParent,
/*4598*/      OPC_RecordChild1, // #0 = $rs
/*4599*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4601*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RADDU_W_QB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1166:iPTR, DSPROpnd:v4i8:$rs) - Complexity = 8
              // Dst: (RADDU_W_QB:i32 DSPROpnd:v4i8:$rs)
/*4609*/    /*Scope*/ 15, /*->4625*/
/*4610*/      OPC_CheckInteger, 124|128,8/*1148*/, 
/*4613*/      OPC_MoveParent,
/*4614*/      OPC_RecordChild1, // #0 = $rt
/*4615*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4617*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHL), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1148:iPTR, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHL:i32 DSPROpnd:v2i16:$rt)
/*4625*/    /*Scope*/ 15, /*->4641*/
/*4626*/      OPC_CheckInteger, 125|128,8/*1149*/, 
/*4629*/      OPC_MoveParent,
/*4630*/      OPC_RecordChild1, // #0 = $rt
/*4631*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4633*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1149:iPTR, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHR:i32 DSPROpnd:v2i16:$rt)
/*4641*/    /*Scope*/ 15, /*->4657*/
/*4642*/      OPC_CheckInteger, 57|128,8/*1081*/, 
/*4645*/      OPC_MoveParent,
/*4646*/      OPC_RecordChild1, // #0 = $rt
/*4647*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4649*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BITREV), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1081:iPTR, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (BITREV:i32 GPR32Opnd:i32:$rt)
/*4657*/    /*Scope*/ 17, /*->4675*/
/*4658*/      OPC_CheckInteger, 46|128,8/*1070*/, 
/*4661*/      OPC_MoveParent,
/*4662*/      OPC_RecordChild1, // #0 = $rs
/*4663*/      OPC_RecordChild2, // #1 = $rt
/*4664*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4666*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1070:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*4675*/    /*Scope*/ 17, /*->4693*/
/*4676*/      OPC_CheckInteger, 45|128,8/*1069*/, 
/*4679*/      OPC_MoveParent,
/*4680*/      OPC_RecordChild1, // #0 = $rs
/*4681*/      OPC_RecordChild2, // #1 = $rt
/*4682*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4684*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1069:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_R_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*4693*/    /*Scope*/ 17, /*->4711*/
/*4694*/      OPC_CheckInteger, 36|128,9/*1188*/, 
/*4697*/      OPC_MoveParent,
/*4698*/      OPC_RecordChild1, // #0 = $rs
/*4699*/      OPC_RecordChild2, // #1 = $rt
/*4700*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4702*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1188:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*4711*/    /*Scope*/ 17, /*->4729*/
/*4712*/      OPC_CheckInteger, 35|128,9/*1187*/, 
/*4715*/      OPC_MoveParent,
/*4716*/      OPC_RecordChild1, // #0 = $rs
/*4717*/      OPC_RecordChild2, // #1 = $rt
/*4718*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4720*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1187:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_R_W:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*4729*/    /*Scope*/ 42, /*->4772*/
/*4730*/      OPC_CheckInteger, 25|128,9/*1177*/, 
/*4733*/      OPC_MoveParent,
/*4734*/      OPC_RecordChild1, // #0 = $rt
/*4735*/      OPC_RecordChild2, // #1 = $rs_sa
/*4736*/      OPC_Scope, 21, /*->4759*/ // 2 children in Scope
/*4738*/        OPC_MoveChild, 2,
/*4740*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4743*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4745*/        OPC_MoveParent,
/*4746*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4748*/        OPC_EmitConvertToTarget, 1,
/*4750*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1177:iPTR, DSPROpnd:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_PH:v2i16 DSPROpnd:v2i16:$rt, (imm:i32):$rs_sa)
/*4759*/      /*Scope*/ 11, /*->4771*/
/*4760*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1177:iPTR, DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_PH:v2i16 DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa)
/*4771*/      0, /*End of Scope*/
/*4772*/    /*Scope*/ 39, /*->4812*/
/*4773*/      OPC_CheckInteger, 17|128,9/*1169*/, 
/*4776*/      OPC_MoveParent,
/*4777*/      OPC_RecordChild1, // #0 = $imm
/*4778*/      OPC_Scope, 20, /*->4800*/ // 2 children in Scope
/*4780*/        OPC_MoveChild, 1,
/*4782*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4785*/        OPC_CheckPredicate, 26, // Predicate_immZExt8
/*4787*/        OPC_MoveParent,
/*4788*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4790*/        OPC_EmitConvertToTarget, 0,
/*4792*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1169:iPTR, (imm:i32)<<P:Predicate_immZExt8>>:$imm) - Complexity = 12
                // Dst: (REPL_QB:v4i8 (imm:i32):$imm)
/*4800*/      /*Scope*/ 10, /*->4811*/
/*4801*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4803*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i8 1169:iPTR, GPR32Opnd:i32:$rt) - Complexity = 8
                // Dst: (REPLV_QB:v4i8 GPR32Opnd:i32:$rt)
/*4811*/      0, /*End of Scope*/
/*4812*/    /*Scope*/ 39, /*->4852*/
/*4813*/      OPC_CheckInteger, 16|128,9/*1168*/, 
/*4816*/      OPC_MoveParent,
/*4817*/      OPC_RecordChild1, // #0 = $imm
/*4818*/      OPC_Scope, 20, /*->4840*/ // 2 children in Scope
/*4820*/        OPC_MoveChild, 1,
/*4822*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4825*/        OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4827*/        OPC_MoveParent,
/*4828*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4830*/        OPC_EmitConvertToTarget, 0,
/*4832*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1168:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$imm) - Complexity = 12
                // Dst: (REPL_PH:v2i16 (imm:i32):$imm)
/*4840*/      /*Scope*/ 10, /*->4851*/
/*4841*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4843*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v2i16 1168:iPTR, GPR32Opnd:i32:$rt) - Complexity = 8
                // Dst: (REPLV_PH:v2i16 GPR32Opnd:i32:$rt)
/*4851*/      0, /*End of Scope*/
/*4852*/    /*Scope*/ 29, /*->4882*/
/*4853*/      OPC_CheckInteger, 7|128,9/*1159*/, 
/*4856*/      OPC_MoveParent,
/*4857*/      OPC_RecordChild1, // #0 = $src
/*4858*/      OPC_RecordChild2, // #1 = $rs
/*4859*/      OPC_RecordChild3, // #2 = $sa
/*4860*/      OPC_MoveChild, 3,
/*4862*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4865*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4867*/      OPC_MoveParent,
/*4868*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4870*/      OPC_EmitConvertToTarget, 2,
/*4872*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1159:iPTR, GPR32Opnd:i32:$src, GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_PH_W:v2i16 GPR32Opnd:i32:$rs, (imm:i32):$sa, GPR32Opnd:i32:$src)
/*4882*/    /*Scope*/ 29, /*->4912*/
/*4883*/      OPC_CheckInteger, 8|128,9/*1160*/, 
/*4886*/      OPC_MoveParent,
/*4887*/      OPC_RecordChild1, // #0 = $src
/*4888*/      OPC_RecordChild2, // #1 = $rs
/*4889*/      OPC_RecordChild3, // #2 = $sa
/*4890*/      OPC_MoveChild, 3,
/*4892*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4895*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4897*/      OPC_MoveParent,
/*4898*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4900*/      OPC_EmitConvertToTarget, 2,
/*4902*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_R_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1160:iPTR, GPR32Opnd:i32:$src, GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_R_PH_W:v2i16 GPR32Opnd:i32:$rs, (imm:i32):$sa, GPR32Opnd:i32:$src)
/*4912*/    /*Scope*/ 42, /*->4955*/
/*4913*/      OPC_CheckInteger, 26|128,9/*1178*/, 
/*4916*/      OPC_MoveParent,
/*4917*/      OPC_RecordChild1, // #0 = $rt
/*4918*/      OPC_RecordChild2, // #1 = $rs_sa
/*4919*/      OPC_Scope, 21, /*->4942*/ // 2 children in Scope
/*4921*/        OPC_MoveChild, 2,
/*4923*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4926*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4928*/        OPC_MoveParent,
/*4929*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4931*/        OPC_EmitConvertToTarget, 1,
/*4933*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1178:iPTR, DSPROpnd:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_QB:v4i8 DSPROpnd:v4i8:$rt, (imm:i32):$rs_sa)
/*4942*/      /*Scope*/ 11, /*->4954*/
/*4943*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*4945*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1178:iPTR, DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_QB:v4i8 DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa)
/*4954*/      0, /*End of Scope*/
/*4955*/    /*Scope*/ 42, /*->4998*/
/*4956*/      OPC_CheckInteger, 23|128,9/*1175*/, 
/*4959*/      OPC_MoveParent,
/*4960*/      OPC_RecordChild1, // #0 = $a
/*4961*/      OPC_RecordChild2, // #1 = $shamt
/*4962*/      OPC_Scope, 21, /*->4985*/ // 2 children in Scope
/*4964*/        OPC_MoveChild, 2,
/*4966*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4969*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4971*/        OPC_MoveParent,
/*4972*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4974*/        OPC_EmitConvertToTarget, 1,
/*4976*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1175:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4985*/      /*Scope*/ 11, /*->4997*/
/*4986*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4988*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1175:iPTR, DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_PH:v2i16 DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa)
/*4997*/      0, /*End of Scope*/
/*4998*/    /*Scope*/ 42, /*->5041*/
/*4999*/      OPC_CheckInteger, 28|128,9/*1180*/, 
/*5002*/      OPC_MoveParent,
/*5003*/      OPC_RecordChild1, // #0 = $a
/*5004*/      OPC_RecordChild2, // #1 = $shamt
/*5005*/      OPC_Scope, 21, /*->5028*/ // 2 children in Scope
/*5007*/        OPC_MoveChild, 2,
/*5009*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5012*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*5014*/        OPC_MoveParent,
/*5015*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5017*/        OPC_EmitConvertToTarget, 1,
/*5019*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1180:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*5028*/      /*Scope*/ 11, /*->5040*/
/*5029*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5031*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1180:iPTR, DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_PH:v2i16 DSPROpnd:v2i16:$rt, GPR32Opnd:i32:$rs_sa)
/*5040*/      0, /*End of Scope*/
/*5041*/    /*Scope*/ 42, /*->5084*/
/*5042*/      OPC_CheckInteger, 24|128,9/*1176*/, 
/*5045*/      OPC_MoveParent,
/*5046*/      OPC_RecordChild1, // #0 = $a
/*5047*/      OPC_RecordChild2, // #1 = $shamt
/*5048*/      OPC_Scope, 21, /*->5071*/ // 2 children in Scope
/*5050*/        OPC_MoveChild, 2,
/*5052*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5055*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*5057*/        OPC_MoveParent,
/*5058*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5060*/        OPC_EmitConvertToTarget, 1,
/*5062*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1176:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*5071*/      /*Scope*/ 11, /*->5083*/
/*5072*/        OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5074*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1176:iPTR, DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_QB:v4i8 DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa)
/*5083*/      0, /*End of Scope*/
/*5084*/    /*Scope*/ 42, /*->5127*/
/*5085*/      OPC_CheckInteger, 29|128,9/*1181*/, 
/*5088*/      OPC_MoveParent,
/*5089*/      OPC_RecordChild1, // #0 = $a
/*5090*/      OPC_RecordChild2, // #1 = $shamt
/*5091*/      OPC_Scope, 21, /*->5114*/ // 2 children in Scope
/*5093*/        OPC_MoveChild, 2,
/*5095*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5098*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*5100*/        OPC_MoveParent,
/*5101*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5103*/        OPC_EmitConvertToTarget, 1,
/*5105*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1181:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*5114*/      /*Scope*/ 11, /*->5126*/
/*5115*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5117*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1181:iPTR, DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_QB:v4i8 DSPROpnd:v4i8:$rt, GPR32Opnd:i32:$rs_sa)
/*5126*/      0, /*End of Scope*/
/*5127*/    /*Scope*/ 17, /*->5145*/
/*5128*/      OPC_CheckInteger, 10|128,9/*1162*/, 
/*5131*/      OPC_MoveParent,
/*5132*/      OPC_RecordChild1, // #0 = $rs
/*5133*/      OPC_RecordChild2, // #1 = $rt
/*5134*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5136*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_QB_PH), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1162:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQ_QB_PH:v4i8 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5145*/    /*Scope*/ 17, /*->5163*/
/*5146*/      OPC_CheckInteger, 9|128,9/*1161*/, 
/*5149*/      OPC_MoveParent,
/*5150*/      OPC_RecordChild1, // #0 = $rs
/*5151*/      OPC_RecordChild2, // #1 = $rt
/*5152*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5154*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1161:iPTR, GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_PH_W:v2i16 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*5163*/    /*Scope*/ 15, /*->5179*/
/*5164*/      OPC_CheckInteger, 126|128,8/*1150*/, 
/*5167*/      OPC_MoveParent,
/*5168*/      OPC_RecordChild1, // #0 = $rt
/*5169*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5171*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1150:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBL:v2i16 DSPROpnd:v4i8:$rt)
/*5179*/    /*Scope*/ 15, /*->5195*/
/*5180*/      OPC_CheckInteger, 0|128,9/*1152*/, 
/*5183*/      OPC_MoveParent,
/*5184*/      OPC_RecordChild1, // #0 = $rt
/*5185*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5187*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1152:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBR:v2i16 DSPROpnd:v4i8:$rt)
/*5195*/    /*Scope*/ 15, /*->5211*/
/*5196*/      OPC_CheckInteger, 127|128,8/*1151*/, 
/*5199*/      OPC_MoveParent,
/*5200*/      OPC_RecordChild1, // #0 = $rt
/*5201*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5203*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBLA:v2i16 DSPROpnd:v4i8:$rt)
/*5211*/    /*Scope*/ 15, /*->5227*/
/*5212*/      OPC_CheckInteger, 1|128,9/*1153*/, 
/*5215*/      OPC_MoveParent,
/*5216*/      OPC_RecordChild1, // #0 = $rt
/*5217*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5219*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1153:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBRA:v2i16 DSPROpnd:v4i8:$rt)
/*5227*/    /*Scope*/ 15, /*->5243*/
/*5228*/      OPC_CheckInteger, 2|128,9/*1154*/, 
/*5231*/      OPC_MoveParent,
/*5232*/      OPC_RecordChild1, // #0 = $rt
/*5233*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5235*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBL:v2i16 DSPROpnd:v4i8:$rt)
/*5243*/    /*Scope*/ 15, /*->5259*/
/*5244*/      OPC_CheckInteger, 4|128,9/*1156*/, 
/*5247*/      OPC_MoveParent,
/*5248*/      OPC_RecordChild1, // #0 = $rt
/*5249*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5251*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1156:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBR:v2i16 DSPROpnd:v4i8:$rt)
/*5259*/    /*Scope*/ 15, /*->5275*/
/*5260*/      OPC_CheckInteger, 3|128,9/*1155*/, 
/*5263*/      OPC_MoveParent,
/*5264*/      OPC_RecordChild1, // #0 = $rt
/*5265*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5267*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1155:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBLA:v2i16 DSPROpnd:v4i8:$rt)
/*5275*/    /*Scope*/ 15, /*->5291*/
/*5276*/      OPC_CheckInteger, 5|128,9/*1157*/, 
/*5279*/      OPC_MoveParent,
/*5280*/      OPC_RecordChild1, // #0 = $rt
/*5281*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5283*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1157:iPTR, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBRA:v2i16 DSPROpnd:v4i8:$rt)
/*5291*/    /*Scope*/ 17, /*->5309*/
/*5292*/      OPC_CheckInteger, 121|128,8/*1145*/, 
/*5295*/      OPC_MoveParent,
/*5296*/      OPC_RecordChild1, // #0 = $rs
/*5297*/      OPC_RecordChild2, // #1 = $rt
/*5298*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5300*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PACKRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1145:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (PACKRL_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5309*/    /*Scope*/ 17, /*->5327*/
/*5310*/      OPC_CheckInteger, 52|128,8/*1076*/, 
/*5313*/      OPC_MoveParent,
/*5314*/      OPC_RecordChild1, // #0 = $rs
/*5315*/      OPC_RecordChild2, // #1 = $rt
/*5316*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5318*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1076:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_QB:v4i8 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*5327*/    /*Scope*/ 17, /*->5345*/
/*5328*/      OPC_CheckInteger, 53|128,8/*1077*/, 
/*5331*/      OPC_MoveParent,
/*5332*/      OPC_RecordChild1, // #0 = $rs
/*5333*/      OPC_RecordChild2, // #1 = $rt
/*5334*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5336*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1077:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_R_QB:v4i8 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*5345*/    /*Scope*/ 17, /*->5363*/
/*5346*/      OPC_CheckInteger, 41|128,9/*1193*/, 
/*5349*/      OPC_MoveParent,
/*5350*/      OPC_RecordChild1, // #0 = $rs
/*5351*/      OPC_RecordChild2, // #1 = $rt
/*5352*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5354*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1193:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_QB:v4i8 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*5363*/    /*Scope*/ 17, /*->5381*/
/*5364*/      OPC_CheckInteger, 42|128,9/*1194*/, 
/*5367*/      OPC_MoveParent,
/*5368*/      OPC_RecordChild1, // #0 = $rs
/*5369*/      OPC_RecordChild2, // #1 = $rt
/*5370*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5372*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1194:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_R_QB:v4i8 DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*5381*/    /*Scope*/ 17, /*->5399*/
/*5382*/      OPC_CheckInteger, 43|128,8/*1067*/, 
/*5385*/      OPC_MoveParent,
/*5386*/      OPC_RecordChild1, // #0 = $rs
/*5387*/      OPC_RecordChild2, // #1 = $rt
/*5388*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5390*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1067:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5399*/    /*Scope*/ 17, /*->5417*/
/*5400*/      OPC_CheckInteger, 44|128,8/*1068*/, 
/*5403*/      OPC_MoveParent,
/*5404*/      OPC_RecordChild1, // #0 = $rs
/*5405*/      OPC_RecordChild2, // #1 = $rt
/*5406*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5408*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1068:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_R_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5417*/    /*Scope*/ 17, /*->5435*/
/*5418*/      OPC_CheckInteger, 33|128,9/*1185*/, 
/*5421*/      OPC_MoveParent,
/*5422*/      OPC_RecordChild1, // #0 = $rs
/*5423*/      OPC_RecordChild2, // #1 = $rt
/*5424*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5426*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1185:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5435*/    /*Scope*/ 17, /*->5453*/
/*5436*/      OPC_CheckInteger, 34|128,9/*1186*/, 
/*5439*/      OPC_MoveParent,
/*5440*/      OPC_RecordChild1, // #0 = $rs
/*5441*/      OPC_RecordChild2, // #1 = $rt
/*5442*/      OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*5444*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1186:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_R_PH:v2i16 DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5453*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->5599
/*5458*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*5459*/    OPC_MoveChild, 1,
/*5461*/    OPC_Scope, 27, /*->5490*/ // 7 children in Scope
/*5463*/      OPC_CheckInteger, 43|128,9/*1195*/, 
/*5466*/      OPC_MoveParent,
/*5467*/      OPC_RecordChild2, // #1 = $rs
/*5468*/      OPC_RecordChild3, // #2 = $mask
/*5469*/      OPC_MoveChild, 3,
/*5471*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5474*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*5476*/      OPC_MoveParent,
/*5477*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5479*/      OPC_EmitMergeInputChains1_0,
/*5480*/      OPC_EmitConvertToTarget, 2,
/*5482*/      OPC_MorphNodeTo, TARGET_VAL(Mips::WRDSP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_void 1195:iPTR, GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (WRDSP GPR32Opnd:i32:$rs, (imm:i32):$mask)
/*5490*/    /*Scope*/ 17, /*->5508*/
/*5491*/      OPC_CheckInteger, 68|128,8/*1092*/, 
/*5494*/      OPC_MoveParent,
/*5495*/      OPC_RecordChild2, // #1 = $rs
/*5496*/      OPC_RecordChild3, // #2 = $rt
/*5497*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5499*/      OPC_EmitMergeInputChains1_0,
/*5500*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_EQ_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1092:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_EQ_QB DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*5508*/    /*Scope*/ 17, /*->5526*/
/*5509*/      OPC_CheckInteger, 70|128,8/*1094*/, 
/*5512*/      OPC_MoveParent,
/*5513*/      OPC_RecordChild2, // #1 = $rs
/*5514*/      OPC_RecordChild3, // #2 = $rt
/*5515*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5517*/      OPC_EmitMergeInputChains1_0,
/*5518*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LT_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1094:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LT_QB DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*5526*/    /*Scope*/ 17, /*->5544*/
/*5527*/      OPC_CheckInteger, 69|128,8/*1093*/, 
/*5530*/      OPC_MoveParent,
/*5531*/      OPC_RecordChild2, // #1 = $rs
/*5532*/      OPC_RecordChild3, // #2 = $rt
/*5533*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5535*/      OPC_EmitMergeInputChains1_0,
/*5536*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LE_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1093:iPTR, DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LE_QB DSPROpnd:v4i8:$rs, DSPROpnd:v4i8:$rt)
/*5544*/    /*Scope*/ 17, /*->5562*/
/*5545*/      OPC_CheckInteger, 59|128,8/*1083*/, 
/*5548*/      OPC_MoveParent,
/*5549*/      OPC_RecordChild2, // #1 = $rs
/*5550*/      OPC_RecordChild3, // #2 = $rt
/*5551*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5553*/      OPC_EmitMergeInputChains1_0,
/*5554*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_EQ_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1083:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_EQ_PH DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5562*/    /*Scope*/ 17, /*->5580*/
/*5563*/      OPC_CheckInteger, 61|128,8/*1085*/, 
/*5566*/      OPC_MoveParent,
/*5567*/      OPC_RecordChild2, // #1 = $rs
/*5568*/      OPC_RecordChild3, // #2 = $rt
/*5569*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5571*/      OPC_EmitMergeInputChains1_0,
/*5572*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LT_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1085:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LT_PH DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5580*/    /*Scope*/ 17, /*->5598*/
/*5581*/      OPC_CheckInteger, 60|128,8/*1084*/, 
/*5584*/      OPC_MoveParent,
/*5585*/      OPC_RecordChild2, // #1 = $rs
/*5586*/      OPC_RecordChild3, // #2 = $rt
/*5587*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5589*/      OPC_EmitMergeInputChains1_0,
/*5590*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LE_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1084:iPTR, DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LE_PH DSPROpnd:v2i16:$rs, DSPROpnd:v2i16:$rt)
/*5598*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::XOR),// ->5800
/*5603*/    OPC_Scope, 50, /*->5655*/ // 2 children in Scope
/*5605*/      OPC_MoveChild, 0,
/*5607*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5610*/      OPC_RecordChild0, // #0 = $rs
/*5611*/      OPC_RecordChild1, // #1 = $rt
/*5612*/      OPC_MoveParent,
/*5613*/      OPC_MoveChild, 1,
/*5615*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5626*/      OPC_MoveParent,
/*5627*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->5641
/*5630*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5632*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->5654
/*5643*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5645*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
              0, // EndSwitchType
/*5655*/    /*Scope*/ 14|128,1/*142*/, /*->5799*/
/*5657*/      OPC_RecordChild0, // #0 = $in
/*5658*/      OPC_Scope, 44, /*->5704*/ // 2 children in Scope
/*5660*/        OPC_MoveChild, 1,
/*5662*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5673*/        OPC_MoveParent,
/*5674*/        OPC_CheckType, MVT::i32,
/*5676*/        OPC_Scope, 14, /*->5692*/ // 2 children in Scope
/*5678*/          OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5680*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5683*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPR32:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 GPR32Opnd:i32:$in, ZERO:i32)
/*5692*/        /*Scope*/ 10, /*->5703*/
/*5693*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5695*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NotRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 CPU16Regs:i32:$r, -1:i32) - Complexity = 8
                  // Dst: (NotRxRy16:i32 CPU16Regs:i32:$r)
/*5703*/        0, /*End of Scope*/
/*5704*/      /*Scope*/ 93, /*->5798*/
/*5705*/        OPC_RecordChild1, // #1 = $imm16
/*5706*/        OPC_Scope, 46, /*->5754*/ // 3 children in Scope
/*5708*/          OPC_MoveChild, 1,
/*5710*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5713*/          OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5715*/          OPC_MoveParent,
/*5716*/          OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->5735
/*5719*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5721*/            OPC_EmitConvertToTarget, 1,
/*5723*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5726*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 GPR32Opnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 16,  MVT::i64,// ->5753
/*5737*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5739*/            OPC_EmitConvertToTarget, 1,
/*5741*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5744*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 GPR64Opnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*5754*/        /*Scope*/ 28, /*->5783*/
/*5755*/          OPC_CheckType, MVT::i32,
/*5757*/          OPC_Scope, 11, /*->5770*/ // 2 children in Scope
/*5759*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5761*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                    // Dst: (XOR:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*5770*/          /*Scope*/ 11, /*->5782*/
/*5771*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5773*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*5782*/          0, /*End of Scope*/
/*5783*/        /*Scope*/ 13, /*->5797*/
/*5784*/          OPC_CheckType, MVT::i64,
/*5786*/          OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5788*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*5797*/        0, /*End of Scope*/
/*5798*/      0, /*End of Scope*/
/*5799*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,13/*1716*/,  TARGET_VAL(ISD::BRCOND),// ->7520
/*5804*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*5805*/    OPC_Scope, 106|128,12/*1642*/, /*->7450*/ // 2 children in Scope
/*5808*/      OPC_MoveChild, 1,
/*5810*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*5813*/      OPC_RecordChild0, // #1 = $rs
/*5814*/      OPC_Scope, 82|128,7/*978*/, /*->6795*/ // 2 children in Scope
/*5817*/        OPC_CheckChild0Type, MVT::i32,
/*5819*/        OPC_Scope, 24|128,2/*280*/, /*->6102*/ // 2 children in Scope
/*5822*/          OPC_MoveChild, 1,
/*5824*/          OPC_Scope, 77|128,1/*205*/, /*->6032*/ // 3 children in Scope
/*5827*/            OPC_CheckInteger, 0, 
/*5829*/            OPC_MoveParent,
/*5830*/            OPC_MoveChild, 2,
/*5832*/            OPC_Scope, 24, /*->5858*/ // 7 children in Scope
/*5834*/              OPC_CheckCondCode, ISD::SETGE,
/*5836*/              OPC_MoveParent,
/*5837*/              OPC_CheckType, MVT::i32,
/*5839*/              OPC_MoveParent,
/*5840*/              OPC_RecordChild2, // #2 = $offset
/*5841*/              OPC_MoveChild, 2,
/*5843*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5846*/              OPC_MoveParent,
/*5847*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5849*/              OPC_EmitMergeInputChains1_0,
/*5850*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGEZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5858*/            /*Scope*/ 24, /*->5883*/
/*5859*/              OPC_CheckCondCode, ISD::SETGT,
/*5861*/              OPC_MoveParent,
/*5862*/              OPC_CheckType, MVT::i32,
/*5864*/              OPC_MoveParent,
/*5865*/              OPC_RecordChild2, // #2 = $offset
/*5866*/              OPC_MoveChild, 2,
/*5868*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5871*/              OPC_MoveParent,
/*5872*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5874*/              OPC_EmitMergeInputChains1_0,
/*5875*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGTZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5883*/            /*Scope*/ 24, /*->5908*/
/*5884*/              OPC_CheckCondCode, ISD::SETLE,
/*5886*/              OPC_MoveParent,
/*5887*/              OPC_CheckType, MVT::i32,
/*5889*/              OPC_MoveParent,
/*5890*/              OPC_RecordChild2, // #2 = $offset
/*5891*/              OPC_MoveChild, 2,
/*5893*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5896*/              OPC_MoveParent,
/*5897*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5899*/              OPC_EmitMergeInputChains1_0,
/*5900*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLEZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5908*/            /*Scope*/ 24, /*->5933*/
/*5909*/              OPC_CheckCondCode, ISD::SETLT,
/*5911*/              OPC_MoveParent,
/*5912*/              OPC_CheckType, MVT::i32,
/*5914*/              OPC_MoveParent,
/*5915*/              OPC_RecordChild2, // #2 = $offset
/*5916*/              OPC_MoveChild, 2,
/*5918*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5921*/              OPC_MoveParent,
/*5922*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5924*/              OPC_EmitMergeInputChains1_0,
/*5925*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLTZ GPR32Opnd:i32:$rs, (bb:Other):$offset)
/*5933*/            /*Scope*/ 28, /*->5962*/
/*5934*/              OPC_CheckCondCode, ISD::SETNE,
/*5936*/              OPC_MoveParent,
/*5937*/              OPC_CheckType, MVT::i32,
/*5939*/              OPC_MoveParent,
/*5940*/              OPC_RecordChild2, // #2 = $dst
/*5941*/              OPC_MoveChild, 2,
/*5943*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5946*/              OPC_MoveParent,
/*5947*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5949*/              OPC_EmitMergeInputChains1_0,
/*5950*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5953*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BNE GPR32:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5962*/            /*Scope*/ 43, /*->6006*/
/*5963*/              OPC_CheckCondCode, ISD::SETEQ,
/*5965*/              OPC_MoveParent,
/*5966*/              OPC_CheckType, MVT::i32,
/*5968*/              OPC_MoveParent,
/*5969*/              OPC_RecordChild2, // #2 = $dst
/*5970*/              OPC_MoveChild, 2,
/*5972*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5975*/              OPC_MoveParent,
/*5976*/              OPC_Scope, 15, /*->5993*/ // 2 children in Scope
/*5978*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*5980*/                OPC_EmitMergeInputChains1_0,
/*5981*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5984*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                        // Dst: (BEQ GPR32:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5993*/              /*Scope*/ 11, /*->6005*/
/*5994*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5996*/                OPC_EmitMergeInputChains1_0,
/*5997*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BeqzRxImmX16), 0|OPFL_Chain,
                            0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETEQ:Other), (bb:Other):$targ16) - Complexity = 11
                        // Dst: (BeqzRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*6005*/              0, /*End of Scope*/
/*6006*/            /*Scope*/ 24, /*->6031*/
/*6007*/              OPC_CheckCondCode, ISD::SETNE,
/*6009*/              OPC_MoveParent,
/*6010*/              OPC_CheckType, MVT::i32,
/*6012*/              OPC_MoveParent,
/*6013*/              OPC_RecordChild2, // #2 = $targ16
/*6014*/              OPC_MoveChild, 2,
/*6016*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6019*/              OPC_MoveParent,
/*6020*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6022*/              OPC_EmitMergeInputChains1_0,
/*6023*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETNE:Other), (bb:Other):$targ16) - Complexity = 11
                      // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*6031*/            0, /*End of Scope*/
/*6032*/          /*Scope*/ 29, /*->6062*/
/*6033*/            OPC_CheckInteger, 1, 
/*6035*/            OPC_MoveParent,
/*6036*/            OPC_MoveChild, 2,
/*6038*/            OPC_CheckCondCode, ISD::SETLT,
/*6040*/            OPC_MoveParent,
/*6041*/            OPC_CheckType, MVT::i32,
/*6043*/            OPC_MoveParent,
/*6044*/            OPC_RecordChild2, // #2 = $dst
/*6045*/            OPC_MoveChild, 2,
/*6047*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6050*/            OPC_MoveParent,
/*6051*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6053*/            OPC_EmitMergeInputChains1_0,
/*6054*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i32:i32:$lhs, 1:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BLEZ i32:i32:$lhs, (bb:Other):$dst)
/*6062*/          /*Scope*/ 38, /*->6101*/
/*6063*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6074*/            OPC_MoveParent,
/*6075*/            OPC_MoveChild, 2,
/*6077*/            OPC_CheckCondCode, ISD::SETGT,
/*6079*/            OPC_MoveParent,
/*6080*/            OPC_CheckType, MVT::i32,
/*6082*/            OPC_MoveParent,
/*6083*/            OPC_RecordChild2, // #2 = $dst
/*6084*/            OPC_MoveChild, 2,
/*6086*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6089*/            OPC_MoveParent,
/*6090*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6092*/            OPC_EmitMergeInputChains1_0,
/*6093*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i32:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BGEZ i32:i32:$lhs, (bb:Other):$dst)
/*6101*/          0, /*End of Scope*/
/*6102*/        /*Scope*/ 50|128,5/*690*/, /*->6794*/
/*6104*/          OPC_RecordChild1, // #2 = $rhs
/*6105*/          OPC_Scope, 63|128,2/*319*/, /*->6427*/ // 2 children in Scope
/*6108*/            OPC_MoveChild, 1,
/*6110*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6113*/            OPC_Scope, 87, /*->6202*/ // 5 children in Scope
/*6115*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6117*/              OPC_MoveParent,
/*6118*/              OPC_MoveChild, 2,
/*6120*/              OPC_Scope, 39, /*->6161*/ // 2 children in Scope
/*6122*/                OPC_CheckCondCode, ISD::SETGE,
/*6124*/                OPC_MoveParent,
/*6125*/                OPC_CheckType, MVT::i32,
/*6127*/                OPC_MoveParent,
/*6128*/                OPC_RecordChild2, // #3 = $dst
/*6129*/                OPC_MoveChild, 2,
/*6131*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6134*/                OPC_MoveParent,
/*6135*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6137*/                OPC_EmitMergeInputChains1_0,
/*6138*/                OPC_EmitConvertToTarget, 2,
/*6140*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6149*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6152*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6161*/              /*Scope*/ 39, /*->6201*/
/*6162*/                OPC_CheckCondCode, ISD::SETUGE,
/*6164*/                OPC_MoveParent,
/*6165*/                OPC_CheckType, MVT::i32,
/*6167*/                OPC_MoveParent,
/*6168*/                OPC_RecordChild2, // #3 = $dst
/*6169*/                OPC_MoveChild, 2,
/*6171*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6174*/                OPC_MoveParent,
/*6175*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6177*/                OPC_EmitMergeInputChains1_0,
/*6178*/                OPC_EmitConvertToTarget, 2,
/*6180*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6189*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6192*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6201*/              0, /*End of Scope*/
/*6202*/            /*Scope*/ 93, /*->6296*/
/*6203*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*6205*/              OPC_MoveParent,
/*6206*/              OPC_MoveChild, 2,
/*6208*/              OPC_Scope, 42, /*->6252*/ // 2 children in Scope
/*6210*/                OPC_CheckCondCode, ISD::SETGT,
/*6212*/                OPC_MoveParent,
/*6213*/                OPC_CheckType, MVT::i32,
/*6215*/                OPC_MoveParent,
/*6216*/                OPC_RecordChild2, // #3 = $dst
/*6217*/                OPC_MoveChild, 2,
/*6219*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6222*/                OPC_MoveParent,
/*6223*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6225*/                OPC_EmitMergeInputChains1_0,
/*6226*/                OPC_EmitConvertToTarget, 2,
/*6228*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*6231*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*6240*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6243*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), ZERO:i32, (bb:Other):$dst)
/*6252*/              /*Scope*/ 42, /*->6295*/
/*6253*/                OPC_CheckCondCode, ISD::SETUGT,
/*6255*/                OPC_MoveParent,
/*6256*/                OPC_CheckType, MVT::i32,
/*6258*/                OPC_MoveParent,
/*6259*/                OPC_RecordChild2, // #3 = $dst
/*6260*/                OPC_MoveChild, 2,
/*6262*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6265*/                OPC_MoveParent,
/*6266*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6268*/                OPC_EmitMergeInputChains1_0,
/*6269*/                OPC_EmitConvertToTarget, 2,
/*6271*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*6274*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*6283*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6286*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), ZERO:i32, (bb:Other):$dst)
/*6295*/              0, /*End of Scope*/
/*6296*/            /*Scope*/ 32, /*->6329*/
/*6297*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6299*/              OPC_MoveParent,
/*6300*/              OPC_MoveChild, 2,
/*6302*/              OPC_CheckCondCode, ISD::SETEQ,
/*6304*/              OPC_MoveParent,
/*6305*/              OPC_CheckType, MVT::i32,
/*6307*/              OPC_MoveParent,
/*6308*/              OPC_RecordChild2, // #3 = $targ16
/*6309*/              OPC_MoveChild, 2,
/*6311*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6314*/              OPC_MoveParent,
/*6315*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6317*/              OPC_EmitMergeInputChains1_0,
/*6318*/              OPC_EmitConvertToTarget, 2,
/*6320*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETEQ:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BteqzT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6329*/            /*Scope*/ 63, /*->6393*/
/*6330*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6332*/              OPC_MoveParent,
/*6333*/              OPC_MoveChild, 2,
/*6335*/              OPC_Scope, 27, /*->6364*/ // 2 children in Scope
/*6337*/                OPC_CheckCondCode, ISD::SETGE,
/*6339*/                OPC_MoveParent,
/*6340*/                OPC_CheckType, MVT::i32,
/*6342*/                OPC_MoveParent,
/*6343*/                OPC_RecordChild2, // #3 = $imm16
/*6344*/                OPC_MoveChild, 2,
/*6346*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6349*/                OPC_MoveParent,
/*6350*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6352*/                OPC_EmitMergeInputChains1_0,
/*6353*/                OPC_EmitConvertToTarget, 2,
/*6355*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETGE:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BteqzT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*6364*/              /*Scope*/ 27, /*->6392*/
/*6365*/                OPC_CheckCondCode, ISD::SETLT,
/*6367*/                OPC_MoveParent,
/*6368*/                OPC_CheckType, MVT::i32,
/*6370*/                OPC_MoveParent,
/*6371*/                OPC_RecordChild2, // #3 = $imm16
/*6372*/                OPC_MoveChild, 2,
/*6374*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6377*/                OPC_MoveParent,
/*6378*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6380*/                OPC_EmitMergeInputChains1_0,
/*6381*/                OPC_EmitConvertToTarget, 2,
/*6383*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETLT:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BtnezT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*6392*/              0, /*End of Scope*/
/*6393*/            /*Scope*/ 32, /*->6426*/
/*6394*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6396*/              OPC_MoveParent,
/*6397*/              OPC_MoveChild, 2,
/*6399*/              OPC_CheckCondCode, ISD::SETNE,
/*6401*/              OPC_MoveParent,
/*6402*/              OPC_CheckType, MVT::i32,
/*6404*/              OPC_MoveParent,
/*6405*/              OPC_RecordChild2, // #3 = $targ16
/*6406*/              OPC_MoveChild, 2,
/*6408*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6411*/              OPC_MoveParent,
/*6412*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6414*/              OPC_EmitMergeInputChains1_0,
/*6415*/              OPC_EmitConvertToTarget, 2,
/*6417*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETNE:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BtnezT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6426*/            0, /*End of Scope*/
/*6427*/          /*Scope*/ 108|128,2/*364*/, /*->6793*/
/*6429*/            OPC_MoveChild, 2,
/*6431*/            OPC_Scope, 25, /*->6458*/ // 12 children in Scope
/*6433*/              OPC_CheckCondCode, ISD::SETEQ,
/*6435*/              OPC_MoveParent,
/*6436*/              OPC_CheckType, MVT::i32,
/*6438*/              OPC_MoveParent,
/*6439*/              OPC_RecordChild2, // #3 = $offset
/*6440*/              OPC_MoveChild, 2,
/*6442*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6445*/              OPC_MoveParent,
/*6446*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6448*/              OPC_EmitMergeInputChains1_0,
/*6449*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, (bb:Other):$offset)
/*6458*/            /*Scope*/ 25, /*->6484*/
/*6459*/              OPC_CheckCondCode, ISD::SETNE,
/*6461*/              OPC_MoveParent,
/*6462*/              OPC_CheckType, MVT::i32,
/*6464*/              OPC_MoveParent,
/*6465*/              OPC_RecordChild2, // #3 = $offset
/*6466*/              OPC_MoveChild, 2,
/*6468*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6471*/              OPC_MoveParent,
/*6472*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6474*/              OPC_EmitMergeInputChains1_0,
/*6475*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, (bb:Other):$offset)
/*6484*/            /*Scope*/ 37, /*->6522*/
/*6485*/              OPC_CheckCondCode, ISD::SETGE,
/*6487*/              OPC_MoveParent,
/*6488*/              OPC_CheckType, MVT::i32,
/*6490*/              OPC_MoveParent,
/*6491*/              OPC_RecordChild2, // #3 = $dst
/*6492*/              OPC_MoveChild, 2,
/*6494*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6497*/              OPC_MoveParent,
/*6498*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6500*/              OPC_EmitMergeInputChains1_0,
/*6501*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6510*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6513*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6522*/            /*Scope*/ 37, /*->6560*/
/*6523*/              OPC_CheckCondCode, ISD::SETUGE,
/*6525*/              OPC_MoveParent,
/*6526*/              OPC_CheckType, MVT::i32,
/*6528*/              OPC_MoveParent,
/*6529*/              OPC_RecordChild2, // #3 = $dst
/*6530*/              OPC_MoveChild, 2,
/*6532*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6535*/              OPC_MoveParent,
/*6536*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6538*/              OPC_EmitMergeInputChains1_0,
/*6539*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6548*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6551*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6560*/            /*Scope*/ 37, /*->6598*/
/*6561*/              OPC_CheckCondCode, ISD::SETLE,
/*6563*/              OPC_MoveParent,
/*6564*/              OPC_CheckType, MVT::i32,
/*6566*/              OPC_MoveParent,
/*6567*/              OPC_RecordChild2, // #3 = $dst
/*6568*/              OPC_MoveChild, 2,
/*6570*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6573*/              OPC_MoveParent,
/*6574*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6576*/              OPC_EmitMergeInputChains1_0,
/*6577*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6586*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6589*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6598*/            /*Scope*/ 37, /*->6636*/
/*6599*/              OPC_CheckCondCode, ISD::SETULE,
/*6601*/              OPC_MoveParent,
/*6602*/              OPC_CheckType, MVT::i32,
/*6604*/              OPC_MoveParent,
/*6605*/              OPC_RecordChild2, // #3 = $dst
/*6606*/              OPC_MoveChild, 2,
/*6608*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6611*/              OPC_MoveParent,
/*6612*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6614*/              OPC_EmitMergeInputChains1_0,
/*6615*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6624*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6627*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6636*/            /*Scope*/ 25, /*->6662*/
/*6637*/              OPC_CheckCondCode, ISD::SETEQ,
/*6639*/              OPC_MoveParent,
/*6640*/              OPC_CheckType, MVT::i32,
/*6642*/              OPC_MoveParent,
/*6643*/              OPC_RecordChild2, // #3 = $imm16
/*6644*/              OPC_MoveChild, 2,
/*6646*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6649*/              OPC_MoveParent,
/*6650*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6652*/              OPC_EmitMergeInputChains1_0,
/*6653*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6662*/            /*Scope*/ 25, /*->6688*/
/*6663*/              OPC_CheckCondCode, ISD::SETGT,
/*6665*/              OPC_MoveParent,
/*6666*/              OPC_CheckType, MVT::i32,
/*6668*/              OPC_MoveParent,
/*6669*/              OPC_RecordChild2, // #3 = $imm16
/*6670*/              OPC_MoveChild, 2,
/*6672*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6675*/              OPC_MoveParent,
/*6676*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6678*/              OPC_EmitMergeInputChains1_0,
/*6679*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6688*/            /*Scope*/ 25, /*->6714*/
/*6689*/              OPC_CheckCondCode, ISD::SETGE,
/*6691*/              OPC_MoveParent,
/*6692*/              OPC_CheckType, MVT::i32,
/*6694*/              OPC_MoveParent,
/*6695*/              OPC_RecordChild2, // #3 = $imm16
/*6696*/              OPC_MoveChild, 2,
/*6698*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6701*/              OPC_MoveParent,
/*6702*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6704*/              OPC_EmitMergeInputChains1_0,
/*6705*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6714*/            /*Scope*/ 25, /*->6740*/
/*6715*/              OPC_CheckCondCode, ISD::SETLT,
/*6717*/              OPC_MoveParent,
/*6718*/              OPC_CheckType, MVT::i32,
/*6720*/              OPC_MoveParent,
/*6721*/              OPC_RecordChild2, // #3 = $imm16
/*6722*/              OPC_MoveChild, 2,
/*6724*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6727*/              OPC_MoveParent,
/*6728*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6730*/              OPC_EmitMergeInputChains1_0,
/*6731*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6740*/            /*Scope*/ 25, /*->6766*/
/*6741*/              OPC_CheckCondCode, ISD::SETLE,
/*6743*/              OPC_MoveParent,
/*6744*/              OPC_CheckType, MVT::i32,
/*6746*/              OPC_MoveParent,
/*6747*/              OPC_RecordChild2, // #3 = $imm16
/*6748*/              OPC_MoveChild, 2,
/*6750*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6753*/              OPC_MoveParent,
/*6754*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6756*/              OPC_EmitMergeInputChains1_0,
/*6757*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6766*/            /*Scope*/ 25, /*->6792*/
/*6767*/              OPC_CheckCondCode, ISD::SETNE,
/*6769*/              OPC_MoveParent,
/*6770*/              OPC_CheckType, MVT::i32,
/*6772*/              OPC_MoveParent,
/*6773*/              OPC_RecordChild2, // #3 = $imm16
/*6774*/              OPC_MoveChild, 2,
/*6776*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6779*/              OPC_MoveParent,
/*6780*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6782*/              OPC_EmitMergeInputChains1_0,
/*6783*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6792*/            0, /*End of Scope*/
/*6793*/          0, /*End of Scope*/
/*6794*/        0, /*End of Scope*/
/*6795*/      /*Scope*/ 12|128,5/*652*/, /*->7449*/
/*6797*/        OPC_CheckChild0Type, MVT::i64,
/*6799*/        OPC_Scope, 112|128,1/*240*/, /*->7042*/ // 2 children in Scope
/*6802*/          OPC_MoveChild, 1,
/*6804*/          OPC_Scope, 37|128,1/*165*/, /*->6972*/ // 3 children in Scope
/*6807*/            OPC_CheckInteger, 0, 
/*6809*/            OPC_MoveParent,
/*6810*/            OPC_MoveChild, 2,
/*6812*/            OPC_Scope, 24, /*->6838*/ // 6 children in Scope
/*6814*/              OPC_CheckCondCode, ISD::SETGE,
/*6816*/              OPC_MoveParent,
/*6817*/              OPC_CheckType, MVT::i32,
/*6819*/              OPC_MoveParent,
/*6820*/              OPC_RecordChild2, // #2 = $offset
/*6821*/              OPC_MoveChild, 2,
/*6823*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6826*/              OPC_MoveParent,
/*6827*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6829*/              OPC_EmitMergeInputChains1_0,
/*6830*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGEZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6838*/            /*Scope*/ 24, /*->6863*/
/*6839*/              OPC_CheckCondCode, ISD::SETGT,
/*6841*/              OPC_MoveParent,
/*6842*/              OPC_CheckType, MVT::i32,
/*6844*/              OPC_MoveParent,
/*6845*/              OPC_RecordChild2, // #2 = $offset
/*6846*/              OPC_MoveChild, 2,
/*6848*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6851*/              OPC_MoveParent,
/*6852*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6854*/              OPC_EmitMergeInputChains1_0,
/*6855*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BGTZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6863*/            /*Scope*/ 24, /*->6888*/
/*6864*/              OPC_CheckCondCode, ISD::SETLE,
/*6866*/              OPC_MoveParent,
/*6867*/              OPC_CheckType, MVT::i32,
/*6869*/              OPC_MoveParent,
/*6870*/              OPC_RecordChild2, // #2 = $offset
/*6871*/              OPC_MoveChild, 2,
/*6873*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6876*/              OPC_MoveParent,
/*6877*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6879*/              OPC_EmitMergeInputChains1_0,
/*6880*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLEZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6888*/            /*Scope*/ 24, /*->6913*/
/*6889*/              OPC_CheckCondCode, ISD::SETLT,
/*6891*/              OPC_MoveParent,
/*6892*/              OPC_CheckType, MVT::i32,
/*6894*/              OPC_MoveParent,
/*6895*/              OPC_RecordChild2, // #2 = $offset
/*6896*/              OPC_MoveChild, 2,
/*6898*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6901*/              OPC_MoveParent,
/*6902*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6904*/              OPC_EmitMergeInputChains1_0,
/*6905*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                      // Dst: (BLTZ64 GPR64Opnd:i64:$rs, (bb:Other):$offset)
/*6913*/            /*Scope*/ 28, /*->6942*/
/*6914*/              OPC_CheckCondCode, ISD::SETNE,
/*6916*/              OPC_MoveParent,
/*6917*/              OPC_CheckType, MVT::i32,
/*6919*/              OPC_MoveParent,
/*6920*/              OPC_RecordChild2, // #2 = $dst
/*6921*/              OPC_MoveChild, 2,
/*6923*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6926*/              OPC_MoveParent,
/*6927*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6929*/              OPC_EmitMergeInputChains1_0,
/*6930*/              OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6933*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BNE64 GPR64:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6942*/            /*Scope*/ 28, /*->6971*/
/*6943*/              OPC_CheckCondCode, ISD::SETEQ,
/*6945*/              OPC_MoveParent,
/*6946*/              OPC_CheckType, MVT::i32,
/*6948*/              OPC_MoveParent,
/*6949*/              OPC_RecordChild2, // #2 = $dst
/*6950*/              OPC_MoveChild, 2,
/*6952*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6955*/              OPC_MoveParent,
/*6956*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6958*/              OPC_EmitMergeInputChains1_0,
/*6959*/              OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6962*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BEQ64 GPR64:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6971*/            0, /*End of Scope*/
/*6972*/          /*Scope*/ 29, /*->7002*/
/*6973*/            OPC_CheckInteger, 1, 
/*6975*/            OPC_MoveParent,
/*6976*/            OPC_MoveChild, 2,
/*6978*/            OPC_CheckCondCode, ISD::SETLT,
/*6980*/            OPC_MoveParent,
/*6981*/            OPC_CheckType, MVT::i32,
/*6983*/            OPC_MoveParent,
/*6984*/            OPC_RecordChild2, // #2 = $dst
/*6985*/            OPC_MoveChild, 2,
/*6987*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6990*/            OPC_MoveParent,
/*6991*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*6993*/            OPC_EmitMergeInputChains1_0,
/*6994*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i64:i64:$lhs, 1:i64, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BLEZ64 i64:i64:$lhs, (bb:Other):$dst)
/*7002*/          /*Scope*/ 38, /*->7041*/
/*7003*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7014*/            OPC_MoveParent,
/*7015*/            OPC_MoveChild, 2,
/*7017*/            OPC_CheckCondCode, ISD::SETGT,
/*7019*/            OPC_MoveParent,
/*7020*/            OPC_CheckType, MVT::i32,
/*7022*/            OPC_MoveParent,
/*7023*/            OPC_RecordChild2, // #2 = $dst
/*7024*/            OPC_MoveChild, 2,
/*7026*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7029*/            OPC_MoveParent,
/*7030*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7032*/            OPC_EmitMergeInputChains1_0,
/*7033*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 i64:i64:$lhs, -1:i64, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BGEZ64 i64:i64:$lhs, (bb:Other):$dst)
/*7041*/          0, /*End of Scope*/
/*7042*/        /*Scope*/ 20|128,3/*404*/, /*->7448*/
/*7044*/          OPC_RecordChild1, // #2 = $rhs
/*7045*/          OPC_Scope, 61|128,1/*189*/, /*->7237*/ // 2 children in Scope
/*7048*/            OPC_MoveChild, 1,
/*7050*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7053*/            OPC_Scope, 87, /*->7142*/ // 2 children in Scope
/*7055*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7057*/              OPC_MoveParent,
/*7058*/              OPC_MoveChild, 2,
/*7060*/              OPC_Scope, 39, /*->7101*/ // 2 children in Scope
/*7062*/                OPC_CheckCondCode, ISD::SETGE,
/*7064*/                OPC_MoveParent,
/*7065*/                OPC_CheckType, MVT::i32,
/*7067*/                OPC_MoveParent,
/*7068*/                OPC_RecordChild2, // #3 = $dst
/*7069*/                OPC_MoveChild, 2,
/*7071*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7074*/                OPC_MoveParent,
/*7075*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7077*/                OPC_EmitMergeInputChains1_0,
/*7078*/                OPC_EmitConvertToTarget, 2,
/*7080*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*7089*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7092*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*7101*/              /*Scope*/ 39, /*->7141*/
/*7102*/                OPC_CheckCondCode, ISD::SETUGE,
/*7104*/                OPC_MoveParent,
/*7105*/                OPC_CheckType, MVT::i32,
/*7107*/                OPC_MoveParent,
/*7108*/                OPC_RecordChild2, // #3 = $dst
/*7109*/                OPC_MoveChild, 2,
/*7111*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7114*/                OPC_MoveParent,
/*7115*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7117*/                OPC_EmitMergeInputChains1_0,
/*7118*/                OPC_EmitConvertToTarget, 2,
/*7120*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*7129*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7132*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*7141*/              0, /*End of Scope*/
/*7142*/            /*Scope*/ 93, /*->7236*/
/*7143*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7145*/              OPC_MoveParent,
/*7146*/              OPC_MoveChild, 2,
/*7148*/              OPC_Scope, 42, /*->7192*/ // 2 children in Scope
/*7150*/                OPC_CheckCondCode, ISD::SETGT,
/*7152*/                OPC_MoveParent,
/*7153*/                OPC_CheckType, MVT::i32,
/*7155*/                OPC_MoveParent,
/*7156*/                OPC_RecordChild2, // #3 = $dst
/*7157*/                OPC_MoveChild, 2,
/*7159*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7162*/                OPC_MoveParent,
/*7163*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7165*/                OPC_EmitMergeInputChains1_0,
/*7166*/                OPC_EmitConvertToTarget, 2,
/*7168*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7171*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*7180*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7183*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), ZERO:i32, (bb:Other):$dst)
/*7192*/              /*Scope*/ 42, /*->7235*/
/*7193*/                OPC_CheckCondCode, ISD::SETUGT,
/*7195*/                OPC_MoveParent,
/*7196*/                OPC_CheckType, MVT::i32,
/*7198*/                OPC_MoveParent,
/*7199*/                OPC_RecordChild2, // #3 = $dst
/*7200*/                OPC_MoveChild, 2,
/*7202*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7205*/                OPC_MoveParent,
/*7206*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7208*/                OPC_EmitMergeInputChains1_0,
/*7209*/                OPC_EmitConvertToTarget, 2,
/*7211*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7214*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*7223*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7226*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 6, 7, 3, 
                        // Src: (brcond (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), ZERO:i32, (bb:Other):$dst)
/*7235*/              0, /*End of Scope*/
/*7236*/            0, /*End of Scope*/
/*7237*/          /*Scope*/ 80|128,1/*208*/, /*->7447*/
/*7239*/            OPC_MoveChild, 2,
/*7241*/            OPC_Scope, 25, /*->7268*/ // 6 children in Scope
/*7243*/              OPC_CheckCondCode, ISD::SETEQ,
/*7245*/              OPC_MoveParent,
/*7246*/              OPC_CheckType, MVT::i32,
/*7248*/              OPC_MoveParent,
/*7249*/              OPC_RecordChild2, // #3 = $offset
/*7250*/              OPC_MoveChild, 2,
/*7252*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7255*/              OPC_MoveParent,
/*7256*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7258*/              OPC_EmitMergeInputChains1_0,
/*7259*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, (bb:Other):$offset)
/*7268*/            /*Scope*/ 25, /*->7294*/
/*7269*/              OPC_CheckCondCode, ISD::SETNE,
/*7271*/              OPC_MoveParent,
/*7272*/              OPC_CheckType, MVT::i32,
/*7274*/              OPC_MoveParent,
/*7275*/              OPC_RecordChild2, // #3 = $offset
/*7276*/              OPC_MoveChild, 2,
/*7278*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7281*/              OPC_MoveParent,
/*7282*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7284*/              OPC_EmitMergeInputChains1_0,
/*7285*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, (bb:Other):$offset)
/*7294*/            /*Scope*/ 37, /*->7332*/
/*7295*/              OPC_CheckCondCode, ISD::SETGE,
/*7297*/              OPC_MoveParent,
/*7298*/              OPC_CheckType, MVT::i32,
/*7300*/              OPC_MoveParent,
/*7301*/              OPC_RecordChild2, // #3 = $dst
/*7302*/              OPC_MoveChild, 2,
/*7304*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7307*/              OPC_MoveParent,
/*7308*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7310*/              OPC_EmitMergeInputChains1_0,
/*7311*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*7320*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7323*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*7332*/            /*Scope*/ 37, /*->7370*/
/*7333*/              OPC_CheckCondCode, ISD::SETUGE,
/*7335*/              OPC_MoveParent,
/*7336*/              OPC_CheckType, MVT::i32,
/*7338*/              OPC_MoveParent,
/*7339*/              OPC_RecordChild2, // #3 = $dst
/*7340*/              OPC_MoveChild, 2,
/*7342*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7345*/              OPC_MoveParent,
/*7346*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7348*/              OPC_EmitMergeInputChains1_0,
/*7349*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*7358*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7361*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*7370*/            /*Scope*/ 37, /*->7408*/
/*7371*/              OPC_CheckCondCode, ISD::SETLE,
/*7373*/              OPC_MoveParent,
/*7374*/              OPC_CheckType, MVT::i32,
/*7376*/              OPC_MoveParent,
/*7377*/              OPC_RecordChild2, // #3 = $dst
/*7378*/              OPC_MoveChild, 2,
/*7380*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7383*/              OPC_MoveParent,
/*7384*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7386*/              OPC_EmitMergeInputChains1_0,
/*7387*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*7396*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7399*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*7408*/            /*Scope*/ 37, /*->7446*/
/*7409*/              OPC_CheckCondCode, ISD::SETULE,
/*7411*/              OPC_MoveParent,
/*7412*/              OPC_CheckType, MVT::i32,
/*7414*/              OPC_MoveParent,
/*7415*/              OPC_RecordChild2, // #3 = $dst
/*7416*/              OPC_MoveChild, 2,
/*7418*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7421*/              OPC_MoveParent,
/*7422*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7424*/              OPC_EmitMergeInputChains1_0,
/*7425*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*7434*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7437*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*7446*/            0, /*End of Scope*/
/*7447*/          0, /*End of Scope*/
/*7448*/        0, /*End of Scope*/
/*7449*/      0, /*End of Scope*/
/*7450*/    /*Scope*/ 68, /*->7519*/
/*7451*/      OPC_RecordChild1, // #1 = $cond
/*7452*/      OPC_Scope, 39, /*->7493*/ // 2 children in Scope
/*7454*/        OPC_CheckChild1Type, MVT::i32,
/*7456*/        OPC_RecordChild2, // #2 = $dst
/*7457*/        OPC_MoveChild, 2,
/*7459*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7462*/        OPC_MoveParent,
/*7463*/        OPC_Scope, 15, /*->7480*/ // 2 children in Scope
/*7465*/          OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7467*/          OPC_EmitMergeInputChains1_0,
/*7468*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*7471*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond GPR32:i32:$cond, (bb:Other):$dst) - Complexity = 3
                  // Dst: (BNE GPR32:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*7480*/        /*Scope*/ 11, /*->7492*/
/*7481*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7483*/          OPC_EmitMergeInputChains1_0,
/*7484*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond CPU16Regs:i32:$rx, (bb:Other):$targ16) - Complexity = 3
                  // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*7492*/        0, /*End of Scope*/
/*7493*/      /*Scope*/ 24, /*->7518*/
/*7494*/        OPC_CheckChild1Type, MVT::i64,
/*7496*/        OPC_RecordChild2, // #2 = $dst
/*7497*/        OPC_MoveChild, 2,
/*7499*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*7502*/        OPC_MoveParent,
/*7503*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7505*/        OPC_EmitMergeInputChains1_0,
/*7506*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*7509*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond GPR64:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 GPR64:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*7518*/      0, /*End of Scope*/
/*7519*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->7601
/*7523*/    OPC_Scope, 47, /*->7572*/ // 2 children in Scope
/*7525*/      OPC_MoveChild, 0,
/*7527*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*7530*/      OPC_RecordChild0, // #0 = $rs
/*7531*/      OPC_MoveChild, 1,
/*7533*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7544*/      OPC_MoveParent,
/*7545*/      OPC_MoveParent,
/*7546*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7559
/*7549*/        OPC_CheckPatternPredicate, 14, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7551*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 GPR32Opnd:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 GPR32Opnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7571
/*7561*/        OPC_CheckPatternPredicate, 14, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7563*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 GPR64Opnd:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 GPR64Opnd:i64:$rs)
              0, // EndSwitchType
/*7572*/    /*Scope*/ 27, /*->7600*/
/*7573*/      OPC_RecordChild0, // #0 = $rs
/*7574*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7587
/*7577*/        OPC_CheckPatternPredicate, 14, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7579*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 GPR32Opnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7599
/*7589*/        OPC_CheckPatternPredicate, 14, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7591*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 GPR64Opnd:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 GPR64Opnd:i64:$rs)
              0, // EndSwitchType
/*7600*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 118|128,33/*4342*/,  TARGET_VAL(ISD::SELECT),// ->11947
/*7605*/    OPC_Scope, 47|128,16/*2095*/, /*->9703*/ // 4 children in Scope
/*7608*/      OPC_MoveChild, 0,
/*7610*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*7613*/      OPC_RecordChild0, // #0 = $lhs
/*7614*/      OPC_Scope, 67|128,9/*1219*/, /*->8836*/ // 2 children in Scope
/*7617*/        OPC_CheckChild0Type, MVT::i32,
/*7619*/        OPC_Scope, 5|128,1/*133*/, /*->7755*/ // 2 children in Scope
/*7622*/          OPC_MoveChild, 1,
/*7624*/          OPC_CheckInteger, 0, 
/*7626*/          OPC_MoveParent,
/*7627*/          OPC_MoveChild, 2,
/*7629*/          OPC_Scope, 38, /*->7669*/ // 4 children in Scope
/*7631*/            OPC_CheckCondCode, ISD::SETEQ,
/*7633*/            OPC_MoveParent,
/*7634*/            OPC_CheckType, MVT::i32,
/*7636*/            OPC_MoveParent,
/*7637*/            OPC_RecordChild1, // #1 = $T
/*7638*/            OPC_RecordChild2, // #2 = $F
/*7639*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7654
/*7642*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7644*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, GPR32:i32:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7668
/*7656*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7658*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, GPR32:i32:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*7669*/          /*Scope*/ 38, /*->7708*/
/*7670*/            OPC_CheckCondCode, ISD::SETNE,
/*7672*/            OPC_MoveParent,
/*7673*/            OPC_CheckType, MVT::i32,
/*7675*/            OPC_MoveParent,
/*7676*/            OPC_RecordChild1, // #1 = $T
/*7677*/            OPC_RecordChild2, // #2 = $F
/*7678*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7693
/*7681*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7683*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 GPR32:i32:$T, GPR32:i32:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7707
/*7695*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7697*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 GPR64:i64:$T, GPR32:i32:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*7708*/          /*Scope*/ 22, /*->7731*/
/*7709*/            OPC_CheckCondCode, ISD::SETEQ,
/*7711*/            OPC_MoveParent,
/*7712*/            OPC_CheckType, MVT::i32,
/*7714*/            OPC_MoveParent,
/*7715*/            OPC_RecordChild1, // #1 = $x
/*7716*/            OPC_RecordChild2, // #2 = $y
/*7717*/            OPC_CheckType, MVT::i32,
/*7719*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7721*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBeqZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBeqZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7731*/          /*Scope*/ 22, /*->7754*/
/*7732*/            OPC_CheckCondCode, ISD::SETNE,
/*7734*/            OPC_MoveParent,
/*7735*/            OPC_CheckType, MVT::i32,
/*7737*/            OPC_MoveParent,
/*7738*/            OPC_RecordChild1, // #1 = $x
/*7739*/            OPC_RecordChild2, // #2 = $y
/*7740*/            OPC_CheckType, MVT::i32,
/*7742*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7744*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7754*/          0, /*End of Scope*/
/*7755*/        /*Scope*/ 54|128,8/*1078*/, /*->8835*/
/*7757*/          OPC_RecordChild1, // #1 = $rhs
/*7758*/          OPC_Scope, 114|128,3/*498*/, /*->8259*/ // 2 children in Scope
/*7761*/            OPC_MoveChild, 1,
/*7763*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7766*/            OPC_Scope, 75, /*->7843*/ // 8 children in Scope
/*7768*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7770*/              OPC_MoveParent,
/*7771*/              OPC_MoveChild, 2,
/*7773*/              OPC_Scope, 33, /*->7808*/ // 2 children in Scope
/*7775*/                OPC_CheckCondCode, ISD::SETGE,
/*7777*/                OPC_MoveParent,
/*7778*/                OPC_CheckType, MVT::i32,
/*7780*/                OPC_MoveParent,
/*7781*/                OPC_RecordChild1, // #2 = $T
/*7782*/                OPC_RecordChild2, // #3 = $F
/*7783*/                OPC_CheckType, MVT::i32,
/*7785*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7787*/                OPC_EmitConvertToTarget, 1,
/*7789*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7798*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), GPR32:i32:$F)
/*7808*/              /*Scope*/ 33, /*->7842*/
/*7809*/                OPC_CheckCondCode, ISD::SETUGE,
/*7811*/                OPC_MoveParent,
/*7812*/                OPC_CheckType, MVT::i32,
/*7814*/                OPC_MoveParent,
/*7815*/                OPC_RecordChild1, // #2 = $T
/*7816*/                OPC_RecordChild2, // #3 = $F
/*7817*/                OPC_CheckType, MVT::i32,
/*7819*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7821*/                OPC_EmitConvertToTarget, 1,
/*7823*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7832*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), GPR32:i32:$F)
/*7842*/              0, /*End of Scope*/
/*7843*/            /*Scope*/ 81, /*->7925*/
/*7844*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7846*/              OPC_MoveParent,
/*7847*/              OPC_MoveChild, 2,
/*7849*/              OPC_Scope, 36, /*->7887*/ // 2 children in Scope
/*7851*/                OPC_CheckCondCode, ISD::SETGT,
/*7853*/                OPC_MoveParent,
/*7854*/                OPC_CheckType, MVT::i32,
/*7856*/                OPC_MoveParent,
/*7857*/                OPC_RecordChild1, // #2 = $T
/*7858*/                OPC_RecordChild2, // #3 = $F
/*7859*/                OPC_CheckType, MVT::i32,
/*7861*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7863*/                OPC_EmitConvertToTarget, 1,
/*7865*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7868*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7877*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR32:i32:$F)
/*7887*/              /*Scope*/ 36, /*->7924*/
/*7888*/                OPC_CheckCondCode, ISD::SETUGT,
/*7890*/                OPC_MoveParent,
/*7891*/                OPC_CheckType, MVT::i32,
/*7893*/                OPC_MoveParent,
/*7894*/                OPC_RecordChild1, // #2 = $T
/*7895*/                OPC_RecordChild2, // #3 = $F
/*7896*/                OPC_CheckType, MVT::i32,
/*7898*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7900*/                OPC_EmitConvertToTarget, 1,
/*7902*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7905*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7914*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR32:i32:$F)
/*7924*/              0, /*End of Scope*/
/*7925*/            /*Scope*/ 38, /*->7964*/
/*7926*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7928*/              OPC_MoveParent,
/*7929*/              OPC_MoveChild, 2,
/*7931*/              OPC_CheckCondCode, ISD::SETEQ,
/*7933*/              OPC_MoveParent,
/*7934*/              OPC_CheckType, MVT::i32,
/*7936*/              OPC_MoveParent,
/*7937*/              OPC_RecordChild1, // #2 = $T
/*7938*/              OPC_RecordChild2, // #3 = $F
/*7939*/              OPC_CheckType, MVT::i32,
/*7941*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*7943*/              OPC_EmitConvertToTarget, 1,
/*7945*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7954*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (XORi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR32:i32:$F)
/*7964*/            /*Scope*/ 75, /*->8040*/
/*7965*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7967*/              OPC_MoveParent,
/*7968*/              OPC_MoveChild, 2,
/*7970*/              OPC_Scope, 33, /*->8005*/ // 2 children in Scope
/*7972*/                OPC_CheckCondCode, ISD::SETGE,
/*7974*/                OPC_MoveParent,
/*7975*/                OPC_CheckType, MVT::i32,
/*7977*/                OPC_MoveParent,
/*7978*/                OPC_RecordChild1, // #2 = $T
/*7979*/                OPC_RecordChild2, // #3 = $F
/*7980*/                OPC_CheckType, MVT::i64,
/*7982*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7984*/                OPC_EmitConvertToTarget, 1,
/*7986*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7995*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), GPR64:i64:$F)
/*8005*/              /*Scope*/ 33, /*->8039*/
/*8006*/                OPC_CheckCondCode, ISD::SETUGE,
/*8008*/                OPC_MoveParent,
/*8009*/                OPC_CheckType, MVT::i32,
/*8011*/                OPC_MoveParent,
/*8012*/                OPC_RecordChild1, // #2 = $T
/*8013*/                OPC_RecordChild2, // #3 = $F
/*8014*/                OPC_CheckType, MVT::i64,
/*8016*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8018*/                OPC_EmitConvertToTarget, 1,
/*8020*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8029*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), GPR64:i64:$F)
/*8039*/              0, /*End of Scope*/
/*8040*/            /*Scope*/ 81, /*->8122*/
/*8041*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8043*/              OPC_MoveParent,
/*8044*/              OPC_MoveChild, 2,
/*8046*/              OPC_Scope, 36, /*->8084*/ // 2 children in Scope
/*8048*/                OPC_CheckCondCode, ISD::SETGT,
/*8050*/                OPC_MoveParent,
/*8051*/                OPC_CheckType, MVT::i32,
/*8053*/                OPC_MoveParent,
/*8054*/                OPC_RecordChild1, // #2 = $T
/*8055*/                OPC_RecordChild2, // #3 = $F
/*8056*/                OPC_CheckType, MVT::i64,
/*8058*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8060*/                OPC_EmitConvertToTarget, 1,
/*8062*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8065*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8074*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR64:i64:$F)
/*8084*/              /*Scope*/ 36, /*->8121*/
/*8085*/                OPC_CheckCondCode, ISD::SETUGT,
/*8087*/                OPC_MoveParent,
/*8088*/                OPC_CheckType, MVT::i32,
/*8090*/                OPC_MoveParent,
/*8091*/                OPC_RecordChild1, // #2 = $T
/*8092*/                OPC_RecordChild2, // #3 = $F
/*8093*/                OPC_CheckType, MVT::i64,
/*8095*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8097*/                OPC_EmitConvertToTarget, 1,
/*8099*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8102*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8111*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), GPR64:i64:$F)
/*8121*/              0, /*End of Scope*/
/*8122*/            /*Scope*/ 38, /*->8161*/
/*8123*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*8125*/              OPC_MoveParent,
/*8126*/              OPC_MoveChild, 2,
/*8128*/              OPC_CheckCondCode, ISD::SETEQ,
/*8130*/              OPC_MoveParent,
/*8131*/              OPC_CheckType, MVT::i32,
/*8133*/              OPC_MoveParent,
/*8134*/              OPC_RecordChild1, // #2 = $T
/*8135*/              OPC_RecordChild2, // #3 = $F
/*8136*/              OPC_CheckType, MVT::i64,
/*8138*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8140*/              OPC_EmitConvertToTarget, 1,
/*8142*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8151*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (XORi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR64:i64:$F)
/*8161*/            /*Scope*/ 30, /*->8192*/
/*8162*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8164*/              OPC_MoveParent,
/*8165*/              OPC_MoveChild, 2,
/*8167*/              OPC_CheckCondCode, ISD::SETLT,
/*8169*/              OPC_MoveParent,
/*8170*/              OPC_CheckType, MVT::i32,
/*8172*/              OPC_MoveParent,
/*8173*/              OPC_RecordChild1, // #2 = $x
/*8174*/              OPC_RecordChild2, // #3 = $y
/*8175*/              OPC_CheckType, MVT::i32,
/*8177*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8179*/              OPC_EmitConvertToTarget, 1,
/*8181*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlti), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 4, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b, SETLT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                      // Dst: (SelTBtneZSlti:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b)
/*8192*/            /*Scope*/ 65, /*->8258*/
/*8193*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*8195*/              OPC_MoveParent,
/*8196*/              OPC_MoveChild, 2,
/*8198*/              OPC_Scope, 28, /*->8228*/ // 2 children in Scope
/*8200*/                OPC_CheckCondCode, ISD::SETEQ,
/*8202*/                OPC_MoveParent,
/*8203*/                OPC_CheckType, MVT::i32,
/*8205*/                OPC_MoveParent,
/*8206*/                OPC_RecordChild1, // #2 = $x
/*8207*/                OPC_RecordChild2, // #3 = $y
/*8208*/                OPC_CheckType, MVT::i32,
/*8210*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8212*/                OPC_EmitConvertToTarget, 1,
/*8214*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*8217*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBteqZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*8228*/              /*Scope*/ 28, /*->8257*/
/*8229*/                OPC_CheckCondCode, ISD::SETNE,
/*8231*/                OPC_MoveParent,
/*8232*/                OPC_CheckType, MVT::i32,
/*8234*/                OPC_MoveParent,
/*8235*/                OPC_RecordChild1, // #2 = $x
/*8236*/                OPC_RecordChild2, // #3 = $y
/*8237*/                OPC_CheckType, MVT::i32,
/*8239*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8241*/                OPC_EmitConvertToTarget, 1,
/*8243*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*8246*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBtneZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*8257*/              0, /*End of Scope*/
/*8258*/            0, /*End of Scope*/
/*8259*/          /*Scope*/ 61|128,4/*573*/, /*->8834*/
/*8261*/            OPC_MoveChild, 2,
/*8263*/            OPC_Scope, 31, /*->8296*/ // 19 children in Scope
/*8265*/              OPC_CheckCondCode, ISD::SETGE,
/*8267*/              OPC_MoveParent,
/*8268*/              OPC_CheckType, MVT::i32,
/*8270*/              OPC_MoveParent,
/*8271*/              OPC_RecordChild1, // #2 = $T
/*8272*/              OPC_RecordChild2, // #3 = $F
/*8273*/              OPC_CheckType, MVT::i32,
/*8275*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*8277*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8286*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
/*8296*/            /*Scope*/ 31, /*->8328*/
/*8297*/              OPC_CheckCondCode, ISD::SETUGE,
/*8299*/              OPC_MoveParent,
/*8300*/              OPC_CheckType, MVT::i32,
/*8302*/              OPC_MoveParent,
/*8303*/              OPC_RecordChild1, // #2 = $T
/*8304*/              OPC_RecordChild2, // #3 = $F
/*8305*/              OPC_CheckType, MVT::i32,
/*8307*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*8309*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8318*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
/*8328*/            /*Scope*/ 31, /*->8360*/
/*8329*/              OPC_CheckCondCode, ISD::SETLE,
/*8331*/              OPC_MoveParent,
/*8332*/              OPC_CheckType, MVT::i32,
/*8334*/              OPC_MoveParent,
/*8335*/              OPC_RecordChild1, // #2 = $T
/*8336*/              OPC_RecordChild2, // #3 = $F
/*8337*/              OPC_CheckType, MVT::i32,
/*8339*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*8341*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8350*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR32:i32:$F)
/*8360*/            /*Scope*/ 31, /*->8392*/
/*8361*/              OPC_CheckCondCode, ISD::SETULE,
/*8363*/              OPC_MoveParent,
/*8364*/              OPC_CheckType, MVT::i32,
/*8366*/              OPC_MoveParent,
/*8367*/              OPC_RecordChild1, // #2 = $T
/*8368*/              OPC_RecordChild2, // #3 = $F
/*8369*/              OPC_CheckType, MVT::i32,
/*8371*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*8373*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8382*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR32:i32:$F)
/*8392*/            /*Scope*/ 31, /*->8424*/
/*8393*/              OPC_CheckCondCode, ISD::SETEQ,
/*8395*/              OPC_MoveParent,
/*8396*/              OPC_CheckType, MVT::i32,
/*8398*/              OPC_MoveParent,
/*8399*/              OPC_RecordChild1, // #2 = $T
/*8400*/              OPC_RecordChild2, // #3 = $F
/*8401*/              OPC_CheckType, MVT::i32,
/*8403*/              OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*8405*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8414*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
/*8424*/            /*Scope*/ 31, /*->8456*/
/*8425*/              OPC_CheckCondCode, ISD::SETGE,
/*8427*/              OPC_MoveParent,
/*8428*/              OPC_CheckType, MVT::i32,
/*8430*/              OPC_MoveParent,
/*8431*/              OPC_RecordChild1, // #2 = $T
/*8432*/              OPC_RecordChild2, // #3 = $F
/*8433*/              OPC_CheckType, MVT::i64,
/*8435*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8437*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8446*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
/*8456*/            /*Scope*/ 31, /*->8488*/
/*8457*/              OPC_CheckCondCode, ISD::SETUGE,
/*8459*/              OPC_MoveParent,
/*8460*/              OPC_CheckType, MVT::i32,
/*8462*/              OPC_MoveParent,
/*8463*/              OPC_RecordChild1, // #2 = $T
/*8464*/              OPC_RecordChild2, // #3 = $F
/*8465*/              OPC_CheckType, MVT::i64,
/*8467*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8469*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8478*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
/*8488*/            /*Scope*/ 31, /*->8520*/
/*8489*/              OPC_CheckCondCode, ISD::SETLE,
/*8491*/              OPC_MoveParent,
/*8492*/              OPC_CheckType, MVT::i32,
/*8494*/              OPC_MoveParent,
/*8495*/              OPC_RecordChild1, // #2 = $T
/*8496*/              OPC_RecordChild2, // #3 = $F
/*8497*/              OPC_CheckType, MVT::i64,
/*8499*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8501*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8510*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR64:i64:$F)
/*8520*/            /*Scope*/ 31, /*->8552*/
/*8521*/              OPC_CheckCondCode, ISD::SETULE,
/*8523*/              OPC_MoveParent,
/*8524*/              OPC_CheckType, MVT::i32,
/*8526*/              OPC_MoveParent,
/*8527*/              OPC_RecordChild1, // #2 = $T
/*8528*/              OPC_RecordChild2, // #3 = $F
/*8529*/              OPC_CheckType, MVT::i64,
/*8531*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8533*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8542*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), GPR64:i64:$F)
/*8552*/            /*Scope*/ 31, /*->8584*/
/*8553*/              OPC_CheckCondCode, ISD::SETEQ,
/*8555*/              OPC_MoveParent,
/*8556*/              OPC_CheckType, MVT::i32,
/*8558*/              OPC_MoveParent,
/*8559*/              OPC_RecordChild1, // #2 = $T
/*8560*/              OPC_RecordChild2, // #3 = $F
/*8561*/              OPC_CheckType, MVT::i64,
/*8563*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8565*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8574*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
/*8584*/            /*Scope*/ 56, /*->8641*/
/*8585*/              OPC_CheckCondCode, ISD::SETNE,
/*8587*/              OPC_MoveParent,
/*8588*/              OPC_CheckType, MVT::i32,
/*8590*/              OPC_MoveParent,
/*8591*/              OPC_RecordChild1, // #2 = $T
/*8592*/              OPC_RecordChild2, // #3 = $F
/*8593*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8617
/*8596*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*8598*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8607*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 GPR32:i32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR32:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->8640
/*8619*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8621*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8630*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 GPR64:i64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), GPR64:i64:$F)
                      0, // EndSwitchType
/*8641*/            /*Scope*/ 23, /*->8665*/
/*8642*/              OPC_CheckCondCode, ISD::SETGE,
/*8644*/              OPC_MoveParent,
/*8645*/              OPC_CheckType, MVT::i32,
/*8647*/              OPC_MoveParent,
/*8648*/              OPC_RecordChild1, // #2 = $x
/*8649*/              OPC_RecordChild2, // #3 = $y
/*8650*/              OPC_CheckType, MVT::i32,
/*8652*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8654*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8665*/            /*Scope*/ 23, /*->8689*/
/*8666*/              OPC_CheckCondCode, ISD::SETGT,
/*8668*/              OPC_MoveParent,
/*8669*/              OPC_CheckType, MVT::i32,
/*8671*/              OPC_MoveParent,
/*8672*/              OPC_RecordChild1, // #2 = $x
/*8673*/              OPC_RecordChild2, // #3 = $y
/*8674*/              OPC_CheckType, MVT::i32,
/*8676*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8678*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8689*/            /*Scope*/ 23, /*->8713*/
/*8690*/              OPC_CheckCondCode, ISD::SETUGE,
/*8692*/              OPC_MoveParent,
/*8693*/              OPC_CheckType, MVT::i32,
/*8695*/              OPC_MoveParent,
/*8696*/              OPC_RecordChild1, // #2 = $x
/*8697*/              OPC_RecordChild2, // #3 = $y
/*8698*/              OPC_CheckType, MVT::i32,
/*8700*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8702*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8713*/            /*Scope*/ 23, /*->8737*/
/*8714*/              OPC_CheckCondCode, ISD::SETUGT,
/*8716*/              OPC_MoveParent,
/*8717*/              OPC_CheckType, MVT::i32,
/*8719*/              OPC_MoveParent,
/*8720*/              OPC_RecordChild1, // #2 = $x
/*8721*/              OPC_RecordChild2, // #3 = $y
/*8722*/              OPC_CheckType, MVT::i32,
/*8724*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8726*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8737*/            /*Scope*/ 23, /*->8761*/
/*8738*/              OPC_CheckCondCode, ISD::SETLE,
/*8740*/              OPC_MoveParent,
/*8741*/              OPC_CheckType, MVT::i32,
/*8743*/              OPC_MoveParent,
/*8744*/              OPC_RecordChild1, // #2 = $x
/*8745*/              OPC_RecordChild2, // #3 = $y
/*8746*/              OPC_CheckType, MVT::i32,
/*8748*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8750*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETLE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8761*/            /*Scope*/ 23, /*->8785*/
/*8762*/              OPC_CheckCondCode, ISD::SETULE,
/*8764*/              OPC_MoveParent,
/*8765*/              OPC_CheckType, MVT::i32,
/*8767*/              OPC_MoveParent,
/*8768*/              OPC_RecordChild1, // #2 = $x
/*8769*/              OPC_RecordChild2, // #3 = $y
/*8770*/              OPC_CheckType, MVT::i32,
/*8772*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8774*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETULE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8785*/            /*Scope*/ 23, /*->8809*/
/*8786*/              OPC_CheckCondCode, ISD::SETEQ,
/*8788*/              OPC_MoveParent,
/*8789*/              OPC_CheckType, MVT::i32,
/*8791*/              OPC_MoveParent,
/*8792*/              OPC_RecordChild1, // #2 = $x
/*8793*/              OPC_RecordChild2, // #3 = $y
/*8794*/              OPC_CheckType, MVT::i32,
/*8796*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8798*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8809*/            /*Scope*/ 23, /*->8833*/
/*8810*/              OPC_CheckCondCode, ISD::SETNE,
/*8812*/              OPC_MoveParent,
/*8813*/              OPC_CheckType, MVT::i32,
/*8815*/              OPC_MoveParent,
/*8816*/              OPC_RecordChild1, // #2 = $x
/*8817*/              OPC_RecordChild2, // #3 = $y
/*8818*/              OPC_CheckType, MVT::i32,
/*8820*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8822*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8833*/            0, /*End of Scope*/
/*8834*/          0, /*End of Scope*/
/*8835*/        0, /*End of Scope*/
/*8836*/      /*Scope*/ 96|128,6/*864*/, /*->9702*/
/*8838*/        OPC_CheckChild0Type, MVT::i64,
/*8840*/        OPC_Scope, 87, /*->8929*/ // 2 children in Scope
/*8842*/          OPC_MoveChild, 1,
/*8844*/          OPC_CheckInteger, 0, 
/*8846*/          OPC_MoveParent,
/*8847*/          OPC_MoveChild, 2,
/*8849*/          OPC_Scope, 38, /*->8889*/ // 2 children in Scope
/*8851*/            OPC_CheckCondCode, ISD::SETEQ,
/*8853*/            OPC_MoveParent,
/*8854*/            OPC_CheckType, MVT::i32,
/*8856*/            OPC_MoveParent,
/*8857*/            OPC_RecordChild1, // #1 = $T
/*8858*/            OPC_RecordChild2, // #2 = $F
/*8859*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8874
/*8862*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8864*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 GPR32:i32:$T, GPR64:i64:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8888
/*8876*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8878*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 GPR64:i64:$T, GPR64:i64:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*8889*/          /*Scope*/ 38, /*->8928*/
/*8890*/            OPC_CheckCondCode, ISD::SETNE,
/*8892*/            OPC_MoveParent,
/*8893*/            OPC_CheckType, MVT::i32,
/*8895*/            OPC_MoveParent,
/*8896*/            OPC_RecordChild1, // #1 = $T
/*8897*/            OPC_RecordChild2, // #2 = $F
/*8898*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8913
/*8901*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8903*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 GPR32:i32:$T, GPR64:i64:$lhs, GPR32:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8927
/*8915*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8917*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 GPR64:i64:$T, GPR64:i64:$lhs, GPR64:i64:$F)
                    0, // EndSwitchType
/*8928*/          0, /*End of Scope*/
/*8929*/        /*Scope*/ 2|128,6/*770*/, /*->9701*/
/*8931*/          OPC_RecordChild1, // #1 = $rhs
/*8932*/          OPC_Scope, 5|128,3/*389*/, /*->9324*/ // 2 children in Scope
/*8935*/            OPC_MoveChild, 1,
/*8937*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8940*/            OPC_Scope, 75, /*->9017*/ // 5 children in Scope
/*8942*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8944*/              OPC_MoveParent,
/*8945*/              OPC_MoveChild, 2,
/*8947*/              OPC_Scope, 33, /*->8982*/ // 2 children in Scope
/*8949*/                OPC_CheckCondCode, ISD::SETGE,
/*8951*/                OPC_MoveParent,
/*8952*/                OPC_CheckType, MVT::i32,
/*8954*/                OPC_MoveParent,
/*8955*/                OPC_RecordChild1, // #2 = $T
/*8956*/                OPC_RecordChild2, // #3 = $F
/*8957*/                OPC_CheckType, MVT::i32,
/*8959*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8961*/                OPC_EmitConvertToTarget, 1,
/*8963*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8972*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), GPR32:i32:$F)
/*8982*/              /*Scope*/ 33, /*->9016*/
/*8983*/                OPC_CheckCondCode, ISD::SETUGE,
/*8985*/                OPC_MoveParent,
/*8986*/                OPC_CheckType, MVT::i32,
/*8988*/                OPC_MoveParent,
/*8989*/                OPC_RecordChild1, // #2 = $T
/*8990*/                OPC_RecordChild2, // #3 = $F
/*8991*/                OPC_CheckType, MVT::i32,
/*8993*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8995*/                OPC_EmitConvertToTarget, 1,
/*8997*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9006*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), GPR32:i32:$F)
/*9016*/              0, /*End of Scope*/
/*9017*/            /*Scope*/ 81, /*->9099*/
/*9018*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9020*/              OPC_MoveParent,
/*9021*/              OPC_MoveChild, 2,
/*9023*/              OPC_Scope, 36, /*->9061*/ // 2 children in Scope
/*9025*/                OPC_CheckCondCode, ISD::SETGT,
/*9027*/                OPC_MoveParent,
/*9028*/                OPC_CheckType, MVT::i32,
/*9030*/                OPC_MoveParent,
/*9031*/                OPC_RecordChild1, // #2 = $T
/*9032*/                OPC_RecordChild2, // #3 = $F
/*9033*/                OPC_CheckType, MVT::i32,
/*9035*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9037*/                OPC_EmitConvertToTarget, 1,
/*9039*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9042*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9051*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR32:i32:$F)
/*9061*/              /*Scope*/ 36, /*->9098*/
/*9062*/                OPC_CheckCondCode, ISD::SETUGT,
/*9064*/                OPC_MoveParent,
/*9065*/                OPC_CheckType, MVT::i32,
/*9067*/                OPC_MoveParent,
/*9068*/                OPC_RecordChild1, // #2 = $T
/*9069*/                OPC_RecordChild2, // #3 = $F
/*9070*/                OPC_CheckType, MVT::i32,
/*9072*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9074*/                OPC_EmitConvertToTarget, 1,
/*9076*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9079*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9088*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR32:i32:$F)
/*9098*/              0, /*End of Scope*/
/*9099*/            /*Scope*/ 75, /*->9175*/
/*9100*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9102*/              OPC_MoveParent,
/*9103*/              OPC_MoveChild, 2,
/*9105*/              OPC_Scope, 33, /*->9140*/ // 2 children in Scope
/*9107*/                OPC_CheckCondCode, ISD::SETGE,
/*9109*/                OPC_MoveParent,
/*9110*/                OPC_CheckType, MVT::i32,
/*9112*/                OPC_MoveParent,
/*9113*/                OPC_RecordChild1, // #2 = $T
/*9114*/                OPC_RecordChild2, // #3 = $F
/*9115*/                OPC_CheckType, MVT::i64,
/*9117*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9119*/                OPC_EmitConvertToTarget, 1,
/*9121*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9130*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), GPR64:i64:$F)
/*9140*/              /*Scope*/ 33, /*->9174*/
/*9141*/                OPC_CheckCondCode, ISD::SETUGE,
/*9143*/                OPC_MoveParent,
/*9144*/                OPC_CheckType, MVT::i32,
/*9146*/                OPC_MoveParent,
/*9147*/                OPC_RecordChild1, // #2 = $T
/*9148*/                OPC_RecordChild2, // #3 = $F
/*9149*/                OPC_CheckType, MVT::i64,
/*9151*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9153*/                OPC_EmitConvertToTarget, 1,
/*9155*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9164*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), GPR64:i64:$F)
/*9174*/              0, /*End of Scope*/
/*9175*/            /*Scope*/ 81, /*->9257*/
/*9176*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9178*/              OPC_MoveParent,
/*9179*/              OPC_MoveChild, 2,
/*9181*/              OPC_Scope, 36, /*->9219*/ // 2 children in Scope
/*9183*/                OPC_CheckCondCode, ISD::SETGT,
/*9185*/                OPC_MoveParent,
/*9186*/                OPC_CheckType, MVT::i32,
/*9188*/                OPC_MoveParent,
/*9189*/                OPC_RecordChild1, // #2 = $T
/*9190*/                OPC_RecordChild2, // #3 = $F
/*9191*/                OPC_CheckType, MVT::i64,
/*9193*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9195*/                OPC_EmitConvertToTarget, 1,
/*9197*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9200*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9209*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR64:i64:$F)
/*9219*/              /*Scope*/ 36, /*->9256*/
/*9220*/                OPC_CheckCondCode, ISD::SETUGT,
/*9222*/                OPC_MoveParent,
/*9223*/                OPC_CheckType, MVT::i32,
/*9225*/                OPC_MoveParent,
/*9226*/                OPC_RecordChild1, // #2 = $T
/*9227*/                OPC_RecordChild2, // #3 = $F
/*9228*/                OPC_CheckType, MVT::i64,
/*9230*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9232*/                OPC_EmitConvertToTarget, 1,
/*9234*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9237*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9246*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), GPR64:i64:$F)
/*9256*/              0, /*End of Scope*/
/*9257*/            /*Scope*/ 65, /*->9323*/
/*9258*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*9260*/              OPC_MoveParent,
/*9261*/              OPC_MoveChild, 2,
/*9263*/              OPC_CheckCondCode, ISD::SETEQ,
/*9265*/              OPC_MoveParent,
/*9266*/              OPC_CheckType, MVT::i32,
/*9268*/              OPC_MoveParent,
/*9269*/              OPC_RecordChild1, // #2 = $T
/*9270*/              OPC_RecordChild2, // #3 = $F
/*9271*/              OPC_SwitchType /*2 cases */, 23,  MVT::i32,// ->9297
/*9274*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9276*/                OPC_EmitConvertToTarget, 1,
/*9278*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*9287*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I:i32 GPR32:i32:$T, (XORi64:i64 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR32:i32:$F)
                      /*SwitchType*/ 23,  MVT::i64,// ->9322
/*9299*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9301*/                OPC_EmitConvertToTarget, 1,
/*9303*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*9312*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I64:i64 GPR64:i64:$T, (XORi64:i64 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), GPR64:i64:$F)
                      0, // EndSwitchType
/*9323*/            0, /*End of Scope*/
/*9324*/          /*Scope*/ 118|128,2/*374*/, /*->9700*/
/*9326*/            OPC_MoveChild, 2,
/*9328*/            OPC_Scope, 31, /*->9361*/ // 10 children in Scope
/*9330*/              OPC_CheckCondCode, ISD::SETGE,
/*9332*/              OPC_MoveParent,
/*9333*/              OPC_CheckType, MVT::i32,
/*9335*/              OPC_MoveParent,
/*9336*/              OPC_RecordChild1, // #2 = $T
/*9337*/              OPC_RecordChild2, // #3 = $F
/*9338*/              OPC_CheckType, MVT::i32,
/*9340*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9342*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9351*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
/*9361*/            /*Scope*/ 31, /*->9393*/
/*9362*/              OPC_CheckCondCode, ISD::SETUGE,
/*9364*/              OPC_MoveParent,
/*9365*/              OPC_CheckType, MVT::i32,
/*9367*/              OPC_MoveParent,
/*9368*/              OPC_RecordChild1, // #2 = $T
/*9369*/              OPC_RecordChild2, // #3 = $F
/*9370*/              OPC_CheckType, MVT::i32,
/*9372*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9374*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9383*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
/*9393*/            /*Scope*/ 31, /*->9425*/
/*9394*/              OPC_CheckCondCode, ISD::SETLE,
/*9396*/              OPC_MoveParent,
/*9397*/              OPC_CheckType, MVT::i32,
/*9399*/              OPC_MoveParent,
/*9400*/              OPC_RecordChild1, // #2 = $T
/*9401*/              OPC_RecordChild2, // #3 = $F
/*9402*/              OPC_CheckType, MVT::i32,
/*9404*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9406*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9415*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR32:i32:$F)
/*9425*/            /*Scope*/ 31, /*->9457*/
/*9426*/              OPC_CheckCondCode, ISD::SETULE,
/*9428*/              OPC_MoveParent,
/*9429*/              OPC_CheckType, MVT::i32,
/*9431*/              OPC_MoveParent,
/*9432*/              OPC_RecordChild1, // #2 = $T
/*9433*/              OPC_RecordChild2, // #3 = $F
/*9434*/              OPC_CheckType, MVT::i32,
/*9436*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9438*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9447*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 GPR32:i32:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR32:i32:$F)
/*9457*/            /*Scope*/ 31, /*->9489*/
/*9458*/              OPC_CheckCondCode, ISD::SETGE,
/*9460*/              OPC_MoveParent,
/*9461*/              OPC_CheckType, MVT::i32,
/*9463*/              OPC_MoveParent,
/*9464*/              OPC_RecordChild1, // #2 = $T
/*9465*/              OPC_RecordChild2, // #3 = $F
/*9466*/              OPC_CheckType, MVT::i64,
/*9468*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9470*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9479*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
/*9489*/            /*Scope*/ 31, /*->9521*/
/*9490*/              OPC_CheckCondCode, ISD::SETUGE,
/*9492*/              OPC_MoveParent,
/*9493*/              OPC_CheckType, MVT::i32,
/*9495*/              OPC_MoveParent,
/*9496*/              OPC_RecordChild1, // #2 = $T
/*9497*/              OPC_RecordChild2, // #3 = $F
/*9498*/              OPC_CheckType, MVT::i64,
/*9500*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9502*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9511*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
/*9521*/            /*Scope*/ 31, /*->9553*/
/*9522*/              OPC_CheckCondCode, ISD::SETLE,
/*9524*/              OPC_MoveParent,
/*9525*/              OPC_CheckType, MVT::i32,
/*9527*/              OPC_MoveParent,
/*9528*/              OPC_RecordChild1, // #2 = $T
/*9529*/              OPC_RecordChild2, // #3 = $F
/*9530*/              OPC_CheckType, MVT::i64,
/*9532*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9534*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9543*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR64:i64:$F)
/*9553*/            /*Scope*/ 31, /*->9585*/
/*9554*/              OPC_CheckCondCode, ISD::SETULE,
/*9556*/              OPC_MoveParent,
/*9557*/              OPC_CheckType, MVT::i32,
/*9559*/              OPC_MoveParent,
/*9560*/              OPC_RecordChild1, // #2 = $T
/*9561*/              OPC_RecordChild2, // #3 = $F
/*9562*/              OPC_CheckType, MVT::i64,
/*9564*/              OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9566*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9575*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 GPR64:i64:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), GPR64:i64:$F)
/*9585*/            /*Scope*/ 56, /*->9642*/
/*9586*/              OPC_CheckCondCode, ISD::SETEQ,
/*9588*/              OPC_MoveParent,
/*9589*/              OPC_CheckType, MVT::i32,
/*9591*/              OPC_MoveParent,
/*9592*/              OPC_RecordChild1, // #2 = $T
/*9593*/              OPC_RecordChild2, // #3 = $F
/*9594*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9618
/*9597*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9599*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9608*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 GPR32:i32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->9641
/*9620*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9622*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9631*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 GPR64:i64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
                      0, // EndSwitchType
/*9642*/            /*Scope*/ 56, /*->9699*/
/*9643*/              OPC_CheckCondCode, ISD::SETNE,
/*9645*/              OPC_MoveParent,
/*9646*/              OPC_CheckType, MVT::i32,
/*9648*/              OPC_MoveParent,
/*9649*/              OPC_RecordChild1, // #2 = $T
/*9650*/              OPC_RecordChild2, // #3 = $F
/*9651*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9675
/*9654*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9656*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9665*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), GPR32:i32:$T, GPR32:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 GPR32:i32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR32:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->9698
/*9677*/                OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9679*/                OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*9688*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), GPR64:i64:$T, GPR64:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 GPR64:i64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), GPR64:i64:$F)
                      0, // EndSwitchType
/*9699*/            0, /*End of Scope*/
/*9700*/          0, /*End of Scope*/
/*9701*/        0, /*End of Scope*/
/*9702*/      0, /*End of Scope*/
/*9703*/    /*Scope*/ 89, /*->9793*/
/*9704*/      OPC_RecordChild0, // #0 = $cond
/*9705*/      OPC_Scope, 50, /*->9757*/ // 2 children in Scope
/*9707*/        OPC_CheckChild0Type, MVT::i32,
/*9709*/        OPC_RecordChild1, // #1 = $T
/*9710*/        OPC_RecordChild2, // #2 = $F
/*9711*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->9742
/*9714*/          OPC_Scope, 12, /*->9728*/ // 2 children in Scope
/*9716*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*9718*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:i32 GPR32:i32:$cond, GPR32:i32:$T, GPR32:i32:$F) - Complexity = 3
                    // Dst: (MOVN_I_I:i32 GPR32:i32:$T, GPR32:i32:$cond, GPR32:i32:$F)
/*9728*/          /*Scope*/ 12, /*->9741*/
/*9729*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*9731*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 3
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*9741*/          0, /*End of Scope*/
                /*SwitchType*/ 12,  MVT::i64,// ->9756
/*9744*/          OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9746*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 GPR32:i32:$cond, GPR64:i64:$T, GPR64:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 GPR64:i64:$T, GPR32:i32:$cond, GPR64:i64:$F)
                0, // EndSwitchType
/*9757*/      /*Scope*/ 34, /*->9792*/
/*9758*/        OPC_CheckChild0Type, MVT::i64,
/*9760*/        OPC_RecordChild1, // #1 = $T
/*9761*/        OPC_RecordChild2, // #2 = $F
/*9762*/        OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->9777
/*9765*/          OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9767*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 GPR64:i64:$cond, GPR32:i32:$T, GPR32:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 GPR32:i32:$T, GPR64:i64:$cond, GPR32:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->9791
/*9779*/          OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9781*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 GPR64:i64:$cond, GPR64:i64:$T, GPR64:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 GPR64:i64:$T, GPR64:i64:$cond, GPR64:i64:$F)
                0, // EndSwitchType
/*9792*/      0, /*End of Scope*/
/*9793*/    /*Scope*/ 13|128,16/*2061*/, /*->11856*/
/*9795*/      OPC_MoveChild, 0,
/*9797*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*9800*/      OPC_RecordChild0, // #0 = $lhs
/*9801*/      OPC_Scope, 71|128,9/*1223*/, /*->11027*/ // 2 children in Scope
/*9804*/        OPC_CheckChild0Type, MVT::i32,
/*9806*/        OPC_Scope, 19|128,1/*147*/, /*->9956*/ // 2 children in Scope
/*9809*/          OPC_MoveChild, 1,
/*9811*/          OPC_CheckInteger, 0, 
/*9813*/          OPC_MoveParent,
/*9814*/          OPC_MoveChild, 2,
/*9816*/          OPC_Scope, 22, /*->9840*/ // 6 children in Scope
/*9818*/            OPC_CheckCondCode, ISD::SETEQ,
/*9820*/            OPC_MoveParent,
/*9821*/            OPC_CheckType, MVT::i32,
/*9823*/            OPC_MoveParent,
/*9824*/            OPC_RecordChild1, // #1 = $T
/*9825*/            OPC_RecordChild2, // #2 = $F
/*9826*/            OPC_CheckType, MVT::f32,
/*9828*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*9830*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, GPR32:i32:$lhs, FGR32:f32:$F)
/*9840*/          /*Scope*/ 22, /*->9863*/
/*9841*/            OPC_CheckCondCode, ISD::SETNE,
/*9843*/            OPC_MoveParent,
/*9844*/            OPC_CheckType, MVT::i32,
/*9846*/            OPC_MoveParent,
/*9847*/            OPC_RecordChild1, // #1 = $T
/*9848*/            OPC_RecordChild2, // #2 = $F
/*9849*/            OPC_CheckType, MVT::f32,
/*9851*/            OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*9853*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, GPR32:i32:$lhs, FGR32:f32:$F)
/*9863*/          /*Scope*/ 22, /*->9886*/
/*9864*/            OPC_CheckCondCode, ISD::SETEQ,
/*9866*/            OPC_MoveParent,
/*9867*/            OPC_CheckType, MVT::i32,
/*9869*/            OPC_MoveParent,
/*9870*/            OPC_RecordChild1, // #1 = $T
/*9871*/            OPC_RecordChild2, // #2 = $F
/*9872*/            OPC_CheckType, MVT::f64,
/*9874*/            OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9876*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, GPR32:i32:$lhs, AFGR64:f64:$F)
/*9886*/          /*Scope*/ 22, /*->9909*/
/*9887*/            OPC_CheckCondCode, ISD::SETNE,
/*9889*/            OPC_MoveParent,
/*9890*/            OPC_CheckType, MVT::i32,
/*9892*/            OPC_MoveParent,
/*9893*/            OPC_RecordChild1, // #1 = $T
/*9894*/            OPC_RecordChild2, // #2 = $F
/*9895*/            OPC_CheckType, MVT::f64,
/*9897*/            OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9899*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, GPR32:i32:$lhs, AFGR64:f64:$F)
/*9909*/          /*Scope*/ 22, /*->9932*/
/*9910*/            OPC_CheckCondCode, ISD::SETEQ,
/*9912*/            OPC_MoveParent,
/*9913*/            OPC_CheckType, MVT::i32,
/*9915*/            OPC_MoveParent,
/*9916*/            OPC_RecordChild1, // #1 = $T
/*9917*/            OPC_RecordChild2, // #2 = $F
/*9918*/            OPC_CheckType, MVT::f64,
/*9920*/            OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9922*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, GPR32:i32:$lhs, FGR64:f64:$F)
/*9932*/          /*Scope*/ 22, /*->9955*/
/*9933*/            OPC_CheckCondCode, ISD::SETNE,
/*9935*/            OPC_MoveParent,
/*9936*/            OPC_CheckType, MVT::i32,
/*9938*/            OPC_MoveParent,
/*9939*/            OPC_RecordChild1, // #1 = $T
/*9940*/            OPC_RecordChild2, // #2 = $F
/*9941*/            OPC_CheckType, MVT::f64,
/*9943*/            OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9945*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, GPR32:i32:$lhs, FGR64:f64:$F)
/*9955*/          0, /*End of Scope*/
/*9956*/        /*Scope*/ 44|128,8/*1068*/, /*->11026*/
/*9958*/          OPC_RecordChild1, // #1 = $rhs
/*9959*/          OPC_Scope, 97|128,3/*481*/, /*->10443*/ // 2 children in Scope
/*9962*/            OPC_MoveChild, 1,
/*9964*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9967*/            OPC_Scope, 75, /*->10044*/ // 6 children in Scope
/*9969*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9971*/              OPC_MoveParent,
/*9972*/              OPC_MoveChild, 2,
/*9974*/              OPC_Scope, 33, /*->10009*/ // 2 children in Scope
/*9976*/                OPC_CheckCondCode, ISD::SETGE,
/*9978*/                OPC_MoveParent,
/*9979*/                OPC_CheckType, MVT::i32,
/*9981*/                OPC_MoveParent,
/*9982*/                OPC_RecordChild1, // #2 = $T
/*9983*/                OPC_RecordChild2, // #3 = $F
/*9984*/                OPC_CheckType, MVT::f32,
/*9986*/                OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*9988*/                OPC_EmitConvertToTarget, 1,
/*9990*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9999*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*10009*/             /*Scope*/ 33, /*->10043*/
/*10010*/               OPC_CheckCondCode, ISD::SETUGE,
/*10012*/               OPC_MoveParent,
/*10013*/               OPC_CheckType, MVT::i32,
/*10015*/               OPC_MoveParent,
/*10016*/               OPC_RecordChild1, // #2 = $T
/*10017*/               OPC_RecordChild2, // #3 = $F
/*10018*/               OPC_CheckType, MVT::f32,
/*10020*/               OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10022*/               OPC_EmitConvertToTarget, 1,
/*10024*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10033*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*10043*/             0, /*End of Scope*/
/*10044*/           /*Scope*/ 81, /*->10126*/
/*10045*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10047*/             OPC_MoveParent,
/*10048*/             OPC_MoveChild, 2,
/*10050*/             OPC_Scope, 36, /*->10088*/ // 2 children in Scope
/*10052*/               OPC_CheckCondCode, ISD::SETGT,
/*10054*/               OPC_MoveParent,
/*10055*/               OPC_CheckType, MVT::i32,
/*10057*/               OPC_MoveParent,
/*10058*/               OPC_RecordChild1, // #2 = $T
/*10059*/               OPC_RecordChild2, // #3 = $F
/*10060*/               OPC_CheckType, MVT::f32,
/*10062*/               OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10064*/               OPC_EmitConvertToTarget, 1,
/*10066*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10069*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10078*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*10088*/             /*Scope*/ 36, /*->10125*/
/*10089*/               OPC_CheckCondCode, ISD::SETUGT,
/*10091*/               OPC_MoveParent,
/*10092*/               OPC_CheckType, MVT::i32,
/*10094*/               OPC_MoveParent,
/*10095*/               OPC_RecordChild1, // #2 = $T
/*10096*/               OPC_RecordChild2, // #3 = $F
/*10097*/               OPC_CheckType, MVT::f32,
/*10099*/               OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10101*/               OPC_EmitConvertToTarget, 1,
/*10103*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10106*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10115*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*10125*/             0, /*End of Scope*/
/*10126*/           /*Scope*/ 75, /*->10202*/
/*10127*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10129*/             OPC_MoveParent,
/*10130*/             OPC_MoveChild, 2,
/*10132*/             OPC_Scope, 33, /*->10167*/ // 2 children in Scope
/*10134*/               OPC_CheckCondCode, ISD::SETGE,
/*10136*/               OPC_MoveParent,
/*10137*/               OPC_CheckType, MVT::i32,
/*10139*/               OPC_MoveParent,
/*10140*/               OPC_RecordChild1, // #2 = $T
/*10141*/               OPC_RecordChild2, // #3 = $F
/*10142*/               OPC_CheckType, MVT::f64,
/*10144*/               OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10146*/               OPC_EmitConvertToTarget, 1,
/*10148*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10157*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*10167*/             /*Scope*/ 33, /*->10201*/
/*10168*/               OPC_CheckCondCode, ISD::SETUGE,
/*10170*/               OPC_MoveParent,
/*10171*/               OPC_CheckType, MVT::i32,
/*10173*/               OPC_MoveParent,
/*10174*/               OPC_RecordChild1, // #2 = $T
/*10175*/               OPC_RecordChild2, // #3 = $F
/*10176*/               OPC_CheckType, MVT::f64,
/*10178*/               OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10180*/               OPC_EmitConvertToTarget, 1,
/*10182*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10191*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*10201*/             0, /*End of Scope*/
/*10202*/           /*Scope*/ 81, /*->10284*/
/*10203*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10205*/             OPC_MoveParent,
/*10206*/             OPC_MoveChild, 2,
/*10208*/             OPC_Scope, 36, /*->10246*/ // 2 children in Scope
/*10210*/               OPC_CheckCondCode, ISD::SETGT,
/*10212*/               OPC_MoveParent,
/*10213*/               OPC_CheckType, MVT::i32,
/*10215*/               OPC_MoveParent,
/*10216*/               OPC_RecordChild1, // #2 = $T
/*10217*/               OPC_RecordChild2, // #3 = $F
/*10218*/               OPC_CheckType, MVT::f64,
/*10220*/               OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10222*/               OPC_EmitConvertToTarget, 1,
/*10224*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10227*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10236*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*10246*/             /*Scope*/ 36, /*->10283*/
/*10247*/               OPC_CheckCondCode, ISD::SETUGT,
/*10249*/               OPC_MoveParent,
/*10250*/               OPC_CheckType, MVT::i32,
/*10252*/               OPC_MoveParent,
/*10253*/               OPC_RecordChild1, // #2 = $T
/*10254*/               OPC_RecordChild2, // #3 = $F
/*10255*/               OPC_CheckType, MVT::f64,
/*10257*/               OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10259*/               OPC_EmitConvertToTarget, 1,
/*10261*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10264*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10273*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*10283*/             0, /*End of Scope*/
/*10284*/           /*Scope*/ 75, /*->10360*/
/*10285*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*10287*/             OPC_MoveParent,
/*10288*/             OPC_MoveChild, 2,
/*10290*/             OPC_Scope, 33, /*->10325*/ // 2 children in Scope
/*10292*/               OPC_CheckCondCode, ISD::SETGE,
/*10294*/               OPC_MoveParent,
/*10295*/               OPC_CheckType, MVT::i32,
/*10297*/               OPC_MoveParent,
/*10298*/               OPC_RecordChild1, // #2 = $T
/*10299*/               OPC_RecordChild2, // #3 = $F
/*10300*/               OPC_CheckType, MVT::f64,
/*10302*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10304*/               OPC_EmitConvertToTarget, 1,
/*10306*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10315*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*10325*/             /*Scope*/ 33, /*->10359*/
/*10326*/               OPC_CheckCondCode, ISD::SETUGE,
/*10328*/               OPC_MoveParent,
/*10329*/               OPC_CheckType, MVT::i32,
/*10331*/               OPC_MoveParent,
/*10332*/               OPC_RecordChild1, // #2 = $T
/*10333*/               OPC_RecordChild2, // #3 = $F
/*10334*/               OPC_CheckType, MVT::f64,
/*10336*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10338*/               OPC_EmitConvertToTarget, 1,
/*10340*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*10349*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*10359*/             0, /*End of Scope*/
/*10360*/           /*Scope*/ 81, /*->10442*/
/*10361*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*10363*/             OPC_MoveParent,
/*10364*/             OPC_MoveChild, 2,
/*10366*/             OPC_Scope, 36, /*->10404*/ // 2 children in Scope
/*10368*/               OPC_CheckCondCode, ISD::SETGT,
/*10370*/               OPC_MoveParent,
/*10371*/               OPC_CheckType, MVT::i32,
/*10373*/               OPC_MoveParent,
/*10374*/               OPC_RecordChild1, // #2 = $T
/*10375*/               OPC_RecordChild2, // #3 = $F
/*10376*/               OPC_CheckType, MVT::f64,
/*10378*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10380*/               OPC_EmitConvertToTarget, 1,
/*10382*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10385*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10394*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*10404*/             /*Scope*/ 36, /*->10441*/
/*10405*/               OPC_CheckCondCode, ISD::SETUGT,
/*10407*/               OPC_MoveParent,
/*10408*/               OPC_CheckType, MVT::i32,
/*10410*/               OPC_MoveParent,
/*10411*/               OPC_RecordChild1, // #2 = $T
/*10412*/               OPC_RecordChild2, // #3 = $F
/*10413*/               OPC_CheckType, MVT::f64,
/*10415*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10417*/               OPC_EmitConvertToTarget, 1,
/*10419*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*10422*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*10431*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 GPR32:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*10441*/             0, /*End of Scope*/
/*10442*/           0, /*End of Scope*/
/*10443*/         /*Scope*/ 68|128,4/*580*/, /*->11025*/
/*10445*/           OPC_MoveChild, 2,
/*10447*/           OPC_Scope, 31, /*->10480*/ // 18 children in Scope
/*10449*/             OPC_CheckCondCode, ISD::SETGE,
/*10451*/             OPC_MoveParent,
/*10452*/             OPC_CheckType, MVT::i32,
/*10454*/             OPC_MoveParent,
/*10455*/             OPC_RecordChild1, // #2 = $T
/*10456*/             OPC_RecordChild2, // #3 = $F
/*10457*/             OPC_CheckType, MVT::f32,
/*10459*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10461*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10470*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10480*/           /*Scope*/ 31, /*->10512*/
/*10481*/             OPC_CheckCondCode, ISD::SETUGE,
/*10483*/             OPC_MoveParent,
/*10484*/             OPC_CheckType, MVT::i32,
/*10486*/             OPC_MoveParent,
/*10487*/             OPC_RecordChild1, // #2 = $T
/*10488*/             OPC_RecordChild2, // #3 = $F
/*10489*/             OPC_CheckType, MVT::f32,
/*10491*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10493*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10502*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10512*/           /*Scope*/ 31, /*->10544*/
/*10513*/             OPC_CheckCondCode, ISD::SETLE,
/*10515*/             OPC_MoveParent,
/*10516*/             OPC_CheckType, MVT::i32,
/*10518*/             OPC_MoveParent,
/*10519*/             OPC_RecordChild1, // #2 = $T
/*10520*/             OPC_RecordChild2, // #3 = $F
/*10521*/             OPC_CheckType, MVT::f32,
/*10523*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10525*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10534*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR32:f32:$F)
/*10544*/           /*Scope*/ 31, /*->10576*/
/*10545*/             OPC_CheckCondCode, ISD::SETULE,
/*10547*/             OPC_MoveParent,
/*10548*/             OPC_CheckType, MVT::i32,
/*10550*/             OPC_MoveParent,
/*10551*/             OPC_RecordChild1, // #2 = $T
/*10552*/             OPC_RecordChild2, // #3 = $F
/*10553*/             OPC_CheckType, MVT::f32,
/*10555*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10557*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10566*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR32:f32:$F)
/*10576*/           /*Scope*/ 31, /*->10608*/
/*10577*/             OPC_CheckCondCode, ISD::SETEQ,
/*10579*/             OPC_MoveParent,
/*10580*/             OPC_CheckType, MVT::i32,
/*10582*/             OPC_MoveParent,
/*10583*/             OPC_RecordChild1, // #2 = $T
/*10584*/             OPC_RecordChild2, // #3 = $F
/*10585*/             OPC_CheckType, MVT::f32,
/*10587*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10589*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10598*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10608*/           /*Scope*/ 31, /*->10640*/
/*10609*/             OPC_CheckCondCode, ISD::SETNE,
/*10611*/             OPC_MoveParent,
/*10612*/             OPC_CheckType, MVT::i32,
/*10614*/             OPC_MoveParent,
/*10615*/             OPC_RecordChild1, // #2 = $T
/*10616*/             OPC_RecordChild2, // #3 = $F
/*10617*/             OPC_CheckType, MVT::f32,
/*10619*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*10621*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10630*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR32:f32:$F)
/*10640*/           /*Scope*/ 31, /*->10672*/
/*10641*/             OPC_CheckCondCode, ISD::SETGE,
/*10643*/             OPC_MoveParent,
/*10644*/             OPC_CheckType, MVT::i32,
/*10646*/             OPC_MoveParent,
/*10647*/             OPC_RecordChild1, // #2 = $T
/*10648*/             OPC_RecordChild2, // #3 = $F
/*10649*/             OPC_CheckType, MVT::f64,
/*10651*/             OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10653*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10662*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10672*/           /*Scope*/ 31, /*->10704*/
/*10673*/             OPC_CheckCondCode, ISD::SETUGE,
/*10675*/             OPC_MoveParent,
/*10676*/             OPC_CheckType, MVT::i32,
/*10678*/             OPC_MoveParent,
/*10679*/             OPC_RecordChild1, // #2 = $T
/*10680*/             OPC_RecordChild2, // #3 = $F
/*10681*/             OPC_CheckType, MVT::f64,
/*10683*/             OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10685*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10694*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10704*/           /*Scope*/ 31, /*->10736*/
/*10705*/             OPC_CheckCondCode, ISD::SETLE,
/*10707*/             OPC_MoveParent,
/*10708*/             OPC_CheckType, MVT::i32,
/*10710*/             OPC_MoveParent,
/*10711*/             OPC_RecordChild1, // #2 = $T
/*10712*/             OPC_RecordChild2, // #3 = $F
/*10713*/             OPC_CheckType, MVT::f64,
/*10715*/             OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10717*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10726*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), AFGR64:f64:$F)
/*10736*/           /*Scope*/ 31, /*->10768*/
/*10737*/             OPC_CheckCondCode, ISD::SETULE,
/*10739*/             OPC_MoveParent,
/*10740*/             OPC_CheckType, MVT::i32,
/*10742*/             OPC_MoveParent,
/*10743*/             OPC_RecordChild1, // #2 = $T
/*10744*/             OPC_RecordChild2, // #3 = $F
/*10745*/             OPC_CheckType, MVT::f64,
/*10747*/             OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10749*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10758*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), AFGR64:f64:$F)
/*10768*/           /*Scope*/ 31, /*->10800*/
/*10769*/             OPC_CheckCondCode, ISD::SETEQ,
/*10771*/             OPC_MoveParent,
/*10772*/             OPC_CheckType, MVT::i32,
/*10774*/             OPC_MoveParent,
/*10775*/             OPC_RecordChild1, // #2 = $T
/*10776*/             OPC_RecordChild2, // #3 = $F
/*10777*/             OPC_CheckType, MVT::f64,
/*10779*/             OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10781*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10790*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10800*/           /*Scope*/ 31, /*->10832*/
/*10801*/             OPC_CheckCondCode, ISD::SETNE,
/*10803*/             OPC_MoveParent,
/*10804*/             OPC_CheckType, MVT::i32,
/*10806*/             OPC_MoveParent,
/*10807*/             OPC_RecordChild1, // #2 = $T
/*10808*/             OPC_RecordChild2, // #3 = $F
/*10809*/             OPC_CheckType, MVT::f64,
/*10811*/             OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10813*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10822*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), AFGR64:f64:$F)
/*10832*/           /*Scope*/ 31, /*->10864*/
/*10833*/             OPC_CheckCondCode, ISD::SETGE,
/*10835*/             OPC_MoveParent,
/*10836*/             OPC_CheckType, MVT::i32,
/*10838*/             OPC_MoveParent,
/*10839*/             OPC_RecordChild1, // #2 = $T
/*10840*/             OPC_RecordChild2, // #3 = $F
/*10841*/             OPC_CheckType, MVT::f64,
/*10843*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10845*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10854*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*10864*/           /*Scope*/ 31, /*->10896*/
/*10865*/             OPC_CheckCondCode, ISD::SETUGE,
/*10867*/             OPC_MoveParent,
/*10868*/             OPC_CheckType, MVT::i32,
/*10870*/             OPC_MoveParent,
/*10871*/             OPC_RecordChild1, // #2 = $T
/*10872*/             OPC_RecordChild2, // #3 = $F
/*10873*/             OPC_CheckType, MVT::f64,
/*10875*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10877*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10886*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*10896*/           /*Scope*/ 31, /*->10928*/
/*10897*/             OPC_CheckCondCode, ISD::SETLE,
/*10899*/             OPC_MoveParent,
/*10900*/             OPC_CheckType, MVT::i32,
/*10902*/             OPC_MoveParent,
/*10903*/             OPC_RecordChild1, // #2 = $T
/*10904*/             OPC_RecordChild2, // #3 = $F
/*10905*/             OPC_CheckType, MVT::f64,
/*10907*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10909*/             OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10918*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR64:f64:$F)
/*10928*/           /*Scope*/ 31, /*->10960*/
/*10929*/             OPC_CheckCondCode, ISD::SETULE,
/*10931*/             OPC_MoveParent,
/*10932*/             OPC_CheckType, MVT::i32,
/*10934*/             OPC_MoveParent,
/*10935*/             OPC_RecordChild1, // #2 = $T
/*10936*/             OPC_RecordChild2, // #3 = $F
/*10937*/             OPC_CheckType, MVT::f64,
/*10939*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10941*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10950*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), FGR64:f64:$F)
/*10960*/           /*Scope*/ 31, /*->10992*/
/*10961*/             OPC_CheckCondCode, ISD::SETEQ,
/*10963*/             OPC_MoveParent,
/*10964*/             OPC_CheckType, MVT::i32,
/*10966*/             OPC_MoveParent,
/*10967*/             OPC_RecordChild1, // #2 = $T
/*10968*/             OPC_RecordChild2, // #3 = $F
/*10969*/             OPC_CheckType, MVT::f64,
/*10971*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10973*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10982*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*10992*/           /*Scope*/ 31, /*->11024*/
/*10993*/             OPC_CheckCondCode, ISD::SETNE,
/*10995*/             OPC_MoveParent,
/*10996*/             OPC_CheckType, MVT::i32,
/*10998*/             OPC_MoveParent,
/*10999*/             OPC_RecordChild1, // #2 = $T
/*11000*/             OPC_RecordChild2, // #3 = $F
/*11001*/             OPC_CheckType, MVT::f64,
/*11003*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11005*/             OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11014*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), FGR64:f64:$F)
/*11024*/           0, /*End of Scope*/
/*11025*/         0, /*End of Scope*/
/*11026*/       0, /*End of Scope*/
/*11027*/     /*Scope*/ 58|128,6/*826*/, /*->11855*/
/*11029*/       OPC_CheckChild0Type, MVT::i64,
/*11031*/       OPC_Scope, 101, /*->11134*/ // 2 children in Scope
/*11033*/         OPC_MoveChild, 1,
/*11035*/         OPC_CheckInteger, 0, 
/*11037*/         OPC_MoveParent,
/*11038*/         OPC_MoveChild, 2,
/*11040*/         OPC_Scope, 22, /*->11064*/ // 4 children in Scope
/*11042*/           OPC_CheckCondCode, ISD::SETEQ,
/*11044*/           OPC_MoveParent,
/*11045*/           OPC_CheckType, MVT::i32,
/*11047*/           OPC_MoveParent,
/*11048*/           OPC_RecordChild1, // #1 = $T
/*11049*/           OPC_RecordChild2, // #2 = $F
/*11050*/           OPC_CheckType, MVT::f32,
/*11052*/           OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11054*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, GPR64:i64:$lhs, FGR32:f32:$F)
/*11064*/         /*Scope*/ 22, /*->11087*/
/*11065*/           OPC_CheckCondCode, ISD::SETNE,
/*11067*/           OPC_MoveParent,
/*11068*/           OPC_CheckType, MVT::i32,
/*11070*/           OPC_MoveParent,
/*11071*/           OPC_RecordChild1, // #1 = $T
/*11072*/           OPC_RecordChild2, // #2 = $F
/*11073*/           OPC_CheckType, MVT::f32,
/*11075*/           OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11077*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, GPR64:i64:$lhs, FGR32:f32:$F)
/*11087*/         /*Scope*/ 22, /*->11110*/
/*11088*/           OPC_CheckCondCode, ISD::SETEQ,
/*11090*/           OPC_MoveParent,
/*11091*/           OPC_CheckType, MVT::i32,
/*11093*/           OPC_MoveParent,
/*11094*/           OPC_RecordChild1, // #1 = $T
/*11095*/           OPC_RecordChild2, // #2 = $F
/*11096*/           OPC_CheckType, MVT::f64,
/*11098*/           OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11100*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, GPR64:i64:$lhs, FGR64:f64:$F)
/*11110*/         /*Scope*/ 22, /*->11133*/
/*11111*/           OPC_CheckCondCode, ISD::SETNE,
/*11113*/           OPC_MoveParent,
/*11114*/           OPC_CheckType, MVT::i32,
/*11116*/           OPC_MoveParent,
/*11117*/           OPC_RecordChild1, // #1 = $T
/*11118*/           OPC_RecordChild2, // #2 = $F
/*11119*/           OPC_CheckType, MVT::f64,
/*11121*/           OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11123*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, GPR64:i64:$lhs, FGR64:f64:$F)
/*11133*/         0, /*End of Scope*/
/*11134*/       /*Scope*/ 78|128,5/*718*/, /*->11854*/
/*11136*/         OPC_RecordChild1, // #1 = $rhs
/*11137*/         OPC_Scope, 67|128,2/*323*/, /*->11463*/ // 2 children in Scope
/*11140*/           OPC_MoveChild, 1,
/*11142*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11145*/           OPC_Scope, 75, /*->11222*/ // 4 children in Scope
/*11147*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*11149*/             OPC_MoveParent,
/*11150*/             OPC_MoveChild, 2,
/*11152*/             OPC_Scope, 33, /*->11187*/ // 2 children in Scope
/*11154*/               OPC_CheckCondCode, ISD::SETGE,
/*11156*/               OPC_MoveParent,
/*11157*/               OPC_CheckType, MVT::i32,
/*11159*/               OPC_MoveParent,
/*11160*/               OPC_RecordChild1, // #2 = $T
/*11161*/               OPC_RecordChild2, // #3 = $F
/*11162*/               OPC_CheckType, MVT::f32,
/*11164*/               OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11166*/               OPC_EmitConvertToTarget, 1,
/*11168*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*11177*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*11187*/             /*Scope*/ 33, /*->11221*/
/*11188*/               OPC_CheckCondCode, ISD::SETUGE,
/*11190*/               OPC_MoveParent,
/*11191*/               OPC_CheckType, MVT::i32,
/*11193*/               OPC_MoveParent,
/*11194*/               OPC_RecordChild1, // #2 = $T
/*11195*/               OPC_RecordChild2, // #3 = $F
/*11196*/               OPC_CheckType, MVT::f32,
/*11198*/               OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11200*/               OPC_EmitConvertToTarget, 1,
/*11202*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*11211*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*11221*/             0, /*End of Scope*/
/*11222*/           /*Scope*/ 81, /*->11304*/
/*11223*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*11225*/             OPC_MoveParent,
/*11226*/             OPC_MoveChild, 2,
/*11228*/             OPC_Scope, 36, /*->11266*/ // 2 children in Scope
/*11230*/               OPC_CheckCondCode, ISD::SETGT,
/*11232*/               OPC_MoveParent,
/*11233*/               OPC_CheckType, MVT::i32,
/*11235*/               OPC_MoveParent,
/*11236*/               OPC_RecordChild1, // #2 = $T
/*11237*/               OPC_RecordChild2, // #3 = $F
/*11238*/               OPC_CheckType, MVT::f32,
/*11240*/               OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11242*/               OPC_EmitConvertToTarget, 1,
/*11244*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11247*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11256*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*11266*/             /*Scope*/ 36, /*->11303*/
/*11267*/               OPC_CheckCondCode, ISD::SETUGT,
/*11269*/               OPC_MoveParent,
/*11270*/               OPC_CheckType, MVT::i32,
/*11272*/               OPC_MoveParent,
/*11273*/               OPC_RecordChild1, // #2 = $T
/*11274*/               OPC_RecordChild2, // #3 = $F
/*11275*/               OPC_CheckType, MVT::f32,
/*11277*/               OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11279*/               OPC_EmitConvertToTarget, 1,
/*11281*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11284*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11293*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*11303*/             0, /*End of Scope*/
/*11304*/           /*Scope*/ 75, /*->11380*/
/*11305*/             OPC_CheckPredicate, 28, // Predicate_immSExt16
/*11307*/             OPC_MoveParent,
/*11308*/             OPC_MoveChild, 2,
/*11310*/             OPC_Scope, 33, /*->11345*/ // 2 children in Scope
/*11312*/               OPC_CheckCondCode, ISD::SETGE,
/*11314*/               OPC_MoveParent,
/*11315*/               OPC_CheckType, MVT::i32,
/*11317*/               OPC_MoveParent,
/*11318*/               OPC_RecordChild1, // #2 = $T
/*11319*/               OPC_RecordChild2, // #3 = $F
/*11320*/               OPC_CheckType, MVT::f64,
/*11322*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11324*/               OPC_EmitConvertToTarget, 1,
/*11326*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*11335*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*11345*/             /*Scope*/ 33, /*->11379*/
/*11346*/               OPC_CheckCondCode, ISD::SETUGE,
/*11348*/               OPC_MoveParent,
/*11349*/               OPC_CheckType, MVT::i32,
/*11351*/               OPC_MoveParent,
/*11352*/               OPC_RecordChild1, // #2 = $T
/*11353*/               OPC_RecordChild2, // #3 = $F
/*11354*/               OPC_CheckType, MVT::f64,
/*11356*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11358*/               OPC_EmitConvertToTarget, 1,
/*11360*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*11369*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 GPR64:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*11379*/             0, /*End of Scope*/
/*11380*/           /*Scope*/ 81, /*->11462*/
/*11381*/             OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*11383*/             OPC_MoveParent,
/*11384*/             OPC_MoveChild, 2,
/*11386*/             OPC_Scope, 36, /*->11424*/ // 2 children in Scope
/*11388*/               OPC_CheckCondCode, ISD::SETGT,
/*11390*/               OPC_MoveParent,
/*11391*/               OPC_CheckType, MVT::i32,
/*11393*/               OPC_MoveParent,
/*11394*/               OPC_RecordChild1, // #2 = $T
/*11395*/               OPC_RecordChild2, // #3 = $F
/*11396*/               OPC_CheckType, MVT::f64,
/*11398*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11400*/               OPC_EmitConvertToTarget, 1,
/*11402*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11405*/               OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11414*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*11424*/             /*Scope*/ 36, /*->11461*/
/*11425*/               OPC_CheckCondCode, ISD::SETUGT,
/*11427*/               OPC_MoveParent,
/*11428*/               OPC_CheckType, MVT::i32,
/*11430*/               OPC_MoveParent,
/*11431*/               OPC_RecordChild1, // #2 = $T
/*11432*/               OPC_RecordChild2, // #3 = $F
/*11433*/               OPC_CheckType, MVT::f64,
/*11435*/               OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11437*/               OPC_EmitConvertToTarget, 1,
/*11439*/               OPC_EmitNodeXForm, 1, 4, // Plus1
/*11442*/               OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*11451*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 GPR64:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*11461*/             0, /*End of Scope*/
/*11462*/           0, /*End of Scope*/
/*11463*/         /*Scope*/ 4|128,3/*388*/, /*->11853*/
/*11465*/           OPC_MoveChild, 2,
/*11467*/           OPC_Scope, 31, /*->11500*/ // 12 children in Scope
/*11469*/             OPC_CheckCondCode, ISD::SETGE,
/*11471*/             OPC_MoveParent,
/*11472*/             OPC_CheckType, MVT::i32,
/*11474*/             OPC_MoveParent,
/*11475*/             OPC_RecordChild1, // #2 = $T
/*11476*/             OPC_RecordChild2, // #3 = $F
/*11477*/             OPC_CheckType, MVT::f32,
/*11479*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11481*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11490*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11500*/           /*Scope*/ 31, /*->11532*/
/*11501*/             OPC_CheckCondCode, ISD::SETUGE,
/*11503*/             OPC_MoveParent,
/*11504*/             OPC_CheckType, MVT::i32,
/*11506*/             OPC_MoveParent,
/*11507*/             OPC_RecordChild1, // #2 = $T
/*11508*/             OPC_RecordChild2, // #3 = $F
/*11509*/             OPC_CheckType, MVT::f32,
/*11511*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11513*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11522*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11532*/           /*Scope*/ 31, /*->11564*/
/*11533*/             OPC_CheckCondCode, ISD::SETLE,
/*11535*/             OPC_MoveParent,
/*11536*/             OPC_CheckType, MVT::i32,
/*11538*/             OPC_MoveParent,
/*11539*/             OPC_RecordChild1, // #2 = $T
/*11540*/             OPC_RecordChild2, // #3 = $F
/*11541*/             OPC_CheckType, MVT::f32,
/*11543*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11545*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11554*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR32:f32:$F)
/*11564*/           /*Scope*/ 31, /*->11596*/
/*11565*/             OPC_CheckCondCode, ISD::SETULE,
/*11567*/             OPC_MoveParent,
/*11568*/             OPC_CheckType, MVT::i32,
/*11570*/             OPC_MoveParent,
/*11571*/             OPC_RecordChild1, // #2 = $T
/*11572*/             OPC_RecordChild2, // #3 = $F
/*11573*/             OPC_CheckType, MVT::f32,
/*11575*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11577*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11586*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR32:f32:$F)
/*11596*/           /*Scope*/ 31, /*->11628*/
/*11597*/             OPC_CheckCondCode, ISD::SETEQ,
/*11599*/             OPC_MoveParent,
/*11600*/             OPC_CheckType, MVT::i32,
/*11602*/             OPC_MoveParent,
/*11603*/             OPC_RecordChild1, // #2 = $T
/*11604*/             OPC_RecordChild2, // #3 = $F
/*11605*/             OPC_CheckType, MVT::f32,
/*11607*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11609*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11618*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11628*/           /*Scope*/ 31, /*->11660*/
/*11629*/             OPC_CheckCondCode, ISD::SETNE,
/*11631*/             OPC_MoveParent,
/*11632*/             OPC_CheckType, MVT::i32,
/*11634*/             OPC_MoveParent,
/*11635*/             OPC_RecordChild1, // #2 = $T
/*11636*/             OPC_RecordChild2, // #3 = $F
/*11637*/             OPC_CheckType, MVT::f32,
/*11639*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11641*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11650*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f32 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                      // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR32:f32:$F)
/*11660*/           /*Scope*/ 31, /*->11692*/
/*11661*/             OPC_CheckCondCode, ISD::SETGE,
/*11663*/             OPC_MoveParent,
/*11664*/             OPC_CheckType, MVT::i32,
/*11666*/             OPC_MoveParent,
/*11667*/             OPC_RecordChild1, // #2 = $T
/*11668*/             OPC_RecordChild2, // #3 = $F
/*11669*/             OPC_CheckType, MVT::f64,
/*11671*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11673*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11682*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11692*/           /*Scope*/ 31, /*->11724*/
/*11693*/             OPC_CheckCondCode, ISD::SETUGE,
/*11695*/             OPC_MoveParent,
/*11696*/             OPC_CheckType, MVT::i32,
/*11698*/             OPC_MoveParent,
/*11699*/             OPC_RecordChild1, // #2 = $T
/*11700*/             OPC_RecordChild2, // #3 = $F
/*11701*/             OPC_CheckType, MVT::f64,
/*11703*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11705*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11714*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11724*/           /*Scope*/ 31, /*->11756*/
/*11725*/             OPC_CheckCondCode, ISD::SETLE,
/*11727*/             OPC_MoveParent,
/*11728*/             OPC_CheckType, MVT::i32,
/*11730*/             OPC_MoveParent,
/*11731*/             OPC_RecordChild1, // #2 = $T
/*11732*/             OPC_RecordChild2, // #3 = $F
/*11733*/             OPC_CheckType, MVT::f64,
/*11735*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11737*/             OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11746*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR64:f64:$F)
/*11756*/           /*Scope*/ 31, /*->11788*/
/*11757*/             OPC_CheckCondCode, ISD::SETULE,
/*11759*/             OPC_MoveParent,
/*11760*/             OPC_CheckType, MVT::i32,
/*11762*/             OPC_MoveParent,
/*11763*/             OPC_RecordChild1, // #2 = $T
/*11764*/             OPC_RecordChild2, // #3 = $F
/*11765*/             OPC_CheckType, MVT::f64,
/*11767*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11769*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11778*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), FGR64:f64:$F)
/*11788*/           /*Scope*/ 31, /*->11820*/
/*11789*/             OPC_CheckCondCode, ISD::SETEQ,
/*11791*/             OPC_MoveParent,
/*11792*/             OPC_CheckType, MVT::i32,
/*11794*/             OPC_MoveParent,
/*11795*/             OPC_RecordChild1, // #2 = $T
/*11796*/             OPC_RecordChild2, // #3 = $F
/*11797*/             OPC_CheckType, MVT::f64,
/*11799*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11801*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11810*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11820*/           /*Scope*/ 31, /*->11852*/
/*11821*/             OPC_CheckCondCode, ISD::SETNE,
/*11823*/             OPC_MoveParent,
/*11824*/             OPC_CheckType, MVT::i32,
/*11826*/             OPC_MoveParent,
/*11827*/             OPC_RecordChild1, // #2 = $T
/*11828*/             OPC_RecordChild2, // #3 = $F
/*11829*/             OPC_CheckType, MVT::f64,
/*11831*/             OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11833*/             OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11842*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:f64 (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                      // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), FGR64:f64:$F)
/*11852*/           0, /*End of Scope*/
/*11853*/         0, /*End of Scope*/
/*11854*/       0, /*End of Scope*/
/*11855*/     0, /*End of Scope*/
/*11856*/   /*Scope*/ 89, /*->11946*/
/*11857*/     OPC_RecordChild0, // #0 = $cond
/*11858*/     OPC_Scope, 50, /*->11910*/ // 2 children in Scope
/*11860*/       OPC_CheckChild0Type, MVT::i32,
/*11862*/       OPC_RecordChild1, // #1 = $T
/*11863*/       OPC_RecordChild2, // #2 = $F
/*11864*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11879
/*11867*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*11869*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 GPR32:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, GPR32:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->11909
/*11881*/         OPC_Scope, 12, /*->11895*/ // 2 children in Scope
/*11883*/           OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11885*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 GPR32:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, GPR32:i32:$cond, AFGR64:f64:$F)
/*11895*/         /*Scope*/ 12, /*->11908*/
/*11896*/           OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11898*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 GPR32:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, GPR32:i32:$cond, FGR64:f64:$F)
/*11908*/         0, /*End of Scope*/
                0, // EndSwitchType
/*11910*/     /*Scope*/ 34, /*->11945*/
/*11911*/       OPC_CheckChild0Type, MVT::i64,
/*11913*/       OPC_RecordChild1, // #1 = $T
/*11914*/       OPC_RecordChild2, // #2 = $F
/*11915*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11930
/*11918*/         OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11920*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 GPR64:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, GPR64:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->11944
/*11932*/         OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11934*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 GPR64:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, GPR64:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*11945*/     0, /*End of Scope*/
/*11946*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->11975
/*11950*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*11951*/   OPC_CaptureGlueInput,
/*11952*/   OPC_RecordChild1, // #1 = $amt1
/*11953*/   OPC_MoveChild, 1,
/*11955*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11958*/   OPC_MoveParent,
/*11959*/   OPC_RecordChild2, // #2 = $amt2
/*11960*/   OPC_MoveChild, 2,
/*11962*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11965*/   OPC_MoveParent,
/*11966*/   OPC_EmitMergeInputChains1_0,
/*11967*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->12031
/*11978*/   OPC_RecordChild0, // #0 = $rs
/*11979*/   OPC_RecordChild1, // #1 = $pos
/*11980*/   OPC_MoveChild, 1,
/*11982*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11985*/   OPC_MoveParent,
/*11986*/   OPC_RecordChild2, // #2 = $size
/*11987*/   OPC_MoveChild, 2,
/*11989*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11992*/   OPC_MoveParent,
/*11993*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->12012
/*11996*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11998*/     OPC_EmitConvertToTarget, 1,
/*12000*/     OPC_EmitConvertToTarget, 2,
/*12002*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (EXT:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size)
            /*SwitchType*/ 16,  MVT::i64,// ->12030
/*12014*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*12016*/     OPC_EmitConvertToTarget, 1,
/*12018*/     OPC_EmitConvertToTarget, 2,
/*12020*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (DEXT:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->12090
/*12034*/   OPC_RecordChild0, // #0 = $rs
/*12035*/   OPC_RecordChild1, // #1 = $pos
/*12036*/   OPC_MoveChild, 1,
/*12038*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12041*/   OPC_MoveParent,
/*12042*/   OPC_RecordChild2, // #2 = $size
/*12043*/   OPC_MoveChild, 2,
/*12045*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12048*/   OPC_MoveParent,
/*12049*/   OPC_RecordChild3, // #3 = $src
/*12050*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->12070
/*12053*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*12055*/     OPC_EmitConvertToTarget, 1,
/*12057*/     OPC_EmitConvertToTarget, 2,
/*12059*/     OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, GPR32Opnd:i32:$src) - Complexity = 9
              // Dst: (INS:i32 GPR32Opnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, GPR32Opnd:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->12089
/*12072*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*12074*/     OPC_EmitConvertToTarget, 1,
/*12076*/     OPC_EmitConvertToTarget, 2,
/*12078*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, GPR64Opnd:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 GPR64Opnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, GPR64Opnd:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7|128,5/*647*/,  TARGET_VAL(ISD::ADD),// ->12741
/*12094*/   OPC_Scope, 110|128,1/*238*/, /*->12335*/ // 3 children in Scope
/*12097*/     OPC_RecordChild0, // #0 = $hi
/*12098*/     OPC_MoveChild, 1,
/*12100*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(MipsISD::Lo),// ->12290
/*12105*/       OPC_RecordChild0, // #1 = $lo
/*12106*/       OPC_MoveChild, 0,
/*12108*/       OPC_SwitchOpcode /*5 cases */, 45,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12157
/*12112*/         OPC_MoveParent,
/*12113*/         OPC_MoveParent,
/*12114*/         OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->12143
/*12117*/           OPC_Scope, 11, /*->12130*/ // 2 children in Scope
/*12119*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12121*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaladdr:i32):$lo)
/*12130*/           /*Scope*/ 11, /*->12142*/
/*12131*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12133*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPU16Regs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*12142*/           0, /*End of Scope*/
                  /*SwitchType*/ 11,  MVT::i64,// ->12156
/*12145*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12147*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetBlockAddress),// ->12190
/*12160*/         OPC_MoveParent,
/*12161*/         OPC_MoveParent,
/*12162*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12176
/*12165*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12167*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->12189
/*12178*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12180*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetJumpTable),// ->12223
/*12193*/         OPC_MoveParent,
/*12194*/         OPC_MoveParent,
/*12195*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12209
/*12198*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12200*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->12222
/*12211*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12213*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetConstantPool),// ->12256
/*12226*/         OPC_MoveParent,
/*12227*/         OPC_MoveParent,
/*12228*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12242
/*12231*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12233*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->12255
/*12244*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12246*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->12289
/*12259*/         OPC_MoveParent,
/*12260*/         OPC_MoveParent,
/*12261*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->12275
/*12264*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12266*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPR32:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->12288
/*12277*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12279*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 GPR64:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::GPRel),// ->12334
/*12293*/       OPC_RecordChild0, // #1 = $in
/*12294*/       OPC_MoveChild, 0,
/*12296*/       OPC_SwitchOpcode /*2 cases */, 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12315
/*12300*/         OPC_MoveParent,
/*12301*/         OPC_MoveParent,
/*12302*/         OPC_CheckType, MVT::i32,
/*12304*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12306*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GPR32:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetConstantPool),// ->12333
/*12318*/         OPC_MoveParent,
/*12319*/         OPC_MoveParent,
/*12320*/         OPC_CheckType, MVT::i32,
/*12322*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12324*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GPR32:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12335*/   /*Scope*/ 116|128,1/*244*/, /*->12581*/
/*12337*/     OPC_MoveChild, 0,
/*12339*/     OPC_SwitchOpcode /*2 cases */, 62|128,1/*190*/,  TARGET_VAL(MipsISD::Lo),// ->12534
/*12344*/       OPC_RecordChild0, // #0 = $lo
/*12345*/       OPC_MoveChild, 0,
/*12347*/       OPC_SwitchOpcode /*5 cases */, 46,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12397
/*12351*/         OPC_MoveParent,
/*12352*/         OPC_MoveParent,
/*12353*/         OPC_RecordChild1, // #1 = $hi
/*12354*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12368
/*12357*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12359*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 26,  MVT::i32,// ->12396
/*12370*/           OPC_Scope, 11, /*->12383*/ // 2 children in Scope
/*12372*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12374*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPU16Regs:i32:$hi) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*12383*/           /*Scope*/ 11, /*->12395*/
/*12384*/             OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12386*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                      // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaladdr:i32):$lo)
/*12395*/           0, /*End of Scope*/
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->12431
/*12400*/         OPC_MoveParent,
/*12401*/         OPC_MoveParent,
/*12402*/         OPC_RecordChild1, // #1 = $hi
/*12403*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12417
/*12406*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12408*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12430
/*12419*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12421*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->12465
/*12434*/         OPC_MoveParent,
/*12435*/         OPC_MoveParent,
/*12436*/         OPC_RecordChild1, // #1 = $hi
/*12437*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12451
/*12440*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12442*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12464
/*12453*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12455*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->12499
/*12468*/         OPC_MoveParent,
/*12469*/         OPC_MoveParent,
/*12470*/         OPC_RecordChild1, // #1 = $hi
/*12471*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12485
/*12474*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12476*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12498
/*12487*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12489*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->12533
/*12502*/         OPC_MoveParent,
/*12503*/         OPC_MoveParent,
/*12504*/         OPC_RecordChild1, // #1 = $hi
/*12505*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12519
/*12508*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12510*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), GPR64:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 GPR64:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12532
/*12521*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12523*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), GPR32:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 GPR32:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::GPRel),// ->12580
/*12537*/       OPC_RecordChild0, // #0 = $in
/*12538*/       OPC_MoveChild, 0,
/*12540*/       OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12560
/*12544*/         OPC_MoveParent,
/*12545*/         OPC_MoveParent,
/*12546*/         OPC_RecordChild1, // #1 = $gp
/*12547*/         OPC_CheckType, MVT::i32,
/*12549*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12551*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), GPR32:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::TargetConstantPool),// ->12579
/*12563*/         OPC_MoveParent,
/*12564*/         OPC_MoveParent,
/*12565*/         OPC_RecordChild1, // #1 = $gp
/*12566*/         OPC_CheckType, MVT::i32,
/*12568*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12570*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), GPR32:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12581*/   /*Scope*/ 29|128,1/*157*/, /*->12740*/
/*12583*/     OPC_RecordChild0, // #0 = $rs
/*12584*/     OPC_RecordChild1, // #1 = $imm16
/*12585*/     OPC_Scope, 81, /*->12668*/ // 5 children in Scope
/*12587*/       OPC_MoveChild, 1,
/*12589*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12592*/       OPC_Scope, 35, /*->12629*/ // 3 children in Scope
/*12594*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12596*/         OPC_MoveParent,
/*12597*/         OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12613
/*12600*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12602*/           OPC_EmitConvertToTarget, 1,
/*12604*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (ADDiu:i32 GPR32Opnd:i32:$rs, (imm:i32):$imm16)
                  /*SwitchType*/ 13,  MVT::i64,// ->12628
/*12615*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12617*/           OPC_EmitConvertToTarget, 1,
/*12619*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (DADDiu:i64 GPR64Opnd:i64:$rs, (imm:i64):$imm16)
                  0, // EndSwitchType
/*12629*/       /*Scope*/ 18, /*->12648*/
/*12630*/         OPC_CheckPredicate, 30, // Predicate_immSExt8
/*12632*/         OPC_MoveParent,
/*12633*/         OPC_CheckType, MVT::i32,
/*12635*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12637*/         OPC_EmitConvertToTarget, 1,
/*12639*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImm16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImm16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm)
/*12648*/       /*Scope*/ 18, /*->12667*/
/*12649*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12651*/         OPC_MoveParent,
/*12652*/         OPC_CheckType, MVT::i32,
/*12654*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12656*/         OPC_EmitConvertToTarget, 1,
/*12658*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
/*12667*/       0, /*End of Scope*/
/*12668*/     /*Scope*/ 28, /*->12697*/
/*12669*/       OPC_CheckType, MVT::i32,
/*12671*/       OPC_Scope, 11, /*->12684*/ // 2 children in Scope
/*12673*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12675*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                  // Dst: (ADDu:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*12684*/       /*Scope*/ 11, /*->12696*/
/*12685*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12687*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12696*/       0, /*End of Scope*/
/*12697*/     /*Scope*/ 13, /*->12711*/
/*12698*/       OPC_CheckType, MVT::i64,
/*12700*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12702*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*12711*/     /*Scope*/ 13, /*->12725*/
/*12712*/       OPC_CheckType, MVT::v2i16,
/*12714*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12716*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*12725*/     /*Scope*/ 13, /*->12739*/
/*12726*/       OPC_CheckType, MVT::v4i8,
/*12728*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12730*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*12739*/     0, /*End of Scope*/
/*12740*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 103|128,9/*1255*/,  TARGET_VAL(ISD::SETCC),// ->14000
/*12745*/   OPC_RecordChild0, // #0 = $lhs
/*12746*/   OPC_Scope, 60|128,6/*828*/, /*->13577*/ // 2 children in Scope
/*12749*/     OPC_CheckChild0Type, MVT::i32,
/*12751*/     OPC_Scope, 7|128,1/*135*/, /*->12889*/ // 2 children in Scope
/*12754*/       OPC_MoveChild, 1,
/*12756*/       OPC_Scope, 67, /*->12825*/ // 2 children in Scope
/*12758*/         OPC_CheckInteger, 0, 
/*12760*/         OPC_MoveParent,
/*12761*/         OPC_MoveChild, 2,
/*12763*/         OPC_Scope, 19, /*->12784*/ // 3 children in Scope
/*12765*/           OPC_CheckCondCode, ISD::SETEQ,
/*12767*/           OPC_MoveParent,
/*12768*/           OPC_CheckType, MVT::i32,
/*12770*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12772*/           OPC_EmitInteger, MVT::i32, 1, 
/*12775*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                    // Dst: (SLTiu:i32 GPR32:i32:$lhs, 1:i32)
/*12784*/         /*Scope*/ 19, /*->12804*/
/*12785*/           OPC_CheckCondCode, ISD::SETNE,
/*12787*/           OPC_MoveParent,
/*12788*/           OPC_CheckType, MVT::i32,
/*12790*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12792*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12795*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, 0:i32, SETNE:Other) - Complexity = 8
                    // Dst: (SLTu:i32 ZERO:i32, GPR32:i32:$lhs)
/*12804*/         /*Scope*/ 19, /*->12824*/
/*12805*/           OPC_CheckCondCode, ISD::SETEQ,
/*12807*/           OPC_MoveParent,
/*12808*/           OPC_CheckType, MVT::i32,
/*12810*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12812*/           OPC_EmitInteger, MVT::i32, 1, 
/*12815*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$lhs, 1:i32)
/*12824*/         0, /*End of Scope*/
/*12825*/       /*Scope*/ 62, /*->12888*/
/*12826*/         OPC_CheckInteger, 127|128,127|128,125|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518847*/, 
/*12837*/         OPC_MoveParent,
/*12838*/         OPC_MoveChild, 2,
/*12840*/         OPC_CheckCondCode, ISD::SETGT,
/*12842*/         OPC_MoveParent,
/*12843*/         OPC_CheckType, MVT::i32,
/*12845*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12847*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518848*/, 
/*12859*/         OPC_EmitNode, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12868*/         OPC_EmitInteger, MVT::i32, 1, 
/*12871*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12879*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, -32769:i32, SETGT:Other) - Complexity = 8
                  // Dst: (XorRxRxRy16:i32 (SltiCCRxImmX16:i32 CPU16Regs:i32:$lhs, -32768:i32), (LiRxImmX16:i32 1:i32))
/*12888*/       0, /*End of Scope*/
/*12889*/     /*Scope*/ 45|128,5/*685*/, /*->13576*/
/*12891*/       OPC_RecordChild1, // #1 = $imm16
/*12892*/       OPC_Scope, 22|128,1/*150*/, /*->13045*/ // 2 children in Scope
/*12895*/         OPC_MoveChild, 1,
/*12897*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12900*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12902*/         OPC_MoveParent,
/*12903*/         OPC_MoveChild, 2,
/*12905*/         OPC_Scope, 18, /*->12925*/ // 6 children in Scope
/*12907*/           OPC_CheckCondCode, ISD::SETLT,
/*12909*/           OPC_MoveParent,
/*12910*/           OPC_CheckType, MVT::i32,
/*12912*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12914*/           OPC_EmitConvertToTarget, 1,
/*12916*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi:i32 GPR32Opnd:i32:$rs, (imm:i32):$imm16)
/*12925*/         /*Scope*/ 18, /*->12944*/
/*12926*/           OPC_CheckCondCode, ISD::SETULT,
/*12928*/           OPC_MoveParent,
/*12929*/           OPC_CheckType, MVT::i32,
/*12931*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12933*/           OPC_EmitConvertToTarget, 1,
/*12935*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu:i32 GPR32Opnd:i32:$rs, (imm:i32):$imm16)
/*12944*/         /*Scope*/ 30, /*->12975*/
/*12945*/           OPC_CheckCondCode, ISD::SETGE,
/*12947*/           OPC_MoveParent,
/*12948*/           OPC_CheckType, MVT::i32,
/*12950*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12952*/           OPC_EmitConvertToTarget, 1,
/*12954*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12963*/           OPC_EmitInteger, MVT::i32, 1, 
/*12966*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12975*/         /*Scope*/ 30, /*->13006*/
/*12976*/           OPC_CheckCondCode, ISD::SETUGE,
/*12978*/           OPC_MoveParent,
/*12979*/           OPC_CheckType, MVT::i32,
/*12981*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*12983*/           OPC_EmitConvertToTarget, 1,
/*12985*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12994*/           OPC_EmitInteger, MVT::i32, 1, 
/*12997*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu:i32 GPR32:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13006*/         /*Scope*/ 18, /*->13025*/
/*13007*/           OPC_CheckCondCode, ISD::SETLT,
/*13009*/           OPC_MoveParent,
/*13010*/           OPC_CheckType, MVT::i32,
/*13012*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13014*/           OPC_EmitConvertToTarget, 1,
/*13016*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SltiCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*13025*/         /*Scope*/ 18, /*->13044*/
/*13026*/           OPC_CheckCondCode, ISD::SETULT,
/*13028*/           OPC_MoveParent,
/*13029*/           OPC_CheckType, MVT::i32,
/*13031*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13033*/           OPC_EmitConvertToTarget, 1,
/*13035*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*13044*/         0, /*End of Scope*/
/*13045*/       /*Scope*/ 16|128,4/*528*/, /*->13575*/
/*13047*/         OPC_MoveChild, 2,
/*13049*/         OPC_Scope, 16, /*->13067*/ // 20 children in Scope
/*13051*/           OPC_CheckCondCode, ISD::SETLT,
/*13053*/           OPC_MoveParent,
/*13054*/           OPC_CheckType, MVT::i32,
/*13056*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13058*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*13067*/         /*Scope*/ 16, /*->13084*/
/*13068*/           OPC_CheckCondCode, ISD::SETULT,
/*13070*/           OPC_MoveParent,
/*13071*/           OPC_CheckType, MVT::i32,
/*13073*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13075*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*13084*/         /*Scope*/ 16, /*->13101*/
/*13085*/           OPC_CheckCondCode, ISD::SETGT,
/*13087*/           OPC_MoveParent,
/*13088*/           OPC_CheckType, MVT::i32,
/*13090*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13092*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs)
/*13101*/         /*Scope*/ 16, /*->13118*/
/*13102*/           OPC_CheckCondCode, ISD::SETUGT,
/*13104*/           OPC_MoveParent,
/*13105*/           OPC_CheckType, MVT::i32,
/*13107*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13109*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs)
/*13118*/         /*Scope*/ 28, /*->13147*/
/*13119*/           OPC_CheckCondCode, ISD::SETEQ,
/*13121*/           OPC_MoveParent,
/*13122*/           OPC_CheckType, MVT::i32,
/*13124*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13126*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13135*/           OPC_EmitInteger, MVT::i32, 1, 
/*13138*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu:i32 (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), 1:i32)
/*13147*/         /*Scope*/ 28, /*->13176*/
/*13148*/           OPC_CheckCondCode, ISD::SETNE,
/*13150*/           OPC_MoveParent,
/*13151*/           OPC_CheckType, MVT::i32,
/*13153*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13155*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*13158*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3
/*13167*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 GPR32:i32:$lhs, GPR32:i32:$rhs))
/*13176*/         /*Scope*/ 28, /*->13205*/
/*13177*/           OPC_CheckCondCode, ISD::SETLE,
/*13179*/           OPC_MoveParent,
/*13180*/           OPC_CheckType, MVT::i32,
/*13182*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13184*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13193*/           OPC_EmitInteger, MVT::i32, 1, 
/*13196*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), 1:i32)
/*13205*/         /*Scope*/ 28, /*->13234*/
/*13206*/           OPC_CheckCondCode, ISD::SETULE,
/*13208*/           OPC_MoveParent,
/*13209*/           OPC_CheckType, MVT::i32,
/*13211*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13213*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13222*/           OPC_EmitInteger, MVT::i32, 1, 
/*13225*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 GPR32:i32:$rhs, GPR32:i32:$lhs), 1:i32)
/*13234*/         /*Scope*/ 28, /*->13263*/
/*13235*/           OPC_CheckCondCode, ISD::SETGE,
/*13237*/           OPC_MoveParent,
/*13238*/           OPC_CheckType, MVT::i32,
/*13240*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13242*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13251*/           OPC_EmitInteger, MVT::i32, 1, 
/*13254*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), 1:i32)
/*13263*/         /*Scope*/ 28, /*->13292*/
/*13264*/           OPC_CheckCondCode, ISD::SETUGE,
/*13266*/           OPC_MoveParent,
/*13267*/           OPC_CheckType, MVT::i32,
/*13269*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13271*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13280*/           OPC_EmitInteger, MVT::i32, 1, 
/*13283*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs), 1:i32)
/*13292*/         /*Scope*/ 16, /*->13309*/
/*13293*/           OPC_CheckCondCode, ISD::SETGT,
/*13295*/           OPC_MoveParent,
/*13296*/           OPC_CheckType, MVT::i32,
/*13298*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13300*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*13309*/         /*Scope*/ 16, /*->13326*/
/*13310*/           OPC_CheckCondCode, ISD::SETLT,
/*13312*/           OPC_MoveParent,
/*13313*/           OPC_CheckType, MVT::i32,
/*13315*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13317*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*13326*/         /*Scope*/ 16, /*->13343*/
/*13327*/           OPC_CheckCondCode, ISD::SETUGT,
/*13329*/           OPC_MoveParent,
/*13330*/           OPC_CheckType, MVT::i32,
/*13332*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13334*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*13343*/         /*Scope*/ 16, /*->13360*/
/*13344*/           OPC_CheckCondCode, ISD::SETULT,
/*13346*/           OPC_MoveParent,
/*13347*/           OPC_CheckType, MVT::i32,
/*13349*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13351*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETULT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*13360*/         /*Scope*/ 28, /*->13389*/
/*13361*/           OPC_CheckCondCode, ISD::SETEQ,
/*13363*/           OPC_MoveParent,
/*13364*/           OPC_CheckType, MVT::i32,
/*13366*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13368*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13377*/           OPC_EmitInteger, MVT::i32, 1, 
/*13380*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SltiuCCRxImmX16:i32 (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), 1:i32)
/*13389*/         /*Scope*/ 36, /*->13426*/
/*13390*/           OPC_CheckCondCode, ISD::SETGE,
/*13392*/           OPC_MoveParent,
/*13393*/           OPC_CheckType, MVT::i32,
/*13395*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13397*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13406*/           OPC_EmitInteger, MVT::i32, 1, 
/*13409*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13417*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13426*/         /*Scope*/ 36, /*->13463*/
/*13427*/           OPC_CheckCondCode, ISD::SETLE,
/*13429*/           OPC_MoveParent,
/*13430*/           OPC_CheckType, MVT::i32,
/*13432*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13434*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13443*/           OPC_EmitInteger, MVT::i32, 1, 
/*13446*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImm16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13454*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImm16:i32 1:i32))
/*13463*/         /*Scope*/ 36, /*->13500*/
/*13464*/           OPC_CheckCondCode, ISD::SETNE,
/*13466*/           OPC_MoveParent,
/*13467*/           OPC_CheckType, MVT::i32,
/*13469*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13471*/           OPC_EmitInteger, MVT::i32, 0, 
/*13474*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*13482*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*13491*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 (LiRxImmX16:i32 0:i32), (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs))
/*13500*/         /*Scope*/ 36, /*->13537*/
/*13501*/           OPC_CheckCondCode, ISD::SETUGE,
/*13503*/           OPC_MoveParent,
/*13504*/           OPC_CheckType, MVT::i32,
/*13506*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13508*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13517*/           OPC_EmitInteger, MVT::i32, 1, 
/*13520*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13528*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13537*/         /*Scope*/ 36, /*->13574*/
/*13538*/           OPC_CheckCondCode, ISD::SETULE,
/*13540*/           OPC_MoveParent,
/*13541*/           OPC_CheckType, MVT::i32,
/*13543*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13545*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13554*/           OPC_EmitInteger, MVT::i32, 1, 
/*13557*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13565*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*13574*/         0, /*End of Scope*/
/*13575*/       0, /*End of Scope*/
/*13576*/     0, /*End of Scope*/
/*13577*/   /*Scope*/ 36|128,3/*420*/, /*->13999*/
/*13579*/     OPC_CheckChild0Type, MVT::i64,
/*13581*/     OPC_Scope, 49, /*->13632*/ // 2 children in Scope
/*13583*/       OPC_MoveChild, 1,
/*13585*/       OPC_CheckInteger, 0, 
/*13587*/       OPC_MoveParent,
/*13588*/       OPC_MoveChild, 2,
/*13590*/       OPC_Scope, 19, /*->13611*/ // 2 children in Scope
/*13592*/         OPC_CheckCondCode, ISD::SETEQ,
/*13594*/         OPC_MoveParent,
/*13595*/         OPC_CheckType, MVT::i32,
/*13597*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13599*/         OPC_EmitInteger, MVT::i64, 1, 
/*13602*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 GPR64:i64:$lhs, 0:i64, SETEQ:Other) - Complexity = 8
                  // Dst: (SLTiu64:i32 GPR64:i64:$lhs, 1:i64)
/*13611*/       /*Scope*/ 19, /*->13631*/
/*13612*/         OPC_CheckCondCode, ISD::SETNE,
/*13614*/         OPC_MoveParent,
/*13615*/         OPC_CheckType, MVT::i32,
/*13617*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13619*/         OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13622*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 GPR64:i64:$lhs, 0:i64, SETNE:Other) - Complexity = 8
                  // Dst: (SLTu64:i32 ZERO_64:i64, GPR64:i64:$lhs)
/*13631*/       0, /*End of Scope*/
/*13632*/     /*Scope*/ 108|128,2/*364*/, /*->13998*/
/*13634*/       OPC_RecordChild1, // #1 = $imm16
/*13635*/       OPC_Scope, 112, /*->13749*/ // 2 children in Scope
/*13637*/         OPC_MoveChild, 1,
/*13639*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13642*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*13644*/         OPC_MoveParent,
/*13645*/         OPC_MoveChild, 2,
/*13647*/         OPC_Scope, 18, /*->13667*/ // 4 children in Scope
/*13649*/           OPC_CheckCondCode, ISD::SETLT,
/*13651*/           OPC_MoveParent,
/*13652*/           OPC_CheckType, MVT::i32,
/*13654*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13656*/           OPC_EmitConvertToTarget, 1,
/*13658*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi64:i32 GPR64Opnd:i64:$rs, (imm:i64):$imm16)
/*13667*/         /*Scope*/ 18, /*->13686*/
/*13668*/           OPC_CheckCondCode, ISD::SETULT,
/*13670*/           OPC_MoveParent,
/*13671*/           OPC_CheckType, MVT::i32,
/*13673*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13675*/           OPC_EmitConvertToTarget, 1,
/*13677*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu64:i32 GPR64Opnd:i64:$rs, (imm:i64):$imm16)
/*13686*/         /*Scope*/ 30, /*->13717*/
/*13687*/           OPC_CheckCondCode, ISD::SETGE,
/*13689*/           OPC_MoveParent,
/*13690*/           OPC_CheckType, MVT::i32,
/*13692*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13694*/           OPC_EmitConvertToTarget, 1,
/*13696*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13705*/           OPC_EmitInteger, MVT::i32, 1, 
/*13708*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13717*/         /*Scope*/ 30, /*->13748*/
/*13718*/           OPC_CheckCondCode, ISD::SETUGE,
/*13720*/           OPC_MoveParent,
/*13721*/           OPC_CheckType, MVT::i32,
/*13723*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13725*/           OPC_EmitConvertToTarget, 1,
/*13727*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13736*/           OPC_EmitInteger, MVT::i32, 1, 
/*13739*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu64:i32 GPR64:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13748*/         0, /*End of Scope*/
/*13749*/       /*Scope*/ 118|128,1/*246*/, /*->13997*/
/*13751*/         OPC_MoveChild, 2,
/*13753*/         OPC_Scope, 16, /*->13771*/ // 10 children in Scope
/*13755*/           OPC_CheckCondCode, ISD::SETLT,
/*13757*/           OPC_MoveParent,
/*13758*/           OPC_CheckType, MVT::i32,
/*13760*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13762*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT64:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*13771*/         /*Scope*/ 16, /*->13788*/
/*13772*/           OPC_CheckCondCode, ISD::SETULT,
/*13774*/           OPC_MoveParent,
/*13775*/           OPC_CheckType, MVT::i32,
/*13777*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13779*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*13788*/         /*Scope*/ 16, /*->13805*/
/*13789*/           OPC_CheckCondCode, ISD::SETGT,
/*13791*/           OPC_MoveParent,
/*13792*/           OPC_CheckType, MVT::i32,
/*13794*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13796*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs)
/*13805*/         /*Scope*/ 16, /*->13822*/
/*13806*/           OPC_CheckCondCode, ISD::SETUGT,
/*13808*/           OPC_MoveParent,
/*13809*/           OPC_CheckType, MVT::i32,
/*13811*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13813*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs)
/*13822*/         /*Scope*/ 28, /*->13851*/
/*13823*/           OPC_CheckCondCode, ISD::SETEQ,
/*13825*/           OPC_MoveParent,
/*13826*/           OPC_CheckType, MVT::i32,
/*13828*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13830*/           OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*13839*/           OPC_EmitInteger, MVT::i64, 1, 
/*13842*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu64:i32 (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs), 1:i64)
/*13851*/         /*Scope*/ 28, /*->13880*/
/*13852*/           OPC_CheckCondCode, ISD::SETNE,
/*13854*/           OPC_MoveParent,
/*13855*/           OPC_CheckType, MVT::i32,
/*13857*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13859*/           OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13862*/           OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3
/*13871*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 GPR64:i64:$lhs, GPR64:i64:$rhs))
/*13880*/         /*Scope*/ 28, /*->13909*/
/*13881*/           OPC_CheckCondCode, ISD::SETLE,
/*13883*/           OPC_MoveParent,
/*13884*/           OPC_CheckType, MVT::i32,
/*13886*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13888*/           OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13897*/           OPC_EmitInteger, MVT::i32, 1, 
/*13900*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), 1:i32)
/*13909*/         /*Scope*/ 28, /*->13938*/
/*13910*/           OPC_CheckCondCode, ISD::SETULE,
/*13912*/           OPC_MoveParent,
/*13913*/           OPC_CheckType, MVT::i32,
/*13915*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13917*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13926*/           OPC_EmitInteger, MVT::i32, 1, 
/*13929*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu64:i32 GPR64:i64:$rhs, GPR64:i64:$lhs), 1:i32)
/*13938*/         /*Scope*/ 28, /*->13967*/
/*13939*/           OPC_CheckCondCode, ISD::SETGE,
/*13941*/           OPC_MoveParent,
/*13942*/           OPC_CheckType, MVT::i32,
/*13944*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13946*/           OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13955*/           OPC_EmitInteger, MVT::i32, 1, 
/*13958*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), 1:i32)
/*13967*/         /*Scope*/ 28, /*->13996*/
/*13968*/           OPC_CheckCondCode, ISD::SETUGE,
/*13970*/           OPC_MoveParent,
/*13971*/           OPC_CheckType, MVT::i32,
/*13973*/           OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*13975*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13984*/           OPC_EmitInteger, MVT::i32, 1, 
/*13987*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 GPR64:i64:$lhs, GPR64:i64:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu64:i32 GPR64:i64:$lhs, GPR64:i64:$rhs), 1:i32)
/*13996*/         0, /*End of Scope*/
/*13997*/       0, /*End of Scope*/
/*13998*/     0, /*End of Scope*/
/*13999*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(MipsISD::FPBrcond),// ->14057
/*14003*/   OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*14004*/   OPC_CaptureGlueInput,
/*14005*/   OPC_MoveChild, 1,
/*14007*/   OPC_CheckType, MVT::i32,
/*14009*/   OPC_Scope, 22, /*->14033*/ // 2 children in Scope
/*14011*/     OPC_CheckInteger, 0, 
/*14013*/     OPC_MoveParent,
/*14014*/     OPC_RecordChild2, // #1 = $fcc
/*14015*/     OPC_RecordChild3, // #2 = $offset
/*14016*/     OPC_MoveChild, 3,
/*14018*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*14021*/     OPC_MoveParent,
/*14022*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14024*/     OPC_EmitMergeInputChains1_0,
/*14025*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MipsFPBrcond 0:i32, FCCRegsOpnd:i32:$fcc, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1F FCCRegsOpnd:i32:$fcc, (bb:Other):$offset)
/*14033*/   /*Scope*/ 22, /*->14056*/
/*14034*/     OPC_CheckInteger, 1, 
/*14036*/     OPC_MoveParent,
/*14037*/     OPC_RecordChild2, // #1 = $fcc
/*14038*/     OPC_RecordChild3, // #2 = $offset
/*14039*/     OPC_MoveChild, 3,
/*14041*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*14044*/     OPC_MoveParent,
/*14045*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14047*/     OPC_EmitMergeInputChains1_0,
/*14048*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MipsFPBrcond 1:i32, FCCRegsOpnd:i32:$fcc, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1T FCCRegsOpnd:i32:$fcc, (bb:Other):$offset)
/*14056*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::SUB),// ->14153
/*14060*/   OPC_Scope, 18, /*->14080*/ // 2 children in Scope
/*14062*/     OPC_MoveChild, 0,
/*14064*/     OPC_CheckInteger, 0, 
/*14066*/     OPC_MoveParent,
/*14067*/     OPC_RecordChild1, // #0 = $r
/*14068*/     OPC_CheckType, MVT::i32,
/*14070*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14072*/     OPC_MorphNodeTo, TARGET_VAL(Mips::NegRxRy16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, CPU16Regs:i32:$r) - Complexity = 8
              // Dst: (NegRxRy16:i32 CPU16Regs:i32:$r)
/*14080*/   /*Scope*/ 71, /*->14152*/
/*14081*/     OPC_RecordChild0, // #0 = $rs
/*14082*/     OPC_RecordChild1, // #1 = $rt
/*14083*/     OPC_SwitchType /*4 cases */, 26,  MVT::i32,// ->14112
/*14086*/       OPC_Scope, 11, /*->14099*/ // 2 children in Scope
/*14088*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14090*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                  // Dst: (SUBu:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*14099*/       /*Scope*/ 11, /*->14111*/
/*14100*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14102*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*14111*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14125
/*14114*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14116*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
                // Dst: (DSUBu:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
              /*SwitchType*/ 11,  MVT::v2i16,// ->14138
/*14127*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14129*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
              /*SwitchType*/ 11,  MVT::v4i8,// ->14151
/*14140*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14142*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
              0, // EndSwitchType
/*14152*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::AND),// ->14250
/*14156*/   OPC_RecordChild0, // #0 = $rs
/*14157*/   OPC_RecordChild1, // #1 = $imm16
/*14158*/   OPC_Scope, 46, /*->14206*/ // 3 children in Scope
/*14160*/     OPC_MoveChild, 1,
/*14162*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14165*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*14167*/     OPC_MoveParent,
/*14168*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->14187
/*14171*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14173*/       OPC_EmitConvertToTarget, 1,
/*14175*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*14178*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 GPR32Opnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->14205
/*14189*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14191*/       OPC_EmitConvertToTarget, 1,
/*14193*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*14196*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi64:i64 GPR64Opnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*14206*/   /*Scope*/ 28, /*->14235*/
/*14207*/     OPC_CheckType, MVT::i32,
/*14209*/     OPC_Scope, 11, /*->14222*/ // 2 children in Scope
/*14211*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14213*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (AND:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*14222*/     /*Scope*/ 11, /*->14234*/
/*14223*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14225*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AndRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (AndRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*14234*/     0, /*End of Scope*/
/*14235*/   /*Scope*/ 13, /*->14249*/
/*14236*/     OPC_CheckType, MVT::i64,
/*14238*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14240*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*14249*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::OR),// ->14347
/*14253*/   OPC_RecordChild0, // #0 = $rs
/*14254*/   OPC_RecordChild1, // #1 = $imm16
/*14255*/   OPC_Scope, 46, /*->14303*/ // 3 children in Scope
/*14257*/     OPC_MoveChild, 1,
/*14259*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14262*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*14264*/     OPC_MoveParent,
/*14265*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->14284
/*14268*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14270*/       OPC_EmitConvertToTarget, 1,
/*14272*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*14275*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 GPR32Opnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 GPR32Opnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->14302
/*14286*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14288*/       OPC_EmitConvertToTarget, 1,
/*14290*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*14293*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 GPR64Opnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 GPR64Opnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*14303*/   /*Scope*/ 28, /*->14332*/
/*14304*/     OPC_CheckType, MVT::i32,
/*14306*/     OPC_Scope, 11, /*->14319*/ // 2 children in Scope
/*14308*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14310*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (OR:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*14319*/     /*Scope*/ 11, /*->14331*/
/*14320*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14322*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (OrRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*14331*/     0, /*End of Scope*/
/*14332*/   /*Scope*/ 13, /*->14346*/
/*14333*/     OPC_CheckType, MVT::i64,
/*14335*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14337*/     OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*14346*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SHL),// ->14467
/*14350*/   OPC_RecordChild0, // #0 = $rt
/*14351*/   OPC_RecordChild1, // #1 = $shamt
/*14352*/   OPC_Scope, 66, /*->14420*/ // 2 children in Scope
/*14354*/     OPC_MoveChild, 1,
/*14356*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14359*/     OPC_CheckType, MVT::i32,
/*14361*/     OPC_Scope, 18, /*->14381*/ // 3 children in Scope
/*14363*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14365*/       OPC_MoveParent,
/*14366*/       OPC_CheckType, MVT::i32,
/*14368*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14370*/       OPC_EmitConvertToTarget, 1,
/*14372*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14381*/     /*Scope*/ 18, /*->14400*/
/*14382*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14384*/       OPC_MoveParent,
/*14385*/       OPC_CheckType, MVT::i64,
/*14387*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14389*/       OPC_EmitConvertToTarget, 1,
/*14391*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14400*/     /*Scope*/ 18, /*->14419*/
/*14401*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14403*/       OPC_MoveParent,
/*14404*/       OPC_CheckType, MVT::i32,
/*14406*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14408*/       OPC_EmitConvertToTarget, 1,
/*14410*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SllX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14419*/     0, /*End of Scope*/
/*14420*/   /*Scope*/ 45, /*->14466*/
/*14421*/     OPC_CheckChild1Type, MVT::i32,
/*14423*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14452
/*14426*/       OPC_Scope, 11, /*->14439*/ // 2 children in Scope
/*14428*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14430*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                  // Dst: (SLLV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
/*14439*/       /*Scope*/ 11, /*->14451*/
/*14440*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14442*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SllvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14451*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14465
/*14454*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14456*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14466*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRL),// ->14587
/*14470*/   OPC_RecordChild0, // #0 = $rt
/*14471*/   OPC_RecordChild1, // #1 = $shamt
/*14472*/   OPC_Scope, 66, /*->14540*/ // 2 children in Scope
/*14474*/     OPC_MoveChild, 1,
/*14476*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14479*/     OPC_CheckType, MVT::i32,
/*14481*/     OPC_Scope, 18, /*->14501*/ // 3 children in Scope
/*14483*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14485*/       OPC_MoveParent,
/*14486*/       OPC_CheckType, MVT::i32,
/*14488*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14490*/       OPC_EmitConvertToTarget, 1,
/*14492*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14501*/     /*Scope*/ 18, /*->14520*/
/*14502*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14504*/       OPC_MoveParent,
/*14505*/       OPC_CheckType, MVT::i64,
/*14507*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14509*/       OPC_EmitConvertToTarget, 1,
/*14511*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14520*/     /*Scope*/ 18, /*->14539*/
/*14521*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14523*/       OPC_MoveParent,
/*14524*/       OPC_CheckType, MVT::i32,
/*14526*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14528*/       OPC_EmitConvertToTarget, 1,
/*14530*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SrlX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SrlX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14539*/     0, /*End of Scope*/
/*14540*/   /*Scope*/ 45, /*->14586*/
/*14541*/     OPC_CheckChild1Type, MVT::i32,
/*14543*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14572
/*14546*/       OPC_Scope, 11, /*->14559*/ // 2 children in Scope
/*14548*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14550*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                  // Dst: (SRLV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
/*14559*/       /*Scope*/ 11, /*->14571*/
/*14560*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14562*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SrlvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SrlvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14571*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14585
/*14574*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14576*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14586*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRA),// ->14707
/*14590*/   OPC_RecordChild0, // #0 = $rt
/*14591*/   OPC_RecordChild1, // #1 = $shamt
/*14592*/   OPC_Scope, 66, /*->14660*/ // 2 children in Scope
/*14594*/     OPC_MoveChild, 1,
/*14596*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14599*/     OPC_CheckType, MVT::i32,
/*14601*/     OPC_Scope, 18, /*->14621*/ // 3 children in Scope
/*14603*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14605*/       OPC_MoveParent,
/*14606*/       OPC_CheckType, MVT::i32,
/*14608*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14610*/       OPC_EmitConvertToTarget, 1,
/*14612*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14621*/     /*Scope*/ 18, /*->14640*/
/*14622*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14624*/       OPC_MoveParent,
/*14625*/       OPC_CheckType, MVT::i64,
/*14627*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14629*/       OPC_EmitConvertToTarget, 1,
/*14631*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14640*/     /*Scope*/ 18, /*->14659*/
/*14641*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14643*/       OPC_MoveParent,
/*14644*/       OPC_CheckType, MVT::i32,
/*14646*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14648*/       OPC_EmitConvertToTarget, 1,
/*14650*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SraX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SraX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14659*/     0, /*End of Scope*/
/*14660*/   /*Scope*/ 45, /*->14706*/
/*14661*/     OPC_CheckChild1Type, MVT::i32,
/*14663*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14692
/*14666*/       OPC_Scope, 11, /*->14679*/ // 2 children in Scope
/*14668*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14670*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                  // Dst: (SRAV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
/*14679*/       /*Scope*/ 11, /*->14691*/
/*14680*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14682*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SravRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SravRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14691*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14705
/*14694*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*14696*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14706*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->14793
/*14710*/   OPC_RecordChild0, // #0 = $rt
/*14711*/   OPC_RecordChild1, // #1 = $shamt
/*14712*/   OPC_Scope, 47, /*->14761*/ // 2 children in Scope
/*14714*/     OPC_MoveChild, 1,
/*14716*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14719*/     OPC_CheckType, MVT::i32,
/*14721*/     OPC_Scope, 18, /*->14741*/ // 2 children in Scope
/*14723*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14725*/       OPC_MoveParent,
/*14726*/       OPC_CheckType, MVT::i32,
/*14728*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14730*/       OPC_EmitConvertToTarget, 1,
/*14732*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 GPR32Opnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 GPR32Opnd:i32:$rt, (imm:i32):$shamt)
/*14741*/     /*Scope*/ 18, /*->14760*/
/*14742*/       OPC_CheckPredicate, 31, // Predicate_immZExt6
/*14744*/       OPC_MoveParent,
/*14745*/       OPC_CheckType, MVT::i64,
/*14747*/       OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14749*/       OPC_EmitConvertToTarget, 1,
/*14751*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 GPR64Opnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 GPR64Opnd:i64:$rt, (imm:i32):$shamt)
/*14760*/     0, /*End of Scope*/
/*14761*/   /*Scope*/ 30, /*->14792*/
/*14762*/     OPC_CheckChild1Type, MVT::i32,
/*14764*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->14778
/*14767*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14769*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (rotr:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 GPR32Opnd:i32:$rt, GPR32Opnd:i32:$rs)
              /*SwitchType*/ 11,  MVT::i64,// ->14791
/*14780*/       OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14782*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (rotr:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 GPR64Opnd:i64:$rt, GPR32Opnd:i32:$rs)
              0, // EndSwitchType
/*14792*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::ADDC),// ->14882
/*14796*/   OPC_RecordChild0, // #0 = $src
/*14797*/   OPC_RecordChild1, // #1 = $imm
/*14798*/   OPC_Scope, 40, /*->14840*/ // 2 children in Scope
/*14800*/     OPC_MoveChild, 1,
/*14802*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14805*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*14807*/     OPC_MoveParent,
/*14808*/     OPC_CheckType, MVT::i32,
/*14810*/     OPC_Scope, 13, /*->14825*/ // 2 children in Scope
/*14812*/       OPC_CheckPatternPredicate, 20, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14814*/       OPC_EmitConvertToTarget, 1,
/*14816*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPR32:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDiu:i32 GPR32:i32:$src, (imm:i32):$imm)
/*14825*/     /*Scope*/ 13, /*->14839*/
/*14826*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14828*/       OPC_EmitConvertToTarget, 1,
/*14830*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPU16Regs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$src, (imm:i32):$imm)
/*14839*/     0, /*End of Scope*/
/*14840*/   /*Scope*/ 40, /*->14881*/
/*14841*/     OPC_CheckType, MVT::i32,
/*14843*/     OPC_Scope, 11, /*->14856*/ // 3 children in Scope
/*14845*/       OPC_CheckPatternPredicate, 20, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14847*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs) - Complexity = 3
                // Dst: (ADDu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs)
/*14856*/     /*Scope*/ 11, /*->14868*/
/*14857*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14859*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
                // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*14868*/     /*Scope*/ 11, /*->14880*/
/*14869*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14871*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
                // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*14880*/     0, /*End of Scope*/
/*14881*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(MipsISD::SHILO),// ->14924
/*14885*/   OPC_RecordChild0, // #0 = $shift
/*14886*/   OPC_Scope, 22, /*->14910*/ // 2 children in Scope
/*14888*/     OPC_MoveChild, 0,
/*14890*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14893*/     OPC_CheckPredicate, 32, // Predicate_immSExt6
/*14895*/     OPC_MoveParent,
/*14896*/     OPC_RecordChild1, // #1 = $acin
/*14897*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14899*/     OPC_EmitConvertToTarget, 0,
/*14901*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILO), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 2, 1, 
              // Src: (MipsSHILO:Untyped (imm:i32)<<P:Predicate_immSExt6>>:$shift, ACC64DSPOpnd:Untyped:$acin) - Complexity = 7
              // Dst: (SHILO:Untyped (imm:i32):$shift, ACC64DSPOpnd:Untyped:$acin)
/*14910*/   /*Scope*/ 12, /*->14923*/
/*14911*/     OPC_RecordChild1, // #1 = $acin
/*14912*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14914*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILOV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsSHILO:Untyped GPR32Opnd:i32:$rs, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
              // Dst: (SHILOV:Untyped GPR32Opnd:i32:$rs, ACC64DSPOpnd:Untyped:$acin)
/*14923*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTP),// ->14969
/*14927*/   OPC_RecordNode,   // #0 = 'MipsEXTP' chained node
/*14928*/   OPC_RecordChild1, // #1 = $shift
/*14929*/   OPC_Scope, 23, /*->14954*/ // 2 children in Scope
/*14931*/     OPC_MoveChild, 1,
/*14933*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14936*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14938*/     OPC_MoveParent,
/*14939*/     OPC_RecordChild2, // #2 = $ac
/*14940*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14942*/     OPC_EmitMergeInputChains1_0,
/*14943*/     OPC_EmitConvertToTarget, 1,
/*14945*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACC64DSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTP:i32 ACC64DSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14954*/   /*Scope*/ 13, /*->14968*/
/*14955*/     OPC_RecordChild2, // #2 = $ac
/*14956*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14958*/     OPC_EmitMergeInputChains1_0,
/*14959*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTP:i32 GPR32:i32:$rs, ACC64DSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPV:i32 ACC64DSP:Untyped:$ac, GPR32:i32:$rs)
/*14968*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTPDP),// ->15014
/*14972*/   OPC_RecordNode,   // #0 = 'MipsEXTPDP' chained node
/*14973*/   OPC_RecordChild1, // #1 = $shift
/*14974*/   OPC_Scope, 23, /*->14999*/ // 2 children in Scope
/*14976*/     OPC_MoveChild, 1,
/*14978*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14981*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14983*/     OPC_MoveParent,
/*14984*/     OPC_RecordChild2, // #2 = $ac
/*14985*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14987*/     OPC_EmitMergeInputChains1_0,
/*14988*/     OPC_EmitConvertToTarget, 1,
/*14990*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTPDP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACC64DSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTPDP:i32 ACC64DSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14999*/   /*Scope*/ 13, /*->15013*/
/*15000*/     OPC_RecordChild2, // #2 = $ac
/*15001*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15003*/     OPC_EmitMergeInputChains1_0,
/*15004*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTPDP:i32 GPR32:i32:$rs, ACC64DSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPDPV:i32 ACC64DSP:Untyped:$ac, GPR32:i32:$rs)
/*15013*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_W),// ->15059
/*15017*/   OPC_RecordNode,   // #0 = 'MipsEXTR_W' chained node
/*15018*/   OPC_RecordChild1, // #1 = $shift
/*15019*/   OPC_Scope, 23, /*->15044*/ // 2 children in Scope
/*15021*/     OPC_MoveChild, 1,
/*15023*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15026*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*15028*/     OPC_MoveParent,
/*15029*/     OPC_RecordChild2, // #2 = $ac
/*15030*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15032*/     OPC_EmitMergeInputChains1_0,
/*15033*/     OPC_EmitConvertToTarget, 1,
/*15035*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACC64DSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_W:i32 ACC64DSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*15044*/   /*Scope*/ 13, /*->15058*/
/*15045*/     OPC_RecordChild2, // #2 = $ac
/*15046*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15048*/     OPC_EmitMergeInputChains1_0,
/*15049*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_W:i32 GPR32:i32:$rs, ACC64DSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_W:i32 ACC64DSP:Untyped:$ac, GPR32:i32:$rs)
/*15058*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_R_W),// ->15104
/*15062*/   OPC_RecordNode,   // #0 = 'MipsEXTR_R_W' chained node
/*15063*/   OPC_RecordChild1, // #1 = $shift
/*15064*/   OPC_Scope, 23, /*->15089*/ // 2 children in Scope
/*15066*/     OPC_MoveChild, 1,
/*15068*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15071*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*15073*/     OPC_MoveParent,
/*15074*/     OPC_RecordChild2, // #2 = $ac
/*15075*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15077*/     OPC_EmitMergeInputChains1_0,
/*15078*/     OPC_EmitConvertToTarget, 1,
/*15080*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_R_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACC64DSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_R_W:i32 ACC64DSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*15089*/   /*Scope*/ 13, /*->15103*/
/*15090*/     OPC_RecordChild2, // #2 = $ac
/*15091*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15093*/     OPC_EmitMergeInputChains1_0,
/*15094*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_R_W:i32 GPR32:i32:$rs, ACC64DSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_R_W:i32 ACC64DSP:Untyped:$ac, GPR32:i32:$rs)
/*15103*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_RS_W),// ->15149
/*15107*/   OPC_RecordNode,   // #0 = 'MipsEXTR_RS_W' chained node
/*15108*/   OPC_RecordChild1, // #1 = $shift
/*15109*/   OPC_Scope, 23, /*->15134*/ // 2 children in Scope
/*15111*/     OPC_MoveChild, 1,
/*15113*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15116*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*15118*/     OPC_MoveParent,
/*15119*/     OPC_RecordChild2, // #2 = $ac
/*15120*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15122*/     OPC_EmitMergeInputChains1_0,
/*15123*/     OPC_EmitConvertToTarget, 1,
/*15125*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_RS_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACC64DSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_RS_W:i32 ACC64DSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*15134*/   /*Scope*/ 13, /*->15148*/
/*15135*/     OPC_RecordChild2, // #2 = $ac
/*15136*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15138*/     OPC_EmitMergeInputChains1_0,
/*15139*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_RS_W:i32 GPR32:i32:$rs, ACC64DSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_RS_W:i32 ACC64DSP:Untyped:$ac, GPR32:i32:$rs)
/*15148*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_S_H),// ->15194
/*15152*/   OPC_RecordNode,   // #0 = 'MipsEXTR_S_H' chained node
/*15153*/   OPC_RecordChild1, // #1 = $shift
/*15154*/   OPC_Scope, 23, /*->15179*/ // 2 children in Scope
/*15156*/     OPC_MoveChild, 1,
/*15158*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15161*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*15163*/     OPC_MoveParent,
/*15164*/     OPC_RecordChild2, // #2 = $ac
/*15165*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15167*/     OPC_EmitMergeInputChains1_0,
/*15168*/     OPC_EmitConvertToTarget, 1,
/*15170*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_S_H:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACC64DSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_S_H:i32 ACC64DSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*15179*/   /*Scope*/ 13, /*->15193*/
/*15180*/     OPC_RecordChild2, // #2 = $ac
/*15181*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*15183*/     OPC_EmitMergeInputChains1_0,
/*15184*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_S_H:i32 GPR32:i32:$rs, ACC64DSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_S_H:i32 ACC64DSP:Untyped:$ac, GPR32:i32:$rs)
/*15193*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->15213
/*15197*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*15198*/   OPC_RecordChild1, // #1 = $amt
/*15199*/   OPC_MoveChild, 1,
/*15201*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*15204*/   OPC_MoveParent,
/*15205*/   OPC_EmitMergeInputChains1_0,
/*15206*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::Sync),// ->15236
/*15216*/   OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*15217*/   OPC_RecordChild1, // #1 = $stype
/*15218*/   OPC_MoveChild, 1,
/*15220*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15223*/   OPC_MoveParent,
/*15224*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15226*/   OPC_EmitMergeInputChains1_0,
/*15227*/   OPC_EmitConvertToTarget, 1,
/*15229*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 126,  TARGET_VAL(MipsISD::JmpLink),// ->15365
/*15239*/   OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*15240*/   OPC_CaptureGlueInput,
/*15241*/   OPC_RecordChild1, // #1 = $target
/*15242*/   OPC_Scope, 80, /*->15324*/ // 3 children in Scope
/*15244*/     OPC_MoveChild, 1,
/*15246*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->15263
/*15250*/       OPC_MoveParent,
/*15251*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15253*/       OPC_EmitMergeInputChains1_0,
/*15254*/       OPC_EmitConvertToTarget, 1,
/*15256*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15293
/*15266*/       OPC_CheckType, MVT::i32,
/*15268*/       OPC_MoveParent,
/*15269*/       OPC_Scope, 10, /*->15281*/ // 2 children in Scope
/*15271*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15273*/         OPC_EmitMergeInputChains1_0,
/*15274*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (JAL (tglobaladdr:i32):$dst)
/*15281*/       /*Scope*/ 10, /*->15292*/
/*15282*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15284*/         OPC_EmitMergeInputChains1_0,
/*15285*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (tglobaladdr:i32):$dst)
/*15292*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15323
/*15296*/       OPC_CheckType, MVT::i32,
/*15298*/       OPC_MoveParent,
/*15299*/       OPC_Scope, 10, /*->15311*/ // 2 children in Scope
/*15301*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15303*/         OPC_EmitMergeInputChains1_0,
/*15304*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (JAL (texternalsym:i32):$dst)
/*15311*/       /*Scope*/ 10, /*->15322*/
/*15312*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15314*/         OPC_EmitMergeInputChains1_0,
/*15315*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (texternalsym:i32):$dst)
/*15322*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*15324*/   /*Scope*/ 26, /*->15351*/
/*15325*/     OPC_CheckChild1Type, MVT::i32,
/*15327*/     OPC_Scope, 10, /*->15339*/ // 2 children in Scope
/*15329*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15331*/       OPC_EmitMergeInputChains1_0,
/*15332*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JALRPseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (JALRPseudo GPR32Opnd:i32:$rs)
/*15339*/     /*Scope*/ 10, /*->15350*/
/*15340*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15342*/       OPC_EmitMergeInputChains1_0,
/*15343*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JumpLinkReg16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JumpLinkReg16 CPU16Regs:i32:$rs)
/*15350*/     0, /*End of Scope*/
/*15351*/   /*Scope*/ 12, /*->15364*/
/*15352*/     OPC_CheckChild1Type, MVT::i64,
/*15354*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15356*/     OPC_EmitMergeInputChains1_0,
/*15357*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64Pseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink GPR64Opnd:i64:$rs) - Complexity = 3
              // Dst: (JALR64Pseudo GPR64Opnd:i64:$rs)
/*15364*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 80,  TARGET_VAL(MipsISD::TailCall),// ->15448
/*15368*/   OPC_RecordNode,   // #0 = 'MipsTailCall' chained node
/*15369*/   OPC_CaptureGlueInput,
/*15370*/   OPC_RecordChild1, // #1 = $target
/*15371*/   OPC_Scope, 48, /*->15421*/ // 3 children in Scope
/*15373*/     OPC_MoveChild, 1,
/*15375*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->15392
/*15379*/       OPC_MoveParent,
/*15380*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15382*/       OPC_EmitMergeInputChains1_0,
/*15383*/       OPC_EmitConvertToTarget, 1,
/*15385*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsTailCall (imm:iPTR):$target) - Complexity = 6
                // Dst: (TAILCALL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15406
/*15395*/       OPC_MoveParent,
/*15396*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15398*/       OPC_EmitMergeInputChains1_0,
/*15399*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (tglobaladdr:iPTR):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15420
/*15409*/       OPC_MoveParent,
/*15410*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15412*/       OPC_EmitMergeInputChains1_0,
/*15413*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (texternalsym:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (texternalsym:iPTR):$dst)
              0, // EndSwitchOpcode
/*15421*/   /*Scope*/ 12, /*->15434*/
/*15422*/     OPC_CheckChild1Type, MVT::i32,
/*15424*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15426*/     OPC_EmitMergeInputChains1_0,
/*15427*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall GPR32Opnd:i32:$rs) - Complexity = 3
              // Dst: (TAILCALL_R GPR32Opnd:i32:$rs)
/*15434*/   /*Scope*/ 12, /*->15447*/
/*15435*/     OPC_CheckChild1Type, MVT::i64,
/*15437*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15439*/     OPC_EmitMergeInputChains1_0,
/*15440*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL64_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall GPR64Opnd:i64:$rs) - Complexity = 3
              // Dst: (TAILCALL64_R GPR64Opnd:i64:$rs)
/*15447*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,2/*263*/,  TARGET_VAL(MipsISD::Hi),// ->15715
/*15452*/   OPC_RecordChild0, // #0 = $in
/*15453*/   OPC_MoveChild, 0,
/*15455*/   OPC_SwitchOpcode /*6 cases */, 53,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15512
/*15459*/     OPC_MoveParent,
/*15460*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15499
/*15463*/       OPC_Scope, 10, /*->15475*/ // 2 children in Scope
/*15465*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15467*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaladdr:i32):$in)
/*15475*/       /*Scope*/ 22, /*->15498*/
/*15476*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15478*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15486*/         OPC_EmitInteger, MVT::i32, 16, 
/*15489*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaladdr:i32):$in), 16:i32)
/*15498*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15511
/*15501*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15503*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->15542
/*15515*/     OPC_MoveParent,
/*15516*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15529
/*15519*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15521*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15541
/*15531*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15533*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetJumpTable),// ->15598
/*15545*/     OPC_MoveParent,
/*15546*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15585
/*15549*/       OPC_Scope, 10, /*->15561*/ // 2 children in Scope
/*15551*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15553*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tjumptable:i32):$in)
/*15561*/       /*Scope*/ 22, /*->15584*/
/*15562*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15564*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15572*/         OPC_EmitInteger, MVT::i32, 16, 
/*15575*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tjumptable:i32):$in), 16:i32)
/*15584*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15597
/*15587*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15589*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->15628
/*15601*/     OPC_MoveParent,
/*15602*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15615
/*15605*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15607*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15627
/*15617*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15619*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15684
/*15631*/     OPC_MoveParent,
/*15632*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15671
/*15635*/       OPC_Scope, 10, /*->15647*/ // 2 children in Scope
/*15637*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15639*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
/*15647*/       /*Scope*/ 22, /*->15670*/
/*15648*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15650*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15658*/         OPC_EmitInteger, MVT::i32, 16, 
/*15661*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaltlsaddr:i32):$in), 16:i32)
/*15670*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15683
/*15673*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15675*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15714
/*15687*/     OPC_MoveParent,
/*15688*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15701
/*15691*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15693*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (texternalsym:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15713
/*15703*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15705*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 105|128,1/*233*/,  TARGET_VAL(MipsISD::Lo),// ->15952
/*15719*/   OPC_RecordChild0, // #0 = $in
/*15720*/   OPC_MoveChild, 0,
/*15722*/   OPC_SwitchOpcode /*6 cases */, 35,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15761
/*15726*/     OPC_MoveParent,
/*15727*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15744
/*15730*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15732*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15735*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15760
/*15746*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15748*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15751*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetBlockAddress),// ->15799
/*15764*/     OPC_MoveParent,
/*15765*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15782
/*15768*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15770*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15773*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15798
/*15784*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15786*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15789*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetJumpTable),// ->15837
/*15802*/     OPC_MoveParent,
/*15803*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15820
/*15806*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15808*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15811*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15836
/*15822*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15824*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15827*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetConstantPool),// ->15875
/*15840*/     OPC_MoveParent,
/*15841*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15858
/*15844*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15846*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15849*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15874
/*15860*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15862*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15865*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15913
/*15878*/     OPC_MoveParent,
/*15879*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15896
/*15882*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15884*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15887*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15912
/*15898*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15900*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15903*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15951
/*15916*/     OPC_MoveParent,
/*15917*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15934
/*15920*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15922*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15925*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (texternalsym:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15950
/*15936*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15938*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15941*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 100|128,1/*228*/,  TARGET_VAL(MipsISD::Wrapper),// ->16184
/*15956*/   OPC_RecordChild0, // #0 = $gp
/*15957*/   OPC_RecordChild1, // #1 = $in
/*15958*/   OPC_MoveChild, 1,
/*15960*/   OPC_SwitchOpcode /*6 cases */, 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->16008
/*15964*/     OPC_MoveParent,
/*15965*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15994
/*15968*/       OPC_Scope, 11, /*->15981*/ // 2 children in Scope
/*15970*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15972*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaladdr:i32):$in)
/*15981*/       /*Scope*/ 11, /*->15993*/
/*15982*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15984*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in)
/*15993*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->16007
/*15996*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*15998*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetConstantPool),// ->16040
/*16011*/     OPC_MoveParent,
/*16012*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->16026
/*16015*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16017*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->16039
/*16028*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16030*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetExternalSymbol),// ->16072
/*16043*/     OPC_MoveParent,
/*16044*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->16058
/*16047*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16049*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->16071
/*16060*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16062*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetBlockAddress),// ->16104
/*16075*/     OPC_MoveParent,
/*16076*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->16090
/*16079*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16081*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->16103
/*16092*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16094*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetJumpTable),// ->16136
/*16107*/     OPC_MoveParent,
/*16108*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->16122
/*16111*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16113*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 GPR32:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->16135
/*16124*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16126*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->16183
/*16139*/     OPC_MoveParent,
/*16140*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->16169
/*16143*/       OPC_Scope, 11, /*->16156*/ // 2 children in Scope
/*16145*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16147*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 GPR32:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 GPR32:i32:$gp, (tglobaltlsaddr:i32):$in)
/*16156*/       /*Scope*/ 11, /*->16168*/
/*16157*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16159*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*16168*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->16182
/*16171*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16173*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 GPR64:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 GPR64:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 71,  TARGET_VAL(MipsISD::FPCmp),// ->16258
/*16187*/   OPC_RecordChild0, // #0 = $fs
/*16188*/   OPC_Scope, 24, /*->16214*/ // 2 children in Scope
/*16190*/     OPC_CheckChild0Type, MVT::f32,
/*16192*/     OPC_RecordChild1, // #1 = $ft
/*16193*/     OPC_RecordChild2, // #2 = $cond
/*16194*/     OPC_MoveChild, 2,
/*16196*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16199*/     OPC_MoveParent,
/*16200*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16202*/     OPC_EmitConvertToTarget, 2,
/*16204*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond)
/*16214*/   /*Scope*/ 42, /*->16257*/
/*16215*/     OPC_CheckChild0Type, MVT::f64,
/*16217*/     OPC_RecordChild1, // #1 = $ft
/*16218*/     OPC_RecordChild2, // #2 = $cond
/*16219*/     OPC_MoveChild, 2,
/*16221*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16224*/     OPC_MoveParent,
/*16225*/     OPC_Scope, 14, /*->16241*/ // 2 children in Scope
/*16227*/       OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16229*/       OPC_EmitConvertToTarget, 2,
/*16231*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond)
/*16241*/     /*Scope*/ 14, /*->16256*/
/*16242*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*16244*/       OPC_EmitConvertToTarget, 2,
/*16246*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond)
/*16256*/     0, /*End of Scope*/
/*16257*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(MipsISD::ExtractElementF64),// ->16282
/*16261*/   OPC_RecordChild0, // #0 = $src
/*16262*/   OPC_RecordChild1, // #1 = $n
/*16263*/   OPC_MoveChild, 1,
/*16265*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*16268*/   OPC_MoveParent,
/*16269*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16271*/   OPC_EmitConvertToTarget, 1,
/*16273*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64Opnd:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64Opnd:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::Constant),// ->16475
/*16286*/   OPC_RecordNode,   // #0 = $in
/*16287*/   OPC_CheckType, MVT::i32,
/*16289*/   OPC_Scope, 18, /*->16309*/ // 6 children in Scope
/*16291*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*16293*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16295*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16298*/     OPC_EmitConvertToTarget, 0,
/*16300*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*16309*/   /*Scope*/ 18, /*->16328*/
/*16310*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*16312*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16314*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16317*/     OPC_EmitConvertToTarget, 0,
/*16319*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*16328*/   /*Scope*/ 17, /*->16346*/
/*16329*/     OPC_CheckPredicate, 33, // Predicate_immLow16Zero
/*16331*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16333*/     OPC_EmitConvertToTarget, 0,
/*16335*/     OPC_EmitNodeXForm, 2, 1, // HI16
/*16338*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*16346*/   /*Scope*/ 17, /*->16364*/
/*16347*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*16349*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16351*/     OPC_EmitConvertToTarget, 0,
/*16353*/     OPC_EmitNodeXForm, 0, 1, // LO16
/*16356*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LiRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (LiRxImmX16:i32 (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$in))
/*16364*/   /*Scope*/ 26, /*->16391*/
/*16365*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*16367*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16369*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*16372*/     OPC_EmitNode, TARGET_VAL(Mips::Move32R16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*16380*/     OPC_EmitConvertToTarget, 0,
/*16382*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (AddiuRxRxImmX16:i32 (Move32R16:i32 ZERO:i32), (imm:i32)<<P:Predicate_immSExt16>>:$in)
/*16391*/   /*Scope*/ 82, /*->16474*/
/*16392*/     OPC_Scope, 29, /*->16423*/ // 2 children in Scope
/*16394*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16396*/       OPC_EmitConvertToTarget, 0,
/*16398*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*16401*/       OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*16409*/       OPC_EmitConvertToTarget, 0,
/*16411*/       OPC_EmitNodeXForm, 0, 4, // LO16
/*16414*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*16423*/     /*Scope*/ 49, /*->16473*/
/*16424*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16426*/       OPC_EmitConvertToTarget, 0,
/*16428*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*16431*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*16439*/       OPC_EmitInteger, MVT::i32, 16, 
/*16442*/       OPC_EmitNode, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*16451*/       OPC_EmitConvertToTarget, 0,
/*16453*/       OPC_EmitNodeXForm, 0, 6, // LO16
/*16456*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*16464*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 8, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OrRxRxRy16:i32 (SllX16:i32 (LiRxImmX16:i32 (HI16:i32 (imm:i32):$imm)), 16:i32), (LiRxImmX16:i32 (LO16:i32 (imm:i32):$imm)))
/*16473*/     0, /*End of Scope*/
/*16474*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->16626
/*16479*/   OPC_RecordMemRef,
/*16480*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*16481*/   OPC_RecordChild1, // #1 = $ptr
/*16482*/   OPC_Scope, 70, /*->16554*/ // 2 children in Scope
/*16484*/     OPC_CheckChild1Type, MVT::i32,
/*16486*/     OPC_RecordChild2, // #2 = $incr
/*16487*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16537
/*16490*/       OPC_Scope, 14, /*->16506*/ // 3 children in Scope
/*16492*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*16494*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16496*/         OPC_EmitMergeInputChains1_0,
/*16497*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16506*/       /*Scope*/ 14, /*->16521*/
/*16507*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*16509*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16511*/         OPC_EmitMergeInputChains1_0,
/*16512*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16521*/       /*Scope*/ 14, /*->16536*/
/*16522*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*16524*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16526*/         OPC_EmitMergeInputChains1_0,
/*16527*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16536*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16553
/*16539*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*16541*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16543*/       OPC_EmitMergeInputChains1_0,
/*16544*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16554*/   /*Scope*/ 70, /*->16625*/
/*16555*/     OPC_CheckChild1Type, MVT::i64,
/*16557*/     OPC_RecordChild2, // #2 = $incr
/*16558*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16608
/*16561*/       OPC_Scope, 14, /*->16577*/ // 3 children in Scope
/*16563*/         OPC_CheckPredicate, 34, // Predicate_atomic_load_add_8
/*16565*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16567*/         OPC_EmitMergeInputChains1_0,
/*16568*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16577*/       /*Scope*/ 14, /*->16592*/
/*16578*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_16
/*16580*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16582*/         OPC_EmitMergeInputChains1_0,
/*16583*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16592*/       /*Scope*/ 14, /*->16607*/
/*16593*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_32
/*16595*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16597*/         OPC_EmitMergeInputChains1_0,
/*16598*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16607*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16624
/*16610*/       OPC_CheckPredicate, 37, // Predicate_atomic_load_add_64
/*16612*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16614*/       OPC_EmitMergeInputChains1_0,
/*16615*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16625*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->16777
/*16630*/   OPC_RecordMemRef,
/*16631*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*16632*/   OPC_RecordChild1, // #1 = $ptr
/*16633*/   OPC_Scope, 70, /*->16705*/ // 2 children in Scope
/*16635*/     OPC_CheckChild1Type, MVT::i32,
/*16637*/     OPC_RecordChild2, // #2 = $incr
/*16638*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16688
/*16641*/       OPC_Scope, 14, /*->16657*/ // 3 children in Scope
/*16643*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*16645*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16647*/         OPC_EmitMergeInputChains1_0,
/*16648*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16657*/       /*Scope*/ 14, /*->16672*/
/*16658*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*16660*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16662*/         OPC_EmitMergeInputChains1_0,
/*16663*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16672*/       /*Scope*/ 14, /*->16687*/
/*16673*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*16675*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16677*/         OPC_EmitMergeInputChains1_0,
/*16678*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16687*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16704
/*16690*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*16692*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16694*/       OPC_EmitMergeInputChains1_0,
/*16695*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16705*/   /*Scope*/ 70, /*->16776*/
/*16706*/     OPC_CheckChild1Type, MVT::i64,
/*16708*/     OPC_RecordChild2, // #2 = $incr
/*16709*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16759
/*16712*/       OPC_Scope, 14, /*->16728*/ // 3 children in Scope
/*16714*/         OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_8
/*16716*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16718*/         OPC_EmitMergeInputChains1_0,
/*16719*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16728*/       /*Scope*/ 14, /*->16743*/
/*16729*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_16
/*16731*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16733*/         OPC_EmitMergeInputChains1_0,
/*16734*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16743*/       /*Scope*/ 14, /*->16758*/
/*16744*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_32
/*16746*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16748*/         OPC_EmitMergeInputChains1_0,
/*16749*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16758*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16775
/*16761*/       OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_64
/*16763*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16765*/       OPC_EmitMergeInputChains1_0,
/*16766*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16776*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->16928
/*16781*/   OPC_RecordMemRef,
/*16782*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*16783*/   OPC_RecordChild1, // #1 = $ptr
/*16784*/   OPC_Scope, 70, /*->16856*/ // 2 children in Scope
/*16786*/     OPC_CheckChild1Type, MVT::i32,
/*16788*/     OPC_RecordChild2, // #2 = $incr
/*16789*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16839
/*16792*/       OPC_Scope, 14, /*->16808*/ // 3 children in Scope
/*16794*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16796*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16798*/         OPC_EmitMergeInputChains1_0,
/*16799*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16808*/       /*Scope*/ 14, /*->16823*/
/*16809*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16811*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16813*/         OPC_EmitMergeInputChains1_0,
/*16814*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16823*/       /*Scope*/ 14, /*->16838*/
/*16824*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16826*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16828*/         OPC_EmitMergeInputChains1_0,
/*16829*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16838*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16855
/*16841*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16843*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16845*/       OPC_EmitMergeInputChains1_0,
/*16846*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16856*/   /*Scope*/ 70, /*->16927*/
/*16857*/     OPC_CheckChild1Type, MVT::i64,
/*16859*/     OPC_RecordChild2, // #2 = $incr
/*16860*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16910
/*16863*/       OPC_Scope, 14, /*->16879*/ // 3 children in Scope
/*16865*/         OPC_CheckPredicate, 42, // Predicate_atomic_load_and_8
/*16867*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16869*/         OPC_EmitMergeInputChains1_0,
/*16870*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16879*/       /*Scope*/ 14, /*->16894*/
/*16880*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_16
/*16882*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16884*/         OPC_EmitMergeInputChains1_0,
/*16885*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16894*/       /*Scope*/ 14, /*->16909*/
/*16895*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_32
/*16897*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16899*/         OPC_EmitMergeInputChains1_0,
/*16900*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*16909*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16926
/*16912*/       OPC_CheckPredicate, 45, // Predicate_atomic_load_and_64
/*16914*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16916*/       OPC_EmitMergeInputChains1_0,
/*16917*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*16927*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->17079
/*16932*/   OPC_RecordMemRef,
/*16933*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*16934*/   OPC_RecordChild1, // #1 = $ptr
/*16935*/   OPC_Scope, 70, /*->17007*/ // 2 children in Scope
/*16937*/     OPC_CheckChild1Type, MVT::i32,
/*16939*/     OPC_RecordChild2, // #2 = $incr
/*16940*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16990
/*16943*/       OPC_Scope, 14, /*->16959*/ // 3 children in Scope
/*16945*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*16947*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16949*/         OPC_EmitMergeInputChains1_0,
/*16950*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16959*/       /*Scope*/ 14, /*->16974*/
/*16960*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*16962*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16964*/         OPC_EmitMergeInputChains1_0,
/*16965*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16974*/       /*Scope*/ 14, /*->16989*/
/*16975*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*16977*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16979*/         OPC_EmitMergeInputChains1_0,
/*16980*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*16989*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17006
/*16992*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*16994*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*16996*/       OPC_EmitMergeInputChains1_0,
/*16997*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17007*/   /*Scope*/ 70, /*->17078*/
/*17008*/     OPC_CheckChild1Type, MVT::i64,
/*17010*/     OPC_RecordChild2, // #2 = $incr
/*17011*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17061
/*17014*/       OPC_Scope, 14, /*->17030*/ // 3 children in Scope
/*17016*/         OPC_CheckPredicate, 46, // Predicate_atomic_load_or_8
/*17018*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17020*/         OPC_EmitMergeInputChains1_0,
/*17021*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17030*/       /*Scope*/ 14, /*->17045*/
/*17031*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_16
/*17033*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17035*/         OPC_EmitMergeInputChains1_0,
/*17036*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17045*/       /*Scope*/ 14, /*->17060*/
/*17046*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_32
/*17048*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17050*/         OPC_EmitMergeInputChains1_0,
/*17051*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17060*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17077
/*17063*/       OPC_CheckPredicate, 49, // Predicate_atomic_load_or_64
/*17065*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17067*/       OPC_EmitMergeInputChains1_0,
/*17068*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17078*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->17230
/*17083*/   OPC_RecordMemRef,
/*17084*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*17085*/   OPC_RecordChild1, // #1 = $ptr
/*17086*/   OPC_Scope, 70, /*->17158*/ // 2 children in Scope
/*17088*/     OPC_CheckChild1Type, MVT::i32,
/*17090*/     OPC_RecordChild2, // #2 = $incr
/*17091*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17141
/*17094*/       OPC_Scope, 14, /*->17110*/ // 3 children in Scope
/*17096*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*17098*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17100*/         OPC_EmitMergeInputChains1_0,
/*17101*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17110*/       /*Scope*/ 14, /*->17125*/
/*17111*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*17113*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17115*/         OPC_EmitMergeInputChains1_0,
/*17116*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17125*/       /*Scope*/ 14, /*->17140*/
/*17126*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*17128*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17130*/         OPC_EmitMergeInputChains1_0,
/*17131*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17140*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17157
/*17143*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*17145*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17147*/       OPC_EmitMergeInputChains1_0,
/*17148*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17158*/   /*Scope*/ 70, /*->17229*/
/*17159*/     OPC_CheckChild1Type, MVT::i64,
/*17161*/     OPC_RecordChild2, // #2 = $incr
/*17162*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17212
/*17165*/       OPC_Scope, 14, /*->17181*/ // 3 children in Scope
/*17167*/         OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_8
/*17169*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17171*/         OPC_EmitMergeInputChains1_0,
/*17172*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17181*/       /*Scope*/ 14, /*->17196*/
/*17182*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_16
/*17184*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17186*/         OPC_EmitMergeInputChains1_0,
/*17187*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17196*/       /*Scope*/ 14, /*->17211*/
/*17197*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_32
/*17199*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17201*/         OPC_EmitMergeInputChains1_0,
/*17202*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17211*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17228
/*17214*/       OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_64
/*17216*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17218*/       OPC_EmitMergeInputChains1_0,
/*17219*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17229*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->17381
/*17234*/   OPC_RecordMemRef,
/*17235*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*17236*/   OPC_RecordChild1, // #1 = $ptr
/*17237*/   OPC_Scope, 70, /*->17309*/ // 2 children in Scope
/*17239*/     OPC_CheckChild1Type, MVT::i32,
/*17241*/     OPC_RecordChild2, // #2 = $incr
/*17242*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17292
/*17245*/       OPC_Scope, 14, /*->17261*/ // 3 children in Scope
/*17247*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*17249*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17251*/         OPC_EmitMergeInputChains1_0,
/*17252*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17261*/       /*Scope*/ 14, /*->17276*/
/*17262*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*17264*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17266*/         OPC_EmitMergeInputChains1_0,
/*17267*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17276*/       /*Scope*/ 14, /*->17291*/
/*17277*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*17279*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17281*/         OPC_EmitMergeInputChains1_0,
/*17282*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17291*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17308
/*17294*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*17296*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17298*/       OPC_EmitMergeInputChains1_0,
/*17299*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17309*/   /*Scope*/ 70, /*->17380*/
/*17310*/     OPC_CheckChild1Type, MVT::i64,
/*17312*/     OPC_RecordChild2, // #2 = $incr
/*17313*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17363
/*17316*/       OPC_Scope, 14, /*->17332*/ // 3 children in Scope
/*17318*/         OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_8
/*17320*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17322*/         OPC_EmitMergeInputChains1_0,
/*17323*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17332*/       /*Scope*/ 14, /*->17347*/
/*17333*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_16
/*17335*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17337*/         OPC_EmitMergeInputChains1_0,
/*17338*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17347*/       /*Scope*/ 14, /*->17362*/
/*17348*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_32
/*17350*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17352*/         OPC_EmitMergeInputChains1_0,
/*17353*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17362*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17379
/*17365*/       OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_64
/*17367*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17369*/       OPC_EmitMergeInputChains1_0,
/*17370*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17380*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->17532
/*17385*/   OPC_RecordMemRef,
/*17386*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*17387*/   OPC_RecordChild1, // #1 = $ptr
/*17388*/   OPC_Scope, 70, /*->17460*/ // 2 children in Scope
/*17390*/     OPC_CheckChild1Type, MVT::i32,
/*17392*/     OPC_RecordChild2, // #2 = $incr
/*17393*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17443
/*17396*/       OPC_Scope, 14, /*->17412*/ // 3 children in Scope
/*17398*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*17400*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17402*/         OPC_EmitMergeInputChains1_0,
/*17403*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17412*/       /*Scope*/ 14, /*->17427*/
/*17413*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*17415*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17417*/         OPC_EmitMergeInputChains1_0,
/*17418*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17427*/       /*Scope*/ 14, /*->17442*/
/*17428*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*17430*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17432*/         OPC_EmitMergeInputChains1_0,
/*17433*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR32:i32:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 GPR32:i32:$ptr, GPR32:i32:$incr)
/*17442*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17459
/*17445*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*17447*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17449*/       OPC_EmitMergeInputChains1_0,
/*17450*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 GPR32:i32:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 GPR32:i32:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17460*/   /*Scope*/ 70, /*->17531*/
/*17461*/     OPC_CheckChild1Type, MVT::i64,
/*17463*/     OPC_RecordChild2, // #2 = $incr
/*17464*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17514
/*17467*/       OPC_Scope, 14, /*->17483*/ // 3 children in Scope
/*17469*/         OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*17471*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17473*/         OPC_EmitMergeInputChains1_0,
/*17474*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17483*/       /*Scope*/ 14, /*->17498*/
/*17484*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*17486*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17488*/         OPC_EmitMergeInputChains1_0,
/*17489*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17498*/       /*Scope*/ 14, /*->17513*/
/*17499*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*17501*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17503*/         OPC_EmitMergeInputChains1_0,
/*17504*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 GPR64:i64:$ptr, GPR32:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$incr)
/*17513*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17530
/*17516*/       OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*17518*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17520*/       OPC_EmitMergeInputChains1_0,
/*17521*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 GPR64:i64:$ptr, GPR64:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$incr)
              0, // EndSwitchType
/*17531*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->17693
/*17536*/   OPC_RecordMemRef,
/*17537*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*17538*/   OPC_RecordChild1, // #1 = $ptr
/*17539*/   OPC_Scope, 75, /*->17616*/ // 2 children in Scope
/*17541*/     OPC_CheckChild1Type, MVT::i32,
/*17543*/     OPC_RecordChild2, // #2 = $cmp
/*17544*/     OPC_RecordChild3, // #3 = $swap
/*17545*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->17598
/*17548*/       OPC_Scope, 15, /*->17565*/ // 3 children in Scope
/*17550*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*17552*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17554*/         OPC_EmitMergeInputChains1_0,
/*17555*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17565*/       /*Scope*/ 15, /*->17581*/
/*17566*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*17568*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17570*/         OPC_EmitMergeInputChains1_0,
/*17571*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17581*/       /*Scope*/ 15, /*->17597*/
/*17582*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*17584*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17586*/         OPC_EmitMergeInputChains1_0,
/*17587*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 GPR32:i32:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17597*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->17615
/*17600*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*17602*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17604*/       OPC_EmitMergeInputChains1_0,
/*17605*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 GPR32:i32:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 GPR32:i32:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)
              0, // EndSwitchType
/*17616*/   /*Scope*/ 75, /*->17692*/
/*17617*/     OPC_CheckChild1Type, MVT::i64,
/*17619*/     OPC_RecordChild2, // #2 = $cmp
/*17620*/     OPC_RecordChild3, // #3 = $swap
/*17621*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->17674
/*17624*/       OPC_Scope, 15, /*->17641*/ // 3 children in Scope
/*17626*/         OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*17628*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17630*/         OPC_EmitMergeInputChains1_0,
/*17631*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17641*/       /*Scope*/ 15, /*->17657*/
/*17642*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*17644*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17646*/         OPC_EmitMergeInputChains1_0,
/*17647*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17657*/       /*Scope*/ 15, /*->17673*/
/*17658*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*17660*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17662*/         OPC_EmitMergeInputChains1_0,
/*17663*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 GPR64:i64:$ptr, GPR32:i32:$cmp, GPR32:i32:$swap)
/*17673*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->17691
/*17676*/       OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*17678*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17680*/       OPC_EmitMergeInputChains1_0,
/*17681*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 GPR64:i64:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 GPR64:i64:$ptr, GPR64:i64:$cmp, GPR64:i64:$swap)
              0, // EndSwitchType
/*17692*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::MUL),// ->17742
/*17696*/   OPC_RecordChild0, // #0 = $rs
/*17697*/   OPC_RecordChild1, // #1 = $rt
/*17698*/   OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->17728
/*17701*/     OPC_Scope, 11, /*->17714*/ // 2 children in Scope
/*17703*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17705*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (MUL:i32 GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*17714*/     /*Scope*/ 12, /*->17727*/
/*17715*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17717*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MultRxRyRz16), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (MultRxRyRz16:i32:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*17727*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::v2i16,// ->17741
/*17730*/     OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*17732*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (mul:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->17824
/*17745*/   OPC_RecordChild0, // #0 = $rt
/*17746*/   OPC_MoveChild, 1,
/*17748*/   OPC_Scope, 29, /*->17779*/ // 3 children in Scope
/*17750*/     OPC_CheckValueType, MVT::i8,
/*17752*/     OPC_MoveParent,
/*17753*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17766
/*17756*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17758*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPR32Opnd:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 GPR32Opnd:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17778
/*17768*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17770*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GPR64Opnd:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 GPR64Opnd:i64:$rt)
              0, // EndSwitchType
/*17779*/   /*Scope*/ 29, /*->17809*/
/*17780*/     OPC_CheckValueType, MVT::i16,
/*17782*/     OPC_MoveParent,
/*17783*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17796
/*17786*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17788*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPR32Opnd:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 GPR32Opnd:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17808
/*17798*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17800*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GPR64Opnd:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 GPR64Opnd:i64:$rt)
              0, // EndSwitchType
/*17809*/   /*Scope*/ 13, /*->17823*/
/*17810*/     OPC_CheckValueType, MVT::i32,
/*17812*/     OPC_MoveParent,
/*17813*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17815*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 GPR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 GPR64:i64:$src)
/*17823*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::SUBC),// ->17857
/*17827*/   OPC_RecordChild0, // #0 = $lhs
/*17828*/   OPC_RecordChild1, // #1 = $rhs
/*17829*/   OPC_CheckType, MVT::i32,
/*17831*/   OPC_Scope, 11, /*->17844*/ // 2 children in Scope
/*17833*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17835*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 GPR32:i32:$lhs, GPR32:i32:$rhs) - Complexity = 3
              // Dst: (SUBu:i32 GPR32:i32:$lhs, GPR32:i32:$rhs)
/*17844*/   /*Scope*/ 11, /*->17856*/
/*17845*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17847*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
              // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*17856*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(ISD::BITCAST),// ->17996
/*17861*/   OPC_RecordChild0, // #0 = $fs
/*17862*/   OPC_Scope, 14, /*->17878*/ // 6 children in Scope
/*17864*/     OPC_CheckChild0Type, MVT::f32,
/*17866*/     OPC_CheckType, MVT::i32,
/*17868*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17870*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32Opnd:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32Opnd:f32:$fs)
/*17878*/   /*Scope*/ 14, /*->17893*/
/*17879*/     OPC_CheckChild0Type, MVT::f64,
/*17881*/     OPC_CheckType, MVT::i64,
/*17883*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17885*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64Opnd:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64Opnd:f64:$fs)
/*17893*/   /*Scope*/ 18, /*->17912*/
/*17894*/     OPC_CheckChild0Type, MVT::v2i16,
/*17896*/     OPC_CheckType, MVT::i32,
/*17898*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17900*/     OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*17903*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPR:v2i16:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPR:v2i16:$src, GPR32:i32)
/*17912*/   /*Scope*/ 18, /*->17931*/
/*17913*/     OPC_CheckChild0Type, MVT::v4i8,
/*17915*/     OPC_CheckType, MVT::i32,
/*17917*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17919*/     OPC_EmitInteger, MVT::i32, Mips::GPR32RegClassID,
/*17922*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPR:v4i8:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPR:v4i8:$src, GPR32:i32)
/*17931*/   /*Scope*/ 48, /*->17980*/
/*17932*/     OPC_CheckChild0Type, MVT::i32,
/*17934*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->17947
/*17937*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17939*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f32 GPR32Opnd:i32:$rt) - Complexity = 3
                // Dst: (MTC1:f32 GPR32Opnd:i32:$rt)
              /*SwitchType*/ 14,  MVT::v2i16,// ->17963
/*17949*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17951*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*17954*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v2i16 GPR32:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v2i16 GPR32:i32:$src, DSPR:i32)
              /*SwitchType*/ 14,  MVT::v4i8,// ->17979
/*17965*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17967*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*17970*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v4i8 GPR32:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v4i8 GPR32:i32:$src, DSPR:i32)
              0, // EndSwitchType
/*17980*/   /*Scope*/ 14, /*->17995*/
/*17981*/     OPC_CheckChild0Type, MVT::i64,
/*17983*/     OPC_CheckType, MVT::f64,
/*17985*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*17987*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 GPR64Opnd:i64:$rt)
/*17995*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->18014
/*17999*/   OPC_RecordChild0, // #0 = $src
/*18000*/   OPC_CheckChild0Type, MVT::i32,
/*18002*/   OPC_CheckType, MVT::i64,
/*18004*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18006*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 GPR32:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 GPR32:i32:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->18032
/*18017*/   OPC_RecordChild0, // #0 = $src
/*18018*/   OPC_CheckChild0Type, MVT::i32,
/*18020*/   OPC_CheckType, MVT::i64,
/*18022*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18024*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPR32:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 GPR32:i32:$src)
          /*SwitchOpcode*/ 78,  TARGET_VAL(MipsISD::CMovFP_T),// ->18113
/*18035*/   OPC_CaptureGlueInput,
/*18036*/   OPC_RecordChild0, // #0 = $rs
/*18037*/   OPC_RecordChild1, // #1 = $fcc
/*18038*/   OPC_RecordChild2, // #2 = $F
/*18039*/   OPC_SwitchType /*4 cases */, 12,  MVT::i32,// ->18054
/*18042*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18044*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_T:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F)
            /*SwitchType*/ 12,  MVT::i64,// ->18068
/*18056*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*18058*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_T:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F)
            /*SwitchType*/ 12,  MVT::f32,// ->18082
/*18070*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18072*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_T:f32 FGR32Opnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32Opnd:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32Opnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32Opnd:f32:$F)
            /*SwitchType*/ 28,  MVT::f64,// ->18112
/*18084*/     OPC_Scope, 12, /*->18098*/ // 2 children in Scope
/*18086*/       OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18088*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_T:f64 AFGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64Opnd:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64Opnd:f64:$F)
/*18098*/     /*Scope*/ 12, /*->18111*/
/*18099*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18101*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_T:f64 FGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64Opnd:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64Opnd:f64:$F)
/*18111*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 78,  TARGET_VAL(MipsISD::CMovFP_F),// ->18194
/*18116*/   OPC_CaptureGlueInput,
/*18117*/   OPC_RecordChild0, // #0 = $rs
/*18118*/   OPC_RecordChild1, // #1 = $fcc
/*18119*/   OPC_RecordChild2, // #2 = $F
/*18120*/   OPC_SwitchType /*4 cases */, 12,  MVT::i32,// ->18135
/*18123*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18125*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_F:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 GPR32Opnd:i32:$rs, FCCRegsOpnd:i32:$fcc, GPR32Opnd:i32:$F)
            /*SwitchType*/ 12,  MVT::i64,// ->18149
/*18137*/     OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*18139*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_F:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 GPR64Opnd:i64:$rs, FCCRegsOpnd:i32:$fcc, GPR64Opnd:i64:$F)
            /*SwitchType*/ 12,  MVT::f32,// ->18163
/*18151*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18153*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsCMovFP_F:f32 FGR32Opnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32Opnd:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32Opnd:f32:$fs, FCCRegsOpnd:i32:$fcc, FGR32Opnd:f32:$F)
            /*SwitchType*/ 28,  MVT::f64,// ->18193
/*18165*/     OPC_Scope, 12, /*->18179*/ // 2 children in Scope
/*18167*/       OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18169*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_F:f64 AFGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64Opnd:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, AFGR64Opnd:f64:$F)
/*18179*/     /*Scope*/ 12, /*->18192*/
/*18180*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18182*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (MipsCMovFP_F:f64 FGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64Opnd:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64Opnd:f64:$fs, FCCRegsOpnd:i32:$fcc, FGR64Opnd:f64:$F)
/*18192*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MULSAQ_S_W_PH),// ->18214
/*18197*/   OPC_RecordNode,   // #0 = 'MipsMULSAQ_S_W_PH' chained node
/*18198*/   OPC_RecordChild1, // #1 = $rs
/*18199*/   OPC_RecordChild2, // #2 = $rt
/*18200*/   OPC_RecordChild3, // #3 = $acin
/*18201*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18203*/   OPC_EmitMergeInputChains1_0,
/*18204*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMULSAQ_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (MULSAQ_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHL),// ->18234
/*18217*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHL' chained node
/*18218*/   OPC_RecordChild1, // #1 = $rs
/*18219*/   OPC_RecordChild2, // #2 = $rt
/*18220*/   OPC_RecordChild3, // #3 = $acin
/*18221*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18223*/   OPC_EmitMergeInputChains1_0,
/*18224*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHR),// ->18254
/*18237*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHR' chained node
/*18238*/   OPC_RecordChild1, // #1 = $rs
/*18239*/   OPC_RecordChild2, // #2 = $rt
/*18240*/   OPC_RecordChild3, // #3 = $acin
/*18241*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18243*/   OPC_EmitMergeInputChains1_0,
/*18244*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHL),// ->18274
/*18257*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHL' chained node
/*18258*/   OPC_RecordChild1, // #1 = $rs
/*18259*/   OPC_RecordChild2, // #2 = $rt
/*18260*/   OPC_RecordChild3, // #3 = $acin
/*18261*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18263*/   OPC_EmitMergeInputChains1_0,
/*18264*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHR),// ->18294
/*18277*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHR' chained node
/*18278*/   OPC_RecordChild1, // #1 = $rs
/*18279*/   OPC_RecordChild2, // #2 = $rt
/*18280*/   OPC_RecordChild3, // #3 = $acin
/*18281*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18283*/   OPC_EmitMergeInputChains1_0,
/*18284*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBL),// ->18312
/*18297*/   OPC_RecordChild0, // #0 = $rs
/*18298*/   OPC_RecordChild1, // #1 = $rt
/*18299*/   OPC_RecordChild2, // #2 = $acin
/*18300*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18302*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBR),// ->18330
/*18315*/   OPC_RecordChild0, // #0 = $rs
/*18316*/   OPC_RecordChild1, // #1 = $rt
/*18317*/   OPC_RecordChild2, // #2 = $acin
/*18318*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18320*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBL),// ->18348
/*18333*/   OPC_RecordChild0, // #0 = $rs
/*18334*/   OPC_RecordChild1, // #1 = $rt
/*18335*/   OPC_RecordChild2, // #2 = $acin
/*18336*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18338*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBL:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBR),// ->18366
/*18351*/   OPC_RecordChild0, // #0 = $rs
/*18352*/   OPC_RecordChild1, // #1 = $rt
/*18353*/   OPC_RecordChild2, // #2 = $acin
/*18354*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18356*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBR:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_S_W_PH),// ->18386
/*18369*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_S_W_PH' chained node
/*18370*/   OPC_RecordChild1, // #1 = $rs
/*18371*/   OPC_RecordChild2, // #2 = $rt
/*18372*/   OPC_RecordChild3, // #3 = $acin
/*18373*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18375*/   OPC_EmitMergeInputChains1_0,
/*18376*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_S_W_PH),// ->18406
/*18389*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_S_W_PH' chained node
/*18390*/   OPC_RecordChild1, // #1 = $rs
/*18391*/   OPC_RecordChild2, // #2 = $rt
/*18392*/   OPC_RecordChild3, // #3 = $acin
/*18393*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18395*/   OPC_EmitMergeInputChains1_0,
/*18396*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_SA_L_W),// ->18426
/*18409*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_SA_L_W' chained node
/*18410*/   OPC_RecordChild1, // #1 = $rs
/*18411*/   OPC_RecordChild2, // #2 = $rt
/*18412*/   OPC_RecordChild3, // #3 = $acin
/*18413*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18415*/   OPC_EmitMergeInputChains1_0,
/*18416*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_SA_L_W:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_SA_L_W:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_SA_L_W),// ->18446
/*18429*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_SA_L_W' chained node
/*18430*/   OPC_RecordChild1, // #1 = $rs
/*18431*/   OPC_RecordChild2, // #2 = $rt
/*18432*/   OPC_RecordChild3, // #3 = $acin
/*18433*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18435*/   OPC_EmitMergeInputChains1_0,
/*18436*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_SA_L_W:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_SA_L_W:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MTHLIP),// ->18464
/*18449*/   OPC_RecordNode,   // #0 = 'MipsMTHLIP' chained node
/*18450*/   OPC_RecordChild1, // #1 = $rs
/*18451*/   OPC_RecordChild2, // #2 = $acin
/*18452*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18454*/   OPC_EmitMergeInputChains1_0,
/*18455*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MTHLIP), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMTHLIP:Untyped GPR32Opnd:i32:$rs, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (MTHLIP:Untyped GPR32Opnd:i32:$rs, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPA_W_PH),// ->18482
/*18467*/   OPC_RecordChild0, // #0 = $rs
/*18468*/   OPC_RecordChild1, // #1 = $rt
/*18469*/   OPC_RecordChild2, // #2 = $acin
/*18470*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18472*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPS_W_PH),// ->18500
/*18485*/   OPC_RecordChild0, // #0 = $rs
/*18486*/   OPC_RecordChild1, // #1 = $rt
/*18487*/   OPC_RecordChild2, // #2 = $acin
/*18488*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18490*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPS_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPS_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPS_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_S_W_PH),// ->18520
/*18503*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_S_W_PH' chained node
/*18504*/   OPC_RecordChild1, // #1 = $rs
/*18505*/   OPC_RecordChild2, // #2 = $rt
/*18506*/   OPC_RecordChild3, // #3 = $acin
/*18507*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18509*/   OPC_EmitMergeInputChains1_0,
/*18510*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_SA_W_PH),// ->18540
/*18523*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_SA_W_PH' chained node
/*18524*/   OPC_RecordChild1, // #1 = $rs
/*18525*/   OPC_RecordChild2, // #2 = $rt
/*18526*/   OPC_RecordChild3, // #3 = $acin
/*18527*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18529*/   OPC_EmitMergeInputChains1_0,
/*18530*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_SA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_SA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAX_W_PH),// ->18558
/*18543*/   OPC_RecordChild0, // #0 = $rs
/*18544*/   OPC_RecordChild1, // #1 = $rt
/*18545*/   OPC_RecordChild2, // #2 = $acin
/*18546*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18548*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAX_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPAX_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSX_W_PH),// ->18576
/*18561*/   OPC_RecordChild0, // #0 = $rs
/*18562*/   OPC_RecordChild1, // #1 = $rt
/*18563*/   OPC_RecordChild2, // #2 = $acin
/*18564*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18566*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSX_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPSX_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_S_W_PH),// ->18596
/*18579*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_S_W_PH' chained node
/*18580*/   OPC_RecordChild1, // #1 = $rs
/*18581*/   OPC_RecordChild2, // #2 = $rt
/*18582*/   OPC_RecordChild3, // #3 = $acin
/*18583*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18585*/   OPC_EmitMergeInputChains1_0,
/*18586*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_S_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_SA_W_PH),// ->18616
/*18599*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_SA_W_PH' chained node
/*18600*/   OPC_RecordChild1, // #1 = $rs
/*18601*/   OPC_RecordChild2, // #2 = $rt
/*18602*/   OPC_RecordChild3, // #3 = $acin
/*18603*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18605*/   OPC_EmitMergeInputChains1_0,
/*18606*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_SA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_SA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSA_W_PH),// ->18634
/*18619*/   OPC_RecordChild0, // #0 = $rs
/*18620*/   OPC_RecordChild1, // #1 = $rt
/*18621*/   OPC_RecordChild2, // #2 = $acin
/*18622*/   OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*18624*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsMULSA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin) - Complexity = 3
            // Dst: (MULSA_W_PH:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt, ACC64DSPOpnd:Untyped:$acin)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::ADDE),// ->18653
/*18637*/   OPC_CaptureGlueInput,
/*18638*/   OPC_RecordChild0, // #0 = $a
/*18639*/   OPC_RecordChild1, // #1 = $b
/*18640*/   OPC_CheckType, MVT::i32,
/*18642*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18644*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (adde:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
            // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::BSWAP),// ->18703
/*18656*/   OPC_RecordChild0, // #0 = $rt
/*18657*/   OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->18682
/*18660*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18662*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*18670*/     OPC_EmitInteger, MVT::i32, 16, 
/*18673*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 GPR32:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 GPR32:i32:$rt), 16:i32)
            /*SwitchType*/ 18,  MVT::i64,// ->18702
/*18684*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18686*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18694*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 GPR64:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 GPR64:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TRUNCATE),// ->18735
/*18706*/   OPC_RecordChild0, // #0 = $src
/*18707*/   OPC_CheckType, MVT::i32,
/*18709*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*18711*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*18714*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*18723*/   OPC_EmitInteger, MVT::i32, 0, 
/*18726*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 GPR64:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 GPR64:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ZERO_EXTEND),// ->18765
/*18738*/   OPC_RecordChild0, // #0 = $src
/*18739*/   OPC_CheckChild0Type, MVT::i32,
/*18741*/   OPC_CheckType, MVT::i64,
/*18743*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18745*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18753*/   OPC_EmitInteger, MVT::i32, 32, 
/*18756*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 GPR32:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 GPR32:i32:$src), 32:i32)
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRem),// ->18801
/*18768*/   OPC_RecordChild0, // #0 = $rs
/*18769*/   OPC_Scope, 14, /*->18785*/ // 2 children in Scope
/*18771*/     OPC_CheckChild0Type, MVT::i32,
/*18773*/     OPC_RecordChild1, // #1 = $rt
/*18774*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18776*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoSDIV:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*18785*/   /*Scope*/ 14, /*->18800*/
/*18786*/     OPC_CheckChild0Type, MVT::i64,
/*18788*/     OPC_RecordChild1, // #1 = $rt
/*18789*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18791*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDSDIV:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*18800*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRemU),// ->18837
/*18804*/   OPC_RecordChild0, // #0 = $rs
/*18805*/   OPC_Scope, 14, /*->18821*/ // 2 children in Scope
/*18807*/     OPC_CheckChild0Type, MVT::i32,
/*18809*/     OPC_RecordChild1, // #1 = $rt
/*18810*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18812*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoUDIV:Untyped GPR32Opnd:i32:$rs, GPR32Opnd:i32:$rt)
/*18821*/   /*Scope*/ 14, /*->18836*/
/*18822*/     OPC_CheckChild0Type, MVT::i64,
/*18824*/     OPC_RecordChild1, // #1 = $rt
/*18825*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*18827*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDUDIV:Untyped GPR64Opnd:i64:$rs, GPR64Opnd:i64:$rt)
/*18836*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::FSUB),// ->19137
/*18841*/   OPC_Scope, 118|128,1/*246*/, /*->19090*/ // 2 children in Scope
/*18844*/     OPC_MoveChild, 0,
/*18846*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->19036
/*18851*/       OPC_CheckPredicate, 66, // Predicate_fpimm0
/*18853*/       OPC_MoveParent,
/*18854*/       OPC_MoveChild, 1,
/*18856*/       OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->18976
/*18860*/         OPC_Scope, 56, /*->18918*/ // 2 children in Scope
/*18862*/           OPC_MoveChild, 0,
/*18864*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18867*/           OPC_RecordChild0, // #0 = $fs
/*18868*/           OPC_RecordChild1, // #1 = $ft
/*18869*/           OPC_MoveParent,
/*18870*/           OPC_RecordChild1, // #2 = $fr
/*18871*/           OPC_MoveParent,
/*18872*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18887
/*18875*/             OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18877*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft), FGR32Opnd:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32Opnd:f32:$fr, FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->18917
/*18889*/             OPC_Scope, 12, /*->18903*/ // 2 children in Scope
/*18891*/               OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18893*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft), AFGR64Opnd:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64Opnd:f64:$fr, AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*18903*/             /*Scope*/ 12, /*->18916*/
/*18904*/               OPC_CheckPatternPredicate, 24, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18906*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft), FGR64Opnd:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64Opnd:f64:$fr, FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*18916*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*18918*/         /*Scope*/ 56, /*->18975*/
/*18919*/           OPC_RecordChild0, // #0 = $fr
/*18920*/           OPC_MoveChild, 1,
/*18922*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18925*/           OPC_RecordChild0, // #1 = $fs
/*18926*/           OPC_RecordChild1, // #2 = $ft
/*18927*/           OPC_MoveParent,
/*18928*/           OPC_MoveParent,
/*18929*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18944
/*18932*/             OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18934*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32Opnd:f32:$fr, (fmul:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32Opnd:f32:$fr, FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->18974
/*18946*/             OPC_Scope, 12, /*->18960*/ // 2 children in Scope
/*18948*/               OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18950*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64Opnd:f64:$fr, (fmul:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64Opnd:f64:$fr, AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*18960*/             /*Scope*/ 12, /*->18973*/
/*18961*/               OPC_CheckPatternPredicate, 24, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18963*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64Opnd:f64:$fr, (fmul:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64Opnd:f64:$fr, FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*18973*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*18975*/         0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->19035
/*18979*/         OPC_MoveChild, 0,
/*18981*/         OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18984*/         OPC_RecordChild0, // #0 = $fs
/*18985*/         OPC_RecordChild1, // #1 = $ft
/*18986*/         OPC_MoveParent,
/*18987*/         OPC_RecordChild1, // #2 = $fr
/*18988*/         OPC_MoveParent,
/*18989*/         OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->19004
/*18992*/           OPC_CheckPatternPredicate, 22, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18994*/           OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft), FGR32Opnd:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32Opnd:f32:$fr, FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->19034
/*19006*/           OPC_Scope, 12, /*->19020*/ // 2 children in Scope
/*19008*/             OPC_CheckPatternPredicate, 23, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19010*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft), AFGR64Opnd:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64Opnd:f64:$fr, AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19020*/           /*Scope*/ 12, /*->19033*/
/*19021*/             OPC_CheckPatternPredicate, 24, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19023*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft), FGR64Opnd:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64Opnd:f64:$fr, FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19033*/           0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->19089
/*19039*/       OPC_RecordChild0, // #0 = $fs
/*19040*/       OPC_RecordChild1, // #1 = $ft
/*19041*/       OPC_MoveParent,
/*19042*/       OPC_RecordChild1, // #2 = $fr
/*19043*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->19058
/*19046*/         OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*19048*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft), FGR32Opnd:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32Opnd:f32:$fr, FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->19088
/*19060*/         OPC_Scope, 12, /*->19074*/ // 2 children in Scope
/*19062*/           OPC_CheckPatternPredicate, 25, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19064*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft), AFGR64Opnd:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64Opnd:f64:$fr, AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19074*/         /*Scope*/ 12, /*->19087*/
/*19075*/           OPC_CheckPatternPredicate, 26, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19077*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft), FGR64Opnd:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64Opnd:f64:$fr, FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19087*/         0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*19090*/   /*Scope*/ 45, /*->19136*/
/*19091*/     OPC_RecordChild0, // #0 = $fs
/*19092*/     OPC_RecordChild1, // #1 = $ft
/*19093*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19107
/*19096*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19098*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->19135
/*19109*/       OPC_Scope, 11, /*->19122*/ // 2 children in Scope
/*19111*/         OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19113*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19122*/       /*Scope*/ 11, /*->19134*/
/*19123*/         OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19125*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19134*/       0, /*End of Scope*/
              0, // EndSwitchType
/*19136*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 34|128,1/*162*/,  TARGET_VAL(ISD::FADD),// ->19303
/*19141*/   OPC_Scope, 55, /*->19198*/ // 2 children in Scope
/*19143*/     OPC_MoveChild, 0,
/*19145*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*19148*/     OPC_RecordChild0, // #0 = $fs
/*19149*/     OPC_RecordChild1, // #1 = $ft
/*19150*/     OPC_MoveParent,
/*19151*/     OPC_RecordChild1, // #2 = $fr
/*19152*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->19167
/*19155*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*19157*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft), FGR32Opnd:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32Opnd:f32:$fr, FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->19197
/*19169*/       OPC_Scope, 12, /*->19183*/ // 2 children in Scope
/*19171*/         OPC_CheckPatternPredicate, 25, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19173*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft), AFGR64Opnd:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64Opnd:f64:$fr, AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19183*/       /*Scope*/ 12, /*->19196*/
/*19184*/         OPC_CheckPatternPredicate, 26, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19186*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft), FGR64Opnd:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64Opnd:f64:$fr, FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19196*/       0, /*End of Scope*/
              0, // EndSwitchType
/*19198*/   /*Scope*/ 103, /*->19302*/
/*19199*/     OPC_RecordChild0, // #0 = $fr
/*19200*/     OPC_Scope, 54, /*->19256*/ // 2 children in Scope
/*19202*/       OPC_MoveChild, 1,
/*19204*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*19207*/       OPC_RecordChild0, // #1 = $fs
/*19208*/       OPC_RecordChild1, // #2 = $ft
/*19209*/       OPC_MoveParent,
/*19210*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->19225
/*19213*/         OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*19215*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32Opnd:f32:$fr, (fmul:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32Opnd:f32:$fr, FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->19255
/*19227*/         OPC_Scope, 12, /*->19241*/ // 2 children in Scope
/*19229*/           OPC_CheckPatternPredicate, 25, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19231*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64Opnd:f64:$fr, (fmul:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64Opnd:f64:$fr, AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19241*/         /*Scope*/ 12, /*->19254*/
/*19242*/           OPC_CheckPatternPredicate, 26, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19244*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64Opnd:f64:$fr, (fmul:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64Opnd:f64:$fr, FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19254*/         0, /*End of Scope*/
                0, // EndSwitchType
/*19256*/     /*Scope*/ 44, /*->19301*/
/*19257*/       OPC_RecordChild1, // #1 = $ft
/*19258*/       OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19272
/*19261*/         OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->19300
/*19274*/         OPC_Scope, 11, /*->19287*/ // 2 children in Scope
/*19276*/           OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19278*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19287*/         /*Scope*/ 11, /*->19299*/
/*19288*/           OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19290*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19299*/         0, /*End of Scope*/
                0, // EndSwitchType
/*19301*/     0, /*End of Scope*/
/*19302*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ConstantFP),// ->19394
/*19306*/   OPC_Scope, 34, /*->19342*/ // 2 children in Scope
/*19308*/     OPC_CheckPredicate, 66, // Predicate_fpimm0
/*19310*/     OPC_SwitchType /*2 cases */, 13,  MVT::f32,// ->19326
/*19313*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19315*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*19318*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->19341
/*19328*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19330*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*19333*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*19342*/   /*Scope*/ 50, /*->19393*/
/*19343*/     OPC_CheckPredicate, 67, // Predicate_fpimm0neg
/*19345*/     OPC_SwitchType /*2 cases */, 21,  MVT::f32,// ->19369
/*19348*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19350*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*19353*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19361*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->19392
/*19371*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19373*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*19376*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19384*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*19393*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->19436
/*19397*/   OPC_RecordChild0, // #0 = $fs
/*19398*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19411
/*19401*/     OPC_CheckPatternPredicate, 27, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19403*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32Opnd:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32Opnd:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19435
/*19413*/     OPC_CheckPatternPredicate, 27, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19415*/     OPC_Scope, 8, /*->19425*/ // 2 children in Scope
/*19417*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64Opnd:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64Opnd:f64:$fs)
/*19425*/     /*Scope*/ 8, /*->19434*/
/*19426*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64Opnd:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64Opnd:f64:$fs)
/*19434*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->19478
/*19439*/   OPC_RecordChild0, // #0 = $fs
/*19440*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19453
/*19443*/     OPC_CheckPatternPredicate, 27, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19445*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32Opnd:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32Opnd:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19477
/*19455*/     OPC_CheckPatternPredicate, 27, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19457*/     OPC_Scope, 8, /*->19467*/ // 2 children in Scope
/*19459*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64Opnd:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64Opnd:f64:$fs)
/*19467*/     /*Scope*/ 8, /*->19476*/
/*19468*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64Opnd:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64Opnd:f64:$fs)
/*19476*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FSQRT),// ->19522
/*19481*/   OPC_RecordChild0, // #0 = $fs
/*19482*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19495
/*19485*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19487*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32Opnd:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32Opnd:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->19521
/*19497*/     OPC_Scope, 10, /*->19509*/ // 2 children in Scope
/*19499*/       OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19501*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64Opnd:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64Opnd:f64:$fs)
/*19509*/     /*Scope*/ 10, /*->19520*/
/*19510*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19512*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64Opnd:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64Opnd:f64:$fs)
/*19520*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FDIV),// ->19570
/*19525*/   OPC_RecordChild0, // #0 = $fs
/*19526*/   OPC_RecordChild1, // #1 = $ft
/*19527*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19541
/*19530*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19532*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19569
/*19543*/     OPC_Scope, 11, /*->19556*/ // 2 children in Scope
/*19545*/       OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19547*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19556*/     /*Scope*/ 11, /*->19568*/
/*19557*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19559*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19568*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->19618
/*19573*/   OPC_RecordChild0, // #0 = $fs
/*19574*/   OPC_RecordChild1, // #1 = $ft
/*19575*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19589
/*19578*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19580*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32Opnd:f32:$fs, FGR32Opnd:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19617
/*19591*/     OPC_Scope, 11, /*->19604*/ // 2 children in Scope
/*19593*/       OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19595*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64Opnd:f64:$fs, AFGR64Opnd:f64:$ft)
/*19604*/     /*Scope*/ 11, /*->19616*/
/*19605*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19607*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64Opnd:f64:$fs, FGR64Opnd:f64:$ft)
/*19616*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::BuildPairF64),// ->19634
/*19621*/   OPC_RecordChild0, // #0 = $lo
/*19622*/   OPC_RecordChild1, // #1 = $hi
/*19623*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19625*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 GPR32Opnd:i32:$lo, GPR32Opnd:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 GPR32Opnd:i32:$lo, GPR32Opnd:i32:$hi)
          /*SwitchOpcode*/ 87,  TARGET_VAL(ISD::SINT_TO_FP),// ->19724
/*19637*/   OPC_RecordChild0, // #0 = $src
/*19638*/   OPC_Scope, 42, /*->19682*/ // 2 children in Scope
/*19640*/     OPC_CheckChild0Type, MVT::i32,
/*19642*/     OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19655
/*19645*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19647*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GPR32Opnd:i32:$src) - Complexity = 3
                // Dst: (PseudoCVT_S_W:f32 GPR32Opnd:i32:$src)
              /*SwitchType*/ 24,  MVT::f64,// ->19681
/*19657*/       OPC_Scope, 10, /*->19669*/ // 2 children in Scope
/*19659*/         OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19661*/         OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 GPR32Opnd:i32:$src) - Complexity = 3
                  // Dst: (PseudoCVT_D32_W:f64 GPR32Opnd:i32:$src)
/*19669*/       /*Scope*/ 10, /*->19680*/
/*19670*/         OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19672*/         OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (sint_to_fp:f64 GPR32Opnd:i32:$src) - Complexity = 3
                  // Dst: (PseudoCVT_D64_W:f64 GPR32Opnd:i32:$src)
/*19680*/       0, /*End of Scope*/
              0, // EndSwitchType
/*19682*/   /*Scope*/ 40, /*->19723*/
/*19683*/     OPC_CheckChild0Type, MVT::i64,
/*19685*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->19698
/*19688*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19690*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoCVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GPR64Opnd:i64:$src) - Complexity = 3
                // Dst: (PseudoCVT_D64_L:f64 GPR64Opnd:i64:$src)
              /*SwitchType*/ 22,  MVT::f32,// ->19722
/*19700*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19702*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCVT_S_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19710*/       OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*19713*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (sint_to_fp:f32 GPR64Opnd:i64:$src) - Complexity = 3
                // Dst: (EXTRACT_SUBREG:f32 (PseudoCVT_S_L:f64 GPR64Opnd:i64:$src), sub_32:i32)
              0, // EndSwitchType
/*19723*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(MipsISD::TruncIntFP),// ->19802
/*19727*/   OPC_RecordChild0, // #0 = $src
/*19728*/   OPC_Scope, 28, /*->19758*/ // 2 children in Scope
/*19730*/     OPC_CheckChild0Type, MVT::f32,
/*19732*/     OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19745
/*19735*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19737*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f32 FGR32Opnd:f32:$src) - Complexity = 3
                // Dst: (TRUNC_W_S:f32 FGR32Opnd:f32:$src)
              /*SwitchType*/ 10,  MVT::f64,// ->19757
/*19747*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19749*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f64 FGR32Opnd:f32:$src) - Complexity = 3
                // Dst: (TRUNC_L_S:f64 FGR32Opnd:f32:$src)
              0, // EndSwitchType
/*19758*/   /*Scope*/ 42, /*->19801*/
/*19759*/     OPC_CheckChild0Type, MVT::f64,
/*19761*/     OPC_SwitchType /*2 cases */, 24,  MVT::f32,// ->19788
/*19764*/       OPC_Scope, 10, /*->19776*/ // 2 children in Scope
/*19766*/         OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19768*/         OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (MipsTruncIntFP:f32 AFGR64Opnd:f64:$src) - Complexity = 3
                  // Dst: (TRUNC_W_D32:f32 AFGR64Opnd:f64:$src)
/*19776*/       /*Scope*/ 10, /*->19787*/
/*19777*/         OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19779*/         OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (MipsTruncIntFP:f32 FGR64Opnd:f64:$src) - Complexity = 3
                  // Dst: (TRUNC_W_D64:f32 FGR64Opnd:f64:$src)
/*19787*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::f64,// ->19800
/*19790*/       OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19792*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (MipsTruncIntFP:f64 FGR64Opnd:f64:$src) - Complexity = 3
                // Dst: (TRUNC_L_D64:f64 FGR64Opnd:f64:$src)
              0, // EndSwitchType
/*19801*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->19830
/*19805*/   OPC_RecordChild0, // #0 = $src
/*19806*/   OPC_Scope, 10, /*->19818*/ // 2 children in Scope
/*19808*/     OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19810*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64Opnd:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64Opnd:f64:$src)
/*19818*/   /*Scope*/ 10, /*->19829*/
/*19819*/     OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19821*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64Opnd:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64Opnd:f64:$src)
/*19829*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->19858
/*19833*/   OPC_RecordChild0, // #0 = $src
/*19834*/   OPC_Scope, 10, /*->19846*/ // 2 children in Scope
/*19836*/     OPC_CheckPatternPredicate, 16, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19838*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32Opnd:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32Opnd:f32:$src)
/*19846*/   /*Scope*/ 10, /*->19857*/
/*19847*/     OPC_CheckPatternPredicate, 17, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19849*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32Opnd:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32Opnd:f32:$src)
/*19857*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHLL_DSP),// ->19901
/*19861*/   OPC_RecordChild0, // #0 = $a
/*19862*/   OPC_RecordChild1, // #1 = $shamt
/*19863*/   OPC_MoveChild, 1,
/*19865*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19868*/   OPC_MoveParent,
/*19869*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19885
/*19872*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19874*/     OPC_EmitConvertToTarget, 1,
/*19876*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19900
/*19887*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19889*/     OPC_EmitConvertToTarget, 1,
/*19891*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRA_DSP),// ->19944
/*19904*/   OPC_RecordChild0, // #0 = $a
/*19905*/   OPC_RecordChild1, // #1 = $shamt
/*19906*/   OPC_MoveChild, 1,
/*19908*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19911*/   OPC_MoveParent,
/*19912*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19928
/*19915*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19917*/     OPC_EmitConvertToTarget, 1,
/*19919*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19943
/*19930*/     OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*19932*/     OPC_EmitConvertToTarget, 1,
/*19934*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRL_DSP),// ->19987
/*19947*/   OPC_RecordChild0, // #0 = $a
/*19948*/   OPC_RecordChild1, // #1 = $shamt
/*19949*/   OPC_MoveChild, 1,
/*19951*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19954*/   OPC_MoveParent,
/*19955*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19971
/*19958*/     OPC_CheckPatternPredicate, 13, // (Subtarget.hasDSPR2())
/*19960*/     OPC_EmitConvertToTarget, 1,
/*19962*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19986
/*19973*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19975*/     OPC_EmitConvertToTarget, 1,
/*19977*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::TRAP),// ->20013
/*19990*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*19991*/   OPC_Scope, 9, /*->20002*/ // 2 children in Scope
/*19993*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*19995*/     OPC_EmitMergeInputChains1_0,
/*19996*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TRAP), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (TRAP)
/*20002*/   /*Scope*/ 9, /*->20012*/
/*20003*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*20005*/     OPC_EmitMergeInputChains1_0,
/*20006*/     OPC_MorphNodeTo, TARGET_VAL(Mips::Break16), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (trap) - Complexity = 3
              // Dst: (Break16)
/*20012*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(MipsISD::Ret),// ->20040
/*20016*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*20017*/   OPC_CaptureGlueInput,
/*20018*/   OPC_Scope, 9, /*->20029*/ // 2 children in Scope
/*20020*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*20022*/     OPC_EmitMergeInputChains1_0,
/*20023*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA)
/*20029*/   /*Scope*/ 9, /*->20039*/
/*20030*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*20032*/     OPC_EmitMergeInputChains1_0,
/*20033*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA16)
/*20039*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BR),// ->20086
/*20043*/   OPC_RecordNode,   // #0 = 'br' chained node
/*20044*/   OPC_RecordChild1, // #1 = $target
/*20045*/   OPC_MoveChild, 1,
/*20047*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*20050*/   OPC_MoveParent,
/*20051*/   OPC_Scope, 10, /*->20063*/ // 3 children in Scope
/*20053*/     OPC_CheckPatternPredicate, 28, // (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding())
/*20055*/     OPC_EmitMergeInputChains1_0,
/*20056*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*20063*/   /*Scope*/ 10, /*->20074*/
/*20064*/     OPC_CheckPatternPredicate, 29, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding())
/*20066*/     OPC_EmitMergeInputChains1_0,
/*20067*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$offset) - Complexity = 3
              // Dst: (B (bb:Other):$offset)
/*20074*/   /*Scope*/ 10, /*->20085*/
/*20075*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*20077*/     OPC_EmitMergeInputChains1_0,
/*20078*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BimmX16), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (BimmX16 (bb:Other):$imm16)
/*20085*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::BRIND),// ->20133
/*20089*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*20090*/   OPC_RecordChild1, // #1 = $rs
/*20091*/   OPC_Scope, 26, /*->20119*/ // 2 children in Scope
/*20093*/     OPC_CheckChild1Type, MVT::i32,
/*20095*/     OPC_Scope, 10, /*->20107*/ // 2 children in Scope
/*20097*/       OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*20099*/       OPC_EmitMergeInputChains1_0,
/*20100*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind GPR32Opnd:i32:$rs) - Complexity = 3
                // Dst: (JR GPR32Opnd:i32:$rs)
/*20107*/     /*Scope*/ 10, /*->20118*/
/*20108*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*20110*/       OPC_EmitMergeInputChains1_0,
/*20111*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JrcRx16), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JrcRx16 CPU16Regs:i32:$rs)
/*20118*/     0, /*End of Scope*/
/*20119*/   /*Scope*/ 12, /*->20132*/
/*20120*/     OPC_CheckChild1Type, MVT::i64,
/*20122*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasStandardEncoding())
/*20124*/     OPC_EmitMergeInputChains1_0,
/*20125*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind GPR64Opnd:i64:$rs) - Complexity = 3
              // Dst: (JR64 GPR64Opnd:i64:$rs)
/*20132*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::EH_RETURN),// ->20171
/*20136*/   OPC_RecordNode,   // #0 = 'MIPSehret' chained node
/*20137*/   OPC_CaptureGlueInput,
/*20138*/   OPC_RecordChild1, // #1 = $spoff
/*20139*/   OPC_Scope, 14, /*->20155*/ // 2 children in Scope
/*20141*/     OPC_CheckChild1Type, MVT::i32,
/*20143*/     OPC_RecordChild2, // #2 = $dst
/*20144*/     OPC_CheckChild2Type, MVT::i32,
/*20146*/     OPC_EmitMergeInputChains1_0,
/*20147*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret GPR32:i32:$spoff, GPR32:i32:$dst) - Complexity = 3
              // Dst: (MIPSeh_return32 GPR32:i32:$spoff, GPR32:i32:$dst)
/*20155*/   /*Scope*/ 14, /*->20170*/
/*20156*/     OPC_CheckChild1Type, MVT::i64,
/*20158*/     OPC_RecordChild2, // #2 = $dst
/*20159*/     OPC_CheckChild2Type, MVT::i64,
/*20161*/     OPC_EmitMergeInputChains1_0,
/*20162*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret GPR64:i64:$spoff, GPR64:i64:$dst) - Complexity = 3
              // Dst: (MIPSeh_return64 GPR64:i64:$spoff, GPR64:i64:$dst)
/*20170*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRem16),// ->20189
/*20174*/   OPC_RecordChild0, // #0 = $rx
/*20175*/   OPC_CheckChild0Type, MVT::i32,
/*20177*/   OPC_RecordChild1, // #1 = $ry
/*20178*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*20180*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRem16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRemU16),// ->20207
/*20192*/   OPC_RecordChild0, // #0 = $rx
/*20193*/   OPC_CheckChild0Type, MVT::i32,
/*20195*/   OPC_RecordChild1, // #1 = $ry
/*20196*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*20198*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivuRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRemU16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivuRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 93|128,2/*349*/,  TARGET_VAL(MipsISD::SELECT_CC_DSP),// ->20560
/*20211*/   OPC_RecordChild0, // #0 = $a
/*20212*/   OPC_Scope, 43|128,1/*171*/, /*->20386*/ // 2 children in Scope
/*20215*/     OPC_CheckChild0Type, MVT::v2i16,
/*20217*/     OPC_RecordChild1, // #1 = $b
/*20218*/     OPC_RecordChild2, // #2 = $c
/*20219*/     OPC_RecordChild3, // #3 = $d
/*20220*/     OPC_MoveChild, 4,
/*20222*/     OPC_Scope, 26, /*->20250*/ // 6 children in Scope
/*20224*/       OPC_CheckCondCode, ISD::SETEQ,
/*20226*/       OPC_MoveParent,
/*20227*/       OPC_CheckType, MVT::v2i16,
/*20229*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20231*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20240*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*20250*/     /*Scope*/ 26, /*->20277*/
/*20251*/       OPC_CheckCondCode, ISD::SETLT,
/*20253*/       OPC_MoveParent,
/*20254*/       OPC_CheckType, MVT::v2i16,
/*20256*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20258*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20267*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*20277*/     /*Scope*/ 26, /*->20304*/
/*20278*/       OPC_CheckCondCode, ISD::SETLE,
/*20280*/       OPC_MoveParent,
/*20281*/       OPC_CheckType, MVT::v2i16,
/*20283*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20285*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20294*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*20304*/     /*Scope*/ 26, /*->20331*/
/*20305*/       OPC_CheckCondCode, ISD::SETNE,
/*20307*/       OPC_MoveParent,
/*20308*/       OPC_CheckType, MVT::v2i16,
/*20310*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20312*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20321*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*20331*/     /*Scope*/ 26, /*->20358*/
/*20332*/       OPC_CheckCondCode, ISD::SETGE,
/*20334*/       OPC_MoveParent,
/*20335*/       OPC_CheckType, MVT::v2i16,
/*20337*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20339*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20348*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*20358*/     /*Scope*/ 26, /*->20385*/
/*20359*/       OPC_CheckCondCode, ISD::SETGT,
/*20361*/       OPC_MoveParent,
/*20362*/       OPC_CheckType, MVT::v2i16,
/*20364*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20366*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*20375*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*20385*/     0, /*End of Scope*/
/*20386*/   /*Scope*/ 43|128,1/*171*/, /*->20559*/
/*20388*/     OPC_CheckChild0Type, MVT::v4i8,
/*20390*/     OPC_RecordChild1, // #1 = $b
/*20391*/     OPC_RecordChild2, // #2 = $c
/*20392*/     OPC_RecordChild3, // #3 = $d
/*20393*/     OPC_MoveChild, 4,
/*20395*/     OPC_Scope, 26, /*->20423*/ // 6 children in Scope
/*20397*/       OPC_CheckCondCode, ISD::SETEQ,
/*20399*/       OPC_MoveParent,
/*20400*/       OPC_CheckType, MVT::v4i8,
/*20402*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20404*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20413*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*20423*/     /*Scope*/ 26, /*->20450*/
/*20424*/       OPC_CheckCondCode, ISD::SETULT,
/*20426*/       OPC_MoveParent,
/*20427*/       OPC_CheckType, MVT::v4i8,
/*20429*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20431*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20440*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*20450*/     /*Scope*/ 26, /*->20477*/
/*20451*/       OPC_CheckCondCode, ISD::SETULE,
/*20453*/       OPC_MoveParent,
/*20454*/       OPC_CheckType, MVT::v4i8,
/*20456*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20458*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20467*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*20477*/     /*Scope*/ 26, /*->20504*/
/*20478*/       OPC_CheckCondCode, ISD::SETNE,
/*20480*/       OPC_MoveParent,
/*20481*/       OPC_CheckType, MVT::v4i8,
/*20483*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20485*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20494*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20504*/     /*Scope*/ 26, /*->20531*/
/*20505*/       OPC_CheckCondCode, ISD::SETUGE,
/*20507*/       OPC_MoveParent,
/*20508*/       OPC_CheckType, MVT::v4i8,
/*20510*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20512*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20521*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20531*/     /*Scope*/ 26, /*->20558*/
/*20532*/       OPC_CheckCondCode, ISD::SETUGT,
/*20534*/       OPC_MoveParent,
/*20535*/       OPC_CheckType, MVT::v4i8,
/*20537*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20539*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*20548*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*20558*/     0, /*End of Scope*/
/*20559*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,6/*813*/,  TARGET_VAL(MipsISD::SETCC_DSP),// ->21377
/*20564*/   OPC_RecordChild0, // #0 = $a
/*20565*/   OPC_Scope, 19|128,3/*403*/, /*->20971*/ // 2 children in Scope
/*20568*/     OPC_CheckChild0Type, MVT::v2i16,
/*20570*/     OPC_RecordChild1, // #1 = $b
/*20571*/     OPC_MoveChild, 2,
/*20573*/     OPC_Scope, 65, /*->20640*/ // 6 children in Scope
/*20575*/       OPC_CheckCondCode, ISD::SETEQ,
/*20577*/       OPC_MoveParent,
/*20578*/       OPC_CheckType, MVT::v2i16,
/*20580*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20582*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20591*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20594*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20606*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20615*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*20618*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20627*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20630*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32), ZERO:v2i16)
/*20640*/     /*Scope*/ 65, /*->20706*/
/*20641*/       OPC_CheckCondCode, ISD::SETLT,
/*20643*/       OPC_MoveParent,
/*20644*/       OPC_CheckType, MVT::v2i16,
/*20646*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20648*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20657*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20660*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20672*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20681*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*20684*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20693*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20696*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32), ZERO:v2i16)
/*20706*/     /*Scope*/ 65, /*->20772*/
/*20707*/       OPC_CheckCondCode, ISD::SETLE,
/*20709*/       OPC_MoveParent,
/*20710*/       OPC_CheckType, MVT::v2i16,
/*20712*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20714*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20723*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20726*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20738*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20747*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*20750*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20759*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20762*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32), ZERO:v2i16)
/*20772*/     /*Scope*/ 65, /*->20838*/
/*20773*/       OPC_CheckCondCode, ISD::SETNE,
/*20775*/       OPC_MoveParent,
/*20776*/       OPC_CheckType, MVT::v2i16,
/*20778*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20780*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20789*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20792*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20795*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20807*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20816*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*20819*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20828*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32))
/*20838*/     /*Scope*/ 65, /*->20904*/
/*20839*/       OPC_CheckCondCode, ISD::SETGE,
/*20841*/       OPC_MoveParent,
/*20842*/       OPC_CheckType, MVT::v2i16,
/*20844*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20846*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20855*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20858*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20861*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20873*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20882*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*20885*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20894*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32))
/*20904*/     /*Scope*/ 65, /*->20970*/
/*20905*/       OPC_CheckCondCode, ISD::SETGT,
/*20907*/       OPC_MoveParent,
/*20908*/       OPC_CheckType, MVT::v2i16,
/*20910*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20912*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20921*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20924*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20927*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20939*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20948*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*20951*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20960*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32))
/*20970*/     0, /*End of Scope*/
/*20971*/   /*Scope*/ 19|128,3/*403*/, /*->21376*/
/*20973*/     OPC_CheckChild0Type, MVT::v4i8,
/*20975*/     OPC_RecordChild1, // #1 = $b
/*20976*/     OPC_MoveChild, 2,
/*20978*/     OPC_Scope, 65, /*->21045*/ // 6 children in Scope
/*20980*/       OPC_CheckCondCode, ISD::SETEQ,
/*20982*/       OPC_MoveParent,
/*20983*/       OPC_CheckType, MVT::v4i8,
/*20985*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20987*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20996*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20999*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21011*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*21020*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*21023*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*21032*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21035*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32), ZERO:v4i8)
/*21045*/     /*Scope*/ 65, /*->21111*/
/*21046*/       OPC_CheckCondCode, ISD::SETULT,
/*21048*/       OPC_MoveParent,
/*21049*/       OPC_CheckType, MVT::v4i8,
/*21051*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*21053*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*21062*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*21065*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21077*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*21086*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*21089*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*21098*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21101*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32), ZERO:v4i8)
/*21111*/     /*Scope*/ 65, /*->21177*/
/*21112*/       OPC_CheckCondCode, ISD::SETULE,
/*21114*/       OPC_MoveParent,
/*21115*/       OPC_CheckType, MVT::v4i8,
/*21117*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*21119*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*21128*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*21131*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21143*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*21152*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*21155*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*21164*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21167*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32), ZERO:v4i8)
/*21177*/     /*Scope*/ 65, /*->21243*/
/*21178*/       OPC_CheckCondCode, ISD::SETNE,
/*21180*/       OPC_MoveParent,
/*21181*/       OPC_CheckType, MVT::v4i8,
/*21183*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*21185*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*21194*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21197*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*21200*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21212*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*21221*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*21224*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*21233*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32))
/*21243*/     /*Scope*/ 65, /*->21309*/
/*21244*/       OPC_CheckCondCode, ISD::SETUGE,
/*21246*/       OPC_MoveParent,
/*21247*/       OPC_CheckType, MVT::v4i8,
/*21249*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*21251*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*21260*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21263*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*21266*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21278*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*21287*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*21290*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*21299*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32))
/*21309*/     /*Scope*/ 65, /*->21375*/
/*21310*/       OPC_CheckCondCode, ISD::SETUGT,
/*21312*/       OPC_MoveParent,
/*21313*/       OPC_CheckType, MVT::v4i8,
/*21315*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*21317*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*21326*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*21329*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*21332*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*21344*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*21353*/       OPC_EmitInteger, MVT::i32, Mips::DSPRRegClassID,
/*21356*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*21365*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPR:i32))
/*21375*/     0, /*End of Scope*/
/*21376*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 21379 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 289
  // #OPC_RecordNode                     = 54
  // #OPC_RecordChild                    = 817
  // #OPC_RecordMemRef                   = 18
  // #OPC_CaptureGlueInput               = 9
  // #OPC_MoveChild                      = 213
  // #OPC_MoveParent                     = 735
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 907
  // #OPC_CheckPredicate                 = 269
  // #OPC_CheckOpcode                    = 125
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 419
  // #OPC_SwitchType                     = 110
  // #OPC_CheckChildType                 = 94
  // #OPC_CheckInteger                   = 119
  // #OPC_CheckCondCode                  = 234
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 133
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 44
  // #OPC_EmitStringInteger              = 22
  // #OPC_EmitRegister                   = 72
  // #OPC_EmitConvertToTarget            = 148
  // #OPC_EmitMergeInputChains           = 375
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 206
  // #OPC_EmitNodeXForm                  = 36
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 914

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 1: return (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 2: return (Subtarget.hasDSP());
  case 3: return (Subtarget.inMips16Mode());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 6: return (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding());
  case 7: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 8: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 9: return (Subtarget.hasMSA());
  case 10: return (Subtarget.hasStandardEncoding());
  case 11: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding()) && (!Subtarget.inMicroMipsMode());
  case 12: return (Subtarget.inMicroMipsMode());
  case 13: return (Subtarget.hasDSPR2());
  case 14: return (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding());
  case 15: return (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 16: return (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 17: return (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 18: return (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding());
  case 19: return (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding());
  case 20: return (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP());
  case 21: return (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding());
  case 22: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 23: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 24: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 25: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 26: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 27: return (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 28: return (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding());
  case 29: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding());
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
  case 1: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 2: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 4: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 6: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 13: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 14: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 18: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 19: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 20: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 22: { // Predicate_immZExt10
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<10>(Imm);
  }
  case 23: { // Predicate_immZExt4
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<4>(Imm);
  }
  case 24: { // Predicate_immZExt3
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<3>(Imm);
  }
  case 25: { // Predicate_immZExt2
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<2>(Imm);
  }
  case 26: { // Predicate_immZExt8
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<8>(Imm);
  }
  case 27: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 28: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 29: { // Predicate_immSExt16Plus1
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<17>(N->getSExtValue()) && isInt<16>(N->getSExtValue() + 1);

  }
  case 30: { // Predicate_immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<8>(N->getSExtValue()); 
  }
  case 31: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 32: { // Predicate_immSExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isInt<6>(Imm);
  }
  case 33: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

  }
  case 34: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 35: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 36: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 37: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 38: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 55: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 56: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 57: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 58: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 63: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 64: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 65: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 66: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 67: { // Predicate_fpimm0neg
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
    Result.resize(NextRes+2);
    return selectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+3);
    return selectAddr16(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+2);
    return selectIntAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectAddrDefault(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return selectIntAddrMM(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // Plus1
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());
 return getImm(N, N->getSExtValue() + 1); 
  }
  case 2: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

