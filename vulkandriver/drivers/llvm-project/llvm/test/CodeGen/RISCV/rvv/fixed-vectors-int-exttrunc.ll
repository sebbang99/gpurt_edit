; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -mtriple=riscv32 -mattr=+m,+v -verify-machineinstrs < %s | FileCheck %s
; RUN: llc -mtriple=riscv64 -mattr=+m,+v -verify-machineinstrs < %s | FileCheck %s

define void @sext_v4i8_v4i32(ptr %x, ptr %z) {
; CHECK-LABEL: sext_v4i8_v4i32:
; CHECK:       # %bb.0:
; CHECK-NEXT:    vsetivli zero, 4, e32, m1, ta, ma
; CHECK-NEXT:    vle8.v v8, (a0)
; CHECK-NEXT:    vsext.vf4 v9, v8
; CHECK-NEXT:    vse32.v v9, (a1)
; CHECK-NEXT:    ret
  %a = load <4 x i8>, ptr %x
  %b = sext <4 x i8> %a to <4 x i32>
  store <4 x i32> %b, ptr %z
  ret void
}

define void @zext_v4i8_v4i32(ptr %x, ptr %z) {
; CHECK-LABEL: zext_v4i8_v4i32:
; CHECK:       # %bb.0:
; CHECK-NEXT:    vsetivli zero, 4, e32, m1, ta, ma
; CHECK-NEXT:    vle8.v v8, (a0)
; CHECK-NEXT:    vzext.vf4 v9, v8
; CHECK-NEXT:    vse32.v v9, (a1)
; CHECK-NEXT:    ret
  %a = load <4 x i8>, ptr %x
  %b = zext <4 x i8> %a to <4 x i32>
  store <4 x i32> %b, ptr %z
  ret void
}

define void @sext_v8i8_v8i32(ptr %x, ptr %z) {
; CHECK-LABEL: sext_v8i8_v8i32:
; CHECK:       # %bb.0:
; CHECK-NEXT:    vsetivli zero, 8, e32, m2, ta, ma
; CHECK-NEXT:    vle8.v v8, (a0)
; CHECK-NEXT:    vsext.vf4 v10, v8
; CHECK-NEXT:    vse32.v v10, (a1)
; CHECK-NEXT:    ret
  %a = load <8 x i8>, ptr %x
  %b = sext <8 x i8> %a to <8 x i32>
  store <8 x i32> %b, ptr %z
  ret void
}

define void @sext_v32i8_v32i32(ptr %x, ptr %z) {
; CHECK-LABEL: sext_v32i8_v32i32:
; CHECK:       # %bb.0:
; CHECK-NEXT:    li a2, 32
; CHECK-NEXT:    vsetvli zero, a2, e32, m8, ta, ma
; CHECK-NEXT:    vle8.v v8, (a0)
; CHECK-NEXT:    vsext.vf4 v16, v8
; CHECK-NEXT:    vse32.v v16, (a1)
; CHECK-NEXT:    ret
  %a = load <32 x i8>, ptr %x
  %b = sext <32 x i8> %a to <32 x i32>
  store <32 x i32> %b, ptr %z
  ret void
}

define void @trunc_v4i8_v4i32(ptr %x, ptr %z) {
; CHECK-LABEL: trunc_v4i8_v4i32:
; CHECK:       # %bb.0:
; CHECK-NEXT:    vsetivli zero, 4, e16, mf2, ta, ma
; CHECK-NEXT:    vle32.v v8, (a0)
; CHECK-NEXT:    vnsrl.wi v8, v8, 0
; CHECK-NEXT:    vsetvli zero, zero, e8, mf4, ta, ma
; CHECK-NEXT:    vnsrl.wi v8, v8, 0
; CHECK-NEXT:    vse8.v v8, (a1)
; CHECK-NEXT:    ret
  %a = load <4 x i32>, ptr %x
  %b = trunc <4 x i32> %a to <4 x i8>
  store <4 x i8> %b, ptr %z
  ret void
}

define void @trunc_v8i8_v8i32(ptr %x, ptr %z) {
; CHECK-LABEL: trunc_v8i8_v8i32:
; CHECK:       # %bb.0:
; CHECK-NEXT:    vsetivli zero, 8, e16, m1, ta, ma
; CHECK-NEXT:    vle32.v v8, (a0)
; CHECK-NEXT:    vnsrl.wi v10, v8, 0
; CHECK-NEXT:    vsetvli zero, zero, e8, mf2, ta, ma
; CHECK-NEXT:    vnsrl.wi v8, v10, 0
; CHECK-NEXT:    vse8.v v8, (a1)
; CHECK-NEXT:    ret
  %a = load <8 x i32>, ptr %x
  %b = trunc <8 x i32> %a to <8 x i8>
  store <8 x i8> %b, ptr %z
  ret void
}