; NOTE: Assertions have been autogenerated by utils/update_test_checks.py
; RUN: opt < %s -passes=instcombine -S | FileCheck %s

target triple = "nvptx64"

declare void @user(ptr)
declare ptr @malloc(i64) allockind("alloc,uninitialized") "alloc-family"="malloc" allocsize(0)
declare void @free(ptr) allockind("free") "alloc-family"="malloc"

; Ensure the nvptx backend states malloc & free are a thing so we can recognize
; so we will optimize them properly. In the test below the malloc-free chain is
; useless and we can remove it *if* we know about malloc & free.
define void @malloc_then_free_not_needed() {
; CHECK-LABEL: @malloc_then_free_not_needed(
; CHECK-NEXT:    ret void
;
  %a = call ptr @malloc(i64 4)
  store i8 0, ptr %a
  call void @free(ptr %a)
  ret void
}

define void @malloc_then_free_needed() {
; CHECK-LABEL: @malloc_then_free_needed(
; CHECK-NEXT:    [[A:%.*]] = call dereferenceable_or_null(4) ptr @malloc(i64 4)
; CHECK-NEXT:    call void @user(ptr [[A]])
; CHECK-NEXT:    call void @free(ptr [[A]])
; CHECK-NEXT:    ret void
;
  %a = call ptr @malloc(i64 4)
  call void @user(ptr %a)
  call void @free(ptr %a)
  ret void
}