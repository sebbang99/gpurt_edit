; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: opt -passes=jump-threading -S < %s | FileCheck %s

declare i32 @f1()
declare i32 @f2()
declare void @f3()

; trunc(and) should be simplified
define i32 @test(i1 %cond0) {
; CHECK-LABEL: @test(
; CHECK-NEXT:    br i1 [[COND0:%.*]], label [[T1:%.*]], label [[F1:%.*]]
; CHECK:       T1:
; CHECK-NEXT:    [[V1:%.*]] = call i32 @f1()
; CHECK-NEXT:    br label [[F2:%.*]]
; CHECK:       F1:
; CHECK-NEXT:    [[V2:%.*]] = call i32 @f2()
; CHECK-NEXT:    br label [[F2]]
; CHECK:       F2:
; CHECK-NEXT:    [[A:%.*]] = phi i32 [ 10, [[T1]] ], [ 0, [[F1]] ]
; CHECK-NEXT:    [[B:%.*]] = phi i32 [ [[V1]], [[T1]] ], [ [[V2]], [[F1]] ]
; CHECK-NEXT:    [[AND:%.*]] = and i32 [[A]], 1
; CHECK-NEXT:    ret i32 [[B]]
;
  br i1 %cond0, label %T1, label %F1
T1:
  %v1 = call i32 @f1()
  br label %Merge

F1:
  %v2 = call i32 @f2()
  br label %Merge

Merge:
  %A = phi i32 [10, %T1], [0, %F1]
  %B = phi i32 [%v1, %T1], [%v2, %F1]
  %And = and i32 %A, 1
  %cond = trunc i32 %And to i1
  br i1 %cond, label %T2, label %F2

T2:
  call void @f3()
  ret i32 %B

F2:
  ret i32 %B
}

; trunc(select) should be simplified
define i32 @test2(i1 %cond0) {
; CHECK-LABEL: @test2(
; CHECK-NEXT:    br i1 [[COND0:%.*]], label [[T1:%.*]], label [[F1:%.*]]
; CHECK:       T1:
; CHECK-NEXT:    [[V1:%.*]] = call i32 @f1()
; CHECK-NEXT:    br label [[F2:%.*]]
; CHECK:       F1:
; CHECK-NEXT:    [[V2:%.*]] = call i32 @f2()
; CHECK-NEXT:    br label [[F2]]
; CHECK:       F2:
; CHECK-NEXT:    [[A:%.*]] = phi i1 [ true, [[T1]] ], [ false, [[F1]] ]
; CHECK-NEXT:    [[B:%.*]] = phi i32 [ [[V1]], [[T1]] ], [ [[V2]], [[F1]] ]
; CHECK-NEXT:    [[A2:%.*]] = xor i1 [[A]], true
; CHECK-NEXT:    [[SEL:%.*]] = select i1 [[A2]], i32 10, i32 0
; CHECK-NEXT:    ret i32 [[B]]
;
  br i1 %cond0, label %T1, label %F1
T1:
  %v1 = call i32 @f1()
  br label %Merge

F1:
  %v2 = call i32 @f2()
  br label %Merge

Merge:
  %A = phi i1 [1, %T1], [0, %F1]
  %B = phi i32 [%v1, %T1], [%v2, %F1]
  %A2 = xor i1 %A, 1
  %sel = select i1 %A2, i32 10, i32 0
  %cond = trunc i32 %sel to i1
  br i1 %cond, label %T2, label %F2

T2:
  call void @f3()
  ret i32 %B

F2:
  ret i32 %B
}
