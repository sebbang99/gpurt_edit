; NOTE: Assertions have been autogenerated by utils/update_test_checks.py UTC_ARGS: --version 4
; RUN: opt < %s -passes='cgscc(coro-split),simplifycfg,early-cse' -S | FileCheck %s

declare ptr @malloc(i64)

%i8.array = type { [100 x i8] }
declare void @consume.i8.array(ptr)

@testbool = external local_unnamed_addr global i8, align 1

; testval does not contain an explicit lifetime end. We must assume that it may
; live across suspension.
define void @HasNoLifetimeEnd() presplitcoroutine {
; CHECK-LABEL: define void @HasNoLifetimeEnd() {
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[ID:%.*]] = call token @llvm.coro.id(i32 0, ptr null, ptr null, ptr @HasNoLifetimeEnd.resumers)
; CHECK-NEXT:    [[ALLOC:%.*]] = call ptr @malloc(i64 16)
; CHECK-NEXT:    [[VFRAME:%.*]] = call noalias nonnull ptr @llvm.coro.begin(token [[ID]], ptr [[ALLOC]])
; CHECK-NEXT:    store ptr @HasNoLifetimeEnd.resume, ptr [[VFRAME]], align 8
; CHECK-NEXT:    [[DESTROY_ADDR:%.*]] = getelementptr inbounds [[HASNOLIFETIMEEND_FRAME:%.*]], ptr [[VFRAME]], i32 0, i32 1
; CHECK-NEXT:    store ptr @HasNoLifetimeEnd.destroy, ptr [[DESTROY_ADDR]], align 8
; CHECK-NEXT:    [[INDEX_ADDR1:%.*]] = getelementptr inbounds [[HASNOLIFETIMEEND_FRAME]], ptr [[VFRAME]], i32 0, i32 2
; CHECK-NEXT:    call void @consume.i8.array(ptr [[INDEX_ADDR1]])
; CHECK-NEXT:    [[INDEX_ADDR2:%.*]] = getelementptr inbounds [[HASNOLIFETIMEEND_FRAME]], ptr [[VFRAME]], i32 0, i32 3
; CHECK-NEXT:    store i1 false, ptr [[INDEX_ADDR2]], align 1
; CHECK-NEXT:    ret void
;
entry:
  %testval = alloca %i8.array
  %id = call token @llvm.coro.id(i32 0, ptr null, ptr null, ptr null)
  %alloc = call ptr @malloc(i64 16) #3
  %vFrame = call noalias nonnull ptr @llvm.coro.begin(token %id, ptr %alloc)

  call void @llvm.lifetime.start.p0(i64 100, ptr %testval)
  call void @consume.i8.array(ptr %testval)

  %save = call token @llvm.coro.save(ptr null)
  %suspend = call i8 @llvm.coro.suspend(token %save, i1 false)
  switch i8 %suspend, label %exit [
    i8 0, label %await.ready
    i8 1, label %exit
  ]
await.ready:
  br label %exit
exit:
  call i1 @llvm.coro.end(ptr null, i1 false, token none)
  ret void
}

define void @LifetimeEndAfterCoroEnd() presplitcoroutine {
; CHECK-LABEL: define void @LifetimeEndAfterCoroEnd() {
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[ID:%.*]] = call token @llvm.coro.id(i32 0, ptr null, ptr null, ptr @LifetimeEndAfterCoroEnd.resumers)
; CHECK-NEXT:    [[ALLOC:%.*]] = call ptr @malloc(i64 16)
; CHECK-NEXT:    [[VFRAME:%.*]] = call noalias nonnull ptr @llvm.coro.begin(token [[ID]], ptr [[ALLOC]])
; CHECK-NEXT:    store ptr @LifetimeEndAfterCoroEnd.resume, ptr [[VFRAME]], align 8
; CHECK-NEXT:    [[DESTROY_ADDR:%.*]] = getelementptr inbounds [[LIFETIMEENDAFTERCOROEND_FRAME:%.*]], ptr [[VFRAME]], i32 0, i32 1
; CHECK-NEXT:    store ptr @LifetimeEndAfterCoroEnd.destroy, ptr [[DESTROY_ADDR]], align 8
; CHECK-NEXT:    [[INDEX_ADDR1:%.*]] = getelementptr inbounds [[LIFETIMEENDAFTERCOROEND_FRAME]], ptr [[VFRAME]], i32 0, i32 2
; CHECK-NEXT:    call void @consume.i8.array(ptr [[INDEX_ADDR1]])
; CHECK-NEXT:    [[INDEX_ADDR2:%.*]] = getelementptr inbounds [[LIFETIMEENDAFTERCOROEND_FRAME]], ptr [[VFRAME]], i32 0, i32 3
; CHECK-NEXT:    store i1 false, ptr [[INDEX_ADDR2]], align 1
; CHECK-NEXT:    ret void
;
entry:
  %testval = alloca %i8.array
  %id = call token @llvm.coro.id(i32 0, ptr null, ptr null, ptr null)
  %alloc = call ptr @malloc(i64 16) #3
  %vFrame = call noalias nonnull ptr @llvm.coro.begin(token %id, ptr %alloc)

  call void @llvm.lifetime.start.p0(i64 100, ptr %testval)
  call void @consume.i8.array(ptr %testval)

  %save = call token @llvm.coro.save(ptr null)
  %suspend = call i8 @llvm.coro.suspend(token %save, i1 false)
  switch i8 %suspend, label %exit [
    i8 0, label %await.ready
    i8 1, label %exit
  ]
await.ready:
  br label %exit
exit:
  call i1 @llvm.coro.end(ptr null, i1 false, token none)
  call void @llvm.lifetime.end.p0(i64 100, ptr  %testval)
  ret void
}

