; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -mattr=+sve -force-streaming-compatible < %s | FileCheck %s
; RUN: llc -mattr=+sme -force-streaming-compatible < %s | FileCheck %s
; RUN: llc -force-streaming-compatible < %s | FileCheck %s --check-prefix=NONEON-NOSVE


target triple = "aarch64-unknown-linux-gnu"

define <4 x i8> @sdiv_v4i8(<4 x i8> %op1) {
; CHECK-LABEL: sdiv_v4i8:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.h, vl4
; CHECK-NEXT:    // kill: def $d0 killed $d0 def $z0
; CHECK-NEXT:    sxtb z0.h, p0/m, z0.h
; CHECK-NEXT:    asrd z0.h, p0/m, z0.h, #5
; CHECK-NEXT:    // kill: def $d0 killed $d0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v4i8:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    shl v1.4h, v0.4h, #8
; NONEON-NOSVE-NEXT:    movi d2, #0xff00ff00ff00ff
; NONEON-NOSVE-NEXT:    sshr v1.4h, v1.4h, #8
; NONEON-NOSVE-NEXT:    ushr v1.4h, v1.4h, #7
; NONEON-NOSVE-NEXT:    and v1.8b, v1.8b, v2.8b
; NONEON-NOSVE-NEXT:    usra v0.4h, v1.4h, #3
; NONEON-NOSVE-NEXT:    shl v0.4h, v0.4h, #8
; NONEON-NOSVE-NEXT:    sshr v0.4h, v0.4h, #8
; NONEON-NOSVE-NEXT:    sshr v0.4h, v0.4h, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <4 x i8> %op1, shufflevector (<4 x i8> insertelement (<4 x i8> poison, i8 32, i32 0), <4 x i8> poison, <4 x i32> zeroinitializer)
  ret <4 x i8> %res
}

define <8 x i8> @sdiv_v8i8(<8 x i8> %op1) {
; CHECK-LABEL: sdiv_v8i8:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.b, vl8
; CHECK-NEXT:    // kill: def $d0 killed $d0 def $z0
; CHECK-NEXT:    asrd z0.b, p0/m, z0.b, #5
; CHECK-NEXT:    // kill: def $d0 killed $d0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v8i8:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt v1.8b, v0.8b, #0
; NONEON-NOSVE-NEXT:    usra v0.8b, v1.8b, #3
; NONEON-NOSVE-NEXT:    sshr v0.8b, v0.8b, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <8 x i8> %op1, shufflevector (<8 x i8> insertelement (<8 x i8> poison, i8 32, i32 0), <8 x i8> poison, <8 x i32> zeroinitializer)
  ret <8 x i8> %res
}

define <16 x i8> @sdiv_v16i8(<16 x i8> %op1) {
; CHECK-LABEL: sdiv_v16i8:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.b, vl16
; CHECK-NEXT:    // kill: def $q0 killed $q0 def $z0
; CHECK-NEXT:    asrd z0.b, p0/m, z0.b, #5
; CHECK-NEXT:    // kill: def $q0 killed $q0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v16i8:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt v1.16b, v0.16b, #0
; NONEON-NOSVE-NEXT:    usra v0.16b, v1.16b, #3
; NONEON-NOSVE-NEXT:    sshr v0.16b, v0.16b, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <16 x i8> %op1, shufflevector (<16 x i8> insertelement (<16 x i8> poison, i8 32, i32 0), <16 x i8> poison, <16 x i32> zeroinitializer)
  ret <16 x i8> %res
}

