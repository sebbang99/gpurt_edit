// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 4
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v \
// RUN:   -target-feature +experimental-zvfbfmin \
// RUN:   -target-feature +experimental-zvfbfwma -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @test_vlsseg2e16_v_bf16mf4x2_tu(
// CHECK-RV64-SAME: { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @llvm.riscv.vlsseg2.nxv1bf16.i64(<vscale x 1 x bfloat> [[TMP0]], <vscale x 1 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[TMP2]]
//
vbfloat16mf4x2_t test_vlsseg2e16_v_bf16mf4x2_tu(vbfloat16mf4x2_t vd,
                                                const __bf16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tu(vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @test_vlsseg2e16_v_bf16mf2x2_tu(
// CHECK-RV64-SAME: { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @llvm.riscv.vlsseg2.nxv2bf16.i64(<vscale x 2 x bfloat> [[TMP0]], <vscale x 2 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[TMP2]]
//
vbfloat16mf2x2_t test_vlsseg2e16_v_bf16mf2x2_tu(vbfloat16mf2x2_t vd,
                                                const __bf16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tu(vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @test_vlsseg2e16_v_bf16m1x2_tu(
// CHECK-RV64-SAME: { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @llvm.riscv.vlsseg2.nxv4bf16.i64(<vscale x 4 x bfloat> [[TMP0]], <vscale x 4 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[TMP2]]
//
vbfloat16m1x2_t test_vlsseg2e16_v_bf16m1x2_tu(vbfloat16m1x2_t vd,
                                              const __bf16 *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_tu(vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @test_vlsseg2e16_v_bf16m2x2_tu(
// CHECK-RV64-SAME: { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @llvm.riscv.vlsseg2.nxv8bf16.i64(<vscale x 8 x bfloat> [[TMP0]], <vscale x 8 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[TMP2]]
//
vbfloat16m2x2_t test_vlsseg2e16_v_bf16m2x2_tu(vbfloat16m2x2_t vd,
                                              const __bf16 *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_tu(vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @test_vlsseg2e16_v_bf16m4x2_tu(
// CHECK-RV64-SAME: { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @llvm.riscv.vlsseg2.nxv16bf16.i64(<vscale x 16 x bfloat> [[TMP0]], <vscale x 16 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[TMP2]]
//
vbfloat16m4x2_t test_vlsseg2e16_v_bf16m4x2_tu(vbfloat16m4x2_t vd,
                                              const __bf16 *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_tu(vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @test_vlsseg2e16_v_bf16mf4x2_tum(
// CHECK-RV64-SAME: <vscale x 1 x i1> [[VM:%.*]], { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv1bf16.i64(<vscale x 1 x bfloat> [[TMP0]], <vscale x 1 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 1 x i1> [[VM]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[TMP2]]
//
vbfloat16mf4x2_t test_vlsseg2e16_v_bf16mf4x2_tum(vbool64_t vm,
                                                 vbfloat16mf4x2_t vd,
                                                 const __bf16 *rs1,
                                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tum(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @test_vlsseg2e16_v_bf16mf2x2_tum(
// CHECK-RV64-SAME: <vscale x 2 x i1> [[VM:%.*]], { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv2bf16.i64(<vscale x 2 x bfloat> [[TMP0]], <vscale x 2 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 2 x i1> [[VM]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[TMP2]]
//
vbfloat16mf2x2_t test_vlsseg2e16_v_bf16mf2x2_tum(vbool32_t vm,
                                                 vbfloat16mf2x2_t vd,
                                                 const __bf16 *rs1,
                                                 ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tum(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @test_vlsseg2e16_v_bf16m1x2_tum(
// CHECK-RV64-SAME: <vscale x 4 x i1> [[VM:%.*]], { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv4bf16.i64(<vscale x 4 x bfloat> [[TMP0]], <vscale x 4 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 4 x i1> [[VM]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[TMP2]]
//
vbfloat16m1x2_t test_vlsseg2e16_v_bf16m1x2_tum(vbool16_t vm, vbfloat16m1x2_t vd,
                                               const __bf16 *rs1, ptrdiff_t rs2,
                                               size_t vl) {
  return __riscv_vlsseg2e16_tum(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @test_vlsseg2e16_v_bf16m2x2_tum(
// CHECK-RV64-SAME: <vscale x 8 x i1> [[VM:%.*]], { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv8bf16.i64(<vscale x 8 x bfloat> [[TMP0]], <vscale x 8 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 8 x i1> [[VM]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[TMP2]]
//
vbfloat16m2x2_t test_vlsseg2e16_v_bf16m2x2_tum(vbool8_t vm, vbfloat16m2x2_t vd,
                                               const __bf16 *rs1, ptrdiff_t rs2,
                                               size_t vl) {
  return __riscv_vlsseg2e16_tum(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @test_vlsseg2e16_v_bf16m4x2_tum(
// CHECK-RV64-SAME: <vscale x 16 x i1> [[VM:%.*]], { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv16bf16.i64(<vscale x 16 x bfloat> [[TMP0]], <vscale x 16 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 16 x i1> [[VM]], i64 [[VL]], i64 2)
// CHECK-RV64-NEXT:    ret { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[TMP2]]
//
vbfloat16m4x2_t test_vlsseg2e16_v_bf16m4x2_tum(vbool4_t vm, vbfloat16m4x2_t vd,
                                               const __bf16 *rs1, ptrdiff_t rs2,
                                               size_t vl) {
  return __riscv_vlsseg2e16_tum(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @test_vlsseg2e16_v_bf16mf4x2_tumu(
// CHECK-RV64-SAME: <vscale x 1 x i1> [[VM:%.*]], { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv1bf16.i64(<vscale x 1 x bfloat> [[TMP0]], <vscale x 1 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 1 x i1> [[VM]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[TMP2]]
//
vbfloat16mf4x2_t test_vlsseg2e16_v_bf16mf4x2_tumu(vbool64_t vm,
                                                  vbfloat16mf4x2_t vd,
                                                  const __bf16 *rs1,
                                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tumu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @test_vlsseg2e16_v_bf16mf2x2_tumu(
// CHECK-RV64-SAME: <vscale x 2 x i1> [[VM:%.*]], { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv2bf16.i64(<vscale x 2 x bfloat> [[TMP0]], <vscale x 2 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 2 x i1> [[VM]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[TMP2]]
//
vbfloat16mf2x2_t test_vlsseg2e16_v_bf16mf2x2_tumu(vbool32_t vm,
                                                  vbfloat16mf2x2_t vd,
                                                  const __bf16 *rs1,
                                                  ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tumu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @test_vlsseg2e16_v_bf16m1x2_tumu(
// CHECK-RV64-SAME: <vscale x 4 x i1> [[VM:%.*]], { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv4bf16.i64(<vscale x 4 x bfloat> [[TMP0]], <vscale x 4 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 4 x i1> [[VM]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[TMP2]]
//
vbfloat16m1x2_t test_vlsseg2e16_v_bf16m1x2_tumu(vbool16_t vm,
                                                vbfloat16m1x2_t vd,
                                                const __bf16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tumu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @test_vlsseg2e16_v_bf16m2x2_tumu(
// CHECK-RV64-SAME: <vscale x 8 x i1> [[VM:%.*]], { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv8bf16.i64(<vscale x 8 x bfloat> [[TMP0]], <vscale x 8 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 8 x i1> [[VM]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[TMP2]]
//
vbfloat16m2x2_t test_vlsseg2e16_v_bf16m2x2_tumu(vbool8_t vm, vbfloat16m2x2_t vd,
                                                const __bf16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tumu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @test_vlsseg2e16_v_bf16m4x2_tumu(
// CHECK-RV64-SAME: <vscale x 16 x i1> [[VM:%.*]], { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv16bf16.i64(<vscale x 16 x bfloat> [[TMP0]], <vscale x 16 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 16 x i1> [[VM]], i64 [[VL]], i64 0)
// CHECK-RV64-NEXT:    ret { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[TMP2]]
//
vbfloat16m4x2_t test_vlsseg2e16_v_bf16m4x2_tumu(vbool4_t vm, vbfloat16m4x2_t vd,
                                                const __bf16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_tumu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @test_vlsseg2e16_v_bf16mf4x2_mu(
// CHECK-RV64-SAME: <vscale x 1 x i1> [[VM:%.*]], { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv1bf16.i64(<vscale x 1 x bfloat> [[TMP0]], <vscale x 1 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 1 x i1> [[VM]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x bfloat>, <vscale x 1 x bfloat> } [[TMP2]]
//
vbfloat16mf4x2_t test_vlsseg2e16_v_bf16mf4x2_mu(vbool64_t vm,
                                                vbfloat16mf4x2_t vd,
                                                const __bf16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_mu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @test_vlsseg2e16_v_bf16mf2x2_mu(
// CHECK-RV64-SAME: <vscale x 2 x i1> [[VM:%.*]], { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv2bf16.i64(<vscale x 2 x bfloat> [[TMP0]], <vscale x 2 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 2 x i1> [[VM]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x bfloat>, <vscale x 2 x bfloat> } [[TMP2]]
//
vbfloat16mf2x2_t test_vlsseg2e16_v_bf16mf2x2_mu(vbool32_t vm,
                                                vbfloat16mf2x2_t vd,
                                                const __bf16 *rs1,
                                                ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg2e16_mu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @test_vlsseg2e16_v_bf16m1x2_mu(
// CHECK-RV64-SAME: <vscale x 4 x i1> [[VM:%.*]], { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv4bf16.i64(<vscale x 4 x bfloat> [[TMP0]], <vscale x 4 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 4 x i1> [[VM]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x bfloat>, <vscale x 4 x bfloat> } [[TMP2]]
//
vbfloat16m1x2_t test_vlsseg2e16_v_bf16m1x2_mu(vbool16_t vm, vbfloat16m1x2_t vd,
                                              const __bf16 *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_mu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @test_vlsseg2e16_v_bf16m2x2_mu(
// CHECK-RV64-SAME: <vscale x 8 x i1> [[VM:%.*]], { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv8bf16.i64(<vscale x 8 x bfloat> [[TMP0]], <vscale x 8 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 8 x i1> [[VM]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x bfloat>, <vscale x 8 x bfloat> } [[TMP2]]
//
vbfloat16m2x2_t test_vlsseg2e16_v_bf16m2x2_mu(vbool8_t vm, vbfloat16m2x2_t vd,
                                              const __bf16 *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_mu(vm, vd, rs1, rs2, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @test_vlsseg2e16_v_bf16m4x2_mu(
// CHECK-RV64-SAME: <vscale x 16 x i1> [[VM:%.*]], { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD:%.*]], ptr noundef [[RS1:%.*]], i64 noundef [[RS2:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = extractvalue { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[VD]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = call { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } @llvm.riscv.vlsseg2.mask.nxv16bf16.i64(<vscale x 16 x bfloat> [[TMP0]], <vscale x 16 x bfloat> [[TMP1]], ptr [[RS1]], i64 [[RS2]], <vscale x 16 x i1> [[VM]], i64 [[VL]], i64 1)
// CHECK-RV64-NEXT:    ret { <vscale x 16 x bfloat>, <vscale x 16 x bfloat> } [[TMP2]]
//
vbfloat16m4x2_t test_vlsseg2e16_v_bf16m4x2_mu(vbool4_t vm, vbfloat16m4x2_t vd,
                                              const __bf16 *rs1, ptrdiff_t rs2,
                                              size_t vl) {
  return __riscv_vlsseg2e16_mu(vm, vd, rs1, rs2, vl);
}