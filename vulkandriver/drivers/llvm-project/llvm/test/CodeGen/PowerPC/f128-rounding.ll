; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -mcpu=pwr9 -mtriple=powerpc64le-unknown-unknown -verify-machineinstrs \
; RUN:   -ppc-vsr-nums-as-vr -ppc-asm-full-reg-names < %s | FileCheck %s
; RUN: llc -mcpu=pwr8 -mtriple=powerpc64le-unknown-unknown -verify-machineinstrs \
; RUN:   -ppc-vsr-nums-as-vr -ppc-asm-full-reg-names < %s | FileCheck %s \
; RUN:   -check-prefix=CHECK-P8

define void @qp_trunc(ptr nocapture readonly %a, ptr nocapture %res) {
; CHECK-LABEL: qp_trunc:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lxv v2, 0(r3)
; CHECK-NEXT:    xsrqpi 1, v2, v2, 1
; CHECK-NEXT:    stxv v2, 0(r4)
; CHECK-NEXT:    blr
;
; CHECK-P8-LABEL: qp_trunc:
; CHECK-P8:       # %bb.0: # %entry
; CHECK-P8-NEXT:    mflr r0
; CHECK-P8-NEXT:    .cfi_def_cfa_offset 48
; CHECK-P8-NEXT:    .cfi_offset lr, 16
; CHECK-P8-NEXT:    .cfi_offset r30, -16
; CHECK-P8-NEXT:    std r30, -16(r1) # 8-byte Folded Spill
; CHECK-P8-NEXT:    stdu r1, -48(r1)
; CHECK-P8-NEXT:    std r0, 64(r1)
; CHECK-P8-NEXT:    mr r30, r4
; CHECK-P8-NEXT:    lxvd2x vs0, 0, r3
; CHECK-P8-NEXT:    xxswapd v2, vs0
; CHECK-P8-NEXT:    bl truncf128
; CHECK-P8-NEXT:    nop
; CHECK-P8-NEXT:    xxswapd vs0, v2
; CHECK-P8-NEXT:    stxvd2x vs0, 0, r30
; CHECK-P8-NEXT:    addi r1, r1, 48
; CHECK-P8-NEXT:    ld r0, 16(r1)
; CHECK-P8-NEXT:    ld r30, -16(r1) # 8-byte Folded Reload
; CHECK-P8-NEXT:    mtlr r0
; CHECK-P8-NEXT:    blr
entry:
  %0 = load fp128, ptr %a, align 16
  %1 = tail call fp128 @llvm.trunc.f128(fp128 %0)
  store fp128 %1, ptr %res, align 16
  ret void
}
declare fp128     @llvm.trunc.f128(fp128 %Val)

define void @qp_rint(ptr nocapture readonly %a, ptr nocapture %res) {
; CHECK-LABEL: qp_rint:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lxv v2, 0(r3)
; CHECK-NEXT:    xsrqpix 0, v2, v2, 3
; CHECK-NEXT:    stxv v2, 0(r4)
; CHECK-NEXT:    blr
;
; CHECK-P8-LABEL: qp_rint:
; CHECK-P8:       # %bb.0: # %entry
; CHECK-P8-NEXT:    mflr r0
; CHECK-P8-NEXT:    .cfi_def_cfa_offset 48
; CHECK-P8-NEXT:    .cfi_offset lr, 16
; CHECK-P8-NEXT:    .cfi_offset r30, -16
; CHECK-P8-NEXT:    std r30, -16(r1) # 8-byte Folded Spill
; CHECK-P8-NEXT:    stdu r1, -48(r1)
; CHECK-P8-NEXT:    std r0, 64(r1)
; CHECK-P8-NEXT:    mr r30, r4
; CHECK-P8-NEXT:    lxvd2x vs0, 0, r3
; CHECK-P8-NEXT:    xxswapd v2, vs0
; CHECK-P8-NEXT:    bl rintf128
; CHECK-P8-NEXT:    nop
; CHECK-P8-NEXT:    xxswapd vs0, v2
; CHECK-P8-NEXT:    stxvd2x vs0, 0, r30
; CHECK-P8-NEXT:    addi r1, r1, 48
; CHECK-P8-NEXT:    ld r0, 16(r1)
; CHECK-P8-NEXT:    ld r30, -16(r1) # 8-byte Folded Reload
; CHECK-P8-NEXT:    mtlr r0
; CHECK-P8-NEXT:    blr
entry:
  %0 = load fp128, ptr %a, align 16
  %1 = tail call fp128 @llvm.rint.f128(fp128 %0)
  store fp128 %1, ptr %res, align 16
  ret void
}
declare fp128     @llvm.rint.f128(fp128 %Val)