define void @sdiv_v32i8(ptr %a) {
; CHECK-LABEL: sdiv_v32i8:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ldp q0, q1, [x0]
; CHECK-NEXT:    ptrue p0.b, vl16
; CHECK-NEXT:    asrd z0.b, p0/m, z0.b, #5
; CHECK-NEXT:    asrd z1.b, p0/m, z1.b, #5
; CHECK-NEXT:    stp q0, q1, [x0]
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v32i8:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    ldp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    cmlt v2.16b, v0.16b, #0
; NONEON-NOSVE-NEXT:    cmlt v3.16b, v1.16b, #0
; NONEON-NOSVE-NEXT:    usra v0.16b, v2.16b, #3
; NONEON-NOSVE-NEXT:    usra v1.16b, v3.16b, #3
; NONEON-NOSVE-NEXT:    sshr v0.16b, v0.16b, #5
; NONEON-NOSVE-NEXT:    sshr v1.16b, v1.16b, #5
; NONEON-NOSVE-NEXT:    stp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    ret
  %op1 = load <32 x i8>, ptr %a
  %res = sdiv <32 x i8> %op1, shufflevector (<32 x i8> insertelement (<32 x i8> poison, i8 32, i32 0), <32 x i8> poison, <32 x i32> zeroinitializer)
  store <32 x i8> %res, ptr %a
  ret void
}

define <2 x i16> @sdiv_v2i16(<2 x i16> %op1) {
; CHECK-LABEL: sdiv_v2i16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s, vl2
; CHECK-NEXT:    // kill: def $d0 killed $d0 def $z0
; CHECK-NEXT:    sxth z0.s, p0/m, z0.s
; CHECK-NEXT:    asrd z0.s, p0/m, z0.s, #5
; CHECK-NEXT:    // kill: def $d0 killed $d0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v2i16:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    shl v1.2s, v0.2s, #16
; NONEON-NOSVE-NEXT:    mov w8, #31 // =0x1f
; NONEON-NOSVE-NEXT:    dup v2.2s, w8
; NONEON-NOSVE-NEXT:    sshr v1.2s, v1.2s, #16
; NONEON-NOSVE-NEXT:    ushr v1.2s, v1.2s, #26
; NONEON-NOSVE-NEXT:    and v1.8b, v1.8b, v2.8b
; NONEON-NOSVE-NEXT:    add v0.2s, v0.2s, v1.2s
; NONEON-NOSVE-NEXT:    shl v0.2s, v0.2s, #16
; NONEON-NOSVE-NEXT:    sshr v0.2s, v0.2s, #16
; NONEON-NOSVE-NEXT:    sshr v0.2s, v0.2s, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <2 x i16> %op1, shufflevector (<2 x i16> insertelement (<2 x i16> poison, i16 32, i32 0), <2 x i16> poison, <2 x i32> zeroinitializer)
  ret <2 x i16> %res
}

define <4 x i16> @sdiv_v4i16(<4 x i16> %op1) {
; CHECK-LABEL: sdiv_v4i16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.h, vl4
; CHECK-NEXT:    // kill: def $d0 killed $d0 def $z0
; CHECK-NEXT:    asrd z0.h, p0/m, z0.h, #5
; CHECK-NEXT:    // kill: def $d0 killed $d0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v4i16:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt v1.4h, v0.4h, #0
; NONEON-NOSVE-NEXT:    usra v0.4h, v1.4h, #11
; NONEON-NOSVE-NEXT:    sshr v0.4h, v0.4h, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <4 x i16> %op1, shufflevector (<4 x i16> insertelement (<4 x i16> poison, i16 32, i32 0), <4 x i16> poison, <4 x i32> zeroinitializer)
  ret <4 x i16> %res
}

define <8 x i16> @sdiv_v8i16(<8 x i16> %op1) {
; CHECK-LABEL: sdiv_v8i16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.h, vl8
; CHECK-NEXT:    // kill: def $q0 killed $q0 def $z0
; CHECK-NEXT:    asrd z0.h, p0/m, z0.h, #5
; CHECK-NEXT:    // kill: def $q0 killed $q0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v8i16:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt v1.8h, v0.8h, #0
; NONEON-NOSVE-NEXT:    usra v0.8h, v1.8h, #11
; NONEON-NOSVE-NEXT:    sshr v0.8h, v0.8h, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <8 x i16> %op1, shufflevector (<8 x i16> insertelement (<8 x i16> poison, i16 32, i32 0), <8 x i16> poison, <8 x i32> zeroinitializer)
  ret <8 x i16> %res
}