define void @BranchWithoutLifetimeEnd() presplitcoroutine {
; CHECK-LABEL: define void @BranchWithoutLifetimeEnd() {
; CHECK-NEXT:  entry:
; CHECK-NEXT:    [[ID:%.*]] = call token @llvm.coro.id(i32 0, ptr null, ptr null, ptr @BranchWithoutLifetimeEnd.resumers)
; CHECK-NEXT:    [[ALLOC:%.*]] = call ptr @malloc(i64 16)
; CHECK-NEXT:    [[VFRAME:%.*]] = call noalias nonnull ptr @llvm.coro.begin(token [[ID]], ptr [[ALLOC]])
; CHECK-NEXT:    store ptr @BranchWithoutLifetimeEnd.resume, ptr [[VFRAME]], align 8
; CHECK-NEXT:    [[DESTROY_ADDR:%.*]] = getelementptr inbounds [[BRANCHWITHOUTLIFETIMEEND_FRAME:%.*]], ptr [[VFRAME]], i32 0, i32 1
; CHECK-NEXT:    store ptr @BranchWithoutLifetimeEnd.destroy, ptr [[DESTROY_ADDR]], align 8
; CHECK-NEXT:    [[TESTVAL:%.*]] = getelementptr inbounds [[BRANCHWITHOUTLIFETIMEEND_FRAME]], ptr [[VFRAME]], i32 0, i32 2
; CHECK-NEXT:    call void @consume.i8.array(ptr [[TESTVAL]])
; CHECK-NEXT:    [[TMP0:%.*]] = load i8, ptr @testbool, align 1
; CHECK-NEXT:    [[INDEX_ADDR1:%.*]] = getelementptr inbounds [[BRANCHWITHOUTLIFETIMEEND_FRAME]], ptr [[VFRAME]], i32 0, i32 3
; CHECK-NEXT:    store i1 false, ptr [[INDEX_ADDR1]], align 1
; CHECK-NEXT:    ret void
;
entry:
  %testval = alloca %i8.array
  %id = call token @llvm.coro.id(i32 0, ptr null, ptr null, ptr null)
  %alloc = call ptr @malloc(i64 16) #3
  %vFrame = call noalias nonnull ptr @llvm.coro.begin(token %id, ptr %alloc)

  call void @llvm.lifetime.start.p0(i64 100, ptr %testval)
  call void @consume.i8.array(ptr %testval)

  %0 = load i8, ptr @testbool, align 1
  %tobool = trunc nuw i8 %0 to i1
  br i1 %tobool, label %if.then, label %if.end

if.then:
  call void @llvm.lifetime.end.p0(i64 100, ptr  %testval)
  br label %if.end

if.end:
  %save = call token @llvm.coro.save(ptr null)
  %suspend = call i8 @llvm.coro.suspend(token %save, i1 false)
  switch i8 %suspend, label %exit [
    i8 0, label %await.ready
    i8 1, label %exit
  ]
await.ready:
  br label %exit
exit:
  call i1 @llvm.coro.end(ptr null, i1 false, token none)
  ret void
}


declare token @llvm.coro.id(i32, ptr readnone, ptr nocapture readonly, ptr)
declare ptr @llvm.coro.begin(token, ptr writeonly) #3
declare ptr @llvm.coro.frame() #5
declare i8 @llvm.coro.suspend(token, i1) #3
declare i1 @llvm.coro.end(ptr, i1, token) #3
declare void @llvm.lifetime.start.p0(i64, ptr nocapture) #4
declare void @llvm.lifetime.end.p0(i64, ptr nocapture) #4