define void @qp_nearbyint(ptr nocapture readonly %a, ptr nocapture %res) {
; CHECK-LABEL: qp_nearbyint:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lxv v2, 0(r3)
; CHECK-NEXT:    xsrqpi 0, v2, v2, 3
; CHECK-NEXT:    stxv v2, 0(r4)
; CHECK-NEXT:    blr
;
; CHECK-P8-LABEL: qp_nearbyint:
; CHECK-P8:       # %bb.0: # %entry
; CHECK-P8-NEXT:    mflr r0
; CHECK-P8-NEXT:    .cfi_def_cfa_offset 48
; CHECK-P8-NEXT:    .cfi_offset lr, 16
; CHECK-P8-NEXT:    .cfi_offset r30, -16
; CHECK-P8-NEXT:    std r30, -16(r1) # 8-byte Folded Spill
; CHECK-P8-NEXT:    stdu r1, -48(r1)
; CHECK-P8-NEXT:    std r0, 64(r1)
; CHECK-P8-NEXT:    mr r30, r4
; CHECK-P8-NEXT:    lxvd2x vs0, 0, r3
; CHECK-P8-NEXT:    xxswapd v2, vs0
; CHECK-P8-NEXT:    bl nearbyintf128
; CHECK-P8-NEXT:    nop
; CHECK-P8-NEXT:    xxswapd vs0, v2
; CHECK-P8-NEXT:    stxvd2x vs0, 0, r30
; CHECK-P8-NEXT:    addi r1, r1, 48
; CHECK-P8-NEXT:    ld r0, 16(r1)
; CHECK-P8-NEXT:    ld r30, -16(r1) # 8-byte Folded Reload
; CHECK-P8-NEXT:    mtlr r0
; CHECK-P8-NEXT:    blr
entry:
  %0 = load fp128, ptr %a, align 16
  %1 = tail call fp128 @llvm.nearbyint.f128(fp128 %0)
  store fp128 %1, ptr %res, align 16
  ret void
}
declare fp128     @llvm.nearbyint.f128(fp128 %Val)

define void @qp_round(ptr nocapture readonly %a, ptr nocapture %res) {
; CHECK-LABEL: qp_round:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lxv v2, 0(r3)
; CHECK-NEXT:    xsrqpi 0, v2, v2, 0
; CHECK-NEXT:    stxv v2, 0(r4)
; CHECK-NEXT:    blr
;
; CHECK-P8-LABEL: qp_round:
; CHECK-P8:       # %bb.0: # %entry
; CHECK-P8-NEXT:    mflr r0
; CHECK-P8-NEXT:    .cfi_def_cfa_offset 48
; CHECK-P8-NEXT:    .cfi_offset lr, 16
; CHECK-P8-NEXT:    .cfi_offset r30, -16
; CHECK-P8-NEXT:    std r30, -16(r1) # 8-byte Folded Spill
; CHECK-P8-NEXT:    stdu r1, -48(r1)
; CHECK-P8-NEXT:    std r0, 64(r1)
; CHECK-P8-NEXT:    mr r30, r4
; CHECK-P8-NEXT:    lxvd2x vs0, 0, r3
; CHECK-P8-NEXT:    xxswapd v2, vs0
; CHECK-P8-NEXT:    bl roundf128
; CHECK-P8-NEXT:    nop
; CHECK-P8-NEXT:    xxswapd vs0, v2
; CHECK-P8-NEXT:    stxvd2x vs0, 0, r30
; CHECK-P8-NEXT:    addi r1, r1, 48
; CHECK-P8-NEXT:    ld r0, 16(r1)
; CHECK-P8-NEXT:    ld r30, -16(r1) # 8-byte Folded Reload
; CHECK-P8-NEXT:    mtlr r0
; CHECK-P8-NEXT:    blr
entry:
  %0 = load fp128, ptr %a, align 16
  %1 = tail call fp128 @llvm.round.f128(fp128 %0)
  store fp128 %1, ptr %res, align 16
  ret void
}
declare fp128     @llvm.round.f128(fp128 %Val)