define void @sdiv_v16i16(ptr %a) {
; CHECK-LABEL: sdiv_v16i16:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ldp q0, q1, [x0]
; CHECK-NEXT:    ptrue p0.h, vl8
; CHECK-NEXT:    asrd z0.h, p0/m, z0.h, #5
; CHECK-NEXT:    asrd z1.h, p0/m, z1.h, #5
; CHECK-NEXT:    stp q0, q1, [x0]
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v16i16:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    ldp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    cmlt v2.8h, v0.8h, #0
; NONEON-NOSVE-NEXT:    cmlt v3.8h, v1.8h, #0
; NONEON-NOSVE-NEXT:    usra v0.8h, v2.8h, #11
; NONEON-NOSVE-NEXT:    usra v1.8h, v3.8h, #11
; NONEON-NOSVE-NEXT:    sshr v0.8h, v0.8h, #5
; NONEON-NOSVE-NEXT:    sshr v1.8h, v1.8h, #5
; NONEON-NOSVE-NEXT:    stp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    ret
  %op1 = load <16 x i16>, ptr %a
  %res = sdiv <16 x i16> %op1, shufflevector (<16 x i16> insertelement (<16 x i16> poison, i16 32, i32 0), <16 x i16> poison, <16 x i32> zeroinitializer)
  store <16 x i16> %res, ptr %a
  ret void
}

define <2 x i32> @sdiv_v2i32(<2 x i32> %op1) {
; CHECK-LABEL: sdiv_v2i32:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s, vl2
; CHECK-NEXT:    // kill: def $d0 killed $d0 def $z0
; CHECK-NEXT:    asrd z0.s, p0/m, z0.s, #5
; CHECK-NEXT:    // kill: def $d0 killed $d0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v2i32:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt v1.2s, v0.2s, #0
; NONEON-NOSVE-NEXT:    usra v0.2s, v1.2s, #27
; NONEON-NOSVE-NEXT:    sshr v0.2s, v0.2s, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <2 x i32> %op1, shufflevector (<2 x i32> insertelement (<2 x i32> poison, i32 32, i32 0), <2 x i32> poison, <2 x i32> zeroinitializer)
  ret <2 x i32> %res
}

define <4 x i32> @sdiv_v4i32(<4 x i32> %op1) {
; CHECK-LABEL: sdiv_v4i32:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.s, vl4
; CHECK-NEXT:    // kill: def $q0 killed $q0 def $z0
; CHECK-NEXT:    asrd z0.s, p0/m, z0.s, #5
; CHECK-NEXT:    // kill: def $q0 killed $q0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v4i32:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt v1.4s, v0.4s, #0
; NONEON-NOSVE-NEXT:    usra v0.4s, v1.4s, #27
; NONEON-NOSVE-NEXT:    sshr v0.4s, v0.4s, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <4 x i32> %op1, shufflevector (<4 x i32> insertelement (<4 x i32> poison, i32 32, i32 0), <4 x i32> poison, <4 x i32> zeroinitializer)
  ret <4 x i32> %res
}

define void @sdiv_v8i32(ptr %a) {
; CHECK-LABEL: sdiv_v8i32:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ldp q0, q1, [x0]
; CHECK-NEXT:    ptrue p0.s, vl4
; CHECK-NEXT:    asrd z0.s, p0/m, z0.s, #5
; CHECK-NEXT:    asrd z1.s, p0/m, z1.s, #5
; CHECK-NEXT:    stp q0, q1, [x0]
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v8i32:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    ldp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    cmlt v2.4s, v0.4s, #0
; NONEON-NOSVE-NEXT:    cmlt v3.4s, v1.4s, #0
; NONEON-NOSVE-NEXT:    usra v0.4s, v2.4s, #27
; NONEON-NOSVE-NEXT:    usra v1.4s, v3.4s, #27
; NONEON-NOSVE-NEXT:    sshr v0.4s, v0.4s, #5
; NONEON-NOSVE-NEXT:    sshr v1.4s, v1.4s, #5
; NONEON-NOSVE-NEXT:    stp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    ret
  %op1 = load <8 x i32>, ptr %a
  %res = sdiv <8 x i32> %op1, shufflevector (<8 x i32> insertelement (<8 x i32> poison, i32 32, i32 0), <8 x i32> poison, <8 x i32> zeroinitializer)
  store <8 x i32> %res, ptr %a
  ret void
}

