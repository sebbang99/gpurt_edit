; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc --mtriple=loongarch64 -mattr=+d < %s | FileCheck %s

declare void @llvm.loongarch.cacop.d(i64, i64, i64)
declare i32 @llvm.loongarch.crc.w.b.w(i32, i32)
declare i32 @llvm.loongarch.crc.w.h.w(i32, i32)
declare i32 @llvm.loongarch.crc.w.w.w(i32, i32)
declare i32 @llvm.loongarch.crc.w.d.w(i64, i32)
declare i32 @llvm.loongarch.crcc.w.b.w(i32, i32)
declare i32 @llvm.loongarch.crcc.w.h.w(i32, i32)
declare i32 @llvm.loongarch.crcc.w.w.w(i32, i32)
declare i32 @llvm.loongarch.crcc.w.d.w(i64, i32)
declare i64 @llvm.loongarch.csrrd.d(i32 immarg)
declare i64 @llvm.loongarch.csrwr.d(i64, i32 immarg)
declare i64 @llvm.loongarch.csrxchg.d(i64, i64, i32 immarg)
declare i64 @llvm.loongarch.iocsrrd.d(i32)
declare void @llvm.loongarch.iocsrwr.d(i64, i32)
declare void @llvm.loongarch.asrtle.d(i64, i64)
declare void @llvm.loongarch.asrtgt.d(i64, i64)
declare i64 @llvm.loongarch.lddir.d(i64, i64)
declare void @llvm.loongarch.ldpte.d(i64, i64)

define i32 @crc_w_b_w(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_b_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crc.w.b.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.b.w(i32 %a, i32 %b)
  ret i32 %res
}

define void @crc_w_b_w_noret(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_b_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.b.w(i32 %a, i32 %b)
  ret void
}

define i32 @crc_w_h_w(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_h_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crc.w.h.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.h.w(i32 %a, i32 %b)
  ret i32 %res
}

define void @crc_w_h_w_noret(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_h_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.h.w(i32 %a, i32 %b)
  ret void
}

define i32 @crc_w_w_w(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_w_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crc.w.w.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.w.w(i32 %a, i32 %b)
  ret i32 %res
}

define void @crc_w_w_w_noret(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_w_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.w.w(i32 %a, i32 %b)
  ret void
}

define void @cacop_d(i64 %a) nounwind {
; CHECK-LABEL: cacop_d:
; CHECK:       # %bb.0:
; CHECK-NEXT:    cacop 1, $a0, 4
; CHECK-NEXT:    ret
  call void @llvm.loongarch.cacop.d(i64 1, i64 %a, i64 4)
  ret void
}

define i32 @crc_w_d_w(i64 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_d_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crc.w.d.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.d.w(i64 %a, i32 %b)
  ret i32 %res
}

define void @crc_w_d_w_noret(i64 %a, i32 %b) nounwind {
; CHECK-LABEL: crc_w_d_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crc.w.d.w(i64 %a, i32 %b)
  ret void
}

define i32 @crcc_w_b_w(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_b_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crcc.w.b.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.b.w(i32 %a, i32 %b)
  ret i32 %res
}

define void @crcc_w_b_w_noret(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_b_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.b.w(i32 %a, i32 %b)
  ret void
}

define i32 @crcc_w_h_w(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_h_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crcc.w.h.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.h.w(i32 %a, i32 %b)
  ret i32 %res
}

define void @crcc_w_h_w_noret(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_h_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.h.w(i32 %a, i32 %b)
  ret void
}

define i32 @crcc_w_w_w(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_w_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crcc.w.w.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.w.w(i32 %a, i32 %b)
  ret i32 %res
}

define void @crcc_w_w_w_noret(i32 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_w_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.w.w(i32 %a, i32 %b)
  ret void
}

define i32 @crcc_w_d_w(i64 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_d_w:
; CHECK:       # %bb.0:
; CHECK-NEXT:    crcc.w.d.w $a0, $a0, $a1
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.d.w(i64 %a, i32 %b)
  ret i32 %res
}

