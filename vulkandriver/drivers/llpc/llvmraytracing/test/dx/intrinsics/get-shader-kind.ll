; NOTE: Assertions have been autogenerated by utils/update_test_checks.py UTC_ARGS: --version 2
; RUN: opt --verify-each -passes='dxil-cont-lgc-rt-op-converter,lint,lower-raytracing-pipeline,lint' -S %s --lint-abort-on-error | FileCheck %s

%struct.DispatchSystemData = type { i32 }
%struct.BuiltInTriangleIntersectionAttributes = type { <2 x float> }
%struct.HitData = type { float, i32 }
%struct.Payload = type { i32 }

declare i32 @_AmdGetShaderKind()

declare %struct.DispatchSystemData @_cont_SetupRayGen()
declare !types !3 i32 @_cont_GetLocalRootIndex(%struct.DispatchSystemData*)
declare !types !5 %struct.BuiltInTriangleIntersectionAttributes @_cont_GetTriangleHitAttributes(%struct.DispatchSystemData*)
declare !types !6 i32 @_cont_HitKind(%struct.DispatchSystemData*, %struct.HitData*)

; Check that GetShaderKind calls in non-shaders, like left-over intrinsics, are ignored.
define float @_cont_RayTCurrent() {
; CHECK-LABEL: define float @_cont_RayTCurrent() {
; CHECK-NEXT:    [[K:%.*]] = call i32 @_AmdGetShaderKind()
; CHECK-NEXT:    [[F:%.*]] = sitofp i32 [[K]] to float
; CHECK-NEXT:    ret float [[F]]
;
  %k = call i32 @_AmdGetShaderKind()
  %f = sitofp i32 %k to float
  ret float %f
}

; Note: DXILShaderKind::Miss has value 11
define void @MyMiss(%struct.Payload* %payload) !types !1 !lgc.rt.shaderstage !16 {
; CHECK-LABEL: define %struct.DispatchSystemData @MyMiss
; CHECK-SAME: (i64 [[RETURNADDR:%.*]], [[STRUCT_DISPATCHSYSTEMDATA:%.*]] [[TMP0:%.*]]) !lgc.rt.shaderstage [[META12:![0-9]+]] !continuation.registercount [[META5:![0-9]+]] !continuation [[META13:![0-9]+]] {
; CHECK-NEXT:    [[SYSTEM_DATA_ALLOCA:%.*]] = alloca [[STRUCT_DISPATCHSYSTEMDATA]], align 8
; CHECK-NEXT:    [[TMP2:%.*]] = alloca [[STRUCT_PAYLOAD:%.*]], align 8
; CHECK-NEXT:    store [[STRUCT_DISPATCHSYSTEMDATA]] [[TMP0]], ptr [[SYSTEM_DATA_ALLOCA]], align 4
; CHECK-NEXT:    [[TMP3:%.*]] = call i32 @_cont_GetLocalRootIndex(ptr [[SYSTEM_DATA_ALLOCA]])
; CHECK-NEXT:    [[TMP4:%.*]] = getelementptr inbounds [[STRUCT_PAYLOAD]], ptr [[TMP2]], i32 0
; CHECK-NEXT:    [[TMP5:%.*]] = load i32, ptr addrspace(20) @PAYLOAD, align 4
; CHECK-NEXT:    store i32 [[TMP5]], ptr [[TMP4]], align 4
; CHECK-NEXT:    call void @amd.dx.setLocalRootIndex(i32 [[TMP3]])
; CHECK-NEXT:    [[TMP6:%.*]] = getelementptr inbounds [[STRUCT_PAYLOAD]], ptr [[TMP2]], i32 0, i32 0
; CHECK-NEXT:    store i32 11, ptr [[TMP6]], align 4
; CHECK-NEXT:    [[TMP7:%.*]] = getelementptr inbounds [[STRUCT_PAYLOAD]], ptr [[TMP2]], i32 0
; CHECK-NEXT:    [[TMP8:%.*]] = load i32, ptr [[TMP7]], align 4
; CHECK-NEXT:    store i32 [[TMP8]], ptr addrspace(20) @PAYLOAD, align 4
; CHECK-NEXT:    [[TMP9:%.*]] = load [[STRUCT_DISPATCHSYSTEMDATA]], ptr [[SYSTEM_DATA_ALLOCA]], align 4
; CHECK-NEXT:    call void (...) @lgc.ilcps.return(i64 [[RETURNADDR]], [[STRUCT_DISPATCHSYSTEMDATA]] [[TMP9]]), !continuation.registercount [[META5]]
; CHECK-NEXT:    unreachable
;
  %1 = call i32 @_AmdGetShaderKind()
  %2 = getelementptr inbounds %struct.Payload, %struct.Payload* %payload, i32 0, i32 0
  store i32 %1, i32* %2, align 4
  ret void
}

!dx.entryPoints = !{!12, !13}

!1 = !{!"function", !"void", !2}
!2 = !{i32 0, %struct.Payload poison}
!3 = !{!"function", i32 poison, !4}
!4 = !{i32 0, %struct.DispatchSystemData poison}
!5 = !{!"function", %struct.BuiltInTriangleIntersectionAttributes poison, !4}
!6 = !{!"function", i32 poison, !4, !7}
!7 = !{i32 0, %struct.HitData poison}
!12 = !{null, !"", null, null, null}
!13 = !{void (%struct.Payload*)* @MyMiss, !"MyMiss", null, null, !14}
; The metadata on this line identifies @MyMiss as miss shader
!14 = !{i32 8, i32 11, i32 6, i32 4, i32 5, !15}
!15 = !{i32 0}
!16 = !{i32 4}