define <1 x i64> @sdiv_v1i64(<1 x i64> %op1) {
; CHECK-LABEL: sdiv_v1i64:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d, vl1
; CHECK-NEXT:    // kill: def $d0 killed $d0 def $z0
; CHECK-NEXT:    asrd z0.d, p0/m, z0.d, #5
; CHECK-NEXT:    // kill: def $d0 killed $d0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v1i64:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt d1, d0, #0
; NONEON-NOSVE-NEXT:    usra d0, d1, #59
; NONEON-NOSVE-NEXT:    sshr d0, d0, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <1 x i64> %op1, shufflevector (<1 x i64> insertelement (<1 x i64> poison, i64 32, i32 0), <1 x i64> poison, <1 x i32> zeroinitializer)
  ret <1 x i64> %res
}

; Vector i64 sdiv are not legal for NEON so use SVE when available.
define <2 x i64> @sdiv_v2i64(<2 x i64> %op1) {
; CHECK-LABEL: sdiv_v2i64:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ptrue p0.d, vl2
; CHECK-NEXT:    // kill: def $q0 killed $q0 def $z0
; CHECK-NEXT:    asrd z0.d, p0/m, z0.d, #5
; CHECK-NEXT:    // kill: def $q0 killed $q0 killed $z0
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v2i64:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    cmlt v1.2d, v0.2d, #0
; NONEON-NOSVE-NEXT:    usra v0.2d, v1.2d, #59
; NONEON-NOSVE-NEXT:    sshr v0.2d, v0.2d, #5
; NONEON-NOSVE-NEXT:    ret
  %res = sdiv <2 x i64> %op1, shufflevector (<2 x i64> insertelement (<2 x i64> poison, i64 32, i32 0), <2 x i64> poison, <2 x i32> zeroinitializer)
  ret <2 x i64> %res
}

define void @sdiv_v4i64(ptr %a) {
; CHECK-LABEL: sdiv_v4i64:
; CHECK:       // %bb.0:
; CHECK-NEXT:    ldp q0, q1, [x0]
; CHECK-NEXT:    ptrue p0.d, vl2
; CHECK-NEXT:    asrd z0.d, p0/m, z0.d, #5
; CHECK-NEXT:    asrd z1.d, p0/m, z1.d, #5
; CHECK-NEXT:    stp q0, q1, [x0]
; CHECK-NEXT:    ret
;
; NONEON-NOSVE-LABEL: sdiv_v4i64:
; NONEON-NOSVE:       // %bb.0:
; NONEON-NOSVE-NEXT:    ldp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    cmlt v2.2d, v0.2d, #0
; NONEON-NOSVE-NEXT:    cmlt v3.2d, v1.2d, #0
; NONEON-NOSVE-NEXT:    usra v0.2d, v2.2d, #59
; NONEON-NOSVE-NEXT:    usra v1.2d, v3.2d, #59
; NONEON-NOSVE-NEXT:    sshr v0.2d, v0.2d, #5
; NONEON-NOSVE-NEXT:    sshr v1.2d, v1.2d, #5
; NONEON-NOSVE-NEXT:    stp q0, q1, [x0]
; NONEON-NOSVE-NEXT:    ret
  %op1 = load <4 x i64>, ptr %a
  %res = sdiv <4 x i64> %op1, shufflevector (<4 x i64> insertelement (<4 x i64> poison, i64 32, i32 0), <4 x i64> poison, <4 x i32> zeroinitializer)
  store <4 x i64> %res, ptr %a
  ret void
}