define void @crcc_w_d_w_noret(i64 %a, i32 %b) nounwind {
; CHECK-LABEL: crcc_w_d_w_noret:
; CHECK:       # %bb.0:
; CHECK-NEXT:    ret
  %res = call i32 @llvm.loongarch.crcc.w.d.w(i64 %a, i32 %b)
  ret void
}

define i64 @csrrd_d() {
; CHECK-LABEL: csrrd_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    csrrd $a0, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.csrrd.d(i32 1)
  ret i64 %0
}

define void @csrrd_d_noret() {
; CHECK-LABEL: csrrd_d_noret:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    csrrd $a0, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.csrrd.d(i32 1)
  ret void
}

define i64 @csrwr_d(i64 %a) {
; CHECK-LABEL: csrwr_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    csrwr $a0, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.csrwr.d(i64 %a, i32 1)
  ret i64 %0
}

;; Check that csrwr is emitted even if the return value of the intrinsic is not used.
define void @csrwr_d_noret(i64 %a) {
; CHECK-LABEL: csrwr_d_noret:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    csrwr $a0, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.csrwr.d(i64 %a, i32 1)
  ret void
}

define i64 @csrxchg_d(i64 %a, i64 %b) {
; CHECK-LABEL: csrxchg_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    csrxchg $a0, $a1, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.csrxchg.d(i64 %a, i64 %b, i32 1)
  ret i64 %0
}

;; Check that csrxchg is emitted even if the return value of the intrinsic is not used.
define void @csrxchg_d_noret(i64 %a, i64 %b) {
; CHECK-LABEL: csrxchg_d_noret:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    csrxchg $a0, $a1, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.csrxchg.d(i64 %a, i64 %b, i32 1)
  ret void
}

define i64 @iocsrrd_d(i32 %a) {
; CHECK-LABEL: iocsrrd_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    iocsrrd.d $a0, $a0
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.iocsrrd.d(i32 %a)
  ret i64 %0
}

define void @iocsrrd_d_noret(i32 %a) {
; CHECK-LABEL: iocsrrd_d_noret:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    iocsrrd.d $a0, $a0
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.iocsrrd.d(i32 %a)
  ret void
}

define void @iocsrwr_d(i64 %a, i32 signext %b) {
; CHECK-LABEL: iocsrwr_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    iocsrwr.d $a0, $a1
; CHECK-NEXT:    ret
entry:
  tail call void @llvm.loongarch.iocsrwr.d(i64 %a, i32 %b)
  ret void
}

define void @asrtle_d(i64 %a, i64 %b) {
; CHECK-LABEL: asrtle_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    asrtle.d $a0, $a1
; CHECK-NEXT:    ret
entry:
  tail call void @llvm.loongarch.asrtle.d(i64 %a, i64 %b)
  ret void
}

define void @asrtgt_d(i64 %a, i64 %b) {
; CHECK-LABEL: asrtgt_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    asrtgt.d $a0, $a1
; CHECK-NEXT:    ret
entry:
  tail call void @llvm.loongarch.asrtgt.d(i64 %a, i64 %b)
  ret void
}

define i64 @lddir_d(i64 %a) {
; CHECK-LABEL: lddir_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lddir $a0, $a0, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.lddir.d(i64 %a, i64 1)
  ret i64 %0
}

define void @lddir_d_noret(i64 %a) {
; CHECK-LABEL: lddir_d_noret:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lddir $a0, $a0, 1
; CHECK-NEXT:    ret
entry:
  %0 = tail call i64 @llvm.loongarch.lddir.d(i64 %a, i64 1)
  ret void
}

define void @ldpte_d(i64 %a) {
; CHECK-LABEL: ldpte_d:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    ldpte $a0, 1
; CHECK-NEXT:    ret
entry:
  tail call void @llvm.loongarch.ldpte.d(i64 %a, i64 1)
  ret void
}