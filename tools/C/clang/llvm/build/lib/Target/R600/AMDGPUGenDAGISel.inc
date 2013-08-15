/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the AMDGPU target                              *|
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
/*0*/     OPC_SwitchOpcode /*75 cases */, 120|128,9/*1272*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1277
/*5*/       OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*6*/       OPC_MoveChild, 1,
/*8*/       OPC_Scope, 80, /*->90*/ // 10 children in Scope
/*10*/        OPC_CheckInteger, 53|128,20/*2613*/, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $en
/*15*/        OPC_MoveChild, 2,
/*17*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*20*/        OPC_MoveParent,
/*21*/        OPC_RecordChild3, // #2 = $vm
/*22*/        OPC_MoveChild, 3,
/*24*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*27*/        OPC_MoveParent,
/*28*/        OPC_RecordChild4, // #3 = $done
/*29*/        OPC_MoveChild, 4,
/*31*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34*/        OPC_MoveParent,
/*35*/        OPC_RecordChild5, // #4 = $tgt
/*36*/        OPC_MoveChild, 5,
/*38*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*41*/        OPC_MoveParent,
/*42*/        OPC_RecordChild6, // #5 = $compr
/*43*/        OPC_MoveChild, 6,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*48*/        OPC_MoveParent,
/*49*/        OPC_RecordChild7, // #6 = $src0
/*50*/        OPC_MoveChild, 8,
/*52*/        OPC_RecordNode, // #7 = $src1
/*53*/        OPC_MoveParent,
/*54*/        OPC_MoveChild, 9,
/*56*/        OPC_RecordNode, // #8 = $src2
/*57*/        OPC_MoveParent,
/*58*/        OPC_MoveChild, 10,
/*60*/        OPC_RecordNode, // #9 = $src3
/*61*/        OPC_MoveParent,
/*62*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*64*/        OPC_EmitMergeInputChains1_0,
/*65*/        OPC_EmitConvertToTarget, 1,
/*67*/        OPC_EmitConvertToTarget, 4,
/*69*/        OPC_EmitConvertToTarget, 5,
/*71*/        OPC_EmitConvertToTarget, 3,
/*73*/        OPC_EmitConvertToTarget, 2,
/*75*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 10, 11, 12, 13, 14, 6, 7, 8, 9, 
              // Src: (intrinsic_void 2613:iPTR, (imm:i32):$en, (imm:i32):$vm, (imm:i32):$done, (imm:i32):$tgt, (imm:i32):$compr, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2, f32:f32:$src3) - Complexity = 23
              // Dst: (EXP (imm:i32):$en, (imm:i32):$tgt, (imm:i32):$compr, (imm:i32):$done, (imm:i32):$vm, ?:f32:$src0, ?:f32:$src1, ?:f32:$src2, ?:f32:$src3)
/*90*/      /*Scope*/ 84|128,2/*340*/, /*->432*/
/*92*/        OPC_CheckInteger, 39|128,20/*2599*/, 
/*95*/        OPC_MoveParent,
/*96*/        OPC_RecordChild2, // #1 = $src
/*97*/        OPC_RecordChild3, // #2 = $arraybase
/*98*/        OPC_MoveChild, 3,
/*100*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*103*/       OPC_MoveParent,
/*104*/       OPC_MoveChild, 4,
/*106*/       OPC_Scope, 80, /*->188*/ // 4 children in Scope
/*108*/         OPC_CheckInteger, 0, 
/*110*/         OPC_MoveParent,
/*111*/         OPC_RecordChild5, // #3 = $mask
/*112*/         OPC_MoveChild, 5,
/*114*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*117*/         OPC_MoveParent,
/*118*/         OPC_Scope, 33, /*->153*/ // 2 children in Scope
/*120*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*122*/           OPC_EmitMergeInputChains1_0,
/*123*/           OPC_EmitInteger, MVT::i32, 0, 
/*126*/           OPC_EmitConvertToTarget, 2,
/*128*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*132*/           OPC_EmitConvertToTarget, 3,
/*134*/           OPC_EmitInteger, MVT::i32, 32, 
/*137*/           OPC_EmitInteger, MVT::i32, 0, 
/*140*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 32:i32, 0:i32)
/*153*/         /*Scope*/ 33, /*->187*/
/*154*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*156*/           OPC_EmitMergeInputChains1_0,
/*157*/           OPC_EmitInteger, MVT::i32, 0, 
/*160*/           OPC_EmitConvertToTarget, 2,
/*162*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*166*/           OPC_EmitConvertToTarget, 3,
/*168*/           OPC_EmitInteger, MVT::i32, 64, 
/*171*/           OPC_EmitInteger, MVT::i32, 0, 
/*174*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 0:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 64:i32, 0:i32)
/*187*/         0, /*End of Scope*/
/*188*/       /*Scope*/ 80, /*->269*/
/*189*/         OPC_CheckInteger, 1, 
/*191*/         OPC_MoveParent,
/*192*/         OPC_RecordChild5, // #3 = $mask
/*193*/         OPC_MoveChild, 5,
/*195*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*198*/         OPC_MoveParent,
/*199*/         OPC_Scope, 33, /*->234*/ // 2 children in Scope
/*201*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*203*/           OPC_EmitMergeInputChains1_0,
/*204*/           OPC_EmitInteger, MVT::i32, 0, 
/*207*/           OPC_EmitConvertToTarget, 2,
/*209*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*213*/           OPC_EmitConvertToTarget, 3,
/*215*/           OPC_EmitInteger, MVT::i32, 33, 
/*218*/           OPC_EmitInteger, MVT::i32, 0, 
/*221*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 33:i32, 0:i32)
/*234*/         /*Scope*/ 33, /*->268*/
/*235*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*237*/           OPC_EmitMergeInputChains1_0,
/*238*/           OPC_EmitInteger, MVT::i32, 0, 
/*241*/           OPC_EmitConvertToTarget, 2,
/*243*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*247*/           OPC_EmitConvertToTarget, 3,
/*249*/           OPC_EmitInteger, MVT::i32, 65, 
/*252*/           OPC_EmitInteger, MVT::i32, 0, 
/*255*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 1:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 65:i32, 0:i32)
/*268*/         0, /*End of Scope*/
/*269*/       /*Scope*/ 80, /*->350*/
/*270*/         OPC_CheckInteger, 2, 
/*272*/         OPC_MoveParent,
/*273*/         OPC_RecordChild5, // #3 = $mask
/*274*/         OPC_MoveChild, 5,
/*276*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*279*/         OPC_MoveParent,
/*280*/         OPC_Scope, 33, /*->315*/ // 2 children in Scope
/*282*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*284*/           OPC_EmitMergeInputChains1_0,
/*285*/           OPC_EmitInteger, MVT::i32, 0, 
/*288*/           OPC_EmitConvertToTarget, 2,
/*290*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*294*/           OPC_EmitConvertToTarget, 3,
/*296*/           OPC_EmitInteger, MVT::i32, 34, 
/*299*/           OPC_EmitInteger, MVT::i32, 0, 
/*302*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 34:i32, 0:i32)
/*315*/         /*Scope*/ 33, /*->349*/
/*316*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*318*/           OPC_EmitMergeInputChains1_0,
/*319*/           OPC_EmitInteger, MVT::i32, 0, 
/*322*/           OPC_EmitConvertToTarget, 2,
/*324*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*328*/           OPC_EmitConvertToTarget, 3,
/*330*/           OPC_EmitInteger, MVT::i32, 66, 
/*333*/           OPC_EmitInteger, MVT::i32, 0, 
/*336*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 2:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 66:i32, 0:i32)
/*349*/         0, /*End of Scope*/
/*350*/       /*Scope*/ 80, /*->431*/
/*351*/         OPC_CheckInteger, 3, 
/*353*/         OPC_MoveParent,
/*354*/         OPC_RecordChild5, // #3 = $mask
/*355*/         OPC_MoveChild, 5,
/*357*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*360*/         OPC_MoveParent,
/*361*/         OPC_Scope, 33, /*->396*/ // 2 children in Scope
/*363*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*365*/           OPC_EmitMergeInputChains1_0,
/*366*/           OPC_EmitInteger, MVT::i32, 0, 
/*369*/           OPC_EmitConvertToTarget, 2,
/*371*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*375*/           OPC_EmitConvertToTarget, 3,
/*377*/           OPC_EmitInteger, MVT::i32, 35, 
/*380*/           OPC_EmitInteger, MVT::i32, 0, 
/*383*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (R600_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 35:i32, 0:i32)
/*396*/         /*Scope*/ 33, /*->430*/
/*397*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*399*/           OPC_EmitMergeInputChains1_0,
/*400*/           OPC_EmitInteger, MVT::i32, 0, 
/*403*/           OPC_EmitConvertToTarget, 2,
/*405*/           OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*409*/           OPC_EmitConvertToTarget, 3,
/*411*/           OPC_EmitInteger, MVT::i32, 67, 
/*414*/           OPC_EmitInteger, MVT::i32, 0, 
/*417*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportBuf), 0|OPFL_Chain,
                      0/*#VTs*/, 7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2599:iPTR, R600_Reg128:v4f32:$src, (imm:i32):$arraybase, 3:i32, (imm:i32):$mask) - Complexity = 19
                  // Dst: (EG_ExportBuf R600_Reg128:v4f32:$src, 0:i32, (imm:i32):$arraybase, 4095:i32, (imm:i32):$mask, 67:i32, 0:i32)
/*430*/         0, /*End of Scope*/
/*431*/       0, /*End of Scope*/
/*432*/     /*Scope*/ 94|128,1/*222*/, /*->656*/
/*434*/       OPC_CheckInteger, 36|128,20/*2596*/, 
/*437*/       OPC_MoveParent,
/*438*/       OPC_Scope, 107, /*->547*/ // 2 children in Scope
/*440*/         OPC_MoveChild, 2,
/*442*/         OPC_CheckInteger, 1, 
/*444*/         OPC_MoveParent,
/*445*/         OPC_Scope, 49, /*->496*/ // 2 children in Scope
/*447*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*449*/           OPC_EmitMergeInputChains1_0,
/*450*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*457*/           OPC_EmitInteger, MVT::i32, 1, 
/*460*/           OPC_EmitInteger, MVT::i32, 60, 
/*463*/           OPC_EmitInteger, MVT::i32, 7, 
/*466*/           OPC_EmitInteger, MVT::i32, 7, 
/*469*/           OPC_EmitInteger, MVT::i32, 7, 
/*472*/           OPC_EmitInteger, MVT::i32, 7, 
/*475*/           OPC_EmitInteger, MVT::i32, 39, 
/*478*/           OPC_EmitInteger, MVT::i32, 0, 
/*481*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2596:iPTR, 1:i32) - Complexity = 13
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*496*/         /*Scope*/ 49, /*->546*/
/*497*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*507*/           OPC_EmitInteger, MVT::i32, 1, 
/*510*/           OPC_EmitInteger, MVT::i32, 60, 
/*513*/           OPC_EmitInteger, MVT::i32, 7, 
/*516*/           OPC_EmitInteger, MVT::i32, 7, 
/*519*/           OPC_EmitInteger, MVT::i32, 7, 
/*522*/           OPC_EmitInteger, MVT::i32, 7, 
/*525*/           OPC_EmitInteger, MVT::i32, 83, 
/*528*/           OPC_EmitInteger, MVT::i32, 0, 
/*531*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
                  // Src: (intrinsic_void 2596:iPTR, 1:i32) - Complexity = 13
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), 1:i32, 60:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*546*/         0, /*End of Scope*/
/*547*/       /*Scope*/ 107, /*->655*/
/*548*/         OPC_RecordChild2, // #1 = $type
/*549*/         OPC_MoveChild, 2,
/*551*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*554*/         OPC_MoveParent,
/*555*/         OPC_Scope, 48, /*->605*/ // 2 children in Scope
/*557*/           OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*559*/           OPC_EmitMergeInputChains1_0,
/*560*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*567*/           OPC_EmitConvertToTarget, 1,
/*569*/           OPC_EmitInteger, MVT::i32, 0, 
/*572*/           OPC_EmitInteger, MVT::i32, 7, 
/*575*/           OPC_EmitInteger, MVT::i32, 7, 
/*578*/           OPC_EmitInteger, MVT::i32, 7, 
/*581*/           OPC_EmitInteger, MVT::i32, 7, 
/*584*/           OPC_EmitInteger, MVT::i32, 39, 
/*587*/           OPC_EmitInteger, MVT::i32, 0, 
/*590*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 2596:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (R600_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*605*/         /*Scope*/ 48, /*->654*/
/*606*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*608*/           OPC_EmitMergeInputChains1_0,
/*609*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*616*/           OPC_EmitConvertToTarget, 1,
/*618*/           OPC_EmitInteger, MVT::i32, 0, 
/*621*/           OPC_EmitInteger, MVT::i32, 7, 
/*624*/           OPC_EmitInteger, MVT::i32, 7, 
/*627*/           OPC_EmitInteger, MVT::i32, 7, 
/*630*/           OPC_EmitInteger, MVT::i32, 7, 
/*633*/           OPC_EmitInteger, MVT::i32, 83, 
/*636*/           OPC_EmitInteger, MVT::i32, 0, 
/*639*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                      0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
                  // Src: (intrinsic_void 2596:iPTR, (imm:i32):$type) - Complexity = 11
                  // Dst: (EG_ExportSwz (IMPLICIT_DEF:v4f32), (imm:i32):$type, 0:i32, 7:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*654*/         0, /*End of Scope*/
/*655*/       0, /*End of Scope*/
/*656*/     /*Scope*/ 26, /*->683*/
/*657*/       OPC_CheckInteger, 43|128,19/*2475*/, 
/*660*/       OPC_MoveParent,
/*661*/       OPC_Scope, 9, /*->672*/ // 2 children in Scope
/*663*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*665*/         OPC_EmitMergeInputChains1_0,
/*666*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::GROUP_BARRIER), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (intrinsic_void 2475:iPTR) - Complexity = 8
                // Dst: (GROUP_BARRIER)
/*672*/       /*Scope*/ 9, /*->682*/
/*673*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*675*/         OPC_EmitMergeInputChains1_0,
/*676*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BARRIER), 0|OPFL_Chain,
                    0/*#VTs*/, 0/*#Ops*/, 
                // Src: (intrinsic_void 2475:iPTR) - Complexity = 8
                // Dst: (S_BARRIER)
/*682*/       0, /*End of Scope*/
/*683*/     /*Scope*/ 23, /*->707*/
/*684*/       OPC_CheckInteger, 60|128,20/*2620*/, 
/*687*/       OPC_MoveParent,
/*688*/       OPC_RecordChild2, // #1 = $saved
/*689*/       OPC_RecordChild3, // #2 = $target
/*690*/       OPC_MoveChild, 3,
/*692*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*695*/       OPC_MoveParent,
/*696*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*698*/       OPC_EmitMergeInputChains1_0,
/*699*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_LOOP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 2620:iPTR, i64:i64:$saved, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_LOOP i64:i64:$saved, (bb:Other):$target)
/*707*/     /*Scope*/ 15, /*->723*/
/*708*/       OPC_CheckInteger, 52|128,20/*2612*/, 
/*711*/       OPC_MoveParent,
/*712*/       OPC_RecordChild2, // #1 = $saved
/*713*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*715*/       OPC_EmitMergeInputChains1_0,
/*716*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_END_CF), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 2612:iPTR, i64:i64:$saved) - Complexity = 8
              // Dst: (SI_END_CF i64:i64:$saved)
/*723*/     /*Scope*/ 3|128,1/*131*/, /*->856*/
/*725*/       OPC_CheckInteger, 52|128,19/*2484*/, 
/*728*/       OPC_MoveParent,
/*729*/       OPC_RecordChild2, // #1 = $src
/*730*/       OPC_Scope, 10, /*->742*/ // 2 children in Scope
/*732*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*734*/         OPC_EmitMergeInputChains1_0,
/*735*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 2484:iPTR, f32:f32:$src) - Complexity = 8
                // Dst: (SI_KILL f32:f32:$src)
/*742*/       /*Scope*/ 112, /*->855*/
/*743*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*745*/         OPC_EmitMergeInputChains1_0,
/*746*/         OPC_EmitInteger, MVT::i32, 0, 
/*749*/         OPC_EmitInteger, MVT::i32, 0, 
/*752*/         OPC_EmitInteger, MVT::i32, 1, 
/*755*/         OPC_EmitInteger, MVT::i32, 0, 
/*758*/         OPC_EmitInteger, MVT::i32, 0, 
/*761*/         OPC_EmitInteger, MVT::i32, 0, 
/*764*/         OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*767*/         OPC_EmitInteger, MVT::i32, 0, 
/*770*/         OPC_EmitInteger, MVT::i32, 0, 
/*773*/         OPC_EmitInteger, MVT::i32, 0, 
/*776*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*788*/         OPC_EmitInteger, MVT::i32, 0, 
/*791*/         OPC_EmitInteger, MVT::i32, 0, 
/*794*/         OPC_EmitInteger, MVT::i32, 0, 
/*797*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*809*/         OPC_EmitInteger, MVT::i32, 1, 
/*812*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*815*/         OPC_EmitInteger, MVT::i32, 0, 
/*818*/         OPC_EmitInteger, MVT::i32, 0, 
/*821*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*848*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 2484:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ZERO:f32, ?:f32:$src0))
/*855*/       0, /*End of Scope*/
/*856*/     /*Scope*/ 20|128,1/*148*/, /*->1006*/
/*858*/       OPC_CheckInteger, 53|128,19/*2485*/, 
/*861*/       OPC_MoveParent,
/*862*/       OPC_Scope, 25, /*->889*/ // 2 children in Scope
/*864*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*866*/         OPC_EmitMergeInputChains1_0,
/*867*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,11/*3212836864*/, 
/*874*/         OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*882*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_KILL), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 2485:iPTR) - Complexity = 8
                // Dst: (SI_KILL (V_MOV_B32_e32:i32 3212836864:i32))
/*889*/       /*Scope*/ 115, /*->1005*/
/*890*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*892*/         OPC_EmitMergeInputChains1_0,
/*893*/         OPC_EmitInteger, MVT::i32, 0, 
/*896*/         OPC_EmitInteger, MVT::i32, 0, 
/*899*/         OPC_EmitInteger, MVT::i32, 1, 
/*902*/         OPC_EmitInteger, MVT::i32, 0, 
/*905*/         OPC_EmitInteger, MVT::i32, 0, 
/*908*/         OPC_EmitInteger, MVT::i32, 0, 
/*911*/         OPC_EmitRegister, MVT::f32, AMDGPU::ONE,
/*914*/         OPC_EmitInteger, MVT::i32, 0, 
/*917*/         OPC_EmitInteger, MVT::i32, 0, 
/*920*/         OPC_EmitInteger, MVT::i32, 0, 
/*923*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*935*/         OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*938*/         OPC_EmitInteger, MVT::i32, 0, 
/*941*/         OPC_EmitInteger, MVT::i32, 0, 
/*944*/         OPC_EmitInteger, MVT::i32, 0, 
/*947*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*959*/         OPC_EmitInteger, MVT::i32, 1, 
/*962*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*965*/         OPC_EmitInteger, MVT::i32, 0, 
/*968*/         OPC_EmitInteger, MVT::i32, 0, 
/*971*/         OPC_EmitNode, TARGET_VAL(AMDGPU::KILLGT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*998*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MASK_WRITE), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 21, 
                // Src: (intrinsic_void 2485:iPTR) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:i32 ONE:f32, ZERO:f32))
/*1005*/      0, /*End of Scope*/
/*1006*/    /*Scope*/ 5|128,1/*133*/, /*->1141*/
/*1008*/      OPC_CheckInteger, 37|128,20/*2597*/, 
/*1011*/      OPC_MoveParent,
/*1012*/      OPC_RecordChild2, // #1 = $reg
/*1013*/      OPC_Scope, 62, /*->1077*/ // 2 children in Scope
/*1015*/        OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1017*/        OPC_EmitMergeInputChains1_0,
/*1018*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1025*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1028*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1038*/        OPC_EmitInteger, MVT::i32, 0, 
/*1041*/        OPC_EmitInteger, MVT::i32, 61, 
/*1044*/        OPC_EmitInteger, MVT::i32, 0, 
/*1047*/        OPC_EmitInteger, MVT::i32, 7, 
/*1050*/        OPC_EmitInteger, MVT::i32, 7, 
/*1053*/        OPC_EmitInteger, MVT::i32, 7, 
/*1056*/        OPC_EmitInteger, MVT::i32, 39, 
/*1059*/        OPC_EmitInteger, MVT::i32, 0, 
/*1062*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2597:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1077*/      /*Scope*/ 62, /*->1140*/
/*1078*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1080*/        OPC_EmitMergeInputChains1_0,
/*1081*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1088*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1091*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1101*/        OPC_EmitInteger, MVT::i32, 0, 
/*1104*/        OPC_EmitInteger, MVT::i32, 61, 
/*1107*/        OPC_EmitInteger, MVT::i32, 0, 
/*1110*/        OPC_EmitInteger, MVT::i32, 7, 
/*1113*/        OPC_EmitInteger, MVT::i32, 7, 
/*1116*/        OPC_EmitInteger, MVT::i32, 7, 
/*1119*/        OPC_EmitInteger, MVT::i32, 83, 
/*1122*/        OPC_EmitInteger, MVT::i32, 0, 
/*1125*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2597:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 0:i32, 7:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1140*/      0, /*End of Scope*/
/*1141*/    /*Scope*/ 5|128,1/*133*/, /*->1276*/
/*1143*/      OPC_CheckInteger, 38|128,20/*2598*/, 
/*1146*/      OPC_MoveParent,
/*1147*/      OPC_RecordChild2, // #1 = $reg
/*1148*/      OPC_Scope, 62, /*->1212*/ // 2 children in Scope
/*1150*/        OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1152*/        OPC_EmitMergeInputChains1_0,
/*1153*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1160*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1163*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1173*/        OPC_EmitInteger, MVT::i32, 0, 
/*1176*/        OPC_EmitInteger, MVT::i32, 61, 
/*1179*/        OPC_EmitInteger, MVT::i32, 7, 
/*1182*/        OPC_EmitInteger, MVT::i32, 0, 
/*1185*/        OPC_EmitInteger, MVT::i32, 7, 
/*1188*/        OPC_EmitInteger, MVT::i32, 7, 
/*1191*/        OPC_EmitInteger, MVT::i32, 39, 
/*1194*/        OPC_EmitInteger, MVT::i32, 0, 
/*1197*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2598:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (R600_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 39:i32, 0:i32)
/*1212*/      /*Scope*/ 62, /*->1275*/
/*1213*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1215*/        OPC_EmitMergeInputChains1_0,
/*1216*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #2
/*1223*/        OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*1226*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 1, 3,  // Results = #4
/*1236*/        OPC_EmitInteger, MVT::i32, 0, 
/*1239*/        OPC_EmitInteger, MVT::i32, 61, 
/*1242*/        OPC_EmitInteger, MVT::i32, 7, 
/*1245*/        OPC_EmitInteger, MVT::i32, 0, 
/*1248*/        OPC_EmitInteger, MVT::i32, 7, 
/*1251*/        OPC_EmitInteger, MVT::i32, 7, 
/*1254*/        OPC_EmitInteger, MVT::i32, 83, 
/*1257*/        OPC_EmitInteger, MVT::i32, 0, 
/*1260*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                    0/*#VTs*/, 9/*#Ops*/, 4, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_void 2598:iPTR, R600_Reg32:f32:$reg) - Complexity = 8
                // Dst: (EG_ExportSwz (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), R600_Reg32:f32:$reg, sub0:i32), 0:i32, 61:i32, 7:i32, 0:i32, 7:i32, 7:i32, 83:i32, 0:i32)
/*1275*/      0, /*End of Scope*/
/*1276*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 6|128,1/*134*/,  TARGET_VAL(AMDGPUISD::EXPORT),// ->1415
/*1281*/    OPC_RecordNode,   // #0 = 'EXPORT' chained node
/*1282*/    OPC_RecordChild1, // #1 = $src
/*1283*/    OPC_CheckChild1Type, MVT::v4f32,
/*1285*/    OPC_RecordChild2, // #2 = $base
/*1286*/    OPC_MoveChild, 2,
/*1288*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1291*/    OPC_CheckType, MVT::i32,
/*1293*/    OPC_MoveParent,
/*1294*/    OPC_RecordChild3, // #3 = $type
/*1295*/    OPC_MoveChild, 3,
/*1297*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1300*/    OPC_CheckType, MVT::i32,
/*1302*/    OPC_MoveParent,
/*1303*/    OPC_RecordChild4, // #4 = $swz_x
/*1304*/    OPC_MoveChild, 4,
/*1306*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1309*/    OPC_CheckType, MVT::i32,
/*1311*/    OPC_MoveParent,
/*1312*/    OPC_RecordChild5, // #5 = $swz_y
/*1313*/    OPC_MoveChild, 5,
/*1315*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1318*/    OPC_CheckType, MVT::i32,
/*1320*/    OPC_MoveParent,
/*1321*/    OPC_RecordChild6, // #6 = $swz_z
/*1322*/    OPC_MoveChild, 6,
/*1324*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1327*/    OPC_CheckType, MVT::i32,
/*1329*/    OPC_MoveParent,
/*1330*/    OPC_RecordChild7, // #7 = $swz_w
/*1331*/    OPC_MoveChild, 7,
/*1333*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1336*/    OPC_CheckType, MVT::i32,
/*1338*/    OPC_MoveParent,
/*1339*/    OPC_Scope, 36, /*->1377*/ // 2 children in Scope
/*1341*/      OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*1343*/      OPC_EmitMergeInputChains1_0,
/*1344*/      OPC_EmitConvertToTarget, 3,
/*1346*/      OPC_EmitConvertToTarget, 2,
/*1348*/      OPC_EmitConvertToTarget, 4,
/*1350*/      OPC_EmitConvertToTarget, 5,
/*1352*/      OPC_EmitConvertToTarget, 6,
/*1354*/      OPC_EmitConvertToTarget, 7,
/*1356*/      OPC_EmitInteger, MVT::i32, 39, 
/*1359*/      OPC_EmitInteger, MVT::i32, 0, 
/*1362*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (R600_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 39:i32, 0:i32)
/*1377*/    /*Scope*/ 36, /*->1414*/
/*1378*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1380*/      OPC_EmitMergeInputChains1_0,
/*1381*/      OPC_EmitConvertToTarget, 3,
/*1383*/      OPC_EmitConvertToTarget, 2,
/*1385*/      OPC_EmitConvertToTarget, 4,
/*1387*/      OPC_EmitConvertToTarget, 5,
/*1389*/      OPC_EmitConvertToTarget, 6,
/*1391*/      OPC_EmitConvertToTarget, 7,
/*1393*/      OPC_EmitInteger, MVT::i32, 83, 
/*1396*/      OPC_EmitInteger, MVT::i32, 0, 
/*1399*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EG_ExportSwz), 0|OPFL_Chain,
                  0/*#VTs*/, 9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
              // Src: (EXPORT R600_Reg128:v4f32:$src, (imm:i32):$base, (imm:i32):$type, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w) - Complexity = 21
              // Dst: (EG_ExportSwz R600_Reg128:v4f32:$src, (imm:i32):$type, (imm:i32):$base, (imm:i32):$swz_x, (imm:i32):$swz_y, (imm:i32):$swz_z, (imm:i32):$swz_w, 83:i32, 0:i32)
/*1414*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,5/*736*/,  TARGET_VAL(ISD::ADD),// ->2155
/*1419*/    OPC_Scope, 40|128,2/*296*/, /*->1718*/ // 2 children in Scope
/*1422*/      OPC_MoveChild, 0,
/*1424*/      OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*1427*/      OPC_RecordChild0, // #0 = $src0
/*1428*/      OPC_RecordChild1, // #1 = $src1
/*1429*/      OPC_MoveParent,
/*1430*/      OPC_RecordChild1, // #2 = $src2
/*1431*/      OPC_CheckType, MVT::i32,
/*1433*/      OPC_Scope, 105, /*->1540*/ // 3 children in Scope
/*1435*/        OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1437*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #3
/*1440*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #4
/*1443*/        OPC_EmitInteger, MVT::i32, 0, 
/*1446*/        OPC_EmitInteger, MVT::i32, 0, 
/*1449*/        OPC_EmitInteger, MVT::i32, 0, 
/*1452*/        OPC_EmitInteger, MVT::i32, 0, 
/*1455*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1467*/        OPC_EmitInteger, MVT::i32, 0, 
/*1470*/        OPC_EmitInteger, MVT::i32, 0, 
/*1473*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1485*/        OPC_EmitInteger, MVT::i32, 0, 
/*1488*/        OPC_EmitInteger, MVT::i32, 0, 
/*1491*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1503*/        OPC_EmitInteger, MVT::i32, 1, 
/*1506*/        OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1509*/        OPC_EmitInteger, MVT::i32, 0, 
/*1512*/        OPC_EmitInteger, MVT::i32, 0, 
/*1515*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_UINT24_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 2, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (add:i32 (mul:i32 U24:i32:$src0, U24:i32:$src1), i32:i32:$src2) - Complexity = 18
                // Dst: (MULADD_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1540*/      /*Scope*/ 105, /*->1646*/
/*1541*/        OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*1543*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #3
/*1546*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #4
/*1549*/        OPC_EmitInteger, MVT::i32, 0, 
/*1552*/        OPC_EmitInteger, MVT::i32, 0, 
/*1555*/        OPC_EmitInteger, MVT::i32, 0, 
/*1558*/        OPC_EmitInteger, MVT::i32, 0, 
/*1561*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1573*/        OPC_EmitInteger, MVT::i32, 0, 
/*1576*/        OPC_EmitInteger, MVT::i32, 0, 
/*1579*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1591*/        OPC_EmitInteger, MVT::i32, 0, 
/*1594*/        OPC_EmitInteger, MVT::i32, 0, 
/*1597*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1609*/        OPC_EmitInteger, MVT::i32, 1, 
/*1612*/        OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1615*/        OPC_EmitInteger, MVT::i32, 0, 
/*1618*/        OPC_EmitInteger, MVT::i32, 0, 
/*1621*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_INT24_cm), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 2, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (add:i32 (mul:i32 I24:i32:$src0, I24:i32:$src1), i32:i32:$src2) - Complexity = 18
                // Dst: (MULADD_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1646*/      /*Scope*/ 70, /*->1717*/
/*1647*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*1649*/        OPC_Scope, 32, /*->1683*/ // 2 children in Scope
/*1651*/          OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #3
/*1654*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #4
/*1657*/          OPC_EmitInteger, MVT::i32, 0, 
/*1660*/          OPC_EmitInteger, MVT::i32, 0, 
/*1663*/          OPC_EmitInteger, MVT::i32, 0, 
/*1666*/          OPC_EmitInteger, MVT::i32, 0, 
/*1669*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_I32_I24), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 2, 5, 6, 7, 8, 
                  // Src: (add:i32 (mul:i32 I24:i32:$src0, I24:i32:$src1), i32:i32:$src2) - Complexity = 18
                  // Dst: (V_MAD_I32_I24:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1683*/        /*Scope*/ 32, /*->1716*/
/*1684*/          OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #3
/*1687*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #4
/*1690*/          OPC_EmitInteger, MVT::i32, 0, 
/*1693*/          OPC_EmitInteger, MVT::i32, 0, 
/*1696*/          OPC_EmitInteger, MVT::i32, 0, 
/*1699*/          OPC_EmitInteger, MVT::i32, 0, 
/*1702*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_U32_U24), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 2, 5, 6, 7, 8, 
                  // Src: (add:i32 (mul:i32 U24:i32:$src0, U24:i32:$src1), i32:i32:$src2) - Complexity = 18
                  // Dst: (V_MAD_U32_U24:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1716*/        0, /*End of Scope*/
/*1717*/      0, /*End of Scope*/
/*1718*/    /*Scope*/ 50|128,3/*434*/, /*->2154*/
/*1720*/      OPC_RecordChild0, // #0 = $src2
/*1721*/      OPC_Scope, 39|128,2/*295*/, /*->2019*/ // 2 children in Scope
/*1724*/        OPC_MoveChild, 1,
/*1726*/        OPC_CheckOpcode, TARGET_VAL(ISD::MUL),
/*1729*/        OPC_RecordChild0, // #1 = $src0
/*1730*/        OPC_RecordChild1, // #2 = $src1
/*1731*/        OPC_MoveParent,
/*1732*/        OPC_CheckType, MVT::i32,
/*1734*/        OPC_Scope, 105, /*->1841*/ // 3 children in Scope
/*1736*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*1738*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src0 #3
/*1741*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectU24:$src1 #4
/*1744*/          OPC_EmitInteger, MVT::i32, 0, 
/*1747*/          OPC_EmitInteger, MVT::i32, 0, 
/*1750*/          OPC_EmitInteger, MVT::i32, 0, 
/*1753*/          OPC_EmitInteger, MVT::i32, 0, 
/*1756*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1768*/          OPC_EmitInteger, MVT::i32, 0, 
/*1771*/          OPC_EmitInteger, MVT::i32, 0, 
/*1774*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1786*/          OPC_EmitInteger, MVT::i32, 0, 
/*1789*/          OPC_EmitInteger, MVT::i32, 0, 
/*1792*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1804*/          OPC_EmitInteger, MVT::i32, 1, 
/*1807*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1810*/          OPC_EmitInteger, MVT::i32, 0, 
/*1813*/          OPC_EmitInteger, MVT::i32, 0, 
/*1816*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_UINT24_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 i32:i32:$src2, (mul:i32 U24:i32:$src0, U24:i32:$src1)) - Complexity = 18
                  // Dst: (MULADD_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*1841*/        /*Scope*/ 105, /*->1947*/
/*1842*/          OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*1844*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src0 #3
/*1847*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectI24:$src1 #4
/*1850*/          OPC_EmitInteger, MVT::i32, 0, 
/*1853*/          OPC_EmitInteger, MVT::i32, 0, 
/*1856*/          OPC_EmitInteger, MVT::i32, 0, 
/*1859*/          OPC_EmitInteger, MVT::i32, 0, 
/*1862*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1874*/          OPC_EmitInteger, MVT::i32, 0, 
/*1877*/          OPC_EmitInteger, MVT::i32, 0, 
/*1880*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1892*/          OPC_EmitInteger, MVT::i32, 0, 
/*1895*/          OPC_EmitInteger, MVT::i32, 0, 
/*1898*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1910*/          OPC_EmitInteger, MVT::i32, 1, 
/*1913*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*1916*/          OPC_EmitInteger, MVT::i32, 0, 
/*1919*/          OPC_EmitInteger, MVT::i32, 0, 
/*1922*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_INT24_cm), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 5, 6, 3, 7, 8, 9, 4, 10, 11, 12, 0, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 i32:i32:$src2, (mul:i32 I24:i32:$src0, I24:i32:$src1)) - Complexity = 18
                  // Dst: (MULADD_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1947*/        /*Scope*/ 70, /*->2018*/
/*1948*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*1950*/          OPC_Scope, 32, /*->1984*/ // 2 children in Scope
/*1952*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src0 #3
/*1955*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectI24:$src1 #4
/*1958*/            OPC_EmitInteger, MVT::i32, 0, 
/*1961*/            OPC_EmitInteger, MVT::i32, 0, 
/*1964*/            OPC_EmitInteger, MVT::i32, 0, 
/*1967*/            OPC_EmitInteger, MVT::i32, 0, 
/*1970*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_I32_I24), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 0, 5, 6, 7, 8, 
                    // Src: (add:i32 i32:i32:$src2, (mul:i32 I24:i32:$src0, I24:i32:$src1)) - Complexity = 18
                    // Dst: (V_MAD_I32_I24:i32 I24:i32:$src0, I24:i32:$src1, i32:i32:$src2)
/*1984*/          /*Scope*/ 32, /*->2017*/
/*1985*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src0 #3
/*1988*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectU24:$src1 #4
/*1991*/            OPC_EmitInteger, MVT::i32, 0, 
/*1994*/            OPC_EmitInteger, MVT::i32, 0, 
/*1997*/            OPC_EmitInteger, MVT::i32, 0, 
/*2000*/            OPC_EmitInteger, MVT::i32, 0, 
/*2003*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_U32_U24), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 4, 0, 5, 6, 7, 8, 
                    // Src: (add:i32 i32:i32:$src2, (mul:i32 U24:i32:$src0, U24:i32:$src1)) - Complexity = 18
                    // Dst: (V_MAD_U32_U24:i32 U24:i32:$src0, U24:i32:$src1, i32:i32:$src2)
/*2017*/          0, /*End of Scope*/
/*2018*/        0, /*End of Scope*/
/*2019*/      /*Scope*/ 4|128,1/*132*/, /*->2153*/
/*2021*/        OPC_RecordChild1, // #1 = $src1
/*2022*/        OPC_CheckType, MVT::i32,
/*2024*/        OPC_Scope, 101, /*->2127*/ // 2 children in Scope
/*2026*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2028*/          OPC_EmitInteger, MVT::i32, 0, 
/*2031*/          OPC_EmitInteger, MVT::i32, 0, 
/*2034*/          OPC_EmitInteger, MVT::i32, 1, 
/*2037*/          OPC_EmitInteger, MVT::i32, 0, 
/*2040*/          OPC_EmitInteger, MVT::i32, 0, 
/*2043*/          OPC_EmitInteger, MVT::i32, 0, 
/*2046*/          OPC_EmitInteger, MVT::i32, 0, 
/*2049*/          OPC_EmitInteger, MVT::i32, 0, 
/*2052*/          OPC_EmitInteger, MVT::i32, 0, 
/*2055*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2067*/          OPC_EmitInteger, MVT::i32, 0, 
/*2070*/          OPC_EmitInteger, MVT::i32, 0, 
/*2073*/          OPC_EmitInteger, MVT::i32, 0, 
/*2076*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2088*/          OPC_EmitInteger, MVT::i32, 1, 
/*2091*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2094*/          OPC_EmitInteger, MVT::i32, 0, 
/*2097*/          OPC_EmitInteger, MVT::i32, 0, 
/*2100*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (ADD_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*2127*/        /*Scope*/ 24, /*->2152*/
/*2128*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2130*/          OPC_Scope, 9, /*->2141*/ // 2 children in Scope
/*2132*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1) - Complexity = 3
                    // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*2141*/          /*Scope*/ 9, /*->2151*/
/*2142*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_I32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 VReg_32:i32:$src1, VSrc_32:i32:$src0) - Complexity = 3
                    // Dst: (V_ADD_I32_e32:i32 VSrc_32:i32:$src0, VReg_32:i32:$src1)
/*2151*/          0, /*End of Scope*/
/*2152*/        0, /*End of Scope*/
/*2153*/      0, /*End of Scope*/
/*2154*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35|128,45/*5795*/,  TARGET_VAL(ISD::OR),// ->7954
/*2159*/    OPC_Scope, 22|128,44/*5654*/, /*->7816*/ // 2 children in Scope
/*2162*/      OPC_MoveChild, 0,
/*2164*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2167*/      OPC_Scope, 72|128,3/*456*/, /*->2626*/ // 8 children in Scope
/*2170*/        OPC_RecordChild0, // #0 = $y
/*2171*/        OPC_Scope, 89|128,2/*345*/, /*->2519*/ // 2 children in Scope
/*2174*/          OPC_RecordChild1, // #1 = $x
/*2175*/          OPC_MoveParent,
/*2176*/          OPC_MoveChild, 1,
/*2178*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2181*/          OPC_Scope, 32|128,1/*160*/, /*->2344*/ // 4 children in Scope
/*2184*/            OPC_RecordChild0, // #2 = $z
/*2185*/            OPC_MoveChild, 1,
/*2187*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2190*/            OPC_MoveChild, 0,
/*2192*/            OPC_CheckSame, 1,
/*2194*/            OPC_MoveParent,
/*2195*/            OPC_MoveChild, 1,
/*2197*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2208*/            OPC_MoveParent,
/*2209*/            OPC_MoveParent,
/*2210*/            OPC_MoveParent,
/*2211*/            OPC_CheckType, MVT::i32,
/*2213*/            OPC_Scope, 99, /*->2314*/ // 2 children in Scope
/*2215*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2217*/              OPC_EmitInteger, MVT::i32, 0, 
/*2220*/              OPC_EmitInteger, MVT::i32, 0, 
/*2223*/              OPC_EmitInteger, MVT::i32, 0, 
/*2226*/              OPC_EmitInteger, MVT::i32, 0, 
/*2229*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2241*/              OPC_EmitInteger, MVT::i32, 0, 
/*2244*/              OPC_EmitInteger, MVT::i32, 0, 
/*2247*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2259*/              OPC_EmitInteger, MVT::i32, 0, 
/*2262*/              OPC_EmitInteger, MVT::i32, 0, 
/*2265*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2277*/              OPC_EmitInteger, MVT::i32, 1, 
/*2280*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2283*/              OPC_EmitInteger, MVT::i32, 0, 
/*2286*/              OPC_EmitInteger, MVT::i32, 0, 
/*2289*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2314*/            /*Scope*/ 28, /*->2343*/
/*2315*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2317*/              OPC_EmitInteger, MVT::i32, 0, 
/*2320*/              OPC_EmitInteger, MVT::i32, 0, 
/*2323*/              OPC_EmitInteger, MVT::i32, 0, 
/*2326*/              OPC_EmitInteger, MVT::i32, 0, 
/*2329*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                      // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2343*/            0, /*End of Scope*/
/*2344*/          /*Scope*/ 57, /*->2402*/
/*2345*/            OPC_MoveChild, 0,
/*2347*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2350*/            OPC_MoveChild, 0,
/*2352*/            OPC_CheckSame, 1,
/*2354*/            OPC_MoveParent,
/*2355*/            OPC_MoveChild, 1,
/*2357*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2368*/            OPC_MoveParent,
/*2369*/            OPC_MoveParent,
/*2370*/            OPC_RecordChild1, // #2 = $z
/*2371*/            OPC_MoveParent,
/*2372*/            OPC_CheckType, MVT::i32,
/*2374*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2376*/            OPC_EmitInteger, MVT::i32, 0, 
/*2379*/            OPC_EmitInteger, MVT::i32, 0, 
/*2382*/            OPC_EmitInteger, MVT::i32, 0, 
/*2385*/            OPC_EmitInteger, MVT::i32, 0, 
/*2388*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 0, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2402*/          /*Scope*/ 57, /*->2460*/
/*2403*/            OPC_RecordChild0, // #2 = $z
/*2404*/            OPC_MoveChild, 1,
/*2406*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2409*/            OPC_MoveChild, 0,
/*2411*/            OPC_CheckSame, 0,
/*2413*/            OPC_MoveParent,
/*2414*/            OPC_MoveChild, 1,
/*2416*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2427*/            OPC_MoveParent,
/*2428*/            OPC_MoveParent,
/*2429*/            OPC_MoveParent,
/*2430*/            OPC_CheckType, MVT::i32,
/*2432*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2434*/            OPC_EmitInteger, MVT::i32, 0, 
/*2437*/            OPC_EmitInteger, MVT::i32, 0, 
/*2440*/            OPC_EmitInteger, MVT::i32, 0, 
/*2443*/            OPC_EmitInteger, MVT::i32, 0, 
/*2446*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2460*/          /*Scope*/ 57, /*->2518*/
/*2461*/            OPC_MoveChild, 0,
/*2463*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2466*/            OPC_MoveChild, 0,
/*2468*/            OPC_CheckSame, 0,
/*2470*/            OPC_MoveParent,
/*2471*/            OPC_MoveChild, 1,
/*2473*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2484*/            OPC_MoveParent,
/*2485*/            OPC_MoveParent,
/*2486*/            OPC_RecordChild1, // #2 = $z
/*2487*/            OPC_MoveParent,
/*2488*/            OPC_CheckType, MVT::i32,
/*2490*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2492*/            OPC_EmitInteger, MVT::i32, 0, 
/*2495*/            OPC_EmitInteger, MVT::i32, 0, 
/*2498*/            OPC_EmitInteger, MVT::i32, 0, 
/*2501*/            OPC_EmitInteger, MVT::i32, 0, 
/*2504*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2518*/          0, /*End of Scope*/
/*2519*/        /*Scope*/ 105, /*->2625*/
/*2520*/          OPC_MoveChild, 1,
/*2522*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2525*/          OPC_RecordChild0, // #1 = $x
/*2526*/          OPC_MoveChild, 1,
/*2528*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2539*/          OPC_MoveParent,
/*2540*/          OPC_MoveParent,
/*2541*/          OPC_MoveParent,
/*2542*/          OPC_MoveChild, 1,
/*2544*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2547*/          OPC_Scope, 37, /*->2586*/ // 2 children in Scope
/*2549*/            OPC_RecordChild0, // #2 = $y
/*2550*/            OPC_MoveChild, 1,
/*2552*/            OPC_CheckSame, 1,
/*2554*/            OPC_MoveParent,
/*2555*/            OPC_MoveParent,
/*2556*/            OPC_CheckType, MVT::i32,
/*2558*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2560*/            OPC_EmitInteger, MVT::i32, 0, 
/*2563*/            OPC_EmitInteger, MVT::i32, 0, 
/*2566*/            OPC_EmitInteger, MVT::i32, 0, 
/*2569*/            OPC_EmitInteger, MVT::i32, 0, 
/*2572*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2586*/          /*Scope*/ 37, /*->2624*/
/*2587*/            OPC_MoveChild, 0,
/*2589*/            OPC_CheckSame, 1,
/*2591*/            OPC_MoveParent,
/*2592*/            OPC_RecordChild1, // #2 = $y
/*2593*/            OPC_MoveParent,
/*2594*/            OPC_CheckType, MVT::i32,
/*2596*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2598*/            OPC_EmitInteger, MVT::i32, 0, 
/*2601*/            OPC_EmitInteger, MVT::i32, 0, 
/*2604*/            OPC_EmitInteger, MVT::i32, 0, 
/*2607*/            OPC_EmitInteger, MVT::i32, 0, 
/*2610*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2624*/          0, /*End of Scope*/
/*2625*/        0, /*End of Scope*/
/*2626*/      /*Scope*/ 106, /*->2733*/
/*2627*/        OPC_MoveChild, 0,
/*2629*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2632*/        OPC_RecordChild0, // #0 = $x
/*2633*/        OPC_MoveChild, 1,
/*2635*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2646*/        OPC_MoveParent,
/*2647*/        OPC_MoveParent,
/*2648*/        OPC_RecordChild1, // #1 = $z
/*2649*/        OPC_MoveParent,
/*2650*/        OPC_MoveChild, 1,
/*2652*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2655*/        OPC_Scope, 37, /*->2694*/ // 2 children in Scope
/*2657*/          OPC_RecordChild0, // #2 = $y
/*2658*/          OPC_MoveChild, 1,
/*2660*/          OPC_CheckSame, 0,
/*2662*/          OPC_MoveParent,
/*2663*/          OPC_MoveParent,
/*2664*/          OPC_CheckType, MVT::i32,
/*2666*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2668*/          OPC_EmitInteger, MVT::i32, 0, 
/*2671*/          OPC_EmitInteger, MVT::i32, 0, 
/*2674*/          OPC_EmitInteger, MVT::i32, 0, 
/*2677*/          OPC_EmitInteger, MVT::i32, 0, 
/*2680*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2694*/        /*Scope*/ 37, /*->2732*/
/*2695*/          OPC_MoveChild, 0,
/*2697*/          OPC_CheckSame, 0,
/*2699*/          OPC_MoveParent,
/*2700*/          OPC_RecordChild1, // #2 = $y
/*2701*/          OPC_MoveParent,
/*2702*/          OPC_CheckType, MVT::i32,
/*2704*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*2706*/          OPC_EmitInteger, MVT::i32, 0, 
/*2709*/          OPC_EmitInteger, MVT::i32, 0, 
/*2712*/          OPC_EmitInteger, MVT::i32, 0, 
/*2715*/          OPC_EmitInteger, MVT::i32, 0, 
/*2718*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2732*/        0, /*End of Scope*/
/*2733*/      /*Scope*/ 13|128,5/*653*/, /*->3388*/
/*2735*/        OPC_RecordChild0, // #0 = $y
/*2736*/        OPC_Scope, 15|128,3/*399*/, /*->3138*/ // 2 children in Scope
/*2739*/          OPC_RecordChild1, // #1 = $x
/*2740*/          OPC_MoveParent,
/*2741*/          OPC_MoveChild, 1,
/*2743*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*2746*/          OPC_Scope, 0|128,1/*128*/, /*->2877*/ // 3 children in Scope
/*2749*/            OPC_MoveChild, 0,
/*2751*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2754*/            OPC_MoveChild, 0,
/*2756*/            OPC_CheckSame, 1,
/*2758*/            OPC_MoveParent,
/*2759*/            OPC_MoveChild, 1,
/*2761*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2772*/            OPC_MoveParent,
/*2773*/            OPC_MoveParent,
/*2774*/            OPC_RecordChild1, // #2 = $z
/*2775*/            OPC_MoveParent,
/*2776*/            OPC_CheckType, MVT::i32,
/*2778*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2780*/            OPC_EmitInteger, MVT::i32, 0, 
/*2783*/            OPC_EmitInteger, MVT::i32, 0, 
/*2786*/            OPC_EmitInteger, MVT::i32, 0, 
/*2789*/            OPC_EmitInteger, MVT::i32, 0, 
/*2792*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2804*/            OPC_EmitInteger, MVT::i32, 0, 
/*2807*/            OPC_EmitInteger, MVT::i32, 0, 
/*2810*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2822*/            OPC_EmitInteger, MVT::i32, 0, 
/*2825*/            OPC_EmitInteger, MVT::i32, 0, 
/*2828*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2840*/            OPC_EmitInteger, MVT::i32, 1, 
/*2843*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2846*/            OPC_EmitInteger, MVT::i32, 0, 
/*2849*/            OPC_EmitInteger, MVT::i32, 0, 
/*2852*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, i32:i32:$x), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*2877*/          /*Scope*/ 0|128,1/*128*/, /*->3007*/
/*2879*/            OPC_RecordChild0, // #2 = $z
/*2880*/            OPC_MoveChild, 1,
/*2882*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2885*/            OPC_MoveChild, 0,
/*2887*/            OPC_CheckSame, 0,
/*2889*/            OPC_MoveParent,
/*2890*/            OPC_MoveChild, 1,
/*2892*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2903*/            OPC_MoveParent,
/*2904*/            OPC_MoveParent,
/*2905*/            OPC_MoveParent,
/*2906*/            OPC_CheckType, MVT::i32,
/*2908*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*2910*/            OPC_EmitInteger, MVT::i32, 0, 
/*2913*/            OPC_EmitInteger, MVT::i32, 0, 
/*2916*/            OPC_EmitInteger, MVT::i32, 0, 
/*2919*/            OPC_EmitInteger, MVT::i32, 0, 
/*2922*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2934*/            OPC_EmitInteger, MVT::i32, 0, 
/*2937*/            OPC_EmitInteger, MVT::i32, 0, 
/*2940*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2952*/            OPC_EmitInteger, MVT::i32, 0, 
/*2955*/            OPC_EmitInteger, MVT::i32, 0, 
/*2958*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2970*/            OPC_EmitInteger, MVT::i32, 1, 
/*2973*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*2976*/            OPC_EmitInteger, MVT::i32, 0, 
/*2979*/            OPC_EmitInteger, MVT::i32, 0, 
/*2982*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32))) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3007*/          /*Scope*/ 0|128,1/*128*/, /*->3137*/
/*3009*/            OPC_MoveChild, 0,
/*3011*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3014*/            OPC_MoveChild, 0,
/*3016*/            OPC_CheckSame, 0,
/*3018*/            OPC_MoveParent,
/*3019*/            OPC_MoveChild, 1,
/*3021*/            OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3032*/            OPC_MoveParent,
/*3033*/            OPC_MoveParent,
/*3034*/            OPC_RecordChild1, // #2 = $z
/*3035*/            OPC_MoveParent,
/*3036*/            OPC_CheckType, MVT::i32,
/*3038*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3040*/            OPC_EmitInteger, MVT::i32, 0, 
/*3043*/            OPC_EmitInteger, MVT::i32, 0, 
/*3046*/            OPC_EmitInteger, MVT::i32, 0, 
/*3049*/            OPC_EmitInteger, MVT::i32, 0, 
/*3052*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3064*/            OPC_EmitInteger, MVT::i32, 0, 
/*3067*/            OPC_EmitInteger, MVT::i32, 0, 
/*3070*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3082*/            OPC_EmitInteger, MVT::i32, 0, 
/*3085*/            OPC_EmitInteger, MVT::i32, 0, 
/*3088*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3100*/            OPC_EmitInteger, MVT::i32, 1, 
/*3103*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3106*/            OPC_EmitInteger, MVT::i32, 0, 
/*3109*/            OPC_EmitInteger, MVT::i32, 0, 
/*3112*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$y), (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3137*/          0, /*End of Scope*/
/*3138*/        /*Scope*/ 119|128,1/*247*/, /*->3387*/
/*3140*/          OPC_MoveChild, 1,
/*3142*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3145*/          OPC_RecordChild0, // #1 = $x
/*3146*/          OPC_MoveChild, 1,
/*3148*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3159*/          OPC_MoveParent,
/*3160*/          OPC_MoveParent,
/*3161*/          OPC_MoveParent,
/*3162*/          OPC_MoveChild, 1,
/*3164*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3167*/          OPC_Scope, 108, /*->3277*/ // 2 children in Scope
/*3169*/            OPC_RecordChild0, // #2 = $y
/*3170*/            OPC_MoveChild, 1,
/*3172*/            OPC_CheckSame, 1,
/*3174*/            OPC_MoveParent,
/*3175*/            OPC_MoveParent,
/*3176*/            OPC_CheckType, MVT::i32,
/*3178*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3180*/            OPC_EmitInteger, MVT::i32, 0, 
/*3183*/            OPC_EmitInteger, MVT::i32, 0, 
/*3186*/            OPC_EmitInteger, MVT::i32, 0, 
/*3189*/            OPC_EmitInteger, MVT::i32, 0, 
/*3192*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3204*/            OPC_EmitInteger, MVT::i32, 0, 
/*3207*/            OPC_EmitInteger, MVT::i32, 0, 
/*3210*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3222*/            OPC_EmitInteger, MVT::i32, 0, 
/*3225*/            OPC_EmitInteger, MVT::i32, 0, 
/*3228*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3240*/            OPC_EmitInteger, MVT::i32, 1, 
/*3243*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3246*/            OPC_EmitInteger, MVT::i32, 0, 
/*3249*/            OPC_EmitInteger, MVT::i32, 0, 
/*3252*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3277*/          /*Scope*/ 108, /*->3386*/
/*3278*/            OPC_MoveChild, 0,
/*3280*/            OPC_CheckSame, 1,
/*3282*/            OPC_MoveParent,
/*3283*/            OPC_RecordChild1, // #2 = $y
/*3284*/            OPC_MoveParent,
/*3285*/            OPC_CheckType, MVT::i32,
/*3287*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3289*/            OPC_EmitInteger, MVT::i32, 0, 
/*3292*/            OPC_EmitInteger, MVT::i32, 0, 
/*3295*/            OPC_EmitInteger, MVT::i32, 0, 
/*3298*/            OPC_EmitInteger, MVT::i32, 0, 
/*3301*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3313*/            OPC_EmitInteger, MVT::i32, 0, 
/*3316*/            OPC_EmitInteger, MVT::i32, 0, 
/*3319*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3331*/            OPC_EmitInteger, MVT::i32, 0, 
/*3334*/            OPC_EmitInteger, MVT::i32, 0, 
/*3337*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3349*/            OPC_EmitInteger, MVT::i32, 1, 
/*3352*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3355*/            OPC_EmitInteger, MVT::i32, 0, 
/*3358*/            OPC_EmitInteger, MVT::i32, 0, 
/*3361*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:i32 (and:i32 i32:i32:$z, (xor:i32 i32:i32:$x, -1:i32)), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3386*/          0, /*End of Scope*/
/*3387*/        0, /*End of Scope*/
/*3388*/      /*Scope*/ 120|128,1/*248*/, /*->3638*/
/*3390*/        OPC_MoveChild, 0,
/*3392*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3395*/        OPC_RecordChild0, // #0 = $x
/*3396*/        OPC_MoveChild, 1,
/*3398*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3409*/        OPC_MoveParent,
/*3410*/        OPC_MoveParent,
/*3411*/        OPC_RecordChild1, // #1 = $z
/*3412*/        OPC_MoveParent,
/*3413*/        OPC_MoveChild, 1,
/*3415*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3418*/        OPC_Scope, 108, /*->3528*/ // 2 children in Scope
/*3420*/          OPC_RecordChild0, // #2 = $y
/*3421*/          OPC_MoveChild, 1,
/*3423*/          OPC_CheckSame, 0,
/*3425*/          OPC_MoveParent,
/*3426*/          OPC_MoveParent,
/*3427*/          OPC_CheckType, MVT::i32,
/*3429*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3431*/          OPC_EmitInteger, MVT::i32, 0, 
/*3434*/          OPC_EmitInteger, MVT::i32, 0, 
/*3437*/          OPC_EmitInteger, MVT::i32, 0, 
/*3440*/          OPC_EmitInteger, MVT::i32, 0, 
/*3443*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3455*/          OPC_EmitInteger, MVT::i32, 0, 
/*3458*/          OPC_EmitInteger, MVT::i32, 0, 
/*3461*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3473*/          OPC_EmitInteger, MVT::i32, 0, 
/*3476*/          OPC_EmitInteger, MVT::i32, 0, 
/*3479*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3491*/          OPC_EmitInteger, MVT::i32, 1, 
/*3494*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3497*/          OPC_EmitInteger, MVT::i32, 0, 
/*3500*/          OPC_EmitInteger, MVT::i32, 0, 
/*3503*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$y, i32:i32:$x)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3528*/        /*Scope*/ 108, /*->3637*/
/*3529*/          OPC_MoveChild, 0,
/*3531*/          OPC_CheckSame, 0,
/*3533*/          OPC_MoveParent,
/*3534*/          OPC_RecordChild1, // #2 = $y
/*3535*/          OPC_MoveParent,
/*3536*/          OPC_CheckType, MVT::i32,
/*3538*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3540*/          OPC_EmitInteger, MVT::i32, 0, 
/*3543*/          OPC_EmitInteger, MVT::i32, 0, 
/*3546*/          OPC_EmitInteger, MVT::i32, 0, 
/*3549*/          OPC_EmitInteger, MVT::i32, 0, 
/*3552*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3564*/          OPC_EmitInteger, MVT::i32, 0, 
/*3567*/          OPC_EmitInteger, MVT::i32, 0, 
/*3570*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3582*/          OPC_EmitInteger, MVT::i32, 0, 
/*3585*/          OPC_EmitInteger, MVT::i32, 0, 
/*3588*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3600*/          OPC_EmitInteger, MVT::i32, 1, 
/*3603*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3606*/          OPC_EmitInteger, MVT::i32, 0, 
/*3609*/          OPC_EmitInteger, MVT::i32, 0, 
/*3612*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (or:i32 (and:i32 (xor:i32 i32:i32:$x, -1:i32), i32:i32:$z), (and:i32 i32:i32:$x, i32:i32:$y)) - Complexity = 17
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*3637*/        0, /*End of Scope*/
/*3638*/      /*Scope*/ 103|128,6/*871*/, /*->4511*/
/*3640*/        OPC_RecordChild0, // #0 = $x
/*3641*/        OPC_Scope, 20|128,5/*660*/, /*->4304*/ // 2 children in Scope
/*3644*/          OPC_RecordChild1, // #1 = $z
/*3645*/          OPC_MoveParent,
/*3646*/          OPC_MoveChild, 1,
/*3648*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3651*/          OPC_Scope, 58|128,2/*314*/, /*->3968*/ // 4 children in Scope
/*3654*/            OPC_RecordChild0, // #2 = $y
/*3655*/            OPC_MoveChild, 1,
/*3657*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3660*/            OPC_MoveChild, 0,
/*3662*/            OPC_Scope, 124|128,1/*252*/, /*->3917*/ // 2 children in Scope
/*3665*/              OPC_CheckSame, 0,
/*3667*/              OPC_MoveParent,
/*3668*/              OPC_MoveChild, 1,
/*3670*/              OPC_CheckSame, 1,
/*3672*/              OPC_MoveParent,
/*3673*/              OPC_MoveParent,
/*3674*/              OPC_MoveParent,
/*3675*/              OPC_CheckType, MVT::i32,
/*3677*/              OPC_Scope, 70|128,1/*198*/, /*->3878*/ // 2 children in Scope
/*3680*/                OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*3682*/                OPC_EmitInteger, MVT::i32, 0, 
/*3685*/                OPC_EmitInteger, MVT::i32, 0, 
/*3688*/                OPC_EmitInteger, MVT::i32, 0, 
/*3691*/                OPC_EmitInteger, MVT::i32, 0, 
/*3694*/                OPC_EmitInteger, MVT::i32, 1, 
/*3697*/                OPC_EmitInteger, MVT::i32, 0, 
/*3700*/                OPC_EmitInteger, MVT::i32, 0, 
/*3703*/                OPC_EmitInteger, MVT::i32, 0, 
/*3706*/                OPC_EmitInteger, MVT::i32, 0, 
/*3709*/                OPC_EmitInteger, MVT::i32, 0, 
/*3712*/                OPC_EmitInteger, MVT::i32, 0, 
/*3715*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3727*/                OPC_EmitInteger, MVT::i32, 0, 
/*3730*/                OPC_EmitInteger, MVT::i32, 0, 
/*3733*/                OPC_EmitInteger, MVT::i32, 0, 
/*3736*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3748*/                OPC_EmitInteger, MVT::i32, 1, 
/*3751*/                OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3754*/                OPC_EmitInteger, MVT::i32, 0, 
/*3757*/                OPC_EmitInteger, MVT::i32, 0, 
/*3760*/                OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                            1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*3787*/                OPC_EmitInteger, MVT::i32, 0, 
/*3790*/                OPC_EmitInteger, MVT::i32, 0, 
/*3793*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3805*/                OPC_EmitInteger, MVT::i32, 0, 
/*3808*/                OPC_EmitInteger, MVT::i32, 0, 
/*3811*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3823*/                OPC_EmitInteger, MVT::i32, 0, 
/*3826*/                OPC_EmitInteger, MVT::i32, 0, 
/*3829*/                OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3841*/                OPC_EmitInteger, MVT::i32, 1, 
/*3844*/                OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*3847*/                OPC_EmitInteger, MVT::i32, 0, 
/*3850*/                OPC_EmitInteger, MVT::i32, 0, 
/*3853*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                            1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3878*/              /*Scope*/ 37, /*->3916*/
/*3879*/                OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3881*/                OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3890*/                OPC_EmitInteger, MVT::i32, 0, 
/*3893*/                OPC_EmitInteger, MVT::i32, 0, 
/*3896*/                OPC_EmitInteger, MVT::i32, 0, 
/*3899*/                OPC_EmitInteger, MVT::i32, 0, 
/*3902*/                OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                            1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                        // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                        // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3916*/              0, /*End of Scope*/
/*3917*/            /*Scope*/ 49, /*->3967*/
/*3918*/              OPC_CheckSame, 1,
/*3920*/              OPC_MoveParent,
/*3921*/              OPC_MoveChild, 1,
/*3923*/              OPC_CheckSame, 0,
/*3925*/              OPC_MoveParent,
/*3926*/              OPC_MoveParent,
/*3927*/              OPC_MoveParent,
/*3928*/              OPC_CheckType, MVT::i32,
/*3930*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3932*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*3941*/              OPC_EmitInteger, MVT::i32, 0, 
/*3944*/              OPC_EmitInteger, MVT::i32, 0, 
/*3947*/              OPC_EmitInteger, MVT::i32, 0, 
/*3950*/              OPC_EmitInteger, MVT::i32, 0, 
/*3953*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*3967*/            0, /*End of Scope*/
/*3968*/          /*Scope*/ 111, /*->4080*/
/*3969*/            OPC_MoveChild, 0,
/*3971*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*3974*/            OPC_MoveChild, 0,
/*3976*/            OPC_Scope, 50, /*->4028*/ // 2 children in Scope
/*3978*/              OPC_CheckSame, 0,
/*3980*/              OPC_MoveParent,
/*3981*/              OPC_MoveChild, 1,
/*3983*/              OPC_CheckSame, 1,
/*3985*/              OPC_MoveParent,
/*3986*/              OPC_MoveParent,
/*3987*/              OPC_RecordChild1, // #2 = $y
/*3988*/              OPC_MoveParent,
/*3989*/              OPC_CheckType, MVT::i32,
/*3991*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*3993*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4002*/              OPC_EmitInteger, MVT::i32, 0, 
/*4005*/              OPC_EmitInteger, MVT::i32, 0, 
/*4008*/              OPC_EmitInteger, MVT::i32, 0, 
/*4011*/              OPC_EmitInteger, MVT::i32, 0, 
/*4014*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4028*/            /*Scope*/ 50, /*->4079*/
/*4029*/              OPC_CheckSame, 1,
/*4031*/              OPC_MoveParent,
/*4032*/              OPC_MoveChild, 1,
/*4034*/              OPC_CheckSame, 0,
/*4036*/              OPC_MoveParent,
/*4037*/              OPC_MoveParent,
/*4038*/              OPC_RecordChild1, // #2 = $y
/*4039*/              OPC_MoveParent,
/*4040*/              OPC_CheckType, MVT::i32,
/*4042*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4044*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4053*/              OPC_EmitInteger, MVT::i32, 0, 
/*4056*/              OPC_EmitInteger, MVT::i32, 0, 
/*4059*/              OPC_EmitInteger, MVT::i32, 0, 
/*4062*/              OPC_EmitInteger, MVT::i32, 0, 
/*4065*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4079*/            0, /*End of Scope*/
/*4080*/          /*Scope*/ 110, /*->4191*/
/*4081*/            OPC_RecordChild0, // #2 = $y
/*4082*/            OPC_MoveChild, 1,
/*4084*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4087*/            OPC_MoveChild, 0,
/*4089*/            OPC_Scope, 49, /*->4140*/ // 2 children in Scope
/*4091*/              OPC_CheckSame, 1,
/*4093*/              OPC_MoveParent,
/*4094*/              OPC_MoveChild, 1,
/*4096*/              OPC_CheckSame, 0,
/*4098*/              OPC_MoveParent,
/*4099*/              OPC_MoveParent,
/*4100*/              OPC_MoveParent,
/*4101*/              OPC_CheckType, MVT::i32,
/*4103*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4105*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4114*/              OPC_EmitInteger, MVT::i32, 0, 
/*4117*/              OPC_EmitInteger, MVT::i32, 0, 
/*4120*/              OPC_EmitInteger, MVT::i32, 0, 
/*4123*/              OPC_EmitInteger, MVT::i32, 0, 
/*4126*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4140*/            /*Scope*/ 49, /*->4190*/
/*4141*/              OPC_CheckSame, 0,
/*4143*/              OPC_MoveParent,
/*4144*/              OPC_MoveChild, 1,
/*4146*/              OPC_CheckSame, 1,
/*4148*/              OPC_MoveParent,
/*4149*/              OPC_MoveParent,
/*4150*/              OPC_MoveParent,
/*4151*/              OPC_CheckType, MVT::i32,
/*4153*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4155*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4164*/              OPC_EmitInteger, MVT::i32, 0, 
/*4167*/              OPC_EmitInteger, MVT::i32, 0, 
/*4170*/              OPC_EmitInteger, MVT::i32, 0, 
/*4173*/              OPC_EmitInteger, MVT::i32, 0, 
/*4176*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4190*/            0, /*End of Scope*/
/*4191*/          /*Scope*/ 111, /*->4303*/
/*4192*/            OPC_MoveChild, 0,
/*4194*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4197*/            OPC_MoveChild, 0,
/*4199*/            OPC_Scope, 50, /*->4251*/ // 2 children in Scope
/*4201*/              OPC_CheckSame, 1,
/*4203*/              OPC_MoveParent,
/*4204*/              OPC_MoveChild, 1,
/*4206*/              OPC_CheckSame, 0,
/*4208*/              OPC_MoveParent,
/*4209*/              OPC_MoveParent,
/*4210*/              OPC_RecordChild1, // #2 = $y
/*4211*/              OPC_MoveParent,
/*4212*/              OPC_CheckType, MVT::i32,
/*4214*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4216*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4225*/              OPC_EmitInteger, MVT::i32, 0, 
/*4228*/              OPC_EmitInteger, MVT::i32, 0, 
/*4231*/              OPC_EmitInteger, MVT::i32, 0, 
/*4234*/              OPC_EmitInteger, MVT::i32, 0, 
/*4237*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4251*/            /*Scope*/ 50, /*->4302*/
/*4252*/              OPC_CheckSame, 0,
/*4254*/              OPC_MoveParent,
/*4255*/              OPC_MoveChild, 1,
/*4257*/              OPC_CheckSame, 1,
/*4259*/              OPC_MoveParent,
/*4260*/              OPC_MoveParent,
/*4261*/              OPC_RecordChild1, // #2 = $y
/*4262*/              OPC_MoveParent,
/*4263*/              OPC_CheckType, MVT::i32,
/*4265*/              OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4267*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4276*/              OPC_EmitInteger, MVT::i32, 0, 
/*4279*/              OPC_EmitInteger, MVT::i32, 0, 
/*4282*/              OPC_EmitInteger, MVT::i32, 0, 
/*4285*/              OPC_EmitInteger, MVT::i32, 0, 
/*4288*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4302*/            0, /*End of Scope*/
/*4303*/          0, /*End of Scope*/
/*4304*/        /*Scope*/ 76|128,1/*204*/, /*->4510*/
/*4306*/          OPC_MoveChild, 1,
/*4308*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4311*/          OPC_RecordChild0, // #1 = $x
/*4312*/          OPC_RecordChild1, // #2 = $z
/*4313*/          OPC_MoveParent,
/*4314*/          OPC_MoveParent,
/*4315*/          OPC_MoveChild, 1,
/*4317*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4320*/          OPC_MoveChild, 0,
/*4322*/          OPC_Scope, 48, /*->4372*/ // 3 children in Scope
/*4324*/            OPC_CheckSame, 1,
/*4326*/            OPC_MoveParent,
/*4327*/            OPC_MoveChild, 1,
/*4329*/            OPC_CheckSame, 2,
/*4331*/            OPC_MoveParent,
/*4332*/            OPC_MoveParent,
/*4333*/            OPC_CheckType, MVT::i32,
/*4335*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4337*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*4346*/            OPC_EmitInteger, MVT::i32, 0, 
/*4349*/            OPC_EmitInteger, MVT::i32, 0, 
/*4352*/            OPC_EmitInteger, MVT::i32, 0, 
/*4355*/            OPC_EmitInteger, MVT::i32, 0, 
/*4358*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4372*/          /*Scope*/ 87, /*->4460*/
/*4373*/            OPC_CheckSame, 2,
/*4375*/            OPC_MoveParent,
/*4376*/            OPC_MoveChild, 1,
/*4378*/            OPC_CheckSame, 1,
/*4380*/            OPC_MoveParent,
/*4381*/            OPC_MoveParent,
/*4382*/            OPC_CheckType, MVT::i32,
/*4384*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4386*/            OPC_Scope, 35, /*->4423*/ // 2 children in Scope
/*4388*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #3
/*4397*/              OPC_EmitInteger, MVT::i32, 0, 
/*4400*/              OPC_EmitInteger, MVT::i32, 0, 
/*4403*/              OPC_EmitInteger, MVT::i32, 0, 
/*4406*/              OPC_EmitInteger, MVT::i32, 0, 
/*4409*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 2, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4423*/            /*Scope*/ 35, /*->4459*/
/*4424*/              OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*4433*/              OPC_EmitInteger, MVT::i32, 0, 
/*4436*/              OPC_EmitInteger, MVT::i32, 0, 
/*4439*/              OPC_EmitInteger, MVT::i32, 0, 
/*4442*/              OPC_EmitInteger, MVT::i32, 0, 
/*4445*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                          1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4459*/            0, /*End of Scope*/
/*4460*/          /*Scope*/ 48, /*->4509*/
/*4461*/            OPC_CheckSame, 1,
/*4463*/            OPC_MoveParent,
/*4464*/            OPC_MoveChild, 1,
/*4466*/            OPC_CheckSame, 2,
/*4468*/            OPC_MoveParent,
/*4469*/            OPC_MoveParent,
/*4470*/            OPC_CheckType, MVT::i32,
/*4472*/            OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4474*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 0,  // Results = #3
/*4483*/            OPC_EmitInteger, MVT::i32, 0, 
/*4486*/            OPC_EmitInteger, MVT::i32, 0, 
/*4489*/            OPC_EmitInteger, MVT::i32, 0, 
/*4492*/            OPC_EmitInteger, MVT::i32, 0, 
/*4495*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 0, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4509*/          0, /*End of Scope*/
/*4510*/        0, /*End of Scope*/
/*4511*/      /*Scope*/ 77|128,1/*205*/, /*->4718*/
/*4513*/        OPC_MoveChild, 0,
/*4515*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4518*/        OPC_RecordChild0, // #0 = $x
/*4519*/        OPC_RecordChild1, // #1 = $z
/*4520*/        OPC_MoveParent,
/*4521*/        OPC_RecordChild1, // #2 = $y
/*4522*/        OPC_MoveParent,
/*4523*/        OPC_MoveChild, 1,
/*4525*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4528*/        OPC_MoveChild, 0,
/*4530*/        OPC_Scope, 48, /*->4580*/ // 3 children in Scope
/*4532*/          OPC_CheckSame, 0,
/*4534*/          OPC_MoveParent,
/*4535*/          OPC_MoveChild, 1,
/*4537*/          OPC_CheckSame, 1,
/*4539*/          OPC_MoveParent,
/*4540*/          OPC_MoveParent,
/*4541*/          OPC_CheckType, MVT::i32,
/*4543*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4545*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4554*/          OPC_EmitInteger, MVT::i32, 0, 
/*4557*/          OPC_EmitInteger, MVT::i32, 0, 
/*4560*/          OPC_EmitInteger, MVT::i32, 0, 
/*4563*/          OPC_EmitInteger, MVT::i32, 0, 
/*4566*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4580*/        /*Scope*/ 87, /*->4668*/
/*4581*/          OPC_CheckSame, 1,
/*4583*/          OPC_MoveParent,
/*4584*/          OPC_MoveChild, 1,
/*4586*/          OPC_CheckSame, 0,
/*4588*/          OPC_MoveParent,
/*4589*/          OPC_MoveParent,
/*4590*/          OPC_CheckType, MVT::i32,
/*4592*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4594*/          OPC_Scope, 35, /*->4631*/ // 2 children in Scope
/*4596*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*4605*/            OPC_EmitInteger, MVT::i32, 0, 
/*4608*/            OPC_EmitInteger, MVT::i32, 0, 
/*4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*4614*/            OPC_EmitInteger, MVT::i32, 0, 
/*4617*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 1, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4631*/          /*Scope*/ 35, /*->4667*/
/*4632*/            OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4641*/            OPC_EmitInteger, MVT::i32, 0, 
/*4644*/            OPC_EmitInteger, MVT::i32, 0, 
/*4647*/            OPC_EmitInteger, MVT::i32, 0, 
/*4650*/            OPC_EmitInteger, MVT::i32, 0, 
/*4653*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4667*/          0, /*End of Scope*/
/*4668*/        /*Scope*/ 48, /*->4717*/
/*4669*/          OPC_CheckSame, 0,
/*4671*/          OPC_MoveParent,
/*4672*/          OPC_MoveChild, 1,
/*4674*/          OPC_CheckSame, 1,
/*4676*/          OPC_MoveParent,
/*4677*/          OPC_MoveParent,
/*4678*/          OPC_CheckType, MVT::i32,
/*4680*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*4682*/          OPC_EmitNode, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*4691*/          OPC_EmitInteger, MVT::i32, 0, 
/*4694*/          OPC_EmitInteger, MVT::i32, 0, 
/*4697*/          OPC_EmitInteger, MVT::i32, 0, 
/*4700*/          OPC_EmitInteger, MVT::i32, 0, 
/*4703*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 0, 2, 4, 5, 6, 7, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (V_BFI_B32:i32 (V_XOR_B32_e32:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4717*/        0, /*End of Scope*/
/*4718*/      /*Scope*/ 15|128,18/*2319*/, /*->7039*/
/*4720*/        OPC_RecordChild0, // #0 = $x
/*4721*/        OPC_Scope, 3|128,12/*1539*/, /*->6263*/ // 2 children in Scope
/*4724*/          OPC_RecordChild1, // #1 = $z
/*4725*/          OPC_MoveParent,
/*4726*/          OPC_MoveChild, 1,
/*4728*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4731*/          OPC_Scope, 90|128,1/*218*/, /*->4952*/ // 4 children in Scope
/*4734*/            OPC_RecordChild0, // #2 = $y
/*4735*/            OPC_MoveChild, 1,
/*4737*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4740*/            OPC_MoveChild, 0,
/*4742*/            OPC_CheckSame, 1,
/*4744*/            OPC_MoveParent,
/*4745*/            OPC_MoveChild, 1,
/*4747*/            OPC_CheckSame, 0,
/*4749*/            OPC_MoveParent,
/*4750*/            OPC_MoveParent,
/*4751*/            OPC_MoveParent,
/*4752*/            OPC_CheckType, MVT::i32,
/*4754*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*4756*/            OPC_EmitInteger, MVT::i32, 0, 
/*4759*/            OPC_EmitInteger, MVT::i32, 0, 
/*4762*/            OPC_EmitInteger, MVT::i32, 0, 
/*4765*/            OPC_EmitInteger, MVT::i32, 0, 
/*4768*/            OPC_EmitInteger, MVT::i32, 1, 
/*4771*/            OPC_EmitInteger, MVT::i32, 0, 
/*4774*/            OPC_EmitInteger, MVT::i32, 0, 
/*4777*/            OPC_EmitInteger, MVT::i32, 0, 
/*4780*/            OPC_EmitInteger, MVT::i32, 0, 
/*4783*/            OPC_EmitInteger, MVT::i32, 0, 
/*4786*/            OPC_EmitInteger, MVT::i32, 0, 
/*4789*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4801*/            OPC_EmitInteger, MVT::i32, 0, 
/*4804*/            OPC_EmitInteger, MVT::i32, 0, 
/*4807*/            OPC_EmitInteger, MVT::i32, 0, 
/*4810*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4822*/            OPC_EmitInteger, MVT::i32, 1, 
/*4825*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*4828*/            OPC_EmitInteger, MVT::i32, 0, 
/*4831*/            OPC_EmitInteger, MVT::i32, 0, 
/*4834*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*4861*/            OPC_EmitInteger, MVT::i32, 0, 
/*4864*/            OPC_EmitInteger, MVT::i32, 0, 
/*4867*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4879*/            OPC_EmitInteger, MVT::i32, 0, 
/*4882*/            OPC_EmitInteger, MVT::i32, 0, 
/*4885*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4897*/            OPC_EmitInteger, MVT::i32, 0, 
/*4900*/            OPC_EmitInteger, MVT::i32, 0, 
/*4903*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4915*/            OPC_EmitInteger, MVT::i32, 1, 
/*4918*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*4921*/            OPC_EmitInteger, MVT::i32, 0, 
/*4924*/            OPC_EmitInteger, MVT::i32, 0, 
/*4927*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*4952*/          /*Scope*/ 51|128,3/*435*/, /*->5389*/
/*4954*/            OPC_MoveChild, 0,
/*4956*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4959*/            OPC_MoveChild, 0,
/*4961*/            OPC_Scope, 83|128,1/*211*/, /*->5175*/ // 2 children in Scope
/*4964*/              OPC_CheckSame, 0,
/*4966*/              OPC_MoveParent,
/*4967*/              OPC_MoveChild, 1,
/*4969*/              OPC_CheckSame, 1,
/*4971*/              OPC_MoveParent,
/*4972*/              OPC_MoveParent,
/*4973*/              OPC_RecordChild1, // #2 = $y
/*4974*/              OPC_MoveParent,
/*4975*/              OPC_CheckType, MVT::i32,
/*4977*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*4979*/              OPC_EmitInteger, MVT::i32, 0, 
/*4982*/              OPC_EmitInteger, MVT::i32, 0, 
/*4985*/              OPC_EmitInteger, MVT::i32, 0, 
/*4988*/              OPC_EmitInteger, MVT::i32, 0, 
/*4991*/              OPC_EmitInteger, MVT::i32, 1, 
/*4994*/              OPC_EmitInteger, MVT::i32, 0, 
/*4997*/              OPC_EmitInteger, MVT::i32, 0, 
/*5000*/              OPC_EmitInteger, MVT::i32, 0, 
/*5003*/              OPC_EmitInteger, MVT::i32, 0, 
/*5006*/              OPC_EmitInteger, MVT::i32, 0, 
/*5009*/              OPC_EmitInteger, MVT::i32, 0, 
/*5012*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5024*/              OPC_EmitInteger, MVT::i32, 0, 
/*5027*/              OPC_EmitInteger, MVT::i32, 0, 
/*5030*/              OPC_EmitInteger, MVT::i32, 0, 
/*5033*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5045*/              OPC_EmitInteger, MVT::i32, 1, 
/*5048*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5051*/              OPC_EmitInteger, MVT::i32, 0, 
/*5054*/              OPC_EmitInteger, MVT::i32, 0, 
/*5057*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5084*/              OPC_EmitInteger, MVT::i32, 0, 
/*5087*/              OPC_EmitInteger, MVT::i32, 0, 
/*5090*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5102*/              OPC_EmitInteger, MVT::i32, 0, 
/*5105*/              OPC_EmitInteger, MVT::i32, 0, 
/*5108*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5120*/              OPC_EmitInteger, MVT::i32, 0, 
/*5123*/              OPC_EmitInteger, MVT::i32, 0, 
/*5126*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5138*/              OPC_EmitInteger, MVT::i32, 1, 
/*5141*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5144*/              OPC_EmitInteger, MVT::i32, 0, 
/*5147*/              OPC_EmitInteger, MVT::i32, 0, 
/*5150*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5175*/            /*Scope*/ 83|128,1/*211*/, /*->5388*/
/*5177*/              OPC_CheckSame, 1,
/*5179*/              OPC_MoveParent,
/*5180*/              OPC_MoveChild, 1,
/*5182*/              OPC_CheckSame, 0,
/*5184*/              OPC_MoveParent,
/*5185*/              OPC_MoveParent,
/*5186*/              OPC_RecordChild1, // #2 = $y
/*5187*/              OPC_MoveParent,
/*5188*/              OPC_CheckType, MVT::i32,
/*5190*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5192*/              OPC_EmitInteger, MVT::i32, 0, 
/*5195*/              OPC_EmitInteger, MVT::i32, 0, 
/*5198*/              OPC_EmitInteger, MVT::i32, 0, 
/*5201*/              OPC_EmitInteger, MVT::i32, 0, 
/*5204*/              OPC_EmitInteger, MVT::i32, 1, 
/*5207*/              OPC_EmitInteger, MVT::i32, 0, 
/*5210*/              OPC_EmitInteger, MVT::i32, 0, 
/*5213*/              OPC_EmitInteger, MVT::i32, 0, 
/*5216*/              OPC_EmitInteger, MVT::i32, 0, 
/*5219*/              OPC_EmitInteger, MVT::i32, 0, 
/*5222*/              OPC_EmitInteger, MVT::i32, 0, 
/*5225*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5237*/              OPC_EmitInteger, MVT::i32, 0, 
/*5240*/              OPC_EmitInteger, MVT::i32, 0, 
/*5243*/              OPC_EmitInteger, MVT::i32, 0, 
/*5246*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5258*/              OPC_EmitInteger, MVT::i32, 1, 
/*5261*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5264*/              OPC_EmitInteger, MVT::i32, 0, 
/*5267*/              OPC_EmitInteger, MVT::i32, 0, 
/*5270*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5297*/              OPC_EmitInteger, MVT::i32, 0, 
/*5300*/              OPC_EmitInteger, MVT::i32, 0, 
/*5303*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5315*/              OPC_EmitInteger, MVT::i32, 0, 
/*5318*/              OPC_EmitInteger, MVT::i32, 0, 
/*5321*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5333*/              OPC_EmitInteger, MVT::i32, 0, 
/*5336*/              OPC_EmitInteger, MVT::i32, 0, 
/*5339*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5351*/              OPC_EmitInteger, MVT::i32, 1, 
/*5354*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5357*/              OPC_EmitInteger, MVT::i32, 0, 
/*5360*/              OPC_EmitInteger, MVT::i32, 0, 
/*5363*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$x, i32:i32:$z), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5388*/            0, /*End of Scope*/
/*5389*/          /*Scope*/ 50|128,3/*434*/, /*->5825*/
/*5391*/            OPC_RecordChild0, // #2 = $y
/*5392*/            OPC_MoveChild, 1,
/*5394*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5397*/            OPC_MoveChild, 0,
/*5399*/            OPC_Scope, 82|128,1/*210*/, /*->5612*/ // 2 children in Scope
/*5402*/              OPC_CheckSame, 1,
/*5404*/              OPC_MoveParent,
/*5405*/              OPC_MoveChild, 1,
/*5407*/              OPC_CheckSame, 0,
/*5409*/              OPC_MoveParent,
/*5410*/              OPC_MoveParent,
/*5411*/              OPC_MoveParent,
/*5412*/              OPC_CheckType, MVT::i32,
/*5414*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5416*/              OPC_EmitInteger, MVT::i32, 0, 
/*5419*/              OPC_EmitInteger, MVT::i32, 0, 
/*5422*/              OPC_EmitInteger, MVT::i32, 0, 
/*5425*/              OPC_EmitInteger, MVT::i32, 0, 
/*5428*/              OPC_EmitInteger, MVT::i32, 1, 
/*5431*/              OPC_EmitInteger, MVT::i32, 0, 
/*5434*/              OPC_EmitInteger, MVT::i32, 0, 
/*5437*/              OPC_EmitInteger, MVT::i32, 0, 
/*5440*/              OPC_EmitInteger, MVT::i32, 0, 
/*5443*/              OPC_EmitInteger, MVT::i32, 0, 
/*5446*/              OPC_EmitInteger, MVT::i32, 0, 
/*5449*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5461*/              OPC_EmitInteger, MVT::i32, 0, 
/*5464*/              OPC_EmitInteger, MVT::i32, 0, 
/*5467*/              OPC_EmitInteger, MVT::i32, 0, 
/*5470*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5482*/              OPC_EmitInteger, MVT::i32, 1, 
/*5485*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5488*/              OPC_EmitInteger, MVT::i32, 0, 
/*5491*/              OPC_EmitInteger, MVT::i32, 0, 
/*5494*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5521*/              OPC_EmitInteger, MVT::i32, 0, 
/*5524*/              OPC_EmitInteger, MVT::i32, 0, 
/*5527*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5539*/              OPC_EmitInteger, MVT::i32, 0, 
/*5542*/              OPC_EmitInteger, MVT::i32, 0, 
/*5545*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5557*/              OPC_EmitInteger, MVT::i32, 0, 
/*5560*/              OPC_EmitInteger, MVT::i32, 0, 
/*5563*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5575*/              OPC_EmitInteger, MVT::i32, 1, 
/*5578*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5581*/              OPC_EmitInteger, MVT::i32, 0, 
/*5584*/              OPC_EmitInteger, MVT::i32, 0, 
/*5587*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5612*/            /*Scope*/ 82|128,1/*210*/, /*->5824*/
/*5614*/              OPC_CheckSame, 0,
/*5616*/              OPC_MoveParent,
/*5617*/              OPC_MoveChild, 1,
/*5619*/              OPC_CheckSame, 1,
/*5621*/              OPC_MoveParent,
/*5622*/              OPC_MoveParent,
/*5623*/              OPC_MoveParent,
/*5624*/              OPC_CheckType, MVT::i32,
/*5626*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5628*/              OPC_EmitInteger, MVT::i32, 0, 
/*5631*/              OPC_EmitInteger, MVT::i32, 0, 
/*5634*/              OPC_EmitInteger, MVT::i32, 0, 
/*5637*/              OPC_EmitInteger, MVT::i32, 0, 
/*5640*/              OPC_EmitInteger, MVT::i32, 1, 
/*5643*/              OPC_EmitInteger, MVT::i32, 0, 
/*5646*/              OPC_EmitInteger, MVT::i32, 0, 
/*5649*/              OPC_EmitInteger, MVT::i32, 0, 
/*5652*/              OPC_EmitInteger, MVT::i32, 0, 
/*5655*/              OPC_EmitInteger, MVT::i32, 0, 
/*5658*/              OPC_EmitInteger, MVT::i32, 0, 
/*5661*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5673*/              OPC_EmitInteger, MVT::i32, 0, 
/*5676*/              OPC_EmitInteger, MVT::i32, 0, 
/*5679*/              OPC_EmitInteger, MVT::i32, 0, 
/*5682*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5694*/              OPC_EmitInteger, MVT::i32, 1, 
/*5697*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5700*/              OPC_EmitInteger, MVT::i32, 0, 
/*5703*/              OPC_EmitInteger, MVT::i32, 0, 
/*5706*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5733*/              OPC_EmitInteger, MVT::i32, 0, 
/*5736*/              OPC_EmitInteger, MVT::i32, 0, 
/*5739*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5751*/              OPC_EmitInteger, MVT::i32, 0, 
/*5754*/              OPC_EmitInteger, MVT::i32, 0, 
/*5757*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5769*/              OPC_EmitInteger, MVT::i32, 0, 
/*5772*/              OPC_EmitInteger, MVT::i32, 0, 
/*5775*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5787*/              OPC_EmitInteger, MVT::i32, 1, 
/*5790*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5793*/              OPC_EmitInteger, MVT::i32, 0, 
/*5796*/              OPC_EmitInteger, MVT::i32, 0, 
/*5799*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x))) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*5824*/            0, /*End of Scope*/
/*5825*/          /*Scope*/ 51|128,3/*435*/, /*->6262*/
/*5827*/            OPC_MoveChild, 0,
/*5829*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5832*/            OPC_MoveChild, 0,
/*5834*/            OPC_Scope, 83|128,1/*211*/, /*->6048*/ // 2 children in Scope
/*5837*/              OPC_CheckSame, 1,
/*5839*/              OPC_MoveParent,
/*5840*/              OPC_MoveChild, 1,
/*5842*/              OPC_CheckSame, 0,
/*5844*/              OPC_MoveParent,
/*5845*/              OPC_MoveParent,
/*5846*/              OPC_RecordChild1, // #2 = $y
/*5847*/              OPC_MoveParent,
/*5848*/              OPC_CheckType, MVT::i32,
/*5850*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*5852*/              OPC_EmitInteger, MVT::i32, 0, 
/*5855*/              OPC_EmitInteger, MVT::i32, 0, 
/*5858*/              OPC_EmitInteger, MVT::i32, 0, 
/*5861*/              OPC_EmitInteger, MVT::i32, 0, 
/*5864*/              OPC_EmitInteger, MVT::i32, 1, 
/*5867*/              OPC_EmitInteger, MVT::i32, 0, 
/*5870*/              OPC_EmitInteger, MVT::i32, 0, 
/*5873*/              OPC_EmitInteger, MVT::i32, 0, 
/*5876*/              OPC_EmitInteger, MVT::i32, 0, 
/*5879*/              OPC_EmitInteger, MVT::i32, 0, 
/*5882*/              OPC_EmitInteger, MVT::i32, 0, 
/*5885*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5897*/              OPC_EmitInteger, MVT::i32, 0, 
/*5900*/              OPC_EmitInteger, MVT::i32, 0, 
/*5903*/              OPC_EmitInteger, MVT::i32, 0, 
/*5906*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5918*/              OPC_EmitInteger, MVT::i32, 1, 
/*5921*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*5924*/              OPC_EmitInteger, MVT::i32, 0, 
/*5927*/              OPC_EmitInteger, MVT::i32, 0, 
/*5930*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*5957*/              OPC_EmitInteger, MVT::i32, 0, 
/*5960*/              OPC_EmitInteger, MVT::i32, 0, 
/*5963*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5975*/              OPC_EmitInteger, MVT::i32, 0, 
/*5978*/              OPC_EmitInteger, MVT::i32, 0, 
/*5981*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5993*/              OPC_EmitInteger, MVT::i32, 0, 
/*5996*/              OPC_EmitInteger, MVT::i32, 0, 
/*5999*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6011*/              OPC_EmitInteger, MVT::i32, 1, 
/*6014*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6017*/              OPC_EmitInteger, MVT::i32, 0, 
/*6020*/              OPC_EmitInteger, MVT::i32, 0, 
/*6023*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6048*/            /*Scope*/ 83|128,1/*211*/, /*->6261*/
/*6050*/              OPC_CheckSame, 0,
/*6052*/              OPC_MoveParent,
/*6053*/              OPC_MoveChild, 1,
/*6055*/              OPC_CheckSame, 1,
/*6057*/              OPC_MoveParent,
/*6058*/              OPC_MoveParent,
/*6059*/              OPC_RecordChild1, // #2 = $y
/*6060*/              OPC_MoveParent,
/*6061*/              OPC_CheckType, MVT::i32,
/*6063*/              OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6065*/              OPC_EmitInteger, MVT::i32, 0, 
/*6068*/              OPC_EmitInteger, MVT::i32, 0, 
/*6071*/              OPC_EmitInteger, MVT::i32, 0, 
/*6074*/              OPC_EmitInteger, MVT::i32, 0, 
/*6077*/              OPC_EmitInteger, MVT::i32, 1, 
/*6080*/              OPC_EmitInteger, MVT::i32, 0, 
/*6083*/              OPC_EmitInteger, MVT::i32, 0, 
/*6086*/              OPC_EmitInteger, MVT::i32, 0, 
/*6089*/              OPC_EmitInteger, MVT::i32, 0, 
/*6092*/              OPC_EmitInteger, MVT::i32, 0, 
/*6095*/              OPC_EmitInteger, MVT::i32, 0, 
/*6098*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6110*/              OPC_EmitInteger, MVT::i32, 0, 
/*6113*/              OPC_EmitInteger, MVT::i32, 0, 
/*6116*/              OPC_EmitInteger, MVT::i32, 0, 
/*6119*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6131*/              OPC_EmitInteger, MVT::i32, 1, 
/*6134*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6137*/              OPC_EmitInteger, MVT::i32, 0, 
/*6140*/              OPC_EmitInteger, MVT::i32, 0, 
/*6143*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6170*/              OPC_EmitInteger, MVT::i32, 0, 
/*6173*/              OPC_EmitInteger, MVT::i32, 0, 
/*6176*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6188*/              OPC_EmitInteger, MVT::i32, 0, 
/*6191*/              OPC_EmitInteger, MVT::i32, 0, 
/*6194*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6206*/              OPC_EmitInteger, MVT::i32, 0, 
/*6209*/              OPC_EmitInteger, MVT::i32, 0, 
/*6212*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6224*/              OPC_EmitInteger, MVT::i32, 1, 
/*6227*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6230*/              OPC_EmitInteger, MVT::i32, 0, 
/*6233*/              OPC_EmitInteger, MVT::i32, 0, 
/*6236*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$z, i32:i32:$x), (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6261*/            0, /*End of Scope*/
/*6262*/          0, /*End of Scope*/
/*6263*/        /*Scope*/ 5|128,6/*773*/, /*->7038*/
/*6265*/          OPC_MoveChild, 1,
/*6267*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*6270*/          OPC_RecordChild0, // #1 = $x
/*6271*/          OPC_RecordChild1, // #2 = $z
/*6272*/          OPC_MoveParent,
/*6273*/          OPC_MoveParent,
/*6274*/          OPC_MoveChild, 1,
/*6276*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*6279*/          OPC_MoveChild, 0,
/*6281*/          OPC_Scope, 81|128,1/*209*/, /*->6493*/ // 3 children in Scope
/*6284*/            OPC_CheckSame, 1,
/*6286*/            OPC_MoveParent,
/*6287*/            OPC_MoveChild, 1,
/*6289*/            OPC_CheckSame, 2,
/*6291*/            OPC_MoveParent,
/*6292*/            OPC_MoveParent,
/*6293*/            OPC_CheckType, MVT::i32,
/*6295*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6297*/            OPC_EmitInteger, MVT::i32, 0, 
/*6300*/            OPC_EmitInteger, MVT::i32, 0, 
/*6303*/            OPC_EmitInteger, MVT::i32, 0, 
/*6306*/            OPC_EmitInteger, MVT::i32, 0, 
/*6309*/            OPC_EmitInteger, MVT::i32, 1, 
/*6312*/            OPC_EmitInteger, MVT::i32, 0, 
/*6315*/            OPC_EmitInteger, MVT::i32, 0, 
/*6318*/            OPC_EmitInteger, MVT::i32, 0, 
/*6321*/            OPC_EmitInteger, MVT::i32, 0, 
/*6324*/            OPC_EmitInteger, MVT::i32, 0, 
/*6327*/            OPC_EmitInteger, MVT::i32, 0, 
/*6330*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6342*/            OPC_EmitInteger, MVT::i32, 0, 
/*6345*/            OPC_EmitInteger, MVT::i32, 0, 
/*6348*/            OPC_EmitInteger, MVT::i32, 0, 
/*6351*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6363*/            OPC_EmitInteger, MVT::i32, 1, 
/*6366*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6369*/            OPC_EmitInteger, MVT::i32, 0, 
/*6372*/            OPC_EmitInteger, MVT::i32, 0, 
/*6375*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6402*/            OPC_EmitInteger, MVT::i32, 0, 
/*6405*/            OPC_EmitInteger, MVT::i32, 0, 
/*6408*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6420*/            OPC_EmitInteger, MVT::i32, 0, 
/*6423*/            OPC_EmitInteger, MVT::i32, 0, 
/*6426*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6438*/            OPC_EmitInteger, MVT::i32, 0, 
/*6441*/            OPC_EmitInteger, MVT::i32, 0, 
/*6444*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6456*/            OPC_EmitInteger, MVT::i32, 1, 
/*6459*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6462*/            OPC_EmitInteger, MVT::i32, 0, 
/*6465*/            OPC_EmitInteger, MVT::i32, 0, 
/*6468*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6493*/          /*Scope*/ 75|128,2/*331*/, /*->6826*/
/*6495*/            OPC_CheckSame, 2,
/*6497*/            OPC_MoveParent,
/*6498*/            OPC_MoveChild, 1,
/*6500*/            OPC_CheckSame, 1,
/*6502*/            OPC_MoveParent,
/*6503*/            OPC_MoveParent,
/*6504*/            OPC_CheckType, MVT::i32,
/*6506*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6508*/            OPC_EmitInteger, MVT::i32, 0, 
/*6511*/            OPC_EmitInteger, MVT::i32, 0, 
/*6514*/            OPC_EmitInteger, MVT::i32, 0, 
/*6517*/            OPC_EmitInteger, MVT::i32, 0, 
/*6520*/            OPC_EmitInteger, MVT::i32, 1, 
/*6523*/            OPC_EmitInteger, MVT::i32, 0, 
/*6526*/            OPC_EmitInteger, MVT::i32, 0, 
/*6529*/            OPC_EmitInteger, MVT::i32, 0, 
/*6532*/            OPC_EmitInteger, MVT::i32, 0, 
/*6535*/            OPC_EmitInteger, MVT::i32, 0, 
/*6538*/            OPC_EmitInteger, MVT::i32, 0, 
/*6541*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6553*/            OPC_EmitInteger, MVT::i32, 0, 
/*6556*/            OPC_EmitInteger, MVT::i32, 0, 
/*6559*/            OPC_EmitInteger, MVT::i32, 0, 
/*6562*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6574*/            OPC_EmitInteger, MVT::i32, 1, 
/*6577*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6580*/            OPC_EmitInteger, MVT::i32, 0, 
/*6583*/            OPC_EmitInteger, MVT::i32, 0, 
/*6586*/            OPC_Scope, 118, /*->6706*/ // 2 children in Scope
/*6588*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6615*/              OPC_EmitInteger, MVT::i32, 0, 
/*6618*/              OPC_EmitInteger, MVT::i32, 0, 
/*6621*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6633*/              OPC_EmitInteger, MVT::i32, 0, 
/*6636*/              OPC_EmitInteger, MVT::i32, 0, 
/*6639*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6651*/              OPC_EmitInteger, MVT::i32, 0, 
/*6654*/              OPC_EmitInteger, MVT::i32, 0, 
/*6657*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6669*/              OPC_EmitInteger, MVT::i32, 1, 
/*6672*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6675*/              OPC_EmitInteger, MVT::i32, 0, 
/*6678*/              OPC_EmitInteger, MVT::i32, 0, 
/*6681*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$x, i32:i32:$z)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6706*/            /*Scope*/ 118, /*->6825*/
/*6707*/              OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6734*/              OPC_EmitInteger, MVT::i32, 0, 
/*6737*/              OPC_EmitInteger, MVT::i32, 0, 
/*6740*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6752*/              OPC_EmitInteger, MVT::i32, 0, 
/*6755*/              OPC_EmitInteger, MVT::i32, 0, 
/*6758*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6770*/              OPC_EmitInteger, MVT::i32, 0, 
/*6773*/              OPC_EmitInteger, MVT::i32, 0, 
/*6776*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6788*/              OPC_EmitInteger, MVT::i32, 1, 
/*6791*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6794*/              OPC_EmitInteger, MVT::i32, 0, 
/*6797*/              OPC_EmitInteger, MVT::i32, 0, 
/*6800*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*6825*/            0, /*End of Scope*/
/*6826*/          /*Scope*/ 81|128,1/*209*/, /*->7037*/
/*6828*/            OPC_CheckSame, 1,
/*6830*/            OPC_MoveParent,
/*6831*/            OPC_MoveChild, 1,
/*6833*/            OPC_CheckSame, 2,
/*6835*/            OPC_MoveParent,
/*6836*/            OPC_MoveParent,
/*6837*/            OPC_CheckType, MVT::i32,
/*6839*/            OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*6841*/            OPC_EmitInteger, MVT::i32, 0, 
/*6844*/            OPC_EmitInteger, MVT::i32, 0, 
/*6847*/            OPC_EmitInteger, MVT::i32, 0, 
/*6850*/            OPC_EmitInteger, MVT::i32, 0, 
/*6853*/            OPC_EmitInteger, MVT::i32, 1, 
/*6856*/            OPC_EmitInteger, MVT::i32, 0, 
/*6859*/            OPC_EmitInteger, MVT::i32, 0, 
/*6862*/            OPC_EmitInteger, MVT::i32, 0, 
/*6865*/            OPC_EmitInteger, MVT::i32, 0, 
/*6868*/            OPC_EmitInteger, MVT::i32, 0, 
/*6871*/            OPC_EmitInteger, MVT::i32, 0, 
/*6874*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6886*/            OPC_EmitInteger, MVT::i32, 0, 
/*6889*/            OPC_EmitInteger, MVT::i32, 0, 
/*6892*/            OPC_EmitInteger, MVT::i32, 0, 
/*6895*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6907*/            OPC_EmitInteger, MVT::i32, 1, 
/*6910*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*6913*/            OPC_EmitInteger, MVT::i32, 0, 
/*6916*/            OPC_EmitInteger, MVT::i32, 0, 
/*6919*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*6946*/            OPC_EmitInteger, MVT::i32, 0, 
/*6949*/            OPC_EmitInteger, MVT::i32, 0, 
/*6952*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6964*/            OPC_EmitInteger, MVT::i32, 0, 
/*6967*/            OPC_EmitInteger, MVT::i32, 0, 
/*6970*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6982*/            OPC_EmitInteger, MVT::i32, 0, 
/*6985*/            OPC_EmitInteger, MVT::i32, 0, 
/*6988*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7000*/            OPC_EmitInteger, MVT::i32, 1, 
/*7003*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7006*/            OPC_EmitInteger, MVT::i32, 0, 
/*7009*/            OPC_EmitInteger, MVT::i32, 0, 
/*7012*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 i32:i32:$y, (or:i32 i32:i32:$z, i32:i32:$x)), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7037*/          0, /*End of Scope*/
/*7038*/        0, /*End of Scope*/
/*7039*/      /*Scope*/ 6|128,6/*774*/, /*->7815*/
/*7041*/        OPC_MoveChild, 0,
/*7043*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*7046*/        OPC_RecordChild0, // #0 = $x
/*7047*/        OPC_RecordChild1, // #1 = $z
/*7048*/        OPC_MoveParent,
/*7049*/        OPC_RecordChild1, // #2 = $y
/*7050*/        OPC_MoveParent,
/*7051*/        OPC_MoveChild, 1,
/*7053*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*7056*/        OPC_MoveChild, 0,
/*7058*/        OPC_Scope, 81|128,1/*209*/, /*->7270*/ // 3 children in Scope
/*7061*/          OPC_CheckSame, 0,
/*7063*/          OPC_MoveParent,
/*7064*/          OPC_MoveChild, 1,
/*7066*/          OPC_CheckSame, 1,
/*7068*/          OPC_MoveParent,
/*7069*/          OPC_MoveParent,
/*7070*/          OPC_CheckType, MVT::i32,
/*7072*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7074*/          OPC_EmitInteger, MVT::i32, 0, 
/*7077*/          OPC_EmitInteger, MVT::i32, 0, 
/*7080*/          OPC_EmitInteger, MVT::i32, 0, 
/*7083*/          OPC_EmitInteger, MVT::i32, 0, 
/*7086*/          OPC_EmitInteger, MVT::i32, 1, 
/*7089*/          OPC_EmitInteger, MVT::i32, 0, 
/*7092*/          OPC_EmitInteger, MVT::i32, 0, 
/*7095*/          OPC_EmitInteger, MVT::i32, 0, 
/*7098*/          OPC_EmitInteger, MVT::i32, 0, 
/*7101*/          OPC_EmitInteger, MVT::i32, 0, 
/*7104*/          OPC_EmitInteger, MVT::i32, 0, 
/*7107*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7119*/          OPC_EmitInteger, MVT::i32, 0, 
/*7122*/          OPC_EmitInteger, MVT::i32, 0, 
/*7125*/          OPC_EmitInteger, MVT::i32, 0, 
/*7128*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7140*/          OPC_EmitInteger, MVT::i32, 1, 
/*7143*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7146*/          OPC_EmitInteger, MVT::i32, 0, 
/*7149*/          OPC_EmitInteger, MVT::i32, 0, 
/*7152*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7179*/          OPC_EmitInteger, MVT::i32, 0, 
/*7182*/          OPC_EmitInteger, MVT::i32, 0, 
/*7185*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7197*/          OPC_EmitInteger, MVT::i32, 0, 
/*7200*/          OPC_EmitInteger, MVT::i32, 0, 
/*7203*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7215*/          OPC_EmitInteger, MVT::i32, 0, 
/*7218*/          OPC_EmitInteger, MVT::i32, 0, 
/*7221*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7233*/          OPC_EmitInteger, MVT::i32, 1, 
/*7236*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7239*/          OPC_EmitInteger, MVT::i32, 0, 
/*7242*/          OPC_EmitInteger, MVT::i32, 0, 
/*7245*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7270*/        /*Scope*/ 75|128,2/*331*/, /*->7603*/
/*7272*/          OPC_CheckSame, 1,
/*7274*/          OPC_MoveParent,
/*7275*/          OPC_MoveChild, 1,
/*7277*/          OPC_CheckSame, 0,
/*7279*/          OPC_MoveParent,
/*7280*/          OPC_MoveParent,
/*7281*/          OPC_CheckType, MVT::i32,
/*7283*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7285*/          OPC_EmitInteger, MVT::i32, 0, 
/*7288*/          OPC_EmitInteger, MVT::i32, 0, 
/*7291*/          OPC_EmitInteger, MVT::i32, 0, 
/*7294*/          OPC_EmitInteger, MVT::i32, 0, 
/*7297*/          OPC_EmitInteger, MVT::i32, 1, 
/*7300*/          OPC_EmitInteger, MVT::i32, 0, 
/*7303*/          OPC_EmitInteger, MVT::i32, 0, 
/*7306*/          OPC_EmitInteger, MVT::i32, 0, 
/*7309*/          OPC_EmitInteger, MVT::i32, 0, 
/*7312*/          OPC_EmitInteger, MVT::i32, 0, 
/*7315*/          OPC_EmitInteger, MVT::i32, 0, 
/*7318*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7330*/          OPC_EmitInteger, MVT::i32, 0, 
/*7333*/          OPC_EmitInteger, MVT::i32, 0, 
/*7336*/          OPC_EmitInteger, MVT::i32, 0, 
/*7339*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7351*/          OPC_EmitInteger, MVT::i32, 1, 
/*7354*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7357*/          OPC_EmitInteger, MVT::i32, 0, 
/*7360*/          OPC_EmitInteger, MVT::i32, 0, 
/*7363*/          OPC_Scope, 118, /*->7483*/ // 2 children in Scope
/*7365*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7392*/            OPC_EmitInteger, MVT::i32, 0, 
/*7395*/            OPC_EmitInteger, MVT::i32, 0, 
/*7398*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7410*/            OPC_EmitInteger, MVT::i32, 0, 
/*7413*/            OPC_EmitInteger, MVT::i32, 0, 
/*7416*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7428*/            OPC_EmitInteger, MVT::i32, 0, 
/*7431*/            OPC_EmitInteger, MVT::i32, 0, 
/*7434*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7446*/            OPC_EmitInteger, MVT::i32, 1, 
/*7449*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7452*/            OPC_EmitInteger, MVT::i32, 0, 
/*7455*/            OPC_EmitInteger, MVT::i32, 0, 
/*7458*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$x, i32:i32:$z), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7483*/          /*Scope*/ 118, /*->7602*/
/*7484*/            OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7511*/            OPC_EmitInteger, MVT::i32, 0, 
/*7514*/            OPC_EmitInteger, MVT::i32, 0, 
/*7517*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7529*/            OPC_EmitInteger, MVT::i32, 0, 
/*7532*/            OPC_EmitInteger, MVT::i32, 0, 
/*7535*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7547*/            OPC_EmitInteger, MVT::i32, 0, 
/*7550*/            OPC_EmitInteger, MVT::i32, 0, 
/*7553*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7565*/            OPC_EmitInteger, MVT::i32, 1, 
/*7568*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7571*/            OPC_EmitInteger, MVT::i32, 0, 
/*7574*/            OPC_EmitInteger, MVT::i32, 0, 
/*7577*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$x, i32:i32:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7602*/          0, /*End of Scope*/
/*7603*/        /*Scope*/ 81|128,1/*209*/, /*->7814*/
/*7605*/          OPC_CheckSame, 0,
/*7607*/          OPC_MoveParent,
/*7608*/          OPC_MoveChild, 1,
/*7610*/          OPC_CheckSame, 1,
/*7612*/          OPC_MoveParent,
/*7613*/          OPC_MoveParent,
/*7614*/          OPC_CheckType, MVT::i32,
/*7616*/          OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7618*/          OPC_EmitInteger, MVT::i32, 0, 
/*7621*/          OPC_EmitInteger, MVT::i32, 0, 
/*7624*/          OPC_EmitInteger, MVT::i32, 0, 
/*7627*/          OPC_EmitInteger, MVT::i32, 0, 
/*7630*/          OPC_EmitInteger, MVT::i32, 1, 
/*7633*/          OPC_EmitInteger, MVT::i32, 0, 
/*7636*/          OPC_EmitInteger, MVT::i32, 0, 
/*7639*/          OPC_EmitInteger, MVT::i32, 0, 
/*7642*/          OPC_EmitInteger, MVT::i32, 0, 
/*7645*/          OPC_EmitInteger, MVT::i32, 0, 
/*7648*/          OPC_EmitInteger, MVT::i32, 0, 
/*7651*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7663*/          OPC_EmitInteger, MVT::i32, 0, 
/*7666*/          OPC_EmitInteger, MVT::i32, 0, 
/*7669*/          OPC_EmitInteger, MVT::i32, 0, 
/*7672*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7684*/          OPC_EmitInteger, MVT::i32, 1, 
/*7687*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7690*/          OPC_EmitInteger, MVT::i32, 0, 
/*7693*/          OPC_EmitInteger, MVT::i32, 0, 
/*7696*/          OPC_EmitNode, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*7723*/          OPC_EmitInteger, MVT::i32, 0, 
/*7726*/          OPC_EmitInteger, MVT::i32, 0, 
/*7729*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7741*/          OPC_EmitInteger, MVT::i32, 0, 
/*7744*/          OPC_EmitInteger, MVT::i32, 0, 
/*7747*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7759*/          OPC_EmitInteger, MVT::i32, 0, 
/*7762*/          OPC_EmitInteger, MVT::i32, 0, 
/*7765*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7777*/          OPC_EmitInteger, MVT::i32, 1, 
/*7780*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7783*/          OPC_EmitInteger, MVT::i32, 0, 
/*7786*/          OPC_EmitInteger, MVT::i32, 0, 
/*7789*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                  // Src: (or:i32 (and:i32 (or:i32 i32:i32:$z, i32:i32:$x), i32:i32:$y), (and:i32 i32:i32:$z, i32:i32:$x)) - Complexity = 12
                  // Dst: (BFI_INT_eg:i32 (XOR_INT:i32 i32:i32:$x, i32:i32:$y), i32:i32:$z, i32:i32:$y)
/*7814*/        0, /*End of Scope*/
/*7815*/      0, /*End of Scope*/
/*7816*/    /*Scope*/ 7|128,1/*135*/, /*->7953*/
/*7818*/      OPC_RecordChild0, // #0 = $src0
/*7819*/      OPC_RecordChild1, // #1 = $src1
/*7820*/      OPC_SwitchType /*2 cases */, 116,  MVT::i32,// ->7939
/*7823*/        OPC_Scope, 101, /*->7926*/ // 2 children in Scope
/*7825*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7827*/          OPC_EmitInteger, MVT::i32, 0, 
/*7830*/          OPC_EmitInteger, MVT::i32, 0, 
/*7833*/          OPC_EmitInteger, MVT::i32, 1, 
/*7836*/          OPC_EmitInteger, MVT::i32, 0, 
/*7839*/          OPC_EmitInteger, MVT::i32, 0, 
/*7842*/          OPC_EmitInteger, MVT::i32, 0, 
/*7845*/          OPC_EmitInteger, MVT::i32, 0, 
/*7848*/          OPC_EmitInteger, MVT::i32, 0, 
/*7851*/          OPC_EmitInteger, MVT::i32, 0, 
/*7854*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7866*/          OPC_EmitInteger, MVT::i32, 0, 
/*7869*/          OPC_EmitInteger, MVT::i32, 0, 
/*7872*/          OPC_EmitInteger, MVT::i32, 0, 
/*7875*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*7887*/          OPC_EmitInteger, MVT::i32, 1, 
/*7890*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*7893*/          OPC_EmitInteger, MVT::i32, 0, 
/*7896*/          OPC_EmitInteger, MVT::i32, 0, 
/*7899*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::OR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (or:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (OR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*7926*/        /*Scope*/ 11, /*->7938*/
/*7927*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*7929*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_OR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_OR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*7938*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i1,// ->7952
/*7941*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*7943*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_OR_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (or:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_OR_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*7953*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85|128,4/*597*/,  TARGET_VAL(ISD::MUL),// ->8555
/*7958*/    OPC_RecordChild0, // #0 = $src0
/*7959*/    OPC_RecordChild1, // #1 = $src1
/*7960*/    OPC_CheckType, MVT::i32,
/*7962*/    OPC_Scope, 107, /*->8071*/ // 7 children in Scope
/*7964*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*7966*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #2
/*7969*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #3
/*7972*/      OPC_EmitInteger, MVT::i32, 0, 
/*7975*/      OPC_EmitInteger, MVT::i32, 0, 
/*7978*/      OPC_EmitInteger, MVT::i32, 1, 
/*7981*/      OPC_EmitInteger, MVT::i32, 0, 
/*7984*/      OPC_EmitInteger, MVT::i32, 0, 
/*7987*/      OPC_EmitInteger, MVT::i32, 0, 
/*7990*/      OPC_EmitInteger, MVT::i32, 0, 
/*7993*/      OPC_EmitInteger, MVT::i32, 0, 
/*7996*/      OPC_EmitInteger, MVT::i32, 0, 
/*7999*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8011*/      OPC_EmitInteger, MVT::i32, 0, 
/*8014*/      OPC_EmitInteger, MVT::i32, 0, 
/*8017*/      OPC_EmitInteger, MVT::i32, 0, 
/*8020*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8032*/      OPC_EmitInteger, MVT::i32, 1, 
/*8035*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8038*/      OPC_EmitInteger, MVT::i32, 0, 
/*8041*/      OPC_EmitInteger, MVT::i32, 0, 
/*8044*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_UINT24_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 4, 5, 6, 7, 8, 9, 2, 10, 11, 12, 13, 3, 14, 15, 16, 17, 18, 19, 20, 21, 
              // Src: (mul:i32 U24:i32:$src0, U24:i32:$src1) - Complexity = 15
              // Dst: (MUL_UINT24_eg:i32 U24:i32:$src0, U24:i32:$src1)
/*8071*/    /*Scope*/ 107, /*->8179*/
/*8072*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*8074*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #2
/*8077*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #3
/*8080*/      OPC_EmitInteger, MVT::i32, 0, 
/*8083*/      OPC_EmitInteger, MVT::i32, 0, 
/*8086*/      OPC_EmitInteger, MVT::i32, 1, 
/*8089*/      OPC_EmitInteger, MVT::i32, 0, 
/*8092*/      OPC_EmitInteger, MVT::i32, 0, 
/*8095*/      OPC_EmitInteger, MVT::i32, 0, 
/*8098*/      OPC_EmitInteger, MVT::i32, 0, 
/*8101*/      OPC_EmitInteger, MVT::i32, 0, 
/*8104*/      OPC_EmitInteger, MVT::i32, 0, 
/*8107*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8119*/      OPC_EmitInteger, MVT::i32, 0, 
/*8122*/      OPC_EmitInteger, MVT::i32, 0, 
/*8125*/      OPC_EmitInteger, MVT::i32, 0, 
/*8128*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8140*/      OPC_EmitInteger, MVT::i32, 1, 
/*8143*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8146*/      OPC_EmitInteger, MVT::i32, 0, 
/*8149*/      OPC_EmitInteger, MVT::i32, 0, 
/*8152*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_INT24_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 4, 5, 6, 7, 8, 9, 2, 10, 11, 12, 13, 3, 14, 15, 16, 17, 18, 19, 20, 21, 
              // Src: (mul:i32 I24:i32:$src0, I24:i32:$src1) - Complexity = 15
              // Dst: (MUL_INT24_cm:i32 I24:i32:$src0, I24:i32:$src1)
/*8179*/    /*Scope*/ 36, /*->8216*/
/*8180*/      OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8182*/      OPC_Scope, 15, /*->8199*/ // 2 children in Scope
/*8184*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectI24:$src0 #2
/*8187*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectI24:$src1 #3
/*8190*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_I32_I24_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (mul:i32 I24:i32:$src0, I24:i32:$src1) - Complexity = 15
                // Dst: (V_MUL_I32_I24_e32:i32 I24:i32:$src0, I24:i32:$src1)
/*8199*/      /*Scope*/ 15, /*->8215*/
/*8200*/        OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectU24:$src0 #2
/*8203*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectU24:$src1 #3
/*8206*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_U32_U24_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (mul:i32 U24:i32:$src0, U24:i32:$src1) - Complexity = 15
                // Dst: (V_MUL_U32_U24_e32:i32 U24:i32:$src0, U24:i32:$src1)
/*8215*/      0, /*End of Scope*/
/*8216*/    /*Scope*/ 101, /*->8318*/
/*8217*/      OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*8219*/      OPC_EmitInteger, MVT::i32, 0, 
/*8222*/      OPC_EmitInteger, MVT::i32, 0, 
/*8225*/      OPC_EmitInteger, MVT::i32, 1, 
/*8228*/      OPC_EmitInteger, MVT::i32, 0, 
/*8231*/      OPC_EmitInteger, MVT::i32, 0, 
/*8234*/      OPC_EmitInteger, MVT::i32, 0, 
/*8237*/      OPC_EmitInteger, MVT::i32, 0, 
/*8240*/      OPC_EmitInteger, MVT::i32, 0, 
/*8243*/      OPC_EmitInteger, MVT::i32, 0, 
/*8246*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8258*/      OPC_EmitInteger, MVT::i32, 0, 
/*8261*/      OPC_EmitInteger, MVT::i32, 0, 
/*8264*/      OPC_EmitInteger, MVT::i32, 0, 
/*8267*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8279*/      OPC_EmitInteger, MVT::i32, 1, 
/*8282*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8285*/      OPC_EmitInteger, MVT::i32, 0, 
/*8288*/      OPC_EmitInteger, MVT::i32, 0, 
/*8291*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8318*/    /*Scope*/ 101, /*->8420*/
/*8319*/      OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*8321*/      OPC_EmitInteger, MVT::i32, 0, 
/*8324*/      OPC_EmitInteger, MVT::i32, 0, 
/*8327*/      OPC_EmitInteger, MVT::i32, 1, 
/*8330*/      OPC_EmitInteger, MVT::i32, 0, 
/*8333*/      OPC_EmitInteger, MVT::i32, 0, 
/*8336*/      OPC_EmitInteger, MVT::i32, 0, 
/*8339*/      OPC_EmitInteger, MVT::i32, 0, 
/*8342*/      OPC_EmitInteger, MVT::i32, 0, 
/*8345*/      OPC_EmitInteger, MVT::i32, 0, 
/*8348*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8360*/      OPC_EmitInteger, MVT::i32, 0, 
/*8363*/      OPC_EmitInteger, MVT::i32, 0, 
/*8366*/      OPC_EmitInteger, MVT::i32, 0, 
/*8369*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8381*/      OPC_EmitInteger, MVT::i32, 1, 
/*8384*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8387*/      OPC_EmitInteger, MVT::i32, 0, 
/*8390*/      OPC_EmitInteger, MVT::i32, 0, 
/*8393*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8420*/    /*Scope*/ 101, /*->8522*/
/*8421*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*8423*/      OPC_EmitInteger, MVT::i32, 0, 
/*8426*/      OPC_EmitInteger, MVT::i32, 0, 
/*8429*/      OPC_EmitInteger, MVT::i32, 1, 
/*8432*/      OPC_EmitInteger, MVT::i32, 0, 
/*8435*/      OPC_EmitInteger, MVT::i32, 0, 
/*8438*/      OPC_EmitInteger, MVT::i32, 0, 
/*8441*/      OPC_EmitInteger, MVT::i32, 0, 
/*8444*/      OPC_EmitInteger, MVT::i32, 0, 
/*8447*/      OPC_EmitInteger, MVT::i32, 0, 
/*8450*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8462*/      OPC_EmitInteger, MVT::i32, 0, 
/*8465*/      OPC_EmitInteger, MVT::i32, 0, 
/*8468*/      OPC_EmitInteger, MVT::i32, 0, 
/*8471*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8483*/      OPC_EmitInteger, MVT::i32, 1, 
/*8486*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8489*/      OPC_EmitInteger, MVT::i32, 0, 
/*8492*/      OPC_EmitInteger, MVT::i32, 0, 
/*8495*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULLO_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mul:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULLO_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8522*/    /*Scope*/ 31, /*->8554*/
/*8523*/      OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8525*/      OPC_EmitInteger, MVT::i32, 0, 
/*8528*/      OPC_EmitInteger, MVT::i32, 0, 
/*8531*/      OPC_EmitInteger, MVT::i32, 0, 
/*8534*/      OPC_EmitInteger, MVT::i32, 0, 
/*8537*/      OPC_EmitInteger, MVT::i32, 0, 
/*8540*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LO_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mul:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_LO_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*8554*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->8587
/*8558*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_load' chained node
/*8559*/    OPC_RecordChild1, // #1 = $addr
/*8560*/    OPC_RecordChild2, // #2 = $chan
/*8561*/    OPC_MoveChild, 2,
/*8563*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*8566*/    OPC_CheckType, MVT::i32,
/*8568*/    OPC_MoveParent,
/*8569*/    OPC_CheckType, MVT::i32,
/*8571*/    OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8573*/    OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/*8576*/    OPC_EmitMergeInputChains1_0,
/*8577*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterLoad), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
            // Src: (AMDGPUregister_load:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterLoad:i32 ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 30,  TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->8620
/*8590*/    OPC_RecordNode,   // #0 = 'AMDGPUregister_store' chained node
/*8591*/    OPC_RecordChild1, // #1 = $val
/*8592*/    OPC_CheckChild1Type, MVT::i32,
/*8594*/    OPC_RecordChild2, // #2 = $addr
/*8595*/    OPC_RecordChild3, // #3 = $chan
/*8596*/    OPC_MoveChild, 3,
/*8598*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*8601*/    OPC_CheckType, MVT::i32,
/*8603*/    OPC_MoveParent,
/*8604*/    OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8606*/    OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/*8609*/    OPC_EmitMergeInputChains1_0,
/*8610*/    OPC_MorphNodeTo, TARGET_VAL(AMDGPU::R600_RegisterStore), 0|OPFL_Chain,
                0/*#VTs*/, 4/*#Ops*/, 1, 4, 5, 3, 
            // Src: (AMDGPUregister_store i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan) - Complexity = 15
            // Dst: (R600_RegisterStore i32:i32:$val, ADDRIndirect:iPTR:$addr, (timm:i32):$chan)
          /*SwitchOpcode*/ 26|128,2/*282*/,  TARGET_VAL(ISD::AND),// ->8906
/*8624*/    OPC_Scope, 0|128,1/*128*/, /*->8755*/ // 2 children in Scope
/*8627*/      OPC_MoveChild, 0,
/*8629*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*8632*/      OPC_RecordChild0, // #0 = $x
/*8633*/      OPC_RecordChild1, // #1 = $y
/*8634*/      OPC_MoveChild, 1,
/*8636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8639*/      OPC_CheckPredicate, 0, // Predicate_legalshift32
/*8641*/      OPC_CheckType, MVT::i32,
/*8643*/      OPC_MoveParent,
/*8644*/      OPC_MoveParent,
/*8645*/      OPC_RecordChild1, // #2 = $z
/*8646*/      OPC_MoveChild, 1,
/*8648*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8651*/      OPC_CheckPredicate, 1, // Predicate_bfemask
/*8653*/      OPC_MoveParent,
/*8654*/      OPC_CheckType, MVT::i32,
/*8656*/      OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8658*/      OPC_EmitInteger, MVT::i32, 0, 
/*8661*/      OPC_EmitInteger, MVT::i32, 0, 
/*8664*/      OPC_EmitInteger, MVT::i32, 0, 
/*8667*/      OPC_EmitInteger, MVT::i32, 0, 
/*8670*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8682*/      OPC_EmitInteger, MVT::i32, 0, 
/*8685*/      OPC_EmitInteger, MVT::i32, 0, 
/*8688*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8700*/      OPC_EmitInteger, MVT::i32, 0, 
/*8703*/      OPC_EmitInteger, MVT::i32, 0, 
/*8706*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8718*/      OPC_EmitInteger, MVT::i32, 1, 
/*8721*/      OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8724*/      OPC_EmitInteger, MVT::i32, 0, 
/*8727*/      OPC_EmitInteger, MVT::i32, 0, 
/*8730*/      OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (and:i32 (srl:i32 i32:i32:$x, (imm:i32)<<P:Predicate_legalshift32>>:$y), (imm:i32)<<P:Predicate_bfemask>><<X:anonymous.val.352>>:$z) - Complexity = 14
              // Dst: (BFE_UINT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*8755*/    /*Scope*/ 20|128,1/*148*/, /*->8905*/
/*8757*/      OPC_RecordChild0, // #0 = $src0
/*8758*/      OPC_RecordChild1, // #1 = $src1
/*8759*/      OPC_SwitchType /*3 cases */, 116,  MVT::i32,// ->8878
/*8762*/        OPC_Scope, 101, /*->8865*/ // 2 children in Scope
/*8764*/          OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8766*/          OPC_EmitInteger, MVT::i32, 0, 
/*8769*/          OPC_EmitInteger, MVT::i32, 0, 
/*8772*/          OPC_EmitInteger, MVT::i32, 1, 
/*8775*/          OPC_EmitInteger, MVT::i32, 0, 
/*8778*/          OPC_EmitInteger, MVT::i32, 0, 
/*8781*/          OPC_EmitInteger, MVT::i32, 0, 
/*8784*/          OPC_EmitInteger, MVT::i32, 0, 
/*8787*/          OPC_EmitInteger, MVT::i32, 0, 
/*8790*/          OPC_EmitInteger, MVT::i32, 0, 
/*8793*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8805*/          OPC_EmitInteger, MVT::i32, 0, 
/*8808*/          OPC_EmitInteger, MVT::i32, 0, 
/*8811*/          OPC_EmitInteger, MVT::i32, 0, 
/*8814*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8826*/          OPC_EmitInteger, MVT::i32, 1, 
/*8829*/          OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*8832*/          OPC_EmitInteger, MVT::i32, 0, 
/*8835*/          OPC_EmitInteger, MVT::i32, 0, 
/*8838*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::AND_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (AND_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*8865*/        /*Scope*/ 11, /*->8877*/
/*8866*/          OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8868*/          OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_AND_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_AND_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*8877*/        0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->8891
/*8880*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8882*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$src0, i64:i64:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i64 i64:i64:$src0, i64:i64:$src1)
              /*SwitchType*/ 11,  MVT::i1,// ->8904
/*8893*/        OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*8895*/        OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_AND_B64), 0,
                    1/*#VTs*/, MVT::i1, 2/*#Ops*/, 0, 1, 
                // Src: (and:i1 i1:i1:$src0, i1:i1:$src1) - Complexity = 3
                // Dst: (S_AND_B64:i1 ?:i1:$src0, ?:i1:$src1)
              0, // EndSwitchType
/*8905*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,33/*4314*/,  TARGET_VAL(ISD::SELECT_CC),// ->13224
/*8910*/    OPC_RecordChild0, // #0 = $src0
/*8911*/    OPC_Scope, 125|128,18/*2429*/, /*->11343*/ // 2 children in Scope
/*8914*/      OPC_CheckChild0Type, MVT::f32,
/*8916*/      OPC_Scope, 110|128,13/*1774*/, /*->10693*/ // 2 children in Scope
/*8919*/        OPC_RecordChild1, // #1 = $src1
/*8920*/        OPC_MoveChild, 2,
/*8922*/        OPC_Scope, 116|128,6/*884*/, /*->9809*/ // 2 children in Scope
/*8925*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8936*/          OPC_MoveParent,
/*8937*/          OPC_MoveChild, 3,
/*8939*/          OPC_CheckInteger, 0, 
/*8941*/          OPC_MoveParent,
/*8942*/          OPC_MoveChild, 4,
/*8944*/          OPC_Scope, 7|128,5/*647*/, /*->9594*/ // 3 children in Scope
/*8947*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*8950*/            OPC_Scope, 106, /*->9058*/ // 6 children in Scope
/*8952*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*8954*/              OPC_MoveParent,
/*8955*/              OPC_CheckType, MVT::i32,
/*8957*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*8959*/              OPC_EmitInteger, MVT::i32, 0, 
/*8962*/              OPC_EmitInteger, MVT::i32, 0, 
/*8965*/              OPC_EmitInteger, MVT::i32, 1, 
/*8968*/              OPC_EmitInteger, MVT::i32, 0, 
/*8971*/              OPC_EmitInteger, MVT::i32, 0, 
/*8974*/              OPC_EmitInteger, MVT::i32, 0, 
/*8977*/              OPC_EmitInteger, MVT::i32, 0, 
/*8980*/              OPC_EmitInteger, MVT::i32, 0, 
/*8983*/              OPC_EmitInteger, MVT::i32, 0, 
/*8986*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8998*/              OPC_EmitInteger, MVT::i32, 0, 
/*9001*/              OPC_EmitInteger, MVT::i32, 0, 
/*9004*/              OPC_EmitInteger, MVT::i32, 0, 
/*9007*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9019*/              OPC_EmitInteger, MVT::i32, 1, 
/*9022*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9025*/              OPC_EmitInteger, MVT::i32, 0, 
/*9028*/              OPC_EmitInteger, MVT::i32, 0, 
/*9031*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 13
                      // Dst: (SETE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9058*/            /*Scope*/ 106, /*->9165*/
/*9059*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9061*/              OPC_MoveParent,
/*9062*/              OPC_CheckType, MVT::i32,
/*9064*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9066*/              OPC_EmitInteger, MVT::i32, 0, 
/*9069*/              OPC_EmitInteger, MVT::i32, 0, 
/*9072*/              OPC_EmitInteger, MVT::i32, 1, 
/*9075*/              OPC_EmitInteger, MVT::i32, 0, 
/*9078*/              OPC_EmitInteger, MVT::i32, 0, 
/*9081*/              OPC_EmitInteger, MVT::i32, 0, 
/*9084*/              OPC_EmitInteger, MVT::i32, 0, 
/*9087*/              OPC_EmitInteger, MVT::i32, 0, 
/*9090*/              OPC_EmitInteger, MVT::i32, 0, 
/*9093*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9105*/              OPC_EmitInteger, MVT::i32, 0, 
/*9108*/              OPC_EmitInteger, MVT::i32, 0, 
/*9111*/              OPC_EmitInteger, MVT::i32, 0, 
/*9114*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9126*/              OPC_EmitInteger, MVT::i32, 1, 
/*9129*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9132*/              OPC_EmitInteger, MVT::i32, 0, 
/*9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*9138*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9165*/            /*Scope*/ 106, /*->9272*/
/*9166*/              OPC_CheckPredicate, 4, // Predicate_COND_GE
/*9168*/              OPC_MoveParent,
/*9169*/              OPC_CheckType, MVT::i32,
/*9171*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9173*/              OPC_EmitInteger, MVT::i32, 0, 
/*9176*/              OPC_EmitInteger, MVT::i32, 0, 
/*9179*/              OPC_EmitInteger, MVT::i32, 1, 
/*9182*/              OPC_EmitInteger, MVT::i32, 0, 
/*9185*/              OPC_EmitInteger, MVT::i32, 0, 
/*9188*/              OPC_EmitInteger, MVT::i32, 0, 
/*9191*/              OPC_EmitInteger, MVT::i32, 0, 
/*9194*/              OPC_EmitInteger, MVT::i32, 0, 
/*9197*/              OPC_EmitInteger, MVT::i32, 0, 
/*9200*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9212*/              OPC_EmitInteger, MVT::i32, 0, 
/*9215*/              OPC_EmitInteger, MVT::i32, 0, 
/*9218*/              OPC_EmitInteger, MVT::i32, 0, 
/*9221*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9233*/              OPC_EmitInteger, MVT::i32, 1, 
/*9236*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9239*/              OPC_EmitInteger, MVT::i32, 0, 
/*9242*/              OPC_EmitInteger, MVT::i32, 0, 
/*9245*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9272*/            /*Scope*/ 106, /*->9379*/
/*9273*/              OPC_CheckPredicate, 5, // Predicate_COND_NE
/*9275*/              OPC_MoveParent,
/*9276*/              OPC_CheckType, MVT::i32,
/*9278*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9280*/              OPC_EmitInteger, MVT::i32, 0, 
/*9283*/              OPC_EmitInteger, MVT::i32, 0, 
/*9286*/              OPC_EmitInteger, MVT::i32, 1, 
/*9289*/              OPC_EmitInteger, MVT::i32, 0, 
/*9292*/              OPC_EmitInteger, MVT::i32, 0, 
/*9295*/              OPC_EmitInteger, MVT::i32, 0, 
/*9298*/              OPC_EmitInteger, MVT::i32, 0, 
/*9301*/              OPC_EmitInteger, MVT::i32, 0, 
/*9304*/              OPC_EmitInteger, MVT::i32, 0, 
/*9307*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9319*/              OPC_EmitInteger, MVT::i32, 0, 
/*9322*/              OPC_EmitInteger, MVT::i32, 0, 
/*9325*/              OPC_EmitInteger, MVT::i32, 0, 
/*9328*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9340*/              OPC_EmitInteger, MVT::i32, 1, 
/*9343*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9346*/              OPC_EmitInteger, MVT::i32, 0, 
/*9349*/              OPC_EmitInteger, MVT::i32, 0, 
/*9352*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 13
                      // Dst: (SETNE_DX10:i32 f32:f32:$src0, f32:f32:$src1)
/*9379*/            /*Scope*/ 106, /*->9486*/
/*9380*/              OPC_CheckPredicate, 6, // Predicate_COND_LT
/*9382*/              OPC_MoveParent,
/*9383*/              OPC_CheckType, MVT::i32,
/*9385*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9387*/              OPC_EmitInteger, MVT::i32, 0, 
/*9390*/              OPC_EmitInteger, MVT::i32, 0, 
/*9393*/              OPC_EmitInteger, MVT::i32, 1, 
/*9396*/              OPC_EmitInteger, MVT::i32, 0, 
/*9399*/              OPC_EmitInteger, MVT::i32, 0, 
/*9402*/              OPC_EmitInteger, MVT::i32, 0, 
/*9405*/              OPC_EmitInteger, MVT::i32, 0, 
/*9408*/              OPC_EmitInteger, MVT::i32, 0, 
/*9411*/              OPC_EmitInteger, MVT::i32, 0, 
/*9414*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9426*/              OPC_EmitInteger, MVT::i32, 0, 
/*9429*/              OPC_EmitInteger, MVT::i32, 0, 
/*9432*/              OPC_EmitInteger, MVT::i32, 0, 
/*9435*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9447*/              OPC_EmitInteger, MVT::i32, 1, 
/*9450*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9453*/              OPC_EmitInteger, MVT::i32, 0, 
/*9456*/              OPC_EmitInteger, MVT::i32, 0, 
/*9459*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*9486*/            /*Scope*/ 106, /*->9593*/
/*9487*/              OPC_CheckPredicate, 7, // Predicate_COND_LE
/*9489*/              OPC_MoveParent,
/*9490*/              OPC_CheckType, MVT::i32,
/*9492*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9494*/              OPC_EmitInteger, MVT::i32, 0, 
/*9497*/              OPC_EmitInteger, MVT::i32, 0, 
/*9500*/              OPC_EmitInteger, MVT::i32, 1, 
/*9503*/              OPC_EmitInteger, MVT::i32, 0, 
/*9506*/              OPC_EmitInteger, MVT::i32, 0, 
/*9509*/              OPC_EmitInteger, MVT::i32, 0, 
/*9512*/              OPC_EmitInteger, MVT::i32, 0, 
/*9515*/              OPC_EmitInteger, MVT::i32, 0, 
/*9518*/              OPC_EmitInteger, MVT::i32, 0, 
/*9521*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9533*/              OPC_EmitInteger, MVT::i32, 0, 
/*9536*/              OPC_EmitInteger, MVT::i32, 0, 
/*9539*/              OPC_EmitInteger, MVT::i32, 0, 
/*9542*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9554*/              OPC_EmitInteger, MVT::i32, 1, 
/*9557*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9560*/              OPC_EmitInteger, MVT::i32, 0, 
/*9563*/              OPC_EmitInteger, MVT::i32, 0, 
/*9566*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_DX10), 0,
                          1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:i32 ?:f32:$src1, ?:f32:$src0)
/*9593*/            0, /*End of Scope*/
/*9594*/          /*Scope*/ 106, /*->9701*/
/*9595*/            OPC_CheckCondCode, ISD::SETO,
/*9597*/            OPC_MoveParent,
/*9598*/            OPC_CheckType, MVT::i32,
/*9600*/            OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9602*/            OPC_EmitInteger, MVT::i32, 0, 
/*9605*/            OPC_EmitInteger, MVT::i32, 0, 
/*9608*/            OPC_EmitInteger, MVT::i32, 1, 
/*9611*/            OPC_EmitInteger, MVT::i32, 0, 
/*9614*/            OPC_EmitInteger, MVT::i32, 0, 
/*9617*/            OPC_EmitInteger, MVT::i32, 0, 
/*9620*/            OPC_EmitInteger, MVT::i32, 0, 
/*9623*/            OPC_EmitInteger, MVT::i32, 0, 
/*9626*/            OPC_EmitInteger, MVT::i32, 0, 
/*9629*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9641*/            OPC_EmitInteger, MVT::i32, 0, 
/*9644*/            OPC_EmitInteger, MVT::i32, 0, 
/*9647*/            OPC_EmitInteger, MVT::i32, 0, 
/*9650*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9662*/            OPC_EmitInteger, MVT::i32, 1, 
/*9665*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9668*/            OPC_EmitInteger, MVT::i32, 0, 
/*9671*/            OPC_EmitInteger, MVT::i32, 0, 
/*9674*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETO:Other) - Complexity = 13
                    // Dst: (SETE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*9701*/          /*Scope*/ 106, /*->9808*/
/*9702*/            OPC_CheckCondCode, ISD::SETUO,
/*9704*/            OPC_MoveParent,
/*9705*/            OPC_CheckType, MVT::i32,
/*9707*/            OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9709*/            OPC_EmitInteger, MVT::i32, 0, 
/*9712*/            OPC_EmitInteger, MVT::i32, 0, 
/*9715*/            OPC_EmitInteger, MVT::i32, 1, 
/*9718*/            OPC_EmitInteger, MVT::i32, 0, 
/*9721*/            OPC_EmitInteger, MVT::i32, 0, 
/*9724*/            OPC_EmitInteger, MVT::i32, 0, 
/*9727*/            OPC_EmitInteger, MVT::i32, 0, 
/*9730*/            OPC_EmitInteger, MVT::i32, 0, 
/*9733*/            OPC_EmitInteger, MVT::i32, 0, 
/*9736*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9748*/            OPC_EmitInteger, MVT::i32, 0, 
/*9751*/            OPC_EmitInteger, MVT::i32, 0, 
/*9754*/            OPC_EmitInteger, MVT::i32, 0, 
/*9757*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9769*/            OPC_EmitInteger, MVT::i32, 1, 
/*9772*/            OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9775*/            OPC_EmitInteger, MVT::i32, 0, 
/*9778*/            OPC_EmitInteger, MVT::i32, 0, 
/*9781*/            OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_DX10), 0,
                        1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:i32 f32:f32:$src0, f32:f32:$src1, -1:i32, 0:i32, SETUO:Other) - Complexity = 13
                    // Dst: (SETNE_DX10:i32 ?:f32:$src0, ?:f32:$src1)
/*9808*/          0, /*End of Scope*/
/*9809*/        /*Scope*/ 113|128,6/*881*/, /*->10692*/
/*9811*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*9814*/          OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*9816*/          OPC_MoveParent,
/*9817*/          OPC_MoveChild, 3,
/*9819*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*9822*/          OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*9824*/          OPC_MoveParent,
/*9825*/          OPC_MoveChild, 4,
/*9827*/          OPC_Scope, 7|128,5/*647*/, /*->10477*/ // 3 children in Scope
/*9830*/            OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*9833*/            OPC_Scope, 106, /*->9941*/ // 6 children in Scope
/*9835*/              OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*9837*/              OPC_MoveParent,
/*9838*/              OPC_CheckType, MVT::f32,
/*9840*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9842*/              OPC_EmitInteger, MVT::i32, 0, 
/*9845*/              OPC_EmitInteger, MVT::i32, 0, 
/*9848*/              OPC_EmitInteger, MVT::i32, 1, 
/*9851*/              OPC_EmitInteger, MVT::i32, 0, 
/*9854*/              OPC_EmitInteger, MVT::i32, 0, 
/*9857*/              OPC_EmitInteger, MVT::i32, 0, 
/*9860*/              OPC_EmitInteger, MVT::i32, 0, 
/*9863*/              OPC_EmitInteger, MVT::i32, 0, 
/*9866*/              OPC_EmitInteger, MVT::i32, 0, 
/*9869*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9881*/              OPC_EmitInteger, MVT::i32, 0, 
/*9884*/              OPC_EmitInteger, MVT::i32, 0, 
/*9887*/              OPC_EmitInteger, MVT::i32, 0, 
/*9890*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9902*/              OPC_EmitInteger, MVT::i32, 1, 
/*9905*/              OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*9908*/              OPC_EmitInteger, MVT::i32, 0, 
/*9911*/              OPC_EmitInteger, MVT::i32, 0, 
/*9914*/              OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 11
                      // Dst: (SETE:f32 f32:f32:$src0, f32:f32:$src1)
/*9941*/            /*Scope*/ 106, /*->10048*/
/*9942*/              OPC_CheckPredicate, 3, // Predicate_COND_GT
/*9944*/              OPC_MoveParent,
/*9945*/              OPC_CheckType, MVT::f32,
/*9947*/              OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*9949*/              OPC_EmitInteger, MVT::i32, 0, 
/*9952*/              OPC_EmitInteger, MVT::i32, 0, 
/*9955*/              OPC_EmitInteger, MVT::i32, 1, 
/*9958*/              OPC_EmitInteger, MVT::i32, 0, 
/*9961*/              OPC_EmitInteger, MVT::i32, 0, 
/*9964*/              OPC_EmitInteger, MVT::i32, 0, 
/*9967*/              OPC_EmitInteger, MVT::i32, 0, 
/*9970*/              OPC_EmitInteger, MVT::i32, 0, 
/*9973*/              OPC_EmitInteger, MVT::i32, 0, 
/*9976*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*9988*/              OPC_EmitInteger, MVT::i32, 0, 
/*9991*/              OPC_EmitInteger, MVT::i32, 0, 
/*9994*/              OPC_EmitInteger, MVT::i32, 0, 
/*9997*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10009*/             OPC_EmitInteger, MVT::i32, 1, 
/*10012*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10015*/             OPC_EmitInteger, MVT::i32, 0, 
/*10018*/             OPC_EmitInteger, MVT::i32, 0, 
/*10021*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 11
                      // Dst: (SGT:f32 f32:f32:$src0, f32:f32:$src1)
/*10048*/           /*Scope*/ 106, /*->10155*/
/*10049*/             OPC_CheckPredicate, 4, // Predicate_COND_GE
/*10051*/             OPC_MoveParent,
/*10052*/             OPC_CheckType, MVT::f32,
/*10054*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10056*/             OPC_EmitInteger, MVT::i32, 0, 
/*10059*/             OPC_EmitInteger, MVT::i32, 0, 
/*10062*/             OPC_EmitInteger, MVT::i32, 1, 
/*10065*/             OPC_EmitInteger, MVT::i32, 0, 
/*10068*/             OPC_EmitInteger, MVT::i32, 0, 
/*10071*/             OPC_EmitInteger, MVT::i32, 0, 
/*10074*/             OPC_EmitInteger, MVT::i32, 0, 
/*10077*/             OPC_EmitInteger, MVT::i32, 0, 
/*10080*/             OPC_EmitInteger, MVT::i32, 0, 
/*10083*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10095*/             OPC_EmitInteger, MVT::i32, 0, 
/*10098*/             OPC_EmitInteger, MVT::i32, 0, 
/*10101*/             OPC_EmitInteger, MVT::i32, 0, 
/*10104*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10116*/             OPC_EmitInteger, MVT::i32, 1, 
/*10119*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10122*/             OPC_EmitInteger, MVT::i32, 0, 
/*10125*/             OPC_EmitInteger, MVT::i32, 0, 
/*10128*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 11
                      // Dst: (SGE:f32 f32:f32:$src0, f32:f32:$src1)
/*10155*/           /*Scope*/ 106, /*->10262*/
/*10156*/             OPC_CheckPredicate, 5, // Predicate_COND_NE
/*10158*/             OPC_MoveParent,
/*10159*/             OPC_CheckType, MVT::f32,
/*10161*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10163*/             OPC_EmitInteger, MVT::i32, 0, 
/*10166*/             OPC_EmitInteger, MVT::i32, 0, 
/*10169*/             OPC_EmitInteger, MVT::i32, 1, 
/*10172*/             OPC_EmitInteger, MVT::i32, 0, 
/*10175*/             OPC_EmitInteger, MVT::i32, 0, 
/*10178*/             OPC_EmitInteger, MVT::i32, 0, 
/*10181*/             OPC_EmitInteger, MVT::i32, 0, 
/*10184*/             OPC_EmitInteger, MVT::i32, 0, 
/*10187*/             OPC_EmitInteger, MVT::i32, 0, 
/*10190*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10202*/             OPC_EmitInteger, MVT::i32, 0, 
/*10205*/             OPC_EmitInteger, MVT::i32, 0, 
/*10208*/             OPC_EmitInteger, MVT::i32, 0, 
/*10211*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10223*/             OPC_EmitInteger, MVT::i32, 1, 
/*10226*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10229*/             OPC_EmitInteger, MVT::i32, 0, 
/*10232*/             OPC_EmitInteger, MVT::i32, 0, 
/*10235*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 11
                      // Dst: (SNE:f32 f32:f32:$src0, f32:f32:$src1)
/*10262*/           /*Scope*/ 106, /*->10369*/
/*10263*/             OPC_CheckPredicate, 6, // Predicate_COND_LT
/*10265*/             OPC_MoveParent,
/*10266*/             OPC_CheckType, MVT::f32,
/*10268*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10270*/             OPC_EmitInteger, MVT::i32, 0, 
/*10273*/             OPC_EmitInteger, MVT::i32, 0, 
/*10276*/             OPC_EmitInteger, MVT::i32, 1, 
/*10279*/             OPC_EmitInteger, MVT::i32, 0, 
/*10282*/             OPC_EmitInteger, MVT::i32, 0, 
/*10285*/             OPC_EmitInteger, MVT::i32, 0, 
/*10288*/             OPC_EmitInteger, MVT::i32, 0, 
/*10291*/             OPC_EmitInteger, MVT::i32, 0, 
/*10294*/             OPC_EmitInteger, MVT::i32, 0, 
/*10297*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10309*/             OPC_EmitInteger, MVT::i32, 0, 
/*10312*/             OPC_EmitInteger, MVT::i32, 0, 
/*10315*/             OPC_EmitInteger, MVT::i32, 0, 
/*10318*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10330*/             OPC_EmitInteger, MVT::i32, 1, 
/*10333*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10336*/             OPC_EmitInteger, MVT::i32, 0, 
/*10339*/             OPC_EmitInteger, MVT::i32, 0, 
/*10342*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGT), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 11
                      // Dst: (SGT:f32 ?:f32:$src1, ?:f32:$src0)
/*10369*/           /*Scope*/ 106, /*->10476*/
/*10370*/             OPC_CheckPredicate, 7, // Predicate_COND_LE
/*10372*/             OPC_MoveParent,
/*10373*/             OPC_CheckType, MVT::f32,
/*10375*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10377*/             OPC_EmitInteger, MVT::i32, 0, 
/*10380*/             OPC_EmitInteger, MVT::i32, 0, 
/*10383*/             OPC_EmitInteger, MVT::i32, 1, 
/*10386*/             OPC_EmitInteger, MVT::i32, 0, 
/*10389*/             OPC_EmitInteger, MVT::i32, 0, 
/*10392*/             OPC_EmitInteger, MVT::i32, 0, 
/*10395*/             OPC_EmitInteger, MVT::i32, 0, 
/*10398*/             OPC_EmitInteger, MVT::i32, 0, 
/*10401*/             OPC_EmitInteger, MVT::i32, 0, 
/*10404*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10416*/             OPC_EmitInteger, MVT::i32, 0, 
/*10419*/             OPC_EmitInteger, MVT::i32, 0, 
/*10422*/             OPC_EmitInteger, MVT::i32, 0, 
/*10425*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10437*/             OPC_EmitInteger, MVT::i32, 1, 
/*10440*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10443*/             OPC_EmitInteger, MVT::i32, 0, 
/*10446*/             OPC_EmitInteger, MVT::i32, 0, 
/*10449*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SGE), 0,
                          1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 11
                      // Dst: (SGE:f32 ?:f32:$src1, ?:f32:$src0)
/*10476*/           0, /*End of Scope*/
/*10477*/         /*Scope*/ 106, /*->10584*/
/*10478*/           OPC_CheckCondCode, ISD::SETO,
/*10480*/           OPC_MoveParent,
/*10481*/           OPC_CheckType, MVT::f32,
/*10483*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10485*/           OPC_EmitInteger, MVT::i32, 0, 
/*10488*/           OPC_EmitInteger, MVT::i32, 0, 
/*10491*/           OPC_EmitInteger, MVT::i32, 1, 
/*10494*/           OPC_EmitInteger, MVT::i32, 0, 
/*10497*/           OPC_EmitInteger, MVT::i32, 0, 
/*10500*/           OPC_EmitInteger, MVT::i32, 0, 
/*10503*/           OPC_EmitInteger, MVT::i32, 0, 
/*10506*/           OPC_EmitInteger, MVT::i32, 0, 
/*10509*/           OPC_EmitInteger, MVT::i32, 0, 
/*10512*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10524*/           OPC_EmitInteger, MVT::i32, 0, 
/*10527*/           OPC_EmitInteger, MVT::i32, 0, 
/*10530*/           OPC_EmitInteger, MVT::i32, 0, 
/*10533*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10545*/           OPC_EmitInteger, MVT::i32, 1, 
/*10548*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10551*/           OPC_EmitInteger, MVT::i32, 0, 
/*10554*/           OPC_EmitInteger, MVT::i32, 0, 
/*10557*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETO:Other) - Complexity = 11
                    // Dst: (SETE:f32 ?:f32:$src0, ?:f32:$src1)
/*10584*/         /*Scope*/ 106, /*->10691*/
/*10585*/           OPC_CheckCondCode, ISD::SETUO,
/*10587*/           OPC_MoveParent,
/*10588*/           OPC_CheckType, MVT::f32,
/*10590*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*10592*/           OPC_EmitInteger, MVT::i32, 0, 
/*10595*/           OPC_EmitInteger, MVT::i32, 0, 
/*10598*/           OPC_EmitInteger, MVT::i32, 1, 
/*10601*/           OPC_EmitInteger, MVT::i32, 0, 
/*10604*/           OPC_EmitInteger, MVT::i32, 0, 
/*10607*/           OPC_EmitInteger, MVT::i32, 0, 
/*10610*/           OPC_EmitInteger, MVT::i32, 0, 
/*10613*/           OPC_EmitInteger, MVT::i32, 0, 
/*10616*/           OPC_EmitInteger, MVT::i32, 0, 
/*10619*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10631*/           OPC_EmitInteger, MVT::i32, 0, 
/*10634*/           OPC_EmitInteger, MVT::i32, 0, 
/*10637*/           OPC_EmitInteger, MVT::i32, 0, 
/*10640*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10652*/           OPC_EmitInteger, MVT::i32, 1, 
/*10655*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10658*/           OPC_EmitInteger, MVT::i32, 0, 
/*10661*/           OPC_EmitInteger, MVT::i32, 0, 
/*10664*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SNE), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:f32 f32:f32:$src0, f32:f32:$src1, (fpimm:f32)<<P:Predicate_FP_ONE>>, (fpimm:f32)<<P:Predicate_FP_ZERO>>, SETUO:Other) - Complexity = 11
                    // Dst: (SNE:f32 ?:f32:$src0, ?:f32:$src1)
/*10691*/         0, /*End of Scope*/
/*10692*/       0, /*End of Scope*/
/*10693*/     /*Scope*/ 7|128,5/*647*/, /*->11342*/
/*10695*/       OPC_MoveChild, 1,
/*10697*/       OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*10700*/       OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*10702*/       OPC_MoveParent,
/*10703*/       OPC_RecordChild2, // #1 = $src1
/*10704*/       OPC_RecordChild3, // #2 = $src2
/*10705*/       OPC_MoveChild, 4,
/*10707*/       OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*10710*/       OPC_Scope, 104, /*->10816*/ // 6 children in Scope
/*10712*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*10714*/         OPC_MoveParent,
/*10715*/         OPC_CheckType, MVT::f32,
/*10717*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10719*/         OPC_EmitInteger, MVT::i32, 0, 
/*10722*/         OPC_EmitInteger, MVT::i32, 0, 
/*10725*/         OPC_EmitInteger, MVT::i32, 0, 
/*10728*/         OPC_EmitInteger, MVT::i32, 0, 
/*10731*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10743*/         OPC_EmitInteger, MVT::i32, 0, 
/*10746*/         OPC_EmitInteger, MVT::i32, 0, 
/*10749*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10761*/         OPC_EmitInteger, MVT::i32, 0, 
/*10764*/         OPC_EmitInteger, MVT::i32, 0, 
/*10767*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10779*/         OPC_EmitInteger, MVT::i32, 1, 
/*10782*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10785*/         OPC_EmitInteger, MVT::i32, 0, 
/*10788*/         OPC_EmitInteger, MVT::i32, 0, 
/*10791*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*10816*/       /*Scope*/ 104, /*->10921*/
/*10817*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*10819*/         OPC_MoveParent,
/*10820*/         OPC_CheckType, MVT::f32,
/*10822*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10824*/         OPC_EmitInteger, MVT::i32, 0, 
/*10827*/         OPC_EmitInteger, MVT::i32, 0, 
/*10830*/         OPC_EmitInteger, MVT::i32, 0, 
/*10833*/         OPC_EmitInteger, MVT::i32, 0, 
/*10836*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10848*/         OPC_EmitInteger, MVT::i32, 0, 
/*10851*/         OPC_EmitInteger, MVT::i32, 0, 
/*10854*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10866*/         OPC_EmitInteger, MVT::i32, 0, 
/*10869*/         OPC_EmitInteger, MVT::i32, 0, 
/*10872*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10884*/         OPC_EmitInteger, MVT::i32, 1, 
/*10887*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10890*/         OPC_EmitInteger, MVT::i32, 0, 
/*10893*/         OPC_EmitInteger, MVT::i32, 0, 
/*10896*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*10921*/       /*Scope*/ 104, /*->11026*/
/*10922*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*10924*/         OPC_MoveParent,
/*10925*/         OPC_CheckType, MVT::f32,
/*10927*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*10929*/         OPC_EmitInteger, MVT::i32, 0, 
/*10932*/         OPC_EmitInteger, MVT::i32, 0, 
/*10935*/         OPC_EmitInteger, MVT::i32, 0, 
/*10938*/         OPC_EmitInteger, MVT::i32, 0, 
/*10941*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10953*/         OPC_EmitInteger, MVT::i32, 0, 
/*10956*/         OPC_EmitInteger, MVT::i32, 0, 
/*10959*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10971*/         OPC_EmitInteger, MVT::i32, 0, 
/*10974*/         OPC_EmitInteger, MVT::i32, 0, 
/*10977*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*10989*/         OPC_EmitInteger, MVT::i32, 1, 
/*10992*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*10995*/         OPC_EmitInteger, MVT::i32, 0, 
/*10998*/         OPC_EmitInteger, MVT::i32, 0, 
/*11001*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11026*/       /*Scope*/ 104, /*->11131*/
/*11027*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*11029*/         OPC_MoveParent,
/*11030*/         OPC_CheckType, MVT::f32,
/*11032*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11034*/         OPC_EmitInteger, MVT::i32, 0, 
/*11037*/         OPC_EmitInteger, MVT::i32, 0, 
/*11040*/         OPC_EmitInteger, MVT::i32, 0, 
/*11043*/         OPC_EmitInteger, MVT::i32, 0, 
/*11046*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11058*/         OPC_EmitInteger, MVT::i32, 0, 
/*11061*/         OPC_EmitInteger, MVT::i32, 0, 
/*11064*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11076*/         OPC_EmitInteger, MVT::i32, 0, 
/*11079*/         OPC_EmitInteger, MVT::i32, 0, 
/*11082*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11094*/         OPC_EmitInteger, MVT::i32, 1, 
/*11097*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11100*/         OPC_EmitInteger, MVT::i32, 0, 
/*11103*/         OPC_EmitInteger, MVT::i32, 0, 
/*11106*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 7
                  // Dst: (CNDE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11131*/       /*Scope*/ 104, /*->11236*/
/*11132*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*11134*/         OPC_MoveParent,
/*11135*/         OPC_CheckType, MVT::f32,
/*11137*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11139*/         OPC_EmitInteger, MVT::i32, 0, 
/*11142*/         OPC_EmitInteger, MVT::i32, 0, 
/*11145*/         OPC_EmitInteger, MVT::i32, 0, 
/*11148*/         OPC_EmitInteger, MVT::i32, 0, 
/*11151*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11163*/         OPC_EmitInteger, MVT::i32, 0, 
/*11166*/         OPC_EmitInteger, MVT::i32, 0, 
/*11169*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11181*/         OPC_EmitInteger, MVT::i32, 0, 
/*11184*/         OPC_EmitInteger, MVT::i32, 0, 
/*11187*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11199*/         OPC_EmitInteger, MVT::i32, 1, 
/*11202*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11205*/         OPC_EmitInteger, MVT::i32, 0, 
/*11208*/         OPC_EmitInteger, MVT::i32, 0, 
/*11211*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 7
                  // Dst: (CNDGT_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11236*/       /*Scope*/ 104, /*->11341*/
/*11237*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*11239*/         OPC_MoveParent,
/*11240*/         OPC_CheckType, MVT::f32,
/*11242*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11244*/         OPC_EmitInteger, MVT::i32, 0, 
/*11247*/         OPC_EmitInteger, MVT::i32, 0, 
/*11250*/         OPC_EmitInteger, MVT::i32, 0, 
/*11253*/         OPC_EmitInteger, MVT::i32, 0, 
/*11256*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11268*/         OPC_EmitInteger, MVT::i32, 0, 
/*11271*/         OPC_EmitInteger, MVT::i32, 0, 
/*11274*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11286*/         OPC_EmitInteger, MVT::i32, 0, 
/*11289*/         OPC_EmitInteger, MVT::i32, 0, 
/*11292*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11304*/         OPC_EmitInteger, MVT::i32, 1, 
/*11307*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11310*/         OPC_EmitInteger, MVT::i32, 0, 
/*11313*/         OPC_EmitInteger, MVT::i32, 0, 
/*11316*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:f32 f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, f32:f32:$src1, f32:f32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 7
                  // Dst: (CNDGE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*11341*/       0, /*End of Scope*/
/*11342*/     0, /*End of Scope*/
/*11343*/   /*Scope*/ 86|128,14/*1878*/, /*->13223*/
/*11345*/     OPC_CheckChild0Type, MVT::i32,
/*11347*/     OPC_Scope, 70|128,8/*1094*/, /*->12444*/ // 2 children in Scope
/*11350*/       OPC_RecordChild1, // #1 = $src1
/*11351*/       OPC_MoveChild, 2,
/*11353*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11364*/       OPC_MoveParent,
/*11365*/       OPC_MoveChild, 3,
/*11367*/       OPC_CheckInteger, 0, 
/*11369*/       OPC_MoveParent,
/*11370*/       OPC_MoveChild, 4,
/*11372*/       OPC_Scope, 106, /*->11480*/ // 10 children in Scope
/*11374*/         OPC_CheckCondCode, ISD::SETEQ,
/*11376*/         OPC_MoveParent,
/*11377*/         OPC_CheckType, MVT::i32,
/*11379*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11381*/         OPC_EmitInteger, MVT::i32, 0, 
/*11384*/         OPC_EmitInteger, MVT::i32, 0, 
/*11387*/         OPC_EmitInteger, MVT::i32, 1, 
/*11390*/         OPC_EmitInteger, MVT::i32, 0, 
/*11393*/         OPC_EmitInteger, MVT::i32, 0, 
/*11396*/         OPC_EmitInteger, MVT::i32, 0, 
/*11399*/         OPC_EmitInteger, MVT::i32, 0, 
/*11402*/         OPC_EmitInteger, MVT::i32, 0, 
/*11405*/         OPC_EmitInteger, MVT::i32, 0, 
/*11408*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11420*/         OPC_EmitInteger, MVT::i32, 0, 
/*11423*/         OPC_EmitInteger, MVT::i32, 0, 
/*11426*/         OPC_EmitInteger, MVT::i32, 0, 
/*11429*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11441*/         OPC_EmitInteger, MVT::i32, 1, 
/*11444*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11447*/         OPC_EmitInteger, MVT::i32, 0, 
/*11450*/         OPC_EmitInteger, MVT::i32, 0, 
/*11453*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETEQ:Other) - Complexity = 13
                  // Dst: (SETE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11480*/       /*Scope*/ 106, /*->11587*/
/*11481*/         OPC_CheckCondCode, ISD::SETGT,
/*11483*/         OPC_MoveParent,
/*11484*/         OPC_CheckType, MVT::i32,
/*11486*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11488*/         OPC_EmitInteger, MVT::i32, 0, 
/*11491*/         OPC_EmitInteger, MVT::i32, 0, 
/*11494*/         OPC_EmitInteger, MVT::i32, 1, 
/*11497*/         OPC_EmitInteger, MVT::i32, 0, 
/*11500*/         OPC_EmitInteger, MVT::i32, 0, 
/*11503*/         OPC_EmitInteger, MVT::i32, 0, 
/*11506*/         OPC_EmitInteger, MVT::i32, 0, 
/*11509*/         OPC_EmitInteger, MVT::i32, 0, 
/*11512*/         OPC_EmitInteger, MVT::i32, 0, 
/*11515*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11527*/         OPC_EmitInteger, MVT::i32, 0, 
/*11530*/         OPC_EmitInteger, MVT::i32, 0, 
/*11533*/         OPC_EmitInteger, MVT::i32, 0, 
/*11536*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11548*/         OPC_EmitInteger, MVT::i32, 1, 
/*11551*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11554*/         OPC_EmitInteger, MVT::i32, 0, 
/*11557*/         OPC_EmitInteger, MVT::i32, 0, 
/*11560*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11587*/       /*Scope*/ 106, /*->11694*/
/*11588*/         OPC_CheckCondCode, ISD::SETGE,
/*11590*/         OPC_MoveParent,
/*11591*/         OPC_CheckType, MVT::i32,
/*11593*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11595*/         OPC_EmitInteger, MVT::i32, 0, 
/*11598*/         OPC_EmitInteger, MVT::i32, 0, 
/*11601*/         OPC_EmitInteger, MVT::i32, 1, 
/*11604*/         OPC_EmitInteger, MVT::i32, 0, 
/*11607*/         OPC_EmitInteger, MVT::i32, 0, 
/*11610*/         OPC_EmitInteger, MVT::i32, 0, 
/*11613*/         OPC_EmitInteger, MVT::i32, 0, 
/*11616*/         OPC_EmitInteger, MVT::i32, 0, 
/*11619*/         OPC_EmitInteger, MVT::i32, 0, 
/*11622*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11634*/         OPC_EmitInteger, MVT::i32, 0, 
/*11637*/         OPC_EmitInteger, MVT::i32, 0, 
/*11640*/         OPC_EmitInteger, MVT::i32, 0, 
/*11643*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11655*/         OPC_EmitInteger, MVT::i32, 1, 
/*11658*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11661*/         OPC_EmitInteger, MVT::i32, 0, 
/*11664*/         OPC_EmitInteger, MVT::i32, 0, 
/*11667*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETGE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11694*/       /*Scope*/ 106, /*->11801*/
/*11695*/         OPC_CheckCondCode, ISD::SETNE,
/*11697*/         OPC_MoveParent,
/*11698*/         OPC_CheckType, MVT::i32,
/*11700*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11702*/         OPC_EmitInteger, MVT::i32, 0, 
/*11705*/         OPC_EmitInteger, MVT::i32, 0, 
/*11708*/         OPC_EmitInteger, MVT::i32, 1, 
/*11711*/         OPC_EmitInteger, MVT::i32, 0, 
/*11714*/         OPC_EmitInteger, MVT::i32, 0, 
/*11717*/         OPC_EmitInteger, MVT::i32, 0, 
/*11720*/         OPC_EmitInteger, MVT::i32, 0, 
/*11723*/         OPC_EmitInteger, MVT::i32, 0, 
/*11726*/         OPC_EmitInteger, MVT::i32, 0, 
/*11729*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11741*/         OPC_EmitInteger, MVT::i32, 0, 
/*11744*/         OPC_EmitInteger, MVT::i32, 0, 
/*11747*/         OPC_EmitInteger, MVT::i32, 0, 
/*11750*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11762*/         OPC_EmitInteger, MVT::i32, 1, 
/*11765*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11768*/         OPC_EmitInteger, MVT::i32, 0, 
/*11771*/         OPC_EmitInteger, MVT::i32, 0, 
/*11774*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETNE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETNE:Other) - Complexity = 13
                  // Dst: (SETNE_INT:i32 i32:i32:$src0, i32:i32:$src1)
/*11801*/       /*Scope*/ 106, /*->11908*/
/*11802*/         OPC_CheckCondCode, ISD::SETUGT,
/*11804*/         OPC_MoveParent,
/*11805*/         OPC_CheckType, MVT::i32,
/*11807*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11809*/         OPC_EmitInteger, MVT::i32, 0, 
/*11812*/         OPC_EmitInteger, MVT::i32, 0, 
/*11815*/         OPC_EmitInteger, MVT::i32, 1, 
/*11818*/         OPC_EmitInteger, MVT::i32, 0, 
/*11821*/         OPC_EmitInteger, MVT::i32, 0, 
/*11824*/         OPC_EmitInteger, MVT::i32, 0, 
/*11827*/         OPC_EmitInteger, MVT::i32, 0, 
/*11830*/         OPC_EmitInteger, MVT::i32, 0, 
/*11833*/         OPC_EmitInteger, MVT::i32, 0, 
/*11836*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11848*/         OPC_EmitInteger, MVT::i32, 0, 
/*11851*/         OPC_EmitInteger, MVT::i32, 0, 
/*11854*/         OPC_EmitInteger, MVT::i32, 0, 
/*11857*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11869*/         OPC_EmitInteger, MVT::i32, 1, 
/*11872*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11875*/         OPC_EmitInteger, MVT::i32, 0, 
/*11878*/         OPC_EmitInteger, MVT::i32, 0, 
/*11881*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*11908*/       /*Scope*/ 106, /*->12015*/
/*11909*/         OPC_CheckCondCode, ISD::SETUGE,
/*11911*/         OPC_MoveParent,
/*11912*/         OPC_CheckType, MVT::i32,
/*11914*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*11916*/         OPC_EmitInteger, MVT::i32, 0, 
/*11919*/         OPC_EmitInteger, MVT::i32, 0, 
/*11922*/         OPC_EmitInteger, MVT::i32, 1, 
/*11925*/         OPC_EmitInteger, MVT::i32, 0, 
/*11928*/         OPC_EmitInteger, MVT::i32, 0, 
/*11931*/         OPC_EmitInteger, MVT::i32, 0, 
/*11934*/         OPC_EmitInteger, MVT::i32, 0, 
/*11937*/         OPC_EmitInteger, MVT::i32, 0, 
/*11940*/         OPC_EmitInteger, MVT::i32, 0, 
/*11943*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11955*/         OPC_EmitInteger, MVT::i32, 0, 
/*11958*/         OPC_EmitInteger, MVT::i32, 0, 
/*11961*/         OPC_EmitInteger, MVT::i32, 0, 
/*11964*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*11976*/         OPC_EmitInteger, MVT::i32, 1, 
/*11979*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*11982*/         OPC_EmitInteger, MVT::i32, 0, 
/*11985*/         OPC_EmitInteger, MVT::i32, 0, 
/*11988*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETUGE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 i32:i32:$src0, i32:i32:$src1)
/*12015*/       /*Scope*/ 106, /*->12122*/
/*12016*/         OPC_CheckCondCode, ISD::SETLT,
/*12018*/         OPC_MoveParent,
/*12019*/         OPC_CheckType, MVT::i32,
/*12021*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12023*/         OPC_EmitInteger, MVT::i32, 0, 
/*12026*/         OPC_EmitInteger, MVT::i32, 0, 
/*12029*/         OPC_EmitInteger, MVT::i32, 1, 
/*12032*/         OPC_EmitInteger, MVT::i32, 0, 
/*12035*/         OPC_EmitInteger, MVT::i32, 0, 
/*12038*/         OPC_EmitInteger, MVT::i32, 0, 
/*12041*/         OPC_EmitInteger, MVT::i32, 0, 
/*12044*/         OPC_EmitInteger, MVT::i32, 0, 
/*12047*/         OPC_EmitInteger, MVT::i32, 0, 
/*12050*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12062*/         OPC_EmitInteger, MVT::i32, 0, 
/*12065*/         OPC_EmitInteger, MVT::i32, 0, 
/*12068*/         OPC_EmitInteger, MVT::i32, 0, 
/*12071*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12083*/         OPC_EmitInteger, MVT::i32, 1, 
/*12086*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12089*/         OPC_EmitInteger, MVT::i32, 0, 
/*12092*/         OPC_EmitInteger, MVT::i32, 0, 
/*12095*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLT:Other) - Complexity = 13
                  // Dst: (SETGT_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*12122*/       /*Scope*/ 106, /*->12229*/
/*12123*/         OPC_CheckCondCode, ISD::SETLE,
/*12125*/         OPC_MoveParent,
/*12126*/         OPC_CheckType, MVT::i32,
/*12128*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12130*/         OPC_EmitInteger, MVT::i32, 0, 
/*12133*/         OPC_EmitInteger, MVT::i32, 0, 
/*12136*/         OPC_EmitInteger, MVT::i32, 1, 
/*12139*/         OPC_EmitInteger, MVT::i32, 0, 
/*12142*/         OPC_EmitInteger, MVT::i32, 0, 
/*12145*/         OPC_EmitInteger, MVT::i32, 0, 
/*12148*/         OPC_EmitInteger, MVT::i32, 0, 
/*12151*/         OPC_EmitInteger, MVT::i32, 0, 
/*12154*/         OPC_EmitInteger, MVT::i32, 0, 
/*12157*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12169*/         OPC_EmitInteger, MVT::i32, 0, 
/*12172*/         OPC_EmitInteger, MVT::i32, 0, 
/*12175*/         OPC_EmitInteger, MVT::i32, 0, 
/*12178*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12190*/         OPC_EmitInteger, MVT::i32, 1, 
/*12193*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12196*/         OPC_EmitInteger, MVT::i32, 0, 
/*12199*/         OPC_EmitInteger, MVT::i32, 0, 
/*12202*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETLE:Other) - Complexity = 13
                  // Dst: (SETGE_INT:i32 ?:i32:$src1, ?:i32:$src0)
/*12229*/       /*Scope*/ 106, /*->12336*/
/*12230*/         OPC_CheckCondCode, ISD::SETULT,
/*12232*/         OPC_MoveParent,
/*12233*/         OPC_CheckType, MVT::i32,
/*12235*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12237*/         OPC_EmitInteger, MVT::i32, 0, 
/*12240*/         OPC_EmitInteger, MVT::i32, 0, 
/*12243*/         OPC_EmitInteger, MVT::i32, 1, 
/*12246*/         OPC_EmitInteger, MVT::i32, 0, 
/*12249*/         OPC_EmitInteger, MVT::i32, 0, 
/*12252*/         OPC_EmitInteger, MVT::i32, 0, 
/*12255*/         OPC_EmitInteger, MVT::i32, 0, 
/*12258*/         OPC_EmitInteger, MVT::i32, 0, 
/*12261*/         OPC_EmitInteger, MVT::i32, 0, 
/*12264*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12276*/         OPC_EmitInteger, MVT::i32, 0, 
/*12279*/         OPC_EmitInteger, MVT::i32, 0, 
/*12282*/         OPC_EmitInteger, MVT::i32, 0, 
/*12285*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12297*/         OPC_EmitInteger, MVT::i32, 1, 
/*12300*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12303*/         OPC_EmitInteger, MVT::i32, 0, 
/*12306*/         OPC_EmitInteger, MVT::i32, 0, 
/*12309*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGT_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULT:Other) - Complexity = 13
                  // Dst: (SETGT_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*12336*/       /*Scope*/ 106, /*->12443*/
/*12337*/         OPC_CheckCondCode, ISD::SETULE,
/*12339*/         OPC_MoveParent,
/*12340*/         OPC_CheckType, MVT::i32,
/*12342*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12344*/         OPC_EmitInteger, MVT::i32, 0, 
/*12347*/         OPC_EmitInteger, MVT::i32, 0, 
/*12350*/         OPC_EmitInteger, MVT::i32, 1, 
/*12353*/         OPC_EmitInteger, MVT::i32, 0, 
/*12356*/         OPC_EmitInteger, MVT::i32, 0, 
/*12359*/         OPC_EmitInteger, MVT::i32, 0, 
/*12362*/         OPC_EmitInteger, MVT::i32, 0, 
/*12365*/         OPC_EmitInteger, MVT::i32, 0, 
/*12368*/         OPC_EmitInteger, MVT::i32, 0, 
/*12371*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12383*/         OPC_EmitInteger, MVT::i32, 0, 
/*12386*/         OPC_EmitInteger, MVT::i32, 0, 
/*12389*/         OPC_EmitInteger, MVT::i32, 0, 
/*12392*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12404*/         OPC_EmitInteger, MVT::i32, 1, 
/*12407*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12410*/         OPC_EmitInteger, MVT::i32, 0, 
/*12413*/         OPC_EmitInteger, MVT::i32, 0, 
/*12416*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SETGE_UINT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 1, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (selectcc:i32 i32:i32:$src0, i32:i32:$src1, -1:i32, 0:i32, SETULE:Other) - Complexity = 13
                  // Dst: (SETGE_UINT:i32 ?:i32:$src1, ?:i32:$src0)
/*12443*/       0, /*End of Scope*/
/*12444*/     /*Scope*/ 8|128,6/*776*/, /*->13222*/
/*12446*/       OPC_MoveChild, 1,
/*12448*/       OPC_Scope, 6|128,5/*646*/, /*->13097*/ // 2 children in Scope
/*12451*/         OPC_CheckInteger, 0, 
/*12453*/         OPC_MoveParent,
/*12454*/         OPC_RecordChild2, // #1 = $src1
/*12455*/         OPC_RecordChild3, // #2 = $src2
/*12456*/         OPC_MoveChild, 4,
/*12458*/         OPC_Scope, 64|128,2/*320*/, /*->12781*/ // 4 children in Scope
/*12461*/           OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*12464*/           OPC_Scope, 104, /*->12570*/ // 3 children in Scope
/*12466*/             OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*12468*/             OPC_MoveParent,
/*12469*/             OPC_CheckType, MVT::i32,
/*12471*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12473*/             OPC_EmitInteger, MVT::i32, 0, 
/*12476*/             OPC_EmitInteger, MVT::i32, 0, 
/*12479*/             OPC_EmitInteger, MVT::i32, 0, 
/*12482*/             OPC_EmitInteger, MVT::i32, 0, 
/*12485*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12497*/             OPC_EmitInteger, MVT::i32, 0, 
/*12500*/             OPC_EmitInteger, MVT::i32, 0, 
/*12503*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12515*/             OPC_EmitInteger, MVT::i32, 0, 
/*12518*/             OPC_EmitInteger, MVT::i32, 0, 
/*12521*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12533*/             OPC_EmitInteger, MVT::i32, 1, 
/*12536*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12539*/             OPC_EmitInteger, MVT::i32, 0, 
/*12542*/             OPC_EmitInteger, MVT::i32, 0, 
/*12545*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 8
                      // Dst: (CNDE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12570*/           /*Scope*/ 104, /*->12675*/
/*12571*/             OPC_CheckPredicate, 4, // Predicate_COND_GE
/*12573*/             OPC_MoveParent,
/*12574*/             OPC_CheckType, MVT::i32,
/*12576*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12578*/             OPC_EmitInteger, MVT::i32, 0, 
/*12581*/             OPC_EmitInteger, MVT::i32, 0, 
/*12584*/             OPC_EmitInteger, MVT::i32, 0, 
/*12587*/             OPC_EmitInteger, MVT::i32, 0, 
/*12590*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12602*/             OPC_EmitInteger, MVT::i32, 0, 
/*12605*/             OPC_EmitInteger, MVT::i32, 0, 
/*12608*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12620*/             OPC_EmitInteger, MVT::i32, 0, 
/*12623*/             OPC_EmitInteger, MVT::i32, 0, 
/*12626*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12638*/             OPC_EmitInteger, MVT::i32, 1, 
/*12641*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12644*/             OPC_EmitInteger, MVT::i32, 0, 
/*12647*/             OPC_EmitInteger, MVT::i32, 0, 
/*12650*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 8
                      // Dst: (CNDGE_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12675*/           /*Scope*/ 104, /*->12780*/
/*12676*/             OPC_CheckPredicate, 3, // Predicate_COND_GT
/*12678*/             OPC_MoveParent,
/*12679*/             OPC_CheckType, MVT::i32,
/*12681*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12683*/             OPC_EmitInteger, MVT::i32, 0, 
/*12686*/             OPC_EmitInteger, MVT::i32, 0, 
/*12689*/             OPC_EmitInteger, MVT::i32, 0, 
/*12692*/             OPC_EmitInteger, MVT::i32, 0, 
/*12695*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12707*/             OPC_EmitInteger, MVT::i32, 0, 
/*12710*/             OPC_EmitInteger, MVT::i32, 0, 
/*12713*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12725*/             OPC_EmitInteger, MVT::i32, 0, 
/*12728*/             OPC_EmitInteger, MVT::i32, 0, 
/*12731*/             OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12743*/             OPC_EmitInteger, MVT::i32, 1, 
/*12746*/             OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12749*/             OPC_EmitInteger, MVT::i32, 0, 
/*12752*/             OPC_EmitInteger, MVT::i32, 0, 
/*12755*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                          1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:i32 i32:i32:$src0, 0:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                      // Dst: (CNDGT_INT:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*12780*/           0, /*End of Scope*/
/*12781*/         /*Scope*/ 104, /*->12886*/
/*12782*/           OPC_CheckCondCode, ISD::SETEQ,
/*12784*/           OPC_MoveParent,
/*12785*/           OPC_CheckType, MVT::f32,
/*12787*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12789*/           OPC_EmitInteger, MVT::i32, 0, 
/*12792*/           OPC_EmitInteger, MVT::i32, 0, 
/*12795*/           OPC_EmitInteger, MVT::i32, 0, 
/*12798*/           OPC_EmitInteger, MVT::i32, 0, 
/*12801*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12813*/           OPC_EmitInteger, MVT::i32, 0, 
/*12816*/           OPC_EmitInteger, MVT::i32, 0, 
/*12819*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12831*/           OPC_EmitInteger, MVT::i32, 0, 
/*12834*/           OPC_EmitInteger, MVT::i32, 0, 
/*12837*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12849*/           OPC_EmitInteger, MVT::i32, 1, 
/*12852*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12855*/           OPC_EmitInteger, MVT::i32, 0, 
/*12858*/           OPC_EmitInteger, MVT::i32, 0, 
/*12861*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETEQ:Other) - Complexity = 8
                    // Dst: (CNDE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*12886*/         /*Scope*/ 104, /*->12991*/
/*12887*/           OPC_CheckCondCode, ISD::SETGT,
/*12889*/           OPC_MoveParent,
/*12890*/           OPC_CheckType, MVT::f32,
/*12892*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12894*/           OPC_EmitInteger, MVT::i32, 0, 
/*12897*/           OPC_EmitInteger, MVT::i32, 0, 
/*12900*/           OPC_EmitInteger, MVT::i32, 0, 
/*12903*/           OPC_EmitInteger, MVT::i32, 0, 
/*12906*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12918*/           OPC_EmitInteger, MVT::i32, 0, 
/*12921*/           OPC_EmitInteger, MVT::i32, 0, 
/*12924*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12936*/           OPC_EmitInteger, MVT::i32, 0, 
/*12939*/           OPC_EmitInteger, MVT::i32, 0, 
/*12942*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*12954*/           OPC_EmitInteger, MVT::i32, 1, 
/*12957*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*12960*/           OPC_EmitInteger, MVT::i32, 0, 
/*12963*/           OPC_EmitInteger, MVT::i32, 0, 
/*12966*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGT_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGT:Other) - Complexity = 8
                    // Dst: (CNDGT_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*12991*/         /*Scope*/ 104, /*->13096*/
/*12992*/           OPC_CheckCondCode, ISD::SETGE,
/*12994*/           OPC_MoveParent,
/*12995*/           OPC_CheckType, MVT::f32,
/*12997*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*12999*/           OPC_EmitInteger, MVT::i32, 0, 
/*13002*/           OPC_EmitInteger, MVT::i32, 0, 
/*13005*/           OPC_EmitInteger, MVT::i32, 0, 
/*13008*/           OPC_EmitInteger, MVT::i32, 0, 
/*13011*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13023*/           OPC_EmitInteger, MVT::i32, 0, 
/*13026*/           OPC_EmitInteger, MVT::i32, 0, 
/*13029*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13041*/           OPC_EmitInteger, MVT::i32, 0, 
/*13044*/           OPC_EmitInteger, MVT::i32, 0, 
/*13047*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13059*/           OPC_EmitInteger, MVT::i32, 1, 
/*13062*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*13065*/           OPC_EmitInteger, MVT::i32, 0, 
/*13068*/           OPC_EmitInteger, MVT::i32, 0, 
/*13071*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                        1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:f32 i32:i32:$src0, 0:i32, f32:f32:$src1, f32:f32:$src2, SETGE:Other) - Complexity = 8
                    // Dst: (CNDGE_INT:f32 ?:i32:$src0, ?:f32:$src1, ?:f32:$src2)
/*13096*/         0, /*End of Scope*/
/*13097*/       /*Scope*/ 123, /*->13221*/
/*13098*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13109*/         OPC_MoveParent,
/*13110*/         OPC_RecordChild2, // #1 = $src1
/*13111*/         OPC_RecordChild3, // #2 = $src2
/*13112*/         OPC_MoveChild, 4,
/*13114*/         OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*13117*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*13119*/         OPC_MoveParent,
/*13120*/         OPC_CheckType, MVT::i32,
/*13122*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*13124*/         OPC_EmitInteger, MVT::i32, 0, 
/*13127*/         OPC_EmitInteger, MVT::i32, 0, 
/*13130*/         OPC_EmitInteger, MVT::i32, 0, 
/*13133*/         OPC_EmitInteger, MVT::i32, 0, 
/*13136*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13148*/         OPC_EmitInteger, MVT::i32, 0, 
/*13151*/         OPC_EmitInteger, MVT::i32, 0, 
/*13154*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13166*/         OPC_EmitInteger, MVT::i32, 0, 
/*13169*/         OPC_EmitInteger, MVT::i32, 0, 
/*13172*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*13184*/         OPC_EmitInteger, MVT::i32, 1, 
/*13187*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*13190*/         OPC_EmitInteger, MVT::i32, 0, 
/*13193*/         OPC_EmitInteger, MVT::i32, 0, 
/*13196*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CNDGE_INT), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:i32 i32:i32:$src0, -1:i32, i32:i32:$src1, i32:i32:$src2, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 8
                  // Dst: (CNDGE_INT:i32 ?:i32:$src0, ?:i32:$src1, ?:i32:$src2)
/*13221*/       0, /*End of Scope*/
/*13222*/     0, /*End of Scope*/
/*13223*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 126|128,17/*2302*/,  TARGET_VAL(ISD::LOAD),// ->15530
/*13228*/   OPC_RecordMemRef,
/*13229*/   OPC_RecordNode,   // #0 = 'ld' chained node
/*13230*/   OPC_Scope, 13|128,2/*269*/, /*->13502*/ // 7 children in Scope
/*13233*/     OPC_RecordChild1, // #1 = $src_gpr
/*13234*/     OPC_CheckChild1Type, MVT::i32,
/*13236*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13238*/     OPC_CheckType, MVT::i32,
/*13240*/     OPC_Scope, 44, /*->13286*/ // 8 children in Scope
/*13242*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13244*/       OPC_Scope, 19, /*->13265*/ // 2 children in Scope
/*13246*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13248*/         OPC_CheckPredicate, 13, // Predicate_load_param_exti8
/*13250*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13252*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13255*/         OPC_EmitMergeInputChains1_0,
/*13256*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_load_param_exti8>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_8_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13265*/       /*Scope*/ 19, /*->13285*/
/*13266*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13268*/         OPC_CheckPredicate, 15, // Predicate_load_param_exti16
/*13270*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13272*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13275*/         OPC_EmitMergeInputChains1_0,
/*13276*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_load_param_exti16>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_16_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13285*/       0, /*End of Scope*/
/*13286*/     /*Scope*/ 19, /*->13306*/
/*13287*/       OPC_CheckPredicate, 16, // Predicate_load
/*13289*/       OPC_CheckPredicate, 17, // Predicate_load_param
/*13291*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13293*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13296*/       OPC_EmitMergeInputChains1_0,
/*13297*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                // Dst: (VTX_READ_PARAM_32_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13306*/     /*Scope*/ 44, /*->13351*/
/*13307*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13309*/       OPC_Scope, 19, /*->13330*/ // 2 children in Scope
/*13311*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13313*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13315*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13317*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13320*/         OPC_EmitMergeInputChains1_0,
/*13321*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_8_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13330*/       /*Scope*/ 19, /*->13350*/
/*13331*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13333*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13335*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13337*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13340*/         OPC_EmitMergeInputChains1_0,
/*13341*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_16_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13350*/       0, /*End of Scope*/
/*13351*/     /*Scope*/ 19, /*->13371*/
/*13352*/       OPC_CheckPredicate, 16, // Predicate_load
/*13354*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*13356*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*13358*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13361*/       OPC_EmitMergeInputChains1_0,
/*13362*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                // Dst: (VTX_READ_GLOBAL_32_eg:i32 ADDRVTX_READ:i32:$src_gpr)
/*13371*/     /*Scope*/ 44, /*->13416*/
/*13372*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13374*/       OPC_Scope, 19, /*->13395*/ // 2 children in Scope
/*13376*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13378*/         OPC_CheckPredicate, 13, // Predicate_load_param_exti8
/*13380*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13382*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13385*/         OPC_EmitMergeInputChains1_0,
/*13386*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_load_param_exti8>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_8_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13395*/       /*Scope*/ 19, /*->13415*/
/*13396*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13398*/         OPC_CheckPredicate, 15, // Predicate_load_param_exti16
/*13400*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13402*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13405*/         OPC_EmitMergeInputChains1_0,
/*13406*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_load_param_exti16>> - Complexity = 13
                  // Dst: (VTX_READ_PARAM_16_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13415*/       0, /*End of Scope*/
/*13416*/     /*Scope*/ 19, /*->13436*/
/*13417*/       OPC_CheckPredicate, 16, // Predicate_load
/*13419*/       OPC_CheckPredicate, 17, // Predicate_load_param
/*13421*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13423*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13426*/       OPC_EmitMergeInputChains1_0,
/*13427*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                // Dst: (VTX_READ_PARAM_32_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13436*/     /*Scope*/ 44, /*->13481*/
/*13437*/       OPC_CheckPredicate, 11, // Predicate_az_extload
/*13439*/       OPC_Scope, 19, /*->13460*/ // 2 children in Scope
/*13441*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13443*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13445*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13447*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13450*/         OPC_EmitMergeInputChains1_0,
/*13451*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_8_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13460*/       /*Scope*/ 19, /*->13480*/
/*13461*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13463*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13465*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13467*/         OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13470*/         OPC_EmitMergeInputChains1_0,
/*13471*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 13
                  // Dst: (VTX_READ_GLOBAL_16_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13480*/       0, /*End of Scope*/
/*13481*/     /*Scope*/ 19, /*->13501*/
/*13482*/       OPC_CheckPredicate, 16, // Predicate_load
/*13484*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*13486*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*13488*/       OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*13491*/       OPC_EmitMergeInputChains1_0,
/*13492*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                // Dst: (VTX_READ_GLOBAL_32_cm:i32 ADDRVTX_READ:i32:$src_gpr)
/*13501*/     0, /*End of Scope*/
/*13502*/   /*Scope*/ 105|128,6/*873*/, /*->14377*/
/*13504*/     OPC_MoveChild, 1,
/*13506*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*13509*/     OPC_RecordChild0, // #1 = $sbase
/*13510*/     OPC_RecordChild1, // #2 = $offset
/*13511*/     OPC_Scope, 33|128,3/*417*/, /*->13931*/ // 2 children in Scope
/*13514*/       OPC_MoveChild, 1,
/*13516*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13519*/       OPC_Scope, 69, /*->13590*/ // 3 children in Scope
/*13521*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*13523*/         OPC_MoveParent,
/*13524*/         OPC_MoveParent,
/*13525*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13527*/         OPC_CheckPredicate, 16, // Predicate_load
/*13529*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*13531*/         OPC_SwitchType /*3 cases */, 17,  MVT::i32,// ->13551
/*13534*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13536*/           OPC_EmitMergeInputChains1_0,
/*13537*/           OPC_EmitConvertToTarget, 2,
/*13539*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.393
/*13542*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.393>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, (anonymous.val.393:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::i64,// ->13570
/*13553*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13555*/           OPC_EmitMergeInputChains1_0,
/*13556*/           OPC_EmitConvertToTarget, 2,
/*13558*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.393
/*13561*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.393>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, (anonymous.val.393:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::i128,// ->13589
/*13572*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13574*/           OPC_EmitMergeInputChains1_0,
/*13575*/           OPC_EmitConvertToTarget, 2,
/*13577*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.393
/*13580*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i128, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i128 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.393>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX4_IMM:i128 ?:i64:$sbase, (anonymous.val.393:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  0, // EndSwitchType
/*13590*/       /*Scope*/ 127|128,1/*255*/, /*->13847*/
/*13592*/         OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*13594*/         OPC_MoveParent,
/*13595*/         OPC_CheckType, MVT::i64,
/*13597*/         OPC_MoveParent,
/*13598*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13600*/         OPC_Scope, 35, /*->13637*/ // 6 children in Scope
/*13602*/           OPC_CheckPredicate, 24, // Predicate_sextload
/*13604*/           OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*13606*/           OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*13608*/           OPC_CheckType, MVT::i32,
/*13610*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13612*/           OPC_EmitMergeInputChains1_0,
/*13613*/           OPC_EmitInteger, MVT::i64, 0, 
/*13616*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13624*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13627*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13637*/         /*Scope*/ 35, /*->13673*/
/*13638*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13640*/           OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*13642*/           OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*13644*/           OPC_CheckType, MVT::i32,
/*13646*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13648*/           OPC_EmitMergeInputChains1_0,
/*13649*/           OPC_EmitInteger, MVT::i64, 0, 
/*13652*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13660*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13663*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13673*/         /*Scope*/ 35, /*->13709*/
/*13674*/           OPC_CheckPredicate, 24, // Predicate_sextload
/*13676*/           OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*13678*/           OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*13680*/           OPC_CheckType, MVT::i32,
/*13682*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13684*/           OPC_EmitMergeInputChains1_0,
/*13685*/           OPC_EmitInteger, MVT::i64, 0, 
/*13688*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13696*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13699*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13709*/         /*Scope*/ 35, /*->13745*/
/*13710*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13712*/           OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*13714*/           OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*13716*/           OPC_CheckType, MVT::i32,
/*13718*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13720*/           OPC_EmitMergeInputChains1_0,
/*13721*/           OPC_EmitInteger, MVT::i64, 0, 
/*13724*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13732*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13735*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13745*/         /*Scope*/ 64, /*->13810*/
/*13746*/           OPC_CheckPredicate, 16, // Predicate_load
/*13748*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*13750*/           OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->13780
/*13753*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13755*/             OPC_EmitMergeInputChains1_0,
/*13756*/             OPC_EmitInteger, MVT::i64, 0, 
/*13759*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13767*/             OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13770*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 5, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                    /*SwitchType*/ 27,  MVT::i64,// ->13809
/*13782*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13784*/             OPC_EmitMergeInputChains1_0,
/*13785*/             OPC_EmitInteger, MVT::i64, 0, 
/*13788*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13796*/             OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13799*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 4, 1, 5, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                    0, // EndSwitchType
/*13810*/         /*Scope*/ 35, /*->13846*/
/*13811*/           OPC_CheckPredicate, 11, // Predicate_az_extload
/*13813*/           OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*13815*/           OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*13817*/           OPC_CheckType, MVT::i64,
/*13819*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13821*/           OPC_EmitMergeInputChains1_0,
/*13822*/           OPC_EmitInteger, MVT::i64, 0, 
/*13825*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*13833*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*13836*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
/*13846*/         0, /*End of Scope*/
/*13847*/       /*Scope*/ 82, /*->13930*/
/*13848*/         OPC_MoveParent,
/*13849*/         OPC_MoveParent,
/*13850*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13852*/         OPC_CheckPredicate, 16, // Predicate_load
/*13854*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*13856*/         OPC_SwitchType /*3 cases */, 22,  MVT::i32,// ->13881
/*13859*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13861*/           OPC_EmitMergeInputChains1_0,
/*13862*/           OPC_EmitConvertToTarget, 2,
/*13864*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13872*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORD_SGPR:i32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::i64,// ->13905
/*13883*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13885*/           OPC_EmitMergeInputChains1_0,
/*13886*/           OPC_EmitConvertToTarget, 2,
/*13888*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13896*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i64 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX2_SGPR:i64 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::i128,// ->13929
/*13907*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13909*/           OPC_EmitMergeInputChains1_0,
/*13910*/           OPC_EmitConvertToTarget, 2,
/*13912*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13920*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i128, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:i128 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX4_SGPR:i128 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  0, // EndSwitchType
/*13930*/       0, /*End of Scope*/
/*13931*/     /*Scope*/ 59|128,3/*443*/, /*->14376*/
/*13933*/       OPC_CheckType, MVT::i64,
/*13935*/       OPC_MoveParent,
/*13936*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*13938*/       OPC_Scope, 62, /*->14002*/ // 6 children in Scope
/*13940*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*13942*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*13944*/         OPC_CheckType, MVT::i32,
/*13946*/         OPC_Scope, 26, /*->13974*/ // 2 children in Scope
/*13948*/           OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*13950*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13952*/           OPC_EmitMergeInputChains1_0,
/*13953*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*13961*/           OPC_EmitInteger, MVT::i16, 0, 
/*13964*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*13974*/         /*Scope*/ 26, /*->14001*/
/*13975*/           OPC_CheckPredicate, 31, // Predicate_sextloadi8_constant
/*13977*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*13979*/           OPC_EmitMergeInputChains1_0,
/*13980*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*13988*/           OPC_EmitInteger, MVT::i16, 0, 
/*13991*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14001*/         0, /*End of Scope*/
/*14002*/       /*Scope*/ 62, /*->14065*/
/*14003*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14005*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*14007*/         OPC_CheckType, MVT::i32,
/*14009*/         OPC_Scope, 26, /*->14037*/ // 2 children in Scope
/*14011*/           OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*14013*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14015*/           OPC_EmitMergeInputChains1_0,
/*14016*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14024*/           OPC_EmitInteger, MVT::i16, 0, 
/*14027*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14037*/         /*Scope*/ 26, /*->14064*/
/*14038*/           OPC_CheckPredicate, 32, // Predicate_az_extloadi8_constant
/*14040*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14042*/           OPC_EmitMergeInputChains1_0,
/*14043*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14051*/           OPC_EmitInteger, MVT::i16, 0, 
/*14054*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14064*/         0, /*End of Scope*/
/*14065*/       /*Scope*/ 62, /*->14128*/
/*14066*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14068*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14070*/         OPC_CheckType, MVT::i32,
/*14072*/         OPC_Scope, 26, /*->14100*/ // 2 children in Scope
/*14074*/           OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*14076*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14078*/           OPC_EmitMergeInputChains1_0,
/*14079*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14087*/           OPC_EmitInteger, MVT::i16, 0, 
/*14090*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14100*/         /*Scope*/ 26, /*->14127*/
/*14101*/           OPC_CheckPredicate, 33, // Predicate_sextloadi16_constant
/*14103*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14105*/           OPC_EmitMergeInputChains1_0,
/*14106*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14114*/           OPC_EmitInteger, MVT::i16, 0, 
/*14117*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14127*/         0, /*End of Scope*/
/*14128*/       /*Scope*/ 62, /*->14191*/
/*14129*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14131*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14133*/         OPC_CheckType, MVT::i32,
/*14135*/         OPC_Scope, 26, /*->14163*/ // 2 children in Scope
/*14137*/           OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*14139*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14141*/           OPC_EmitMergeInputChains1_0,
/*14142*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14150*/           OPC_EmitInteger, MVT::i16, 0, 
/*14153*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14163*/         /*Scope*/ 26, /*->14190*/
/*14164*/           OPC_CheckPredicate, 34, // Predicate_az_extloadi16_constant
/*14166*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14168*/           OPC_EmitMergeInputChains1_0,
/*14169*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14177*/           OPC_EmitInteger, MVT::i16, 0, 
/*14180*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14190*/         0, /*End of Scope*/
/*14191*/       /*Scope*/ 120, /*->14312*/
/*14192*/         OPC_CheckPredicate, 16, // Predicate_load
/*14194*/         OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->14253
/*14197*/           OPC_Scope, 26, /*->14225*/ // 2 children in Scope
/*14199*/             OPC_CheckPredicate, 20, // Predicate_global_load
/*14201*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14203*/             OPC_EmitMergeInputChains1_0,
/*14204*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14212*/             OPC_EmitInteger, MVT::i16, 0, 
/*14215*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14225*/           /*Scope*/ 26, /*->14252*/
/*14226*/             OPC_CheckPredicate, 22, // Predicate_constant_load
/*14228*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14230*/             OPC_EmitMergeInputChains1_0,
/*14231*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14239*/             OPC_EmitInteger, MVT::i16, 0, 
/*14242*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14252*/           0, /*End of Scope*/
                  /*SwitchType*/ 56,  MVT::i64,// ->14311
/*14255*/           OPC_Scope, 26, /*->14283*/ // 2 children in Scope
/*14257*/             OPC_CheckPredicate, 20, // Predicate_global_load
/*14259*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14261*/             OPC_EmitMergeInputChains1_0,
/*14262*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14270*/             OPC_EmitInteger, MVT::i16, 0, 
/*14273*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14283*/           /*Scope*/ 26, /*->14310*/
/*14284*/             OPC_CheckPredicate, 22, // Predicate_constant_load
/*14286*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14288*/             OPC_EmitMergeInputChains1_0,
/*14289*/             OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                          1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14297*/             OPC_EmitInteger, MVT::i16, 0, 
/*14300*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                      // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                      // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14310*/           0, /*End of Scope*/
                  0, // EndSwitchType
/*14312*/       /*Scope*/ 62, /*->14375*/
/*14313*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14315*/         OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*14317*/         OPC_CheckType, MVT::i64,
/*14319*/         OPC_Scope, 26, /*->14347*/ // 2 children in Scope
/*14321*/           OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*14323*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14325*/           OPC_EmitMergeInputChains1_0,
/*14326*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14334*/           OPC_EmitInteger, MVT::i16, 0, 
/*14337*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14347*/         /*Scope*/ 26, /*->14374*/
/*14348*/           OPC_CheckPredicate, 35, // Predicate_az_extloadi32_constant
/*14350*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14352*/           OPC_EmitMergeInputChains1_0,
/*14353*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*14361*/           OPC_EmitInteger, MVT::i16, 0, 
/*14364*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:i64 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_constant>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*14374*/         0, /*End of Scope*/
/*14375*/       0, /*End of Scope*/
/*14376*/     0, /*End of Scope*/
/*14377*/   /*Scope*/ 50|128,3/*434*/, /*->14813*/
/*14379*/     OPC_RecordChild1, // #1 = $sbase
/*14380*/     OPC_Scope, 122|128,2/*378*/, /*->14761*/ // 2 children in Scope
/*14383*/       OPC_CheckChild1Type, MVT::i64,
/*14385*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14387*/       OPC_Scope, 126, /*->14515*/ // 7 children in Scope
/*14389*/         OPC_CheckPredicate, 16, // Predicate_load
/*14391*/         OPC_Scope, 55, /*->14448*/ // 2 children in Scope
/*14393*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*14395*/           OPC_SwitchType /*3 cases */, 15,  MVT::i32,// ->14413
/*14398*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14400*/             OPC_EmitMergeInputChains1_0,
/*14401*/             OPC_EmitInteger, MVT::i32, 0, 
/*14404*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                      // Dst: (S_LOAD_DWORD_IMM:i32 ?:i64:$sbase, 0:i32)
                    /*SwitchType*/ 15,  MVT::i64,// ->14430
/*14415*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14417*/             OPC_EmitMergeInputChains1_0,
/*14418*/             OPC_EmitInteger, MVT::i32, 0, 
/*14421*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i64 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                      // Dst: (S_LOAD_DWORDX2_IMM:i64 ?:i64:$sbase, 0:i32)
                    /*SwitchType*/ 15,  MVT::i128,// ->14447
/*14432*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14434*/             OPC_EmitMergeInputChains1_0,
/*14435*/             OPC_EmitInteger, MVT::i32, 0, 
/*14438*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX4_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i128, 2/*#Ops*/, 1, 2, 
                      // Src: (ld:i128 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                      // Dst: (S_LOAD_DWORDX4_IMM:i128 ?:i64:$sbase, 0:i32)
                    0, // EndSwitchType
/*14448*/         /*Scope*/ 65, /*->14514*/
/*14449*/           OPC_CheckPredicate, 36, // Predicate_local_load
/*14451*/           OPC_CheckType, MVT::i32,
/*14453*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14455*/           OPC_EmitMergeInputChains1_0,
/*14456*/           OPC_EmitInteger, MVT::i1, 0, 
/*14459*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*14462*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*14471*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*14474*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*14483*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*14486*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 7,  // Results = #8
/*14495*/           OPC_EmitInteger, MVT::i8, 0, 
/*14498*/           OPC_EmitInteger, MVT::i8, 0, 
/*14501*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_READ_B32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 6/*#Ops*/, 2, 4, 6, 8, 9, 10, 
                    // Src: (ld:i32 i64:i64:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_local_load>> - Complexity = 4
                    // Dst: (DS_READ_B32:i32 0:i1, (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), 0:i8, 0:i8)
/*14514*/         0, /*End of Scope*/
/*14515*/       /*Scope*/ 35, /*->14551*/
/*14516*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14518*/         OPC_CheckPredicate, 25, // Predicate_sextloadi8
/*14520*/         OPC_CheckPredicate, 26, // Predicate_sextloadi8_global
/*14522*/         OPC_CheckType, MVT::i32,
/*14524*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14526*/         OPC_EmitMergeInputChains1_0,
/*14527*/         OPC_EmitInteger, MVT::i64, 0, 
/*14530*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14538*/         OPC_EmitInteger, MVT::i16, 0, 
/*14541*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_SBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14551*/       /*Scope*/ 35, /*->14587*/
/*14552*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14554*/         OPC_CheckPredicate, 12, // Predicate_az_extloadi8
/*14556*/         OPC_CheckPredicate, 18, // Predicate_az_extloadi8_global
/*14558*/         OPC_CheckType, MVT::i32,
/*14560*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14562*/         OPC_EmitMergeInputChains1_0,
/*14563*/         OPC_EmitInteger, MVT::i64, 0, 
/*14566*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14574*/         OPC_EmitInteger, MVT::i16, 0, 
/*14577*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_UBYTE_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_UBYTE_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14587*/       /*Scope*/ 35, /*->14623*/
/*14588*/         OPC_CheckPredicate, 24, // Predicate_sextload
/*14590*/         OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*14592*/         OPC_CheckPredicate, 28, // Predicate_sextloadi16_global
/*14594*/         OPC_CheckType, MVT::i32,
/*14596*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14598*/         OPC_EmitMergeInputChains1_0,
/*14599*/         OPC_EmitInteger, MVT::i64, 0, 
/*14602*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14610*/         OPC_EmitInteger, MVT::i16, 0, 
/*14613*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_SSHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_SSHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14623*/       /*Scope*/ 35, /*->14659*/
/*14624*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14626*/         OPC_CheckPredicate, 14, // Predicate_az_extloadi16
/*14628*/         OPC_CheckPredicate, 19, // Predicate_az_extloadi16_global
/*14630*/         OPC_CheckType, MVT::i32,
/*14632*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14634*/         OPC_EmitMergeInputChains1_0,
/*14635*/         OPC_EmitInteger, MVT::i64, 0, 
/*14638*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14646*/         OPC_EmitInteger, MVT::i16, 0, 
/*14649*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_USHORT_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_USHORT_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14659*/       /*Scope*/ 64, /*->14724*/
/*14660*/         OPC_CheckPredicate, 16, // Predicate_load
/*14662*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*14664*/         OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->14694
/*14667*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14669*/           OPC_EmitMergeInputChains1_0,
/*14670*/           OPC_EmitInteger, MVT::i64, 0, 
/*14673*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14681*/           OPC_EmitInteger, MVT::i16, 0, 
/*14684*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 1, 4, 
                    // Src: (ld:i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                    // Dst: (BUFFER_LOAD_DWORD_ADDR64:i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                  /*SwitchType*/ 27,  MVT::i64,// ->14723
/*14696*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14698*/           OPC_EmitMergeInputChains1_0,
/*14699*/           OPC_EmitInteger, MVT::i64, 0, 
/*14702*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14710*/           OPC_EmitInteger, MVT::i16, 0, 
/*14713*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                    // Src: (ld:i64 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                  0, // EndSwitchType
/*14724*/       /*Scope*/ 35, /*->14760*/
/*14725*/         OPC_CheckPredicate, 11, // Predicate_az_extload
/*14727*/         OPC_CheckPredicate, 29, // Predicate_az_extloadi32
/*14729*/         OPC_CheckPredicate, 30, // Predicate_az_extloadi32_global
/*14731*/         OPC_CheckType, MVT::i64,
/*14733*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14735*/         OPC_EmitMergeInputChains1_0,
/*14736*/         OPC_EmitInteger, MVT::i64, 0, 
/*14739*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*14747*/         OPC_EmitInteger, MVT::i16, 0, 
/*14750*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:i64 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi32>><<P:Predicate_az_extloadi32_global>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:i64 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*14760*/       0, /*End of Scope*/
/*14761*/     /*Scope*/ 50, /*->14812*/
/*14762*/       OPC_CheckChild1Type, MVT::i32,
/*14764*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14766*/       OPC_CheckPredicate, 16, // Predicate_load
/*14768*/       OPC_CheckPredicate, 36, // Predicate_local_load
/*14770*/       OPC_CheckType, MVT::i32,
/*14772*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*14774*/       OPC_EmitMergeInputChains1_0,
/*14775*/       OPC_EmitInteger, MVT::i32, 0, 
/*14778*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*14790*/       OPC_EmitInteger, MVT::i32, 1, 
/*14793*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*14796*/       OPC_EmitInteger, MVT::i32, 0, 
/*14799*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                // Src: (ld:i32 R600_Reg32:i32:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_local_load>> - Complexity = 4
                // Dst: (LDS_READ_RET:i32 R600_Reg32:i32:$src0)
/*14812*/     0, /*End of Scope*/
/*14813*/   /*Scope*/ 77, /*->14891*/
/*14814*/     OPC_MoveChild, 1,
/*14816*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*14819*/     OPC_RecordChild0, // #1 = $sbase
/*14820*/     OPC_RecordChild1, // #2 = $offset
/*14821*/     OPC_MoveChild, 1,
/*14823*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14826*/     OPC_Scope, 29, /*->14857*/ // 2 children in Scope
/*14828*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*14830*/       OPC_MoveParent,
/*14831*/       OPC_MoveParent,
/*14832*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14834*/       OPC_CheckPredicate, 16, // Predicate_load
/*14836*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*14838*/       OPC_CheckType, MVT::f32,
/*14840*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14842*/       OPC_EmitMergeInputChains1_0,
/*14843*/       OPC_EmitConvertToTarget, 2,
/*14845*/       OPC_EmitNodeXForm, 0, 3, // anonymous.val.393
/*14848*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.393>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, (anonymous.val.393:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*14857*/     /*Scope*/ 32, /*->14890*/
/*14858*/       OPC_MoveParent,
/*14859*/       OPC_MoveParent,
/*14860*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14862*/       OPC_CheckPredicate, 16, // Predicate_load
/*14864*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*14866*/       OPC_CheckType, MVT::f32,
/*14868*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14870*/       OPC_EmitMergeInputChains1_0,
/*14871*/       OPC_EmitConvertToTarget, 2,
/*14873*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*14881*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:f32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                // Dst: (S_LOAD_DWORD_SGPR:f32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*14890*/     0, /*End of Scope*/
/*14891*/   /*Scope*/ 67|128,1/*195*/, /*->15088*/
/*14893*/     OPC_RecordChild1, // #1 = $sbase
/*14894*/     OPC_Scope, 25, /*->14921*/ // 2 children in Scope
/*14896*/       OPC_CheckChild1Type, MVT::i64,
/*14898*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14900*/       OPC_CheckPredicate, 16, // Predicate_load
/*14902*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*14904*/       OPC_CheckType, MVT::f32,
/*14906*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*14908*/       OPC_EmitMergeInputChains1_0,
/*14909*/       OPC_EmitInteger, MVT::i32, 0, 
/*14912*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORD_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:f32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                // Dst: (S_LOAD_DWORD_IMM:f32 ?:i64:$sbase, 0:i32)
/*14921*/     /*Scope*/ 36|128,1/*164*/, /*->15087*/
/*14923*/       OPC_CheckChild1Type, MVT::i32,
/*14925*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*14927*/       OPC_CheckPredicate, 16, // Predicate_load
/*14929*/       OPC_Scope, 38, /*->14969*/ // 4 children in Scope
/*14931*/         OPC_CheckPredicate, 17, // Predicate_load_param
/*14933*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->14951
/*14936*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14938*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14941*/           OPC_EmitMergeInputChains1_0,
/*14942*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_64_eg:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->14968
/*14953*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14955*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14958*/           OPC_EmitMergeInputChains1_0,
/*14959*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_128_eg:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*14969*/       /*Scope*/ 38, /*->15008*/
/*14970*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*14972*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->14990
/*14975*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14977*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14980*/           OPC_EmitMergeInputChains1_0,
/*14981*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_64_eg:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15007
/*14992*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*14994*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*14997*/           OPC_EmitMergeInputChains1_0,
/*14998*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_128_eg:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15008*/       /*Scope*/ 38, /*->15047*/
/*15009*/         OPC_CheckPredicate, 17, // Predicate_load_param
/*15011*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15029
/*15014*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15016*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15019*/           OPC_EmitMergeInputChains1_0,
/*15020*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_64_cm:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15046
/*15031*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15033*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15036*/           OPC_EmitMergeInputChains1_0,
/*15037*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_PARAM_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_param>> - Complexity = 13
                    // Dst: (VTX_READ_PARAM_128_cm:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15047*/       /*Scope*/ 38, /*->15086*/
/*15048*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*15050*/         OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15068
/*15053*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15055*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15058*/           OPC_EmitMergeInputChains1_0,
/*15059*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v2i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_64_cm:v2i32 ADDRVTX_READ:i32:$src_gpr)
                  /*SwitchType*/ 15,  MVT::v4i32,// ->15085
/*15070*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*15072*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/*15075*/           OPC_EmitMergeInputChains1_0,
/*15076*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::VTX_READ_GLOBAL_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:v4i32 ADDRVTX_READ:i32:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 13
                    // Dst: (VTX_READ_GLOBAL_128_cm:v4i32 ADDRVTX_READ:i32:$src_gpr)
                  0, // EndSwitchType
/*15086*/       0, /*End of Scope*/
/*15087*/     0, /*End of Scope*/
/*15088*/   /*Scope*/ 71|128,2/*327*/, /*->15417*/
/*15090*/     OPC_MoveChild, 1,
/*15092*/     OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*15095*/     OPC_RecordChild0, // #1 = $sbase
/*15096*/     OPC_RecordChild1, // #2 = $offset
/*15097*/     OPC_Scope, 62|128,1/*190*/, /*->15290*/ // 2 children in Scope
/*15100*/       OPC_MoveChild, 1,
/*15102*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15105*/       OPC_Scope, 50, /*->15157*/ // 3 children in Scope
/*15107*/         OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*15109*/         OPC_MoveParent,
/*15110*/         OPC_MoveParent,
/*15111*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15113*/         OPC_CheckPredicate, 16, // Predicate_load
/*15115*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*15117*/         OPC_SwitchType /*2 cases */, 17,  MVT::v2i32,// ->15137
/*15120*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15122*/           OPC_EmitMergeInputChains1_0,
/*15123*/           OPC_EmitConvertToTarget, 2,
/*15125*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.393
/*15128*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v2i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.393>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX2_IMM:v2i32 ?:i64:$sbase, (anonymous.val.393:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  /*SwitchType*/ 17,  MVT::v32i8,// ->15156
/*15139*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15141*/           OPC_EmitMergeInputChains1_0,
/*15142*/           OPC_EmitConvertToTarget, 2,
/*15144*/           OPC_EmitNodeXForm, 0, 3, // anonymous.val.393
/*15147*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.393>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 11
                    // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, (anonymous.val.393:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
                  0, // EndSwitchType
/*15157*/       /*Scope*/ 72, /*->15230*/
/*15158*/         OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*15160*/         OPC_MoveParent,
/*15161*/         OPC_CheckType, MVT::i64,
/*15163*/         OPC_MoveParent,
/*15164*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15166*/         OPC_CheckPredicate, 16, // Predicate_load
/*15168*/         OPC_CheckPredicate, 20, // Predicate_global_load
/*15170*/         OPC_SwitchType /*2 cases */, 27,  MVT::v2i32,// ->15200
/*15173*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15175*/           OPC_EmitMergeInputChains1_0,
/*15176*/           OPC_EmitInteger, MVT::i64, 0, 
/*15179*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*15187*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*15190*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                  /*SwitchType*/ 27,  MVT::v4i32,// ->15229
/*15202*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15204*/           OPC_EmitMergeInputChains1_0,
/*15205*/           OPC_EmitInteger, MVT::i64, 0, 
/*15208*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*15216*/           OPC_EmitNodeXForm, 1, 2, // as_i16imm
/*15219*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 1, 5, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, (imm:i64)<<P:Predicate_IMM12bit>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 11
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, (as_i16imm:i16 ?:i64:$offset))
                  0, // EndSwitchType
/*15230*/       /*Scope*/ 58, /*->15289*/
/*15231*/         OPC_MoveParent,
/*15232*/         OPC_MoveParent,
/*15233*/         OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15235*/         OPC_CheckPredicate, 16, // Predicate_load
/*15237*/         OPC_CheckPredicate, 22, // Predicate_constant_load
/*15239*/         OPC_SwitchType /*2 cases */, 22,  MVT::v2i32,// ->15264
/*15242*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15244*/           OPC_EmitMergeInputChains1_0,
/*15245*/           OPC_EmitConvertToTarget, 2,
/*15247*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15255*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v2i32 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX2_SGPR:v2i32 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  /*SwitchType*/ 22,  MVT::v32i8,// ->15288
/*15266*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15268*/           OPC_EmitMergeInputChains1_0,
/*15269*/           OPC_EmitConvertToTarget, 2,
/*15271*/           OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*15279*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_SGPR), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 4, 
                    // Src: (ld:v32i8 (SIadd64bit32bit:i64 i64:i64:$sbase, (imm:i32):$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 10
                    // Dst: (S_LOAD_DWORDX8_SGPR:v32i8 ?:i64:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
                  0, // EndSwitchType
/*15289*/       0, /*End of Scope*/
/*15290*/     /*Scope*/ 125, /*->15416*/
/*15291*/       OPC_CheckType, MVT::i64,
/*15293*/       OPC_MoveParent,
/*15294*/       OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15296*/       OPC_CheckPredicate, 16, // Predicate_load
/*15298*/       OPC_SwitchType /*2 cases */, 56,  MVT::v2i32,// ->15357
/*15301*/         OPC_Scope, 26, /*->15329*/ // 2 children in Scope
/*15303*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*15305*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15307*/           OPC_EmitMergeInputChains1_0,
/*15308*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15316*/           OPC_EmitInteger, MVT::i16, 0, 
/*15319*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15329*/         /*Scope*/ 26, /*->15356*/
/*15330*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*15332*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15334*/           OPC_EmitMergeInputChains1_0,
/*15335*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15343*/           OPC_EmitInteger, MVT::i16, 0, 
/*15346*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v2i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15356*/         0, /*End of Scope*/
                /*SwitchType*/ 56,  MVT::v4i32,// ->15415
/*15359*/         OPC_Scope, 26, /*->15387*/ // 2 children in Scope
/*15361*/           OPC_CheckPredicate, 20, // Predicate_global_load
/*15363*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15365*/           OPC_EmitMergeInputChains1_0,
/*15366*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15374*/           OPC_EmitInteger, MVT::i16, 0, 
/*15377*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15387*/         /*Scope*/ 26, /*->15414*/
/*15388*/           OPC_CheckPredicate, 22, // Predicate_constant_load
/*15390*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15392*/           OPC_EmitMergeInputChains1_0,
/*15393*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 1,  // Results = #3
/*15401*/           OPC_EmitInteger, MVT::i16, 0, 
/*15404*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 2, 4, 
                    // Src: (ld:v4i32 (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 7
                    // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*15414*/         0, /*End of Scope*/
                0, // EndSwitchType
/*15416*/     0, /*End of Scope*/
/*15417*/   /*Scope*/ 111, /*->15529*/
/*15418*/     OPC_RecordChild1, // #1 = $sbase
/*15419*/     OPC_CheckChild1Type, MVT::i64,
/*15421*/     OPC_CheckPredicate, 10, // Predicate_unindexedload
/*15423*/     OPC_CheckPredicate, 16, // Predicate_load
/*15425*/     OPC_Scope, 38, /*->15465*/ // 2 children in Scope
/*15427*/       OPC_CheckPredicate, 22, // Predicate_constant_load
/*15429*/       OPC_SwitchType /*2 cases */, 15,  MVT::v2i32,// ->15447
/*15432*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15434*/         OPC_EmitMergeInputChains1_0,
/*15435*/         OPC_EmitInteger, MVT::i32, 0, 
/*15438*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX2_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:v2i32 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                  // Dst: (S_LOAD_DWORDX2_IMM:v2i32 ?:i64:$sbase, 0:i32)
                /*SwitchType*/ 15,  MVT::v32i8,// ->15464
/*15449*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15451*/         OPC_EmitMergeInputChains1_0,
/*15452*/         OPC_EmitInteger, MVT::i32, 0, 
/*15455*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_LOAD_DWORDX8_IMM), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v32i8, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:v32i8 i64:i64:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_constant_load>> - Complexity = 4
                  // Dst: (S_LOAD_DWORDX8_IMM:v32i8 ?:i64:$sbase, 0:i32)
                0, // EndSwitchType
/*15465*/     /*Scope*/ 62, /*->15528*/
/*15466*/       OPC_CheckPredicate, 20, // Predicate_global_load
/*15468*/       OPC_SwitchType /*2 cases */, 27,  MVT::v2i32,// ->15498
/*15471*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15473*/         OPC_EmitMergeInputChains1_0,
/*15474*/         OPC_EmitInteger, MVT::i64, 0, 
/*15477*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15485*/         OPC_EmitInteger, MVT::i16, 0, 
/*15488*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX2_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:v2i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX2_ADDR64:v2i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                /*SwitchType*/ 27,  MVT::v4i32,// ->15527
/*15500*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15502*/         OPC_EmitMergeInputChains1_0,
/*15503*/         OPC_EmitInteger, MVT::i64, 0, 
/*15506*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #3
/*15514*/         OPC_EmitInteger, MVT::i16, 0, 
/*15517*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORDX4_ADDR64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 3, 1, 4, 
                  // Src: (ld:v4i32 i64:i64:$ptr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_global_load>> - Complexity = 4
                  // Dst: (BUFFER_LOAD_DWORDX4_ADDR64:v4i32 (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
                0, // EndSwitchType
/*15528*/     0, /*End of Scope*/
/*15529*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86|128,11/*1494*/,  TARGET_VAL(ISD::XOR),// ->17028
/*15534*/   OPC_Scope, 32|128,2/*288*/, /*->15825*/ // 5 children in Scope
/*15537*/     OPC_RecordChild0, // #0 = $z
/*15538*/     OPC_MoveChild, 1,
/*15540*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*15543*/     OPC_Scope, 62|128,1/*190*/, /*->15736*/ // 2 children in Scope
/*15546*/       OPC_RecordChild0, // #1 = $x
/*15547*/       OPC_MoveChild, 1,
/*15549*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15552*/       OPC_Scope, 13|128,1/*141*/, /*->15696*/ // 2 children in Scope
/*15555*/         OPC_RecordChild0, // #2 = $y
/*15556*/         OPC_MoveChild, 1,
/*15558*/         OPC_CheckSame, 0,
/*15560*/         OPC_MoveParent,
/*15561*/         OPC_MoveParent,
/*15562*/         OPC_MoveParent,
/*15563*/         OPC_CheckType, MVT::i32,
/*15565*/         OPC_Scope, 99, /*->15666*/ // 2 children in Scope
/*15567*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*15569*/           OPC_EmitInteger, MVT::i32, 0, 
/*15572*/           OPC_EmitInteger, MVT::i32, 0, 
/*15575*/           OPC_EmitInteger, MVT::i32, 0, 
/*15578*/           OPC_EmitInteger, MVT::i32, 0, 
/*15581*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15593*/           OPC_EmitInteger, MVT::i32, 0, 
/*15596*/           OPC_EmitInteger, MVT::i32, 0, 
/*15599*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15611*/           OPC_EmitInteger, MVT::i32, 0, 
/*15614*/           OPC_EmitInteger, MVT::i32, 0, 
/*15617*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*15629*/           OPC_EmitInteger, MVT::i32, 1, 
/*15632*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*15635*/           OPC_EmitInteger, MVT::i32, 0, 
/*15638*/           OPC_EmitInteger, MVT::i32, 0, 
/*15641*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                        1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15666*/         /*Scope*/ 28, /*->15695*/
/*15667*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15669*/           OPC_EmitInteger, MVT::i32, 0, 
/*15672*/           OPC_EmitInteger, MVT::i32, 0, 
/*15675*/           OPC_EmitInteger, MVT::i32, 0, 
/*15678*/           OPC_EmitInteger, MVT::i32, 0, 
/*15681*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                        1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                    // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z))) - Complexity = 9
                    // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15695*/         0, /*End of Scope*/
/*15696*/       /*Scope*/ 38, /*->15735*/
/*15697*/         OPC_MoveChild, 0,
/*15699*/         OPC_CheckSame, 0,
/*15701*/         OPC_MoveParent,
/*15702*/         OPC_RecordChild1, // #2 = $y
/*15703*/         OPC_MoveParent,
/*15704*/         OPC_MoveParent,
/*15705*/         OPC_CheckType, MVT::i32,
/*15707*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15709*/         OPC_EmitInteger, MVT::i32, 0, 
/*15712*/         OPC_EmitInteger, MVT::i32, 0, 
/*15715*/         OPC_EmitInteger, MVT::i32, 0, 
/*15718*/         OPC_EmitInteger, MVT::i32, 0, 
/*15721*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15735*/       0, /*End of Scope*/
/*15736*/     /*Scope*/ 87, /*->15824*/
/*15737*/       OPC_MoveChild, 0,
/*15739*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15742*/       OPC_Scope, 39, /*->15783*/ // 2 children in Scope
/*15744*/         OPC_RecordChild0, // #1 = $y
/*15745*/         OPC_MoveChild, 1,
/*15747*/         OPC_CheckSame, 0,
/*15749*/         OPC_MoveParent,
/*15750*/         OPC_MoveParent,
/*15751*/         OPC_RecordChild1, // #2 = $x
/*15752*/         OPC_MoveParent,
/*15753*/         OPC_CheckType, MVT::i32,
/*15755*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15757*/         OPC_EmitInteger, MVT::i32, 0, 
/*15760*/         OPC_EmitInteger, MVT::i32, 0, 
/*15763*/         OPC_EmitInteger, MVT::i32, 0, 
/*15766*/         OPC_EmitInteger, MVT::i32, 0, 
/*15769*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15783*/       /*Scope*/ 39, /*->15823*/
/*15784*/         OPC_MoveChild, 0,
/*15786*/         OPC_CheckSame, 0,
/*15788*/         OPC_MoveParent,
/*15789*/         OPC_RecordChild1, // #1 = $y
/*15790*/         OPC_MoveParent,
/*15791*/         OPC_RecordChild1, // #2 = $x
/*15792*/         OPC_MoveParent,
/*15793*/         OPC_CheckType, MVT::i32,
/*15795*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15797*/         OPC_EmitInteger, MVT::i32, 0, 
/*15800*/         OPC_EmitInteger, MVT::i32, 0, 
/*15803*/         OPC_EmitInteger, MVT::i32, 0, 
/*15806*/         OPC_EmitInteger, MVT::i32, 0, 
/*15809*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15823*/       0, /*End of Scope*/
/*15824*/     0, /*End of Scope*/
/*15825*/   /*Scope*/ 45|128,1/*173*/, /*->16000*/
/*15827*/     OPC_MoveChild, 0,
/*15829*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*15832*/     OPC_Scope, 82, /*->15916*/ // 2 children in Scope
/*15834*/       OPC_RecordChild0, // #0 = $x
/*15835*/       OPC_MoveChild, 1,
/*15837*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15840*/       OPC_RecordChild0, // #1 = $y
/*15841*/       OPC_RecordChild1, // #2 = $z
/*15842*/       OPC_MoveParent,
/*15843*/       OPC_MoveParent,
/*15844*/       OPC_MoveChild, 1,
/*15846*/       OPC_Scope, 33, /*->15881*/ // 2 children in Scope
/*15848*/         OPC_CheckSame, 2,
/*15850*/         OPC_MoveParent,
/*15851*/         OPC_CheckType, MVT::i32,
/*15853*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15855*/         OPC_EmitInteger, MVT::i32, 0, 
/*15858*/         OPC_EmitInteger, MVT::i32, 0, 
/*15861*/         OPC_EmitInteger, MVT::i32, 0, 
/*15864*/         OPC_EmitInteger, MVT::i32, 0, 
/*15867*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15881*/       /*Scope*/ 33, /*->15915*/
/*15882*/         OPC_CheckSame, 1,
/*15884*/         OPC_MoveParent,
/*15885*/         OPC_CheckType, MVT::i32,
/*15887*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15889*/         OPC_EmitInteger, MVT::i32, 0, 
/*15892*/         OPC_EmitInteger, MVT::i32, 0, 
/*15895*/         OPC_EmitInteger, MVT::i32, 0, 
/*15898*/         OPC_EmitInteger, MVT::i32, 0, 
/*15901*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 2, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15915*/       0, /*End of Scope*/
/*15916*/     /*Scope*/ 82, /*->15999*/
/*15917*/       OPC_MoveChild, 0,
/*15919*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*15922*/       OPC_RecordChild0, // #0 = $y
/*15923*/       OPC_RecordChild1, // #1 = $z
/*15924*/       OPC_MoveParent,
/*15925*/       OPC_RecordChild1, // #2 = $x
/*15926*/       OPC_MoveParent,
/*15927*/       OPC_MoveChild, 1,
/*15929*/       OPC_Scope, 33, /*->15964*/ // 2 children in Scope
/*15931*/         OPC_CheckSame, 1,
/*15933*/         OPC_MoveParent,
/*15934*/         OPC_CheckType, MVT::i32,
/*15936*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15938*/         OPC_EmitInteger, MVT::i32, 0, 
/*15941*/         OPC_EmitInteger, MVT::i32, 0, 
/*15944*/         OPC_EmitInteger, MVT::i32, 0, 
/*15947*/         OPC_EmitInteger, MVT::i32, 0, 
/*15950*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 0, 1, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15964*/       /*Scope*/ 33, /*->15998*/
/*15965*/         OPC_CheckSame, 0,
/*15967*/         OPC_MoveParent,
/*15968*/         OPC_CheckType, MVT::i32,
/*15970*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*15972*/         OPC_EmitInteger, MVT::i32, 0, 
/*15975*/         OPC_EmitInteger, MVT::i32, 0, 
/*15978*/         OPC_EmitInteger, MVT::i32, 0, 
/*15981*/         OPC_EmitInteger, MVT::i32, 0, 
/*15984*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_BFI_B32), 0,
                      1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (V_BFI_B32:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*15998*/       0, /*End of Scope*/
/*15999*/     0, /*End of Scope*/
/*16000*/   /*Scope*/ 99|128,2/*355*/, /*->16357*/
/*16002*/     OPC_RecordChild0, // #0 = $z
/*16003*/     OPC_MoveChild, 1,
/*16005*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*16008*/     OPC_Scope, 115, /*->16125*/ // 2 children in Scope
/*16010*/       OPC_RecordChild0, // #1 = $x
/*16011*/       OPC_MoveChild, 1,
/*16013*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16016*/       OPC_MoveChild, 0,
/*16018*/       OPC_CheckSame, 0,
/*16020*/       OPC_MoveParent,
/*16021*/       OPC_RecordChild1, // #2 = $y
/*16022*/       OPC_MoveParent,
/*16023*/       OPC_MoveParent,
/*16024*/       OPC_CheckType, MVT::i32,
/*16026*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16028*/       OPC_EmitInteger, MVT::i32, 0, 
/*16031*/       OPC_EmitInteger, MVT::i32, 0, 
/*16034*/       OPC_EmitInteger, MVT::i32, 0, 
/*16037*/       OPC_EmitInteger, MVT::i32, 0, 
/*16040*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16052*/       OPC_EmitInteger, MVT::i32, 0, 
/*16055*/       OPC_EmitInteger, MVT::i32, 0, 
/*16058*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16070*/       OPC_EmitInteger, MVT::i32, 0, 
/*16073*/       OPC_EmitInteger, MVT::i32, 0, 
/*16076*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16088*/       OPC_EmitInteger, MVT::i32, 1, 
/*16091*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16094*/       OPC_EmitInteger, MVT::i32, 0, 
/*16097*/       OPC_EmitInteger, MVT::i32, 0, 
/*16100*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (xor:i32 i32:i32:$z, (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y))) - Complexity = 9
                // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16125*/     /*Scope*/ 101|128,1/*229*/, /*->16356*/
/*16127*/       OPC_MoveChild, 0,
/*16129*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16132*/       OPC_Scope, 110, /*->16244*/ // 2 children in Scope
/*16134*/         OPC_RecordChild0, // #1 = $y
/*16135*/         OPC_MoveChild, 1,
/*16137*/         OPC_CheckSame, 0,
/*16139*/         OPC_MoveParent,
/*16140*/         OPC_MoveParent,
/*16141*/         OPC_RecordChild1, // #2 = $x
/*16142*/         OPC_MoveParent,
/*16143*/         OPC_CheckType, MVT::i32,
/*16145*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16147*/         OPC_EmitInteger, MVT::i32, 0, 
/*16150*/         OPC_EmitInteger, MVT::i32, 0, 
/*16153*/         OPC_EmitInteger, MVT::i32, 0, 
/*16156*/         OPC_EmitInteger, MVT::i32, 0, 
/*16159*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16171*/         OPC_EmitInteger, MVT::i32, 0, 
/*16174*/         OPC_EmitInteger, MVT::i32, 0, 
/*16177*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16189*/         OPC_EmitInteger, MVT::i32, 0, 
/*16192*/         OPC_EmitInteger, MVT::i32, 0, 
/*16195*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16207*/         OPC_EmitInteger, MVT::i32, 1, 
/*16210*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16213*/         OPC_EmitInteger, MVT::i32, 0, 
/*16216*/         OPC_EmitInteger, MVT::i32, 0, 
/*16219*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16244*/       /*Scope*/ 110, /*->16355*/
/*16245*/         OPC_MoveChild, 0,
/*16247*/         OPC_CheckSame, 0,
/*16249*/         OPC_MoveParent,
/*16250*/         OPC_RecordChild1, // #1 = $y
/*16251*/         OPC_MoveParent,
/*16252*/         OPC_RecordChild1, // #2 = $x
/*16253*/         OPC_MoveParent,
/*16254*/         OPC_CheckType, MVT::i32,
/*16256*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16258*/         OPC_EmitInteger, MVT::i32, 0, 
/*16261*/         OPC_EmitInteger, MVT::i32, 0, 
/*16264*/         OPC_EmitInteger, MVT::i32, 0, 
/*16267*/         OPC_EmitInteger, MVT::i32, 0, 
/*16270*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16282*/         OPC_EmitInteger, MVT::i32, 0, 
/*16285*/         OPC_EmitInteger, MVT::i32, 0, 
/*16288*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16300*/         OPC_EmitInteger, MVT::i32, 0, 
/*16303*/         OPC_EmitInteger, MVT::i32, 0, 
/*16306*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16318*/         OPC_EmitInteger, MVT::i32, 1, 
/*16321*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16324*/         OPC_EmitInteger, MVT::i32, 0, 
/*16327*/         OPC_EmitInteger, MVT::i32, 0, 
/*16330*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 i32:i32:$z, (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x)) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16355*/       0, /*End of Scope*/
/*16356*/     0, /*End of Scope*/
/*16357*/   /*Scope*/ 75|128,3/*459*/, /*->16818*/
/*16359*/     OPC_MoveChild, 0,
/*16361*/     OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*16364*/     OPC_Scope, 96|128,1/*224*/, /*->16591*/ // 2 children in Scope
/*16367*/       OPC_RecordChild0, // #0 = $x
/*16368*/       OPC_MoveChild, 1,
/*16370*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16373*/       OPC_RecordChild0, // #1 = $y
/*16374*/       OPC_RecordChild1, // #2 = $z
/*16375*/       OPC_MoveParent,
/*16376*/       OPC_MoveParent,
/*16377*/       OPC_MoveChild, 1,
/*16379*/       OPC_Scope, 104, /*->16485*/ // 2 children in Scope
/*16381*/         OPC_CheckSame, 2,
/*16383*/         OPC_MoveParent,
/*16384*/         OPC_CheckType, MVT::i32,
/*16386*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16388*/         OPC_EmitInteger, MVT::i32, 0, 
/*16391*/         OPC_EmitInteger, MVT::i32, 0, 
/*16394*/         OPC_EmitInteger, MVT::i32, 0, 
/*16397*/         OPC_EmitInteger, MVT::i32, 0, 
/*16400*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16412*/         OPC_EmitInteger, MVT::i32, 0, 
/*16415*/         OPC_EmitInteger, MVT::i32, 0, 
/*16418*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16430*/         OPC_EmitInteger, MVT::i32, 0, 
/*16433*/         OPC_EmitInteger, MVT::i32, 0, 
/*16436*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16448*/         OPC_EmitInteger, MVT::i32, 1, 
/*16451*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16454*/         OPC_EmitInteger, MVT::i32, 0, 
/*16457*/         OPC_EmitInteger, MVT::i32, 0, 
/*16460*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$y, i32:i32:$z)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16485*/       /*Scope*/ 104, /*->16590*/
/*16486*/         OPC_CheckSame, 1,
/*16488*/         OPC_MoveParent,
/*16489*/         OPC_CheckType, MVT::i32,
/*16491*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16493*/         OPC_EmitInteger, MVT::i32, 0, 
/*16496*/         OPC_EmitInteger, MVT::i32, 0, 
/*16499*/         OPC_EmitInteger, MVT::i32, 0, 
/*16502*/         OPC_EmitInteger, MVT::i32, 0, 
/*16505*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16517*/         OPC_EmitInteger, MVT::i32, 0, 
/*16520*/         OPC_EmitInteger, MVT::i32, 0, 
/*16523*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16535*/         OPC_EmitInteger, MVT::i32, 0, 
/*16538*/         OPC_EmitInteger, MVT::i32, 0, 
/*16541*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16553*/         OPC_EmitInteger, MVT::i32, 1, 
/*16556*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16559*/         OPC_EmitInteger, MVT::i32, 0, 
/*16562*/         OPC_EmitInteger, MVT::i32, 0, 
/*16565*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 i32:i32:$x, (xor:i32 i32:i32:$z, i32:i32:$y)), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16590*/       0, /*End of Scope*/
/*16591*/     /*Scope*/ 96|128,1/*224*/, /*->16817*/
/*16593*/       OPC_MoveChild, 0,
/*16595*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*16598*/       OPC_RecordChild0, // #0 = $y
/*16599*/       OPC_RecordChild1, // #1 = $z
/*16600*/       OPC_MoveParent,
/*16601*/       OPC_RecordChild1, // #2 = $x
/*16602*/       OPC_MoveParent,
/*16603*/       OPC_MoveChild, 1,
/*16605*/       OPC_Scope, 104, /*->16711*/ // 2 children in Scope
/*16607*/         OPC_CheckSame, 1,
/*16609*/         OPC_MoveParent,
/*16610*/         OPC_CheckType, MVT::i32,
/*16612*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16614*/         OPC_EmitInteger, MVT::i32, 0, 
/*16617*/         OPC_EmitInteger, MVT::i32, 0, 
/*16620*/         OPC_EmitInteger, MVT::i32, 0, 
/*16623*/         OPC_EmitInteger, MVT::i32, 0, 
/*16626*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16638*/         OPC_EmitInteger, MVT::i32, 0, 
/*16641*/         OPC_EmitInteger, MVT::i32, 0, 
/*16644*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16656*/         OPC_EmitInteger, MVT::i32, 0, 
/*16659*/         OPC_EmitInteger, MVT::i32, 0, 
/*16662*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16674*/         OPC_EmitInteger, MVT::i32, 1, 
/*16677*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16680*/         OPC_EmitInteger, MVT::i32, 0, 
/*16683*/         OPC_EmitInteger, MVT::i32, 0, 
/*16686*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$y, i32:i32:$z), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16711*/       /*Scope*/ 104, /*->16816*/
/*16712*/         OPC_CheckSame, 0,
/*16714*/         OPC_MoveParent,
/*16715*/         OPC_CheckType, MVT::i32,
/*16717*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16719*/         OPC_EmitInteger, MVT::i32, 0, 
/*16722*/         OPC_EmitInteger, MVT::i32, 0, 
/*16725*/         OPC_EmitInteger, MVT::i32, 0, 
/*16728*/         OPC_EmitInteger, MVT::i32, 0, 
/*16731*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16743*/         OPC_EmitInteger, MVT::i32, 0, 
/*16746*/         OPC_EmitInteger, MVT::i32, 0, 
/*16749*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16761*/         OPC_EmitInteger, MVT::i32, 0, 
/*16764*/         OPC_EmitInteger, MVT::i32, 0, 
/*16767*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16779*/         OPC_EmitInteger, MVT::i32, 1, 
/*16782*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16785*/         OPC_EmitInteger, MVT::i32, 0, 
/*16788*/         OPC_EmitInteger, MVT::i32, 0, 
/*16791*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFI_INT_eg), 0,
                      1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (xor:i32 (and:i32 (xor:i32 i32:i32:$z, i32:i32:$y), i32:i32:$x), i32:i32:$z) - Complexity = 9
                  // Dst: (BFI_INT_eg:i32 ?:i32:$x, ?:i32:$y, ?:i32:$z)
/*16816*/       0, /*End of Scope*/
/*16817*/     0, /*End of Scope*/
/*16818*/   /*Scope*/ 79|128,1/*207*/, /*->17027*/
/*16820*/     OPC_RecordChild0, // #0 = $src0
/*16821*/     OPC_Scope, 83, /*->16906*/ // 2 children in Scope
/*16823*/       OPC_MoveChild, 1,
/*16825*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16836*/       OPC_MoveParent,
/*16837*/       OPC_CheckType, MVT::i32,
/*16839*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16841*/       OPC_EmitInteger, MVT::i32, 1, 
/*16844*/       OPC_EmitInteger, MVT::i32, 0, 
/*16847*/       OPC_EmitInteger, MVT::i32, 0, 
/*16850*/       OPC_EmitInteger, MVT::i32, 0, 
/*16853*/       OPC_EmitInteger, MVT::i32, 0, 
/*16856*/       OPC_EmitInteger, MVT::i32, 0, 
/*16859*/       OPC_EmitInteger, MVT::i32, 0, 
/*16862*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16874*/       OPC_EmitInteger, MVT::i32, 1, 
/*16877*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16880*/       OPC_EmitInteger, MVT::i32, 0, 
/*16883*/       OPC_EmitInteger, MVT::i32, 0, 
/*16886*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::NOT_INT), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (xor:i32 R600_Reg32:i32:$src0, -1:i32) - Complexity = 8
                // Dst: (NOT_INT:i32 R600_Reg32:i32:$src0)
/*16906*/     /*Scope*/ 119, /*->17026*/
/*16907*/       OPC_RecordChild1, // #1 = $src1
/*16908*/       OPC_CheckType, MVT::i32,
/*16910*/       OPC_Scope, 101, /*->17013*/ // 2 children in Scope
/*16912*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*16914*/         OPC_EmitInteger, MVT::i32, 0, 
/*16917*/         OPC_EmitInteger, MVT::i32, 0, 
/*16920*/         OPC_EmitInteger, MVT::i32, 1, 
/*16923*/         OPC_EmitInteger, MVT::i32, 0, 
/*16926*/         OPC_EmitInteger, MVT::i32, 0, 
/*16929*/         OPC_EmitInteger, MVT::i32, 0, 
/*16932*/         OPC_EmitInteger, MVT::i32, 0, 
/*16935*/         OPC_EmitInteger, MVT::i32, 0, 
/*16938*/         OPC_EmitInteger, MVT::i32, 0, 
/*16941*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16953*/         OPC_EmitInteger, MVT::i32, 0, 
/*16956*/         OPC_EmitInteger, MVT::i32, 0, 
/*16959*/         OPC_EmitInteger, MVT::i32, 0, 
/*16962*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*16974*/         OPC_EmitInteger, MVT::i32, 1, 
/*16977*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*16980*/         OPC_EmitInteger, MVT::i32, 0, 
/*16983*/         OPC_EmitInteger, MVT::i32, 0, 
/*16986*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::XOR_INT), 0,
                      1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (xor:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                  // Dst: (XOR_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*17013*/       /*Scope*/ 11, /*->17025*/
/*17014*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17016*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_XOR_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                  // Dst: (V_XOR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*17025*/       0, /*End of Scope*/
/*17026*/     0, /*End of Scope*/
/*17027*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->17081
/*17031*/   OPC_RecordChild0, // #0 = $src
/*17032*/   OPC_CheckChild0Type, MVT::i32,
/*17034*/   OPC_Scope, 15, /*->17051*/ // 2 children in Scope
/*17036*/     OPC_CheckType, MVT::i32,
/*17038*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17040*/     OPC_CheckComplexPat, /*CP*/4, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/*17043*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CONST_COPY), 0|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (CONST_ADDRESS:i32 ADDRGA_CONST_OFFSET:i32:$src) - Complexity = 9
              // Dst: (CONST_COPY:i32 ADDRGA_CONST_OFFSET:i32:$src)
/*17051*/   /*Scope*/ 28, /*->17080*/
/*17052*/     OPC_RecordChild1, // #1 = $BUFFER_ID
/*17053*/     OPC_MoveChild, 1,
/*17055*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17058*/     OPC_CheckType, MVT::i32,
/*17060*/     OPC_MoveParent,
/*17061*/     OPC_CheckType, MVT::v4i32,
/*17063*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17065*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*17068*/     OPC_EmitConvertToTarget, 1,
/*17070*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (CONST_ADDRESS:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 15
              // Dst: (TEX_VTX_CONSTBUF:v4i32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*17080*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 81|128,24/*3153*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->20238
/*17085*/   OPC_MoveChild, 0,
/*17087*/   OPC_Scope, 114, /*->17203*/ // 18 children in Scope
/*17089*/     OPC_CheckInteger, 87|128,19/*2519*/, 
/*17092*/     OPC_MoveParent,
/*17093*/     OPC_RecordChild1, // #0 = $src0
/*17094*/     OPC_CheckChild1Type, MVT::i32,
/*17096*/     OPC_RecordChild2, // #1 = $src1
/*17097*/     OPC_CheckChild2Type, MVT::i32,
/*17099*/     OPC_RecordChild3, // #2 = $src2
/*17100*/     OPC_CheckChild3Type, MVT::i32,
/*17102*/     OPC_CheckType, MVT::i32,
/*17104*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17106*/     OPC_EmitInteger, MVT::i32, 0, 
/*17109*/     OPC_EmitInteger, MVT::i32, 0, 
/*17112*/     OPC_EmitInteger, MVT::i32, 0, 
/*17115*/     OPC_EmitInteger, MVT::i32, 0, 
/*17118*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17130*/     OPC_EmitInteger, MVT::i32, 0, 
/*17133*/     OPC_EmitInteger, MVT::i32, 0, 
/*17136*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17148*/     OPC_EmitInteger, MVT::i32, 0, 
/*17151*/     OPC_EmitInteger, MVT::i32, 0, 
/*17154*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17166*/     OPC_EmitInteger, MVT::i32, 1, 
/*17169*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17172*/     OPC_EmitInteger, MVT::i32, 0, 
/*17175*/     OPC_EmitInteger, MVT::i32, 0, 
/*17178*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BFE_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (intrinsic_wo_chain:i32 2519:iPTR, i32:i32:$src0, i32:i32:$src1, i32:i32:$src2) - Complexity = 8
              // Dst: (BFE_UINT_eg:i32 i32:i32:$src0, i32:i32:$src1, i32:i32:$src2)
/*17203*/   /*Scope*/ 17, /*->17221*/
/*17204*/     OPC_CheckInteger, 61|128,20/*2621*/, 
/*17207*/     OPC_MoveParent,
/*17208*/     OPC_RecordChild1, // #0 = $src0
/*17209*/     OPC_RecordChild2, // #1 = $src1
/*17210*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17212*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_PKRTZ_F16_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 2621:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
              // Dst: (V_CVT_PKRTZ_F16_F32_e32:i32 f32:f32:$src0, f32:f32:$src1)
/*17221*/   /*Scope*/ 57, /*->17279*/
/*17222*/     OPC_CheckInteger, 67|128,20/*2627*/, 
/*17225*/     OPC_MoveParent,
/*17226*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17228*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17235*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*17242*/     OPC_EmitInteger, MVT::i32, 0, 
/*17245*/     OPC_EmitInteger, MVT::i32, 0, 
/*17248*/     OPC_EmitInteger, MVT::i32, 0, 
/*17251*/     OPC_EmitInteger, MVT::i32, 0, 
/*17254*/     OPC_EmitInteger, MVT::i32, 0, 
/*17257*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MBCNT_LO_U32_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6,  // Results = #7
/*17270*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MBCNT_HI_U32_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 7, 
              // Src: (intrinsic_wo_chain:i32 2627:iPTR) - Complexity = 8
              // Dst: (V_MBCNT_HI_U32_B32_e32:i32 4294967295:i32, (V_MBCNT_LO_U32_B32_e64:i32 4294967295:i32, 0:i32, 0:i32, 0:i32, 0:i32, 0:i32))
/*17279*/   /*Scope*/ 73, /*->17353*/
/*17280*/     OPC_CheckInteger, 95|128,19/*2527*/, 
/*17283*/     OPC_MoveParent,
/*17284*/     OPC_RecordChild1, // #0 = $src
/*17285*/     OPC_CheckChild1Type, MVT::f32,
/*17287*/     OPC_MoveChild, 2,
/*17289*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*17292*/     OPC_CheckPredicate, 9, // Predicate_FP_ZERO
/*17294*/     OPC_CheckType, MVT::f32,
/*17296*/     OPC_MoveParent,
/*17297*/     OPC_MoveChild, 3,
/*17299*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*17302*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*17304*/     OPC_CheckType, MVT::f32,
/*17306*/     OPC_MoveParent,
/*17307*/     OPC_CheckType, MVT::f32,
/*17309*/     OPC_Scope, 30, /*->17341*/ // 2 children in Scope
/*17311*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17313*/       OPC_EmitInteger, MVT::i32, 0, 
/*17316*/       OPC_EmitInteger, MVT::i32, 0, 
/*17319*/       OPC_EmitInteger, MVT::i32, 1, 
/*17322*/       OPC_EmitInteger, MVT::i32, 0, 
/*17325*/       OPC_EmitInteger, MVT::i32, 0, 
/*17328*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                    1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (intrinsic_wo_chain:f32 2527:iPTR, f32:f32:$src, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 1:i32, 0:i32, 0:i32)
/*17341*/     /*Scope*/ 10, /*->17352*/
/*17342*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17344*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CLAMP_R600), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2527:iPTR, f32:f32:$src0, (fpimm:f32)<<P:Predicate_FP_ZERO>>, (fpimm:f32)<<P:Predicate_FP_ONE>>) - Complexity = 16
                // Dst: (CLAMP_R600:f32 f32:f32:$src0)
/*17352*/     0, /*End of Scope*/
/*17353*/   /*Scope*/ 39, /*->17393*/
/*17354*/     OPC_CheckInteger, 54|128,20/*2614*/, 
/*17357*/     OPC_MoveParent,
/*17358*/     OPC_RecordChild1, // #0 = $attr_chan
/*17359*/     OPC_MoveChild, 1,
/*17361*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17364*/     OPC_MoveParent,
/*17365*/     OPC_RecordChild2, // #1 = $attr
/*17366*/     OPC_MoveChild, 2,
/*17368*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17371*/     OPC_MoveParent,
/*17372*/     OPC_RecordChild3, // #2 = $params
/*17373*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17375*/     OPC_EmitInteger, MVT::i32, 2, 
/*17378*/     OPC_EmitConvertToTarget, 0,
/*17380*/     OPC_EmitConvertToTarget, 1,
/*17382*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_MOV_F32), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 4, 5, 2, 
              // Src: (intrinsic_wo_chain:f32 2614:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params) - Complexity = 14
              // Dst: (V_INTERP_MOV_F32:f32 2:i32, (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*17393*/   /*Scope*/ 77, /*->17471*/
/*17394*/     OPC_CheckInteger, 55|128,20/*2615*/, 
/*17397*/     OPC_MoveParent,
/*17398*/     OPC_RecordChild1, // #0 = $attr_chan
/*17399*/     OPC_MoveChild, 1,
/*17401*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17404*/     OPC_MoveParent,
/*17405*/     OPC_RecordChild2, // #1 = $attr
/*17406*/     OPC_MoveChild, 2,
/*17408*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17411*/     OPC_MoveParent,
/*17412*/     OPC_RecordChild3, // #2 = $params
/*17413*/     OPC_RecordChild4, // #3 = $ij
/*17414*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17416*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*17419*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*17428*/     OPC_EmitConvertToTarget, 0,
/*17430*/     OPC_EmitConvertToTarget, 1,
/*17432*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_INTERP_P1_F32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 5, 6, 7, 2,  // Results = #8
/*17443*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*17446*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 9,  // Results = #10
/*17455*/     OPC_EmitConvertToTarget, 0,
/*17457*/     OPC_EmitConvertToTarget, 1,
/*17459*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_INTERP_P2_F32), 0,
                  1/*#VTs*/, MVT::f32, 5/*#Ops*/, 8, 10, 11, 12, 2, 
              // Src: (intrinsic_wo_chain:f32 2615:iPTR, (imm:i32):$attr_chan, (imm:i32):$attr, M0Reg:i32:$params, v2i32:v2i32:$ij) - Complexity = 14
              // Dst: (V_INTERP_P2_F32:f32 (V_INTERP_P1_F32:i32 (EXTRACT_SUBREG:i32 v2i32:v2i32:$ij, sub0:i32), (imm:i32):$attr_chan, (imm:i32):$attr, i32:i32:$params), (EXTRACT_SUBREG:i32 ?:v2i32:$ij, sub1:i32), (imm:i32):$attr_chan, (imm:i32):$attr, ?:i32:$params)
/*17471*/   /*Scope*/ 23, /*->17495*/
/*17472*/     OPC_CheckInteger, 54|128,19/*2486*/, 
/*17475*/     OPC_MoveParent,
/*17476*/     OPC_RecordChild1, // #0 = $src
/*17477*/     OPC_MoveChild, 1,
/*17479*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*17482*/     OPC_MoveParent,
/*17483*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17485*/     OPC_EmitConvertToTarget, 0,
/*17487*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOAD_CONST), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_wo_chain:f32 2486:iPTR, (imm:i32):$src) - Complexity = 11
              // Dst: (LOAD_CONST:f32 (imm:i32):$src)
/*17495*/   /*Scope*/ 122, /*->17618*/
/*17496*/     OPC_CheckInteger, 57|128,19/*2489*/, 
/*17499*/     OPC_MoveParent,
/*17500*/     OPC_RecordChild1, // #0 = $src0
/*17501*/     OPC_RecordChild2, // #1 = $src1
/*17502*/     OPC_Scope, 101, /*->17605*/ // 2 children in Scope
/*17504*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17506*/       OPC_EmitInteger, MVT::i32, 0, 
/*17509*/       OPC_EmitInteger, MVT::i32, 0, 
/*17512*/       OPC_EmitInteger, MVT::i32, 1, 
/*17515*/       OPC_EmitInteger, MVT::i32, 0, 
/*17518*/       OPC_EmitInteger, MVT::i32, 0, 
/*17521*/       OPC_EmitInteger, MVT::i32, 0, 
/*17524*/       OPC_EmitInteger, MVT::i32, 0, 
/*17527*/       OPC_EmitInteger, MVT::i32, 0, 
/*17530*/       OPC_EmitInteger, MVT::i32, 0, 
/*17533*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17545*/       OPC_EmitInteger, MVT::i32, 0, 
/*17548*/       OPC_EmitInteger, MVT::i32, 0, 
/*17551*/       OPC_EmitInteger, MVT::i32, 0, 
/*17554*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17566*/       OPC_EmitInteger, MVT::i32, 1, 
/*17569*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17572*/       OPC_EmitInteger, MVT::i32, 0, 
/*17575*/       OPC_EmitInteger, MVT::i32, 0, 
/*17578*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (intrinsic_wo_chain:f32 2489:iPTR, R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 8
                // Dst: (MUL:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*17605*/     /*Scope*/ 11, /*->17617*/
/*17606*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17608*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:f32 2489:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*17617*/     0, /*End of Scope*/
/*17618*/   /*Scope*/ 86, /*->17705*/
/*17619*/     OPC_CheckInteger, 71|128,19/*2503*/, 
/*17622*/     OPC_MoveParent,
/*17623*/     OPC_RecordChild1, // #0 = $src0
/*17624*/     OPC_Scope, 67, /*->17693*/ // 2 children in Scope
/*17626*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*17628*/       OPC_EmitInteger, MVT::i32, 1, 
/*17631*/       OPC_EmitInteger, MVT::i32, 0, 
/*17634*/       OPC_EmitInteger, MVT::i32, 0, 
/*17637*/       OPC_EmitInteger, MVT::i32, 0, 
/*17640*/       OPC_EmitInteger, MVT::i32, 0, 
/*17643*/       OPC_EmitInteger, MVT::i32, 0, 
/*17646*/       OPC_EmitInteger, MVT::i32, 0, 
/*17649*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17661*/       OPC_EmitInteger, MVT::i32, 1, 
/*17664*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17667*/       OPC_EmitInteger, MVT::i32, 0, 
/*17670*/       OPC_EmitInteger, MVT::i32, 0, 
/*17673*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TRUNC), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2503:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (TRUNC:f32 R600_Reg32:f32:$src0)
/*17693*/     /*Scope*/ 10, /*->17704*/
/*17694*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17696*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_TRUNC_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2503:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_TRUNC_F32_e32:f32 f32:f32:$src0)
/*17704*/     0, /*End of Scope*/
/*17705*/   /*Scope*/ 94|128,1/*222*/, /*->17929*/
/*17707*/     OPC_CheckInteger, 62|128,19/*2494*/, 
/*17710*/     OPC_MoveParent,
/*17711*/     OPC_RecordChild1, // #0 = $src0
/*17712*/     OPC_Scope, 67, /*->17781*/ // 4 children in Scope
/*17714*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*17716*/       OPC_EmitInteger, MVT::i32, 1, 
/*17719*/       OPC_EmitInteger, MVT::i32, 0, 
/*17722*/       OPC_EmitInteger, MVT::i32, 0, 
/*17725*/       OPC_EmitInteger, MVT::i32, 0, 
/*17728*/       OPC_EmitInteger, MVT::i32, 0, 
/*17731*/       OPC_EmitInteger, MVT::i32, 0, 
/*17734*/       OPC_EmitInteger, MVT::i32, 0, 
/*17737*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17749*/       OPC_EmitInteger, MVT::i32, 1, 
/*17752*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17755*/       OPC_EmitInteger, MVT::i32, 0, 
/*17758*/       OPC_EmitInteger, MVT::i32, 0, 
/*17761*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2494:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_r600:f32 R600_Reg32:f32:$src0)
/*17781*/     /*Scope*/ 67, /*->17849*/
/*17782*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*17784*/       OPC_EmitInteger, MVT::i32, 1, 
/*17787*/       OPC_EmitInteger, MVT::i32, 0, 
/*17790*/       OPC_EmitInteger, MVT::i32, 0, 
/*17793*/       OPC_EmitInteger, MVT::i32, 0, 
/*17796*/       OPC_EmitInteger, MVT::i32, 0, 
/*17799*/       OPC_EmitInteger, MVT::i32, 0, 
/*17802*/       OPC_EmitInteger, MVT::i32, 0, 
/*17805*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17817*/       OPC_EmitInteger, MVT::i32, 1, 
/*17820*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17823*/       OPC_EmitInteger, MVT::i32, 0, 
/*17826*/       OPC_EmitInteger, MVT::i32, 0, 
/*17829*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2494:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_eg:f32 R600_Reg32:f32:$src0)
/*17849*/     /*Scope*/ 67, /*->17917*/
/*17850*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*17852*/       OPC_EmitInteger, MVT::i32, 1, 
/*17855*/       OPC_EmitInteger, MVT::i32, 0, 
/*17858*/       OPC_EmitInteger, MVT::i32, 0, 
/*17861*/       OPC_EmitInteger, MVT::i32, 0, 
/*17864*/       OPC_EmitInteger, MVT::i32, 0, 
/*17867*/       OPC_EmitInteger, MVT::i32, 0, 
/*17870*/       OPC_EmitInteger, MVT::i32, 0, 
/*17873*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17885*/       OPC_EmitInteger, MVT::i32, 1, 
/*17888*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*17891*/       OPC_EmitInteger, MVT::i32, 0, 
/*17894*/       OPC_EmitInteger, MVT::i32, 0, 
/*17897*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (intrinsic_wo_chain:f32 2494:iPTR, R600_Reg32:f32:$src0) - Complexity = 8
                // Dst: (RECIPSQRT_CLAMPED_cm:f32 R600_Reg32:f32:$src0)
/*17917*/     /*Scope*/ 10, /*->17928*/
/*17918*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*17920*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RSQ_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:f32 2494:iPTR, f32:f32:$src0) - Complexity = 8
                // Dst: (V_RSQ_LEGACY_F32_e32:f32 f32:f32:$src0)
/*17928*/     0, /*End of Scope*/
/*17929*/   /*Scope*/ 20|128,4/*532*/, /*->18463*/
/*17931*/     OPC_CheckInteger, 48|128,19/*2480*/, 
/*17934*/     OPC_MoveParent,
/*17935*/     OPC_RecordChild1, // #0 = $src0
/*17936*/     OPC_RecordChild2, // #1 = $src1
/*17937*/     OPC_Scope, 38|128,1/*166*/, /*->18106*/ // 4 children in Scope
/*17940*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*17942*/       OPC_EmitInteger, MVT::i32, 0, 
/*17945*/       OPC_EmitInteger, MVT::i32, 0, 
/*17948*/       OPC_EmitInteger, MVT::i32, 1, 
/*17951*/       OPC_EmitInteger, MVT::i32, 0, 
/*17954*/       OPC_EmitInteger, MVT::i32, 0, 
/*17957*/       OPC_EmitInteger, MVT::i32, 0, 
/*17960*/       OPC_EmitInteger, MVT::i32, 0, 
/*17963*/       OPC_EmitInteger, MVT::i32, 0, 
/*17966*/       OPC_EmitInteger, MVT::i32, 0, 
/*17969*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*17981*/       OPC_EmitInteger, MVT::i32, 1, 
/*17984*/       OPC_EmitInteger, MVT::i32, 0, 
/*17987*/       OPC_EmitInteger, MVT::i32, 0, 
/*17990*/       OPC_EmitInteger, MVT::i32, 0, 
/*17993*/       OPC_EmitInteger, MVT::i32, 0, 
/*17996*/       OPC_EmitInteger, MVT::i32, 0, 
/*17999*/       OPC_EmitInteger, MVT::i32, 0, 
/*18002*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18014*/       OPC_EmitInteger, MVT::i32, 1, 
/*18017*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18020*/       OPC_EmitInteger, MVT::i32, 0, 
/*18023*/       OPC_EmitInteger, MVT::i32, 0, 
/*18026*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18046*/       OPC_EmitInteger, MVT::i32, 0, 
/*18049*/       OPC_EmitInteger, MVT::i32, 0, 
/*18052*/       OPC_EmitInteger, MVT::i32, 0, 
/*18055*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18067*/       OPC_EmitInteger, MVT::i32, 1, 
/*18070*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18073*/       OPC_EmitInteger, MVT::i32, 0, 
/*18076*/       OPC_EmitInteger, MVT::i32, 0, 
/*18079*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2480:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*18106*/     /*Scope*/ 38|128,1/*166*/, /*->18274*/
/*18108*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*18110*/       OPC_EmitInteger, MVT::i32, 0, 
/*18113*/       OPC_EmitInteger, MVT::i32, 0, 
/*18116*/       OPC_EmitInteger, MVT::i32, 1, 
/*18119*/       OPC_EmitInteger, MVT::i32, 0, 
/*18122*/       OPC_EmitInteger, MVT::i32, 0, 
/*18125*/       OPC_EmitInteger, MVT::i32, 0, 
/*18128*/       OPC_EmitInteger, MVT::i32, 0, 
/*18131*/       OPC_EmitInteger, MVT::i32, 0, 
/*18134*/       OPC_EmitInteger, MVT::i32, 0, 
/*18137*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18149*/       OPC_EmitInteger, MVT::i32, 1, 
/*18152*/       OPC_EmitInteger, MVT::i32, 0, 
/*18155*/       OPC_EmitInteger, MVT::i32, 0, 
/*18158*/       OPC_EmitInteger, MVT::i32, 0, 
/*18161*/       OPC_EmitInteger, MVT::i32, 0, 
/*18164*/       OPC_EmitInteger, MVT::i32, 0, 
/*18167*/       OPC_EmitInteger, MVT::i32, 0, 
/*18170*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18182*/       OPC_EmitInteger, MVT::i32, 1, 
/*18185*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18188*/       OPC_EmitInteger, MVT::i32, 0, 
/*18191*/       OPC_EmitInteger, MVT::i32, 0, 
/*18194*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18214*/       OPC_EmitInteger, MVT::i32, 0, 
/*18217*/       OPC_EmitInteger, MVT::i32, 0, 
/*18220*/       OPC_EmitInteger, MVT::i32, 0, 
/*18223*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18235*/       OPC_EmitInteger, MVT::i32, 1, 
/*18238*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18241*/       OPC_EmitInteger, MVT::i32, 0, 
/*18244*/       OPC_EmitInteger, MVT::i32, 0, 
/*18247*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2480:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*18274*/     /*Scope*/ 38|128,1/*166*/, /*->18442*/
/*18276*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*18278*/       OPC_EmitInteger, MVT::i32, 0, 
/*18281*/       OPC_EmitInteger, MVT::i32, 0, 
/*18284*/       OPC_EmitInteger, MVT::i32, 1, 
/*18287*/       OPC_EmitInteger, MVT::i32, 0, 
/*18290*/       OPC_EmitInteger, MVT::i32, 0, 
/*18293*/       OPC_EmitInteger, MVT::i32, 0, 
/*18296*/       OPC_EmitInteger, MVT::i32, 0, 
/*18299*/       OPC_EmitInteger, MVT::i32, 0, 
/*18302*/       OPC_EmitInteger, MVT::i32, 0, 
/*18305*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18317*/       OPC_EmitInteger, MVT::i32, 1, 
/*18320*/       OPC_EmitInteger, MVT::i32, 0, 
/*18323*/       OPC_EmitInteger, MVT::i32, 0, 
/*18326*/       OPC_EmitInteger, MVT::i32, 0, 
/*18329*/       OPC_EmitInteger, MVT::i32, 0, 
/*18332*/       OPC_EmitInteger, MVT::i32, 0, 
/*18335*/       OPC_EmitInteger, MVT::i32, 0, 
/*18338*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18350*/       OPC_EmitInteger, MVT::i32, 1, 
/*18353*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18356*/       OPC_EmitInteger, MVT::i32, 0, 
/*18359*/       OPC_EmitInteger, MVT::i32, 0, 
/*18362*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*18382*/       OPC_EmitInteger, MVT::i32, 0, 
/*18385*/       OPC_EmitInteger, MVT::i32, 0, 
/*18388*/       OPC_EmitInteger, MVT::i32, 0, 
/*18391*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18403*/       OPC_EmitInteger, MVT::i32, 1, 
/*18406*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18409*/       OPC_EmitInteger, MVT::i32, 0, 
/*18412*/       OPC_EmitInteger, MVT::i32, 0, 
/*18415*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                // Src: (intrinsic_wo_chain:f32 2480:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*18442*/     /*Scope*/ 19, /*->18462*/
/*18443*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*18445*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*18453*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:f32 2480:iPTR, f32:f32:$src0, f32:f32:$src1) - Complexity = 8
                // Dst: (V_MUL_LEGACY_F32_e32:f32 ?:f32:$src0, (V_RCP_LEGACY_F32_e32:i32 ?:f32:$src1))
/*18462*/     0, /*End of Scope*/
/*18463*/   /*Scope*/ 63, /*->18527*/
/*18464*/     OPC_CheckInteger, 44|128,19/*2476*/, 
/*18467*/     OPC_MoveParent,
/*18468*/     OPC_RecordChild1, // #0 = $src0
/*18469*/     OPC_RecordChild2, // #1 = $src1
/*18470*/     OPC_RecordChild3, // #2 = $src2
/*18471*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*18473*/     OPC_EmitInteger, MVT::i32, 0, 
/*18476*/     OPC_EmitInteger, MVT::i32, 0, 
/*18479*/     OPC_EmitInteger, MVT::i32, 0, 
/*18482*/     OPC_EmitInteger, MVT::i32, 0, 
/*18485*/     OPC_EmitInteger, MVT::i32, 0, 
/*18488*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                  1/*#VTs*/, MVT::i1, 6/*#Ops*/, 3, 0, 4, 5, 6, 7,  // Results = #8
/*18501*/     OPC_EmitInteger, MVT::i32, 0, 
/*18504*/     OPC_EmitInteger, MVT::i32, 0, 
/*18507*/     OPC_EmitInteger, MVT::i32, 0, 
/*18510*/     OPC_EmitInteger, MVT::i32, 0, 
/*18513*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 8, 9, 10, 11, 12, 
              // Src: (intrinsic_wo_chain:f32 2476:iPTR, f32:f32:$src0, f32:f32:$src1, f32:f32:$src2) - Complexity = 8
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src2, ?:f32:$src1, (V_CMP_GT_F32_e64:i1 0:i32, ?:f32:$src0))
/*18527*/   /*Scope*/ 35|128,5/*675*/, /*->19204*/
/*18529*/     OPC_CheckInteger, 69|128,20/*2629*/, 
/*18532*/     OPC_MoveParent,
/*18533*/     OPC_RecordChild1, // #0 = $src_x
/*18534*/     OPC_RecordChild2, // #1 = $src_y
/*18535*/     OPC_RecordChild3, // #2 = $src_w
/*18536*/     OPC_Scope, 75|128,2/*331*/, /*->18870*/ // 2 children in Scope
/*18539*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*18541*/       OPC_EmitInteger, MVT::i32, 1, 
/*18544*/       OPC_EmitInteger, MVT::i32, 0, 
/*18547*/       OPC_EmitInteger, MVT::i32, 0, 
/*18550*/       OPC_EmitInteger, MVT::i32, 0, 
/*18553*/       OPC_EmitInteger, MVT::i32, 0, 
/*18556*/       OPC_EmitInteger, MVT::i32, 0, 
/*18559*/       OPC_EmitInteger, MVT::i32, 1, 
/*18562*/       OPC_EmitInteger, MVT::i32, 0, 
/*18565*/       OPC_EmitInteger, MVT::i32, 0, 
/*18568*/       OPC_EmitInteger, MVT::i32, 0, 
/*18571*/       OPC_EmitInteger, MVT::i32, 0, 
/*18574*/       OPC_EmitInteger, MVT::i32, 0, 
/*18577*/       OPC_EmitInteger, MVT::i32, 1, 
/*18580*/       OPC_EmitInteger, MVT::i32, 0, 
/*18583*/       OPC_EmitInteger, MVT::i32, 0, 
/*18586*/       OPC_EmitInteger, MVT::i32, 0, 
/*18589*/       OPC_EmitInteger, MVT::i32, 0, 
/*18592*/       OPC_EmitInteger, MVT::i32, 0, 
/*18595*/       OPC_EmitInteger, MVT::i32, 0, 
/*18598*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18610*/       OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*18613*/       OPC_EmitInteger, MVT::i32, 0, 
/*18616*/       OPC_EmitInteger, MVT::i32, 0, 
/*18619*/       OPC_EmitInteger, MVT::i32, 0, 
/*18622*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18634*/       OPC_EmitInteger, MVT::i32, 1, 
/*18637*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18640*/       OPC_EmitInteger, MVT::i32, 0, 
/*18643*/       OPC_EmitInteger, MVT::i32, 0, 
/*18646*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*18673*/       OPC_EmitInteger, MVT::i32, 0, 
/*18676*/       OPC_EmitInteger, MVT::i32, 0, 
/*18679*/       OPC_EmitInteger, MVT::i32, 0, 
/*18682*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18694*/       OPC_EmitInteger, MVT::i32, 1, 
/*18697*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18700*/       OPC_EmitInteger, MVT::i32, 0, 
/*18703*/       OPC_EmitInteger, MVT::i32, 0, 
/*18706*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*18726*/       OPC_EmitInteger, MVT::i32, 0, 
/*18729*/       OPC_EmitInteger, MVT::i32, 0, 
/*18732*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18744*/       OPC_EmitInteger, MVT::i32, 0, 
/*18747*/       OPC_EmitInteger, MVT::i32, 0, 
/*18750*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18762*/       OPC_EmitInteger, MVT::i32, 0, 
/*18765*/       OPC_EmitInteger, MVT::i32, 0, 
/*18768*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18780*/       OPC_EmitInteger, MVT::i32, 1, 
/*18783*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18786*/       OPC_EmitInteger, MVT::i32, 0, 
/*18789*/       OPC_EmitInteger, MVT::i32, 0, 
/*18792*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_r600), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*18817*/       OPC_EmitInteger, MVT::i32, 0, 
/*18820*/       OPC_EmitInteger, MVT::i32, 0, 
/*18823*/       OPC_EmitInteger, MVT::i32, 0, 
/*18826*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18838*/       OPC_EmitInteger, MVT::i32, 1, 
/*18841*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18844*/       OPC_EmitInteger, MVT::i32, 0, 
/*18847*/       OPC_EmitInteger, MVT::i32, 0, 
/*18850*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 2629:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_r600:f32 (MUL_LIT_r600:i32 (LOG_CLAMPED_r600:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*18870*/     /*Scope*/ 75|128,2/*331*/, /*->19203*/
/*18872*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*18874*/       OPC_EmitInteger, MVT::i32, 1, 
/*18877*/       OPC_EmitInteger, MVT::i32, 0, 
/*18880*/       OPC_EmitInteger, MVT::i32, 0, 
/*18883*/       OPC_EmitInteger, MVT::i32, 0, 
/*18886*/       OPC_EmitInteger, MVT::i32, 0, 
/*18889*/       OPC_EmitInteger, MVT::i32, 0, 
/*18892*/       OPC_EmitInteger, MVT::i32, 1, 
/*18895*/       OPC_EmitInteger, MVT::i32, 0, 
/*18898*/       OPC_EmitInteger, MVT::i32, 0, 
/*18901*/       OPC_EmitInteger, MVT::i32, 0, 
/*18904*/       OPC_EmitInteger, MVT::i32, 0, 
/*18907*/       OPC_EmitInteger, MVT::i32, 0, 
/*18910*/       OPC_EmitInteger, MVT::i32, 1, 
/*18913*/       OPC_EmitInteger, MVT::i32, 0, 
/*18916*/       OPC_EmitInteger, MVT::i32, 0, 
/*18919*/       OPC_EmitInteger, MVT::i32, 0, 
/*18922*/       OPC_EmitInteger, MVT::i32, 0, 
/*18925*/       OPC_EmitInteger, MVT::i32, 0, 
/*18928*/       OPC_EmitInteger, MVT::i32, 0, 
/*18931*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18943*/       OPC_EmitRegister, MVT::f32, AMDGPU::ZERO,
/*18946*/       OPC_EmitInteger, MVT::i32, 0, 
/*18949*/       OPC_EmitInteger, MVT::i32, 0, 
/*18952*/       OPC_EmitInteger, MVT::i32, 0, 
/*18955*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*18967*/       OPC_EmitInteger, MVT::i32, 1, 
/*18970*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*18973*/       OPC_EmitInteger, MVT::i32, 0, 
/*18976*/       OPC_EmitInteger, MVT::i32, 0, 
/*18979*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MAX), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 13, 14, 15, 16, 17, 18, 1, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  // Results = #32
/*19006*/       OPC_EmitInteger, MVT::i32, 0, 
/*19009*/       OPC_EmitInteger, MVT::i32, 0, 
/*19012*/       OPC_EmitInteger, MVT::i32, 0, 
/*19015*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19027*/       OPC_EmitInteger, MVT::i32, 1, 
/*19030*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19033*/       OPC_EmitInteger, MVT::i32, 0, 
/*19036*/       OPC_EmitInteger, MVT::i32, 0, 
/*19039*/       OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 9, 10, 11, 12, 32, 33, 34, 35, 36, 37, 38, 39, 40,  // Results = #41
/*19059*/       OPC_EmitInteger, MVT::i32, 0, 
/*19062*/       OPC_EmitInteger, MVT::i32, 0, 
/*19065*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19077*/       OPC_EmitInteger, MVT::i32, 0, 
/*19080*/       OPC_EmitInteger, MVT::i32, 0, 
/*19083*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19095*/       OPC_EmitInteger, MVT::i32, 0, 
/*19098*/       OPC_EmitInteger, MVT::i32, 0, 
/*19101*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19113*/       OPC_EmitInteger, MVT::i32, 1, 
/*19116*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19119*/       OPC_EmitInteger, MVT::i32, 0, 
/*19122*/       OPC_EmitInteger, MVT::i32, 0, 
/*19125*/       OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_LIT_eg), 0,
                    1/*#VTs*/, MVT::i32, 18/*#Ops*/, 7, 8, 41, 42, 43, 44, 2, 45, 46, 47, 0, 48, 49, 50, 51, 52, 53, 54,  // Results = #55
/*19150*/       OPC_EmitInteger, MVT::i32, 0, 
/*19153*/       OPC_EmitInteger, MVT::i32, 0, 
/*19156*/       OPC_EmitInteger, MVT::i32, 0, 
/*19159*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19171*/       OPC_EmitInteger, MVT::i32, 1, 
/*19174*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*19177*/       OPC_EmitInteger, MVT::i32, 0, 
/*19180*/       OPC_EmitInteger, MVT::i32, 0, 
/*19183*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 3, 4, 5, 6, 55, 56, 57, 58, 59, 60, 61, 62, 63, 
                // Src: (intrinsic_wo_chain:f32 2629:iPTR, f32:f32:$src_x, f32:f32:$src_y, f32:f32:$src_w) - Complexity = 8
                // Dst: (EXP_IEEE_eg:f32 (MUL_LIT_eg:i32 (LOG_CLAMPED_eg:i32 (MAX:i32 ?:f32:$src_y, ZERO:f32)), ?:f32:$src_w, ?:f32:$src_x))
/*19203*/     0, /*End of Scope*/
/*19204*/   /*Scope*/ 19|128,3/*403*/, /*->19609*/
/*19206*/     OPC_CheckInteger, 58|128,20/*2618*/, 
/*19209*/     OPC_MoveParent,
/*19210*/     OPC_RecordChild1, // #0 = $addr
/*19211*/     OPC_Scope, 68|128,1/*196*/, /*->19410*/ // 2 children in Scope
/*19214*/       OPC_CheckChild1Type, MVT::v2i32,
/*19216*/       OPC_RecordChild2, // #1 = $rsrc
/*19217*/       OPC_MoveChild, 3,
/*19219*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19222*/       OPC_Scope, 46, /*->19270*/ // 4 children in Scope
/*19224*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*19226*/         OPC_MoveParent,
/*19227*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19229*/         OPC_EmitInteger, MVT::i32, 15, 
/*19232*/         OPC_EmitInteger, MVT::i1, 0, 
/*19235*/         OPC_EmitInteger, MVT::i1, 0, 
/*19238*/         OPC_EmitInteger, MVT::i1, 1, 
/*19241*/         OPC_EmitInteger, MVT::i1, 0, 
/*19244*/         OPC_EmitInteger, MVT::i1, 0, 
/*19247*/         OPC_EmitInteger, MVT::i1, 0, 
/*19250*/         OPC_EmitInteger, MVT::i1, 0, 
/*19253*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP_V2:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19270*/       /*Scope*/ 46, /*->19317*/
/*19271*/         OPC_CheckPredicate, 38, // Predicate_TEX_MSAA
/*19273*/         OPC_MoveParent,
/*19274*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19276*/         OPC_EmitInteger, MVT::i32, 15, 
/*19279*/         OPC_EmitInteger, MVT::i1, 0, 
/*19282*/         OPC_EmitInteger, MVT::i1, 0, 
/*19285*/         OPC_EmitInteger, MVT::i1, 0, 
/*19288*/         OPC_EmitInteger, MVT::i1, 0, 
/*19291*/         OPC_EmitInteger, MVT::i1, 0, 
/*19294*/         OPC_EmitInteger, MVT::i1, 0, 
/*19297*/         OPC_EmitInteger, MVT::i1, 0, 
/*19300*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V2:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19317*/       /*Scope*/ 46, /*->19364*/
/*19318*/         OPC_CheckPredicate, 39, // Predicate_TEX_ARRAY_MSAA
/*19320*/         OPC_MoveParent,
/*19321*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19323*/         OPC_EmitInteger, MVT::i32, 15, 
/*19326*/         OPC_EmitInteger, MVT::i1, 0, 
/*19329*/         OPC_EmitInteger, MVT::i1, 0, 
/*19332*/         OPC_EmitInteger, MVT::i1, 1, 
/*19335*/         OPC_EmitInteger, MVT::i1, 0, 
/*19338*/         OPC_EmitInteger, MVT::i1, 0, 
/*19341*/         OPC_EmitInteger, MVT::i1, 0, 
/*19344*/         OPC_EmitInteger, MVT::i1, 0, 
/*19347*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V2:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19364*/       /*Scope*/ 44, /*->19409*/
/*19365*/         OPC_MoveParent,
/*19366*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19368*/         OPC_EmitInteger, MVT::i32, 15, 
/*19371*/         OPC_EmitInteger, MVT::i1, 0, 
/*19374*/         OPC_EmitInteger, MVT::i1, 0, 
/*19377*/         OPC_EmitInteger, MVT::i1, 0, 
/*19380*/         OPC_EmitInteger, MVT::i1, 0, 
/*19383*/         OPC_EmitInteger, MVT::i1, 0, 
/*19386*/         OPC_EmitInteger, MVT::i1, 0, 
/*19389*/         OPC_EmitInteger, MVT::i1, 0, 
/*19392*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V2), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP_V2:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc)
/*19409*/       0, /*End of Scope*/
/*19410*/     /*Scope*/ 68|128,1/*196*/, /*->19608*/
/*19412*/       OPC_CheckChild1Type, MVT::v4i32,
/*19414*/       OPC_RecordChild2, // #1 = $rsrc
/*19415*/       OPC_MoveChild, 3,
/*19417*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19420*/       OPC_Scope, 46, /*->19468*/ // 4 children in Scope
/*19422*/         OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*19424*/         OPC_MoveParent,
/*19425*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19427*/         OPC_EmitInteger, MVT::i32, 15, 
/*19430*/         OPC_EmitInteger, MVT::i1, 0, 
/*19433*/         OPC_EmitInteger, MVT::i1, 0, 
/*19436*/         OPC_EmitInteger, MVT::i1, 1, 
/*19439*/         OPC_EmitInteger, MVT::i1, 0, 
/*19442*/         OPC_EmitInteger, MVT::i1, 0, 
/*19445*/         OPC_EmitInteger, MVT::i1, 0, 
/*19448*/         OPC_EmitInteger, MVT::i1, 0, 
/*19451*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_MIP_V4:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19468*/       /*Scope*/ 46, /*->19515*/
/*19469*/         OPC_CheckPredicate, 38, // Predicate_TEX_MSAA
/*19471*/         OPC_MoveParent,
/*19472*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19474*/         OPC_EmitInteger, MVT::i32, 15, 
/*19477*/         OPC_EmitInteger, MVT::i1, 0, 
/*19480*/         OPC_EmitInteger, MVT::i1, 0, 
/*19483*/         OPC_EmitInteger, MVT::i1, 0, 
/*19486*/         OPC_EmitInteger, MVT::i1, 0, 
/*19489*/         OPC_EmitInteger, MVT::i1, 0, 
/*19492*/         OPC_EmitInteger, MVT::i1, 0, 
/*19495*/         OPC_EmitInteger, MVT::i1, 0, 
/*19498*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V4:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19515*/       /*Scope*/ 46, /*->19562*/
/*19516*/         OPC_CheckPredicate, 39, // Predicate_TEX_ARRAY_MSAA
/*19518*/         OPC_MoveParent,
/*19519*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19521*/         OPC_EmitInteger, MVT::i32, 15, 
/*19524*/         OPC_EmitInteger, MVT::i1, 0, 
/*19527*/         OPC_EmitInteger, MVT::i1, 0, 
/*19530*/         OPC_EmitInteger, MVT::i1, 1, 
/*19533*/         OPC_EmitInteger, MVT::i1, 0, 
/*19536*/         OPC_EmitInteger, MVT::i1, 0, 
/*19539*/         OPC_EmitInteger, MVT::i1, 0, 
/*19542*/         OPC_EmitInteger, MVT::i1, 0, 
/*19545*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY_MSAA>>) - Complexity = 12
                  // Dst: (IMAGE_LOAD_V4:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19562*/       /*Scope*/ 44, /*->19607*/
/*19563*/         OPC_MoveParent,
/*19564*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19566*/         OPC_EmitInteger, MVT::i32, 15, 
/*19569*/         OPC_EmitInteger, MVT::i1, 0, 
/*19572*/         OPC_EmitInteger, MVT::i1, 0, 
/*19575*/         OPC_EmitInteger, MVT::i1, 0, 
/*19578*/         OPC_EmitInteger, MVT::i1, 0, 
/*19581*/         OPC_EmitInteger, MVT::i1, 0, 
/*19584*/         OPC_EmitInteger, MVT::i1, 0, 
/*19587*/         OPC_EmitInteger, MVT::i1, 0, 
/*19590*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_LOAD_MIP_V4), 0,
                      1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 
                  // Src: (intrinsic_wo_chain:v4i32 2618:iPTR, v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                  // Dst: (IMAGE_LOAD_MIP_V4:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc)
/*19607*/       0, /*End of Scope*/
/*19608*/     0, /*End of Scope*/
/*19609*/   /*Scope*/ 48|128,1/*176*/, /*->19787*/
/*19611*/     OPC_CheckInteger, 62|128,20/*2622*/, 
/*19614*/     OPC_MoveParent,
/*19615*/     OPC_RecordChild1, // #0 = $mipid
/*19616*/     OPC_RecordChild2, // #1 = $rsrc
/*19617*/     OPC_MoveChild, 3,
/*19619*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19622*/     OPC_Scope, 54, /*->19678*/ // 3 children in Scope
/*19624*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*19626*/       OPC_MoveParent,
/*19627*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19629*/       OPC_EmitInteger, MVT::i32, 15, 
/*19632*/       OPC_EmitInteger, MVT::i1, 0, 
/*19635*/       OPC_EmitInteger, MVT::i1, 0, 
/*19638*/       OPC_EmitInteger, MVT::i1, 1, 
/*19641*/       OPC_EmitInteger, MVT::i1, 0, 
/*19644*/       OPC_EmitInteger, MVT::i1, 0, 
/*19647*/       OPC_EmitInteger, MVT::i1, 0, 
/*19650*/       OPC_EmitInteger, MVT::i1, 0, 
/*19653*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*19661*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 2622:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 12
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*19678*/     /*Scope*/ 54, /*->19733*/
/*19679*/       OPC_CheckPredicate, 39, // Predicate_TEX_ARRAY_MSAA
/*19681*/       OPC_MoveParent,
/*19682*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19684*/       OPC_EmitInteger, MVT::i32, 15, 
/*19687*/       OPC_EmitInteger, MVT::i1, 0, 
/*19690*/       OPC_EmitInteger, MVT::i1, 0, 
/*19693*/       OPC_EmitInteger, MVT::i1, 1, 
/*19696*/       OPC_EmitInteger, MVT::i1, 0, 
/*19699*/       OPC_EmitInteger, MVT::i1, 0, 
/*19702*/       OPC_EmitInteger, MVT::i1, 0, 
/*19705*/       OPC_EmitInteger, MVT::i1, 0, 
/*19708*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*19716*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 2622:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)<<P:Predicate_TEX_ARRAY_MSAA>>) - Complexity = 12
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*19733*/     /*Scope*/ 52, /*->19786*/
/*19734*/       OPC_MoveParent,
/*19735*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19737*/       OPC_EmitInteger, MVT::i32, 15, 
/*19740*/       OPC_EmitInteger, MVT::i1, 0, 
/*19743*/       OPC_EmitInteger, MVT::i1, 0, 
/*19746*/       OPC_EmitInteger, MVT::i1, 0, 
/*19749*/       OPC_EmitInteger, MVT::i1, 0, 
/*19752*/       OPC_EmitInteger, MVT::i1, 0, 
/*19755*/       OPC_EmitInteger, MVT::i1, 0, 
/*19758*/       OPC_EmitInteger, MVT::i1, 0, 
/*19761*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #10
/*19769*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_GET_RESINFO), 0,
                    1/*#VTs*/, MVT::v4i32, 10/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 
                // Src: (intrinsic_wo_chain:v4i32 2622:iPTR, i32:i32:$mipid, v32i8:v32i8:$rsrc, (imm:i32)) - Complexity = 11
                // Dst: (IMAGE_GET_RESINFO:v4i32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, (V_MOV_B32_e32:i32 ?:i32:$mipid), ?:v32i8:$rsrc)
/*19786*/     0, /*End of Scope*/
/*19787*/   /*Scope*/ 29, /*->19817*/
/*19788*/     OPC_CheckInteger, 35|128,20/*2595*/, 
/*19791*/     OPC_MoveParent,
/*19792*/     OPC_RecordChild1, // #0 = $ptr
/*19793*/     OPC_RecordChild2, // #1 = $BUFFER_ID
/*19794*/     OPC_MoveChild, 2,
/*19796*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19799*/     OPC_MoveParent,
/*19800*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19802*/     OPC_CheckComplexPat, /*CP*/5, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/*19805*/     OPC_EmitConvertToTarget, 1,
/*19807*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_VTX_TEXBUF), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (intrinsic_wo_chain:v4f32 2595:iPTR, ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID) - Complexity = 20
              // Dst: (TEX_VTX_TEXBUF:v4f32 ADDRGA_VAR_OFFSET:i32:$ptr, (imm:i32):$BUFFER_ID)
/*19817*/   /*Scope*/ 77, /*->19895*/
/*19818*/     OPC_CheckInteger, 73|128,19/*2505*/, 
/*19821*/     OPC_MoveParent,
/*19822*/     OPC_RecordChild1, // #0 = $src0
/*19823*/     OPC_RecordChild2, // #1 = $src1
/*19824*/     OPC_RecordChild3, // #2 = $src2
/*19825*/     OPC_RecordChild4, // #3 = $resourceId
/*19826*/     OPC_MoveChild, 4,
/*19828*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19831*/     OPC_MoveParent,
/*19832*/     OPC_RecordChild5, // #4 = $samplerId
/*19833*/     OPC_MoveChild, 5,
/*19835*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19838*/     OPC_MoveParent,
/*19839*/     OPC_RecordChild6, // #5 = $textureTarget
/*19840*/     OPC_MoveChild, 6,
/*19842*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19845*/     OPC_Scope, 24, /*->19871*/ // 2 children in Scope
/*19847*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*19849*/       OPC_MoveParent,
/*19850*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19852*/       OPC_EmitConvertToTarget, 3,
/*19854*/       OPC_EmitConvertToTarget, 4,
/*19856*/       OPC_EmitConvertToTarget, 5,
/*19858*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD_SHADOW), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 2505:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32)<<P:Predicate_TEX_SHADOW>>:$textureTarget) - Complexity = 18
                // Dst: (TXD_SHADOW:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*19871*/     /*Scope*/ 22, /*->19894*/
/*19872*/       OPC_MoveParent,
/*19873*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19875*/       OPC_EmitConvertToTarget, 3,
/*19877*/       OPC_EmitConvertToTarget, 4,
/*19879*/       OPC_EmitConvertToTarget, 5,
/*19881*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TXD), 0,
                    1/*#VTs*/, MVT::v4f32, 6/*#Ops*/, 0, 1, 2, 6, 7, 8, 
                // Src: (intrinsic_wo_chain:v4f32 2505:iPTR, v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget) - Complexity = 17
                // Dst: (TXD:v4f32 v4f32:v4f32:$src0, v4f32:v4f32:$src1, v4f32:v4f32:$src2, (imm:i32):$resourceId, (imm:i32):$samplerId, (imm:i32):$textureTarget)
/*19894*/     0, /*End of Scope*/
/*19895*/   /*Scope*/ 84|128,2/*340*/, /*->20237*/
/*19897*/     OPC_CheckInteger, 45|128,19/*2477*/, 
/*19900*/     OPC_MoveParent,
/*19901*/     OPC_RecordChild1, // #0 = $src0
/*19902*/     OPC_Scope, 10, /*->19914*/ // 3 children in Scope
/*19904*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*19906*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_r600_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2477:iPTR, v4f32:v4f32:$src0) - Complexity = 8
                // Dst: (CUBE_r600_pseudo:v4f32 v4f32:v4f32:$src0)
/*19914*/     /*Scope*/ 10, /*->19925*/
/*19915*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*19917*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CUBE_eg_pseudo), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 2477:iPTR, v4f32:v4f32:$src0) - Complexity = 8
                // Dst: (CUBE_eg_pseudo:v4f32 v4f32:v4f32:$src0)
/*19925*/     /*Scope*/ 53|128,2/*309*/, /*->20236*/
/*19927*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*19929*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #1
/*19936*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*19939*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*19948*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*19951*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*19960*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*19963*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*19972*/       OPC_EmitInteger, MVT::i32, 0, 
/*19975*/       OPC_EmitInteger, MVT::i32, 0, 
/*19978*/       OPC_EmitInteger, MVT::i32, 0, 
/*19981*/       OPC_EmitInteger, MVT::i32, 0, 
/*19984*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBETC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 3, 5, 7, 8, 9, 10, 11,  // Results = #12
/*19998*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20001*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 1, 12, 13,  // Results = #14
/*20011*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20014*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 15,  // Results = #16
/*20023*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20026*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 17,  // Results = #18
/*20035*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20038*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 19,  // Results = #20
/*20047*/       OPC_EmitInteger, MVT::i32, 0, 
/*20050*/       OPC_EmitInteger, MVT::i32, 0, 
/*20053*/       OPC_EmitInteger, MVT::i32, 0, 
/*20056*/       OPC_EmitInteger, MVT::i32, 0, 
/*20059*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBESC_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 16, 18, 20, 21, 22, 23, 24,  // Results = #25
/*20073*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20076*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 14, 25, 26,  // Results = #27
/*20086*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20089*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 28,  // Results = #29
/*20098*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20101*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 30,  // Results = #31
/*20110*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20113*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/*20122*/       OPC_EmitInteger, MVT::i32, 0, 
/*20125*/       OPC_EmitInteger, MVT::i32, 0, 
/*20128*/       OPC_EmitInteger, MVT::i32, 0, 
/*20131*/       OPC_EmitInteger, MVT::i32, 0, 
/*20134*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEMA_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 29, 31, 33, 34, 35, 36, 37,  // Results = #38
/*20148*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20151*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 27, 38, 39,  // Results = #40
/*20161*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20164*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 41,  // Results = #42
/*20173*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20176*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 43,  // Results = #44
/*20185*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20188*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 45,  // Results = #46
/*20197*/       OPC_EmitInteger, MVT::i32, 0, 
/*20200*/       OPC_EmitInteger, MVT::i32, 0, 
/*20203*/       OPC_EmitInteger, MVT::i32, 0, 
/*20206*/       OPC_EmitInteger, MVT::i32, 0, 
/*20209*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_CUBEID_F32), 0,
                    1/*#VTs*/, MVT::i32, 7/*#Ops*/, 42, 44, 46, 47, 48, 49, 50,  // Results = #51
/*20223*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20226*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 40, 51, 52, 
                // Src: (intrinsic_wo_chain:v4f32 2477:iPTR, v4f32:v4f32:$src) - Complexity = 8
                // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), (V_CUBETC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub0:i32), (V_CUBESC_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub1:i32), (V_CUBEMA_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub2:i32), (V_CUBEID_F32:i32 (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub0:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub1:i32), (EXTRACT_SUBREG:i32 ?:v4f32:$src, sub2:i32)), sub3:i32)
/*20236*/     0, /*End of Scope*/
/*20237*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,14/*1810*/,  TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->22052
/*20242*/   OPC_RecordChild0, // #0 = $src
/*20243*/   OPC_Scope, 30|128,1/*158*/, /*->20404*/ // 8 children in Scope
/*20246*/     OPC_CheckChild0Type, MVT::v4i32,
/*20248*/     OPC_MoveChild, 1,
/*20250*/     OPC_Scope, 37, /*->20289*/ // 4 children in Scope
/*20252*/       OPC_CheckInteger, 0, 
/*20254*/       OPC_MoveParent,
/*20255*/       OPC_CheckType, MVT::i32,
/*20257*/       OPC_Scope, 14, /*->20273*/ // 2 children in Scope
/*20259*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20261*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20264*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*20273*/       /*Scope*/ 14, /*->20288*/
/*20274*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20276*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20279*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub0:i32)
/*20288*/       0, /*End of Scope*/
/*20289*/     /*Scope*/ 37, /*->20327*/
/*20290*/       OPC_CheckInteger, 1, 
/*20292*/       OPC_MoveParent,
/*20293*/       OPC_CheckType, MVT::i32,
/*20295*/       OPC_Scope, 14, /*->20311*/ // 2 children in Scope
/*20297*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20299*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20302*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*20311*/       /*Scope*/ 14, /*->20326*/
/*20312*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20314*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20317*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub1:i32)
/*20326*/       0, /*End of Scope*/
/*20327*/     /*Scope*/ 37, /*->20365*/
/*20328*/       OPC_CheckInteger, 2, 
/*20330*/       OPC_MoveParent,
/*20331*/       OPC_CheckType, MVT::i32,
/*20333*/       OPC_Scope, 14, /*->20349*/ // 2 children in Scope
/*20335*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20337*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20340*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*20349*/       /*Scope*/ 14, /*->20364*/
/*20350*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20352*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20355*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub2:i32)
/*20364*/       0, /*End of Scope*/
/*20365*/     /*Scope*/ 37, /*->20403*/
/*20366*/       OPC_CheckInteger, 3, 
/*20368*/       OPC_MoveParent,
/*20369*/       OPC_CheckType, MVT::i32,
/*20371*/       OPC_Scope, 14, /*->20387*/ // 2 children in Scope
/*20373*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20375*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20378*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*20387*/       /*Scope*/ 14, /*->20402*/
/*20388*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20390*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20393*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v4i32:v4i32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v4i32:$src, sub3:i32)
/*20402*/       0, /*End of Scope*/
/*20403*/     0, /*End of Scope*/
/*20404*/   /*Scope*/ 102, /*->20507*/
/*20405*/     OPC_CheckChild0Type, MVT::v2i32,
/*20407*/     OPC_MoveChild, 1,
/*20409*/     OPC_Scope, 37, /*->20448*/ // 3 children in Scope
/*20411*/       OPC_CheckInteger, 0, 
/*20413*/       OPC_MoveParent,
/*20414*/       OPC_CheckType, MVT::i32,
/*20416*/       OPC_Scope, 14, /*->20432*/ // 2 children in Scope
/*20418*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20420*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20423*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub0:i32)
/*20432*/       /*Scope*/ 14, /*->20447*/
/*20433*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20435*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20438*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub0:i32)
/*20447*/       0, /*End of Scope*/
/*20448*/     /*Scope*/ 37, /*->20486*/
/*20449*/       OPC_CheckInteger, 1, 
/*20451*/       OPC_MoveParent,
/*20452*/       OPC_CheckType, MVT::i32,
/*20454*/       OPC_Scope, 14, /*->20470*/ // 2 children in Scope
/*20456*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*20458*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20461*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub1:i32)
/*20470*/       /*Scope*/ 14, /*->20485*/
/*20471*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20473*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20476*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:i32 v2i32:v2i32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub1:i32)
/*20485*/       0, /*End of Scope*/
/*20486*/     /*Scope*/ 19, /*->20506*/
/*20487*/       OPC_CheckInteger, 2, 
/*20489*/       OPC_MoveParent,
/*20490*/       OPC_CheckType, MVT::i32,
/*20492*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20494*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20497*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v2i32:v2i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v2i32:$src, sub2:i32)
/*20506*/     0, /*End of Scope*/
/*20507*/   /*Scope*/ 38|128,1/*166*/, /*->20675*/
/*20509*/     OPC_CheckChild0Type, MVT::v8i32,
/*20511*/     OPC_MoveChild, 1,
/*20513*/     OPC_Scope, 19, /*->20534*/ // 8 children in Scope
/*20515*/       OPC_CheckInteger, 0, 
/*20517*/       OPC_MoveParent,
/*20518*/       OPC_CheckType, MVT::i32,
/*20520*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20522*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20525*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub0:i32)
/*20534*/     /*Scope*/ 19, /*->20554*/
/*20535*/       OPC_CheckInteger, 1, 
/*20537*/       OPC_MoveParent,
/*20538*/       OPC_CheckType, MVT::i32,
/*20540*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20542*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20545*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub1:i32)
/*20554*/     /*Scope*/ 19, /*->20574*/
/*20555*/       OPC_CheckInteger, 2, 
/*20557*/       OPC_MoveParent,
/*20558*/       OPC_CheckType, MVT::i32,
/*20560*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20562*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20565*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub2:i32)
/*20574*/     /*Scope*/ 19, /*->20594*/
/*20575*/       OPC_CheckInteger, 3, 
/*20577*/       OPC_MoveParent,
/*20578*/       OPC_CheckType, MVT::i32,
/*20580*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20582*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20585*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub3:i32)
/*20594*/     /*Scope*/ 19, /*->20614*/
/*20595*/       OPC_CheckInteger, 4, 
/*20597*/       OPC_MoveParent,
/*20598*/       OPC_CheckType, MVT::i32,
/*20600*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20602*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*20605*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub4:i32)
/*20614*/     /*Scope*/ 19, /*->20634*/
/*20615*/       OPC_CheckInteger, 5, 
/*20617*/       OPC_MoveParent,
/*20618*/       OPC_CheckType, MVT::i32,
/*20620*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20622*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*20625*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub5:i32)
/*20634*/     /*Scope*/ 19, /*->20654*/
/*20635*/       OPC_CheckInteger, 6, 
/*20637*/       OPC_MoveParent,
/*20638*/       OPC_CheckType, MVT::i32,
/*20640*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20642*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*20645*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub6:i32)
/*20654*/     /*Scope*/ 19, /*->20674*/
/*20655*/       OPC_CheckInteger, 7, 
/*20657*/       OPC_MoveParent,
/*20658*/       OPC_CheckType, MVT::i32,
/*20660*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20662*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*20665*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v8i32:v8i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v8i32:$src, sub7:i32)
/*20674*/     0, /*End of Scope*/
/*20675*/   /*Scope*/ 70|128,2/*326*/, /*->21003*/
/*20677*/     OPC_CheckChild0Type, MVT::v16i32,
/*20679*/     OPC_MoveChild, 1,
/*20681*/     OPC_Scope, 19, /*->20702*/ // 16 children in Scope
/*20683*/       OPC_CheckInteger, 0, 
/*20685*/       OPC_MoveParent,
/*20686*/       OPC_CheckType, MVT::i32,
/*20688*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20690*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*20693*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 0:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub0:i32)
/*20702*/     /*Scope*/ 19, /*->20722*/
/*20703*/       OPC_CheckInteger, 1, 
/*20705*/       OPC_MoveParent,
/*20706*/       OPC_CheckType, MVT::i32,
/*20708*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20710*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*20713*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 1:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub1:i32)
/*20722*/     /*Scope*/ 19, /*->20742*/
/*20723*/       OPC_CheckInteger, 2, 
/*20725*/       OPC_MoveParent,
/*20726*/       OPC_CheckType, MVT::i32,
/*20728*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20730*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*20733*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 2:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub2:i32)
/*20742*/     /*Scope*/ 19, /*->20762*/
/*20743*/       OPC_CheckInteger, 3, 
/*20745*/       OPC_MoveParent,
/*20746*/       OPC_CheckType, MVT::i32,
/*20748*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20750*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*20753*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 3:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub3:i32)
/*20762*/     /*Scope*/ 19, /*->20782*/
/*20763*/       OPC_CheckInteger, 4, 
/*20765*/       OPC_MoveParent,
/*20766*/       OPC_CheckType, MVT::i32,
/*20768*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20770*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*20773*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 4:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub4:i32)
/*20782*/     /*Scope*/ 19, /*->20802*/
/*20783*/       OPC_CheckInteger, 5, 
/*20785*/       OPC_MoveParent,
/*20786*/       OPC_CheckType, MVT::i32,
/*20788*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20790*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*20793*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 5:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub5:i32)
/*20802*/     /*Scope*/ 19, /*->20822*/
/*20803*/       OPC_CheckInteger, 6, 
/*20805*/       OPC_MoveParent,
/*20806*/       OPC_CheckType, MVT::i32,
/*20808*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20810*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*20813*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 6:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub6:i32)
/*20822*/     /*Scope*/ 19, /*->20842*/
/*20823*/       OPC_CheckInteger, 7, 
/*20825*/       OPC_MoveParent,
/*20826*/       OPC_CheckType, MVT::i32,
/*20828*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20830*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*20833*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 7:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub7:i32)
/*20842*/     /*Scope*/ 19, /*->20862*/
/*20843*/       OPC_CheckInteger, 8, 
/*20845*/       OPC_MoveParent,
/*20846*/       OPC_CheckType, MVT::i32,
/*20848*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20850*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*20853*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 8:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub8:i32)
/*20862*/     /*Scope*/ 19, /*->20882*/
/*20863*/       OPC_CheckInteger, 9, 
/*20865*/       OPC_MoveParent,
/*20866*/       OPC_CheckType, MVT::i32,
/*20868*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20870*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*20873*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 9:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub9:i32)
/*20882*/     /*Scope*/ 19, /*->20902*/
/*20883*/       OPC_CheckInteger, 10, 
/*20885*/       OPC_MoveParent,
/*20886*/       OPC_CheckType, MVT::i32,
/*20888*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20890*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*20893*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 10:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub10:i32)
/*20902*/     /*Scope*/ 19, /*->20922*/
/*20903*/       OPC_CheckInteger, 11, 
/*20905*/       OPC_MoveParent,
/*20906*/       OPC_CheckType, MVT::i32,
/*20908*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20910*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*20913*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 11:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub11:i32)
/*20922*/     /*Scope*/ 19, /*->20942*/
/*20923*/       OPC_CheckInteger, 12, 
/*20925*/       OPC_MoveParent,
/*20926*/       OPC_CheckType, MVT::i32,
/*20928*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20930*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*20933*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 12:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub12:i32)
/*20942*/     /*Scope*/ 19, /*->20962*/
/*20943*/       OPC_CheckInteger, 13, 
/*20945*/       OPC_MoveParent,
/*20946*/       OPC_CheckType, MVT::i32,
/*20948*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20950*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*20953*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 13:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub13:i32)
/*20962*/     /*Scope*/ 19, /*->20982*/
/*20963*/       OPC_CheckInteger, 14, 
/*20965*/       OPC_MoveParent,
/*20966*/       OPC_CheckType, MVT::i32,
/*20968*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20970*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*20973*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 14:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub14:i32)
/*20982*/     /*Scope*/ 19, /*->21002*/
/*20983*/       OPC_CheckInteger, 15, 
/*20985*/       OPC_MoveParent,
/*20986*/       OPC_CheckType, MVT::i32,
/*20988*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*20990*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*20993*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (vector_extract:i32 v16i32:v16i32:$src, 15:iPTR) - Complexity = 8
                // Dst: (EXTRACT_SUBREG:i32 ?:v16i32:$src, sub15:i32)
/*21002*/     0, /*End of Scope*/
/*21003*/   /*Scope*/ 46|128,1/*174*/, /*->21179*/
/*21005*/     OPC_CheckChild0Type, MVT::v2f32,
/*21007*/     OPC_Scope, 11|128,1/*139*/, /*->21149*/ // 2 children in Scope
/*21010*/       OPC_MoveChild, 1,
/*21012*/       OPC_Scope, 38, /*->21052*/ // 4 children in Scope
/*21014*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21017*/         OPC_RecordChild0, // #1 = $idx
/*21018*/         OPC_RecordChild1, // #2 = $off
/*21019*/         OPC_MoveChild, 1,
/*21021*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21024*/         OPC_MoveParent,
/*21025*/         OPC_CheckType, MVT::i32,
/*21027*/         OPC_MoveParent,
/*21028*/         OPC_CheckType, MVT::f32,
/*21030*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21032*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21039*/         OPC_EmitConvertToTarget, 2,
/*21041*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v2f32:v2f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21052*/       /*Scope*/ 37, /*->21090*/
/*21053*/         OPC_CheckInteger, 0, 
/*21055*/         OPC_MoveParent,
/*21056*/         OPC_CheckType, MVT::f32,
/*21058*/         OPC_Scope, 14, /*->21074*/ // 2 children in Scope
/*21060*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21062*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21065*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub0:i32)
/*21074*/         /*Scope*/ 14, /*->21089*/
/*21075*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21077*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21080*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub0:i32)
/*21089*/         0, /*End of Scope*/
/*21090*/       /*Scope*/ 37, /*->21128*/
/*21091*/         OPC_CheckInteger, 1, 
/*21093*/         OPC_MoveParent,
/*21094*/         OPC_CheckType, MVT::f32,
/*21096*/         OPC_Scope, 14, /*->21112*/ // 2 children in Scope
/*21098*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21100*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21103*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub1:i32)
/*21112*/         /*Scope*/ 14, /*->21127*/
/*21113*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21115*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21118*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v2f32:v2f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub1:i32)
/*21127*/         0, /*End of Scope*/
/*21128*/       /*Scope*/ 19, /*->21148*/
/*21129*/         OPC_CheckInteger, 2, 
/*21131*/         OPC_MoveParent,
/*21132*/         OPC_CheckType, MVT::f32,
/*21134*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21136*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21139*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v2f32:v2f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v2f32:$src, sub2:i32)
/*21148*/       0, /*End of Scope*/
/*21149*/     /*Scope*/ 28, /*->21178*/
/*21150*/       OPC_RecordChild1, // #1 = $idx
/*21151*/       OPC_CheckChild1Type, MVT::i32,
/*21153*/       OPC_CheckType, MVT::f32,
/*21155*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21157*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21164*/       OPC_EmitInteger, MVT::i32, 0, 
/*21167*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v2f32:v2f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32)
/*21178*/     0, /*End of Scope*/
/*21179*/   /*Scope*/ 102|128,1/*230*/, /*->21411*/
/*21181*/     OPC_CheckChild0Type, MVT::v4f32,
/*21183*/     OPC_Scope, 67|128,1/*195*/, /*->21381*/ // 2 children in Scope
/*21186*/       OPC_MoveChild, 1,
/*21188*/       OPC_Scope, 38, /*->21228*/ // 5 children in Scope
/*21190*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21193*/         OPC_RecordChild0, // #1 = $idx
/*21194*/         OPC_RecordChild1, // #2 = $off
/*21195*/         OPC_MoveChild, 1,
/*21197*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21200*/         OPC_MoveParent,
/*21201*/         OPC_CheckType, MVT::i32,
/*21203*/         OPC_MoveParent,
/*21204*/         OPC_CheckType, MVT::f32,
/*21206*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21208*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21215*/         OPC_EmitConvertToTarget, 2,
/*21217*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v4f32:v4f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21228*/       /*Scope*/ 37, /*->21266*/
/*21229*/         OPC_CheckInteger, 0, 
/*21231*/         OPC_MoveParent,
/*21232*/         OPC_CheckType, MVT::f32,
/*21234*/         OPC_Scope, 14, /*->21250*/ // 2 children in Scope
/*21236*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21238*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21241*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*21250*/         /*Scope*/ 14, /*->21265*/
/*21251*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21253*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21256*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 0:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub0:i32)
/*21265*/         0, /*End of Scope*/
/*21266*/       /*Scope*/ 37, /*->21304*/
/*21267*/         OPC_CheckInteger, 1, 
/*21269*/         OPC_MoveParent,
/*21270*/         OPC_CheckType, MVT::f32,
/*21272*/         OPC_Scope, 14, /*->21288*/ // 2 children in Scope
/*21274*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21276*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21279*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*21288*/         /*Scope*/ 14, /*->21303*/
/*21289*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21291*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21294*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 1:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub1:i32)
/*21303*/         0, /*End of Scope*/
/*21304*/       /*Scope*/ 37, /*->21342*/
/*21305*/         OPC_CheckInteger, 2, 
/*21307*/         OPC_MoveParent,
/*21308*/         OPC_CheckType, MVT::f32,
/*21310*/         OPC_Scope, 14, /*->21326*/ // 2 children in Scope
/*21312*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21314*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21317*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*21326*/         /*Scope*/ 14, /*->21341*/
/*21327*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21329*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21332*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 2:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub2:i32)
/*21341*/         0, /*End of Scope*/
/*21342*/       /*Scope*/ 37, /*->21380*/
/*21343*/         OPC_CheckInteger, 3, 
/*21345*/         OPC_MoveParent,
/*21346*/         OPC_CheckType, MVT::f32,
/*21348*/         OPC_Scope, 14, /*->21364*/ // 2 children in Scope
/*21350*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*21352*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21355*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*21364*/         /*Scope*/ 14, /*->21379*/
/*21365*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21367*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21370*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (vector_extract:f32 v4f32:v4f32:$src, 3:iPTR) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:f32 ?:v4f32:$src, sub3:i32)
/*21379*/         0, /*End of Scope*/
/*21380*/       0, /*End of Scope*/
/*21381*/     /*Scope*/ 28, /*->21410*/
/*21382*/       OPC_RecordChild1, // #1 = $idx
/*21383*/       OPC_CheckChild1Type, MVT::i32,
/*21385*/       OPC_CheckType, MVT::f32,
/*21387*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21389*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21396*/       OPC_EmitInteger, MVT::i32, 0, 
/*21399*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v4f32:v4f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32)
/*21410*/     0, /*End of Scope*/
/*21411*/   /*Scope*/ 110|128,1/*238*/, /*->21651*/
/*21413*/     OPC_CheckChild0Type, MVT::v8f32,
/*21415*/     OPC_Scope, 75|128,1/*203*/, /*->21621*/ // 2 children in Scope
/*21418*/       OPC_MoveChild, 1,
/*21420*/       OPC_Scope, 38, /*->21460*/ // 9 children in Scope
/*21422*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21425*/         OPC_RecordChild0, // #1 = $idx
/*21426*/         OPC_RecordChild1, // #2 = $off
/*21427*/         OPC_MoveChild, 1,
/*21429*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21432*/         OPC_MoveParent,
/*21433*/         OPC_CheckType, MVT::i32,
/*21435*/         OPC_MoveParent,
/*21436*/         OPC_CheckType, MVT::f32,
/*21438*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21440*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21447*/         OPC_EmitConvertToTarget, 2,
/*21449*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21460*/       /*Scope*/ 19, /*->21480*/
/*21461*/         OPC_CheckInteger, 0, 
/*21463*/         OPC_MoveParent,
/*21464*/         OPC_CheckType, MVT::f32,
/*21466*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21468*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21471*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub0:i32)
/*21480*/       /*Scope*/ 19, /*->21500*/
/*21481*/         OPC_CheckInteger, 1, 
/*21483*/         OPC_MoveParent,
/*21484*/         OPC_CheckType, MVT::f32,
/*21486*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21488*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21491*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub1:i32)
/*21500*/       /*Scope*/ 19, /*->21520*/
/*21501*/         OPC_CheckInteger, 2, 
/*21503*/         OPC_MoveParent,
/*21504*/         OPC_CheckType, MVT::f32,
/*21506*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21508*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21511*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub2:i32)
/*21520*/       /*Scope*/ 19, /*->21540*/
/*21521*/         OPC_CheckInteger, 3, 
/*21523*/         OPC_MoveParent,
/*21524*/         OPC_CheckType, MVT::f32,
/*21526*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21528*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21531*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub3:i32)
/*21540*/       /*Scope*/ 19, /*->21560*/
/*21541*/         OPC_CheckInteger, 4, 
/*21543*/         OPC_MoveParent,
/*21544*/         OPC_CheckType, MVT::f32,
/*21546*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21548*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*21551*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 4:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub4:i32)
/*21560*/       /*Scope*/ 19, /*->21580*/
/*21561*/         OPC_CheckInteger, 5, 
/*21563*/         OPC_MoveParent,
/*21564*/         OPC_CheckType, MVT::f32,
/*21566*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21568*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*21571*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 5:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub5:i32)
/*21580*/       /*Scope*/ 19, /*->21600*/
/*21581*/         OPC_CheckInteger, 6, 
/*21583*/         OPC_MoveParent,
/*21584*/         OPC_CheckType, MVT::f32,
/*21586*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21588*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*21591*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 6:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub6:i32)
/*21600*/       /*Scope*/ 19, /*->21620*/
/*21601*/         OPC_CheckInteger, 7, 
/*21603*/         OPC_MoveParent,
/*21604*/         OPC_CheckType, MVT::f32,
/*21606*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21608*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*21611*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v8f32:v8f32:$src, 7:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v8f32:$src, sub7:i32)
/*21620*/       0, /*End of Scope*/
/*21621*/     /*Scope*/ 28, /*->21650*/
/*21622*/       OPC_RecordChild1, // #1 = $idx
/*21623*/       OPC_CheckChild1Type, MVT::i32,
/*21625*/       OPC_CheckType, MVT::f32,
/*21627*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21629*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*21636*/       OPC_EmitInteger, MVT::i32, 0, 
/*21639*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v8f32:v8f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32)
/*21650*/     0, /*End of Scope*/
/*21651*/   /*Scope*/ 14|128,3/*398*/, /*->22051*/
/*21653*/     OPC_CheckChild0Type, MVT::v16f32,
/*21655*/     OPC_Scope, 107|128,2/*363*/, /*->22021*/ // 2 children in Scope
/*21658*/       OPC_MoveChild, 1,
/*21660*/       OPC_Scope, 38, /*->21700*/ // 17 children in Scope
/*21662*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*21665*/         OPC_RecordChild0, // #1 = $idx
/*21666*/         OPC_RecordChild1, // #2 = $off
/*21667*/         OPC_MoveChild, 1,
/*21669*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*21672*/         OPC_MoveParent,
/*21673*/         OPC_CheckType, MVT::i32,
/*21675*/         OPC_MoveParent,
/*21676*/         OPC_CheckType, MVT::f32,
/*21678*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21680*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*21687*/         OPC_EmitConvertToTarget, 2,
/*21689*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                      1/*#VTs*/, MVT::f32, 4/*#Ops*/, 3, 0, 1, 4, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$vec, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                  // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off)
/*21700*/       /*Scope*/ 19, /*->21720*/
/*21701*/         OPC_CheckInteger, 0, 
/*21703*/         OPC_MoveParent,
/*21704*/         OPC_CheckType, MVT::f32,
/*21706*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21708*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*21711*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 0:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub0:i32)
/*21720*/       /*Scope*/ 19, /*->21740*/
/*21721*/         OPC_CheckInteger, 1, 
/*21723*/         OPC_MoveParent,
/*21724*/         OPC_CheckType, MVT::f32,
/*21726*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21728*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*21731*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 1:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub1:i32)
/*21740*/       /*Scope*/ 19, /*->21760*/
/*21741*/         OPC_CheckInteger, 2, 
/*21743*/         OPC_MoveParent,
/*21744*/         OPC_CheckType, MVT::f32,
/*21746*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21748*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*21751*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 2:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub2:i32)
/*21760*/       /*Scope*/ 19, /*->21780*/
/*21761*/         OPC_CheckInteger, 3, 
/*21763*/         OPC_MoveParent,
/*21764*/         OPC_CheckType, MVT::f32,
/*21766*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21768*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*21771*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 3:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub3:i32)
/*21780*/       /*Scope*/ 19, /*->21800*/
/*21781*/         OPC_CheckInteger, 4, 
/*21783*/         OPC_MoveParent,
/*21784*/         OPC_CheckType, MVT::f32,
/*21786*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21788*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*21791*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 4:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub4:i32)
/*21800*/       /*Scope*/ 19, /*->21820*/
/*21801*/         OPC_CheckInteger, 5, 
/*21803*/         OPC_MoveParent,
/*21804*/         OPC_CheckType, MVT::f32,
/*21806*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21808*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*21811*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 5:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub5:i32)
/*21820*/       /*Scope*/ 19, /*->21840*/
/*21821*/         OPC_CheckInteger, 6, 
/*21823*/         OPC_MoveParent,
/*21824*/         OPC_CheckType, MVT::f32,
/*21826*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21828*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*21831*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 6:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub6:i32)
/*21840*/       /*Scope*/ 19, /*->21860*/
/*21841*/         OPC_CheckInteger, 7, 
/*21843*/         OPC_MoveParent,
/*21844*/         OPC_CheckType, MVT::f32,
/*21846*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21848*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*21851*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 7:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub7:i32)
/*21860*/       /*Scope*/ 19, /*->21880*/
/*21861*/         OPC_CheckInteger, 8, 
/*21863*/         OPC_MoveParent,
/*21864*/         OPC_CheckType, MVT::f32,
/*21866*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21868*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*21871*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 8:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub8:i32)
/*21880*/       /*Scope*/ 19, /*->21900*/
/*21881*/         OPC_CheckInteger, 9, 
/*21883*/         OPC_MoveParent,
/*21884*/         OPC_CheckType, MVT::f32,
/*21886*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21888*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*21891*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 9:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub9:i32)
/*21900*/       /*Scope*/ 19, /*->21920*/
/*21901*/         OPC_CheckInteger, 10, 
/*21903*/         OPC_MoveParent,
/*21904*/         OPC_CheckType, MVT::f32,
/*21906*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21908*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*21911*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 10:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub10:i32)
/*21920*/       /*Scope*/ 19, /*->21940*/
/*21921*/         OPC_CheckInteger, 11, 
/*21923*/         OPC_MoveParent,
/*21924*/         OPC_CheckType, MVT::f32,
/*21926*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21928*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*21931*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 11:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub11:i32)
/*21940*/       /*Scope*/ 19, /*->21960*/
/*21941*/         OPC_CheckInteger, 12, 
/*21943*/         OPC_MoveParent,
/*21944*/         OPC_CheckType, MVT::f32,
/*21946*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21948*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*21951*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 12:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub12:i32)
/*21960*/       /*Scope*/ 19, /*->21980*/
/*21961*/         OPC_CheckInteger, 13, 
/*21963*/         OPC_MoveParent,
/*21964*/         OPC_CheckType, MVT::f32,
/*21966*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21968*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*21971*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 13:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub13:i32)
/*21980*/       /*Scope*/ 19, /*->22000*/
/*21981*/         OPC_CheckInteger, 14, 
/*21983*/         OPC_MoveParent,
/*21984*/         OPC_CheckType, MVT::f32,
/*21986*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*21988*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*21991*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 14:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub14:i32)
/*22000*/       /*Scope*/ 19, /*->22020*/
/*22001*/         OPC_CheckInteger, 15, 
/*22003*/         OPC_MoveParent,
/*22004*/         OPC_CheckType, MVT::f32,
/*22006*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22008*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*22011*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (vector_extract:f32 v16f32:v16f32:$src, 15:iPTR) - Complexity = 8
                  // Dst: (EXTRACT_SUBREG:f32 ?:v16f32:$src, sub15:i32)
/*22020*/       0, /*End of Scope*/
/*22021*/     /*Scope*/ 28, /*->22050*/
/*22022*/       OPC_RecordChild1, // #1 = $idx
/*22023*/       OPC_CheckChild1Type, MVT::i32,
/*22025*/       OPC_CheckType, MVT::f32,
/*22027*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22029*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #2
/*22036*/       OPC_EmitInteger, MVT::i32, 0, 
/*22039*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_SRC), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 0, 1, 3, 
                // Src: (vector_extract:f32 v16f32:v16f32:$vec, i32:i32:$idx) - Complexity = 3
                // Dst: (SI_INDIRECT_SRC:f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32)
/*22050*/     0, /*End of Scope*/
/*22051*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 110,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->22165
/*22055*/   OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*22056*/   OPC_MoveChild, 1,
/*22058*/   OPC_Scope, 24, /*->22084*/ // 5 children in Scope
/*22060*/     OPC_CheckInteger, 56|128,20/*2616*/, 
/*22063*/     OPC_MoveParent,
/*22064*/     OPC_RecordChild2, // #1 = $vcc
/*22065*/     OPC_RecordChild3, // #2 = $target
/*22066*/     OPC_MoveChild, 3,
/*22068*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*22071*/     OPC_MoveParent,
/*22072*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22074*/     OPC_EmitMergeInputChains1_0,
/*22075*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2616:iPTR, i1:i1:$vcc, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_IF:i64 i1:i1:$vcc, (bb:Other):$target)
/*22084*/   /*Scope*/ 24, /*->22109*/
/*22085*/     OPC_CheckInteger, 50|128,20/*2610*/, 
/*22088*/     OPC_MoveParent,
/*22089*/     OPC_RecordChild2, // #1 = $src
/*22090*/     OPC_RecordChild3, // #2 = $target
/*22091*/     OPC_MoveChild, 3,
/*22093*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*22096*/     OPC_MoveParent,
/*22097*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22099*/     OPC_EmitMergeInputChains1_0,
/*22100*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2610:iPTR, i64:i64:$src, (bb:Other):$target) - Complexity = 8
              // Dst: (SI_ELSE:i64 i64:i64:$src, (bb:Other):$target)
/*22109*/   /*Scope*/ 16, /*->22126*/
/*22110*/     OPC_CheckInteger, 49|128,20/*2609*/, 
/*22113*/     OPC_MoveParent,
/*22114*/     OPC_RecordChild2, // #1 = $src
/*22115*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22117*/     OPC_EmitMergeInputChains1_0,
/*22118*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i64 2609:iPTR, i64:i64:$src) - Complexity = 8
              // Dst: (SI_BREAK:i64 i64:i64:$src)
/*22126*/   /*Scope*/ 18, /*->22145*/
/*22127*/     OPC_CheckInteger, 57|128,20/*2617*/, 
/*22130*/     OPC_MoveParent,
/*22131*/     OPC_RecordChild2, // #1 = $vcc
/*22132*/     OPC_RecordChild3, // #2 = $src
/*22133*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22135*/     OPC_EmitMergeInputChains1_0,
/*22136*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_IF_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2617:iPTR, i1:i1:$vcc, i64:i64:$src) - Complexity = 8
              // Dst: (SI_IF_BREAK:i64 i1:i1:$vcc, i64:i64:$src)
/*22145*/   /*Scope*/ 18, /*->22164*/
/*22146*/     OPC_CheckInteger, 51|128,20/*2611*/, 
/*22149*/     OPC_MoveParent,
/*22150*/     OPC_RecordChild2, // #1 = $src0
/*22151*/     OPC_RecordChild3, // #2 = $src1
/*22152*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22154*/     OPC_EmitMergeInputChains1_0,
/*22155*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_ELSE_BREAK), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i64 2611:iPTR, i64:i64:$src0, i64:i64:$src1) - Complexity = 8
              // Dst: (SI_ELSE_BREAK:i64 i64:i64:$src0, i64:i64:$src1)
/*22164*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 43|128,4/*555*/,  TARGET_VAL(ISD::STORE),// ->22724
/*22169*/   OPC_RecordMemRef,
/*22170*/   OPC_RecordNode,   // #0 = 'st' chained node
/*22171*/   OPC_RecordChild1, // #1 = $value
/*22172*/   OPC_Scope, 102|128,1/*230*/, /*->22405*/ // 4 children in Scope
/*22175*/     OPC_CheckChild1Type, MVT::i32,
/*22177*/     OPC_Scope, 40, /*->22219*/ // 2 children in Scope
/*22179*/       OPC_MoveChild, 2,
/*22181*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*22184*/       OPC_RecordChild0, // #2 = $ptr
/*22185*/       OPC_RecordChild1, // #3 = $offset
/*22186*/       OPC_CheckType, MVT::i64,
/*22188*/       OPC_MoveParent,
/*22189*/       OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22191*/       OPC_CheckPredicate, 42, // Predicate_store
/*22193*/       OPC_CheckPredicate, 43, // Predicate_global_store
/*22195*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22197*/       OPC_EmitMergeInputChains1_0,
/*22198*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*22206*/       OPC_EmitInteger, MVT::i16, 0, 
/*22209*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORD), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st i32:i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORD ?:i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*22219*/     /*Scope*/ 55|128,1/*183*/, /*->22404*/
/*22221*/       OPC_RecordChild2, // #2 = $src0
/*22222*/       OPC_Scope, 101, /*->22325*/ // 2 children in Scope
/*22224*/         OPC_CheckChild2Type, MVT::i32,
/*22226*/         OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22228*/         OPC_CheckPredicate, 42, // Predicate_store
/*22230*/         OPC_Scope, 59, /*->22291*/ // 2 children in Scope
/*22232*/           OPC_CheckPredicate, 44, // Predicate_local_store
/*22234*/           OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22236*/           OPC_EmitMergeInputChains1_0,
/*22237*/           OPC_EmitInteger, MVT::i32, 0, 
/*22240*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22252*/           OPC_EmitInteger, MVT::i32, 0, 
/*22255*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*22267*/           OPC_EmitInteger, MVT::i32, 1, 
/*22270*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*22273*/           OPC_EmitInteger, MVT::i32, 0, 
/*22276*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LDS_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                    // Src: (st R600_Reg32:i32:$src1, R600_Reg32:i32:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_local_store>> - Complexity = 4
                    // Dst: (LDS_WRITE R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*22291*/         /*Scope*/ 32, /*->22324*/
/*22292*/           OPC_CheckPredicate, 43, // Predicate_global_store
/*22294*/           OPC_Scope, 11, /*->22307*/ // 2 children in Scope
/*22296*/             OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*22298*/             OPC_EmitMergeInputChains1_0,
/*22299*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_STORE_DWORD32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (st i32:i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                      // Dst: (RAT_STORE_DWORD32_cm i32:i32:$rw_gpr, i32:i32:$index_gpr)
/*22307*/           /*Scope*/ 15, /*->22323*/
/*22308*/             OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*22310*/             OPC_EmitMergeInputChains1_0,
/*22311*/             OPC_EmitInteger, MVT::i32, 0, 
/*22314*/             OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st i32:i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                      // Dst: (RAT_WRITE_CACHELESS_32_eg i32:i32:$rw_gpr, i32:i32:$index_gpr)
/*22323*/           0, /*End of Scope*/
/*22324*/         0, /*End of Scope*/
/*22325*/       /*Scope*/ 77, /*->22403*/
/*22326*/         OPC_CheckChild2Type, MVT::i64,
/*22328*/         OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22330*/         OPC_CheckPredicate, 42, // Predicate_store
/*22332*/         OPC_Scope, 38, /*->22372*/ // 2 children in Scope
/*22334*/           OPC_CheckPredicate, 44, // Predicate_local_store
/*22336*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22338*/           OPC_EmitMergeInputChains1_0,
/*22339*/           OPC_EmitInteger, MVT::i1, 0, 
/*22342*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*22345*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4,  // Results = #5
/*22354*/           OPC_EmitInteger, MVT::i8, 0, 
/*22357*/           OPC_EmitInteger, MVT::i8, 0, 
/*22360*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DS_WRITE_B32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 6/*#Ops*/, 3, 5, 1, 1, 6, 7, 
                    // Src: (st i32:i32:$src1, i64:i64:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_local_store>> - Complexity = 4
                    // Dst: (DS_WRITE_B32 0:i1, (EXTRACT_SUBREG:i32 ?:i64:$src0, sub0:i32), ?:i32:$src1, ?:i32:$src1, 0:i8, 0:i8)
/*22372*/         /*Scope*/ 29, /*->22402*/
/*22373*/           OPC_CheckPredicate, 43, // Predicate_global_store
/*22375*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22377*/           OPC_EmitMergeInputChains1_0,
/*22378*/           OPC_EmitInteger, MVT::i64, 0, 
/*22381*/           OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*22389*/           OPC_EmitInteger, MVT::i16, 0, 
/*22392*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                    // Src: (st i32:i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (BUFFER_STORE_DWORD ?:i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*22402*/         0, /*End of Scope*/
/*22403*/       0, /*End of Scope*/
/*22404*/     0, /*End of Scope*/
/*22405*/   /*Scope*/ 82, /*->22488*/
/*22406*/     OPC_CheckChild1Type, MVT::i64,
/*22408*/     OPC_Scope, 40, /*->22450*/ // 2 children in Scope
/*22410*/       OPC_MoveChild, 2,
/*22412*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*22415*/       OPC_RecordChild0, // #2 = $ptr
/*22416*/       OPC_RecordChild1, // #3 = $offset
/*22417*/       OPC_CheckType, MVT::i64,
/*22419*/       OPC_MoveParent,
/*22420*/       OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22422*/       OPC_CheckPredicate, 42, // Predicate_store
/*22424*/       OPC_CheckPredicate, 43, // Predicate_global_store
/*22426*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22428*/       OPC_EmitMergeInputChains1_0,
/*22429*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*22437*/       OPC_EmitInteger, MVT::i16, 0, 
/*22440*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st i64:i64:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX2 ?:i64:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*22450*/     /*Scope*/ 36, /*->22487*/
/*22451*/       OPC_RecordChild2, // #2 = $ptr
/*22452*/       OPC_CheckChild2Type, MVT::i64,
/*22454*/       OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22456*/       OPC_CheckPredicate, 42, // Predicate_store
/*22458*/       OPC_CheckPredicate, 43, // Predicate_global_store
/*22460*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22462*/       OPC_EmitMergeInputChains1_0,
/*22463*/       OPC_EmitInteger, MVT::i64, 0, 
/*22466*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*22474*/       OPC_EmitInteger, MVT::i16, 0, 
/*22477*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                // Src: (st i64:i64:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                // Dst: (BUFFER_STORE_DWORDX2 ?:i64:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*22487*/     0, /*End of Scope*/
/*22488*/   /*Scope*/ 124, /*->22613*/
/*22489*/     OPC_CheckChild1Type, MVT::v2i32,
/*22491*/     OPC_Scope, 40, /*->22533*/ // 2 children in Scope
/*22493*/       OPC_MoveChild, 2,
/*22495*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*22498*/       OPC_RecordChild0, // #2 = $ptr
/*22499*/       OPC_RecordChild1, // #3 = $offset
/*22500*/       OPC_CheckType, MVT::i64,
/*22502*/       OPC_MoveParent,
/*22503*/       OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22505*/       OPC_CheckPredicate, 42, // Predicate_store
/*22507*/       OPC_CheckPredicate, 43, // Predicate_global_store
/*22509*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22511*/       OPC_EmitMergeInputChains1_0,
/*22512*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*22520*/       OPC_EmitInteger, MVT::i16, 0, 
/*22523*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st v2i32:v2i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX2 ?:v2i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*22533*/     /*Scope*/ 78, /*->22612*/
/*22534*/       OPC_RecordChild2, // #2 = $index_gpr
/*22535*/       OPC_Scope, 38, /*->22575*/ // 2 children in Scope
/*22537*/         OPC_CheckChild2Type, MVT::i32,
/*22539*/         OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22541*/         OPC_CheckPredicate, 42, // Predicate_store
/*22543*/         OPC_CheckPredicate, 43, // Predicate_global_store
/*22545*/         OPC_Scope, 11, /*->22558*/ // 2 children in Scope
/*22547*/           OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*22549*/           OPC_EmitMergeInputChains1_0,
/*22550*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_STORE_DWORD64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (st v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_STORE_DWORD64_cm v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)
/*22558*/         /*Scope*/ 15, /*->22574*/
/*22559*/           OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*22561*/           OPC_EmitMergeInputChains1_0,
/*22562*/           OPC_EmitInteger, MVT::i32, 0, 
/*22565*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                    // Dst: (RAT_WRITE_CACHELESS_64_eg v2i32:v2i32:$rw_gpr, i32:i32:$index_gpr)
/*22574*/         0, /*End of Scope*/
/*22575*/       /*Scope*/ 35, /*->22611*/
/*22576*/         OPC_CheckChild2Type, MVT::i64,
/*22578*/         OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22580*/         OPC_CheckPredicate, 42, // Predicate_store
/*22582*/         OPC_CheckPredicate, 43, // Predicate_global_store
/*22584*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22586*/         OPC_EmitMergeInputChains1_0,
/*22587*/         OPC_EmitInteger, MVT::i64, 0, 
/*22590*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*22598*/         OPC_EmitInteger, MVT::i16, 0, 
/*22601*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX2), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                  // Src: (st v2i32:v2i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (BUFFER_STORE_DWORDX2 ?:v2i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*22611*/       0, /*End of Scope*/
/*22612*/     0, /*End of Scope*/
/*22613*/   /*Scope*/ 109, /*->22723*/
/*22614*/     OPC_CheckChild1Type, MVT::v4i32,
/*22616*/     OPC_Scope, 40, /*->22658*/ // 2 children in Scope
/*22618*/       OPC_MoveChild, 2,
/*22620*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*22623*/       OPC_RecordChild0, // #2 = $ptr
/*22624*/       OPC_RecordChild1, // #3 = $offset
/*22625*/       OPC_CheckType, MVT::i64,
/*22627*/       OPC_MoveParent,
/*22628*/       OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22630*/       OPC_CheckPredicate, 42, // Predicate_store
/*22632*/       OPC_CheckPredicate, 43, // Predicate_global_store
/*22634*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22636*/       OPC_EmitMergeInputChains1_0,
/*22637*/       OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i128, 1/*#Ops*/, 2,  // Results = #4
/*22645*/       OPC_EmitInteger, MVT::i16, 0, 
/*22648*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX4), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 1, 4, 3, 5, 
                // Src: (st v4i32:v4i32:$value, (add:i64 i64:i64:$ptr, i64:i64:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 7
                // Dst: (BUFFER_STORE_DWORDX4 ?:v4i32:$value, (SI_ADDR64_RSRC:i128 ?:i64:$ptr), ?:i64:$offset, 0:i16)
/*22658*/     /*Scope*/ 63, /*->22722*/
/*22659*/       OPC_RecordChild2, // #2 = $index_gpr
/*22660*/       OPC_Scope, 23, /*->22685*/ // 2 children in Scope
/*22662*/         OPC_CheckChild2Type, MVT::i32,
/*22664*/         OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22666*/         OPC_CheckPredicate, 42, // Predicate_store
/*22668*/         OPC_CheckPredicate, 43, // Predicate_global_store
/*22670*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*22672*/         OPC_EmitMergeInputChains1_0,
/*22673*/         OPC_EmitInteger, MVT::i32, 0, 
/*22676*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:v4i32:$rw_gpr, i32:i32:$index_gpr)
/*22685*/       /*Scope*/ 35, /*->22721*/
/*22686*/         OPC_CheckChild2Type, MVT::i64,
/*22688*/         OPC_CheckPredicate, 41, // Predicate_unindexedstore
/*22690*/         OPC_CheckPredicate, 42, // Predicate_store
/*22692*/         OPC_CheckPredicate, 43, // Predicate_global_store
/*22694*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22696*/         OPC_EmitMergeInputChains1_0,
/*22697*/         OPC_EmitInteger, MVT::i64, 0, 
/*22700*/         OPC_EmitNode, TARGET_VAL(AMDGPU::SI_ADDR64_RSRC), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i128, 1/*#Ops*/, 3,  // Results = #4
/*22708*/         OPC_EmitInteger, MVT::i16, 0, 
/*22711*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_STORE_DWORDX4), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 4, 2, 5, 
                  // Src: (st v4i32:v4i32:$value, i64:i64:$ptr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_global_store>> - Complexity = 4
                  // Dst: (BUFFER_STORE_DWORDX4 ?:v4i32:$value, (SI_ADDR64_RSRC:i128 0:i64), ?:i64:$ptr, 0:i16)
/*22721*/       0, /*End of Scope*/
/*22722*/     0, /*End of Scope*/
/*22723*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 18|128,1/*146*/,  TARGET_VAL(ISD::Constant),// ->22874
/*22728*/   OPC_RecordNode,   // #0 = $imm
/*22729*/   OPC_SwitchType /*3 cases */, 46,  MVT::i32,// ->22778
/*22732*/     OPC_Scope, 14, /*->22748*/ // 2 children in Scope
/*22734*/       OPC_CheckPredicate, 45, // Predicate_anonymous.val.394
/*22736*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22738*/       OPC_EmitConvertToTarget, 0,
/*22740*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_anonymous.val.394>>:$imm - Complexity = 4
                // Dst: (S_MOV_B32:i32 (imm:i32):$imm)
/*22748*/     /*Scope*/ 28, /*->22777*/
/*22749*/       OPC_Scope, 12, /*->22763*/ // 2 children in Scope
/*22751*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22753*/         OPC_EmitConvertToTarget, 0,
/*22755*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:i32):$imm - Complexity = 3
                  // Dst: (V_MOV_B32_e32:i32 (imm:i32):$imm)
/*22763*/       /*Scope*/ 12, /*->22776*/
/*22764*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22766*/         OPC_EmitConvertToTarget, 0,
/*22768*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (imm:i32):$val - Complexity = 3
                  // Dst: (MOV_IMM_I32:i32 (imm:i32):$val)
/*22776*/       0, /*End of Scope*/
/*22777*/     0, /*End of Scope*/
            /*SwitchType*/ 79,  MVT::i64,// ->22859
/*22780*/     OPC_Scope, 14, /*->22796*/ // 2 children in Scope
/*22782*/       OPC_CheckPredicate, 46, // Predicate_anonymous.val.396
/*22784*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22786*/       OPC_EmitConvertToTarget, 0,
/*22788*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_anonymous.val.396>>:$imm - Complexity = 4
                // Dst: (S_MOV_B64:i64 (imm:i64)<<P:Predicate_anonymous.val.397>>:$imm)
/*22796*/     /*Scope*/ 61, /*->22858*/
/*22797*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22799*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*22806*/       OPC_EmitConvertToTarget, 0,
/*22808*/       OPC_EmitNodeXForm, 2, 2, // LO32
/*22811*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*22819*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*22822*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 4, 5,  // Results = #6
/*22832*/       OPC_EmitConvertToTarget, 0,
/*22834*/       OPC_EmitNodeXForm, 3, 7, // HI32
/*22837*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/*22845*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*22848*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 6, 9, 10, 
                // Src: (imm:i64):$imm - Complexity = 3
                // Dst: (INSERT_SUBREG:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), (S_MOV_B32:i32 (LO32:i32 (imm:i64):$imm)), sub0:i32), (S_MOV_B32:i32 (HI32:i32 (imm:i64):$imm)), sub1:i32)
/*22858*/     0, /*End of Scope*/
            /*SwitchType*/ 12,  MVT::i1,// ->22873
/*22861*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22863*/     OPC_EmitConvertToTarget, 0,
/*22865*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B64), 0,
                  1/*#VTs*/, MVT::i1, 1/*#Ops*/, 1, 
              // Src: (imm:i1):$imm - Complexity = 3
              // Dst: (S_MOV_B64:i1 (imm:i1):$imm)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47|128,1/*175*/,  TARGET_VAL(ISD::BITCAST),// ->23053
/*22878*/   OPC_RecordChild0, // #0 = $src0
/*22879*/   OPC_SwitchType /*10 cases */, 23,  MVT::i32,// ->22905
/*22882*/     OPC_CheckChild0Type, MVT::f32,
/*22884*/     OPC_Scope, 5, /*->22891*/ // 2 children in Scope
/*22886*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22888*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:i32 R600_Reg32:f32:$src0) - Complexity = 3
                // Dst: R600_Reg32:i32:$src0
/*22891*/     /*Scope*/ 12, /*->22904*/
/*22892*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22894*/       OPC_Scope, 3, /*->22899*/ // 2 children in Scope
/*22896*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 SReg_32:f32:$src0) - Complexity = 3
                  // Dst: SReg_32:i32:$src0
/*22899*/       /*Scope*/ 3, /*->22903*/
/*22900*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:i32 VReg_32:f32:$src0) - Complexity = 3
                  // Dst: VReg_32:i32:$src0
/*22903*/       0, /*End of Scope*/
/*22904*/     0, /*End of Scope*/
            /*SwitchType*/ 7,  MVT::i64,// ->22914
/*22907*/     OPC_CheckChild0Type, MVT::f64,
/*22909*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22911*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:i64 VReg_64:f64:$src0) - Complexity = 3
              // Dst: VReg_64:i64:$src0
            /*SwitchType*/ 23,  MVT::f32,// ->22939
/*22916*/     OPC_CheckChild0Type, MVT::i32,
/*22918*/     OPC_Scope, 5, /*->22925*/ // 2 children in Scope
/*22920*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22922*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: R600_Reg32:f32:$src0
/*22925*/     /*Scope*/ 12, /*->22938*/
/*22926*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22928*/       OPC_Scope, 3, /*->22933*/ // 2 children in Scope
/*22930*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 SReg_32:i32:$src0) - Complexity = 3
                  // Dst: SReg_32:f32:$src0
/*22933*/       /*Scope*/ 3, /*->22937*/
/*22934*/         OPC_CompleteMatch, 1, 0, 
                  // Src: (bitconvert:f32 VReg_32:i32:$src0) - Complexity = 3
                  // Dst: VReg_32:f32:$src0
/*22937*/       0, /*End of Scope*/
/*22938*/     0, /*End of Scope*/
            /*SwitchType*/ 7,  MVT::f64,// ->22948
/*22941*/     OPC_CheckChild0Type, MVT::i64,
/*22943*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22945*/     OPC_CompleteMatch, 1, 0, 
              // Src: (bitconvert:f64 VReg_64:i64:$src0) - Complexity = 3
              // Dst: VReg_64:f64:$src0
            /*SwitchType*/ 16,  MVT::v2i32,// ->22966
/*22950*/     OPC_CheckChild0Type, MVT::v2f32,
/*22952*/     OPC_Scope, 5, /*->22959*/ // 2 children in Scope
/*22954*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22956*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2i32 R600_Reg64:v2f32:$src0) - Complexity = 3
                // Dst: R600_Reg64:v2i32:$src0
/*22959*/     /*Scope*/ 5, /*->22965*/
/*22960*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22962*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2i32 VReg_64:v2f32:$src0) - Complexity = 3
                // Dst: VReg_64:v2i32:$src0
/*22965*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v4i32,// ->22984
/*22968*/     OPC_CheckChild0Type, MVT::v4f32,
/*22970*/     OPC_Scope, 5, /*->22977*/ // 2 children in Scope
/*22972*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*22974*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 R600_Reg128:v4f32:$src0) - Complexity = 3
                // Dst: R600_Reg128:v4i32:$src0
/*22977*/     /*Scope*/ 5, /*->22983*/
/*22978*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22980*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VReg_128:v4f32:$src0) - Complexity = 3
                // Dst: VReg_128:v4i32:$src0
/*22983*/     0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::v8i32,// ->23000
/*22986*/     OPC_CheckChild0Type, MVT::v32i8,
/*22988*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*22990*/     OPC_Scope, 3, /*->22995*/ // 2 children in Scope
/*22992*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i32 SReg_256:v32i8:$src0) - Complexity = 3
                // Dst: SReg_256:v8i32:$src0
/*22995*/     /*Scope*/ 3, /*->22999*/
/*22996*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i32 VReg_256:v32i8:$src0) - Complexity = 3
                // Dst: VReg_256:v8i32:$src0
/*22999*/     0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::v32i8,// ->23016
/*23002*/     OPC_CheckChild0Type, MVT::v8i32,
/*23004*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23006*/     OPC_Scope, 3, /*->23011*/ // 2 children in Scope
/*23008*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v32i8 SReg_256:v8i32:$src0) - Complexity = 3
                // Dst: SReg_256:v32i8:$src0
/*23011*/     /*Scope*/ 3, /*->23015*/
/*23012*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v32i8 VReg_256:v8i32:$src0) - Complexity = 3
                // Dst: VReg_256:v32i8:$src0
/*23015*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v2f32,// ->23034
/*23018*/     OPC_CheckChild0Type, MVT::v2i32,
/*23020*/     OPC_Scope, 5, /*->23027*/ // 2 children in Scope
/*23022*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23024*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2f32 R600_Reg64:v2i32:$src0) - Complexity = 3
                // Dst: R600_Reg64:v2f32:$src0
/*23027*/     /*Scope*/ 5, /*->23033*/
/*23028*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23030*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v2f32 VReg_64:v2i32:$src0) - Complexity = 3
                // Dst: VReg_64:v2f32:$src0
/*23033*/     0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::v4f32,// ->23052
/*23036*/     OPC_CheckChild0Type, MVT::v4i32,
/*23038*/     OPC_Scope, 5, /*->23045*/ // 2 children in Scope
/*23040*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23042*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 R600_Reg128:v4i32:$src0) - Complexity = 3
                // Dst: R600_Reg128:v4f32:$src0
/*23045*/     /*Scope*/ 5, /*->23051*/
/*23046*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23048*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VReg_128:v4i32:$src0) - Complexity = 3
                // Dst: VReg_128:v4f32:$src0
/*23051*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 8,  TARGET_VAL(AMDGPUISD::DWORDADDR),// ->23064
/*23056*/   OPC_RecordChild0, // #0 = $addr
/*23057*/   OPC_CheckType, MVT::i32,
/*23059*/   OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23061*/   OPC_CompleteMatch, 1, 0, 
            // Src: (AMDGPUdwordaddr:i32 R600_Reg32:i32:$addr) - Complexity = 3
            // Dst: R600_Reg32:i32:$addr
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SUB),// ->23187
/*23067*/   OPC_RecordChild0, // #0 = $src0
/*23068*/   OPC_RecordChild1, // #1 = $src1
/*23069*/   OPC_CheckType, MVT::i32,
/*23071*/   OPC_Scope, 101, /*->23174*/ // 2 children in Scope
/*23073*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23075*/     OPC_EmitInteger, MVT::i32, 0, 
/*23078*/     OPC_EmitInteger, MVT::i32, 0, 
/*23081*/     OPC_EmitInteger, MVT::i32, 1, 
/*23084*/     OPC_EmitInteger, MVT::i32, 0, 
/*23087*/     OPC_EmitInteger, MVT::i32, 0, 
/*23090*/     OPC_EmitInteger, MVT::i32, 0, 
/*23093*/     OPC_EmitInteger, MVT::i32, 0, 
/*23096*/     OPC_EmitInteger, MVT::i32, 0, 
/*23099*/     OPC_EmitInteger, MVT::i32, 0, 
/*23102*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23114*/     OPC_EmitInteger, MVT::i32, 0, 
/*23117*/     OPC_EmitInteger, MVT::i32, 0, 
/*23120*/     OPC_EmitInteger, MVT::i32, 0, 
/*23123*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23135*/     OPC_EmitInteger, MVT::i32, 1, 
/*23138*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23141*/     OPC_EmitInteger, MVT::i32, 0, 
/*23144*/     OPC_EmitInteger, MVT::i32, 0, 
/*23147*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SUB_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (SUB_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23174*/   /*Scope*/ 11, /*->23186*/
/*23175*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23177*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_SUB_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23186*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::SMAX),// ->23310
/*23190*/   OPC_RecordChild0, // #0 = $src0
/*23191*/   OPC_RecordChild1, // #1 = $src1
/*23192*/   OPC_CheckType, MVT::i32,
/*23194*/   OPC_Scope, 101, /*->23297*/ // 2 children in Scope
/*23196*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23198*/     OPC_EmitInteger, MVT::i32, 0, 
/*23201*/     OPC_EmitInteger, MVT::i32, 0, 
/*23204*/     OPC_EmitInteger, MVT::i32, 1, 
/*23207*/     OPC_EmitInteger, MVT::i32, 0, 
/*23210*/     OPC_EmitInteger, MVT::i32, 0, 
/*23213*/     OPC_EmitInteger, MVT::i32, 0, 
/*23216*/     OPC_EmitInteger, MVT::i32, 0, 
/*23219*/     OPC_EmitInteger, MVT::i32, 0, 
/*23222*/     OPC_EmitInteger, MVT::i32, 0, 
/*23225*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23237*/     OPC_EmitInteger, MVT::i32, 0, 
/*23240*/     OPC_EmitInteger, MVT::i32, 0, 
/*23243*/     OPC_EmitInteger, MVT::i32, 0, 
/*23246*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23258*/     OPC_EmitInteger, MVT::i32, 1, 
/*23261*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23264*/     OPC_EmitInteger, MVT::i32, 0, 
/*23267*/     OPC_EmitInteger, MVT::i32, 0, 
/*23270*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23297*/   /*Scope*/ 11, /*->23309*/
/*23298*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23300*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23309*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::SMIN),// ->23433
/*23313*/   OPC_RecordChild0, // #0 = $src0
/*23314*/   OPC_RecordChild1, // #1 = $src1
/*23315*/   OPC_CheckType, MVT::i32,
/*23317*/   OPC_Scope, 101, /*->23420*/ // 2 children in Scope
/*23319*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23321*/     OPC_EmitInteger, MVT::i32, 0, 
/*23324*/     OPC_EmitInteger, MVT::i32, 0, 
/*23327*/     OPC_EmitInteger, MVT::i32, 1, 
/*23330*/     OPC_EmitInteger, MVT::i32, 0, 
/*23333*/     OPC_EmitInteger, MVT::i32, 0, 
/*23336*/     OPC_EmitInteger, MVT::i32, 0, 
/*23339*/     OPC_EmitInteger, MVT::i32, 0, 
/*23342*/     OPC_EmitInteger, MVT::i32, 0, 
/*23345*/     OPC_EmitInteger, MVT::i32, 0, 
/*23348*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23360*/     OPC_EmitInteger, MVT::i32, 0, 
/*23363*/     OPC_EmitInteger, MVT::i32, 0, 
/*23366*/     OPC_EmitInteger, MVT::i32, 0, 
/*23369*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23381*/     OPC_EmitInteger, MVT::i32, 1, 
/*23384*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23387*/     OPC_EmitInteger, MVT::i32, 0, 
/*23390*/     OPC_EmitInteger, MVT::i32, 0, 
/*23393*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_INT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUsmin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_INT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23420*/   /*Scope*/ 11, /*->23432*/
/*23421*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23423*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_I32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUsmin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23432*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::UMAX),// ->23556
/*23436*/   OPC_RecordChild0, // #0 = $src0
/*23437*/   OPC_RecordChild1, // #1 = $src1
/*23438*/   OPC_CheckType, MVT::i32,
/*23440*/   OPC_Scope, 101, /*->23543*/ // 2 children in Scope
/*23442*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23444*/     OPC_EmitInteger, MVT::i32, 0, 
/*23447*/     OPC_EmitInteger, MVT::i32, 0, 
/*23450*/     OPC_EmitInteger, MVT::i32, 1, 
/*23453*/     OPC_EmitInteger, MVT::i32, 0, 
/*23456*/     OPC_EmitInteger, MVT::i32, 0, 
/*23459*/     OPC_EmitInteger, MVT::i32, 0, 
/*23462*/     OPC_EmitInteger, MVT::i32, 0, 
/*23465*/     OPC_EmitInteger, MVT::i32, 0, 
/*23468*/     OPC_EmitInteger, MVT::i32, 0, 
/*23471*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23483*/     OPC_EmitInteger, MVT::i32, 0, 
/*23486*/     OPC_EmitInteger, MVT::i32, 0, 
/*23489*/     OPC_EmitInteger, MVT::i32, 0, 
/*23492*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23504*/     OPC_EmitInteger, MVT::i32, 1, 
/*23507*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23510*/     OPC_EmitInteger, MVT::i32, 0, 
/*23513*/     OPC_EmitInteger, MVT::i32, 0, 
/*23516*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumax:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MAX_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23543*/   /*Scope*/ 11, /*->23555*/
/*23544*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23546*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumax:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MAX_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23555*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::UMIN),// ->23679
/*23559*/   OPC_RecordChild0, // #0 = $src0
/*23560*/   OPC_RecordChild1, // #1 = $src1
/*23561*/   OPC_CheckType, MVT::i32,
/*23563*/   OPC_Scope, 101, /*->23666*/ // 2 children in Scope
/*23565*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23567*/     OPC_EmitInteger, MVT::i32, 0, 
/*23570*/     OPC_EmitInteger, MVT::i32, 0, 
/*23573*/     OPC_EmitInteger, MVT::i32, 1, 
/*23576*/     OPC_EmitInteger, MVT::i32, 0, 
/*23579*/     OPC_EmitInteger, MVT::i32, 0, 
/*23582*/     OPC_EmitInteger, MVT::i32, 0, 
/*23585*/     OPC_EmitInteger, MVT::i32, 0, 
/*23588*/     OPC_EmitInteger, MVT::i32, 0, 
/*23591*/     OPC_EmitInteger, MVT::i32, 0, 
/*23594*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23606*/     OPC_EmitInteger, MVT::i32, 0, 
/*23609*/     OPC_EmitInteger, MVT::i32, 0, 
/*23612*/     OPC_EmitInteger, MVT::i32, 0, 
/*23615*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23627*/     OPC_EmitInteger, MVT::i32, 1, 
/*23630*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23633*/     OPC_EmitInteger, MVT::i32, 0, 
/*23636*/     OPC_EmitInteger, MVT::i32, 0, 
/*23639*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN_UINT), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUumin:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MIN_UINT:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*23666*/   /*Scope*/ 11, /*->23678*/
/*23667*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23669*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUumin:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MIN_U32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*23678*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 109|128,1/*237*/,  TARGET_VAL(ISD::FP_TO_SINT),// ->23920
/*23683*/   OPC_RecordChild0, // #0 = $src0
/*23684*/   OPC_CheckType, MVT::i32,
/*23686*/   OPC_Scope, 89|128,1/*217*/, /*->23906*/ // 2 children in Scope
/*23689*/     OPC_CheckChild0Type, MVT::f32,
/*23691*/     OPC_Scope, 67, /*->23760*/ // 3 children in Scope
/*23693*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*23695*/       OPC_EmitInteger, MVT::i32, 1, 
/*23698*/       OPC_EmitInteger, MVT::i32, 0, 
/*23701*/       OPC_EmitInteger, MVT::i32, 0, 
/*23704*/       OPC_EmitInteger, MVT::i32, 0, 
/*23707*/       OPC_EmitInteger, MVT::i32, 0, 
/*23710*/       OPC_EmitInteger, MVT::i32, 0, 
/*23713*/       OPC_EmitInteger, MVT::i32, 0, 
/*23716*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23728*/       OPC_EmitInteger, MVT::i32, 1, 
/*23731*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23734*/       OPC_EmitInteger, MVT::i32, 0, 
/*23737*/       OPC_EmitInteger, MVT::i32, 0, 
/*23740*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_sint:i32 R600_Reg32:f32:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_r600:i32 R600_Reg32:f32:$src0)
/*23760*/     /*Scope*/ 10, /*->23771*/
/*23761*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23763*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_I32_F32_e32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
                // Dst: (V_CVT_I32_F32_e32:i32 f32:f32:$src0)
/*23771*/     /*Scope*/ 4|128,1/*132*/, /*->23905*/
/*23773*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*23775*/       OPC_EmitInteger, MVT::i32, 1, 
/*23778*/       OPC_EmitInteger, MVT::i32, 0, 
/*23781*/       OPC_EmitInteger, MVT::i32, 0, 
/*23784*/       OPC_EmitInteger, MVT::i32, 0, 
/*23787*/       OPC_EmitInteger, MVT::i32, 1, 
/*23790*/       OPC_EmitInteger, MVT::i32, 0, 
/*23793*/       OPC_EmitInteger, MVT::i32, 0, 
/*23796*/       OPC_EmitInteger, MVT::i32, 0, 
/*23799*/       OPC_EmitInteger, MVT::i32, 0, 
/*23802*/       OPC_EmitInteger, MVT::i32, 0, 
/*23805*/       OPC_EmitInteger, MVT::i32, 0, 
/*23808*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23820*/       OPC_EmitInteger, MVT::i32, 1, 
/*23823*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23826*/       OPC_EmitInteger, MVT::i32, 0, 
/*23829*/       OPC_EmitInteger, MVT::i32, 0, 
/*23832*/       OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*23852*/       OPC_EmitInteger, MVT::i32, 0, 
/*23855*/       OPC_EmitInteger, MVT::i32, 0, 
/*23858*/       OPC_EmitInteger, MVT::i32, 0, 
/*23861*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23873*/       OPC_EmitInteger, MVT::i32, 1, 
/*23876*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23879*/       OPC_EmitInteger, MVT::i32, 0, 
/*23882*/       OPC_EmitInteger, MVT::i32, 0, 
/*23885*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_INT_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_sint:i32 f32:f32:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*23905*/     0, /*End of Scope*/
/*23906*/   /*Scope*/ 12, /*->23919*/
/*23907*/     OPC_CheckChild0Type, MVT::f64,
/*23909*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*23911*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_I32_F64_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fp_to_sint:i32 f64:f64:$src0) - Complexity = 3
              // Dst: (V_CVT_I32_F64_e32:i32 f64:f64:$src0)
/*23919*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FP_TO_UINT),// ->24144
/*23924*/   OPC_RecordChild0, // #0 = $src0
/*23925*/   OPC_CheckChild0Type, MVT::f32,
/*23927*/   OPC_CheckType, MVT::i32,
/*23929*/   OPC_Scope, 67, /*->23998*/ // 3 children in Scope
/*23931*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*23933*/     OPC_EmitInteger, MVT::i32, 1, 
/*23936*/     OPC_EmitInteger, MVT::i32, 0, 
/*23939*/     OPC_EmitInteger, MVT::i32, 0, 
/*23942*/     OPC_EmitInteger, MVT::i32, 0, 
/*23945*/     OPC_EmitInteger, MVT::i32, 0, 
/*23948*/     OPC_EmitInteger, MVT::i32, 0, 
/*23951*/     OPC_EmitInteger, MVT::i32, 0, 
/*23954*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*23966*/     OPC_EmitInteger, MVT::i32, 1, 
/*23969*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*23972*/     OPC_EmitInteger, MVT::i32, 0, 
/*23975*/     OPC_EmitInteger, MVT::i32, 0, 
/*23978*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fp_to_uint:i32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_r600:i32 R600_Reg32:f32:$src0)
/*23998*/   /*Scope*/ 10, /*->24009*/
/*23999*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24001*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_U32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (fp_to_uint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CVT_U32_F32_e32:i32 f32:f32:$src0)
/*24009*/   /*Scope*/ 4|128,1/*132*/, /*->24143*/
/*24011*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24013*/     OPC_EmitInteger, MVT::i32, 1, 
/*24016*/     OPC_EmitInteger, MVT::i32, 0, 
/*24019*/     OPC_EmitInteger, MVT::i32, 0, 
/*24022*/     OPC_EmitInteger, MVT::i32, 0, 
/*24025*/     OPC_EmitInteger, MVT::i32, 1, 
/*24028*/     OPC_EmitInteger, MVT::i32, 0, 
/*24031*/     OPC_EmitInteger, MVT::i32, 0, 
/*24034*/     OPC_EmitInteger, MVT::i32, 0, 
/*24037*/     OPC_EmitInteger, MVT::i32, 0, 
/*24040*/     OPC_EmitInteger, MVT::i32, 0, 
/*24043*/     OPC_EmitInteger, MVT::i32, 0, 
/*24046*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24058*/     OPC_EmitInteger, MVT::i32, 1, 
/*24061*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24064*/     OPC_EmitInteger, MVT::i32, 0, 
/*24067*/     OPC_EmitInteger, MVT::i32, 0, 
/*24070*/     OPC_EmitNode, TARGET_VAL(AMDGPU::TRUNC), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/*24090*/     OPC_EmitInteger, MVT::i32, 0, 
/*24093*/     OPC_EmitInteger, MVT::i32, 0, 
/*24096*/     OPC_EmitInteger, MVT::i32, 0, 
/*24099*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24111*/     OPC_EmitInteger, MVT::i32, 1, 
/*24114*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24117*/     OPC_EmitInteger, MVT::i32, 0, 
/*24120*/     OPC_EmitInteger, MVT::i32, 0, 
/*24123*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
              // Src: (fp_to_uint:i32 f32:f32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (TRUNC:i32 ?:f32:$src0))
/*24143*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SRA),// ->24388
/*24148*/   OPC_RecordChild0, // #0 = $src0
/*24149*/   OPC_RecordChild1, // #1 = $src1
/*24150*/   OPC_CheckChild1Type, MVT::i32,
/*24152*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->24374
/*24156*/     OPC_Scope, 101, /*->24259*/ // 3 children in Scope
/*24158*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*24160*/       OPC_EmitInteger, MVT::i32, 0, 
/*24163*/       OPC_EmitInteger, MVT::i32, 0, 
/*24166*/       OPC_EmitInteger, MVT::i32, 1, 
/*24169*/       OPC_EmitInteger, MVT::i32, 0, 
/*24172*/       OPC_EmitInteger, MVT::i32, 0, 
/*24175*/       OPC_EmitInteger, MVT::i32, 0, 
/*24178*/       OPC_EmitInteger, MVT::i32, 0, 
/*24181*/       OPC_EmitInteger, MVT::i32, 0, 
/*24184*/       OPC_EmitInteger, MVT::i32, 0, 
/*24187*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24199*/       OPC_EmitInteger, MVT::i32, 0, 
/*24202*/       OPC_EmitInteger, MVT::i32, 0, 
/*24205*/       OPC_EmitInteger, MVT::i32, 0, 
/*24208*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24220*/       OPC_EmitInteger, MVT::i32, 1, 
/*24223*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24226*/       OPC_EmitInteger, MVT::i32, 0, 
/*24229*/       OPC_EmitInteger, MVT::i32, 0, 
/*24232*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (ASHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24259*/     /*Scope*/ 101, /*->24361*/
/*24260*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24262*/       OPC_EmitInteger, MVT::i32, 0, 
/*24265*/       OPC_EmitInteger, MVT::i32, 0, 
/*24268*/       OPC_EmitInteger, MVT::i32, 1, 
/*24271*/       OPC_EmitInteger, MVT::i32, 0, 
/*24274*/       OPC_EmitInteger, MVT::i32, 0, 
/*24277*/       OPC_EmitInteger, MVT::i32, 0, 
/*24280*/       OPC_EmitInteger, MVT::i32, 0, 
/*24283*/       OPC_EmitInteger, MVT::i32, 0, 
/*24286*/       OPC_EmitInteger, MVT::i32, 0, 
/*24289*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24301*/       OPC_EmitInteger, MVT::i32, 0, 
/*24304*/       OPC_EmitInteger, MVT::i32, 0, 
/*24307*/       OPC_EmitInteger, MVT::i32, 0, 
/*24310*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24322*/       OPC_EmitInteger, MVT::i32, 1, 
/*24325*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24328*/       OPC_EmitInteger, MVT::i32, 0, 
/*24331*/       OPC_EmitInteger, MVT::i32, 0, 
/*24334*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ASHR_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (sra:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (ASHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24361*/     /*Scope*/ 11, /*->24373*/
/*24362*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24364*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ASHR_I32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_ASHR_I32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*24373*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->24387
/*24376*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24378*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ASHR_I64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ASHR_I64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SRL),// ->24632
/*24392*/   OPC_RecordChild0, // #0 = $src0
/*24393*/   OPC_RecordChild1, // #1 = $src1
/*24394*/   OPC_CheckChild1Type, MVT::i32,
/*24396*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->24618
/*24400*/     OPC_Scope, 101, /*->24503*/ // 3 children in Scope
/*24402*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*24404*/       OPC_EmitInteger, MVT::i32, 0, 
/*24407*/       OPC_EmitInteger, MVT::i32, 0, 
/*24410*/       OPC_EmitInteger, MVT::i32, 1, 
/*24413*/       OPC_EmitInteger, MVT::i32, 0, 
/*24416*/       OPC_EmitInteger, MVT::i32, 0, 
/*24419*/       OPC_EmitInteger, MVT::i32, 0, 
/*24422*/       OPC_EmitInteger, MVT::i32, 0, 
/*24425*/       OPC_EmitInteger, MVT::i32, 0, 
/*24428*/       OPC_EmitInteger, MVT::i32, 0, 
/*24431*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24443*/       OPC_EmitInteger, MVT::i32, 0, 
/*24446*/       OPC_EmitInteger, MVT::i32, 0, 
/*24449*/       OPC_EmitInteger, MVT::i32, 0, 
/*24452*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24464*/       OPC_EmitInteger, MVT::i32, 1, 
/*24467*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24470*/       OPC_EmitInteger, MVT::i32, 0, 
/*24473*/       OPC_EmitInteger, MVT::i32, 0, 
/*24476*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24503*/     /*Scope*/ 101, /*->24605*/
/*24504*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24506*/       OPC_EmitInteger, MVT::i32, 0, 
/*24509*/       OPC_EmitInteger, MVT::i32, 0, 
/*24512*/       OPC_EmitInteger, MVT::i32, 1, 
/*24515*/       OPC_EmitInteger, MVT::i32, 0, 
/*24518*/       OPC_EmitInteger, MVT::i32, 0, 
/*24521*/       OPC_EmitInteger, MVT::i32, 0, 
/*24524*/       OPC_EmitInteger, MVT::i32, 0, 
/*24527*/       OPC_EmitInteger, MVT::i32, 0, 
/*24530*/       OPC_EmitInteger, MVT::i32, 0, 
/*24533*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24545*/       OPC_EmitInteger, MVT::i32, 0, 
/*24548*/       OPC_EmitInteger, MVT::i32, 0, 
/*24551*/       OPC_EmitInteger, MVT::i32, 0, 
/*24554*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24566*/       OPC_EmitInteger, MVT::i32, 1, 
/*24569*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24572*/       OPC_EmitInteger, MVT::i32, 0, 
/*24575*/       OPC_EmitInteger, MVT::i32, 0, 
/*24578*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHR_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (srl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHR_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24605*/     /*Scope*/ 11, /*->24617*/
/*24606*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24608*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHR_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*24617*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->24631
/*24620*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24622*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHR_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHR_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 112|128,1/*240*/,  TARGET_VAL(ISD::SHL),// ->24876
/*24636*/   OPC_RecordChild0, // #0 = $src0
/*24637*/   OPC_RecordChild1, // #1 = $src1
/*24638*/   OPC_CheckChild1Type, MVT::i32,
/*24640*/   OPC_SwitchType /*2 cases */, 90|128,1/*218*/,  MVT::i32,// ->24862
/*24644*/     OPC_Scope, 101, /*->24747*/ // 3 children in Scope
/*24646*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*24648*/       OPC_EmitInteger, MVT::i32, 0, 
/*24651*/       OPC_EmitInteger, MVT::i32, 0, 
/*24654*/       OPC_EmitInteger, MVT::i32, 1, 
/*24657*/       OPC_EmitInteger, MVT::i32, 0, 
/*24660*/       OPC_EmitInteger, MVT::i32, 0, 
/*24663*/       OPC_EmitInteger, MVT::i32, 0, 
/*24666*/       OPC_EmitInteger, MVT::i32, 0, 
/*24669*/       OPC_EmitInteger, MVT::i32, 0, 
/*24672*/       OPC_EmitInteger, MVT::i32, 0, 
/*24675*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24687*/       OPC_EmitInteger, MVT::i32, 0, 
/*24690*/       OPC_EmitInteger, MVT::i32, 0, 
/*24693*/       OPC_EmitInteger, MVT::i32, 0, 
/*24696*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24708*/       OPC_EmitInteger, MVT::i32, 1, 
/*24711*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24714*/       OPC_EmitInteger, MVT::i32, 0, 
/*24717*/       OPC_EmitInteger, MVT::i32, 0, 
/*24720*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_r600), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24747*/     /*Scope*/ 101, /*->24849*/
/*24748*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*24750*/       OPC_EmitInteger, MVT::i32, 0, 
/*24753*/       OPC_EmitInteger, MVT::i32, 0, 
/*24756*/       OPC_EmitInteger, MVT::i32, 1, 
/*24759*/       OPC_EmitInteger, MVT::i32, 0, 
/*24762*/       OPC_EmitInteger, MVT::i32, 0, 
/*24765*/       OPC_EmitInteger, MVT::i32, 0, 
/*24768*/       OPC_EmitInteger, MVT::i32, 0, 
/*24771*/       OPC_EmitInteger, MVT::i32, 0, 
/*24774*/       OPC_EmitInteger, MVT::i32, 0, 
/*24777*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24789*/       OPC_EmitInteger, MVT::i32, 0, 
/*24792*/       OPC_EmitInteger, MVT::i32, 0, 
/*24795*/       OPC_EmitInteger, MVT::i32, 0, 
/*24798*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24810*/       OPC_EmitInteger, MVT::i32, 1, 
/*24813*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24816*/       OPC_EmitInteger, MVT::i32, 0, 
/*24819*/       OPC_EmitInteger, MVT::i32, 0, 
/*24822*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LSHL_eg), 0,
                    1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
                // Dst: (LSHL_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24849*/     /*Scope*/ 11, /*->24861*/
/*24850*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24852*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B32_e32), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
                // Dst: (V_LSHL_B32_e32:i32 i32:i32:$src0, i32:i32:$src1)
/*24861*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::i64,// ->24875
/*24864*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*24866*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LSHL_B64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i64 i64:i64:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_LSHL_B64:i64 i64:i64:$src0, i32:i32:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88|128,2/*344*/,  TARGET_VAL(ISD::MULHS),// ->25224
/*24880*/   OPC_RecordChild0, // #0 = $src0
/*24881*/   OPC_RecordChild1, // #1 = $src1
/*24882*/   OPC_CheckType, MVT::i32,
/*24884*/   OPC_Scope, 101, /*->24987*/ // 4 children in Scope
/*24886*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*24888*/     OPC_EmitInteger, MVT::i32, 0, 
/*24891*/     OPC_EmitInteger, MVT::i32, 0, 
/*24894*/     OPC_EmitInteger, MVT::i32, 1, 
/*24897*/     OPC_EmitInteger, MVT::i32, 0, 
/*24900*/     OPC_EmitInteger, MVT::i32, 0, 
/*24903*/     OPC_EmitInteger, MVT::i32, 0, 
/*24906*/     OPC_EmitInteger, MVT::i32, 0, 
/*24909*/     OPC_EmitInteger, MVT::i32, 0, 
/*24912*/     OPC_EmitInteger, MVT::i32, 0, 
/*24915*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24927*/     OPC_EmitInteger, MVT::i32, 0, 
/*24930*/     OPC_EmitInteger, MVT::i32, 0, 
/*24933*/     OPC_EmitInteger, MVT::i32, 0, 
/*24936*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*24948*/     OPC_EmitInteger, MVT::i32, 1, 
/*24951*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*24954*/     OPC_EmitInteger, MVT::i32, 0, 
/*24957*/     OPC_EmitInteger, MVT::i32, 0, 
/*24960*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*24987*/   /*Scope*/ 101, /*->25089*/
/*24988*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*24990*/     OPC_EmitInteger, MVT::i32, 0, 
/*24993*/     OPC_EmitInteger, MVT::i32, 0, 
/*24996*/     OPC_EmitInteger, MVT::i32, 1, 
/*24999*/     OPC_EmitInteger, MVT::i32, 0, 
/*25002*/     OPC_EmitInteger, MVT::i32, 0, 
/*25005*/     OPC_EmitInteger, MVT::i32, 0, 
/*25008*/     OPC_EmitInteger, MVT::i32, 0, 
/*25011*/     OPC_EmitInteger, MVT::i32, 0, 
/*25014*/     OPC_EmitInteger, MVT::i32, 0, 
/*25017*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25029*/     OPC_EmitInteger, MVT::i32, 0, 
/*25032*/     OPC_EmitInteger, MVT::i32, 0, 
/*25035*/     OPC_EmitInteger, MVT::i32, 0, 
/*25038*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25050*/     OPC_EmitInteger, MVT::i32, 1, 
/*25053*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25056*/     OPC_EmitInteger, MVT::i32, 0, 
/*25059*/     OPC_EmitInteger, MVT::i32, 0, 
/*25062*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25089*/   /*Scope*/ 101, /*->25191*/
/*25090*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*25092*/     OPC_EmitInteger, MVT::i32, 0, 
/*25095*/     OPC_EmitInteger, MVT::i32, 0, 
/*25098*/     OPC_EmitInteger, MVT::i32, 1, 
/*25101*/     OPC_EmitInteger, MVT::i32, 0, 
/*25104*/     OPC_EmitInteger, MVT::i32, 0, 
/*25107*/     OPC_EmitInteger, MVT::i32, 0, 
/*25110*/     OPC_EmitInteger, MVT::i32, 0, 
/*25113*/     OPC_EmitInteger, MVT::i32, 0, 
/*25116*/     OPC_EmitInteger, MVT::i32, 0, 
/*25119*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25131*/     OPC_EmitInteger, MVT::i32, 0, 
/*25134*/     OPC_EmitInteger, MVT::i32, 0, 
/*25137*/     OPC_EmitInteger, MVT::i32, 0, 
/*25140*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25152*/     OPC_EmitInteger, MVT::i32, 1, 
/*25155*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25158*/     OPC_EmitInteger, MVT::i32, 0, 
/*25161*/     OPC_EmitInteger, MVT::i32, 0, 
/*25164*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_INT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhs:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25191*/   /*Scope*/ 31, /*->25223*/
/*25192*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25194*/     OPC_EmitInteger, MVT::i32, 0, 
/*25197*/     OPC_EmitInteger, MVT::i32, 0, 
/*25200*/     OPC_EmitInteger, MVT::i32, 0, 
/*25203*/     OPC_EmitInteger, MVT::i32, 0, 
/*25206*/     OPC_EmitInteger, MVT::i32, 0, 
/*25209*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_I32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhs:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_I32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*25223*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88|128,2/*344*/,  TARGET_VAL(ISD::MULHU),// ->25572
/*25228*/   OPC_RecordChild0, // #0 = $src0
/*25229*/   OPC_RecordChild1, // #1 = $src1
/*25230*/   OPC_CheckType, MVT::i32,
/*25232*/   OPC_Scope, 101, /*->25335*/ // 4 children in Scope
/*25234*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*25236*/     OPC_EmitInteger, MVT::i32, 0, 
/*25239*/     OPC_EmitInteger, MVT::i32, 0, 
/*25242*/     OPC_EmitInteger, MVT::i32, 1, 
/*25245*/     OPC_EmitInteger, MVT::i32, 0, 
/*25248*/     OPC_EmitInteger, MVT::i32, 0, 
/*25251*/     OPC_EmitInteger, MVT::i32, 0, 
/*25254*/     OPC_EmitInteger, MVT::i32, 0, 
/*25257*/     OPC_EmitInteger, MVT::i32, 0, 
/*25260*/     OPC_EmitInteger, MVT::i32, 0, 
/*25263*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25275*/     OPC_EmitInteger, MVT::i32, 0, 
/*25278*/     OPC_EmitInteger, MVT::i32, 0, 
/*25281*/     OPC_EmitInteger, MVT::i32, 0, 
/*25284*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25296*/     OPC_EmitInteger, MVT::i32, 1, 
/*25299*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25302*/     OPC_EmitInteger, MVT::i32, 0, 
/*25305*/     OPC_EmitInteger, MVT::i32, 0, 
/*25308*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_r600:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25335*/   /*Scope*/ 101, /*->25437*/
/*25336*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*25338*/     OPC_EmitInteger, MVT::i32, 0, 
/*25341*/     OPC_EmitInteger, MVT::i32, 0, 
/*25344*/     OPC_EmitInteger, MVT::i32, 1, 
/*25347*/     OPC_EmitInteger, MVT::i32, 0, 
/*25350*/     OPC_EmitInteger, MVT::i32, 0, 
/*25353*/     OPC_EmitInteger, MVT::i32, 0, 
/*25356*/     OPC_EmitInteger, MVT::i32, 0, 
/*25359*/     OPC_EmitInteger, MVT::i32, 0, 
/*25362*/     OPC_EmitInteger, MVT::i32, 0, 
/*25365*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25377*/     OPC_EmitInteger, MVT::i32, 0, 
/*25380*/     OPC_EmitInteger, MVT::i32, 0, 
/*25383*/     OPC_EmitInteger, MVT::i32, 0, 
/*25386*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25398*/     OPC_EmitInteger, MVT::i32, 1, 
/*25401*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25404*/     OPC_EmitInteger, MVT::i32, 0, 
/*25407*/     OPC_EmitInteger, MVT::i32, 0, 
/*25410*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_eg:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25437*/   /*Scope*/ 101, /*->25539*/
/*25438*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*25440*/     OPC_EmitInteger, MVT::i32, 0, 
/*25443*/     OPC_EmitInteger, MVT::i32, 0, 
/*25446*/     OPC_EmitInteger, MVT::i32, 1, 
/*25449*/     OPC_EmitInteger, MVT::i32, 0, 
/*25452*/     OPC_EmitInteger, MVT::i32, 0, 
/*25455*/     OPC_EmitInteger, MVT::i32, 0, 
/*25458*/     OPC_EmitInteger, MVT::i32, 0, 
/*25461*/     OPC_EmitInteger, MVT::i32, 0, 
/*25464*/     OPC_EmitInteger, MVT::i32, 0, 
/*25467*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25479*/     OPC_EmitInteger, MVT::i32, 0, 
/*25482*/     OPC_EmitInteger, MVT::i32, 0, 
/*25485*/     OPC_EmitInteger, MVT::i32, 0, 
/*25488*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25500*/     OPC_EmitInteger, MVT::i32, 1, 
/*25503*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25506*/     OPC_EmitInteger, MVT::i32, 0, 
/*25509*/     OPC_EmitInteger, MVT::i32, 0, 
/*25512*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULHI_UINT_cm), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (mulhu:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1) - Complexity = 3
              // Dst: (MULHI_UINT_cm:i32 R600_Reg32:i32:$src0, R600_Reg32:i32:$src1)
/*25539*/   /*Scope*/ 31, /*->25571*/
/*25540*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25542*/     OPC_EmitInteger, MVT::i32, 0, 
/*25545*/     OPC_EmitInteger, MVT::i32, 0, 
/*25548*/     OPC_EmitInteger, MVT::i32, 0, 
/*25551*/     OPC_EmitInteger, MVT::i32, 0, 
/*25554*/     OPC_EmitInteger, MVT::i32, 0, 
/*25557*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_HI_U32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (mulhu:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_MUL_HI_U32:i32 ?:i32:$src0, ?:i32:$src1, 0:i32)
/*25571*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,3/*497*/,  TARGET_VAL(AMDGPUISD::URECIP),// ->26073
/*25576*/   OPC_RecordChild0, // #0 = $src0
/*25577*/   OPC_CheckType, MVT::i32,
/*25579*/   OPC_Scope, 67, /*->25648*/ // 4 children in Scope
/*25581*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*25583*/     OPC_EmitInteger, MVT::i32, 1, 
/*25586*/     OPC_EmitInteger, MVT::i32, 0, 
/*25589*/     OPC_EmitInteger, MVT::i32, 0, 
/*25592*/     OPC_EmitInteger, MVT::i32, 0, 
/*25595*/     OPC_EmitInteger, MVT::i32, 0, 
/*25598*/     OPC_EmitInteger, MVT::i32, 0, 
/*25601*/     OPC_EmitInteger, MVT::i32, 0, 
/*25604*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25616*/     OPC_EmitInteger, MVT::i32, 1, 
/*25619*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25622*/     OPC_EmitInteger, MVT::i32, 0, 
/*25625*/     OPC_EmitInteger, MVT::i32, 0, 
/*25628*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_r600:i32 R600_Reg32:i32:$src0)
/*25648*/   /*Scope*/ 67, /*->25716*/
/*25649*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*25651*/     OPC_EmitInteger, MVT::i32, 1, 
/*25654*/     OPC_EmitInteger, MVT::i32, 0, 
/*25657*/     OPC_EmitInteger, MVT::i32, 0, 
/*25660*/     OPC_EmitInteger, MVT::i32, 0, 
/*25663*/     OPC_EmitInteger, MVT::i32, 0, 
/*25666*/     OPC_EmitInteger, MVT::i32, 0, 
/*25669*/     OPC_EmitInteger, MVT::i32, 0, 
/*25672*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25684*/     OPC_EmitInteger, MVT::i32, 1, 
/*25687*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25690*/     OPC_EmitInteger, MVT::i32, 0, 
/*25693*/     OPC_EmitInteger, MVT::i32, 0, 
/*25696*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUurecip:i32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (RECIP_UINT_eg:i32 R600_Reg32:i32:$src0)
/*25716*/   /*Scope*/ 42, /*->25759*/
/*25717*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*25719*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*25726*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*25734*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_IFLAG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*25742*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4
/*25751*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_U32_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 4, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_U32_F32_e32:i32 (V_MUL_F32_e32:i32 1333788672:i32, (V_RCP_IFLAG_F32_e32:i32 (V_CVT_F32_U32_e32:i32 ?:i32:$src0))))
/*25759*/   /*Scope*/ 55|128,2/*311*/, /*->26072*/
/*25761*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*25763*/     OPC_EmitInteger, MVT::i32, 1, 
/*25766*/     OPC_EmitInteger, MVT::i32, 0, 
/*25769*/     OPC_EmitInteger, MVT::i32, 0, 
/*25772*/     OPC_EmitInteger, MVT::i32, 0, 
/*25775*/     OPC_EmitInteger, MVT::i32, 0, 
/*25778*/     OPC_EmitInteger, MVT::i32, 0, 
/*25781*/     OPC_EmitInteger, MVT::i32, 1, 
/*25784*/     OPC_EmitInteger, MVT::i32, 0, 
/*25787*/     OPC_EmitInteger, MVT::i32, 0, 
/*25790*/     OPC_EmitInteger, MVT::i32, 0, 
/*25793*/     OPC_EmitInteger, MVT::i32, 1, 
/*25796*/     OPC_EmitInteger, MVT::i32, 0, 
/*25799*/     OPC_EmitInteger, MVT::i32, 0, 
/*25802*/     OPC_EmitInteger, MVT::i32, 0, 
/*25805*/     OPC_EmitInteger, MVT::i32, 1, 
/*25808*/     OPC_EmitInteger, MVT::i32, 0, 
/*25811*/     OPC_EmitInteger, MVT::i32, 0, 
/*25814*/     OPC_EmitInteger, MVT::i32, 0, 
/*25817*/     OPC_EmitInteger, MVT::i32, 0, 
/*25820*/     OPC_EmitInteger, MVT::i32, 0, 
/*25823*/     OPC_EmitInteger, MVT::i32, 0, 
/*25826*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25838*/     OPC_EmitInteger, MVT::i32, 1, 
/*25841*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25844*/     OPC_EmitInteger, MVT::i32, 0, 
/*25847*/     OPC_EmitInteger, MVT::i32, 0, 
/*25850*/     OPC_EmitNode, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/*25870*/     OPC_EmitInteger, MVT::i32, 0, 
/*25873*/     OPC_EmitInteger, MVT::i32, 0, 
/*25876*/     OPC_EmitInteger, MVT::i32, 0, 
/*25879*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25891*/     OPC_EmitInteger, MVT::i32, 1, 
/*25894*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25897*/     OPC_EmitInteger, MVT::i32, 0, 
/*25900*/     OPC_EmitInteger, MVT::i32, 0, 
/*25903*/     OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/*25923*/     OPC_EmitInteger, MVT::i32, 0, 
/*25926*/     OPC_EmitInteger, MVT::i32, 0, 
/*25929*/     OPC_EmitInteger, MVT::i32, 0, 
/*25932*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25944*/     OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/*25951*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MOV_IMM_I32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/*25959*/     OPC_EmitInteger, MVT::i32, 0, 
/*25962*/     OPC_EmitInteger, MVT::i32, 0, 
/*25965*/     OPC_EmitInteger, MVT::i32, 0, 
/*25968*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*25980*/     OPC_EmitInteger, MVT::i32, 1, 
/*25983*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*25986*/     OPC_EmitInteger, MVT::i32, 0, 
/*25989*/     OPC_EmitInteger, MVT::i32, 0, 
/*25992*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/*26019*/     OPC_EmitInteger, MVT::i32, 0, 
/*26022*/     OPC_EmitInteger, MVT::i32, 0, 
/*26025*/     OPC_EmitInteger, MVT::i32, 0, 
/*26028*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26040*/     OPC_EmitInteger, MVT::i32, 1, 
/*26043*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26046*/     OPC_EmitInteger, MVT::i32, 0, 
/*26049*/     OPC_EmitInteger, MVT::i32, 0, 
/*26052*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLT_TO_UINT_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
              // Src: (AMDGPUurecip:i32 i32:i32:$src0) - Complexity = 3
              // Dst: (FLT_TO_UINT_eg:i32 (MUL_IEEE:i32 (RECIP_IEEE_cm:i32 (UINT_TO_FLT_eg:i32 ?:i32:$src0)), (MOV_IMM_I32:i32 1333788672:i32)))
/*26072*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,1/*137*/,  TARGET_VAL(ISD::ROTR),// ->26214
/*26077*/   OPC_RecordChild0, // #0 = $src0
/*26078*/   OPC_RecordChild1, // #1 = $src1
/*26079*/   OPC_CheckChild1Type, MVT::i32,
/*26081*/   OPC_CheckType, MVT::i32,
/*26083*/   OPC_Scope, 99, /*->26184*/ // 2 children in Scope
/*26085*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*26087*/     OPC_EmitInteger, MVT::i32, 0, 
/*26090*/     OPC_EmitInteger, MVT::i32, 0, 
/*26093*/     OPC_EmitInteger, MVT::i32, 0, 
/*26096*/     OPC_EmitInteger, MVT::i32, 0, 
/*26099*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26111*/     OPC_EmitInteger, MVT::i32, 0, 
/*26114*/     OPC_EmitInteger, MVT::i32, 0, 
/*26117*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26129*/     OPC_EmitInteger, MVT::i32, 0, 
/*26132*/     OPC_EmitInteger, MVT::i32, 0, 
/*26135*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*26147*/     OPC_EmitInteger, MVT::i32, 1, 
/*26150*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*26153*/     OPC_EmitInteger, MVT::i32, 0, 
/*26156*/     OPC_EmitInteger, MVT::i32, 0, 
/*26159*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BIT_ALIGN_INT_eg), 0,
                  1/*#VTs*/, MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*26184*/   /*Scope*/ 28, /*->26213*/
/*26185*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26187*/     OPC_EmitInteger, MVT::i32, 0, 
/*26190*/     OPC_EmitInteger, MVT::i32, 0, 
/*26193*/     OPC_EmitInteger, MVT::i32, 0, 
/*26196*/     OPC_EmitInteger, MVT::i32, 0, 
/*26199*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ALIGNBIT_B32), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 0, 0, 1, 2, 3, 4, 5, 
              // Src: (rotr:i32 i32:i32:$src0, i32:i32:$src1) - Complexity = 3
              // Dst: (V_ALIGNBIT_B32:i32 ?:i32:$src0, ?:i32:$src0, ?:i32:$src1)
/*26213*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 96|128,5/*736*/,  TARGET_VAL(ISD::SETCC),// ->26954
/*26218*/   OPC_RecordChild0, // #0 = $src0
/*26219*/   OPC_Scope, 55|128,2/*311*/, /*->26533*/ // 3 children in Scope
/*26222*/     OPC_CheckChild0Type, MVT::f32,
/*26224*/     OPC_RecordChild1, // #1 = $src1
/*26225*/     OPC_MoveChild, 2,
/*26227*/     OPC_Scope, 108|128,1/*236*/, /*->26466*/ // 3 children in Scope
/*26230*/       OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*26233*/       OPC_Scope, 32, /*->26267*/ // 7 children in Scope
/*26235*/         OPC_CheckPredicate, 6, // Predicate_COND_LT
/*26237*/         OPC_MoveParent,
/*26238*/         OPC_CheckType, MVT::i1,
/*26240*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26242*/         OPC_EmitInteger, MVT::i32, 0, 
/*26245*/         OPC_EmitInteger, MVT::i32, 0, 
/*26248*/         OPC_EmitInteger, MVT::i32, 0, 
/*26251*/         OPC_EmitInteger, MVT::i32, 0, 
/*26254*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                  // Dst: (V_CMP_LT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26267*/       /*Scope*/ 32, /*->26300*/
/*26268*/         OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*26270*/         OPC_MoveParent,
/*26271*/         OPC_CheckType, MVT::i1,
/*26273*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26275*/         OPC_EmitInteger, MVT::i32, 0, 
/*26278*/         OPC_EmitInteger, MVT::i32, 0, 
/*26281*/         OPC_EmitInteger, MVT::i32, 0, 
/*26284*/         OPC_EmitInteger, MVT::i32, 0, 
/*26287*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                  // Dst: (V_CMP_EQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26300*/       /*Scope*/ 32, /*->26333*/
/*26301*/         OPC_CheckPredicate, 7, // Predicate_COND_LE
/*26303*/         OPC_MoveParent,
/*26304*/         OPC_CheckType, MVT::i1,
/*26306*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26308*/         OPC_EmitInteger, MVT::i32, 0, 
/*26311*/         OPC_EmitInteger, MVT::i32, 0, 
/*26314*/         OPC_EmitInteger, MVT::i32, 0, 
/*26317*/         OPC_EmitInteger, MVT::i32, 0, 
/*26320*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                  // Dst: (V_CMP_LE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26333*/       /*Scope*/ 32, /*->26366*/
/*26334*/         OPC_CheckPredicate, 3, // Predicate_COND_GT
/*26336*/         OPC_MoveParent,
/*26337*/         OPC_CheckType, MVT::i1,
/*26339*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26341*/         OPC_EmitInteger, MVT::i32, 0, 
/*26344*/         OPC_EmitInteger, MVT::i32, 0, 
/*26347*/         OPC_EmitInteger, MVT::i32, 0, 
/*26350*/         OPC_EmitInteger, MVT::i32, 0, 
/*26353*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                  // Dst: (V_CMP_GT_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26366*/       /*Scope*/ 32, /*->26399*/
/*26367*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*26369*/         OPC_MoveParent,
/*26370*/         OPC_CheckType, MVT::i1,
/*26372*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26374*/         OPC_EmitInteger, MVT::i32, 0, 
/*26377*/         OPC_EmitInteger, MVT::i32, 0, 
/*26380*/         OPC_EmitInteger, MVT::i32, 0, 
/*26383*/         OPC_EmitInteger, MVT::i32, 0, 
/*26386*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LG_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_LG_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26399*/       /*Scope*/ 32, /*->26432*/
/*26400*/         OPC_CheckPredicate, 4, // Predicate_COND_GE
/*26402*/         OPC_MoveParent,
/*26403*/         OPC_CheckType, MVT::i1,
/*26405*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26407*/         OPC_EmitInteger, MVT::i32, 0, 
/*26410*/         OPC_EmitInteger, MVT::i32, 0, 
/*26413*/         OPC_EmitInteger, MVT::i32, 0, 
/*26416*/         OPC_EmitInteger, MVT::i32, 0, 
/*26419*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                  // Dst: (V_CMP_GE_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26432*/       /*Scope*/ 32, /*->26465*/
/*26433*/         OPC_CheckPredicate, 5, // Predicate_COND_NE
/*26435*/         OPC_MoveParent,
/*26436*/         OPC_CheckType, MVT::i1,
/*26438*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26440*/         OPC_EmitInteger, MVT::i32, 0, 
/*26443*/         OPC_EmitInteger, MVT::i32, 0, 
/*26446*/         OPC_EmitInteger, MVT::i32, 0, 
/*26449*/         OPC_EmitInteger, MVT::i32, 0, 
/*26452*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NEQ_F32_e64), 0,
                      1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                  // Src: (setcc:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                  // Dst: (V_CMP_NEQ_F32_e64:i1 VSrc_32:f32:$src0, VSrc_32:f32:$src1)
/*26465*/       0, /*End of Scope*/
/*26466*/     /*Scope*/ 32, /*->26499*/
/*26467*/       OPC_CheckCondCode, ISD::SETO,
/*26469*/       OPC_MoveParent,
/*26470*/       OPC_CheckType, MVT::i1,
/*26472*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26474*/       OPC_EmitInteger, MVT::i32, 0, 
/*26477*/       OPC_EmitInteger, MVT::i32, 0, 
/*26480*/       OPC_EmitInteger, MVT::i32, 0, 
/*26483*/       OPC_EmitInteger, MVT::i32, 0, 
/*26486*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_O_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETO:Other) - Complexity = 3
                // Dst: (V_CMP_O_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*26499*/     /*Scope*/ 32, /*->26532*/
/*26500*/       OPC_CheckCondCode, ISD::SETUO,
/*26502*/       OPC_MoveParent,
/*26503*/       OPC_CheckType, MVT::i1,
/*26505*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26507*/       OPC_EmitInteger, MVT::i32, 0, 
/*26510*/       OPC_EmitInteger, MVT::i32, 0, 
/*26513*/       OPC_EmitInteger, MVT::i32, 0, 
/*26516*/       OPC_EmitInteger, MVT::i32, 0, 
/*26519*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_U_F32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 f32:f32:$src0, f32:f32:$src1, SETUO:Other) - Complexity = 3
                // Dst: (V_CMP_U_F32_e64:i1 ?:f32:$src0, ?:f32:$src1)
/*26532*/     0, /*End of Scope*/
/*26533*/   /*Scope*/ 80|128,1/*208*/, /*->26743*/
/*26535*/     OPC_CheckChild0Type, MVT::f64,
/*26537*/     OPC_RecordChild1, // #1 = $src1
/*26538*/     OPC_MoveChild, 2,
/*26540*/     OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*26543*/     OPC_Scope, 32, /*->26577*/ // 6 children in Scope
/*26545*/       OPC_CheckPredicate, 6, // Predicate_COND_LT
/*26547*/       OPC_MoveParent,
/*26548*/       OPC_CheckType, MVT::i1,
/*26550*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26552*/       OPC_EmitInteger, MVT::i32, 0, 
/*26555*/       OPC_EmitInteger, MVT::i32, 0, 
/*26558*/       OPC_EmitInteger, MVT::i32, 0, 
/*26561*/       OPC_EmitInteger, MVT::i32, 0, 
/*26564*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                // Dst: (V_CMP_LT_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*26577*/     /*Scope*/ 32, /*->26610*/
/*26578*/       OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*26580*/       OPC_MoveParent,
/*26581*/       OPC_CheckType, MVT::i1,
/*26583*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26585*/       OPC_EmitInteger, MVT::i32, 0, 
/*26588*/       OPC_EmitInteger, MVT::i32, 0, 
/*26591*/       OPC_EmitInteger, MVT::i32, 0, 
/*26594*/       OPC_EmitInteger, MVT::i32, 0, 
/*26597*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                // Dst: (V_CMP_EQ_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*26610*/     /*Scope*/ 32, /*->26643*/
/*26611*/       OPC_CheckPredicate, 7, // Predicate_COND_LE
/*26613*/       OPC_MoveParent,
/*26614*/       OPC_CheckType, MVT::i1,
/*26616*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26618*/       OPC_EmitInteger, MVT::i32, 0, 
/*26621*/       OPC_EmitInteger, MVT::i32, 0, 
/*26624*/       OPC_EmitInteger, MVT::i32, 0, 
/*26627*/       OPC_EmitInteger, MVT::i32, 0, 
/*26630*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                // Dst: (V_CMP_LE_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*26643*/     /*Scope*/ 32, /*->26676*/
/*26644*/       OPC_CheckPredicate, 3, // Predicate_COND_GT
/*26646*/       OPC_MoveParent,
/*26647*/       OPC_CheckType, MVT::i1,
/*26649*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26651*/       OPC_EmitInteger, MVT::i32, 0, 
/*26654*/       OPC_EmitInteger, MVT::i32, 0, 
/*26657*/       OPC_EmitInteger, MVT::i32, 0, 
/*26660*/       OPC_EmitInteger, MVT::i32, 0, 
/*26663*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                // Dst: (V_CMP_GT_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*26676*/     /*Scope*/ 32, /*->26709*/
/*26677*/       OPC_CheckPredicate, 4, // Predicate_COND_GE
/*26679*/       OPC_MoveParent,
/*26680*/       OPC_CheckType, MVT::i1,
/*26682*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26684*/       OPC_EmitInteger, MVT::i32, 0, 
/*26687*/       OPC_EmitInteger, MVT::i32, 0, 
/*26690*/       OPC_EmitInteger, MVT::i32, 0, 
/*26693*/       OPC_EmitInteger, MVT::i32, 0, 
/*26696*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                // Dst: (V_CMP_GE_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*26709*/     /*Scope*/ 32, /*->26742*/
/*26710*/       OPC_CheckPredicate, 5, // Predicate_COND_NE
/*26712*/       OPC_MoveParent,
/*26713*/       OPC_CheckType, MVT::i1,
/*26715*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26717*/       OPC_EmitInteger, MVT::i32, 0, 
/*26720*/       OPC_EmitInteger, MVT::i32, 0, 
/*26723*/       OPC_EmitInteger, MVT::i32, 0, 
/*26726*/       OPC_EmitInteger, MVT::i32, 0, 
/*26729*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NEQ_F64_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                // Dst: (V_CMP_NEQ_F64_e64:i1 VSrc_64:f64:$src0, VSrc_64:f64:$src1)
/*26742*/     0, /*End of Scope*/
/*26743*/   /*Scope*/ 80|128,1/*208*/, /*->26953*/
/*26745*/     OPC_CheckChild0Type, MVT::i32,
/*26747*/     OPC_RecordChild1, // #1 = $src1
/*26748*/     OPC_MoveChild, 2,
/*26750*/     OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/*26753*/     OPC_Scope, 32, /*->26787*/ // 6 children in Scope
/*26755*/       OPC_CheckPredicate, 6, // Predicate_COND_LT
/*26757*/       OPC_MoveParent,
/*26758*/       OPC_CheckType, MVT::i1,
/*26760*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26762*/       OPC_EmitInteger, MVT::i32, 0, 
/*26765*/       OPC_EmitInteger, MVT::i32, 0, 
/*26768*/       OPC_EmitInteger, MVT::i32, 0, 
/*26771*/       OPC_EmitInteger, MVT::i32, 0, 
/*26774*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LT>>) - Complexity = 3
                // Dst: (V_CMP_LT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26787*/     /*Scope*/ 32, /*->26820*/
/*26788*/       OPC_CheckPredicate, 2, // Predicate_COND_EQ
/*26790*/       OPC_MoveParent,
/*26791*/       OPC_CheckType, MVT::i1,
/*26793*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26795*/       OPC_EmitInteger, MVT::i32, 0, 
/*26798*/       OPC_EmitInteger, MVT::i32, 0, 
/*26801*/       OPC_EmitInteger, MVT::i32, 0, 
/*26804*/       OPC_EmitInteger, MVT::i32, 0, 
/*26807*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_EQ_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_EQ>>) - Complexity = 3
                // Dst: (V_CMP_EQ_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26820*/     /*Scope*/ 32, /*->26853*/
/*26821*/       OPC_CheckPredicate, 7, // Predicate_COND_LE
/*26823*/       OPC_MoveParent,
/*26824*/       OPC_CheckType, MVT::i1,
/*26826*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26828*/       OPC_EmitInteger, MVT::i32, 0, 
/*26831*/       OPC_EmitInteger, MVT::i32, 0, 
/*26834*/       OPC_EmitInteger, MVT::i32, 0, 
/*26837*/       OPC_EmitInteger, MVT::i32, 0, 
/*26840*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_LE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_LE>>) - Complexity = 3
                // Dst: (V_CMP_LE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26853*/     /*Scope*/ 32, /*->26886*/
/*26854*/       OPC_CheckPredicate, 3, // Predicate_COND_GT
/*26856*/       OPC_MoveParent,
/*26857*/       OPC_CheckType, MVT::i1,
/*26859*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26861*/       OPC_EmitInteger, MVT::i32, 0, 
/*26864*/       OPC_EmitInteger, MVT::i32, 0, 
/*26867*/       OPC_EmitInteger, MVT::i32, 0, 
/*26870*/       OPC_EmitInteger, MVT::i32, 0, 
/*26873*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GT_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GT>>) - Complexity = 3
                // Dst: (V_CMP_GT_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26886*/     /*Scope*/ 32, /*->26919*/
/*26887*/       OPC_CheckPredicate, 5, // Predicate_COND_NE
/*26889*/       OPC_MoveParent,
/*26890*/       OPC_CheckType, MVT::i1,
/*26892*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26894*/       OPC_EmitInteger, MVT::i32, 0, 
/*26897*/       OPC_EmitInteger, MVT::i32, 0, 
/*26900*/       OPC_EmitInteger, MVT::i32, 0, 
/*26903*/       OPC_EmitInteger, MVT::i32, 0, 
/*26906*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_NE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_NE>>) - Complexity = 3
                // Dst: (V_CMP_NE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26919*/     /*Scope*/ 32, /*->26952*/
/*26920*/       OPC_CheckPredicate, 4, // Predicate_COND_GE
/*26922*/       OPC_MoveParent,
/*26923*/       OPC_CheckType, MVT::i1,
/*26925*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26927*/       OPC_EmitInteger, MVT::i32, 0, 
/*26930*/       OPC_EmitInteger, MVT::i32, 0, 
/*26933*/       OPC_EmitInteger, MVT::i32, 0, 
/*26936*/       OPC_EmitInteger, MVT::i32, 0, 
/*26939*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CMP_GE_I32_e64), 0,
                    1/*#VTs*/, MVT::i1, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
                // Src: (setcc:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1, (cond:Other)<<P:Predicate_COND_GE>>) - Complexity = 3
                // Dst: (V_CMP_GE_I32_e64:i1 VSrc_32:i32:$src0, VSrc_32:i32:$src1)
/*26952*/     0, /*End of Scope*/
/*26953*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 77|128,1/*205*/,  TARGET_VAL(ISD::SELECT),// ->27163
/*26958*/   OPC_RecordChild0, // #0 = $src2
/*26959*/   OPC_CheckChild0Type, MVT::i1,
/*26961*/   OPC_RecordChild1, // #1 = $src1
/*26962*/   OPC_RecordChild2, // #2 = $src0
/*26963*/   OPC_SwitchType /*3 cases */, 28,  MVT::i32,// ->26994
/*26966*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26968*/     OPC_EmitInteger, MVT::i32, 0, 
/*26971*/     OPC_EmitInteger, MVT::i32, 0, 
/*26974*/     OPC_EmitInteger, MVT::i32, 0, 
/*26977*/     OPC_EmitInteger, MVT::i32, 0, 
/*26980*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:i32 i1:i1:$src2, i32:i32:$src1, i32:i32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:i32 i32:i32:$src0, i32:i32:$src1, i1:i1:$src2)
            /*SwitchType*/ 28,  MVT::f32,// ->27024
/*26996*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*26998*/     OPC_EmitInteger, MVT::i32, 0, 
/*27001*/     OPC_EmitInteger, MVT::i32, 0, 
/*27004*/     OPC_EmitInteger, MVT::i32, 0, 
/*27007*/     OPC_EmitInteger, MVT::i32, 0, 
/*27010*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 2, 1, 0, 3, 4, 5, 6, 
              // Src: (select:f32 i1:i1:$src2, f32:f32:$src1, f32:f32:$src0) - Complexity = 3
              // Dst: (V_CNDMASK_B32_e64:f32 ?:f32:$src0, ?:f32:$src1, ?:i1:$src2)
            /*SwitchType*/ 7|128,1/*135*/,  MVT::f64,// ->27162
/*27027*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27029*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #3
/*27036*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*27039*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4,  // Results = #5
/*27048*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*27051*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*27060*/     OPC_EmitInteger, MVT::i32, 0, 
/*27063*/     OPC_EmitInteger, MVT::i32, 0, 
/*27066*/     OPC_EmitInteger, MVT::i32, 0, 
/*27069*/     OPC_EmitInteger, MVT::i32, 0, 
/*27072*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 5, 7, 0, 8, 9, 10, 11,  // Results = #12
/*27086*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*27089*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 12, 13,  // Results = #14
/*27099*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*27102*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 15,  // Results = #16
/*27111*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*27114*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 17,  // Results = #18
/*27123*/     OPC_EmitInteger, MVT::i32, 0, 
/*27126*/     OPC_EmitInteger, MVT::i32, 0, 
/*27129*/     OPC_EmitInteger, MVT::i32, 0, 
/*27132*/     OPC_EmitInteger, MVT::i32, 0, 
/*27135*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                  1/*#VTs*/, MVT::i32, 7/*#Ops*/, 16, 18, 0, 19, 20, 21, 22,  // Results = #23
/*27149*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*27152*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 14, 23, 24, 
              // Src: (select:f64 i1:i1:$src2, f64:f64:$src1, f64:f64:$src0) - Complexity = 3
              // Dst: (INSERT_SUBREG:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), (V_CNDMASK_B32_e64:i32 (EXTRACT_SUBREG:i32 ?:f64:$src0, sub0:i32), (EXTRACT_SUBREG:i32 ?:f64:$src1, sub0:i32), ?:i1:$src2), sub0:i32), (V_CNDMASK_B32_e64:i32 (EXTRACT_SUBREG:i32 ?:f64:$src0, sub1:i32), (EXTRACT_SUBREG:i32 ?:f64:$src1, sub1:i32), ?:i1:$src2), sub1:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SIGN_EXTEND),// ->27214
/*27166*/   OPC_RecordChild0, // #0 = $src0
/*27167*/   OPC_CheckChild0Type, MVT::i1,
/*27169*/   OPC_CheckType, MVT::i32,
/*27171*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27173*/   OPC_EmitInteger, MVT::i32, 0, 
/*27176*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27188*/   OPC_EmitInteger, MVT::i32, 0, 
/*27191*/   OPC_EmitInteger, MVT::i32, 0, 
/*27194*/   OPC_EmitInteger, MVT::i32, 0, 
/*27197*/   OPC_EmitInteger, MVT::i32, 0, 
/*27200*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CNDMASK_B32_e64), 0,
                1/*#VTs*/, MVT::i32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
            // Src: (sext:i32 i1:i1:$src0) - Complexity = 3
            // Dst: (V_CNDMASK_B32_e64:i32 0:i32, -1:i32, ?:i1:$src0)
          /*SwitchOpcode*/ 55|128,6/*823*/,  TARGET_VAL(ISD::FDIV),// ->28041
/*27218*/   OPC_Scope, 115|128,1/*243*/, /*->27464*/ // 2 children in Scope
/*27221*/     OPC_MoveChild, 0,
/*27223*/     OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*27226*/     OPC_CheckPredicate, 8, // Predicate_FP_ONE
/*27228*/     OPC_MoveParent,
/*27229*/     OPC_RecordChild1, // #0 = $src0
/*27230*/     OPC_SwitchType /*2 cases */, 89|128,1/*217*/,  MVT::f32,// ->27451
/*27234*/       OPC_Scope, 67, /*->27303*/ // 4 children in Scope
/*27236*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*27238*/         OPC_EmitInteger, MVT::i32, 1, 
/*27241*/         OPC_EmitInteger, MVT::i32, 0, 
/*27244*/         OPC_EmitInteger, MVT::i32, 0, 
/*27247*/         OPC_EmitInteger, MVT::i32, 0, 
/*27250*/         OPC_EmitInteger, MVT::i32, 0, 
/*27253*/         OPC_EmitInteger, MVT::i32, 0, 
/*27256*/         OPC_EmitInteger, MVT::i32, 0, 
/*27259*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27271*/         OPC_EmitInteger, MVT::i32, 1, 
/*27274*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27277*/         OPC_EmitInteger, MVT::i32, 0, 
/*27280*/         OPC_EmitInteger, MVT::i32, 0, 
/*27283*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_r600:f32 f32:f32:$src0)
/*27303*/       /*Scope*/ 67, /*->27371*/
/*27304*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*27306*/         OPC_EmitInteger, MVT::i32, 1, 
/*27309*/         OPC_EmitInteger, MVT::i32, 0, 
/*27312*/         OPC_EmitInteger, MVT::i32, 0, 
/*27315*/         OPC_EmitInteger, MVT::i32, 0, 
/*27318*/         OPC_EmitInteger, MVT::i32, 0, 
/*27321*/         OPC_EmitInteger, MVT::i32, 0, 
/*27324*/         OPC_EmitInteger, MVT::i32, 0, 
/*27327*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27339*/         OPC_EmitInteger, MVT::i32, 1, 
/*27342*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27345*/         OPC_EmitInteger, MVT::i32, 0, 
/*27348*/         OPC_EmitInteger, MVT::i32, 0, 
/*27351*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_eg:f32 f32:f32:$src0)
/*27371*/       /*Scope*/ 67, /*->27439*/
/*27372*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*27374*/         OPC_EmitInteger, MVT::i32, 1, 
/*27377*/         OPC_EmitInteger, MVT::i32, 0, 
/*27380*/         OPC_EmitInteger, MVT::i32, 0, 
/*27383*/         OPC_EmitInteger, MVT::i32, 0, 
/*27386*/         OPC_EmitInteger, MVT::i32, 0, 
/*27389*/         OPC_EmitInteger, MVT::i32, 0, 
/*27392*/         OPC_EmitInteger, MVT::i32, 0, 
/*27395*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27407*/         OPC_EmitInteger, MVT::i32, 1, 
/*27410*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27413*/         OPC_EmitInteger, MVT::i32, 0, 
/*27416*/         OPC_EmitInteger, MVT::i32, 0, 
/*27419*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                      1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (RECIP_IEEE_cm:f32 f32:f32:$src0)
/*27439*/       /*Scope*/ 10, /*->27450*/
/*27440*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27442*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fdiv:f32 (fpimm:f32)<<P:Predicate_FP_ONE>>, f32:f32:$src0) - Complexity = 7
                  // Dst: (V_RCP_F32_e32:f32 f32:f32:$src0)
/*27450*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::f64,// ->27463
/*27453*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27455*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RCP_F64_e32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fdiv:f64 (fpimm:f64)<<P:Predicate_FP_ONE>>, f64:f64:$src0) - Complexity = 7
                // Dst: (V_RCP_F64_e32:f64 f64:f64:$src0)
              0, // EndSwitchType
/*27464*/   /*Scope*/ 62|128,4/*574*/, /*->28040*/
/*27466*/     OPC_RecordChild0, // #0 = $src0
/*27467*/     OPC_RecordChild1, // #1 = $src1
/*27468*/     OPC_SwitchType /*2 cases */, 14|128,4/*526*/,  MVT::f32,// ->27998
/*27472*/       OPC_Scope, 38|128,1/*166*/, /*->27641*/ // 4 children in Scope
/*27475*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*27477*/         OPC_EmitInteger, MVT::i32, 0, 
/*27480*/         OPC_EmitInteger, MVT::i32, 0, 
/*27483*/         OPC_EmitInteger, MVT::i32, 1, 
/*27486*/         OPC_EmitInteger, MVT::i32, 0, 
/*27489*/         OPC_EmitInteger, MVT::i32, 0, 
/*27492*/         OPC_EmitInteger, MVT::i32, 0, 
/*27495*/         OPC_EmitInteger, MVT::i32, 0, 
/*27498*/         OPC_EmitInteger, MVT::i32, 0, 
/*27501*/         OPC_EmitInteger, MVT::i32, 0, 
/*27504*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27516*/         OPC_EmitInteger, MVT::i32, 1, 
/*27519*/         OPC_EmitInteger, MVT::i32, 0, 
/*27522*/         OPC_EmitInteger, MVT::i32, 0, 
/*27525*/         OPC_EmitInteger, MVT::i32, 0, 
/*27528*/         OPC_EmitInteger, MVT::i32, 0, 
/*27531*/         OPC_EmitInteger, MVT::i32, 0, 
/*27534*/         OPC_EmitInteger, MVT::i32, 0, 
/*27537*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27549*/         OPC_EmitInteger, MVT::i32, 1, 
/*27552*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27555*/         OPC_EmitInteger, MVT::i32, 0, 
/*27558*/         OPC_EmitInteger, MVT::i32, 0, 
/*27561*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_r600), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*27581*/         OPC_EmitInteger, MVT::i32, 0, 
/*27584*/         OPC_EmitInteger, MVT::i32, 0, 
/*27587*/         OPC_EmitInteger, MVT::i32, 0, 
/*27590*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27602*/         OPC_EmitInteger, MVT::i32, 1, 
/*27605*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27608*/         OPC_EmitInteger, MVT::i32, 0, 
/*27611*/         OPC_EmitInteger, MVT::i32, 0, 
/*27614*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_r600:i32 ?:f32:$src1))
/*27641*/       /*Scope*/ 38|128,1/*166*/, /*->27809*/
/*27643*/         OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*27645*/         OPC_EmitInteger, MVT::i32, 0, 
/*27648*/         OPC_EmitInteger, MVT::i32, 0, 
/*27651*/         OPC_EmitInteger, MVT::i32, 1, 
/*27654*/         OPC_EmitInteger, MVT::i32, 0, 
/*27657*/         OPC_EmitInteger, MVT::i32, 0, 
/*27660*/         OPC_EmitInteger, MVT::i32, 0, 
/*27663*/         OPC_EmitInteger, MVT::i32, 0, 
/*27666*/         OPC_EmitInteger, MVT::i32, 0, 
/*27669*/         OPC_EmitInteger, MVT::i32, 0, 
/*27672*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27684*/         OPC_EmitInteger, MVT::i32, 1, 
/*27687*/         OPC_EmitInteger, MVT::i32, 0, 
/*27690*/         OPC_EmitInteger, MVT::i32, 0, 
/*27693*/         OPC_EmitInteger, MVT::i32, 0, 
/*27696*/         OPC_EmitInteger, MVT::i32, 0, 
/*27699*/         OPC_EmitInteger, MVT::i32, 0, 
/*27702*/         OPC_EmitInteger, MVT::i32, 0, 
/*27705*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27717*/         OPC_EmitInteger, MVT::i32, 1, 
/*27720*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27723*/         OPC_EmitInteger, MVT::i32, 0, 
/*27726*/         OPC_EmitInteger, MVT::i32, 0, 
/*27729*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_eg), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*27749*/         OPC_EmitInteger, MVT::i32, 0, 
/*27752*/         OPC_EmitInteger, MVT::i32, 0, 
/*27755*/         OPC_EmitInteger, MVT::i32, 0, 
/*27758*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27770*/         OPC_EmitInteger, MVT::i32, 1, 
/*27773*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27776*/         OPC_EmitInteger, MVT::i32, 0, 
/*27779*/         OPC_EmitInteger, MVT::i32, 0, 
/*27782*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_eg:i32 ?:f32:$src1))
/*27809*/       /*Scope*/ 38|128,1/*166*/, /*->27977*/
/*27811*/         OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*27813*/         OPC_EmitInteger, MVT::i32, 0, 
/*27816*/         OPC_EmitInteger, MVT::i32, 0, 
/*27819*/         OPC_EmitInteger, MVT::i32, 1, 
/*27822*/         OPC_EmitInteger, MVT::i32, 0, 
/*27825*/         OPC_EmitInteger, MVT::i32, 0, 
/*27828*/         OPC_EmitInteger, MVT::i32, 0, 
/*27831*/         OPC_EmitInteger, MVT::i32, 0, 
/*27834*/         OPC_EmitInteger, MVT::i32, 0, 
/*27837*/         OPC_EmitInteger, MVT::i32, 0, 
/*27840*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27852*/         OPC_EmitInteger, MVT::i32, 1, 
/*27855*/         OPC_EmitInteger, MVT::i32, 0, 
/*27858*/         OPC_EmitInteger, MVT::i32, 0, 
/*27861*/         OPC_EmitInteger, MVT::i32, 0, 
/*27864*/         OPC_EmitInteger, MVT::i32, 0, 
/*27867*/         OPC_EmitInteger, MVT::i32, 0, 
/*27870*/         OPC_EmitInteger, MVT::i32, 0, 
/*27873*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27885*/         OPC_EmitInteger, MVT::i32, 1, 
/*27888*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27891*/         OPC_EmitInteger, MVT::i32, 0, 
/*27894*/         OPC_EmitInteger, MVT::i32, 0, 
/*27897*/         OPC_EmitNode, TARGET_VAL(AMDGPU::RECIP_IEEE_cm), 0,
                      1/*#VTs*/, MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/*27917*/         OPC_EmitInteger, MVT::i32, 0, 
/*27920*/         OPC_EmitInteger, MVT::i32, 0, 
/*27923*/         OPC_EmitInteger, MVT::i32, 0, 
/*27926*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*27938*/         OPC_EmitInteger, MVT::i32, 1, 
/*27941*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*27944*/         OPC_EmitInteger, MVT::i32, 0, 
/*27947*/         OPC_EmitInteger, MVT::i32, 0, 
/*27950*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                      1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:f32 ?:f32:$src0, (RECIP_IEEE_cm:i32 ?:f32:$src1))
/*27977*/       /*Scope*/ 19, /*->27997*/
/*27978*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*27980*/         OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_F32_e32), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*27988*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 2, 
                  // Src: (fdiv:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                  // Dst: (V_MUL_F32_e32:f32 ?:f32:$src0, (V_RCP_F32_e32:i32 ?:f32:$src1))
/*27997*/       0, /*End of Scope*/
              /*SwitchType*/ 39,  MVT::f64,// ->28039
/*28000*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28002*/       OPC_EmitNode, TARGET_VAL(AMDGPU::V_RCP_F64_e32), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1,  // Results = #2
/*28010*/       OPC_EmitInteger, MVT::i64, 0, 
/*28013*/       OPC_EmitInteger, MVT::i32, 0, 
/*28016*/       OPC_EmitInteger, MVT::i32, 0, 
/*28019*/       OPC_EmitInteger, MVT::i32, 0, 
/*28022*/       OPC_EmitInteger, MVT::i32, 0, 
/*28025*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F64), 0,
                    1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 2, 3, 4, 5, 6, 7, 
                // Src: (fdiv:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
                // Dst: (V_MUL_F64:f64 ?:f64:$src0, (V_RCP_F64_e32:i64 ?:f64:$src1), 0:i64)
              0, // EndSwitchType
/*28040*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(AMDGPUISD::LOAD_CONSTANT),// ->28112
/*28044*/   OPC_RecordMemRef,
/*28045*/   OPC_RecordChild0, // #0 = $sbase
/*28046*/   OPC_RecordChild1, // #1 = $offset
/*28047*/   OPC_Scope, 50, /*->28099*/ // 2 children in Scope
/*28049*/     OPC_MoveChild, 1,
/*28051*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*28054*/     OPC_Scope, 19, /*->28075*/ // 2 children in Scope
/*28056*/       OPC_CheckPredicate, 21, // Predicate_IMM8bitDWORD
/*28058*/       OPC_MoveParent,
/*28059*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28061*/       OPC_EmitConvertToTarget, 1,
/*28063*/       OPC_EmitNodeXForm, 0, 2, // anonymous.val.393
/*28066*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_IMM), 0|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (SIload_constant:f32 i128:i128:$sbase, (imm:i32)<<P:Predicate_IMM8bitDWORD>><<X:anonymous.val.393>>:$offset) - Complexity = 7
                // Dst: (S_BUFFER_LOAD_DWORD_IMM:f32 ?:i128:$sbase, (anonymous.val.393:i32 (imm:i32)<<P:Predicate_IMM8bitDWORD>>:$offset))
/*28075*/     /*Scope*/ 22, /*->28098*/
/*28076*/       OPC_MoveParent,
/*28077*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28079*/       OPC_EmitConvertToTarget, 1,
/*28081*/       OPC_EmitNode, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*28089*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BUFFER_LOAD_DWORD_SGPR), 0|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 3, 
                // Src: (SIload_constant:f32 i128:i128:$sbase, (imm:i32):$offset) - Complexity = 6
                // Dst: (S_BUFFER_LOAD_DWORD_SGPR:f32 ?:i128:$sbase, (S_MOV_B32:i32 (imm:i32):$offset))
/*28098*/     0, /*End of Scope*/
/*28099*/   /*Scope*/ 11, /*->28111*/
/*28100*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28102*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_DWORD_OFFEN), 0|OPFL_MemRefs,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (SIload_constant:f32 i128:i128:$sbase, i32:i32:$voff) - Complexity = 3
              // Dst: (BUFFER_LOAD_DWORD_OFFEN:f32 ?:i128:$sbase, ?:i32:$voff)
/*28111*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,5/*650*/,  TARGET_VAL(ISD::FADD),// ->28766
/*28116*/   OPC_Scope, 114|128,1/*242*/, /*->28361*/ // 2 children in Scope
/*28119*/     OPC_MoveChild, 0,
/*28121*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*28124*/     OPC_RecordChild0, // #0 = $src0
/*28125*/     OPC_RecordChild1, // #1 = $src1
/*28126*/     OPC_MoveParent,
/*28127*/     OPC_RecordChild1, // #2 = $src2
/*28128*/     OPC_CheckType, MVT::f32,
/*28130*/     OPC_Scope, 99, /*->28231*/ // 3 children in Scope
/*28132*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*28134*/       OPC_EmitInteger, MVT::i32, 0, 
/*28137*/       OPC_EmitInteger, MVT::i32, 0, 
/*28140*/       OPC_EmitInteger, MVT::i32, 0, 
/*28143*/       OPC_EmitInteger, MVT::i32, 0, 
/*28146*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28158*/       OPC_EmitInteger, MVT::i32, 0, 
/*28161*/       OPC_EmitInteger, MVT::i32, 0, 
/*28164*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28176*/       OPC_EmitInteger, MVT::i32, 0, 
/*28179*/       OPC_EmitInteger, MVT::i32, 0, 
/*28182*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28194*/       OPC_EmitInteger, MVT::i32, 1, 
/*28197*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28200*/       OPC_EmitInteger, MVT::i32, 0, 
/*28203*/       OPC_EmitInteger, MVT::i32, 0, 
/*28206*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*28231*/     /*Scope*/ 99, /*->28331*/
/*28232*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*28234*/       OPC_EmitInteger, MVT::i32, 0, 
/*28237*/       OPC_EmitInteger, MVT::i32, 0, 
/*28240*/       OPC_EmitInteger, MVT::i32, 0, 
/*28243*/       OPC_EmitInteger, MVT::i32, 0, 
/*28246*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28258*/       OPC_EmitInteger, MVT::i32, 0, 
/*28261*/       OPC_EmitInteger, MVT::i32, 0, 
/*28264*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28276*/       OPC_EmitInteger, MVT::i32, 0, 
/*28279*/       OPC_EmitInteger, MVT::i32, 0, 
/*28282*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28294*/       OPC_EmitInteger, MVT::i32, 1, 
/*28297*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28300*/       OPC_EmitInteger, MVT::i32, 0, 
/*28303*/       OPC_EmitInteger, MVT::i32, 0, 
/*28306*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                    1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*28331*/     /*Scope*/ 28, /*->28360*/
/*28332*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28334*/       OPC_EmitInteger, MVT::i32, 0, 
/*28337*/       OPC_EmitInteger, MVT::i32, 0, 
/*28340*/       OPC_EmitInteger, MVT::i32, 0, 
/*28343*/       OPC_EmitInteger, MVT::i32, 0, 
/*28346*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                    1/*#VTs*/, MVT::f32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                // Src: (fadd:f32 (fmul:f32 f32:f32:$src0, f32:f32:$src1), f32:f32:$src2) - Complexity = 6
                // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*28360*/     0, /*End of Scope*/
/*28361*/   /*Scope*/ 18|128,3/*402*/, /*->28765*/
/*28363*/     OPC_RecordChild0, // #0 = $src2
/*28364*/     OPC_Scope, 113|128,1/*241*/, /*->28608*/ // 2 children in Scope
/*28367*/       OPC_MoveChild, 1,
/*28369*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*28372*/       OPC_RecordChild0, // #1 = $src0
/*28373*/       OPC_RecordChild1, // #2 = $src1
/*28374*/       OPC_MoveParent,
/*28375*/       OPC_CheckType, MVT::f32,
/*28377*/       OPC_Scope, 99, /*->28478*/ // 3 children in Scope
/*28379*/         OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*28381*/         OPC_EmitInteger, MVT::i32, 0, 
/*28384*/         OPC_EmitInteger, MVT::i32, 0, 
/*28387*/         OPC_EmitInteger, MVT::i32, 0, 
/*28390*/         OPC_EmitInteger, MVT::i32, 0, 
/*28393*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28405*/         OPC_EmitInteger, MVT::i32, 0, 
/*28408*/         OPC_EmitInteger, MVT::i32, 0, 
/*28411*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28423*/         OPC_EmitInteger, MVT::i32, 0, 
/*28426*/         OPC_EmitInteger, MVT::i32, 0, 
/*28429*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28441*/         OPC_EmitInteger, MVT::i32, 1, 
/*28444*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28447*/         OPC_EmitInteger, MVT::i32, 0, 
/*28450*/         OPC_EmitInteger, MVT::i32, 0, 
/*28453*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_r600), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_r600:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*28478*/       /*Scope*/ 99, /*->28578*/
/*28479*/         OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*28481*/         OPC_EmitInteger, MVT::i32, 0, 
/*28484*/         OPC_EmitInteger, MVT::i32, 0, 
/*28487*/         OPC_EmitInteger, MVT::i32, 0, 
/*28490*/         OPC_EmitInteger, MVT::i32, 0, 
/*28493*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28505*/         OPC_EmitInteger, MVT::i32, 0, 
/*28508*/         OPC_EmitInteger, MVT::i32, 0, 
/*28511*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28523*/         OPC_EmitInteger, MVT::i32, 0, 
/*28526*/         OPC_EmitInteger, MVT::i32, 0, 
/*28529*/         OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28541*/         OPC_EmitInteger, MVT::i32, 1, 
/*28544*/         OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28547*/         OPC_EmitInteger, MVT::i32, 0, 
/*28550*/         OPC_EmitInteger, MVT::i32, 0, 
/*28553*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MULADD_IEEE_eg), 0,
                      1/*#VTs*/, MVT::f32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (MULADD_IEEE_eg:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
/*28578*/       /*Scope*/ 28, /*->28607*/
/*28579*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28581*/         OPC_EmitInteger, MVT::i32, 0, 
/*28584*/         OPC_EmitInteger, MVT::i32, 0, 
/*28587*/         OPC_EmitInteger, MVT::i32, 0, 
/*28590*/         OPC_EmitInteger, MVT::i32, 0, 
/*28593*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAD_F32), 0,
                      1/*#VTs*/, MVT::f32, 7/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 
                  // Src: (fadd:f32 f32:f32:$src2, (fmul:f32 f32:f32:$src0, f32:f32:$src1)) - Complexity = 6
                  // Dst: (V_MAD_F32:f32 ?:f32:$src0, ?:f32:$src1, ?:f32:$src2)
/*28607*/       0, /*End of Scope*/
/*28608*/     /*Scope*/ 26|128,1/*154*/, /*->28764*/
/*28610*/       OPC_RecordChild1, // #1 = $src1
/*28611*/       OPC_SwitchType /*2 cases */, 116,  MVT::f32,// ->28730
/*28614*/         OPC_Scope, 101, /*->28717*/ // 2 children in Scope
/*28616*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*28618*/           OPC_EmitInteger, MVT::i32, 0, 
/*28621*/           OPC_EmitInteger, MVT::i32, 0, 
/*28624*/           OPC_EmitInteger, MVT::i32, 1, 
/*28627*/           OPC_EmitInteger, MVT::i32, 0, 
/*28630*/           OPC_EmitInteger, MVT::i32, 0, 
/*28633*/           OPC_EmitInteger, MVT::i32, 0, 
/*28636*/           OPC_EmitInteger, MVT::i32, 0, 
/*28639*/           OPC_EmitInteger, MVT::i32, 0, 
/*28642*/           OPC_EmitInteger, MVT::i32, 0, 
/*28645*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28657*/           OPC_EmitInteger, MVT::i32, 0, 
/*28660*/           OPC_EmitInteger, MVT::i32, 0, 
/*28663*/           OPC_EmitInteger, MVT::i32, 0, 
/*28666*/           OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28678*/           OPC_EmitInteger, MVT::i32, 1, 
/*28681*/           OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28684*/           OPC_EmitInteger, MVT::i32, 0, 
/*28687*/           OPC_EmitInteger, MVT::i32, 0, 
/*28690*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::ADD), 0,
                        1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (fadd:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
                    // Dst: (ADD:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*28717*/         /*Scope*/ 11, /*->28729*/
/*28718*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28720*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e32), 0,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                    // Dst: (V_ADD_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*28729*/         0, /*End of Scope*/
                /*SwitchType*/ 31,  MVT::f64,// ->28763
/*28732*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28734*/         OPC_EmitInteger, MVT::i64, 0, 
/*28737*/         OPC_EmitInteger, MVT::i32, 0, 
/*28740*/         OPC_EmitInteger, MVT::i32, 0, 
/*28743*/         OPC_EmitInteger, MVT::i32, 0, 
/*28746*/         OPC_EmitInteger, MVT::i32, 0, 
/*28749*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F64), 0,
                      1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
                  // Src: (fadd:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
                  // Dst: (V_ADD_F64:f64 ?:f64:$src0, ?:f64:$src1, 0:i64)
                0, // EndSwitchType
/*28764*/     0, /*End of Scope*/
/*28765*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::ConstantFP),// ->28883
/*28769*/   OPC_RecordNode,   // #0 = $imm
/*28770*/   OPC_SwitchType /*2 cases */, 46,  MVT::f32,// ->28819
/*28773*/     OPC_Scope, 14, /*->28789*/ // 2 children in Scope
/*28775*/       OPC_CheckPredicate, 47, // Predicate_anonymous.val.395
/*28777*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28779*/       OPC_EmitConvertToTarget, 0,
/*28781*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_MOV_B32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_anonymous.val.395>>:$imm - Complexity = 4
                // Dst: (S_MOV_B32:f32 (fpimm:f32):$imm)
/*28789*/     /*Scope*/ 28, /*->28818*/
/*28790*/       OPC_Scope, 12, /*->28804*/ // 2 children in Scope
/*28792*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28794*/         OPC_EmitConvertToTarget, 0,
/*28796*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                  // Src: (fpimm:f32):$imm - Complexity = 3
                  // Dst: (V_MOV_B32_e32:f32 (fpimm:f32):$imm)
/*28804*/       /*Scope*/ 12, /*->28817*/
/*28805*/         OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*28807*/         OPC_EmitConvertToTarget, 0,
/*28809*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MOV_IMM_F32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                  // Src: (fpimm:f32):$val - Complexity = 3
                  // Dst: (MOV_IMM_F32:f32 (fpimm:f32):$val)
/*28817*/       0, /*End of Scope*/
/*28818*/     0, /*End of Scope*/
            /*SwitchType*/ 61,  MVT::f64,// ->28882
/*28821*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28823*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #1
/*28830*/     OPC_EmitConvertToTarget, 0,
/*28832*/     OPC_EmitNodeXForm, 4, 2, // LO32f
/*28835*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*28843*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*28846*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 4, 5,  // Results = #6
/*28856*/     OPC_EmitConvertToTarget, 0,
/*28858*/     OPC_EmitNodeXForm, 5, 7, // HI32f
/*28861*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/*28869*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*28872*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 6, 9, 10, 
              // Src: (fpimm:f64):$imm - Complexity = 3
              // Dst: (INSERT_SUBREG:f64 (INSERT_SUBREG:f64 (IMPLICIT_DEF:f64), (V_MOV_B32_e32:i32 (LO32f:f32 (fpimm:f64):$imm)), sub0:i32), (V_MOV_B32_e32:i32 (HI32f:f32 (fpimm:f64):$imm)), sub1:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 27|128,1/*155*/,  TARGET_VAL(ISD::FMUL),// ->29042
/*28887*/   OPC_RecordChild0, // #0 = $src0
/*28888*/   OPC_RecordChild1, // #1 = $src1
/*28889*/   OPC_SwitchType /*2 cases */, 116,  MVT::f32,// ->29008
/*28892*/     OPC_Scope, 101, /*->28995*/ // 2 children in Scope
/*28894*/       OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*28896*/       OPC_EmitInteger, MVT::i32, 0, 
/*28899*/       OPC_EmitInteger, MVT::i32, 0, 
/*28902*/       OPC_EmitInteger, MVT::i32, 1, 
/*28905*/       OPC_EmitInteger, MVT::i32, 0, 
/*28908*/       OPC_EmitInteger, MVT::i32, 0, 
/*28911*/       OPC_EmitInteger, MVT::i32, 0, 
/*28914*/       OPC_EmitInteger, MVT::i32, 0, 
/*28917*/       OPC_EmitInteger, MVT::i32, 0, 
/*28920*/       OPC_EmitInteger, MVT::i32, 0, 
/*28923*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28935*/       OPC_EmitInteger, MVT::i32, 0, 
/*28938*/       OPC_EmitInteger, MVT::i32, 0, 
/*28941*/       OPC_EmitInteger, MVT::i32, 0, 
/*28944*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*28956*/       OPC_EmitInteger, MVT::i32, 1, 
/*28959*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*28962*/       OPC_EmitInteger, MVT::i32, 0, 
/*28965*/       OPC_EmitInteger, MVT::i32, 0, 
/*28968*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL_IEEE), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (fmul:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
                // Dst: (MUL_IEEE:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*28995*/     /*Scope*/ 11, /*->29007*/
/*28996*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*28998*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
                // Dst: (V_MUL_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*29007*/     0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::f64,// ->29041
/*29010*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29012*/     OPC_EmitInteger, MVT::i64, 0, 
/*29015*/     OPC_EmitInteger, MVT::i32, 0, 
/*29018*/     OPC_EmitInteger, MVT::i32, 0, 
/*29021*/     OPC_EmitInteger, MVT::i32, 0, 
/*29024*/     OPC_EmitInteger, MVT::i32, 0, 
/*29027*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MUL_F64), 0,
                  1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (fmul:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
              // Dst: (V_MUL_F64:f64 ?:f64:$src0, ?:f64:$src1, 0:i64)
            0, // EndSwitchType
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::FMAX),// ->29165
/*29045*/   OPC_RecordChild0, // #0 = $src0
/*29046*/   OPC_RecordChild1, // #1 = $src1
/*29047*/   OPC_CheckType, MVT::f32,
/*29049*/   OPC_Scope, 101, /*->29152*/ // 2 children in Scope
/*29051*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29053*/     OPC_EmitInteger, MVT::i32, 0, 
/*29056*/     OPC_EmitInteger, MVT::i32, 0, 
/*29059*/     OPC_EmitInteger, MVT::i32, 1, 
/*29062*/     OPC_EmitInteger, MVT::i32, 0, 
/*29065*/     OPC_EmitInteger, MVT::i32, 0, 
/*29068*/     OPC_EmitInteger, MVT::i32, 0, 
/*29071*/     OPC_EmitInteger, MVT::i32, 0, 
/*29074*/     OPC_EmitInteger, MVT::i32, 0, 
/*29077*/     OPC_EmitInteger, MVT::i32, 0, 
/*29080*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29092*/     OPC_EmitInteger, MVT::i32, 0, 
/*29095*/     OPC_EmitInteger, MVT::i32, 0, 
/*29098*/     OPC_EmitInteger, MVT::i32, 0, 
/*29101*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29113*/     OPC_EmitInteger, MVT::i32, 1, 
/*29116*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29119*/     OPC_EmitInteger, MVT::i32, 0, 
/*29122*/     OPC_EmitInteger, MVT::i32, 0, 
/*29125*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MAX), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MAX:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*29152*/   /*Scope*/ 11, /*->29164*/
/*29153*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29155*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MAX_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmax:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MAX_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*29164*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(AMDGPUISD::FMIN),// ->29288
/*29168*/   OPC_RecordChild0, // #0 = $src0
/*29169*/   OPC_RecordChild1, // #1 = $src1
/*29170*/   OPC_CheckType, MVT::f32,
/*29172*/   OPC_Scope, 101, /*->29275*/ // 2 children in Scope
/*29174*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29176*/     OPC_EmitInteger, MVT::i32, 0, 
/*29179*/     OPC_EmitInteger, MVT::i32, 0, 
/*29182*/     OPC_EmitInteger, MVT::i32, 1, 
/*29185*/     OPC_EmitInteger, MVT::i32, 0, 
/*29188*/     OPC_EmitInteger, MVT::i32, 0, 
/*29191*/     OPC_EmitInteger, MVT::i32, 0, 
/*29194*/     OPC_EmitInteger, MVT::i32, 0, 
/*29197*/     OPC_EmitInteger, MVT::i32, 0, 
/*29200*/     OPC_EmitInteger, MVT::i32, 0, 
/*29203*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29215*/     OPC_EmitInteger, MVT::i32, 0, 
/*29218*/     OPC_EmitInteger, MVT::i32, 0, 
/*29221*/     OPC_EmitInteger, MVT::i32, 0, 
/*29224*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29236*/     OPC_EmitInteger, MVT::i32, 1, 
/*29239*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29242*/     OPC_EmitInteger, MVT::i32, 0, 
/*29245*/     OPC_EmitInteger, MVT::i32, 0, 
/*29248*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MIN), 0,
                  1/*#VTs*/, MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1) - Complexity = 3
              // Dst: (MIN:f32 R600_Reg32:f32:$src0, R600_Reg32:f32:$src1)
/*29275*/   /*Scope*/ 11, /*->29287*/
/*29276*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29278*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_MIN_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (AMDGPUfmin:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_MIN_LEGACY_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
/*29287*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(AMDGPUISD::FRACT),// ->29375
/*29291*/   OPC_RecordChild0, // #0 = $src0
/*29292*/   OPC_CheckType, MVT::f32,
/*29294*/   OPC_Scope, 67, /*->29363*/ // 2 children in Scope
/*29296*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29298*/     OPC_EmitInteger, MVT::i32, 1, 
/*29301*/     OPC_EmitInteger, MVT::i32, 0, 
/*29304*/     OPC_EmitInteger, MVT::i32, 0, 
/*29307*/     OPC_EmitInteger, MVT::i32, 0, 
/*29310*/     OPC_EmitInteger, MVT::i32, 0, 
/*29313*/     OPC_EmitInteger, MVT::i32, 0, 
/*29316*/     OPC_EmitInteger, MVT::i32, 0, 
/*29319*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29331*/     OPC_EmitInteger, MVT::i32, 1, 
/*29334*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29337*/     OPC_EmitInteger, MVT::i32, 0, 
/*29340*/     OPC_EmitInteger, MVT::i32, 0, 
/*29343*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FRACT), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FRACT:f32 R600_Reg32:f32:$src0)
/*29363*/   /*Scope*/ 10, /*->29374*/
/*29364*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29366*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FRACT_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (AMDGPUfract:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FRACT_F32_e32:f32 f32:f32:$src0)
/*29374*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FCEIL),// ->29462
/*29378*/   OPC_RecordChild0, // #0 = $src0
/*29379*/   OPC_CheckType, MVT::f32,
/*29381*/   OPC_Scope, 67, /*->29450*/ // 2 children in Scope
/*29383*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29385*/     OPC_EmitInteger, MVT::i32, 1, 
/*29388*/     OPC_EmitInteger, MVT::i32, 0, 
/*29391*/     OPC_EmitInteger, MVT::i32, 0, 
/*29394*/     OPC_EmitInteger, MVT::i32, 0, 
/*29397*/     OPC_EmitInteger, MVT::i32, 0, 
/*29400*/     OPC_EmitInteger, MVT::i32, 0, 
/*29403*/     OPC_EmitInteger, MVT::i32, 0, 
/*29406*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29418*/     OPC_EmitInteger, MVT::i32, 1, 
/*29421*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29424*/     OPC_EmitInteger, MVT::i32, 0, 
/*29427*/     OPC_EmitInteger, MVT::i32, 0, 
/*29430*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::CEIL), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (CEIL:f32 R600_Reg32:f32:$src0)
/*29450*/   /*Scope*/ 10, /*->29461*/
/*29451*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29453*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CEIL_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_CEIL_F32_e32:f32 f32:f32:$src0)
/*29461*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FRINT),// ->29549
/*29465*/   OPC_RecordChild0, // #0 = $src0
/*29466*/   OPC_CheckType, MVT::f32,
/*29468*/   OPC_Scope, 67, /*->29537*/ // 2 children in Scope
/*29470*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29472*/     OPC_EmitInteger, MVT::i32, 1, 
/*29475*/     OPC_EmitInteger, MVT::i32, 0, 
/*29478*/     OPC_EmitInteger, MVT::i32, 0, 
/*29481*/     OPC_EmitInteger, MVT::i32, 0, 
/*29484*/     OPC_EmitInteger, MVT::i32, 0, 
/*29487*/     OPC_EmitInteger, MVT::i32, 0, 
/*29490*/     OPC_EmitInteger, MVT::i32, 0, 
/*29493*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29505*/     OPC_EmitInteger, MVT::i32, 1, 
/*29508*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29511*/     OPC_EmitInteger, MVT::i32, 0, 
/*29514*/     OPC_EmitInteger, MVT::i32, 0, 
/*29517*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RNDNE), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (RNDNE:f32 R600_Reg32:f32:$src0)
/*29537*/   /*Scope*/ 10, /*->29548*/
/*29538*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29540*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_RNDNE_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_RNDNE_F32_e32:f32 f32:f32:$src0)
/*29548*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::FFLOOR),// ->29636
/*29552*/   OPC_RecordChild0, // #0 = $src0
/*29553*/   OPC_CheckType, MVT::f32,
/*29555*/   OPC_Scope, 67, /*->29624*/ // 2 children in Scope
/*29557*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29559*/     OPC_EmitInteger, MVT::i32, 1, 
/*29562*/     OPC_EmitInteger, MVT::i32, 0, 
/*29565*/     OPC_EmitInteger, MVT::i32, 0, 
/*29568*/     OPC_EmitInteger, MVT::i32, 0, 
/*29571*/     OPC_EmitInteger, MVT::i32, 0, 
/*29574*/     OPC_EmitInteger, MVT::i32, 0, 
/*29577*/     OPC_EmitInteger, MVT::i32, 0, 
/*29580*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29592*/     OPC_EmitInteger, MVT::i32, 1, 
/*29595*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29598*/     OPC_EmitInteger, MVT::i32, 0, 
/*29601*/     OPC_EmitInteger, MVT::i32, 0, 
/*29604*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FLOOR), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (FLOOR:f32 R600_Reg32:f32:$src0)
/*29624*/   /*Scope*/ 10, /*->29635*/
/*29625*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*29627*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FLOOR_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_FLOOR_F32_e32:f32 f32:f32:$src0)
/*29635*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 91|128,2/*347*/,  TARGET_VAL(AMDGPUISD::DOT4),// ->29987
/*29640*/   OPC_RecordChild0, // #0 = $src0_X
/*29641*/   OPC_RecordChild1, // #1 = $src1_X
/*29642*/   OPC_RecordChild2, // #2 = $src0_Y
/*29643*/   OPC_RecordChild3, // #3 = $src1_Y
/*29644*/   OPC_RecordChild4, // #4 = $src0_Z
/*29645*/   OPC_RecordChild5, // #5 = $src1_Z
/*29646*/   OPC_RecordChild6, // #6 = $src0_W
/*29647*/   OPC_RecordChild7, // #7 = $src1_W
/*29648*/   OPC_CheckType, MVT::f32,
/*29650*/   OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*29652*/   OPC_EmitInteger, MVT::i32, 0, 
/*29655*/   OPC_EmitInteger, MVT::i32, 0, 
/*29658*/   OPC_EmitInteger, MVT::i32, 1, 
/*29661*/   OPC_EmitInteger, MVT::i32, 0, 
/*29664*/   OPC_EmitInteger, MVT::i32, 0, 
/*29667*/   OPC_EmitInteger, MVT::i32, 0, 
/*29670*/   OPC_EmitInteger, MVT::i32, 0, 
/*29673*/   OPC_EmitInteger, MVT::i32, 0, 
/*29676*/   OPC_EmitInteger, MVT::i32, 0, 
/*29679*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29691*/   OPC_EmitInteger, MVT::i32, 0, 
/*29694*/   OPC_EmitInteger, MVT::i32, 0, 
/*29697*/   OPC_EmitInteger, MVT::i32, 0, 
/*29700*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29712*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29715*/   OPC_EmitInteger, MVT::i32, 0, 
/*29718*/   OPC_EmitInteger, MVT::i32, 0, 
/*29721*/   OPC_EmitInteger, MVT::i32, 1, 
/*29724*/   OPC_EmitInteger, MVT::i32, 0, 
/*29727*/   OPC_EmitInteger, MVT::i32, 0, 
/*29730*/   OPC_EmitInteger, MVT::i32, 0, 
/*29733*/   OPC_EmitInteger, MVT::i32, 0, 
/*29736*/   OPC_EmitInteger, MVT::i32, 0, 
/*29739*/   OPC_EmitInteger, MVT::i32, 0, 
/*29742*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29754*/   OPC_EmitInteger, MVT::i32, 0, 
/*29757*/   OPC_EmitInteger, MVT::i32, 0, 
/*29760*/   OPC_EmitInteger, MVT::i32, 0, 
/*29763*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29775*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29778*/   OPC_EmitInteger, MVT::i32, 0, 
/*29781*/   OPC_EmitInteger, MVT::i32, 0, 
/*29784*/   OPC_EmitInteger, MVT::i32, 1, 
/*29787*/   OPC_EmitInteger, MVT::i32, 0, 
/*29790*/   OPC_EmitInteger, MVT::i32, 0, 
/*29793*/   OPC_EmitInteger, MVT::i32, 0, 
/*29796*/   OPC_EmitInteger, MVT::i32, 0, 
/*29799*/   OPC_EmitInteger, MVT::i32, 0, 
/*29802*/   OPC_EmitInteger, MVT::i32, 0, 
/*29805*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29817*/   OPC_EmitInteger, MVT::i32, 0, 
/*29820*/   OPC_EmitInteger, MVT::i32, 0, 
/*29823*/   OPC_EmitInteger, MVT::i32, 0, 
/*29826*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29838*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29841*/   OPC_EmitInteger, MVT::i32, 0, 
/*29844*/   OPC_EmitInteger, MVT::i32, 0, 
/*29847*/   OPC_EmitInteger, MVT::i32, 1, 
/*29850*/   OPC_EmitInteger, MVT::i32, 0, 
/*29853*/   OPC_EmitInteger, MVT::i32, 0, 
/*29856*/   OPC_EmitInteger, MVT::i32, 0, 
/*29859*/   OPC_EmitInteger, MVT::i32, 0, 
/*29862*/   OPC_EmitInteger, MVT::i32, 0, 
/*29865*/   OPC_EmitInteger, MVT::i32, 0, 
/*29868*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29880*/   OPC_EmitInteger, MVT::i32, 0, 
/*29883*/   OPC_EmitInteger, MVT::i32, 0, 
/*29886*/   OPC_EmitInteger, MVT::i32, 0, 
/*29889*/   OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*29901*/   OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*29904*/   OPC_EmitInteger, MVT::i32, 0, 
/*29907*/   OPC_EmitInteger, MVT::i32, 0, 
/*29910*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::DOT_4), 0,
                1/*#VTs*/, MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
            // Src: (DOT4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W) - Complexity = 3
            // Dst: (DOT_4:f32 R600_TReg32_X:f32:$src0_X, R600_TReg32_X:f32:$src1_X, R600_TReg32_Y:f32:$src0_Y, R600_TReg32_Y:f32:$src1_Y, R600_TReg32_Z:f32:$src0_Z, R600_TReg32_Z:f32:$src1_Z, R600_TReg32_W:f32:$src0_W, R600_TReg32_W:f32:$src1_W)
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FEXP2),// ->30211
/*29991*/   OPC_RecordChild0, // #0 = $src0
/*29992*/   OPC_CheckType, MVT::f32,
/*29994*/   OPC_Scope, 67, /*->30063*/ // 4 children in Scope
/*29996*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*29998*/     OPC_EmitInteger, MVT::i32, 1, 
/*30001*/     OPC_EmitInteger, MVT::i32, 0, 
/*30004*/     OPC_EmitInteger, MVT::i32, 0, 
/*30007*/     OPC_EmitInteger, MVT::i32, 0, 
/*30010*/     OPC_EmitInteger, MVT::i32, 0, 
/*30013*/     OPC_EmitInteger, MVT::i32, 0, 
/*30016*/     OPC_EmitInteger, MVT::i32, 0, 
/*30019*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30031*/     OPC_EmitInteger, MVT::i32, 1, 
/*30034*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30037*/     OPC_EmitInteger, MVT::i32, 0, 
/*30040*/     OPC_EmitInteger, MVT::i32, 0, 
/*30043*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*30063*/   /*Scope*/ 67, /*->30131*/
/*30064*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*30066*/     OPC_EmitInteger, MVT::i32, 1, 
/*30069*/     OPC_EmitInteger, MVT::i32, 0, 
/*30072*/     OPC_EmitInteger, MVT::i32, 0, 
/*30075*/     OPC_EmitInteger, MVT::i32, 0, 
/*30078*/     OPC_EmitInteger, MVT::i32, 0, 
/*30081*/     OPC_EmitInteger, MVT::i32, 0, 
/*30084*/     OPC_EmitInteger, MVT::i32, 0, 
/*30087*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30099*/     OPC_EmitInteger, MVT::i32, 1, 
/*30102*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30105*/     OPC_EmitInteger, MVT::i32, 0, 
/*30108*/     OPC_EmitInteger, MVT::i32, 0, 
/*30111*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*30131*/   /*Scope*/ 67, /*->30199*/
/*30132*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*30134*/     OPC_EmitInteger, MVT::i32, 1, 
/*30137*/     OPC_EmitInteger, MVT::i32, 0, 
/*30140*/     OPC_EmitInteger, MVT::i32, 0, 
/*30143*/     OPC_EmitInteger, MVT::i32, 0, 
/*30146*/     OPC_EmitInteger, MVT::i32, 0, 
/*30149*/     OPC_EmitInteger, MVT::i32, 0, 
/*30152*/     OPC_EmitInteger, MVT::i32, 0, 
/*30155*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30167*/     OPC_EmitInteger, MVT::i32, 1, 
/*30170*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30173*/     OPC_EmitInteger, MVT::i32, 0, 
/*30176*/     OPC_EmitInteger, MVT::i32, 0, 
/*30179*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fexp2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*30199*/   /*Scope*/ 10, /*->30210*/
/*30200*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30202*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fexp2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 f32:f32:$src0)
/*30210*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,1/*220*/,  TARGET_VAL(ISD::FLOG2),// ->30435
/*30215*/   OPC_RecordChild0, // #0 = $src0
/*30216*/   OPC_CheckType, MVT::f32,
/*30218*/   OPC_Scope, 67, /*->30287*/ // 4 children in Scope
/*30220*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30222*/     OPC_EmitInteger, MVT::i32, 1, 
/*30225*/     OPC_EmitInteger, MVT::i32, 0, 
/*30228*/     OPC_EmitInteger, MVT::i32, 0, 
/*30231*/     OPC_EmitInteger, MVT::i32, 0, 
/*30234*/     OPC_EmitInteger, MVT::i32, 0, 
/*30237*/     OPC_EmitInteger, MVT::i32, 0, 
/*30240*/     OPC_EmitInteger, MVT::i32, 0, 
/*30243*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30255*/     OPC_EmitInteger, MVT::i32, 1, 
/*30258*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30261*/     OPC_EmitInteger, MVT::i32, 0, 
/*30264*/     OPC_EmitInteger, MVT::i32, 0, 
/*30267*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_r600:f32 R600_Reg32:f32:$src0)
/*30287*/   /*Scope*/ 67, /*->30355*/
/*30288*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*30290*/     OPC_EmitInteger, MVT::i32, 1, 
/*30293*/     OPC_EmitInteger, MVT::i32, 0, 
/*30296*/     OPC_EmitInteger, MVT::i32, 0, 
/*30299*/     OPC_EmitInteger, MVT::i32, 0, 
/*30302*/     OPC_EmitInteger, MVT::i32, 0, 
/*30305*/     OPC_EmitInteger, MVT::i32, 0, 
/*30308*/     OPC_EmitInteger, MVT::i32, 0, 
/*30311*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30323*/     OPC_EmitInteger, MVT::i32, 1, 
/*30326*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30329*/     OPC_EmitInteger, MVT::i32, 0, 
/*30332*/     OPC_EmitInteger, MVT::i32, 0, 
/*30335*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_eg:f32 R600_Reg32:f32:$src0)
/*30355*/   /*Scope*/ 67, /*->30423*/
/*30356*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*30358*/     OPC_EmitInteger, MVT::i32, 1, 
/*30361*/     OPC_EmitInteger, MVT::i32, 0, 
/*30364*/     OPC_EmitInteger, MVT::i32, 0, 
/*30367*/     OPC_EmitInteger, MVT::i32, 0, 
/*30370*/     OPC_EmitInteger, MVT::i32, 0, 
/*30373*/     OPC_EmitInteger, MVT::i32, 0, 
/*30376*/     OPC_EmitInteger, MVT::i32, 0, 
/*30379*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30391*/     OPC_EmitInteger, MVT::i32, 1, 
/*30394*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30397*/     OPC_EmitInteger, MVT::i32, 0, 
/*30400*/     OPC_EmitInteger, MVT::i32, 0, 
/*30403*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (flog2:f32 R600_Reg32:f32:$src0) - Complexity = 3
              // Dst: (LOG_IEEE_cm:f32 R600_Reg32:f32:$src0)
/*30423*/   /*Scope*/ 10, /*->30434*/
/*30424*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30426*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (flog2:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (V_LOG_F32_e32:f32 f32:f32:$src0)
/*30434*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 41|128,1/*169*/,  TARGET_VAL(ISD::SINT_TO_FP),// ->30608
/*30439*/   OPC_RecordChild0, // #0 = $src0
/*30440*/   OPC_CheckChild0Type, MVT::i32,
/*30442*/   OPC_SwitchType /*2 cases */, 21|128,1/*149*/,  MVT::f32,// ->30595
/*30446*/     OPC_Scope, 67, /*->30515*/ // 3 children in Scope
/*30448*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30450*/       OPC_EmitInteger, MVT::i32, 1, 
/*30453*/       OPC_EmitInteger, MVT::i32, 0, 
/*30456*/       OPC_EmitInteger, MVT::i32, 0, 
/*30459*/       OPC_EmitInteger, MVT::i32, 0, 
/*30462*/       OPC_EmitInteger, MVT::i32, 0, 
/*30465*/       OPC_EmitInteger, MVT::i32, 0, 
/*30468*/       OPC_EmitInteger, MVT::i32, 0, 
/*30471*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30483*/       OPC_EmitInteger, MVT::i32, 1, 
/*30486*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30489*/       OPC_EmitInteger, MVT::i32, 0, 
/*30492*/       OPC_EmitInteger, MVT::i32, 0, 
/*30495*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_r600), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*30515*/     /*Scope*/ 67, /*->30583*/
/*30516*/       OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*30518*/       OPC_EmitInteger, MVT::i32, 1, 
/*30521*/       OPC_EmitInteger, MVT::i32, 0, 
/*30524*/       OPC_EmitInteger, MVT::i32, 0, 
/*30527*/       OPC_EmitInteger, MVT::i32, 0, 
/*30530*/       OPC_EmitInteger, MVT::i32, 0, 
/*30533*/       OPC_EmitInteger, MVT::i32, 0, 
/*30536*/       OPC_EmitInteger, MVT::i32, 0, 
/*30539*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30551*/       OPC_EmitInteger, MVT::i32, 1, 
/*30554*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30557*/       OPC_EmitInteger, MVT::i32, 0, 
/*30560*/       OPC_EmitInteger, MVT::i32, 0, 
/*30563*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::INT_TO_FLT_eg), 0,
                    1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*30583*/     /*Scope*/ 10, /*->30594*/
/*30584*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30586*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_I32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 i32:i32:$src0) - Complexity = 3
                // Dst: (V_CVT_F32_I32_e32:f32 i32:i32:$src0)
/*30594*/     0, /*End of Scope*/
            /*SwitchType*/ 10,  MVT::f64,// ->30607
/*30597*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30599*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F64_I32_e32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (sint_to_fp:f64 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F64_I32_e32:f64 i32:i32:$src0)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26|128,1/*154*/,  TARGET_VAL(ISD::UINT_TO_FP),// ->30766
/*30612*/   OPC_RecordChild0, // #0 = $src0
/*30613*/   OPC_CheckChild0Type, MVT::i32,
/*30615*/   OPC_CheckType, MVT::f32,
/*30617*/   OPC_Scope, 67, /*->30686*/ // 3 children in Scope
/*30619*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30621*/     OPC_EmitInteger, MVT::i32, 1, 
/*30624*/     OPC_EmitInteger, MVT::i32, 0, 
/*30627*/     OPC_EmitInteger, MVT::i32, 0, 
/*30630*/     OPC_EmitInteger, MVT::i32, 0, 
/*30633*/     OPC_EmitInteger, MVT::i32, 0, 
/*30636*/     OPC_EmitInteger, MVT::i32, 0, 
/*30639*/     OPC_EmitInteger, MVT::i32, 0, 
/*30642*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30654*/     OPC_EmitInteger, MVT::i32, 1, 
/*30657*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30660*/     OPC_EmitInteger, MVT::i32, 0, 
/*30663*/     OPC_EmitInteger, MVT::i32, 0, 
/*30666*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_r600:f32 R600_Reg32:i32:$src0)
/*30686*/   /*Scope*/ 67, /*->30754*/
/*30687*/     OPC_CheckPatternPredicate, 2, // (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS)
/*30689*/     OPC_EmitInteger, MVT::i32, 1, 
/*30692*/     OPC_EmitInteger, MVT::i32, 0, 
/*30695*/     OPC_EmitInteger, MVT::i32, 0, 
/*30698*/     OPC_EmitInteger, MVT::i32, 0, 
/*30701*/     OPC_EmitInteger, MVT::i32, 0, 
/*30704*/     OPC_EmitInteger, MVT::i32, 0, 
/*30707*/     OPC_EmitInteger, MVT::i32, 0, 
/*30710*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30722*/     OPC_EmitInteger, MVT::i32, 1, 
/*30725*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30728*/     OPC_EmitInteger, MVT::i32, 0, 
/*30731*/     OPC_EmitInteger, MVT::i32, 0, 
/*30734*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::UINT_TO_FLT_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (uint_to_fp:f32 R600_Reg32:i32:$src0) - Complexity = 3
              // Dst: (UINT_TO_FLT_eg:f32 R600_Reg32:i32:$src0)
/*30754*/   /*Scope*/ 10, /*->30765*/
/*30755*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*30757*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_U32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (uint_to_fp:f32 i32:i32:$src0) - Complexity = 3
              // Dst: (V_CVT_F32_U32_e32:f32 i32:i32:$src0)
/*30765*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,2/*279*/,  TARGET_VAL(AMDGPUISD::SIN_HW),// ->31049
/*30770*/   OPC_RecordChild0, // #0 = $src0
/*30771*/   OPC_CheckChild0Type, MVT::f32,
/*30773*/   OPC_CheckType, MVT::f32,
/*30775*/   OPC_Scope, 67, /*->30844*/ // 4 children in Scope
/*30777*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*30779*/     OPC_EmitInteger, MVT::i32, 1, 
/*30782*/     OPC_EmitInteger, MVT::i32, 0, 
/*30785*/     OPC_EmitInteger, MVT::i32, 0, 
/*30788*/     OPC_EmitInteger, MVT::i32, 0, 
/*30791*/     OPC_EmitInteger, MVT::i32, 0, 
/*30794*/     OPC_EmitInteger, MVT::i32, 0, 
/*30797*/     OPC_EmitInteger, MVT::i32, 0, 
/*30800*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30812*/     OPC_EmitInteger, MVT::i32, 1, 
/*30815*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30818*/     OPC_EmitInteger, MVT::i32, 0, 
/*30821*/     OPC_EmitInteger, MVT::i32, 0, 
/*30824*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_r600:f32 f32:f32:$src0)
/*30844*/   /*Scope*/ 67, /*->30912*/
/*30845*/     OPC_CheckPatternPredicate, 6, // (Subtarget.getGeneration() == AMDGPUSubtarget::R700)
/*30847*/     OPC_EmitInteger, MVT::i32, 1, 
/*30850*/     OPC_EmitInteger, MVT::i32, 0, 
/*30853*/     OPC_EmitInteger, MVT::i32, 0, 
/*30856*/     OPC_EmitInteger, MVT::i32, 0, 
/*30859*/     OPC_EmitInteger, MVT::i32, 0, 
/*30862*/     OPC_EmitInteger, MVT::i32, 0, 
/*30865*/     OPC_EmitInteger, MVT::i32, 0, 
/*30868*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30880*/     OPC_EmitInteger, MVT::i32, 1, 
/*30883*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30886*/     OPC_EmitInteger, MVT::i32, 0, 
/*30889*/     OPC_EmitInteger, MVT::i32, 0, 
/*30892*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_r700:f32 f32:f32:$src0)
/*30912*/   /*Scope*/ 67, /*->30980*/
/*30913*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*30915*/     OPC_EmitInteger, MVT::i32, 1, 
/*30918*/     OPC_EmitInteger, MVT::i32, 0, 
/*30921*/     OPC_EmitInteger, MVT::i32, 0, 
/*30924*/     OPC_EmitInteger, MVT::i32, 0, 
/*30927*/     OPC_EmitInteger, MVT::i32, 0, 
/*30930*/     OPC_EmitInteger, MVT::i32, 0, 
/*30933*/     OPC_EmitInteger, MVT::i32, 0, 
/*30936*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*30948*/     OPC_EmitInteger, MVT::i32, 1, 
/*30951*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*30954*/     OPC_EmitInteger, MVT::i32, 0, 
/*30957*/     OPC_EmitInteger, MVT::i32, 0, 
/*30960*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_eg:f32 f32:f32:$src0)
/*30980*/   /*Scope*/ 67, /*->31048*/
/*30981*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*30983*/     OPC_EmitInteger, MVT::i32, 1, 
/*30986*/     OPC_EmitInteger, MVT::i32, 0, 
/*30989*/     OPC_EmitInteger, MVT::i32, 0, 
/*30992*/     OPC_EmitInteger, MVT::i32, 0, 
/*30995*/     OPC_EmitInteger, MVT::i32, 0, 
/*30998*/     OPC_EmitInteger, MVT::i32, 0, 
/*31001*/     OPC_EmitInteger, MVT::i32, 0, 
/*31004*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31016*/     OPC_EmitInteger, MVT::i32, 1, 
/*31019*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31022*/     OPC_EmitInteger, MVT::i32, 0, 
/*31025*/     OPC_EmitInteger, MVT::i32, 0, 
/*31028*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SIN_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (SIN_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (SIN_cm:f32 f32:f32:$src0)
/*31048*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,2/*279*/,  TARGET_VAL(AMDGPUISD::COS_HW),// ->31332
/*31053*/   OPC_RecordChild0, // #0 = $src0
/*31054*/   OPC_CheckChild0Type, MVT::f32,
/*31056*/   OPC_CheckType, MVT::f32,
/*31058*/   OPC_Scope, 67, /*->31127*/ // 4 children in Scope
/*31060*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*31062*/     OPC_EmitInteger, MVT::i32, 1, 
/*31065*/     OPC_EmitInteger, MVT::i32, 0, 
/*31068*/     OPC_EmitInteger, MVT::i32, 0, 
/*31071*/     OPC_EmitInteger, MVT::i32, 0, 
/*31074*/     OPC_EmitInteger, MVT::i32, 0, 
/*31077*/     OPC_EmitInteger, MVT::i32, 0, 
/*31080*/     OPC_EmitInteger, MVT::i32, 0, 
/*31083*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31095*/     OPC_EmitInteger, MVT::i32, 1, 
/*31098*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31101*/     OPC_EmitInteger, MVT::i32, 0, 
/*31104*/     OPC_EmitInteger, MVT::i32, 0, 
/*31107*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_r600:f32 f32:f32:$src0)
/*31127*/   /*Scope*/ 67, /*->31195*/
/*31128*/     OPC_CheckPatternPredicate, 6, // (Subtarget.getGeneration() == AMDGPUSubtarget::R700)
/*31130*/     OPC_EmitInteger, MVT::i32, 1, 
/*31133*/     OPC_EmitInteger, MVT::i32, 0, 
/*31136*/     OPC_EmitInteger, MVT::i32, 0, 
/*31139*/     OPC_EmitInteger, MVT::i32, 0, 
/*31142*/     OPC_EmitInteger, MVT::i32, 0, 
/*31145*/     OPC_EmitInteger, MVT::i32, 0, 
/*31148*/     OPC_EmitInteger, MVT::i32, 0, 
/*31151*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31163*/     OPC_EmitInteger, MVT::i32, 1, 
/*31166*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31169*/     OPC_EmitInteger, MVT::i32, 0, 
/*31172*/     OPC_EmitInteger, MVT::i32, 0, 
/*31175*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_r700), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_r700:f32 f32:f32:$src0)
/*31195*/   /*Scope*/ 67, /*->31263*/
/*31196*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*31198*/     OPC_EmitInteger, MVT::i32, 1, 
/*31201*/     OPC_EmitInteger, MVT::i32, 0, 
/*31204*/     OPC_EmitInteger, MVT::i32, 0, 
/*31207*/     OPC_EmitInteger, MVT::i32, 0, 
/*31210*/     OPC_EmitInteger, MVT::i32, 0, 
/*31213*/     OPC_EmitInteger, MVT::i32, 0, 
/*31216*/     OPC_EmitInteger, MVT::i32, 0, 
/*31219*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31231*/     OPC_EmitInteger, MVT::i32, 1, 
/*31234*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31237*/     OPC_EmitInteger, MVT::i32, 0, 
/*31240*/     OPC_EmitInteger, MVT::i32, 0, 
/*31243*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_eg:f32 f32:f32:$src0)
/*31263*/   /*Scope*/ 67, /*->31331*/
/*31264*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*31266*/     OPC_EmitInteger, MVT::i32, 1, 
/*31269*/     OPC_EmitInteger, MVT::i32, 0, 
/*31272*/     OPC_EmitInteger, MVT::i32, 0, 
/*31275*/     OPC_EmitInteger, MVT::i32, 0, 
/*31278*/     OPC_EmitInteger, MVT::i32, 0, 
/*31281*/     OPC_EmitInteger, MVT::i32, 0, 
/*31284*/     OPC_EmitInteger, MVT::i32, 0, 
/*31287*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31299*/     OPC_EmitInteger, MVT::i32, 1, 
/*31302*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31305*/     OPC_EmitInteger, MVT::i32, 0, 
/*31308*/     OPC_EmitInteger, MVT::i32, 0, 
/*31311*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::COS_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (COS_HW:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (COS_cm:f32 f32:f32:$src0)
/*31331*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_ROUND),// ->31348
/*31335*/   OPC_RecordChild0, // #0 = $src0
/*31336*/   OPC_CheckType, MVT::f32,
/*31338*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31340*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F32_F64_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$src0) - Complexity = 3
            // Dst: (V_CVT_F32_F64_e32:f32 f64:f64:$src0)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_EXTEND),// ->31366
/*31351*/   OPC_RecordChild0, // #0 = $src0
/*31352*/   OPC_CheckChild0Type, MVT::f32,
/*31354*/   OPC_CheckType, MVT::f64,
/*31356*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31358*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_CVT_F64_F32_e32), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 f32:f32:$src0) - Complexity = 3
            // Dst: (V_CVT_F64_F32_e32:f64 f32:f32:$src0)
          /*SwitchOpcode*/ 23|128,4/*535*/,  TARGET_VAL(ISD::FSQRT),// ->31905
/*31370*/   OPC_RecordChild0, // #0 = $src0
/*31371*/   OPC_SwitchType /*2 cases */, 5|128,4/*517*/,  MVT::f32,// ->31892
/*31375*/     OPC_Scope, 10, /*->31387*/ // 4 children in Scope
/*31377*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31379*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SQRT_F32_e32), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 f32:f32:$src0) - Complexity = 3
                // Dst: (V_SQRT_F32_e32:f32 f32:f32:$src0)
/*31387*/     /*Scope*/ 38|128,1/*166*/, /*->31555*/
/*31389*/       OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*31391*/       OPC_EmitInteger, MVT::i32, 0, 
/*31394*/       OPC_EmitInteger, MVT::i32, 0, 
/*31397*/       OPC_EmitInteger, MVT::i32, 1, 
/*31400*/       OPC_EmitInteger, MVT::i32, 0, 
/*31403*/       OPC_EmitInteger, MVT::i32, 0, 
/*31406*/       OPC_EmitInteger, MVT::i32, 0, 
/*31409*/       OPC_EmitInteger, MVT::i32, 0, 
/*31412*/       OPC_EmitInteger, MVT::i32, 0, 
/*31415*/       OPC_EmitInteger, MVT::i32, 0, 
/*31418*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31430*/       OPC_EmitInteger, MVT::i32, 1, 
/*31433*/       OPC_EmitInteger, MVT::i32, 0, 
/*31436*/       OPC_EmitInteger, MVT::i32, 0, 
/*31439*/       OPC_EmitInteger, MVT::i32, 0, 
/*31442*/       OPC_EmitInteger, MVT::i32, 0, 
/*31445*/       OPC_EmitInteger, MVT::i32, 0, 
/*31448*/       OPC_EmitInteger, MVT::i32, 0, 
/*31451*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31463*/       OPC_EmitInteger, MVT::i32, 1, 
/*31466*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31469*/       OPC_EmitInteger, MVT::i32, 0, 
/*31472*/       OPC_EmitInteger, MVT::i32, 0, 
/*31475*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_r600), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*31495*/       OPC_EmitInteger, MVT::i32, 0, 
/*31498*/       OPC_EmitInteger, MVT::i32, 0, 
/*31501*/       OPC_EmitInteger, MVT::i32, 0, 
/*31504*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31516*/       OPC_EmitInteger, MVT::i32, 1, 
/*31519*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31522*/       OPC_EmitInteger, MVT::i32, 0, 
/*31525*/       OPC_EmitInteger, MVT::i32, 0, 
/*31528*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_r600:i32 ?:f32:$src))
/*31555*/     /*Scope*/ 38|128,1/*166*/, /*->31723*/
/*31557*/       OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*31559*/       OPC_EmitInteger, MVT::i32, 0, 
/*31562*/       OPC_EmitInteger, MVT::i32, 0, 
/*31565*/       OPC_EmitInteger, MVT::i32, 1, 
/*31568*/       OPC_EmitInteger, MVT::i32, 0, 
/*31571*/       OPC_EmitInteger, MVT::i32, 0, 
/*31574*/       OPC_EmitInteger, MVT::i32, 0, 
/*31577*/       OPC_EmitInteger, MVT::i32, 0, 
/*31580*/       OPC_EmitInteger, MVT::i32, 0, 
/*31583*/       OPC_EmitInteger, MVT::i32, 0, 
/*31586*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31598*/       OPC_EmitInteger, MVT::i32, 1, 
/*31601*/       OPC_EmitInteger, MVT::i32, 0, 
/*31604*/       OPC_EmitInteger, MVT::i32, 0, 
/*31607*/       OPC_EmitInteger, MVT::i32, 0, 
/*31610*/       OPC_EmitInteger, MVT::i32, 0, 
/*31613*/       OPC_EmitInteger, MVT::i32, 0, 
/*31616*/       OPC_EmitInteger, MVT::i32, 0, 
/*31619*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31631*/       OPC_EmitInteger, MVT::i32, 1, 
/*31634*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31637*/       OPC_EmitInteger, MVT::i32, 0, 
/*31640*/       OPC_EmitInteger, MVT::i32, 0, 
/*31643*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_eg), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*31663*/       OPC_EmitInteger, MVT::i32, 0, 
/*31666*/       OPC_EmitInteger, MVT::i32, 0, 
/*31669*/       OPC_EmitInteger, MVT::i32, 0, 
/*31672*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31684*/       OPC_EmitInteger, MVT::i32, 1, 
/*31687*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31690*/       OPC_EmitInteger, MVT::i32, 0, 
/*31693*/       OPC_EmitInteger, MVT::i32, 0, 
/*31696*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 ?:f32:$src, (RECIPSQRT_CLAMPED_eg:i32 ?:f32:$src))
/*31723*/     /*Scope*/ 38|128,1/*166*/, /*->31891*/
/*31725*/       OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*31727*/       OPC_EmitInteger, MVT::i32, 0, 
/*31730*/       OPC_EmitInteger, MVT::i32, 0, 
/*31733*/       OPC_EmitInteger, MVT::i32, 1, 
/*31736*/       OPC_EmitInteger, MVT::i32, 0, 
/*31739*/       OPC_EmitInteger, MVT::i32, 0, 
/*31742*/       OPC_EmitInteger, MVT::i32, 0, 
/*31745*/       OPC_EmitInteger, MVT::i32, 0, 
/*31748*/       OPC_EmitInteger, MVT::i32, 0, 
/*31751*/       OPC_EmitInteger, MVT::i32, 0, 
/*31754*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31766*/       OPC_EmitInteger, MVT::i32, 1, 
/*31769*/       OPC_EmitInteger, MVT::i32, 0, 
/*31772*/       OPC_EmitInteger, MVT::i32, 0, 
/*31775*/       OPC_EmitInteger, MVT::i32, 0, 
/*31778*/       OPC_EmitInteger, MVT::i32, 0, 
/*31781*/       OPC_EmitInteger, MVT::i32, 0, 
/*31784*/       OPC_EmitInteger, MVT::i32, 0, 
/*31787*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31799*/       OPC_EmitInteger, MVT::i32, 1, 
/*31802*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31805*/       OPC_EmitInteger, MVT::i32, 0, 
/*31808*/       OPC_EmitInteger, MVT::i32, 0, 
/*31811*/       OPC_EmitNode, TARGET_VAL(AMDGPU::RECIPSQRT_CLAMPED_cm), 0,
                    1/*#VTs*/, MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*31831*/       OPC_EmitInteger, MVT::i32, 0, 
/*31834*/       OPC_EmitInteger, MVT::i32, 0, 
/*31837*/       OPC_EmitInteger, MVT::i32, 0, 
/*31840*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*31852*/       OPC_EmitInteger, MVT::i32, 1, 
/*31855*/       OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*31858*/       OPC_EmitInteger, MVT::i32, 0, 
/*31861*/       OPC_EmitInteger, MVT::i32, 0, 
/*31864*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::MUL), 0,
                    1/*#VTs*/, MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:f32 f32:f32:$src) - Complexity = 3
                // Dst: (MUL:f32 R600_Reg32:f32:$src, (RECIPSQRT_CLAMPED_cm:i32 ?:f32:$src))
/*31891*/     0, /*End of Scope*/
            /*SwitchType*/ 10,  MVT::f64,// ->31904
/*31894*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31896*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SQRT_F64_e32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$src0) - Complexity = 3
              // Dst: (V_SQRT_F64_e32:f64 f64:f64:$src0)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::FSUB),// ->31938
/*31908*/   OPC_RecordChild0, // #0 = $src0
/*31909*/   OPC_RecordChild1, // #1 = $src1
/*31910*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->31924
/*31913*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31915*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_SUB_F32_e32:f32 f32:f32:$src0, f32:f32:$src1)
            /*SwitchType*/ 11,  MVT::f64,// ->31937
/*31926*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31928*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SUB_F64), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$src0, f64:f64:$src1) - Complexity = 3
              // Dst: (V_SUB_F64:f64 ?:f64:$src0, ?:f64:$src1)
            0, // EndSwitchType
          /*SwitchOpcode*/ 65,  TARGET_VAL(ISD::FMA),// ->32006
/*31941*/   OPC_RecordChild0, // #0 = $src0
/*31942*/   OPC_RecordChild1, // #1 = $src1
/*31943*/   OPC_RecordChild2, // #2 = $src2
/*31944*/   OPC_SwitchType /*2 cases */, 28,  MVT::f32,// ->31975
/*31947*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31949*/     OPC_EmitInteger, MVT::i32, 0, 
/*31952*/     OPC_EmitInteger, MVT::i32, 0, 
/*31955*/     OPC_EmitInteger, MVT::i32, 0, 
/*31958*/     OPC_EmitInteger, MVT::i32, 0, 
/*31961*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FMA_F32), 0,
                  1/*#VTs*/, MVT::f32, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (fma:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2) - Complexity = 3
              // Dst: (V_FMA_F32:f32 f32:f32:$src0, f32:f32:$src1, f32:f32:$src2)
            /*SwitchType*/ 28,  MVT::f64,// ->32005
/*31977*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*31979*/     OPC_EmitInteger, MVT::i32, 0, 
/*31982*/     OPC_EmitInteger, MVT::i32, 0, 
/*31985*/     OPC_EmitInteger, MVT::i32, 0, 
/*31988*/     OPC_EmitInteger, MVT::i32, 0, 
/*31991*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_FMA_F64), 0,
                  1/*#VTs*/, MVT::f64, 7/*#Ops*/, 0, 1, 2, 3, 4, 5, 6, 
              // Src: (fma:f64 f64:f64:$src0, f64:f64:$src1, f64:f64:$src2) - Complexity = 3
              // Dst: (V_FMA_F64:f64 f64:f64:$src0, f64:f64:$src1, f64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FABS),// ->32056
/*32009*/   OPC_RecordChild0, // #0 = $src
/*32010*/   OPC_CheckType, MVT::f32,
/*32012*/   OPC_Scope, 30, /*->32044*/ // 2 children in Scope
/*32014*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32016*/     OPC_EmitInteger, MVT::i32, 0, 
/*32019*/     OPC_EmitInteger, MVT::i32, 1, 
/*32022*/     OPC_EmitInteger, MVT::i32, 0, 
/*32025*/     OPC_EmitInteger, MVT::i32, 0, 
/*32028*/     OPC_EmitInteger, MVT::i32, 0, 
/*32031*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fabs:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 1:i32, 0:i32, 0:i32, 0:i32)
/*32044*/   /*Scope*/ 10, /*->32055*/
/*32045*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32047*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FABS_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FABS_R600:f32 f32:f32:$src0)
/*32055*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::FNEG),// ->32106
/*32059*/   OPC_RecordChild0, // #0 = $src
/*32060*/   OPC_CheckType, MVT::f32,
/*32062*/   OPC_Scope, 30, /*->32094*/ // 2 children in Scope
/*32064*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32066*/     OPC_EmitInteger, MVT::i32, 0, 
/*32069*/     OPC_EmitInteger, MVT::i32, 0, 
/*32072*/     OPC_EmitInteger, MVT::i32, 0, 
/*32075*/     OPC_EmitInteger, MVT::i32, 0, 
/*32078*/     OPC_EmitInteger, MVT::i32, 1, 
/*32081*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_ADD_F32_e64), 0,
                  1/*#VTs*/, MVT::f32, 6/*#Ops*/, 0, 1, 2, 3, 4, 5, 
              // Src: (fneg:f32 f32:f32:$src) - Complexity = 3
              // Dst: (V_ADD_F32_e64:f32 ?:f32:$src, 0:i32, 0:i32, 0:i32, 0:i32, 1:i32)
/*32094*/   /*Scope*/ 10, /*->32105*/
/*32095*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32097*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::FNEG_R600), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 f32:f32:$src0) - Complexity = 3
              // Dst: (FNEG_R600:f32 f32:f32:$src0)
/*32105*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93|128,5/*733*/,  TARGET_VAL(ISD::FPOW),// ->32843
/*32110*/   OPC_RecordChild0, // #0 = $src0
/*32111*/   OPC_RecordChild1, // #1 = $src1
/*32112*/   OPC_CheckType, MVT::f32,
/*32114*/   OPC_Scope, 103|128,1/*231*/, /*->32348*/ // 4 children in Scope
/*32117*/     OPC_CheckPatternPredicate, 1, // (Subtarget.getGeneration() <= AMDGPUSubtarget::R700)
/*32119*/     OPC_EmitInteger, MVT::i32, 1, 
/*32122*/     OPC_EmitInteger, MVT::i32, 0, 
/*32125*/     OPC_EmitInteger, MVT::i32, 0, 
/*32128*/     OPC_EmitInteger, MVT::i32, 0, 
/*32131*/     OPC_EmitInteger, MVT::i32, 0, 
/*32134*/     OPC_EmitInteger, MVT::i32, 0, 
/*32137*/     OPC_EmitInteger, MVT::i32, 1, 
/*32140*/     OPC_EmitInteger, MVT::i32, 0, 
/*32143*/     OPC_EmitInteger, MVT::i32, 0, 
/*32146*/     OPC_EmitInteger, MVT::i32, 0, 
/*32149*/     OPC_EmitInteger, MVT::i32, 0, 
/*32152*/     OPC_EmitInteger, MVT::i32, 0, 
/*32155*/     OPC_EmitInteger, MVT::i32, 0, 
/*32158*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32170*/     OPC_EmitInteger, MVT::i32, 1, 
/*32173*/     OPC_EmitInteger, MVT::i32, 0, 
/*32176*/     OPC_EmitInteger, MVT::i32, 0, 
/*32179*/     OPC_EmitInteger, MVT::i32, 0, 
/*32182*/     OPC_EmitInteger, MVT::i32, 0, 
/*32185*/     OPC_EmitInteger, MVT::i32, 0, 
/*32188*/     OPC_EmitInteger, MVT::i32, 0, 
/*32191*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32203*/     OPC_EmitInteger, MVT::i32, 1, 
/*32206*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32209*/     OPC_EmitInteger, MVT::i32, 0, 
/*32212*/     OPC_EmitInteger, MVT::i32, 0, 
/*32215*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_r600), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*32235*/     OPC_EmitInteger, MVT::i32, 0, 
/*32238*/     OPC_EmitInteger, MVT::i32, 0, 
/*32241*/     OPC_EmitInteger, MVT::i32, 0, 
/*32244*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32256*/     OPC_EmitInteger, MVT::i32, 1, 
/*32259*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32262*/     OPC_EmitInteger, MVT::i32, 0, 
/*32265*/     OPC_EmitInteger, MVT::i32, 0, 
/*32268*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*32295*/     OPC_EmitInteger, MVT::i32, 0, 
/*32298*/     OPC_EmitInteger, MVT::i32, 0, 
/*32301*/     OPC_EmitInteger, MVT::i32, 0, 
/*32304*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32316*/     OPC_EmitInteger, MVT::i32, 1, 
/*32319*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32322*/     OPC_EmitInteger, MVT::i32, 0, 
/*32325*/     OPC_EmitInteger, MVT::i32, 0, 
/*32328*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_r600), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_r600:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_r600:i32 f32:f32:$src0)))
/*32348*/   /*Scope*/ 103|128,1/*231*/, /*->32581*/
/*32350*/     OPC_CheckPatternPredicate, 5, // (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA())
/*32352*/     OPC_EmitInteger, MVT::i32, 1, 
/*32355*/     OPC_EmitInteger, MVT::i32, 0, 
/*32358*/     OPC_EmitInteger, MVT::i32, 0, 
/*32361*/     OPC_EmitInteger, MVT::i32, 0, 
/*32364*/     OPC_EmitInteger, MVT::i32, 0, 
/*32367*/     OPC_EmitInteger, MVT::i32, 0, 
/*32370*/     OPC_EmitInteger, MVT::i32, 1, 
/*32373*/     OPC_EmitInteger, MVT::i32, 0, 
/*32376*/     OPC_EmitInteger, MVT::i32, 0, 
/*32379*/     OPC_EmitInteger, MVT::i32, 0, 
/*32382*/     OPC_EmitInteger, MVT::i32, 0, 
/*32385*/     OPC_EmitInteger, MVT::i32, 0, 
/*32388*/     OPC_EmitInteger, MVT::i32, 0, 
/*32391*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32403*/     OPC_EmitInteger, MVT::i32, 1, 
/*32406*/     OPC_EmitInteger, MVT::i32, 0, 
/*32409*/     OPC_EmitInteger, MVT::i32, 0, 
/*32412*/     OPC_EmitInteger, MVT::i32, 0, 
/*32415*/     OPC_EmitInteger, MVT::i32, 0, 
/*32418*/     OPC_EmitInteger, MVT::i32, 0, 
/*32421*/     OPC_EmitInteger, MVT::i32, 0, 
/*32424*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32436*/     OPC_EmitInteger, MVT::i32, 1, 
/*32439*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32442*/     OPC_EmitInteger, MVT::i32, 0, 
/*32445*/     OPC_EmitInteger, MVT::i32, 0, 
/*32448*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_eg), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*32468*/     OPC_EmitInteger, MVT::i32, 0, 
/*32471*/     OPC_EmitInteger, MVT::i32, 0, 
/*32474*/     OPC_EmitInteger, MVT::i32, 0, 
/*32477*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32489*/     OPC_EmitInteger, MVT::i32, 1, 
/*32492*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32495*/     OPC_EmitInteger, MVT::i32, 0, 
/*32498*/     OPC_EmitInteger, MVT::i32, 0, 
/*32501*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*32528*/     OPC_EmitInteger, MVT::i32, 0, 
/*32531*/     OPC_EmitInteger, MVT::i32, 0, 
/*32534*/     OPC_EmitInteger, MVT::i32, 0, 
/*32537*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32549*/     OPC_EmitInteger, MVT::i32, 1, 
/*32552*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32555*/     OPC_EmitInteger, MVT::i32, 0, 
/*32558*/     OPC_EmitInteger, MVT::i32, 0, 
/*32561*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_eg), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_eg:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_eg:i32 f32:f32:$src0)))
/*32581*/   /*Scope*/ 103|128,1/*231*/, /*->32814*/
/*32583*/     OPC_CheckPatternPredicate, 4, // (Subtarget.hasCaymanISA())
/*32585*/     OPC_EmitInteger, MVT::i32, 1, 
/*32588*/     OPC_EmitInteger, MVT::i32, 0, 
/*32591*/     OPC_EmitInteger, MVT::i32, 0, 
/*32594*/     OPC_EmitInteger, MVT::i32, 0, 
/*32597*/     OPC_EmitInteger, MVT::i32, 0, 
/*32600*/     OPC_EmitInteger, MVT::i32, 0, 
/*32603*/     OPC_EmitInteger, MVT::i32, 1, 
/*32606*/     OPC_EmitInteger, MVT::i32, 0, 
/*32609*/     OPC_EmitInteger, MVT::i32, 0, 
/*32612*/     OPC_EmitInteger, MVT::i32, 0, 
/*32615*/     OPC_EmitInteger, MVT::i32, 0, 
/*32618*/     OPC_EmitInteger, MVT::i32, 0, 
/*32621*/     OPC_EmitInteger, MVT::i32, 0, 
/*32624*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32636*/     OPC_EmitInteger, MVT::i32, 1, 
/*32639*/     OPC_EmitInteger, MVT::i32, 0, 
/*32642*/     OPC_EmitInteger, MVT::i32, 0, 
/*32645*/     OPC_EmitInteger, MVT::i32, 0, 
/*32648*/     OPC_EmitInteger, MVT::i32, 0, 
/*32651*/     OPC_EmitInteger, MVT::i32, 0, 
/*32654*/     OPC_EmitInteger, MVT::i32, 0, 
/*32657*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32669*/     OPC_EmitInteger, MVT::i32, 1, 
/*32672*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32675*/     OPC_EmitInteger, MVT::i32, 0, 
/*32678*/     OPC_EmitInteger, MVT::i32, 0, 
/*32681*/     OPC_EmitNode, TARGET_VAL(AMDGPU::LOG_IEEE_cm), 0,
                  1/*#VTs*/, MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*32701*/     OPC_EmitInteger, MVT::i32, 0, 
/*32704*/     OPC_EmitInteger, MVT::i32, 0, 
/*32707*/     OPC_EmitInteger, MVT::i32, 0, 
/*32710*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32722*/     OPC_EmitInteger, MVT::i32, 1, 
/*32725*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32728*/     OPC_EmitInteger, MVT::i32, 0, 
/*32731*/     OPC_EmitInteger, MVT::i32, 0, 
/*32734*/     OPC_EmitNode, TARGET_VAL(AMDGPU::MUL), 0,
                  1/*#VTs*/, MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/*32761*/     OPC_EmitInteger, MVT::i32, 0, 
/*32764*/     OPC_EmitInteger, MVT::i32, 0, 
/*32767*/     OPC_EmitInteger, MVT::i32, 0, 
/*32770*/     OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*32782*/     OPC_EmitInteger, MVT::i32, 1, 
/*32785*/     OPC_EmitRegister, MVT::i32, AMDGPU::PRED_SEL_OFF,
/*32788*/     OPC_EmitInteger, MVT::i32, 0, 
/*32791*/     OPC_EmitInteger, MVT::i32, 0, 
/*32794*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::EXP_IEEE_cm), 0,
                  1/*#VTs*/, MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (EXP_IEEE_cm:f32 (MUL:i32 f32:f32:$src1, (LOG_IEEE_cm:i32 f32:f32:$src0)))
/*32814*/   /*Scope*/ 27, /*->32842*/
/*32815*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32817*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_LOG_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #2
/*32825*/     OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_LEGACY_F32_e32), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #3
/*32834*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_EXP_F32_e32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
              // Src: (fpow:f32 f32:f32:$src0, f32:f32:$src1) - Complexity = 3
              // Dst: (V_EXP_F32_e32:f32 (V_MUL_LEGACY_F32_e32:i32 f32:f32:$src1, (V_LOG_F32_e32:i32 f32:f32:$src0)))
/*32842*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FCOS),// ->32883
/*32846*/   OPC_RecordChild0, // #0 = $src0
/*32847*/   OPC_CheckType, MVT::f32,
/*32849*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32851*/   OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*32858*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*32866*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*32875*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_COS_F32_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
            // Src: (fcos:f32 f32:f32:$src0) - Complexity = 3
            // Dst: (V_COS_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FSIN),// ->32923
/*32886*/   OPC_RecordChild0, // #0 = $src0
/*32887*/   OPC_CheckType, MVT::f32,
/*32889*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32891*/   OPC_EmitInteger, MVT::i32, 3|128,115|128,11|128,113|128,3/*1042479491*/, 
/*32898*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MOV_B32_e32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*32906*/   OPC_EmitNode, TARGET_VAL(AMDGPU::V_MUL_F32_e32), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*32915*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::V_SIN_F32_e32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 3, 
            // Src: (fsin:f32 f32:f32:$src0) - Complexity = 3
            // Dst: (V_SIN_F32_e32:f32 (V_MUL_F32_e32:i32 ?:f32:$src0, (V_MOV_B32_e32:i32 1042479491:i32)))
          /*SwitchOpcode*/ 29|128,13/*1693*/,  TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->34620
/*32927*/   OPC_RecordChild0, // #0 = $vec
/*32928*/   OPC_RecordChild1, // #1 = $elem
/*32929*/   OPC_Scope, 87|128,5/*727*/, /*->33659*/ // 2 children in Scope
/*32932*/     OPC_CheckChild1Type, MVT::i32,
/*32934*/     OPC_MoveChild, 2,
/*32936*/     OPC_Scope, 111, /*->33049*/ // 16 children in Scope
/*32938*/       OPC_CheckInteger, 0, 
/*32940*/       OPC_MoveParent,
/*32941*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->32978
/*32944*/         OPC_Scope, 15, /*->32961*/ // 2 children in Scope
/*32946*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32948*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32951*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*32961*/         /*Scope*/ 15, /*->32977*/
/*32962*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*32964*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32967*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub0:i32)
/*32977*/         0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::v2i32,// ->33014
/*32980*/         OPC_Scope, 15, /*->32997*/ // 2 children in Scope
/*32982*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*32984*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*32987*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub0:i32)
/*32997*/         /*Scope*/ 15, /*->33013*/
/*32998*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33000*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33003*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub0:i32)
/*33013*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->33031
/*33016*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33018*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33021*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub0:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33048
/*33033*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33035*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33038*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 0:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub0:i32)
                0, // EndSwitchType
/*33049*/     /*Scope*/ 111, /*->33161*/
/*33050*/       OPC_CheckInteger, 1, 
/*33052*/       OPC_MoveParent,
/*33053*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->33090
/*33056*/         OPC_Scope, 15, /*->33073*/ // 2 children in Scope
/*33058*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33060*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33063*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*33073*/         /*Scope*/ 15, /*->33089*/
/*33074*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33076*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33079*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub1:i32)
/*33089*/         0, /*End of Scope*/
                /*SwitchType*/ 34,  MVT::v2i32,// ->33126
/*33092*/         OPC_Scope, 15, /*->33109*/ // 2 children in Scope
/*33094*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33096*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33099*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub1:i32)
/*33109*/         /*Scope*/ 15, /*->33125*/
/*33110*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33112*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33115*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub1:i32)
/*33125*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->33143
/*33128*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33130*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33133*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub1:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33160
/*33145*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33147*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33150*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 1:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub1:i32)
                0, // EndSwitchType
/*33161*/     /*Scope*/ 92, /*->33254*/
/*33162*/       OPC_CheckInteger, 2, 
/*33164*/       OPC_MoveParent,
/*33165*/       OPC_SwitchType /*4 cases */, 34,  MVT::v4i32,// ->33202
/*33168*/         OPC_Scope, 15, /*->33185*/ // 2 children in Scope
/*33170*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33172*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33175*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*33185*/         /*Scope*/ 15, /*->33201*/
/*33186*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33188*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33191*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub2:i32)
/*33201*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v2i32,// ->33219
/*33204*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33206*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33209*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v2i32 v2i32:v2i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v2i32 ?:v2i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v8i32,// ->33236
/*33221*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33223*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33226*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub2:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33253
/*33238*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33240*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*33243*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 2:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub2:i32)
                0, // EndSwitchType
/*33254*/     /*Scope*/ 75, /*->33330*/
/*33255*/       OPC_CheckInteger, 3, 
/*33257*/       OPC_MoveParent,
/*33258*/       OPC_SwitchType /*3 cases */, 34,  MVT::v4i32,// ->33295
/*33261*/         OPC_Scope, 15, /*->33278*/ // 2 children in Scope
/*33263*/           OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33265*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33268*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*33278*/         /*Scope*/ 15, /*->33294*/
/*33279*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33281*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33284*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v4i32 v4i32:v4i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v4i32 ?:v4i32:$vec, ?:i32:$elem, sub3:i32)
/*33294*/         0, /*End of Scope*/
                /*SwitchType*/ 15,  MVT::v8i32,// ->33312
/*33297*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33299*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33302*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub3:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33329
/*33314*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33316*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*33319*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 3:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub3:i32)
                0, // EndSwitchType
/*33330*/     /*Scope*/ 39, /*->33370*/
/*33331*/       OPC_CheckInteger, 4, 
/*33333*/       OPC_MoveParent,
/*33334*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->33352
/*33337*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33339*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*33342*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub4:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33369
/*33354*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33356*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*33359*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 4:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub4:i32)
                0, // EndSwitchType
/*33370*/     /*Scope*/ 39, /*->33410*/
/*33371*/       OPC_CheckInteger, 5, 
/*33373*/       OPC_MoveParent,
/*33374*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->33392
/*33377*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33379*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*33382*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub5:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33409
/*33394*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33396*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*33399*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 5:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub5:i32)
                0, // EndSwitchType
/*33410*/     /*Scope*/ 39, /*->33450*/
/*33411*/       OPC_CheckInteger, 6, 
/*33413*/       OPC_MoveParent,
/*33414*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->33432
/*33417*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33419*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*33422*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub6:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33449
/*33434*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33436*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*33439*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 6:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub6:i32)
                0, // EndSwitchType
/*33450*/     /*Scope*/ 39, /*->33490*/
/*33451*/       OPC_CheckInteger, 7, 
/*33453*/       OPC_MoveParent,
/*33454*/       OPC_SwitchType /*2 cases */, 15,  MVT::v8i32,// ->33472
/*33457*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33459*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*33462*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v8i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v8i32 v8i32:v8i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v8i32 ?:v8i32:$vec, ?:i32:$elem, sub7:i32)
                /*SwitchType*/ 15,  MVT::v16i32,// ->33489
/*33474*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33476*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*33479*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 7:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub7:i32)
                0, // EndSwitchType
/*33490*/     /*Scope*/ 20, /*->33511*/
/*33491*/       OPC_CheckInteger, 8, 
/*33493*/       OPC_MoveParent,
/*33494*/       OPC_CheckType, MVT::v16i32,
/*33496*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33498*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*33501*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 8:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub8:i32)
/*33511*/     /*Scope*/ 20, /*->33532*/
/*33512*/       OPC_CheckInteger, 9, 
/*33514*/       OPC_MoveParent,
/*33515*/       OPC_CheckType, MVT::v16i32,
/*33517*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33519*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*33522*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 9:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub9:i32)
/*33532*/     /*Scope*/ 20, /*->33553*/
/*33533*/       OPC_CheckInteger, 10, 
/*33535*/       OPC_MoveParent,
/*33536*/       OPC_CheckType, MVT::v16i32,
/*33538*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33540*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*33543*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 10:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub10:i32)
/*33553*/     /*Scope*/ 20, /*->33574*/
/*33554*/       OPC_CheckInteger, 11, 
/*33556*/       OPC_MoveParent,
/*33557*/       OPC_CheckType, MVT::v16i32,
/*33559*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33561*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*33564*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 11:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub11:i32)
/*33574*/     /*Scope*/ 20, /*->33595*/
/*33575*/       OPC_CheckInteger, 12, 
/*33577*/       OPC_MoveParent,
/*33578*/       OPC_CheckType, MVT::v16i32,
/*33580*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33582*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*33585*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 12:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub12:i32)
/*33595*/     /*Scope*/ 20, /*->33616*/
/*33596*/       OPC_CheckInteger, 13, 
/*33598*/       OPC_MoveParent,
/*33599*/       OPC_CheckType, MVT::v16i32,
/*33601*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33603*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*33606*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 13:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub13:i32)
/*33616*/     /*Scope*/ 20, /*->33637*/
/*33617*/       OPC_CheckInteger, 14, 
/*33619*/       OPC_MoveParent,
/*33620*/       OPC_CheckType, MVT::v16i32,
/*33622*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33624*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*33627*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 14:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub14:i32)
/*33637*/     /*Scope*/ 20, /*->33658*/
/*33638*/       OPC_CheckInteger, 15, 
/*33640*/       OPC_MoveParent,
/*33641*/       OPC_CheckType, MVT::v16i32,
/*33643*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33645*/       OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*33648*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    1/*#VTs*/, MVT::v16i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (vector_insert:v16i32 v16i32:v16i32:$vec, i32:i32:$elem, 15:iPTR) - Complexity = 8
                // Dst: (INSERT_SUBREG:v16i32 ?:v16i32:$vec, ?:i32:$elem, sub15:i32)
/*33658*/     0, /*End of Scope*/
/*33659*/   /*Scope*/ 62|128,7/*958*/, /*->34619*/
/*33661*/     OPC_CheckChild1Type, MVT::f32,
/*33663*/     OPC_Scope, 74|128,6/*842*/, /*->34508*/ // 2 children in Scope
/*33666*/       OPC_MoveChild, 2,
/*33668*/       OPC_Scope, 116, /*->33786*/ // 17 children in Scope
/*33670*/         OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*33673*/         OPC_RecordChild0, // #2 = $idx
/*33674*/         OPC_RecordChild1, // #3 = $off
/*33675*/         OPC_MoveChild, 1,
/*33677*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*33680*/         OPC_MoveParent,
/*33681*/         OPC_CheckType, MVT::i32,
/*33683*/         OPC_MoveParent,
/*33684*/         OPC_SwitchType /*4 cases */, 23,  MVT::v2f32,// ->33710
/*33687*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33689*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*33696*/           OPC_EmitConvertToTarget, 3,
/*33698*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                        1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v4f32,// ->33735
/*33712*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33714*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*33721*/           OPC_EmitConvertToTarget, 3,
/*33723*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                        1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v8f32,// ->33760
/*33737*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33739*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*33746*/           OPC_EmitConvertToTarget, 3,
/*33748*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                        1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  /*SwitchType*/ 23,  MVT::v16f32,// ->33785
/*33762*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33764*/           OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                        1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #4
/*33771*/           OPC_EmitConvertToTarget, 3,
/*33773*/           OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                        1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 4, 0, 2, 5, 1, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, (add:i32 i32:i32:$idx, (imm:i32):$off)) - Complexity = 9
                    // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, (imm:i32):$off, ?:f32:$val)
                  0, // EndSwitchType
/*33786*/       /*Scope*/ 111, /*->33898*/
/*33787*/         OPC_CheckInteger, 0, 
/*33789*/         OPC_MoveParent,
/*33790*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->33827
/*33793*/           OPC_Scope, 15, /*->33810*/ // 2 children in Scope
/*33795*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33797*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33800*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*33810*/           /*Scope*/ 15, /*->33826*/
/*33811*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33813*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33816*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub0:i32)
/*33826*/           0, /*End of Scope*/
                  /*SwitchType*/ 34,  MVT::v2f32,// ->33863
/*33829*/           OPC_Scope, 15, /*->33846*/ // 2 children in Scope
/*33831*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33833*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33836*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub0:i32)
/*33846*/           /*Scope*/ 15, /*->33862*/
/*33847*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33849*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33852*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub0:i32)
/*33862*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->33880
/*33865*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33867*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33870*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub0:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->33897
/*33882*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33884*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*33887*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 0:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub0:i32)
                  0, // EndSwitchType
/*33898*/       /*Scope*/ 111, /*->34010*/
/*33899*/         OPC_CheckInteger, 1, 
/*33901*/         OPC_MoveParent,
/*33902*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->33939
/*33905*/           OPC_Scope, 15, /*->33922*/ // 2 children in Scope
/*33907*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33909*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33912*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*33922*/           /*Scope*/ 15, /*->33938*/
/*33923*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33925*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33928*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub1:i32)
/*33938*/           0, /*End of Scope*/
                  /*SwitchType*/ 34,  MVT::v2f32,// ->33975
/*33941*/           OPC_Scope, 15, /*->33958*/ // 2 children in Scope
/*33943*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*33945*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33948*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub1:i32)
/*33958*/           /*Scope*/ 15, /*->33974*/
/*33959*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33961*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33964*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub1:i32)
/*33974*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->33992
/*33977*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33979*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33982*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub1:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34009
/*33994*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*33996*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*33999*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 1:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub1:i32)
                  0, // EndSwitchType
/*34010*/       /*Scope*/ 92, /*->34103*/
/*34011*/         OPC_CheckInteger, 2, 
/*34013*/         OPC_MoveParent,
/*34014*/         OPC_SwitchType /*4 cases */, 34,  MVT::v4f32,// ->34051
/*34017*/           OPC_Scope, 15, /*->34034*/ // 2 children in Scope
/*34019*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34021*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34024*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*34034*/           /*Scope*/ 15, /*->34050*/
/*34035*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34037*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34040*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub2:i32)
/*34050*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v2f32,// ->34068
/*34053*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34055*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34058*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v2f32 ?:v2f32:$vec, ?:f32:$elem, sub2:i32)
                  /*SwitchType*/ 15,  MVT::v8f32,// ->34085
/*34070*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34072*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34075*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub2:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34102
/*34087*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34089*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34092*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 2:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub2:i32)
                  0, // EndSwitchType
/*34103*/       /*Scope*/ 75, /*->34179*/
/*34104*/         OPC_CheckInteger, 3, 
/*34106*/         OPC_MoveParent,
/*34107*/         OPC_SwitchType /*3 cases */, 34,  MVT::v4f32,// ->34144
/*34110*/           OPC_Scope, 15, /*->34127*/ // 2 children in Scope
/*34112*/             OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34114*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34117*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*34127*/           /*Scope*/ 15, /*->34143*/
/*34128*/             OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34130*/             OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34133*/             OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                          1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                      // Dst: (INSERT_SUBREG:v4f32 ?:v4f32:$vec, ?:f32:$elem, sub3:i32)
/*34143*/           0, /*End of Scope*/
                  /*SwitchType*/ 15,  MVT::v8f32,// ->34161
/*34146*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34148*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34151*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub3:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34178
/*34163*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34165*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34168*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 3:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub3:i32)
                  0, // EndSwitchType
/*34179*/       /*Scope*/ 39, /*->34219*/
/*34180*/         OPC_CheckInteger, 4, 
/*34182*/         OPC_MoveParent,
/*34183*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34201
/*34186*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34188*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34191*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub4:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34218
/*34203*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34205*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub4,
/*34208*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 4:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub4:i32)
                  0, // EndSwitchType
/*34219*/       /*Scope*/ 39, /*->34259*/
/*34220*/         OPC_CheckInteger, 5, 
/*34222*/         OPC_MoveParent,
/*34223*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34241
/*34226*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34228*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34231*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub5:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34258
/*34243*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34245*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub5,
/*34248*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 5:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub5:i32)
                  0, // EndSwitchType
/*34259*/       /*Scope*/ 39, /*->34299*/
/*34260*/         OPC_CheckInteger, 6, 
/*34262*/         OPC_MoveParent,
/*34263*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34281
/*34266*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34268*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34271*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub6:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34298
/*34283*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34285*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub6,
/*34288*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 6:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub6:i32)
                  0, // EndSwitchType
/*34299*/       /*Scope*/ 39, /*->34339*/
/*34300*/         OPC_CheckInteger, 7, 
/*34302*/         OPC_MoveParent,
/*34303*/         OPC_SwitchType /*2 cases */, 15,  MVT::v8f32,// ->34321
/*34306*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34308*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34311*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v8f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v8f32 ?:v8f32:$vec, ?:f32:$elem, sub7:i32)
                  /*SwitchType*/ 15,  MVT::v16f32,// ->34338
/*34323*/           OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34325*/           OPC_EmitInteger, MVT::i32, AMDGPU::sub7,
/*34328*/           OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                        1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 7:iPTR) - Complexity = 8
                    // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub7:i32)
                  0, // EndSwitchType
/*34339*/       /*Scope*/ 20, /*->34360*/
/*34340*/         OPC_CheckInteger, 8, 
/*34342*/         OPC_MoveParent,
/*34343*/         OPC_CheckType, MVT::v16f32,
/*34345*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34347*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub8,
/*34350*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 8:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub8:i32)
/*34360*/       /*Scope*/ 20, /*->34381*/
/*34361*/         OPC_CheckInteger, 9, 
/*34363*/         OPC_MoveParent,
/*34364*/         OPC_CheckType, MVT::v16f32,
/*34366*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34368*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub9,
/*34371*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 9:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub9:i32)
/*34381*/       /*Scope*/ 20, /*->34402*/
/*34382*/         OPC_CheckInteger, 10, 
/*34384*/         OPC_MoveParent,
/*34385*/         OPC_CheckType, MVT::v16f32,
/*34387*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34389*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub10,
/*34392*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 10:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub10:i32)
/*34402*/       /*Scope*/ 20, /*->34423*/
/*34403*/         OPC_CheckInteger, 11, 
/*34405*/         OPC_MoveParent,
/*34406*/         OPC_CheckType, MVT::v16f32,
/*34408*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34410*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub11,
/*34413*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 11:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub11:i32)
/*34423*/       /*Scope*/ 20, /*->34444*/
/*34424*/         OPC_CheckInteger, 12, 
/*34426*/         OPC_MoveParent,
/*34427*/         OPC_CheckType, MVT::v16f32,
/*34429*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34431*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub12,
/*34434*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 12:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub12:i32)
/*34444*/       /*Scope*/ 20, /*->34465*/
/*34445*/         OPC_CheckInteger, 13, 
/*34447*/         OPC_MoveParent,
/*34448*/         OPC_CheckType, MVT::v16f32,
/*34450*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34452*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub13,
/*34455*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 13:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub13:i32)
/*34465*/       /*Scope*/ 20, /*->34486*/
/*34466*/         OPC_CheckInteger, 14, 
/*34468*/         OPC_MoveParent,
/*34469*/         OPC_CheckType, MVT::v16f32,
/*34471*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34473*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub14,
/*34476*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 14:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub14:i32)
/*34486*/       /*Scope*/ 20, /*->34507*/
/*34487*/         OPC_CheckInteger, 15, 
/*34489*/         OPC_MoveParent,
/*34490*/         OPC_CheckType, MVT::v16f32,
/*34492*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34494*/         OPC_EmitInteger, MVT::i32, AMDGPU::sub15,
/*34497*/         OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      1/*#VTs*/, MVT::v16f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$elem, 15:iPTR) - Complexity = 8
                  // Dst: (INSERT_SUBREG:v16f32 ?:v16f32:$vec, ?:f32:$elem, sub15:i32)
/*34507*/       0, /*End of Scope*/
/*34508*/     /*Scope*/ 109, /*->34618*/
/*34509*/       OPC_RecordChild2, // #2 = $idx
/*34510*/       OPC_CheckChild2Type, MVT::i32,
/*34512*/       OPC_SwitchType /*4 cases */, 24,  MVT::v2f32,// ->34539
/*34515*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34517*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*34524*/         OPC_EmitInteger, MVT::i32, 0, 
/*34527*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V2), 0,
                      1/*#VTs*/, MVT::v2f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v2f32 v2f32:v2f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V2:v2f32 (IMPLICIT_DEF:i1), ?:v2f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v4f32,// ->34565
/*34541*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34543*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*34550*/         OPC_EmitInteger, MVT::i32, 0, 
/*34553*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V4), 0,
                      1/*#VTs*/, MVT::v4f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v4f32 v4f32:v4f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V4:v4f32 (IMPLICIT_DEF:i1), ?:v4f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v8f32,// ->34591
/*34567*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34569*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*34576*/         OPC_EmitInteger, MVT::i32, 0, 
/*34579*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V8), 0,
                      1/*#VTs*/, MVT::v8f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v8f32 v8f32:v8f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V8:v8f32 (IMPLICIT_DEF:i1), ?:v8f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                /*SwitchType*/ 24,  MVT::v16f32,// ->34617
/*34593*/         OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*34595*/         OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      1/*#VTs*/, MVT::i1, 0/*#Ops*/,  // Results = #3
/*34602*/         OPC_EmitInteger, MVT::i32, 0, 
/*34605*/         OPC_MorphNodeTo, TARGET_VAL(AMDGPU::SI_INDIRECT_DST_V16), 0,
                      1/*#VTs*/, MVT::v16f32, 5/*#Ops*/, 3, 0, 2, 4, 1, 
                  // Src: (vector_insert:v16f32 v16f32:v16f32:$vec, f32:f32:$val, i32:i32:$idx) - Complexity = 3
                  // Dst: (SI_INDIRECT_DST_V16:v16f32 (IMPLICIT_DEF:i1), ?:v16f32:$vec, ?:i32:$idx, 0:i32, ?:f32:$val)
                0, // EndSwitchType
/*34618*/     0, /*End of Scope*/
/*34619*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 23|128,1/*151*/,  TARGET_VAL(ISD::BUILD_VECTOR),// ->34775
/*34624*/   OPC_RecordChild0, // #0 = $x
/*34625*/   OPC_SwitchType /*2 cases */, 72,  MVT::v4i32,// ->34700
/*34628*/     OPC_CheckChild0Type, MVT::i32,
/*34630*/     OPC_RecordChild1, // #1 = $y
/*34631*/     OPC_CheckChild1Type, MVT::i32,
/*34633*/     OPC_RecordChild2, // #2 = $z
/*34634*/     OPC_CheckChild2Type, MVT::i32,
/*34636*/     OPC_RecordChild3, // #3 = $w
/*34637*/     OPC_CheckChild3Type, MVT::i32,
/*34639*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34641*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #4
/*34648*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34651*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*34661*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34664*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*34674*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34677*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*34687*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34690*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 10, 3, 11, 
              // Src: (build_vector:v4i32 i32:i32:$x, i32:i32:$y, i32:i32:$z, i32:i32:$w) - Complexity = 3
              // Dst: (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (INSERT_SUBREG:v4i32 (IMPLICIT_DEF:v4i32), ?:i32:$x, sub0:i32), ?:i32:$y, sub1:i32), ?:i32:$z, sub2:i32), ?:i32:$w, sub3:i32)
            /*SwitchType*/ 72,  MVT::v4f32,// ->34774
/*34702*/     OPC_CheckChild0Type, MVT::f32,
/*34704*/     OPC_RecordChild1, // #1 = $y
/*34705*/     OPC_CheckChild1Type, MVT::f32,
/*34707*/     OPC_RecordChild2, // #2 = $z
/*34708*/     OPC_CheckChild2Type, MVT::f32,
/*34710*/     OPC_RecordChild3, // #3 = $w
/*34711*/     OPC_CheckChild3Type, MVT::f32,
/*34713*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34715*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v4f32, 0/*#Ops*/,  // Results = #4
/*34722*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub0,
/*34725*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 4, 0, 5,  // Results = #6
/*34735*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub1,
/*34738*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 6, 1, 7,  // Results = #8
/*34748*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub2,
/*34751*/     OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 8, 2, 9,  // Results = #10
/*34761*/     OPC_EmitInteger, MVT::i32, AMDGPU::sub3,
/*34764*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 10, 3, 11, 
              // Src: (build_vector:v4f32 f32:f32:$x, f32:f32:$y, f32:f32:$z, f32:f32:$w) - Complexity = 3
              // Dst: (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (INSERT_SUBREG:v4f32 (IMPLICIT_DEF:v4f32), ?:f32:$x, sub0:i32), ?:f32:$y, sub1:i32), ?:f32:$z, sub2:i32), ?:f32:$w, sub3:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 70|128,17/*2246*/,  TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->37025
/*34779*/   OPC_MoveChild, 0,
/*34781*/   OPC_CheckType, MVT::i32,
/*34783*/   OPC_Scope, 94|128,1/*222*/, /*->35008*/ // 10 children in Scope
/*34786*/     OPC_CheckInteger, 0, 
/*34788*/     OPC_MoveParent,
/*34789*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*34790*/     OPC_CheckChild1Type, MVT::v4f32,
/*34792*/     OPC_RecordChild2, // #1 = $srcx
/*34793*/     OPC_MoveChild, 2,
/*34795*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34798*/     OPC_CheckType, MVT::i32,
/*34800*/     OPC_MoveParent,
/*34801*/     OPC_RecordChild3, // #2 = $srcy
/*34802*/     OPC_MoveChild, 3,
/*34804*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34807*/     OPC_CheckType, MVT::i32,
/*34809*/     OPC_MoveParent,
/*34810*/     OPC_RecordChild4, // #3 = $srcz
/*34811*/     OPC_MoveChild, 4,
/*34813*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34816*/     OPC_CheckType, MVT::i32,
/*34818*/     OPC_MoveParent,
/*34819*/     OPC_RecordChild5, // #4 = $srcw
/*34820*/     OPC_MoveChild, 5,
/*34822*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34825*/     OPC_CheckType, MVT::i32,
/*34827*/     OPC_MoveParent,
/*34828*/     OPC_RecordChild6, // #5 = $offsetx
/*34829*/     OPC_MoveChild, 6,
/*34831*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34834*/     OPC_CheckType, MVT::i32,
/*34836*/     OPC_MoveParent,
/*34837*/     OPC_RecordChild7, // #6 = $offsety
/*34838*/     OPC_MoveChild, 7,
/*34840*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34843*/     OPC_CheckType, MVT::i32,
/*34845*/     OPC_MoveParent,
/*34846*/     OPC_MoveChild, 8,
/*34848*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34851*/     OPC_RecordNode, // #7 = $offsetz
/*34852*/     OPC_CheckType, MVT::i32,
/*34854*/     OPC_MoveParent,
/*34855*/     OPC_MoveChild, 9,
/*34857*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34860*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*34861*/     OPC_CheckType, MVT::i32,
/*34863*/     OPC_MoveParent,
/*34864*/     OPC_MoveChild, 10,
/*34866*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34869*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*34870*/     OPC_CheckType, MVT::i32,
/*34872*/     OPC_MoveParent,
/*34873*/     OPC_MoveChild, 11,
/*34875*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34878*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*34879*/     OPC_CheckType, MVT::i32,
/*34881*/     OPC_MoveParent,
/*34882*/     OPC_MoveChild, 12,
/*34884*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34887*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*34888*/     OPC_CheckType, MVT::i32,
/*34890*/     OPC_MoveParent,
/*34891*/     OPC_MoveChild, 13,
/*34893*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34896*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*34897*/     OPC_CheckType, MVT::i32,
/*34899*/     OPC_MoveParent,
/*34900*/     OPC_MoveChild, 14,
/*34902*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34905*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*34906*/     OPC_CheckType, MVT::i32,
/*34908*/     OPC_MoveParent,
/*34909*/     OPC_MoveChild, 15,
/*34911*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34914*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*34915*/     OPC_CheckType, MVT::i32,
/*34917*/     OPC_MoveParent,
/*34918*/     OPC_MoveChild, 16,
/*34920*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34923*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*34924*/     OPC_CheckType, MVT::i32,
/*34926*/     OPC_MoveParent,
/*34927*/     OPC_MoveChild, 17,
/*34929*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34932*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*34933*/     OPC_CheckType, MVT::i32,
/*34935*/     OPC_MoveParent,
/*34936*/     OPC_MoveChild, 18,
/*34938*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*34941*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*34942*/     OPC_CheckType, MVT::i32,
/*34944*/     OPC_MoveParent,
/*34945*/     OPC_CheckType, MVT::v4f32,
/*34947*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*34949*/     OPC_EmitConvertToTarget, 1,
/*34951*/     OPC_EmitConvertToTarget, 2,
/*34953*/     OPC_EmitConvertToTarget, 3,
/*34955*/     OPC_EmitConvertToTarget, 4,
/*34957*/     OPC_EmitConvertToTarget, 5,
/*34959*/     OPC_EmitConvertToTarget, 6,
/*34961*/     OPC_EmitConvertToTarget, 7,
/*34963*/     OPC_EmitConvertToTarget, 8,
/*34965*/     OPC_EmitConvertToTarget, 9,
/*34967*/     OPC_EmitConvertToTarget, 10,
/*34969*/     OPC_EmitConvertToTarget, 11,
/*34971*/     OPC_EmitConvertToTarget, 12,
/*34973*/     OPC_EmitConvertToTarget, 13,
/*34975*/     OPC_EmitConvertToTarget, 14,
/*34977*/     OPC_EmitConvertToTarget, 15,
/*34979*/     OPC_EmitConvertToTarget, 16,
/*34981*/     OPC_EmitConvertToTarget, 17,
/*34983*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 0:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35008*/   /*Scope*/ 94|128,1/*222*/, /*->35232*/
/*35010*/     OPC_CheckInteger, 1, 
/*35012*/     OPC_MoveParent,
/*35013*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35014*/     OPC_CheckChild1Type, MVT::v4f32,
/*35016*/     OPC_RecordChild2, // #1 = $srcx
/*35017*/     OPC_MoveChild, 2,
/*35019*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35022*/     OPC_CheckType, MVT::i32,
/*35024*/     OPC_MoveParent,
/*35025*/     OPC_RecordChild3, // #2 = $srcy
/*35026*/     OPC_MoveChild, 3,
/*35028*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35031*/     OPC_CheckType, MVT::i32,
/*35033*/     OPC_MoveParent,
/*35034*/     OPC_RecordChild4, // #3 = $srcz
/*35035*/     OPC_MoveChild, 4,
/*35037*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35040*/     OPC_CheckType, MVT::i32,
/*35042*/     OPC_MoveParent,
/*35043*/     OPC_RecordChild5, // #4 = $srcw
/*35044*/     OPC_MoveChild, 5,
/*35046*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35049*/     OPC_CheckType, MVT::i32,
/*35051*/     OPC_MoveParent,
/*35052*/     OPC_RecordChild6, // #5 = $offsetx
/*35053*/     OPC_MoveChild, 6,
/*35055*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35058*/     OPC_CheckType, MVT::i32,
/*35060*/     OPC_MoveParent,
/*35061*/     OPC_RecordChild7, // #6 = $offsety
/*35062*/     OPC_MoveChild, 7,
/*35064*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35067*/     OPC_CheckType, MVT::i32,
/*35069*/     OPC_MoveParent,
/*35070*/     OPC_MoveChild, 8,
/*35072*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35075*/     OPC_RecordNode, // #7 = $offsetz
/*35076*/     OPC_CheckType, MVT::i32,
/*35078*/     OPC_MoveParent,
/*35079*/     OPC_MoveChild, 9,
/*35081*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35084*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35085*/     OPC_CheckType, MVT::i32,
/*35087*/     OPC_MoveParent,
/*35088*/     OPC_MoveChild, 10,
/*35090*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35093*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35094*/     OPC_CheckType, MVT::i32,
/*35096*/     OPC_MoveParent,
/*35097*/     OPC_MoveChild, 11,
/*35099*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35102*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35103*/     OPC_CheckType, MVT::i32,
/*35105*/     OPC_MoveParent,
/*35106*/     OPC_MoveChild, 12,
/*35108*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35111*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35112*/     OPC_CheckType, MVT::i32,
/*35114*/     OPC_MoveParent,
/*35115*/     OPC_MoveChild, 13,
/*35117*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35120*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35121*/     OPC_CheckType, MVT::i32,
/*35123*/     OPC_MoveParent,
/*35124*/     OPC_MoveChild, 14,
/*35126*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35129*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35130*/     OPC_CheckType, MVT::i32,
/*35132*/     OPC_MoveParent,
/*35133*/     OPC_MoveChild, 15,
/*35135*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35138*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35139*/     OPC_CheckType, MVT::i32,
/*35141*/     OPC_MoveParent,
/*35142*/     OPC_MoveChild, 16,
/*35144*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35147*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35148*/     OPC_CheckType, MVT::i32,
/*35150*/     OPC_MoveParent,
/*35151*/     OPC_MoveChild, 17,
/*35153*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35156*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35157*/     OPC_CheckType, MVT::i32,
/*35159*/     OPC_MoveParent,
/*35160*/     OPC_MoveChild, 18,
/*35162*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35165*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35166*/     OPC_CheckType, MVT::i32,
/*35168*/     OPC_MoveParent,
/*35169*/     OPC_CheckType, MVT::v4f32,
/*35171*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35173*/     OPC_EmitConvertToTarget, 1,
/*35175*/     OPC_EmitConvertToTarget, 2,
/*35177*/     OPC_EmitConvertToTarget, 3,
/*35179*/     OPC_EmitConvertToTarget, 4,
/*35181*/     OPC_EmitConvertToTarget, 5,
/*35183*/     OPC_EmitConvertToTarget, 6,
/*35185*/     OPC_EmitConvertToTarget, 7,
/*35187*/     OPC_EmitConvertToTarget, 8,
/*35189*/     OPC_EmitConvertToTarget, 9,
/*35191*/     OPC_EmitConvertToTarget, 10,
/*35193*/     OPC_EmitConvertToTarget, 11,
/*35195*/     OPC_EmitConvertToTarget, 12,
/*35197*/     OPC_EmitConvertToTarget, 13,
/*35199*/     OPC_EmitConvertToTarget, 14,
/*35201*/     OPC_EmitConvertToTarget, 15,
/*35203*/     OPC_EmitConvertToTarget, 16,
/*35205*/     OPC_EmitConvertToTarget, 17,
/*35207*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 1:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35232*/   /*Scope*/ 94|128,1/*222*/, /*->35456*/
/*35234*/     OPC_CheckInteger, 2, 
/*35236*/     OPC_MoveParent,
/*35237*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35238*/     OPC_CheckChild1Type, MVT::v4f32,
/*35240*/     OPC_RecordChild2, // #1 = $srcx
/*35241*/     OPC_MoveChild, 2,
/*35243*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35246*/     OPC_CheckType, MVT::i32,
/*35248*/     OPC_MoveParent,
/*35249*/     OPC_RecordChild3, // #2 = $srcy
/*35250*/     OPC_MoveChild, 3,
/*35252*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35255*/     OPC_CheckType, MVT::i32,
/*35257*/     OPC_MoveParent,
/*35258*/     OPC_RecordChild4, // #3 = $srcz
/*35259*/     OPC_MoveChild, 4,
/*35261*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35264*/     OPC_CheckType, MVT::i32,
/*35266*/     OPC_MoveParent,
/*35267*/     OPC_RecordChild5, // #4 = $srcw
/*35268*/     OPC_MoveChild, 5,
/*35270*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35273*/     OPC_CheckType, MVT::i32,
/*35275*/     OPC_MoveParent,
/*35276*/     OPC_RecordChild6, // #5 = $offsetx
/*35277*/     OPC_MoveChild, 6,
/*35279*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35282*/     OPC_CheckType, MVT::i32,
/*35284*/     OPC_MoveParent,
/*35285*/     OPC_RecordChild7, // #6 = $offsety
/*35286*/     OPC_MoveChild, 7,
/*35288*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35291*/     OPC_CheckType, MVT::i32,
/*35293*/     OPC_MoveParent,
/*35294*/     OPC_MoveChild, 8,
/*35296*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35299*/     OPC_RecordNode, // #7 = $offsetz
/*35300*/     OPC_CheckType, MVT::i32,
/*35302*/     OPC_MoveParent,
/*35303*/     OPC_MoveChild, 9,
/*35305*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35308*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35309*/     OPC_CheckType, MVT::i32,
/*35311*/     OPC_MoveParent,
/*35312*/     OPC_MoveChild, 10,
/*35314*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35317*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35318*/     OPC_CheckType, MVT::i32,
/*35320*/     OPC_MoveParent,
/*35321*/     OPC_MoveChild, 11,
/*35323*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35326*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35327*/     OPC_CheckType, MVT::i32,
/*35329*/     OPC_MoveParent,
/*35330*/     OPC_MoveChild, 12,
/*35332*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35335*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35336*/     OPC_CheckType, MVT::i32,
/*35338*/     OPC_MoveParent,
/*35339*/     OPC_MoveChild, 13,
/*35341*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35344*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35345*/     OPC_CheckType, MVT::i32,
/*35347*/     OPC_MoveParent,
/*35348*/     OPC_MoveChild, 14,
/*35350*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35353*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35354*/     OPC_CheckType, MVT::i32,
/*35356*/     OPC_MoveParent,
/*35357*/     OPC_MoveChild, 15,
/*35359*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35362*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35363*/     OPC_CheckType, MVT::i32,
/*35365*/     OPC_MoveParent,
/*35366*/     OPC_MoveChild, 16,
/*35368*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35371*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35372*/     OPC_CheckType, MVT::i32,
/*35374*/     OPC_MoveParent,
/*35375*/     OPC_MoveChild, 17,
/*35377*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35380*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35381*/     OPC_CheckType, MVT::i32,
/*35383*/     OPC_MoveParent,
/*35384*/     OPC_MoveChild, 18,
/*35386*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35389*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35390*/     OPC_CheckType, MVT::i32,
/*35392*/     OPC_MoveParent,
/*35393*/     OPC_CheckType, MVT::v4f32,
/*35395*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35397*/     OPC_EmitConvertToTarget, 1,
/*35399*/     OPC_EmitConvertToTarget, 2,
/*35401*/     OPC_EmitConvertToTarget, 3,
/*35403*/     OPC_EmitConvertToTarget, 4,
/*35405*/     OPC_EmitConvertToTarget, 5,
/*35407*/     OPC_EmitConvertToTarget, 6,
/*35409*/     OPC_EmitConvertToTarget, 7,
/*35411*/     OPC_EmitConvertToTarget, 8,
/*35413*/     OPC_EmitConvertToTarget, 9,
/*35415*/     OPC_EmitConvertToTarget, 10,
/*35417*/     OPC_EmitConvertToTarget, 11,
/*35419*/     OPC_EmitConvertToTarget, 12,
/*35421*/     OPC_EmitConvertToTarget, 13,
/*35423*/     OPC_EmitConvertToTarget, 14,
/*35425*/     OPC_EmitConvertToTarget, 15,
/*35427*/     OPC_EmitConvertToTarget, 16,
/*35429*/     OPC_EmitConvertToTarget, 17,
/*35431*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 2:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35456*/   /*Scope*/ 94|128,1/*222*/, /*->35680*/
/*35458*/     OPC_CheckInteger, 3, 
/*35460*/     OPC_MoveParent,
/*35461*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35462*/     OPC_CheckChild1Type, MVT::v4f32,
/*35464*/     OPC_RecordChild2, // #1 = $srcx
/*35465*/     OPC_MoveChild, 2,
/*35467*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35470*/     OPC_CheckType, MVT::i32,
/*35472*/     OPC_MoveParent,
/*35473*/     OPC_RecordChild3, // #2 = $srcy
/*35474*/     OPC_MoveChild, 3,
/*35476*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35479*/     OPC_CheckType, MVT::i32,
/*35481*/     OPC_MoveParent,
/*35482*/     OPC_RecordChild4, // #3 = $srcz
/*35483*/     OPC_MoveChild, 4,
/*35485*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35488*/     OPC_CheckType, MVT::i32,
/*35490*/     OPC_MoveParent,
/*35491*/     OPC_RecordChild5, // #4 = $srcw
/*35492*/     OPC_MoveChild, 5,
/*35494*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35497*/     OPC_CheckType, MVT::i32,
/*35499*/     OPC_MoveParent,
/*35500*/     OPC_RecordChild6, // #5 = $offsetx
/*35501*/     OPC_MoveChild, 6,
/*35503*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35506*/     OPC_CheckType, MVT::i32,
/*35508*/     OPC_MoveParent,
/*35509*/     OPC_RecordChild7, // #6 = $offsety
/*35510*/     OPC_MoveChild, 7,
/*35512*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35515*/     OPC_CheckType, MVT::i32,
/*35517*/     OPC_MoveParent,
/*35518*/     OPC_MoveChild, 8,
/*35520*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35523*/     OPC_RecordNode, // #7 = $offsetz
/*35524*/     OPC_CheckType, MVT::i32,
/*35526*/     OPC_MoveParent,
/*35527*/     OPC_MoveChild, 9,
/*35529*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35532*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35533*/     OPC_CheckType, MVT::i32,
/*35535*/     OPC_MoveParent,
/*35536*/     OPC_MoveChild, 10,
/*35538*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35541*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35542*/     OPC_CheckType, MVT::i32,
/*35544*/     OPC_MoveParent,
/*35545*/     OPC_MoveChild, 11,
/*35547*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35550*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35551*/     OPC_CheckType, MVT::i32,
/*35553*/     OPC_MoveParent,
/*35554*/     OPC_MoveChild, 12,
/*35556*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35559*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35560*/     OPC_CheckType, MVT::i32,
/*35562*/     OPC_MoveParent,
/*35563*/     OPC_MoveChild, 13,
/*35565*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35568*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35569*/     OPC_CheckType, MVT::i32,
/*35571*/     OPC_MoveParent,
/*35572*/     OPC_MoveChild, 14,
/*35574*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35577*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35578*/     OPC_CheckType, MVT::i32,
/*35580*/     OPC_MoveParent,
/*35581*/     OPC_MoveChild, 15,
/*35583*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35586*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35587*/     OPC_CheckType, MVT::i32,
/*35589*/     OPC_MoveParent,
/*35590*/     OPC_MoveChild, 16,
/*35592*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35595*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35596*/     OPC_CheckType, MVT::i32,
/*35598*/     OPC_MoveParent,
/*35599*/     OPC_MoveChild, 17,
/*35601*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35604*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35605*/     OPC_CheckType, MVT::i32,
/*35607*/     OPC_MoveParent,
/*35608*/     OPC_MoveChild, 18,
/*35610*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35613*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35614*/     OPC_CheckType, MVT::i32,
/*35616*/     OPC_MoveParent,
/*35617*/     OPC_CheckType, MVT::v4f32,
/*35619*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35621*/     OPC_EmitConvertToTarget, 1,
/*35623*/     OPC_EmitConvertToTarget, 2,
/*35625*/     OPC_EmitConvertToTarget, 3,
/*35627*/     OPC_EmitConvertToTarget, 4,
/*35629*/     OPC_EmitConvertToTarget, 5,
/*35631*/     OPC_EmitConvertToTarget, 6,
/*35633*/     OPC_EmitConvertToTarget, 7,
/*35635*/     OPC_EmitConvertToTarget, 8,
/*35637*/     OPC_EmitConvertToTarget, 9,
/*35639*/     OPC_EmitConvertToTarget, 10,
/*35641*/     OPC_EmitConvertToTarget, 11,
/*35643*/     OPC_EmitConvertToTarget, 12,
/*35645*/     OPC_EmitConvertToTarget, 13,
/*35647*/     OPC_EmitConvertToTarget, 14,
/*35649*/     OPC_EmitConvertToTarget, 15,
/*35651*/     OPC_EmitConvertToTarget, 16,
/*35653*/     OPC_EmitConvertToTarget, 17,
/*35655*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_L), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 3:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_L:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35680*/   /*Scope*/ 94|128,1/*222*/, /*->35904*/
/*35682*/     OPC_CheckInteger, 4, 
/*35684*/     OPC_MoveParent,
/*35685*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35686*/     OPC_CheckChild1Type, MVT::v4f32,
/*35688*/     OPC_RecordChild2, // #1 = $srcx
/*35689*/     OPC_MoveChild, 2,
/*35691*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35694*/     OPC_CheckType, MVT::i32,
/*35696*/     OPC_MoveParent,
/*35697*/     OPC_RecordChild3, // #2 = $srcy
/*35698*/     OPC_MoveChild, 3,
/*35700*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35703*/     OPC_CheckType, MVT::i32,
/*35705*/     OPC_MoveParent,
/*35706*/     OPC_RecordChild4, // #3 = $srcz
/*35707*/     OPC_MoveChild, 4,
/*35709*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35712*/     OPC_CheckType, MVT::i32,
/*35714*/     OPC_MoveParent,
/*35715*/     OPC_RecordChild5, // #4 = $srcw
/*35716*/     OPC_MoveChild, 5,
/*35718*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35721*/     OPC_CheckType, MVT::i32,
/*35723*/     OPC_MoveParent,
/*35724*/     OPC_RecordChild6, // #5 = $offsetx
/*35725*/     OPC_MoveChild, 6,
/*35727*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35730*/     OPC_CheckType, MVT::i32,
/*35732*/     OPC_MoveParent,
/*35733*/     OPC_RecordChild7, // #6 = $offsety
/*35734*/     OPC_MoveChild, 7,
/*35736*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35739*/     OPC_CheckType, MVT::i32,
/*35741*/     OPC_MoveParent,
/*35742*/     OPC_MoveChild, 8,
/*35744*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35747*/     OPC_RecordNode, // #7 = $offsetz
/*35748*/     OPC_CheckType, MVT::i32,
/*35750*/     OPC_MoveParent,
/*35751*/     OPC_MoveChild, 9,
/*35753*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35756*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35757*/     OPC_CheckType, MVT::i32,
/*35759*/     OPC_MoveParent,
/*35760*/     OPC_MoveChild, 10,
/*35762*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35765*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35766*/     OPC_CheckType, MVT::i32,
/*35768*/     OPC_MoveParent,
/*35769*/     OPC_MoveChild, 11,
/*35771*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35774*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35775*/     OPC_CheckType, MVT::i32,
/*35777*/     OPC_MoveParent,
/*35778*/     OPC_MoveChild, 12,
/*35780*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35783*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*35784*/     OPC_CheckType, MVT::i32,
/*35786*/     OPC_MoveParent,
/*35787*/     OPC_MoveChild, 13,
/*35789*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35792*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*35793*/     OPC_CheckType, MVT::i32,
/*35795*/     OPC_MoveParent,
/*35796*/     OPC_MoveChild, 14,
/*35798*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35801*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*35802*/     OPC_CheckType, MVT::i32,
/*35804*/     OPC_MoveParent,
/*35805*/     OPC_MoveChild, 15,
/*35807*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35810*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*35811*/     OPC_CheckType, MVT::i32,
/*35813*/     OPC_MoveParent,
/*35814*/     OPC_MoveChild, 16,
/*35816*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35819*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*35820*/     OPC_CheckType, MVT::i32,
/*35822*/     OPC_MoveParent,
/*35823*/     OPC_MoveChild, 17,
/*35825*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35828*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*35829*/     OPC_CheckType, MVT::i32,
/*35831*/     OPC_MoveParent,
/*35832*/     OPC_MoveChild, 18,
/*35834*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35837*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*35838*/     OPC_CheckType, MVT::i32,
/*35840*/     OPC_MoveParent,
/*35841*/     OPC_CheckType, MVT::v4f32,
/*35843*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*35845*/     OPC_EmitConvertToTarget, 1,
/*35847*/     OPC_EmitConvertToTarget, 2,
/*35849*/     OPC_EmitConvertToTarget, 3,
/*35851*/     OPC_EmitConvertToTarget, 4,
/*35853*/     OPC_EmitConvertToTarget, 5,
/*35855*/     OPC_EmitConvertToTarget, 6,
/*35857*/     OPC_EmitConvertToTarget, 7,
/*35859*/     OPC_EmitConvertToTarget, 8,
/*35861*/     OPC_EmitConvertToTarget, 9,
/*35863*/     OPC_EmitConvertToTarget, 10,
/*35865*/     OPC_EmitConvertToTarget, 11,
/*35867*/     OPC_EmitConvertToTarget, 12,
/*35869*/     OPC_EmitConvertToTarget, 13,
/*35871*/     OPC_EmitConvertToTarget, 14,
/*35873*/     OPC_EmitConvertToTarget, 15,
/*35875*/     OPC_EmitConvertToTarget, 16,
/*35877*/     OPC_EmitConvertToTarget, 17,
/*35879*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 4:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*35904*/   /*Scope*/ 94|128,1/*222*/, /*->36128*/
/*35906*/     OPC_CheckInteger, 5, 
/*35908*/     OPC_MoveParent,
/*35909*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*35910*/     OPC_CheckChild1Type, MVT::v4f32,
/*35912*/     OPC_RecordChild2, // #1 = $srcx
/*35913*/     OPC_MoveChild, 2,
/*35915*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35918*/     OPC_CheckType, MVT::i32,
/*35920*/     OPC_MoveParent,
/*35921*/     OPC_RecordChild3, // #2 = $srcy
/*35922*/     OPC_MoveChild, 3,
/*35924*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35927*/     OPC_CheckType, MVT::i32,
/*35929*/     OPC_MoveParent,
/*35930*/     OPC_RecordChild4, // #3 = $srcz
/*35931*/     OPC_MoveChild, 4,
/*35933*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35936*/     OPC_CheckType, MVT::i32,
/*35938*/     OPC_MoveParent,
/*35939*/     OPC_RecordChild5, // #4 = $srcw
/*35940*/     OPC_MoveChild, 5,
/*35942*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35945*/     OPC_CheckType, MVT::i32,
/*35947*/     OPC_MoveParent,
/*35948*/     OPC_RecordChild6, // #5 = $offsetx
/*35949*/     OPC_MoveChild, 6,
/*35951*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35954*/     OPC_CheckType, MVT::i32,
/*35956*/     OPC_MoveParent,
/*35957*/     OPC_RecordChild7, // #6 = $offsety
/*35958*/     OPC_MoveChild, 7,
/*35960*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35963*/     OPC_CheckType, MVT::i32,
/*35965*/     OPC_MoveParent,
/*35966*/     OPC_MoveChild, 8,
/*35968*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35971*/     OPC_RecordNode, // #7 = $offsetz
/*35972*/     OPC_CheckType, MVT::i32,
/*35974*/     OPC_MoveParent,
/*35975*/     OPC_MoveChild, 9,
/*35977*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35980*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*35981*/     OPC_CheckType, MVT::i32,
/*35983*/     OPC_MoveParent,
/*35984*/     OPC_MoveChild, 10,
/*35986*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35989*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*35990*/     OPC_CheckType, MVT::i32,
/*35992*/     OPC_MoveParent,
/*35993*/     OPC_MoveChild, 11,
/*35995*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*35998*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*35999*/     OPC_CheckType, MVT::i32,
/*36001*/     OPC_MoveParent,
/*36002*/     OPC_MoveChild, 12,
/*36004*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36007*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36008*/     OPC_CheckType, MVT::i32,
/*36010*/     OPC_MoveParent,
/*36011*/     OPC_MoveChild, 13,
/*36013*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36016*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36017*/     OPC_CheckType, MVT::i32,
/*36019*/     OPC_MoveParent,
/*36020*/     OPC_MoveChild, 14,
/*36022*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36025*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36026*/     OPC_CheckType, MVT::i32,
/*36028*/     OPC_MoveParent,
/*36029*/     OPC_MoveChild, 15,
/*36031*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36034*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36035*/     OPC_CheckType, MVT::i32,
/*36037*/     OPC_MoveParent,
/*36038*/     OPC_MoveChild, 16,
/*36040*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36043*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36044*/     OPC_CheckType, MVT::i32,
/*36046*/     OPC_MoveParent,
/*36047*/     OPC_MoveChild, 17,
/*36049*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36052*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36053*/     OPC_CheckType, MVT::i32,
/*36055*/     OPC_MoveParent,
/*36056*/     OPC_MoveChild, 18,
/*36058*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36061*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36062*/     OPC_CheckType, MVT::i32,
/*36064*/     OPC_MoveParent,
/*36065*/     OPC_CheckType, MVT::v4f32,
/*36067*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36069*/     OPC_EmitConvertToTarget, 1,
/*36071*/     OPC_EmitConvertToTarget, 2,
/*36073*/     OPC_EmitConvertToTarget, 3,
/*36075*/     OPC_EmitConvertToTarget, 4,
/*36077*/     OPC_EmitConvertToTarget, 5,
/*36079*/     OPC_EmitConvertToTarget, 6,
/*36081*/     OPC_EmitConvertToTarget, 7,
/*36083*/     OPC_EmitConvertToTarget, 8,
/*36085*/     OPC_EmitConvertToTarget, 9,
/*36087*/     OPC_EmitConvertToTarget, 10,
/*36089*/     OPC_EmitConvertToTarget, 11,
/*36091*/     OPC_EmitConvertToTarget, 12,
/*36093*/     OPC_EmitConvertToTarget, 13,
/*36095*/     OPC_EmitConvertToTarget, 14,
/*36097*/     OPC_EmitConvertToTarget, 15,
/*36099*/     OPC_EmitConvertToTarget, 16,
/*36101*/     OPC_EmitConvertToTarget, 17,
/*36103*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_SAMPLE_C_LB), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 5:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_SAMPLE_C_LB:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36128*/   /*Scope*/ 94|128,1/*222*/, /*->36352*/
/*36130*/     OPC_CheckInteger, 6, 
/*36132*/     OPC_MoveParent,
/*36133*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36134*/     OPC_CheckChild1Type, MVT::v4i32,
/*36136*/     OPC_RecordChild2, // #1 = $srcx
/*36137*/     OPC_MoveChild, 2,
/*36139*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36142*/     OPC_CheckType, MVT::i32,
/*36144*/     OPC_MoveParent,
/*36145*/     OPC_RecordChild3, // #2 = $srcy
/*36146*/     OPC_MoveChild, 3,
/*36148*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36151*/     OPC_CheckType, MVT::i32,
/*36153*/     OPC_MoveParent,
/*36154*/     OPC_RecordChild4, // #3 = $srcz
/*36155*/     OPC_MoveChild, 4,
/*36157*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36160*/     OPC_CheckType, MVT::i32,
/*36162*/     OPC_MoveParent,
/*36163*/     OPC_RecordChild5, // #4 = $srcw
/*36164*/     OPC_MoveChild, 5,
/*36166*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36169*/     OPC_CheckType, MVT::i32,
/*36171*/     OPC_MoveParent,
/*36172*/     OPC_RecordChild6, // #5 = $offsetx
/*36173*/     OPC_MoveChild, 6,
/*36175*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36178*/     OPC_CheckType, MVT::i32,
/*36180*/     OPC_MoveParent,
/*36181*/     OPC_RecordChild7, // #6 = $offsety
/*36182*/     OPC_MoveChild, 7,
/*36184*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36187*/     OPC_CheckType, MVT::i32,
/*36189*/     OPC_MoveParent,
/*36190*/     OPC_MoveChild, 8,
/*36192*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36195*/     OPC_RecordNode, // #7 = $offsetz
/*36196*/     OPC_CheckType, MVT::i32,
/*36198*/     OPC_MoveParent,
/*36199*/     OPC_MoveChild, 9,
/*36201*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36204*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36205*/     OPC_CheckType, MVT::i32,
/*36207*/     OPC_MoveParent,
/*36208*/     OPC_MoveChild, 10,
/*36210*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36213*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36214*/     OPC_CheckType, MVT::i32,
/*36216*/     OPC_MoveParent,
/*36217*/     OPC_MoveChild, 11,
/*36219*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36222*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36223*/     OPC_CheckType, MVT::i32,
/*36225*/     OPC_MoveParent,
/*36226*/     OPC_MoveChild, 12,
/*36228*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36231*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36232*/     OPC_CheckType, MVT::i32,
/*36234*/     OPC_MoveParent,
/*36235*/     OPC_MoveChild, 13,
/*36237*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36240*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36241*/     OPC_CheckType, MVT::i32,
/*36243*/     OPC_MoveParent,
/*36244*/     OPC_MoveChild, 14,
/*36246*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36249*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36250*/     OPC_CheckType, MVT::i32,
/*36252*/     OPC_MoveParent,
/*36253*/     OPC_MoveChild, 15,
/*36255*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36258*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36259*/     OPC_CheckType, MVT::i32,
/*36261*/     OPC_MoveParent,
/*36262*/     OPC_MoveChild, 16,
/*36264*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36267*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36268*/     OPC_CheckType, MVT::i32,
/*36270*/     OPC_MoveParent,
/*36271*/     OPC_MoveChild, 17,
/*36273*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36276*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36277*/     OPC_CheckType, MVT::i32,
/*36279*/     OPC_MoveParent,
/*36280*/     OPC_MoveChild, 18,
/*36282*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36285*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36286*/     OPC_CheckType, MVT::i32,
/*36288*/     OPC_MoveParent,
/*36289*/     OPC_CheckType, MVT::v4f32,
/*36291*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36293*/     OPC_EmitConvertToTarget, 1,
/*36295*/     OPC_EmitConvertToTarget, 2,
/*36297*/     OPC_EmitConvertToTarget, 3,
/*36299*/     OPC_EmitConvertToTarget, 4,
/*36301*/     OPC_EmitConvertToTarget, 5,
/*36303*/     OPC_EmitConvertToTarget, 6,
/*36305*/     OPC_EmitConvertToTarget, 7,
/*36307*/     OPC_EmitConvertToTarget, 8,
/*36309*/     OPC_EmitConvertToTarget, 9,
/*36311*/     OPC_EmitConvertToTarget, 10,
/*36313*/     OPC_EmitConvertToTarget, 11,
/*36315*/     OPC_EmitConvertToTarget, 12,
/*36317*/     OPC_EmitConvertToTarget, 13,
/*36319*/     OPC_EmitConvertToTarget, 14,
/*36321*/     OPC_EmitConvertToTarget, 15,
/*36323*/     OPC_EmitConvertToTarget, 16,
/*36325*/     OPC_EmitConvertToTarget, 17,
/*36327*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_LD), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 6:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_LD:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36352*/   /*Scope*/ 94|128,1/*222*/, /*->36576*/
/*36354*/     OPC_CheckInteger, 7, 
/*36356*/     OPC_MoveParent,
/*36357*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36358*/     OPC_CheckChild1Type, MVT::v4i32,
/*36360*/     OPC_RecordChild2, // #1 = $srcx
/*36361*/     OPC_MoveChild, 2,
/*36363*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36366*/     OPC_CheckType, MVT::i32,
/*36368*/     OPC_MoveParent,
/*36369*/     OPC_RecordChild3, // #2 = $srcy
/*36370*/     OPC_MoveChild, 3,
/*36372*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36375*/     OPC_CheckType, MVT::i32,
/*36377*/     OPC_MoveParent,
/*36378*/     OPC_RecordChild4, // #3 = $srcz
/*36379*/     OPC_MoveChild, 4,
/*36381*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36384*/     OPC_CheckType, MVT::i32,
/*36386*/     OPC_MoveParent,
/*36387*/     OPC_RecordChild5, // #4 = $srcw
/*36388*/     OPC_MoveChild, 5,
/*36390*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36393*/     OPC_CheckType, MVT::i32,
/*36395*/     OPC_MoveParent,
/*36396*/     OPC_RecordChild6, // #5 = $offsetx
/*36397*/     OPC_MoveChild, 6,
/*36399*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36402*/     OPC_CheckType, MVT::i32,
/*36404*/     OPC_MoveParent,
/*36405*/     OPC_RecordChild7, // #6 = $offsety
/*36406*/     OPC_MoveChild, 7,
/*36408*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36411*/     OPC_CheckType, MVT::i32,
/*36413*/     OPC_MoveParent,
/*36414*/     OPC_MoveChild, 8,
/*36416*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36419*/     OPC_RecordNode, // #7 = $offsetz
/*36420*/     OPC_CheckType, MVT::i32,
/*36422*/     OPC_MoveParent,
/*36423*/     OPC_MoveChild, 9,
/*36425*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36428*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36429*/     OPC_CheckType, MVT::i32,
/*36431*/     OPC_MoveParent,
/*36432*/     OPC_MoveChild, 10,
/*36434*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36437*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36438*/     OPC_CheckType, MVT::i32,
/*36440*/     OPC_MoveParent,
/*36441*/     OPC_MoveChild, 11,
/*36443*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36446*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36447*/     OPC_CheckType, MVT::i32,
/*36449*/     OPC_MoveParent,
/*36450*/     OPC_MoveChild, 12,
/*36452*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36455*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36456*/     OPC_CheckType, MVT::i32,
/*36458*/     OPC_MoveParent,
/*36459*/     OPC_MoveChild, 13,
/*36461*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36464*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36465*/     OPC_CheckType, MVT::i32,
/*36467*/     OPC_MoveParent,
/*36468*/     OPC_MoveChild, 14,
/*36470*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36473*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36474*/     OPC_CheckType, MVT::i32,
/*36476*/     OPC_MoveParent,
/*36477*/     OPC_MoveChild, 15,
/*36479*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36482*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36483*/     OPC_CheckType, MVT::i32,
/*36485*/     OPC_MoveParent,
/*36486*/     OPC_MoveChild, 16,
/*36488*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36491*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36492*/     OPC_CheckType, MVT::i32,
/*36494*/     OPC_MoveParent,
/*36495*/     OPC_MoveChild, 17,
/*36497*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36500*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36501*/     OPC_CheckType, MVT::i32,
/*36503*/     OPC_MoveParent,
/*36504*/     OPC_MoveChild, 18,
/*36506*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36509*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36510*/     OPC_CheckType, MVT::i32,
/*36512*/     OPC_MoveParent,
/*36513*/     OPC_CheckType, MVT::v4f32,
/*36515*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36517*/     OPC_EmitConvertToTarget, 1,
/*36519*/     OPC_EmitConvertToTarget, 2,
/*36521*/     OPC_EmitConvertToTarget, 3,
/*36523*/     OPC_EmitConvertToTarget, 4,
/*36525*/     OPC_EmitConvertToTarget, 5,
/*36527*/     OPC_EmitConvertToTarget, 6,
/*36529*/     OPC_EmitConvertToTarget, 7,
/*36531*/     OPC_EmitConvertToTarget, 8,
/*36533*/     OPC_EmitConvertToTarget, 9,
/*36535*/     OPC_EmitConvertToTarget, 10,
/*36537*/     OPC_EmitConvertToTarget, 11,
/*36539*/     OPC_EmitConvertToTarget, 12,
/*36541*/     OPC_EmitConvertToTarget, 13,
/*36543*/     OPC_EmitConvertToTarget, 14,
/*36545*/     OPC_EmitConvertToTarget, 15,
/*36547*/     OPC_EmitConvertToTarget, 16,
/*36549*/     OPC_EmitConvertToTarget, 17,
/*36551*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_TEXTURE_RESINFO), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 7:i32, v4i32:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_TEXTURE_RESINFO:v4f32 R600_Reg128:v4i32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36576*/   /*Scope*/ 94|128,1/*222*/, /*->36800*/
/*36578*/     OPC_CheckInteger, 8, 
/*36580*/     OPC_MoveParent,
/*36581*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36582*/     OPC_CheckChild1Type, MVT::v4f32,
/*36584*/     OPC_RecordChild2, // #1 = $srcx
/*36585*/     OPC_MoveChild, 2,
/*36587*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36590*/     OPC_CheckType, MVT::i32,
/*36592*/     OPC_MoveParent,
/*36593*/     OPC_RecordChild3, // #2 = $srcy
/*36594*/     OPC_MoveChild, 3,
/*36596*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36599*/     OPC_CheckType, MVT::i32,
/*36601*/     OPC_MoveParent,
/*36602*/     OPC_RecordChild4, // #3 = $srcz
/*36603*/     OPC_MoveChild, 4,
/*36605*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36608*/     OPC_CheckType, MVT::i32,
/*36610*/     OPC_MoveParent,
/*36611*/     OPC_RecordChild5, // #4 = $srcw
/*36612*/     OPC_MoveChild, 5,
/*36614*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36617*/     OPC_CheckType, MVT::i32,
/*36619*/     OPC_MoveParent,
/*36620*/     OPC_RecordChild6, // #5 = $offsetx
/*36621*/     OPC_MoveChild, 6,
/*36623*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36626*/     OPC_CheckType, MVT::i32,
/*36628*/     OPC_MoveParent,
/*36629*/     OPC_RecordChild7, // #6 = $offsety
/*36630*/     OPC_MoveChild, 7,
/*36632*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36635*/     OPC_CheckType, MVT::i32,
/*36637*/     OPC_MoveParent,
/*36638*/     OPC_MoveChild, 8,
/*36640*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36643*/     OPC_RecordNode, // #7 = $offsetz
/*36644*/     OPC_CheckType, MVT::i32,
/*36646*/     OPC_MoveParent,
/*36647*/     OPC_MoveChild, 9,
/*36649*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36652*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36653*/     OPC_CheckType, MVT::i32,
/*36655*/     OPC_MoveParent,
/*36656*/     OPC_MoveChild, 10,
/*36658*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36661*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36662*/     OPC_CheckType, MVT::i32,
/*36664*/     OPC_MoveParent,
/*36665*/     OPC_MoveChild, 11,
/*36667*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36670*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36671*/     OPC_CheckType, MVT::i32,
/*36673*/     OPC_MoveParent,
/*36674*/     OPC_MoveChild, 12,
/*36676*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36679*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36680*/     OPC_CheckType, MVT::i32,
/*36682*/     OPC_MoveParent,
/*36683*/     OPC_MoveChild, 13,
/*36685*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36688*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36689*/     OPC_CheckType, MVT::i32,
/*36691*/     OPC_MoveParent,
/*36692*/     OPC_MoveChild, 14,
/*36694*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36697*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36698*/     OPC_CheckType, MVT::i32,
/*36700*/     OPC_MoveParent,
/*36701*/     OPC_MoveChild, 15,
/*36703*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36706*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36707*/     OPC_CheckType, MVT::i32,
/*36709*/     OPC_MoveParent,
/*36710*/     OPC_MoveChild, 16,
/*36712*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36715*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36716*/     OPC_CheckType, MVT::i32,
/*36718*/     OPC_MoveParent,
/*36719*/     OPC_MoveChild, 17,
/*36721*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36724*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36725*/     OPC_CheckType, MVT::i32,
/*36727*/     OPC_MoveParent,
/*36728*/     OPC_MoveChild, 18,
/*36730*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36733*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36734*/     OPC_CheckType, MVT::i32,
/*36736*/     OPC_MoveParent,
/*36737*/     OPC_CheckType, MVT::v4f32,
/*36739*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36741*/     OPC_EmitConvertToTarget, 1,
/*36743*/     OPC_EmitConvertToTarget, 2,
/*36745*/     OPC_EmitConvertToTarget, 3,
/*36747*/     OPC_EmitConvertToTarget, 4,
/*36749*/     OPC_EmitConvertToTarget, 5,
/*36751*/     OPC_EmitConvertToTarget, 6,
/*36753*/     OPC_EmitConvertToTarget, 7,
/*36755*/     OPC_EmitConvertToTarget, 8,
/*36757*/     OPC_EmitConvertToTarget, 9,
/*36759*/     OPC_EmitConvertToTarget, 10,
/*36761*/     OPC_EmitConvertToTarget, 11,
/*36763*/     OPC_EmitConvertToTarget, 12,
/*36765*/     OPC_EmitConvertToTarget, 13,
/*36767*/     OPC_EmitConvertToTarget, 14,
/*36769*/     OPC_EmitConvertToTarget, 15,
/*36771*/     OPC_EmitConvertToTarget, 16,
/*36773*/     OPC_EmitConvertToTarget, 17,
/*36775*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_H), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 8:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_H:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*36800*/   /*Scope*/ 94|128,1/*222*/, /*->37024*/
/*36802*/     OPC_CheckInteger, 9, 
/*36804*/     OPC_MoveParent,
/*36805*/     OPC_RecordChild1, // #0 = $SRC_GPR
/*36806*/     OPC_CheckChild1Type, MVT::v4f32,
/*36808*/     OPC_RecordChild2, // #1 = $srcx
/*36809*/     OPC_MoveChild, 2,
/*36811*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36814*/     OPC_CheckType, MVT::i32,
/*36816*/     OPC_MoveParent,
/*36817*/     OPC_RecordChild3, // #2 = $srcy
/*36818*/     OPC_MoveChild, 3,
/*36820*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36823*/     OPC_CheckType, MVT::i32,
/*36825*/     OPC_MoveParent,
/*36826*/     OPC_RecordChild4, // #3 = $srcz
/*36827*/     OPC_MoveChild, 4,
/*36829*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36832*/     OPC_CheckType, MVT::i32,
/*36834*/     OPC_MoveParent,
/*36835*/     OPC_RecordChild5, // #4 = $srcw
/*36836*/     OPC_MoveChild, 5,
/*36838*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36841*/     OPC_CheckType, MVT::i32,
/*36843*/     OPC_MoveParent,
/*36844*/     OPC_RecordChild6, // #5 = $offsetx
/*36845*/     OPC_MoveChild, 6,
/*36847*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36850*/     OPC_CheckType, MVT::i32,
/*36852*/     OPC_MoveParent,
/*36853*/     OPC_RecordChild7, // #6 = $offsety
/*36854*/     OPC_MoveChild, 7,
/*36856*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36859*/     OPC_CheckType, MVT::i32,
/*36861*/     OPC_MoveParent,
/*36862*/     OPC_MoveChild, 8,
/*36864*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36867*/     OPC_RecordNode, // #7 = $offsetz
/*36868*/     OPC_CheckType, MVT::i32,
/*36870*/     OPC_MoveParent,
/*36871*/     OPC_MoveChild, 9,
/*36873*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36876*/     OPC_RecordNode, // #8 = $DST_SEL_X
/*36877*/     OPC_CheckType, MVT::i32,
/*36879*/     OPC_MoveParent,
/*36880*/     OPC_MoveChild, 10,
/*36882*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36885*/     OPC_RecordNode, // #9 = $DST_SEL_Y
/*36886*/     OPC_CheckType, MVT::i32,
/*36888*/     OPC_MoveParent,
/*36889*/     OPC_MoveChild, 11,
/*36891*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36894*/     OPC_RecordNode, // #10 = $DST_SEL_Z
/*36895*/     OPC_CheckType, MVT::i32,
/*36897*/     OPC_MoveParent,
/*36898*/     OPC_MoveChild, 12,
/*36900*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36903*/     OPC_RecordNode, // #11 = $DST_SEL_W
/*36904*/     OPC_CheckType, MVT::i32,
/*36906*/     OPC_MoveParent,
/*36907*/     OPC_MoveChild, 13,
/*36909*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36912*/     OPC_RecordNode, // #12 = $RESOURCE_ID
/*36913*/     OPC_CheckType, MVT::i32,
/*36915*/     OPC_MoveParent,
/*36916*/     OPC_MoveChild, 14,
/*36918*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36921*/     OPC_RecordNode, // #13 = $SAMPLER_ID
/*36922*/     OPC_CheckType, MVT::i32,
/*36924*/     OPC_MoveParent,
/*36925*/     OPC_MoveChild, 15,
/*36927*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36930*/     OPC_RecordNode, // #14 = $COORD_TYPE_X
/*36931*/     OPC_CheckType, MVT::i32,
/*36933*/     OPC_MoveParent,
/*36934*/     OPC_MoveChild, 16,
/*36936*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36939*/     OPC_RecordNode, // #15 = $COORD_TYPE_Y
/*36940*/     OPC_CheckType, MVT::i32,
/*36942*/     OPC_MoveParent,
/*36943*/     OPC_MoveChild, 17,
/*36945*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36948*/     OPC_RecordNode, // #16 = $COORD_TYPE_Z
/*36949*/     OPC_CheckType, MVT::i32,
/*36951*/     OPC_MoveParent,
/*36952*/     OPC_MoveChild, 18,
/*36954*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36957*/     OPC_RecordNode, // #17 = $COORD_TYPE_W
/*36958*/     OPC_CheckType, MVT::i32,
/*36960*/     OPC_MoveParent,
/*36961*/     OPC_CheckType, MVT::v4f32,
/*36963*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*36965*/     OPC_EmitConvertToTarget, 1,
/*36967*/     OPC_EmitConvertToTarget, 2,
/*36969*/     OPC_EmitConvertToTarget, 3,
/*36971*/     OPC_EmitConvertToTarget, 4,
/*36973*/     OPC_EmitConvertToTarget, 5,
/*36975*/     OPC_EmitConvertToTarget, 6,
/*36977*/     OPC_EmitConvertToTarget, 7,
/*36979*/     OPC_EmitConvertToTarget, 8,
/*36981*/     OPC_EmitConvertToTarget, 9,
/*36983*/     OPC_EmitConvertToTarget, 10,
/*36985*/     OPC_EmitConvertToTarget, 11,
/*36987*/     OPC_EmitConvertToTarget, 12,
/*36989*/     OPC_EmitConvertToTarget, 13,
/*36991*/     OPC_EmitConvertToTarget, 14,
/*36993*/     OPC_EmitConvertToTarget, 15,
/*36995*/     OPC_EmitConvertToTarget, 16,
/*36997*/     OPC_EmitConvertToTarget, 17,
/*36999*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::TEX_GET_GRADIENTS_V), 0,
                  1/*#VTs*/, MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
              // Src: (TEXTURE_FETCH:v4f32 9:i32, v4f32:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W) - Complexity = 59
              // Dst: (TEX_GET_GRADIENTS_V:v4f32 R600_Reg128:v4f32:$SRC_GPR, (imm:i32):$srcx, (imm:i32):$srcy, (imm:i32):$srcz, (imm:i32):$srcw, (imm:i32):$offsetx, (imm:i32):$offsety, (imm:i32):$offsetz, (imm:i32):$DST_SEL_X, (imm:i32):$DST_SEL_Y, (imm:i32):$DST_SEL_Z, (imm:i32):$DST_SEL_W, (imm:i32):$RESOURCE_ID, (imm:i32):$SAMPLER_ID, (imm:i32):$COORD_TYPE_X, (imm:i32):$COORD_TYPE_Y, (imm:i32):$COORD_TYPE_Z, (imm:i32):$COORD_TYPE_W)
/*37024*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(AMDGPUISD::LOAD_INPUT),// ->37053
/*37028*/   OPC_RecordChild0, // #0 = $tlst
/*37029*/   OPC_RecordChild1, // #1 = $attr_offset
/*37030*/   OPC_MoveChild, 1,
/*37032*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37035*/   OPC_CheckPredicate, 23, // Predicate_IMM12bit
/*37037*/   OPC_MoveParent,
/*37038*/   OPC_RecordChild2, // #2 = $buf_idx_vgpr
/*37039*/   OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37041*/   OPC_EmitConvertToTarget, 1,
/*37043*/   OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BUFFER_LOAD_FORMAT_XYZW_IDXEN), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 2, 3, 
            // Src: (SIload_input:v4f32 i128:i128:$tlst, (imm:i16)<<P:Predicate_IMM12bit>>:$attr_offset, i32:i32:$buf_idx_vgpr) - Complexity = 7
            // Dst: (BUFFER_LOAD_FORMAT_XYZW_IDXEN:v4f32 ?:i128:$tlst, ?:i32:$buf_idx_vgpr, (imm:i16):$attr_offset)
          /*SwitchOpcode*/ 38|128,8/*1062*/,  TARGET_VAL(AMDGPUISD::SAMPLE),// ->38119
/*37057*/   OPC_RecordChild0, // #0 = $addr
/*37058*/   OPC_Scope, 121|128,1/*249*/, /*->37310*/ // 5 children in Scope
/*37061*/     OPC_CheckChild0Type, MVT::v2i32,
/*37063*/     OPC_RecordChild1, // #1 = $rsrc
/*37064*/     OPC_RecordChild2, // #2 = $sampler
/*37065*/     OPC_MoveChild, 3,
/*37067*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37070*/     OPC_Scope, 47, /*->37119*/ // 5 children in Scope
/*37072*/       OPC_CheckPredicate, 48, // Predicate_TEX_RECT
/*37074*/       OPC_MoveParent,
/*37075*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37077*/       OPC_EmitInteger, MVT::i32, 15, 
/*37080*/       OPC_EmitInteger, MVT::i1, 1, 
/*37083*/       OPC_EmitInteger, MVT::i1, 0, 
/*37086*/       OPC_EmitInteger, MVT::i1, 0, 
/*37089*/       OPC_EmitInteger, MVT::i1, 0, 
/*37092*/       OPC_EmitInteger, MVT::i1, 0, 
/*37095*/       OPC_EmitInteger, MVT::i1, 0, 
/*37098*/       OPC_EmitInteger, MVT::i1, 0, 
/*37101*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V2:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37119*/     /*Scope*/ 47, /*->37167*/
/*37120*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*37122*/       OPC_MoveParent,
/*37123*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37125*/       OPC_EmitInteger, MVT::i32, 15, 
/*37128*/       OPC_EmitInteger, MVT::i1, 0, 
/*37131*/       OPC_EmitInteger, MVT::i1, 0, 
/*37134*/       OPC_EmitInteger, MVT::i1, 1, 
/*37137*/       OPC_EmitInteger, MVT::i1, 0, 
/*37140*/       OPC_EmitInteger, MVT::i1, 0, 
/*37143*/       OPC_EmitInteger, MVT::i1, 0, 
/*37146*/       OPC_EmitInteger, MVT::i1, 0, 
/*37149*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37167*/     /*Scope*/ 47, /*->37215*/
/*37168*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*37170*/       OPC_MoveParent,
/*37171*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37173*/       OPC_EmitInteger, MVT::i32, 15, 
/*37176*/       OPC_EmitInteger, MVT::i1, 0, 
/*37179*/       OPC_EmitInteger, MVT::i1, 0, 
/*37182*/       OPC_EmitInteger, MVT::i1, 0, 
/*37185*/       OPC_EmitInteger, MVT::i1, 0, 
/*37188*/       OPC_EmitInteger, MVT::i1, 0, 
/*37191*/       OPC_EmitInteger, MVT::i1, 0, 
/*37194*/       OPC_EmitInteger, MVT::i1, 0, 
/*37197*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37215*/     /*Scope*/ 47, /*->37263*/
/*37216*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*37218*/       OPC_MoveParent,
/*37219*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37221*/       OPC_EmitInteger, MVT::i32, 15, 
/*37224*/       OPC_EmitInteger, MVT::i1, 0, 
/*37227*/       OPC_EmitInteger, MVT::i1, 0, 
/*37230*/       OPC_EmitInteger, MVT::i1, 1, 
/*37233*/       OPC_EmitInteger, MVT::i1, 0, 
/*37236*/       OPC_EmitInteger, MVT::i1, 0, 
/*37239*/       OPC_EmitInteger, MVT::i1, 0, 
/*37242*/       OPC_EmitInteger, MVT::i1, 0, 
/*37245*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37263*/     /*Scope*/ 45, /*->37309*/
/*37264*/       OPC_MoveParent,
/*37265*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37267*/       OPC_EmitInteger, MVT::i32, 15, 
/*37270*/       OPC_EmitInteger, MVT::i1, 0, 
/*37273*/       OPC_EmitInteger, MVT::i1, 0, 
/*37276*/       OPC_EmitInteger, MVT::i1, 0, 
/*37279*/       OPC_EmitInteger, MVT::i1, 0, 
/*37282*/       OPC_EmitInteger, MVT::i1, 0, 
/*37285*/       OPC_EmitInteger, MVT::i1, 0, 
/*37288*/       OPC_EmitInteger, MVT::i1, 0, 
/*37291*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37309*/     0, /*End of Scope*/
/*37310*/   /*Scope*/ 121|128,1/*249*/, /*->37561*/
/*37312*/     OPC_CheckChild0Type, MVT::v4i32,
/*37314*/     OPC_RecordChild1, // #1 = $rsrc
/*37315*/     OPC_RecordChild2, // #2 = $sampler
/*37316*/     OPC_MoveChild, 3,
/*37318*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37321*/     OPC_Scope, 47, /*->37370*/ // 5 children in Scope
/*37323*/       OPC_CheckPredicate, 48, // Predicate_TEX_RECT
/*37325*/       OPC_MoveParent,
/*37326*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37328*/       OPC_EmitInteger, MVT::i32, 15, 
/*37331*/       OPC_EmitInteger, MVT::i1, 1, 
/*37334*/       OPC_EmitInteger, MVT::i1, 0, 
/*37337*/       OPC_EmitInteger, MVT::i1, 0, 
/*37340*/       OPC_EmitInteger, MVT::i1, 0, 
/*37343*/       OPC_EmitInteger, MVT::i1, 0, 
/*37346*/       OPC_EmitInteger, MVT::i1, 0, 
/*37349*/       OPC_EmitInteger, MVT::i1, 0, 
/*37352*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V4:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37370*/     /*Scope*/ 47, /*->37418*/
/*37371*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*37373*/       OPC_MoveParent,
/*37374*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37376*/       OPC_EmitInteger, MVT::i32, 15, 
/*37379*/       OPC_EmitInteger, MVT::i1, 0, 
/*37382*/       OPC_EmitInteger, MVT::i1, 0, 
/*37385*/       OPC_EmitInteger, MVT::i1, 1, 
/*37388*/       OPC_EmitInteger, MVT::i1, 0, 
/*37391*/       OPC_EmitInteger, MVT::i1, 0, 
/*37394*/       OPC_EmitInteger, MVT::i1, 0, 
/*37397*/       OPC_EmitInteger, MVT::i1, 0, 
/*37400*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37418*/     /*Scope*/ 47, /*->37466*/
/*37419*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*37421*/       OPC_MoveParent,
/*37422*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37424*/       OPC_EmitInteger, MVT::i32, 15, 
/*37427*/       OPC_EmitInteger, MVT::i1, 0, 
/*37430*/       OPC_EmitInteger, MVT::i1, 0, 
/*37433*/       OPC_EmitInteger, MVT::i1, 0, 
/*37436*/       OPC_EmitInteger, MVT::i1, 0, 
/*37439*/       OPC_EmitInteger, MVT::i1, 0, 
/*37442*/       OPC_EmitInteger, MVT::i1, 0, 
/*37445*/       OPC_EmitInteger, MVT::i1, 0, 
/*37448*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37466*/     /*Scope*/ 47, /*->37514*/
/*37467*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*37469*/       OPC_MoveParent,
/*37470*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37472*/       OPC_EmitInteger, MVT::i32, 15, 
/*37475*/       OPC_EmitInteger, MVT::i1, 0, 
/*37478*/       OPC_EmitInteger, MVT::i1, 0, 
/*37481*/       OPC_EmitInteger, MVT::i1, 1, 
/*37484*/       OPC_EmitInteger, MVT::i1, 0, 
/*37487*/       OPC_EmitInteger, MVT::i1, 0, 
/*37490*/       OPC_EmitInteger, MVT::i1, 0, 
/*37493*/       OPC_EmitInteger, MVT::i1, 0, 
/*37496*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37514*/     /*Scope*/ 45, /*->37560*/
/*37515*/       OPC_MoveParent,
/*37516*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37518*/       OPC_EmitInteger, MVT::i32, 15, 
/*37521*/       OPC_EmitInteger, MVT::i1, 0, 
/*37524*/       OPC_EmitInteger, MVT::i1, 0, 
/*37527*/       OPC_EmitInteger, MVT::i1, 0, 
/*37530*/       OPC_EmitInteger, MVT::i1, 0, 
/*37533*/       OPC_EmitInteger, MVT::i1, 0, 
/*37536*/       OPC_EmitInteger, MVT::i1, 0, 
/*37539*/       OPC_EmitInteger, MVT::i1, 0, 
/*37542*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37560*/     0, /*End of Scope*/
/*37561*/   /*Scope*/ 121|128,1/*249*/, /*->37812*/
/*37563*/     OPC_CheckChild0Type, MVT::v8i32,
/*37565*/     OPC_RecordChild1, // #1 = $rsrc
/*37566*/     OPC_RecordChild2, // #2 = $sampler
/*37567*/     OPC_MoveChild, 3,
/*37569*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37572*/     OPC_Scope, 47, /*->37621*/ // 5 children in Scope
/*37574*/       OPC_CheckPredicate, 48, // Predicate_TEX_RECT
/*37576*/       OPC_MoveParent,
/*37577*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37579*/       OPC_EmitInteger, MVT::i32, 15, 
/*37582*/       OPC_EmitInteger, MVT::i1, 1, 
/*37585*/       OPC_EmitInteger, MVT::i1, 0, 
/*37588*/       OPC_EmitInteger, MVT::i1, 0, 
/*37591*/       OPC_EmitInteger, MVT::i1, 0, 
/*37594*/       OPC_EmitInteger, MVT::i1, 0, 
/*37597*/       OPC_EmitInteger, MVT::i1, 0, 
/*37600*/       OPC_EmitInteger, MVT::i1, 0, 
/*37603*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V8:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37621*/     /*Scope*/ 47, /*->37669*/
/*37622*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*37624*/       OPC_MoveParent,
/*37625*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37627*/       OPC_EmitInteger, MVT::i32, 15, 
/*37630*/       OPC_EmitInteger, MVT::i1, 0, 
/*37633*/       OPC_EmitInteger, MVT::i1, 0, 
/*37636*/       OPC_EmitInteger, MVT::i1, 1, 
/*37639*/       OPC_EmitInteger, MVT::i1, 0, 
/*37642*/       OPC_EmitInteger, MVT::i1, 0, 
/*37645*/       OPC_EmitInteger, MVT::i1, 0, 
/*37648*/       OPC_EmitInteger, MVT::i1, 0, 
/*37651*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37669*/     /*Scope*/ 47, /*->37717*/
/*37670*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*37672*/       OPC_MoveParent,
/*37673*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37675*/       OPC_EmitInteger, MVT::i32, 15, 
/*37678*/       OPC_EmitInteger, MVT::i1, 0, 
/*37681*/       OPC_EmitInteger, MVT::i1, 0, 
/*37684*/       OPC_EmitInteger, MVT::i1, 0, 
/*37687*/       OPC_EmitInteger, MVT::i1, 0, 
/*37690*/       OPC_EmitInteger, MVT::i1, 0, 
/*37693*/       OPC_EmitInteger, MVT::i1, 0, 
/*37696*/       OPC_EmitInteger, MVT::i1, 0, 
/*37699*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37717*/     /*Scope*/ 47, /*->37765*/
/*37718*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*37720*/       OPC_MoveParent,
/*37721*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37723*/       OPC_EmitInteger, MVT::i32, 15, 
/*37726*/       OPC_EmitInteger, MVT::i1, 0, 
/*37729*/       OPC_EmitInteger, MVT::i1, 0, 
/*37732*/       OPC_EmitInteger, MVT::i1, 1, 
/*37735*/       OPC_EmitInteger, MVT::i1, 0, 
/*37738*/       OPC_EmitInteger, MVT::i1, 0, 
/*37741*/       OPC_EmitInteger, MVT::i1, 0, 
/*37744*/       OPC_EmitInteger, MVT::i1, 0, 
/*37747*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37765*/     /*Scope*/ 45, /*->37811*/
/*37766*/       OPC_MoveParent,
/*37767*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37769*/       OPC_EmitInteger, MVT::i32, 15, 
/*37772*/       OPC_EmitInteger, MVT::i1, 0, 
/*37775*/       OPC_EmitInteger, MVT::i1, 0, 
/*37778*/       OPC_EmitInteger, MVT::i1, 0, 
/*37781*/       OPC_EmitInteger, MVT::i1, 0, 
/*37784*/       OPC_EmitInteger, MVT::i1, 0, 
/*37787*/       OPC_EmitInteger, MVT::i1, 0, 
/*37790*/       OPC_EmitInteger, MVT::i1, 0, 
/*37793*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37811*/     0, /*End of Scope*/
/*37812*/   /*Scope*/ 121|128,1/*249*/, /*->38063*/
/*37814*/     OPC_CheckChild0Type, MVT::v16i32,
/*37816*/     OPC_RecordChild1, // #1 = $rsrc
/*37817*/     OPC_RecordChild2, // #2 = $sampler
/*37818*/     OPC_MoveChild, 3,
/*37820*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*37823*/     OPC_Scope, 47, /*->37872*/ // 5 children in Scope
/*37825*/       OPC_CheckPredicate, 48, // Predicate_TEX_RECT
/*37827*/       OPC_MoveParent,
/*37828*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37830*/       OPC_EmitInteger, MVT::i32, 15, 
/*37833*/       OPC_EmitInteger, MVT::i1, 1, 
/*37836*/       OPC_EmitInteger, MVT::i1, 0, 
/*37839*/       OPC_EmitInteger, MVT::i1, 0, 
/*37842*/       OPC_EmitInteger, MVT::i1, 0, 
/*37845*/       OPC_EmitInteger, MVT::i1, 0, 
/*37848*/       OPC_EmitInteger, MVT::i1, 0, 
/*37851*/       OPC_EmitInteger, MVT::i1, 0, 
/*37854*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_RECT>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V16:v4f32 15:i32, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37872*/     /*Scope*/ 47, /*->37920*/
/*37873*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*37875*/       OPC_MoveParent,
/*37876*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37878*/       OPC_EmitInteger, MVT::i32, 15, 
/*37881*/       OPC_EmitInteger, MVT::i1, 0, 
/*37884*/       OPC_EmitInteger, MVT::i1, 0, 
/*37887*/       OPC_EmitInteger, MVT::i1, 1, 
/*37890*/       OPC_EmitInteger, MVT::i1, 0, 
/*37893*/       OPC_EmitInteger, MVT::i1, 0, 
/*37896*/       OPC_EmitInteger, MVT::i1, 0, 
/*37899*/       OPC_EmitInteger, MVT::i1, 0, 
/*37902*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37920*/     /*Scope*/ 47, /*->37968*/
/*37921*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*37923*/       OPC_MoveParent,
/*37924*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37926*/       OPC_EmitInteger, MVT::i32, 15, 
/*37929*/       OPC_EmitInteger, MVT::i1, 0, 
/*37932*/       OPC_EmitInteger, MVT::i1, 0, 
/*37935*/       OPC_EmitInteger, MVT::i1, 0, 
/*37938*/       OPC_EmitInteger, MVT::i1, 0, 
/*37941*/       OPC_EmitInteger, MVT::i1, 0, 
/*37944*/       OPC_EmitInteger, MVT::i1, 0, 
/*37947*/       OPC_EmitInteger, MVT::i1, 0, 
/*37950*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*37968*/     /*Scope*/ 47, /*->38016*/
/*37969*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*37971*/       OPC_MoveParent,
/*37972*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*37974*/       OPC_EmitInteger, MVT::i32, 15, 
/*37977*/       OPC_EmitInteger, MVT::i1, 0, 
/*37980*/       OPC_EmitInteger, MVT::i1, 0, 
/*37983*/       OPC_EmitInteger, MVT::i1, 1, 
/*37986*/       OPC_EmitInteger, MVT::i1, 0, 
/*37989*/       OPC_EmitInteger, MVT::i1, 0, 
/*37992*/       OPC_EmitInteger, MVT::i1, 0, 
/*37995*/       OPC_EmitInteger, MVT::i1, 0, 
/*37998*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38016*/     /*Scope*/ 45, /*->38062*/
/*38017*/       OPC_MoveParent,
/*38018*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38020*/       OPC_EmitInteger, MVT::i32, 15, 
/*38023*/       OPC_EmitInteger, MVT::i1, 0, 
/*38026*/       OPC_EmitInteger, MVT::i1, 0, 
/*38029*/       OPC_EmitInteger, MVT::i1, 0, 
/*38032*/       OPC_EmitInteger, MVT::i1, 0, 
/*38035*/       OPC_EmitInteger, MVT::i1, 0, 
/*38038*/       OPC_EmitInteger, MVT::i1, 0, 
/*38041*/       OPC_EmitInteger, MVT::i1, 0, 
/*38044*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsample:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38062*/     0, /*End of Scope*/
/*38063*/   /*Scope*/ 54, /*->38118*/
/*38064*/     OPC_CheckChild0Type, MVT::i32,
/*38066*/     OPC_RecordChild1, // #1 = $rsrc
/*38067*/     OPC_RecordChild2, // #2 = $sampler
/*38068*/     OPC_MoveChild, 3,
/*38070*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38073*/     OPC_MoveParent,
/*38074*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38076*/     OPC_EmitInteger, MVT::i32, 15, 
/*38079*/     OPC_EmitInteger, MVT::i1, 0, 
/*38082*/     OPC_EmitInteger, MVT::i1, 0, 
/*38085*/     OPC_EmitInteger, MVT::i1, 0, 
/*38088*/     OPC_EmitInteger, MVT::i1, 0, 
/*38091*/     OPC_EmitInteger, MVT::i1, 0, 
/*38094*/     OPC_EmitInteger, MVT::i1, 0, 
/*38097*/     OPC_EmitInteger, MVT::i1, 0, 
/*38100*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_V1), 0,
                  1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
              // Src: (SIsample:v4f32 i32:i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
              // Dst: (IMAGE_SAMPLE_V1:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38118*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,6/*815*/,  TARGET_VAL(AMDGPUISD::SAMPLEL),// ->38938
/*38123*/   OPC_RecordChild0, // #0 = $addr
/*38124*/   OPC_Scope, 73|128,1/*201*/, /*->38328*/ // 4 children in Scope
/*38127*/     OPC_CheckChild0Type, MVT::v2i32,
/*38129*/     OPC_RecordChild1, // #1 = $rsrc
/*38130*/     OPC_RecordChild2, // #2 = $sampler
/*38131*/     OPC_MoveChild, 3,
/*38133*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38136*/     OPC_Scope, 47, /*->38185*/ // 4 children in Scope
/*38138*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*38140*/       OPC_MoveParent,
/*38141*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38143*/       OPC_EmitInteger, MVT::i32, 15, 
/*38146*/       OPC_EmitInteger, MVT::i1, 0, 
/*38149*/       OPC_EmitInteger, MVT::i1, 0, 
/*38152*/       OPC_EmitInteger, MVT::i1, 1, 
/*38155*/       OPC_EmitInteger, MVT::i1, 0, 
/*38158*/       OPC_EmitInteger, MVT::i1, 0, 
/*38161*/       OPC_EmitInteger, MVT::i1, 0, 
/*38164*/       OPC_EmitInteger, MVT::i1, 0, 
/*38167*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38185*/     /*Scope*/ 47, /*->38233*/
/*38186*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*38188*/       OPC_MoveParent,
/*38189*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38191*/       OPC_EmitInteger, MVT::i32, 15, 
/*38194*/       OPC_EmitInteger, MVT::i1, 0, 
/*38197*/       OPC_EmitInteger, MVT::i1, 0, 
/*38200*/       OPC_EmitInteger, MVT::i1, 0, 
/*38203*/       OPC_EmitInteger, MVT::i1, 0, 
/*38206*/       OPC_EmitInteger, MVT::i1, 0, 
/*38209*/       OPC_EmitInteger, MVT::i1, 0, 
/*38212*/       OPC_EmitInteger, MVT::i1, 0, 
/*38215*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38233*/     /*Scope*/ 47, /*->38281*/
/*38234*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*38236*/       OPC_MoveParent,
/*38237*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38239*/       OPC_EmitInteger, MVT::i32, 15, 
/*38242*/       OPC_EmitInteger, MVT::i1, 0, 
/*38245*/       OPC_EmitInteger, MVT::i1, 0, 
/*38248*/       OPC_EmitInteger, MVT::i1, 1, 
/*38251*/       OPC_EmitInteger, MVT::i1, 0, 
/*38254*/       OPC_EmitInteger, MVT::i1, 0, 
/*38257*/       OPC_EmitInteger, MVT::i1, 0, 
/*38260*/       OPC_EmitInteger, MVT::i1, 0, 
/*38263*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38281*/     /*Scope*/ 45, /*->38327*/
/*38282*/       OPC_MoveParent,
/*38283*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38285*/       OPC_EmitInteger, MVT::i32, 15, 
/*38288*/       OPC_EmitInteger, MVT::i1, 0, 
/*38291*/       OPC_EmitInteger, MVT::i1, 0, 
/*38294*/       OPC_EmitInteger, MVT::i1, 0, 
/*38297*/       OPC_EmitInteger, MVT::i1, 0, 
/*38300*/       OPC_EmitInteger, MVT::i1, 0, 
/*38303*/       OPC_EmitInteger, MVT::i1, 0, 
/*38306*/       OPC_EmitInteger, MVT::i1, 0, 
/*38309*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38327*/     0, /*End of Scope*/
/*38328*/   /*Scope*/ 73|128,1/*201*/, /*->38531*/
/*38330*/     OPC_CheckChild0Type, MVT::v4i32,
/*38332*/     OPC_RecordChild1, // #1 = $rsrc
/*38333*/     OPC_RecordChild2, // #2 = $sampler
/*38334*/     OPC_MoveChild, 3,
/*38336*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38339*/     OPC_Scope, 47, /*->38388*/ // 4 children in Scope
/*38341*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*38343*/       OPC_MoveParent,
/*38344*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38346*/       OPC_EmitInteger, MVT::i32, 15, 
/*38349*/       OPC_EmitInteger, MVT::i1, 0, 
/*38352*/       OPC_EmitInteger, MVT::i1, 0, 
/*38355*/       OPC_EmitInteger, MVT::i1, 1, 
/*38358*/       OPC_EmitInteger, MVT::i1, 0, 
/*38361*/       OPC_EmitInteger, MVT::i1, 0, 
/*38364*/       OPC_EmitInteger, MVT::i1, 0, 
/*38367*/       OPC_EmitInteger, MVT::i1, 0, 
/*38370*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38388*/     /*Scope*/ 47, /*->38436*/
/*38389*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*38391*/       OPC_MoveParent,
/*38392*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38394*/       OPC_EmitInteger, MVT::i32, 15, 
/*38397*/       OPC_EmitInteger, MVT::i1, 0, 
/*38400*/       OPC_EmitInteger, MVT::i1, 0, 
/*38403*/       OPC_EmitInteger, MVT::i1, 0, 
/*38406*/       OPC_EmitInteger, MVT::i1, 0, 
/*38409*/       OPC_EmitInteger, MVT::i1, 0, 
/*38412*/       OPC_EmitInteger, MVT::i1, 0, 
/*38415*/       OPC_EmitInteger, MVT::i1, 0, 
/*38418*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38436*/     /*Scope*/ 47, /*->38484*/
/*38437*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*38439*/       OPC_MoveParent,
/*38440*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38442*/       OPC_EmitInteger, MVT::i32, 15, 
/*38445*/       OPC_EmitInteger, MVT::i1, 0, 
/*38448*/       OPC_EmitInteger, MVT::i1, 0, 
/*38451*/       OPC_EmitInteger, MVT::i1, 1, 
/*38454*/       OPC_EmitInteger, MVT::i1, 0, 
/*38457*/       OPC_EmitInteger, MVT::i1, 0, 
/*38460*/       OPC_EmitInteger, MVT::i1, 0, 
/*38463*/       OPC_EmitInteger, MVT::i1, 0, 
/*38466*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38484*/     /*Scope*/ 45, /*->38530*/
/*38485*/       OPC_MoveParent,
/*38486*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38488*/       OPC_EmitInteger, MVT::i32, 15, 
/*38491*/       OPC_EmitInteger, MVT::i1, 0, 
/*38494*/       OPC_EmitInteger, MVT::i1, 0, 
/*38497*/       OPC_EmitInteger, MVT::i1, 0, 
/*38500*/       OPC_EmitInteger, MVT::i1, 0, 
/*38503*/       OPC_EmitInteger, MVT::i1, 0, 
/*38506*/       OPC_EmitInteger, MVT::i1, 0, 
/*38509*/       OPC_EmitInteger, MVT::i1, 0, 
/*38512*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38530*/     0, /*End of Scope*/
/*38531*/   /*Scope*/ 73|128,1/*201*/, /*->38734*/
/*38533*/     OPC_CheckChild0Type, MVT::v8i32,
/*38535*/     OPC_RecordChild1, // #1 = $rsrc
/*38536*/     OPC_RecordChild2, // #2 = $sampler
/*38537*/     OPC_MoveChild, 3,
/*38539*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38542*/     OPC_Scope, 47, /*->38591*/ // 4 children in Scope
/*38544*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*38546*/       OPC_MoveParent,
/*38547*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38549*/       OPC_EmitInteger, MVT::i32, 15, 
/*38552*/       OPC_EmitInteger, MVT::i1, 0, 
/*38555*/       OPC_EmitInteger, MVT::i1, 0, 
/*38558*/       OPC_EmitInteger, MVT::i1, 1, 
/*38561*/       OPC_EmitInteger, MVT::i1, 0, 
/*38564*/       OPC_EmitInteger, MVT::i1, 0, 
/*38567*/       OPC_EmitInteger, MVT::i1, 0, 
/*38570*/       OPC_EmitInteger, MVT::i1, 0, 
/*38573*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38591*/     /*Scope*/ 47, /*->38639*/
/*38592*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*38594*/       OPC_MoveParent,
/*38595*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38597*/       OPC_EmitInteger, MVT::i32, 15, 
/*38600*/       OPC_EmitInteger, MVT::i1, 0, 
/*38603*/       OPC_EmitInteger, MVT::i1, 0, 
/*38606*/       OPC_EmitInteger, MVT::i1, 0, 
/*38609*/       OPC_EmitInteger, MVT::i1, 0, 
/*38612*/       OPC_EmitInteger, MVT::i1, 0, 
/*38615*/       OPC_EmitInteger, MVT::i1, 0, 
/*38618*/       OPC_EmitInteger, MVT::i1, 0, 
/*38621*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38639*/     /*Scope*/ 47, /*->38687*/
/*38640*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*38642*/       OPC_MoveParent,
/*38643*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38645*/       OPC_EmitInteger, MVT::i32, 15, 
/*38648*/       OPC_EmitInteger, MVT::i1, 0, 
/*38651*/       OPC_EmitInteger, MVT::i1, 0, 
/*38654*/       OPC_EmitInteger, MVT::i1, 1, 
/*38657*/       OPC_EmitInteger, MVT::i1, 0, 
/*38660*/       OPC_EmitInteger, MVT::i1, 0, 
/*38663*/       OPC_EmitInteger, MVT::i1, 0, 
/*38666*/       OPC_EmitInteger, MVT::i1, 0, 
/*38669*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38687*/     /*Scope*/ 45, /*->38733*/
/*38688*/       OPC_MoveParent,
/*38689*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38691*/       OPC_EmitInteger, MVT::i32, 15, 
/*38694*/       OPC_EmitInteger, MVT::i1, 0, 
/*38697*/       OPC_EmitInteger, MVT::i1, 0, 
/*38700*/       OPC_EmitInteger, MVT::i1, 0, 
/*38703*/       OPC_EmitInteger, MVT::i1, 0, 
/*38706*/       OPC_EmitInteger, MVT::i1, 0, 
/*38709*/       OPC_EmitInteger, MVT::i1, 0, 
/*38712*/       OPC_EmitInteger, MVT::i1, 0, 
/*38715*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38733*/     0, /*End of Scope*/
/*38734*/   /*Scope*/ 73|128,1/*201*/, /*->38937*/
/*38736*/     OPC_CheckChild0Type, MVT::v16i32,
/*38738*/     OPC_RecordChild1, // #1 = $rsrc
/*38739*/     OPC_RecordChild2, // #2 = $sampler
/*38740*/     OPC_MoveChild, 3,
/*38742*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38745*/     OPC_Scope, 47, /*->38794*/ // 4 children in Scope
/*38747*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*38749*/       OPC_MoveParent,
/*38750*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38752*/       OPC_EmitInteger, MVT::i32, 15, 
/*38755*/       OPC_EmitInteger, MVT::i1, 0, 
/*38758*/       OPC_EmitInteger, MVT::i1, 0, 
/*38761*/       OPC_EmitInteger, MVT::i1, 1, 
/*38764*/       OPC_EmitInteger, MVT::i1, 0, 
/*38767*/       OPC_EmitInteger, MVT::i1, 0, 
/*38770*/       OPC_EmitInteger, MVT::i1, 0, 
/*38773*/       OPC_EmitInteger, MVT::i1, 0, 
/*38776*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_L_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38794*/     /*Scope*/ 47, /*->38842*/
/*38795*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*38797*/       OPC_MoveParent,
/*38798*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38800*/       OPC_EmitInteger, MVT::i32, 15, 
/*38803*/       OPC_EmitInteger, MVT::i1, 0, 
/*38806*/       OPC_EmitInteger, MVT::i1, 0, 
/*38809*/       OPC_EmitInteger, MVT::i1, 0, 
/*38812*/       OPC_EmitInteger, MVT::i1, 0, 
/*38815*/       OPC_EmitInteger, MVT::i1, 0, 
/*38818*/       OPC_EmitInteger, MVT::i1, 0, 
/*38821*/       OPC_EmitInteger, MVT::i1, 0, 
/*38824*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38842*/     /*Scope*/ 47, /*->38890*/
/*38843*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*38845*/       OPC_MoveParent,
/*38846*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38848*/       OPC_EmitInteger, MVT::i32, 15, 
/*38851*/       OPC_EmitInteger, MVT::i1, 0, 
/*38854*/       OPC_EmitInteger, MVT::i1, 0, 
/*38857*/       OPC_EmitInteger, MVT::i1, 1, 
/*38860*/       OPC_EmitInteger, MVT::i1, 0, 
/*38863*/       OPC_EmitInteger, MVT::i1, 0, 
/*38866*/       OPC_EmitInteger, MVT::i1, 0, 
/*38869*/       OPC_EmitInteger, MVT::i1, 0, 
/*38872*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_L_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38890*/     /*Scope*/ 45, /*->38936*/
/*38891*/       OPC_MoveParent,
/*38892*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38894*/       OPC_EmitInteger, MVT::i32, 15, 
/*38897*/       OPC_EmitInteger, MVT::i1, 0, 
/*38900*/       OPC_EmitInteger, MVT::i1, 0, 
/*38903*/       OPC_EmitInteger, MVT::i1, 0, 
/*38906*/       OPC_EmitInteger, MVT::i1, 0, 
/*38909*/       OPC_EmitInteger, MVT::i1, 0, 
/*38912*/       OPC_EmitInteger, MVT::i1, 0, 
/*38915*/       OPC_EmitInteger, MVT::i1, 0, 
/*38918*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_L_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsamplel:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_L_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*38936*/     0, /*End of Scope*/
/*38937*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,6/*815*/,  TARGET_VAL(AMDGPUISD::SAMPLEB),// ->39757
/*38942*/   OPC_RecordChild0, // #0 = $addr
/*38943*/   OPC_Scope, 73|128,1/*201*/, /*->39147*/ // 4 children in Scope
/*38946*/     OPC_CheckChild0Type, MVT::v2i32,
/*38948*/     OPC_RecordChild1, // #1 = $rsrc
/*38949*/     OPC_RecordChild2, // #2 = $sampler
/*38950*/     OPC_MoveChild, 3,
/*38952*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*38955*/     OPC_Scope, 47, /*->39004*/ // 4 children in Scope
/*38957*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*38959*/       OPC_MoveParent,
/*38960*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*38962*/       OPC_EmitInteger, MVT::i32, 15, 
/*38965*/       OPC_EmitInteger, MVT::i1, 0, 
/*38968*/       OPC_EmitInteger, MVT::i1, 0, 
/*38971*/       OPC_EmitInteger, MVT::i1, 1, 
/*38974*/       OPC_EmitInteger, MVT::i1, 0, 
/*38977*/       OPC_EmitInteger, MVT::i1, 0, 
/*38980*/       OPC_EmitInteger, MVT::i1, 0, 
/*38983*/       OPC_EmitInteger, MVT::i1, 0, 
/*38986*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39004*/     /*Scope*/ 47, /*->39052*/
/*39005*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*39007*/       OPC_MoveParent,
/*39008*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39010*/       OPC_EmitInteger, MVT::i32, 15, 
/*39013*/       OPC_EmitInteger, MVT::i1, 0, 
/*39016*/       OPC_EmitInteger, MVT::i1, 0, 
/*39019*/       OPC_EmitInteger, MVT::i1, 0, 
/*39022*/       OPC_EmitInteger, MVT::i1, 0, 
/*39025*/       OPC_EmitInteger, MVT::i1, 0, 
/*39028*/       OPC_EmitInteger, MVT::i1, 0, 
/*39031*/       OPC_EmitInteger, MVT::i1, 0, 
/*39034*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39052*/     /*Scope*/ 47, /*->39100*/
/*39053*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*39055*/       OPC_MoveParent,
/*39056*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39058*/       OPC_EmitInteger, MVT::i32, 15, 
/*39061*/       OPC_EmitInteger, MVT::i1, 0, 
/*39064*/       OPC_EmitInteger, MVT::i1, 0, 
/*39067*/       OPC_EmitInteger, MVT::i1, 1, 
/*39070*/       OPC_EmitInteger, MVT::i1, 0, 
/*39073*/       OPC_EmitInteger, MVT::i1, 0, 
/*39076*/       OPC_EmitInteger, MVT::i1, 0, 
/*39079*/       OPC_EmitInteger, MVT::i1, 0, 
/*39082*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39100*/     /*Scope*/ 45, /*->39146*/
/*39101*/       OPC_MoveParent,
/*39102*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39104*/       OPC_EmitInteger, MVT::i32, 15, 
/*39107*/       OPC_EmitInteger, MVT::i1, 0, 
/*39110*/       OPC_EmitInteger, MVT::i1, 0, 
/*39113*/       OPC_EmitInteger, MVT::i1, 0, 
/*39116*/       OPC_EmitInteger, MVT::i1, 0, 
/*39119*/       OPC_EmitInteger, MVT::i1, 0, 
/*39122*/       OPC_EmitInteger, MVT::i1, 0, 
/*39125*/       OPC_EmitInteger, MVT::i1, 0, 
/*39128*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39146*/     0, /*End of Scope*/
/*39147*/   /*Scope*/ 73|128,1/*201*/, /*->39350*/
/*39149*/     OPC_CheckChild0Type, MVT::v4i32,
/*39151*/     OPC_RecordChild1, // #1 = $rsrc
/*39152*/     OPC_RecordChild2, // #2 = $sampler
/*39153*/     OPC_MoveChild, 3,
/*39155*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39158*/     OPC_Scope, 47, /*->39207*/ // 4 children in Scope
/*39160*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*39162*/       OPC_MoveParent,
/*39163*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39165*/       OPC_EmitInteger, MVT::i32, 15, 
/*39168*/       OPC_EmitInteger, MVT::i1, 0, 
/*39171*/       OPC_EmitInteger, MVT::i1, 0, 
/*39174*/       OPC_EmitInteger, MVT::i1, 1, 
/*39177*/       OPC_EmitInteger, MVT::i1, 0, 
/*39180*/       OPC_EmitInteger, MVT::i1, 0, 
/*39183*/       OPC_EmitInteger, MVT::i1, 0, 
/*39186*/       OPC_EmitInteger, MVT::i1, 0, 
/*39189*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39207*/     /*Scope*/ 47, /*->39255*/
/*39208*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*39210*/       OPC_MoveParent,
/*39211*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39213*/       OPC_EmitInteger, MVT::i32, 15, 
/*39216*/       OPC_EmitInteger, MVT::i1, 0, 
/*39219*/       OPC_EmitInteger, MVT::i1, 0, 
/*39222*/       OPC_EmitInteger, MVT::i1, 0, 
/*39225*/       OPC_EmitInteger, MVT::i1, 0, 
/*39228*/       OPC_EmitInteger, MVT::i1, 0, 
/*39231*/       OPC_EmitInteger, MVT::i1, 0, 
/*39234*/       OPC_EmitInteger, MVT::i1, 0, 
/*39237*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39255*/     /*Scope*/ 47, /*->39303*/
/*39256*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*39258*/       OPC_MoveParent,
/*39259*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39261*/       OPC_EmitInteger, MVT::i32, 15, 
/*39264*/       OPC_EmitInteger, MVT::i1, 0, 
/*39267*/       OPC_EmitInteger, MVT::i1, 0, 
/*39270*/       OPC_EmitInteger, MVT::i1, 1, 
/*39273*/       OPC_EmitInteger, MVT::i1, 0, 
/*39276*/       OPC_EmitInteger, MVT::i1, 0, 
/*39279*/       OPC_EmitInteger, MVT::i1, 0, 
/*39282*/       OPC_EmitInteger, MVT::i1, 0, 
/*39285*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39303*/     /*Scope*/ 45, /*->39349*/
/*39304*/       OPC_MoveParent,
/*39305*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39307*/       OPC_EmitInteger, MVT::i32, 15, 
/*39310*/       OPC_EmitInteger, MVT::i1, 0, 
/*39313*/       OPC_EmitInteger, MVT::i1, 0, 
/*39316*/       OPC_EmitInteger, MVT::i1, 0, 
/*39319*/       OPC_EmitInteger, MVT::i1, 0, 
/*39322*/       OPC_EmitInteger, MVT::i1, 0, 
/*39325*/       OPC_EmitInteger, MVT::i1, 0, 
/*39328*/       OPC_EmitInteger, MVT::i1, 0, 
/*39331*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39349*/     0, /*End of Scope*/
/*39350*/   /*Scope*/ 73|128,1/*201*/, /*->39553*/
/*39352*/     OPC_CheckChild0Type, MVT::v8i32,
/*39354*/     OPC_RecordChild1, // #1 = $rsrc
/*39355*/     OPC_RecordChild2, // #2 = $sampler
/*39356*/     OPC_MoveChild, 3,
/*39358*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39361*/     OPC_Scope, 47, /*->39410*/ // 4 children in Scope
/*39363*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*39365*/       OPC_MoveParent,
/*39366*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39368*/       OPC_EmitInteger, MVT::i32, 15, 
/*39371*/       OPC_EmitInteger, MVT::i1, 0, 
/*39374*/       OPC_EmitInteger, MVT::i1, 0, 
/*39377*/       OPC_EmitInteger, MVT::i1, 1, 
/*39380*/       OPC_EmitInteger, MVT::i1, 0, 
/*39383*/       OPC_EmitInteger, MVT::i1, 0, 
/*39386*/       OPC_EmitInteger, MVT::i1, 0, 
/*39389*/       OPC_EmitInteger, MVT::i1, 0, 
/*39392*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39410*/     /*Scope*/ 47, /*->39458*/
/*39411*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*39413*/       OPC_MoveParent,
/*39414*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39416*/       OPC_EmitInteger, MVT::i32, 15, 
/*39419*/       OPC_EmitInteger, MVT::i1, 0, 
/*39422*/       OPC_EmitInteger, MVT::i1, 0, 
/*39425*/       OPC_EmitInteger, MVT::i1, 0, 
/*39428*/       OPC_EmitInteger, MVT::i1, 0, 
/*39431*/       OPC_EmitInteger, MVT::i1, 0, 
/*39434*/       OPC_EmitInteger, MVT::i1, 0, 
/*39437*/       OPC_EmitInteger, MVT::i1, 0, 
/*39440*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39458*/     /*Scope*/ 47, /*->39506*/
/*39459*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*39461*/       OPC_MoveParent,
/*39462*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39464*/       OPC_EmitInteger, MVT::i32, 15, 
/*39467*/       OPC_EmitInteger, MVT::i1, 0, 
/*39470*/       OPC_EmitInteger, MVT::i1, 0, 
/*39473*/       OPC_EmitInteger, MVT::i1, 1, 
/*39476*/       OPC_EmitInteger, MVT::i1, 0, 
/*39479*/       OPC_EmitInteger, MVT::i1, 0, 
/*39482*/       OPC_EmitInteger, MVT::i1, 0, 
/*39485*/       OPC_EmitInteger, MVT::i1, 0, 
/*39488*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39506*/     /*Scope*/ 45, /*->39552*/
/*39507*/       OPC_MoveParent,
/*39508*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39510*/       OPC_EmitInteger, MVT::i32, 15, 
/*39513*/       OPC_EmitInteger, MVT::i1, 0, 
/*39516*/       OPC_EmitInteger, MVT::i1, 0, 
/*39519*/       OPC_EmitInteger, MVT::i1, 0, 
/*39522*/       OPC_EmitInteger, MVT::i1, 0, 
/*39525*/       OPC_EmitInteger, MVT::i1, 0, 
/*39528*/       OPC_EmitInteger, MVT::i1, 0, 
/*39531*/       OPC_EmitInteger, MVT::i1, 0, 
/*39534*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39552*/     0, /*End of Scope*/
/*39553*/   /*Scope*/ 73|128,1/*201*/, /*->39756*/
/*39555*/     OPC_CheckChild0Type, MVT::v16i32,
/*39557*/     OPC_RecordChild1, // #1 = $rsrc
/*39558*/     OPC_RecordChild2, // #2 = $sampler
/*39559*/     OPC_MoveChild, 3,
/*39561*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39564*/     OPC_Scope, 47, /*->39613*/ // 4 children in Scope
/*39566*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*39568*/       OPC_MoveParent,
/*39569*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39571*/       OPC_EmitInteger, MVT::i32, 15, 
/*39574*/       OPC_EmitInteger, MVT::i1, 0, 
/*39577*/       OPC_EmitInteger, MVT::i1, 0, 
/*39580*/       OPC_EmitInteger, MVT::i1, 1, 
/*39583*/       OPC_EmitInteger, MVT::i1, 0, 
/*39586*/       OPC_EmitInteger, MVT::i1, 0, 
/*39589*/       OPC_EmitInteger, MVT::i1, 0, 
/*39592*/       OPC_EmitInteger, MVT::i1, 0, 
/*39595*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_B_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39613*/     /*Scope*/ 47, /*->39661*/
/*39614*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*39616*/       OPC_MoveParent,
/*39617*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39619*/       OPC_EmitInteger, MVT::i32, 15, 
/*39622*/       OPC_EmitInteger, MVT::i1, 0, 
/*39625*/       OPC_EmitInteger, MVT::i1, 0, 
/*39628*/       OPC_EmitInteger, MVT::i1, 0, 
/*39631*/       OPC_EmitInteger, MVT::i1, 0, 
/*39634*/       OPC_EmitInteger, MVT::i1, 0, 
/*39637*/       OPC_EmitInteger, MVT::i1, 0, 
/*39640*/       OPC_EmitInteger, MVT::i1, 0, 
/*39643*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39661*/     /*Scope*/ 47, /*->39709*/
/*39662*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*39664*/       OPC_MoveParent,
/*39665*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39667*/       OPC_EmitInteger, MVT::i32, 15, 
/*39670*/       OPC_EmitInteger, MVT::i1, 0, 
/*39673*/       OPC_EmitInteger, MVT::i1, 0, 
/*39676*/       OPC_EmitInteger, MVT::i1, 1, 
/*39679*/       OPC_EmitInteger, MVT::i1, 0, 
/*39682*/       OPC_EmitInteger, MVT::i1, 0, 
/*39685*/       OPC_EmitInteger, MVT::i1, 0, 
/*39688*/       OPC_EmitInteger, MVT::i1, 0, 
/*39691*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_B_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39709*/     /*Scope*/ 45, /*->39755*/
/*39710*/       OPC_MoveParent,
/*39711*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39713*/       OPC_EmitInteger, MVT::i32, 15, 
/*39716*/       OPC_EmitInteger, MVT::i1, 0, 
/*39719*/       OPC_EmitInteger, MVT::i1, 0, 
/*39722*/       OPC_EmitInteger, MVT::i1, 0, 
/*39725*/       OPC_EmitInteger, MVT::i1, 0, 
/*39728*/       OPC_EmitInteger, MVT::i1, 0, 
/*39731*/       OPC_EmitInteger, MVT::i1, 0, 
/*39734*/       OPC_EmitInteger, MVT::i1, 0, 
/*39737*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_B_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampleb:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_B_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39755*/     0, /*End of Scope*/
/*39756*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,6/*815*/,  TARGET_VAL(AMDGPUISD::SAMPLED),// ->40576
/*39761*/   OPC_RecordChild0, // #0 = $addr
/*39762*/   OPC_Scope, 73|128,1/*201*/, /*->39966*/ // 4 children in Scope
/*39765*/     OPC_CheckChild0Type, MVT::v2i32,
/*39767*/     OPC_RecordChild1, // #1 = $rsrc
/*39768*/     OPC_RecordChild2, // #2 = $sampler
/*39769*/     OPC_MoveChild, 3,
/*39771*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39774*/     OPC_Scope, 47, /*->39823*/ // 4 children in Scope
/*39776*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*39778*/       OPC_MoveParent,
/*39779*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39781*/       OPC_EmitInteger, MVT::i32, 15, 
/*39784*/       OPC_EmitInteger, MVT::i1, 0, 
/*39787*/       OPC_EmitInteger, MVT::i1, 0, 
/*39790*/       OPC_EmitInteger, MVT::i1, 1, 
/*39793*/       OPC_EmitInteger, MVT::i1, 0, 
/*39796*/       OPC_EmitInteger, MVT::i1, 0, 
/*39799*/       OPC_EmitInteger, MVT::i1, 0, 
/*39802*/       OPC_EmitInteger, MVT::i1, 0, 
/*39805*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39823*/     /*Scope*/ 47, /*->39871*/
/*39824*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*39826*/       OPC_MoveParent,
/*39827*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39829*/       OPC_EmitInteger, MVT::i32, 15, 
/*39832*/       OPC_EmitInteger, MVT::i1, 0, 
/*39835*/       OPC_EmitInteger, MVT::i1, 0, 
/*39838*/       OPC_EmitInteger, MVT::i1, 0, 
/*39841*/       OPC_EmitInteger, MVT::i1, 0, 
/*39844*/       OPC_EmitInteger, MVT::i1, 0, 
/*39847*/       OPC_EmitInteger, MVT::i1, 0, 
/*39850*/       OPC_EmitInteger, MVT::i1, 0, 
/*39853*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39871*/     /*Scope*/ 47, /*->39919*/
/*39872*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*39874*/       OPC_MoveParent,
/*39875*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39877*/       OPC_EmitInteger, MVT::i32, 15, 
/*39880*/       OPC_EmitInteger, MVT::i1, 0, 
/*39883*/       OPC_EmitInteger, MVT::i1, 0, 
/*39886*/       OPC_EmitInteger, MVT::i1, 1, 
/*39889*/       OPC_EmitInteger, MVT::i1, 0, 
/*39892*/       OPC_EmitInteger, MVT::i1, 0, 
/*39895*/       OPC_EmitInteger, MVT::i1, 0, 
/*39898*/       OPC_EmitInteger, MVT::i1, 0, 
/*39901*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V2:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39919*/     /*Scope*/ 45, /*->39965*/
/*39920*/       OPC_MoveParent,
/*39921*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39923*/       OPC_EmitInteger, MVT::i32, 15, 
/*39926*/       OPC_EmitInteger, MVT::i1, 0, 
/*39929*/       OPC_EmitInteger, MVT::i1, 0, 
/*39932*/       OPC_EmitInteger, MVT::i1, 0, 
/*39935*/       OPC_EmitInteger, MVT::i1, 0, 
/*39938*/       OPC_EmitInteger, MVT::i1, 0, 
/*39941*/       OPC_EmitInteger, MVT::i1, 0, 
/*39944*/       OPC_EmitInteger, MVT::i1, 0, 
/*39947*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V2), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v2i32:v2i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V2:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v2i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*39965*/     0, /*End of Scope*/
/*39966*/   /*Scope*/ 73|128,1/*201*/, /*->40169*/
/*39968*/     OPC_CheckChild0Type, MVT::v4i32,
/*39970*/     OPC_RecordChild1, // #1 = $rsrc
/*39971*/     OPC_RecordChild2, // #2 = $sampler
/*39972*/     OPC_MoveChild, 3,
/*39974*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*39977*/     OPC_Scope, 47, /*->40026*/ // 4 children in Scope
/*39979*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*39981*/       OPC_MoveParent,
/*39982*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*39984*/       OPC_EmitInteger, MVT::i32, 15, 
/*39987*/       OPC_EmitInteger, MVT::i1, 0, 
/*39990*/       OPC_EmitInteger, MVT::i1, 0, 
/*39993*/       OPC_EmitInteger, MVT::i1, 1, 
/*39996*/       OPC_EmitInteger, MVT::i1, 0, 
/*39999*/       OPC_EmitInteger, MVT::i1, 0, 
/*40002*/       OPC_EmitInteger, MVT::i1, 0, 
/*40005*/       OPC_EmitInteger, MVT::i1, 0, 
/*40008*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40026*/     /*Scope*/ 47, /*->40074*/
/*40027*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*40029*/       OPC_MoveParent,
/*40030*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40032*/       OPC_EmitInteger, MVT::i32, 15, 
/*40035*/       OPC_EmitInteger, MVT::i1, 0, 
/*40038*/       OPC_EmitInteger, MVT::i1, 0, 
/*40041*/       OPC_EmitInteger, MVT::i1, 0, 
/*40044*/       OPC_EmitInteger, MVT::i1, 0, 
/*40047*/       OPC_EmitInteger, MVT::i1, 0, 
/*40050*/       OPC_EmitInteger, MVT::i1, 0, 
/*40053*/       OPC_EmitInteger, MVT::i1, 0, 
/*40056*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40074*/     /*Scope*/ 47, /*->40122*/
/*40075*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*40077*/       OPC_MoveParent,
/*40078*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40080*/       OPC_EmitInteger, MVT::i32, 15, 
/*40083*/       OPC_EmitInteger, MVT::i1, 0, 
/*40086*/       OPC_EmitInteger, MVT::i1, 0, 
/*40089*/       OPC_EmitInteger, MVT::i1, 1, 
/*40092*/       OPC_EmitInteger, MVT::i1, 0, 
/*40095*/       OPC_EmitInteger, MVT::i1, 0, 
/*40098*/       OPC_EmitInteger, MVT::i1, 0, 
/*40101*/       OPC_EmitInteger, MVT::i1, 0, 
/*40104*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V4:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40122*/     /*Scope*/ 45, /*->40168*/
/*40123*/       OPC_MoveParent,
/*40124*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40126*/       OPC_EmitInteger, MVT::i32, 15, 
/*40129*/       OPC_EmitInteger, MVT::i1, 0, 
/*40132*/       OPC_EmitInteger, MVT::i1, 0, 
/*40135*/       OPC_EmitInteger, MVT::i1, 0, 
/*40138*/       OPC_EmitInteger, MVT::i1, 0, 
/*40141*/       OPC_EmitInteger, MVT::i1, 0, 
/*40144*/       OPC_EmitInteger, MVT::i1, 0, 
/*40147*/       OPC_EmitInteger, MVT::i1, 0, 
/*40150*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V4), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v4i32:v4i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V4:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v4i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40168*/     0, /*End of Scope*/
/*40169*/   /*Scope*/ 73|128,1/*201*/, /*->40372*/
/*40171*/     OPC_CheckChild0Type, MVT::v8i32,
/*40173*/     OPC_RecordChild1, // #1 = $rsrc
/*40174*/     OPC_RecordChild2, // #2 = $sampler
/*40175*/     OPC_MoveChild, 3,
/*40177*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40180*/     OPC_Scope, 47, /*->40229*/ // 4 children in Scope
/*40182*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*40184*/       OPC_MoveParent,
/*40185*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40187*/       OPC_EmitInteger, MVT::i32, 15, 
/*40190*/       OPC_EmitInteger, MVT::i1, 0, 
/*40193*/       OPC_EmitInteger, MVT::i1, 0, 
/*40196*/       OPC_EmitInteger, MVT::i1, 1, 
/*40199*/       OPC_EmitInteger, MVT::i1, 0, 
/*40202*/       OPC_EmitInteger, MVT::i1, 0, 
/*40205*/       OPC_EmitInteger, MVT::i1, 0, 
/*40208*/       OPC_EmitInteger, MVT::i1, 0, 
/*40211*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40229*/     /*Scope*/ 47, /*->40277*/
/*40230*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*40232*/       OPC_MoveParent,
/*40233*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40235*/       OPC_EmitInteger, MVT::i32, 15, 
/*40238*/       OPC_EmitInteger, MVT::i1, 0, 
/*40241*/       OPC_EmitInteger, MVT::i1, 0, 
/*40244*/       OPC_EmitInteger, MVT::i1, 0, 
/*40247*/       OPC_EmitInteger, MVT::i1, 0, 
/*40250*/       OPC_EmitInteger, MVT::i1, 0, 
/*40253*/       OPC_EmitInteger, MVT::i1, 0, 
/*40256*/       OPC_EmitInteger, MVT::i1, 0, 
/*40259*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40277*/     /*Scope*/ 47, /*->40325*/
/*40278*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*40280*/       OPC_MoveParent,
/*40281*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40283*/       OPC_EmitInteger, MVT::i32, 15, 
/*40286*/       OPC_EmitInteger, MVT::i1, 0, 
/*40289*/       OPC_EmitInteger, MVT::i1, 0, 
/*40292*/       OPC_EmitInteger, MVT::i1, 1, 
/*40295*/       OPC_EmitInteger, MVT::i1, 0, 
/*40298*/       OPC_EmitInteger, MVT::i1, 0, 
/*40301*/       OPC_EmitInteger, MVT::i1, 0, 
/*40304*/       OPC_EmitInteger, MVT::i1, 0, 
/*40307*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V8:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40325*/     /*Scope*/ 45, /*->40371*/
/*40326*/       OPC_MoveParent,
/*40327*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40329*/       OPC_EmitInteger, MVT::i32, 15, 
/*40332*/       OPC_EmitInteger, MVT::i1, 0, 
/*40335*/       OPC_EmitInteger, MVT::i1, 0, 
/*40338*/       OPC_EmitInteger, MVT::i1, 0, 
/*40341*/       OPC_EmitInteger, MVT::i1, 0, 
/*40344*/       OPC_EmitInteger, MVT::i1, 0, 
/*40347*/       OPC_EmitInteger, MVT::i1, 0, 
/*40350*/       OPC_EmitInteger, MVT::i1, 0, 
/*40353*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V8), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v8i32:v8i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V8:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v8i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40371*/     0, /*End of Scope*/
/*40372*/   /*Scope*/ 73|128,1/*201*/, /*->40575*/
/*40374*/     OPC_CheckChild0Type, MVT::v16i32,
/*40376*/     OPC_RecordChild1, // #1 = $rsrc
/*40377*/     OPC_RecordChild2, // #2 = $sampler
/*40378*/     OPC_MoveChild, 3,
/*40380*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*40383*/     OPC_Scope, 47, /*->40432*/ // 4 children in Scope
/*40385*/       OPC_CheckPredicate, 37, // Predicate_TEX_ARRAY
/*40387*/       OPC_MoveParent,
/*40388*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40390*/       OPC_EmitInteger, MVT::i32, 15, 
/*40393*/       OPC_EmitInteger, MVT::i1, 0, 
/*40396*/       OPC_EmitInteger, MVT::i1, 0, 
/*40399*/       OPC_EmitInteger, MVT::i1, 1, 
/*40402*/       OPC_EmitInteger, MVT::i1, 0, 
/*40405*/       OPC_EmitInteger, MVT::i1, 0, 
/*40408*/       OPC_EmitInteger, MVT::i1, 0, 
/*40411*/       OPC_EmitInteger, MVT::i1, 0, 
/*40414*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_D_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40432*/     /*Scope*/ 47, /*->40480*/
/*40433*/       OPC_CheckPredicate, 40, // Predicate_TEX_SHADOW
/*40435*/       OPC_MoveParent,
/*40436*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40438*/       OPC_EmitInteger, MVT::i32, 15, 
/*40441*/       OPC_EmitInteger, MVT::i1, 0, 
/*40444*/       OPC_EmitInteger, MVT::i1, 0, 
/*40447*/       OPC_EmitInteger, MVT::i1, 0, 
/*40450*/       OPC_EmitInteger, MVT::i1, 0, 
/*40453*/       OPC_EmitInteger, MVT::i1, 0, 
/*40456*/       OPC_EmitInteger, MVT::i1, 0, 
/*40459*/       OPC_EmitInteger, MVT::i1, 0, 
/*40462*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40480*/     /*Scope*/ 47, /*->40528*/
/*40481*/       OPC_CheckPredicate, 49, // Predicate_TEX_SHADOW_ARRAY
/*40483*/       OPC_MoveParent,
/*40484*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40486*/       OPC_EmitInteger, MVT::i32, 15, 
/*40489*/       OPC_EmitInteger, MVT::i1, 0, 
/*40492*/       OPC_EmitInteger, MVT::i1, 0, 
/*40495*/       OPC_EmitInteger, MVT::i1, 1, 
/*40498*/       OPC_EmitInteger, MVT::i1, 0, 
/*40501*/       OPC_EmitInteger, MVT::i1, 0, 
/*40504*/       OPC_EmitInteger, MVT::i1, 0, 
/*40507*/       OPC_EmitInteger, MVT::i1, 0, 
/*40510*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_C_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)<<P:Predicate_TEX_SHADOW_ARRAY>>) - Complexity = 7
                // Dst: (IMAGE_SAMPLE_C_D_V16:v4f32 15:i32, 0:i1, 0:i1, 1:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40528*/     /*Scope*/ 45, /*->40574*/
/*40529*/       OPC_MoveParent,
/*40530*/       OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40532*/       OPC_EmitInteger, MVT::i32, 15, 
/*40535*/       OPC_EmitInteger, MVT::i1, 0, 
/*40538*/       OPC_EmitInteger, MVT::i1, 0, 
/*40541*/       OPC_EmitInteger, MVT::i1, 0, 
/*40544*/       OPC_EmitInteger, MVT::i1, 0, 
/*40547*/       OPC_EmitInteger, MVT::i1, 0, 
/*40550*/       OPC_EmitInteger, MVT::i1, 0, 
/*40553*/       OPC_EmitInteger, MVT::i1, 0, 
/*40556*/       OPC_MorphNodeTo, TARGET_VAL(AMDGPU::IMAGE_SAMPLE_D_V16), 0,
                    1/*#VTs*/, MVT::v4f32, 11/*#Ops*/, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 
                // Src: (SIsampled:v4f32 v16i32:v16i32:$addr, v32i8:v32i8:$rsrc, i128:i128:$sampler, (imm:i32)) - Complexity = 6
                // Dst: (IMAGE_SAMPLE_D_V16:v4f32 15:i32, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, 0:i1, ?:v16i32:$addr, ?:v32i8:$rsrc, ?:i128:$sampler)
/*40574*/     0, /*End of Scope*/
/*40575*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(AMDGPUISD::RET_FLAG),// ->40603
/*40579*/   OPC_RecordNode,   // #0 = 'IL_retflag' chained node
/*40580*/   OPC_CaptureGlueInput,
/*40581*/   OPC_Scope, 9, /*->40592*/ // 2 children in Scope
/*40583*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40585*/     OPC_EmitMergeInputChains1_0,
/*40586*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_ENDPGM), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (S_ENDPGM)
/*40592*/   /*Scope*/ 9, /*->40602*/
/*40593*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40595*/     OPC_EmitMergeInputChains1_0,
/*40596*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (IL_retflag) - Complexity = 3
              // Dst: (RETURN)
/*40602*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BR),// ->40638
/*40606*/   OPC_RecordNode,   // #0 = 'br' chained node
/*40607*/   OPC_RecordChild1, // #1 = $target
/*40608*/   OPC_MoveChild, 1,
/*40610*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*40613*/   OPC_MoveParent,
/*40614*/   OPC_Scope, 10, /*->40626*/ // 2 children in Scope
/*40616*/     OPC_CheckPatternPredicate, 0, // (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
/*40618*/     OPC_EmitMergeInputChains1_0,
/*40619*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::S_BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (S_BRANCH (bb:Other):$target)
/*40626*/   /*Scope*/ 10, /*->40637*/
/*40627*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40629*/     OPC_EmitMergeInputChains1_0,
/*40630*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (BRANCH (bb:Other):$target)
/*40637*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->40680
/*40641*/   OPC_RecordNode,   // #0 = 'IL_brcond' chained node
/*40642*/   OPC_RecordChild1, // #1 = $target
/*40643*/   OPC_MoveChild, 1,
/*40645*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*40648*/   OPC_MoveParent,
/*40649*/   OPC_RecordChild2, // #2 = $src0
/*40650*/   OPC_Scope, 13, /*->40665*/ // 2 children in Scope
/*40652*/     OPC_CheckChild2Type, MVT::i32,
/*40654*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40656*/     OPC_EmitMergeInputChains1_0,
/*40657*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_i32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRI32:i32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_i32 (bb:Other):$target, GPRI32:i32:$src0)
/*40665*/   /*Scope*/ 13, /*->40679*/
/*40666*/     OPC_CheckChild2Type, MVT::f32,
/*40668*/     OPC_CheckPatternPredicate, 3, // (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*40670*/     OPC_EmitMergeInputChains1_0,
/*40671*/     OPC_MorphNodeTo, TARGET_VAL(AMDGPU::BRANCH_COND_f32), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (IL_brcond (bb:Other):$target, GPRF32:f32:$src0) - Complexity = 3
              // Dst: (BRANCH_COND_f32 (bb:Other):$target, GPRF32:f32:$src0)
/*40679*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 40682 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 269
  // #OPC_RecordNode                     = 125
  // #OPC_RecordChild                    = 434
  // #OPC_RecordMemRef                   = 3
  // #OPC_CaptureGlueInput               = 1
  // #OPC_MoveChild                      = 411
  // #OPC_MoveParent                     = 746
  // #OPC_CheckSame                      = 84
  // #OPC_CheckPatternPredicate          = 721
  // #OPC_CheckPredicate                 = 292
  // #OPC_CheckOpcode                    = 315
  // #OPC_SwitchOpcode                   = 1
  // #OPC_CheckType                      = 476
  // #OPC_SwitchType                     = 52
  // #OPC_CheckChildType                 = 107
  // #OPC_CheckInteger                   = 160
  // #OPC_CheckCondCode                  = 19
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 49
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 4203
  // #OPC_EmitStringInteger              = 192
  // #OPC_EmitRegister                   = 217
  // #OPC_EmitConvertToTarget            = 255
  // #OPC_EmitMergeInputChains           = 131
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 209
  // #OPC_EmitNodeXForm                  = 20
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 21
  // #OPC_MorphNodeTo                    = 712

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (Subtarget.getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS);
  case 1: return (Subtarget.getGeneration() <= AMDGPUSubtarget::R700);
  case 2: return (Subtarget.getGeneration() == AMDGPUSubtarget::EVERGREEN|| Subtarget.getGeneration() ==AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 3: return (Subtarget.getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 4: return (Subtarget.hasCaymanISA());
  case 5: return (Subtarget.getGeneration() >= AMDGPUSubtarget::EVERGREEN && Subtarget.getGeneration() < AMDGPUSubtarget::SOUTHERN_ISLANDS && !Subtarget.hasCaymanISA());
  case 6: return (Subtarget.getGeneration() == AMDGPUSubtarget::R700);
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_legalshift32
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm >=0 && Imm < 32;
  }
  case 1: { // Predicate_bfemask
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isMask_32(N->getZExtValue());
  }
  case 2: { // Predicate_COND_EQ
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOEQ: case ISD::SETUEQ:
                     case ISD::SETEQ: return true;}}
  }
  case 3: { // Predicate_COND_GT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGT: case ISD::SETUGT:
                     case ISD::SETGT: return true;}}
  }
  case 4: { // Predicate_COND_GE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOGE: case ISD::SETUGE:
                     case ISD::SETGE: return true;}}
  }
  case 5: { // Predicate_COND_NE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETONE: case ISD::SETUNE:
                     case ISD::SETNE: return true;}}
  }
  case 6: { // Predicate_COND_LT
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLT: case ISD::SETULT:
                     case ISD::SETLT: return true;}}
  }
  case 7: { // Predicate_COND_LE
    CondCodeSDNode*N = cast<CondCodeSDNode>(Node);
switch(N->get()){{default: return false;
                     case ISD::SETOLE: case ISD::SETULE:
                     case ISD::SETLE: return true;}}
  }
  case 8: { // Predicate_FP_ONE
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->isExactlyValue(1.0);
  }
  case 9: { // Predicate_FP_ZERO
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);
return N->getValueAPF().isZero();
  }
  case 10: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 11: { // Predicate_az_extload
    SDNode *N = Node;

  LoadSDNode *L = cast<LoadSDNode>(N);
  return L->getExtensionType() == ISD::ZEXTLOAD ||
         L->getExtensionType() == ISD::EXTLOAD;

  }
  case 12: { // Predicate_az_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_load_param_exti8
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 14: { // Predicate_az_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 15: { // Predicate_load_param_exti16
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 16: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 17: { // Predicate_load_param
    SDNode *N = Node;
 return isConstantLoad(dyn_cast<LoadSDNode>(N), 0); 
  }
  case 18: { // Predicate_az_extloadi8_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 19: { // Predicate_az_extloadi16_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 20: { // Predicate_global_load
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 21: { // Predicate_IMM8bitDWORD
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();

    return (Imm & ~0x3FC) == 0;
  
  }
  case 22: { // Predicate_constant_load
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 23: { // Predicate_IMM12bit
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isUInt<12>(N->getZExtValue());
  }
  case 24: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 25: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_sextloadi8_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 27: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 28: { // Predicate_sextloadi16_global
    SDNode *N = Node;

    return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 29: { // Predicate_az_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_az_extloadi32_global
    SDNode *N = Node;

  return isGlobalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 31: { // Predicate_sextloadi8_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 32: { // Predicate_az_extloadi8_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 33: { // Predicate_sextloadi16_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 34: { // Predicate_az_extloadi16_constant
    SDNode *N = Node;

    return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 35: { // Predicate_az_extloadi32_constant
    SDNode *N = Node;

  return isConstantLoad(dyn_cast<LoadSDNode>(N), -1);

  }
  case 36: { // Predicate_local_load
    SDNode *N = Node;

    return isLocalLoad(dyn_cast<LoadSDNode>(N));

  }
  case 37: { // Predicate_TEX_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 9 || TType == 10 || TType == 16;
  
  }
  case 38: { // Predicate_TEX_MSAA
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 14;
  
  }
  case 39: { // Predicate_TEX_ARRAY_MSAA
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 15;
  
  }
  case 40: { // Predicate_TEX_SHADOW
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return (TType >= 6 && TType <= 8) || (TType >= 11 && TType <= 13);
  
  }
  case 41: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 42: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 43: { // Predicate_global_store
    SDNode *N = Node;

        return isGlobalStore(dyn_cast<StoreSDNode>(N));

  }
  case 44: { // Predicate_local_store
    SDNode *N = Node;

    return isLocalStore(dyn_cast<StoreSDNode>(N));

  }
  case 45: { // Predicate_anonymous.val.394
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (TM.getSubtarget<AMDGPUSubtarget>().getGeneration() <
      AMDGPUSubtarget::SOUTHERN_ISLANDS) {
    return false;
  }
  const SIRegisterInfo *SIRI =
                       static_cast<const SIRegisterInfo*>(TM.getRegisterInfo());
  for (SDNode::use_iterator U = N->use_begin(), E = SDNode::use_end();
                                                U != E; ++U) {
    if (SIRI->isSGPRClass(getOperandRegClass(*U, U.getOperandNo()))) {
      return true;
    }
  }
  return false;

  }
  case 46: { // Predicate_anonymous.val.396
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return
    (*(const SITargetLowering *)getTargetLowering()).analyzeImmediate(N) == 0;

  }
  case 47: { // Predicate_anonymous.val.395
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  if (TM.getSubtarget<AMDGPUSubtarget>().getGeneration() <
      AMDGPUSubtarget::SOUTHERN_ISLANDS) {
    return false;
  }
  const SIRegisterInfo *SIRI =
                       static_cast<const SIRegisterInfo*>(TM.getRegisterInfo());
  for (SDNode::use_iterator U = N->use_begin(), E = SDNode::use_end();
                                                U != E; ++U) {
    if (SIRI->isSGPRClass(getOperandRegClass(*U, U.getOperandNo()))) {
      return true;
    }
  }
  return false;

  }
  case 48: { // Predicate_TEX_RECT
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 5;
  
  }
  case 49: { // Predicate_TEX_SHADOW_ARRAY
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
uint32_t TType = (uint32_t)N->getZExtValue();
    return TType == 11 || TType == 12 || TType == 17;
  
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
    Result.resize(NextRes+1);
    return SelectU24(N, Result[NextRes+0].first);
  case 1:
    Result.resize(NextRes+1);
    return SelectI24(N, Result[NextRes+0].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // anonymous.val.393
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

    return CurDAG->getTargetConstant(
      N->getZExtValue() >> 2, MVT::i32);
  
  }
  case 1: {  // as_i16imm
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i16);

  }
  case 2: {  // LO32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() & 0xffffffff, MVT::i32);

  }
  case 3: {  // HI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getZExtValue() >> 32, MVT::i32);

  }
  case 4: {  // LO32f
    ConstantFPSDNode *N = cast<ConstantFPSDNode>(V.getNode());

  APInt V = N->getValueAPF().bitcastToAPInt().trunc(32);
  return CurDAG->getTargetConstantFP(APFloat(APFloat::IEEEsingle, V), MVT::f32);

  }
  case 5: {  // HI32f
    ConstantFPSDNode *N = cast<ConstantFPSDNode>(V.getNode());

  APInt V = N->getValueAPF().bitcastToAPInt().lshr(32).trunc(32);
  return CurDAG->getTargetConstantFP(APFloat(APFloat::IEEEsingle, V), MVT::f32);

  }
  }
}