define void @qp_floor(ptr nocapture readonly %a, ptr nocapture %res) {
; CHECK-LABEL: qp_floor:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lxv v2, 0(r3)
; CHECK-NEXT:    xsrqpi 1, v2, v2, 3
; CHECK-NEXT:    stxv v2, 0(r4)
; CHECK-NEXT:    blr
;
; CHECK-P8-LABEL: qp_floor:
; CHECK-P8:       # %bb.0: # %entry
; CHECK-P8-NEXT:    mflr r0
; CHECK-P8-NEXT:    .cfi_def_cfa_offset 48
; CHECK-P8-NEXT:    .cfi_offset lr, 16
; CHECK-P8-NEXT:    .cfi_offset r30, -16
; CHECK-P8-NEXT:    std r30, -16(r1) # 8-byte Folded Spill
; CHECK-P8-NEXT:    stdu r1, -48(r1)
; CHECK-P8-NEXT:    std r0, 64(r1)
; CHECK-P8-NEXT:    mr r30, r4
; CHECK-P8-NEXT:    lxvd2x vs0, 0, r3
; CHECK-P8-NEXT:    xxswapd v2, vs0
; CHECK-P8-NEXT:    bl floorf128
; CHECK-P8-NEXT:    nop
; CHECK-P8-NEXT:    xxswapd vs0, v2
; CHECK-P8-NEXT:    stxvd2x vs0, 0, r30
; CHECK-P8-NEXT:    addi r1, r1, 48
; CHECK-P8-NEXT:    ld r0, 16(r1)
; CHECK-P8-NEXT:    ld r30, -16(r1) # 8-byte Folded Reload
; CHECK-P8-NEXT:    mtlr r0
; CHECK-P8-NEXT:    blr
entry:
  %0 = load fp128, ptr %a, align 16
  %1 = tail call fp128 @llvm.floor.f128(fp128 %0)
  store fp128 %1, ptr %res, align 16
  ret void
}
declare fp128     @llvm.floor.f128(fp128 %Val)

define void @qp_ceil(ptr nocapture readonly %a, ptr nocapture %res) {
; CHECK-LABEL: qp_ceil:
; CHECK:       # %bb.0: # %entry
; CHECK-NEXT:    lxv v2, 0(r3)
; CHECK-NEXT:    xsrqpi 1, v2, v2, 2
; CHECK-NEXT:    stxv v2, 0(r4)
; CHECK-NEXT:    blr
;
; CHECK-P8-LABEL: qp_ceil:
; CHECK-P8:       # %bb.0: # %entry
; CHECK-P8-NEXT:    mflr r0
; CHECK-P8-NEXT:    .cfi_def_cfa_offset 48
; CHECK-P8-NEXT:    .cfi_offset lr, 16
; CHECK-P8-NEXT:    .cfi_offset r30, -16
; CHECK-P8-NEXT:    std r30, -16(r1) # 8-byte Folded Spill
; CHECK-P8-NEXT:    stdu r1, -48(r1)
; CHECK-P8-NEXT:    std r0, 64(r1)
; CHECK-P8-NEXT:    mr r30, r4
; CHECK-P8-NEXT:    lxvd2x vs0, 0, r3
; CHECK-P8-NEXT:    xxswapd v2, vs0
; CHECK-P8-NEXT:    bl ceilf128
; CHECK-P8-NEXT:    nop
; CHECK-P8-NEXT:    xxswapd vs0, v2
; CHECK-P8-NEXT:    stxvd2x vs0, 0, r30
; CHECK-P8-NEXT:    addi r1, r1, 48
; CHECK-P8-NEXT:    ld r0, 16(r1)
; CHECK-P8-NEXT:    ld r30, -16(r1) # 8-byte Folded Reload
; CHECK-P8-NEXT:    mtlr r0
; CHECK-P8-NEXT:    blr
entry:
  %0 = load fp128, ptr %a, align 16
  %1 = tail call fp128 @llvm.ceil.f128(fp128 %0)
  store fp128 %1, ptr %res, align 16
  ret void
}
declare fp128     @llvm.ceil.f128(fp128 %Val)
