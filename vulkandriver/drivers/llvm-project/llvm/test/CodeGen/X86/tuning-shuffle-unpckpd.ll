; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mcpu=skylake  | FileCheck %s --check-prefixes=CHECK,CHECK-AVX2,CHECK-SKL
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mcpu=x86-64-v3  | FileCheck %s --check-prefixes=CHECK,CHECK-AVX2,CHECK-V3
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mcpu=icelake-server  | FileCheck %s --check-prefixes=CHECK,CHECK-ICX,CHECK-ICX-NO-BYPASS-DELAY
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mcpu=icelake-server -mattr=-no-bypass-delay-shuffle | FileCheck %s --check-prefixes=CHECK,CHECK-ICX,CHECK-ICX-BYPASS-DELAY
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mcpu=sandybridge -mattr=+no-bypass-delay-shuffle | FileCheck %s --check-prefixes=CHECK,CHECK-SNB,CHECK-SNB-NO-BYPASS-DELAY
; RUN: llc < %s -mtriple=x86_64-unknown-unknown -mcpu=sandybridge -mattr=-no-bypass-delay-shuffle | FileCheck %s --check-prefixes=CHECK,CHECK-SNB,CHECK-SNB-BYPASS-DELAY

define <8 x float> @transform_VUNPCKLPDYrr(<8 x float> %a, <8 x float> %b) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKLPDYrr:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vunpcklpd {{.*#+}} ymm0 = ymm0[0],ymm1[0],ymm0[2],ymm1[2]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKLPDYrr:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpcklqdq {{.*#+}} ymm0 = ymm0[0],ymm1[0],ymm0[2],ymm1[2]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKLPDYrr:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vshufpd {{.*#+}} ymm0 = ymm0[0],ymm1[0],ymm0[2],ymm1[2]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-LABEL: transform_VUNPCKLPDYrr:
; CHECK-SNB:       # %bb.0:
; CHECK-SNB-NEXT:    vunpcklpd {{.*#+}} ymm0 = ymm0[0],ymm1[0],ymm0[2],ymm1[2]
; CHECK-SNB-NEXT:    retq
  %shufp = shufflevector <8 x float> %a, <8 x float> %b, <8 x i32> <i32 0, i32 1, i32 8, i32 9, i32 4, i32 5, i32 12, i32 13>
  ret <8 x float> %shufp
}

define <8 x float> @transform_VUNPCKHPDYrr(<8 x float> %a, <8 x float> %b) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKHPDYrr:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vunpckhpd {{.*#+}} ymm0 = ymm0[1],ymm1[1],ymm0[3],ymm1[3]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKHPDYrr:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpckhqdq {{.*#+}} ymm0 = ymm0[1],ymm1[1],ymm0[3],ymm1[3]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKHPDYrr:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vshufpd {{.*#+}} ymm0 = ymm0[1],ymm1[1],ymm0[3],ymm1[3]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-LABEL: transform_VUNPCKHPDYrr:
; CHECK-SNB:       # %bb.0:
; CHECK-SNB-NEXT:    vunpckhpd {{.*#+}} ymm0 = ymm0[1],ymm1[1],ymm0[3],ymm1[3]
; CHECK-SNB-NEXT:    retq
  %shufp = shufflevector <8 x float> %a, <8 x float> %b, <8 x i32> <i32 2, i32 3, i32 10, i32 11, i32 6, i32 7, i32 14, i32 15>
  ret <8 x float> %shufp
}

define <4 x float> @transform_VUNPCKLPDrr(<4 x float> %a, <4 x float> %b) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKLPDrr:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vmovlhps {{.*#+}} xmm0 = xmm0[0],xmm1[0]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrr:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpcklqdq {{.*#+}} xmm0 = xmm0[0],xmm1[0]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrr:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vshufpd {{.*#+}} xmm0 = xmm0[0],xmm1[0]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-NO-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrr:
; CHECK-SNB-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    vpunpcklqdq {{.*#+}} xmm0 = xmm0[0],xmm1[0]
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrr:
; CHECK-SNB-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-BYPASS-DELAY-NEXT:    vmovlhps {{.*#+}} xmm0 = xmm0[0],xmm1[0]
; CHECK-SNB-BYPASS-DELAY-NEXT:    retq
  %shufp = shufflevector <4 x float> %a, <4 x float> %b, <4 x i32> <i32 0, i32 1, i32 4, i32 5>
  ret <4 x float> %shufp
}

define <4 x float> @transform_VUNPCKHPDrr(<4 x float> %a, <4 x float> %b) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKHPDrr:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vunpckhpd {{.*#+}} xmm0 = xmm0[1],xmm1[1]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrr:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpckhqdq {{.*#+}} xmm0 = xmm0[1],xmm1[1]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrr:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vshufpd {{.*#+}} xmm0 = xmm0[1],xmm1[1]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-NO-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrr:
; CHECK-SNB-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    vpunpckhqdq {{.*#+}} xmm0 = xmm0[1],xmm1[1]
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrr:
; CHECK-SNB-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-BYPASS-DELAY-NEXT:    vunpckhpd {{.*#+}} xmm0 = xmm0[1],xmm1[1]
; CHECK-SNB-BYPASS-DELAY-NEXT:    retq
  %shufp = shufflevector <4 x float> %a, <4 x float> %b, <4 x i32> <i32 2, i32 3, i32 6, i32 7>
  ret <4 x float> %shufp
}

define <8 x float> @transform_VUNPCKLPDYrm(<8 x float> %a, ptr %pb) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKLPDYrm:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vunpcklpd {{.*#+}} ymm0 = ymm0[0],mem[0],ymm0[2],mem[2]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKLPDYrm:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpcklqdq {{.*#+}} ymm0 = ymm0[0],mem[0],ymm0[2],mem[2]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKLPDYrm:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vunpcklpd {{.*#+}} ymm0 = ymm0[0],mem[0],ymm0[2],mem[2]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-LABEL: transform_VUNPCKLPDYrm:
; CHECK-SNB:       # %bb.0:
; CHECK-SNB-NEXT:    vunpcklpd {{.*#+}} ymm0 = ymm0[0],mem[0],ymm0[2],mem[2]
; CHECK-SNB-NEXT:    retq
  %b = load <8 x float>, ptr %pb
  %shufp = shufflevector <8 x float> %a, <8 x float> %b, <8 x i32> <i32 0, i32 1, i32 8, i32 9, i32 4, i32 5, i32 12, i32 13>
  ret <8 x float> %shufp
}

define <8 x float> @transform_VUNPCKHPDYrm(<8 x float> %a, ptr %pb) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKHPDYrm:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vunpckhpd {{.*#+}} ymm0 = ymm0[1],mem[1],ymm0[3],mem[3]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKHPDYrm:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpckhqdq {{.*#+}} ymm0 = ymm0[1],mem[1],ymm0[3],mem[3]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKHPDYrm:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vunpckhpd {{.*#+}} ymm0 = ymm0[1],mem[1],ymm0[3],mem[3]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-LABEL: transform_VUNPCKHPDYrm:
; CHECK-SNB:       # %bb.0:
; CHECK-SNB-NEXT:    vunpckhpd {{.*#+}} ymm0 = ymm0[1],mem[1],ymm0[3],mem[3]
; CHECK-SNB-NEXT:    retq
  %b = load <8 x float>, ptr %pb
  %shufp = shufflevector <8 x float> %a, <8 x float> %b, <8 x i32> <i32 2, i32 3, i32 10, i32 11, i32 6, i32 7, i32 14, i32 15>
  ret <8 x float> %shufp
}

define <4 x float> @transform_VUNPCKLPDrm(<4 x float> %a, ptr %pb) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKLPDrm:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vunpcklpd {{.*#+}} xmm0 = xmm0[0],mem[0]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrm:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpcklqdq {{.*#+}} xmm0 = xmm0[0],mem[0]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrm:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vunpcklpd {{.*#+}} xmm0 = xmm0[0],mem[0]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-NO-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrm:
; CHECK-SNB-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    vpunpcklqdq {{.*#+}} xmm0 = xmm0[0],mem[0]
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-BYPASS-DELAY-LABEL: transform_VUNPCKLPDrm:
; CHECK-SNB-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-BYPASS-DELAY-NEXT:    vunpcklpd {{.*#+}} xmm0 = xmm0[0],mem[0]
; CHECK-SNB-BYPASS-DELAY-NEXT:    retq
  %b = load <4 x float>, ptr %pb
  %shufp = shufflevector <4 x float> %a, <4 x float> %b, <4 x i32> <i32 0, i32 1, i32 4, i32 5>
  ret <4 x float> %shufp
}

define <4 x float> @transform_VUNPCKHPDrm(<4 x float> %a, ptr %pb) nounwind {
; CHECK-AVX2-LABEL: transform_VUNPCKHPDrm:
; CHECK-AVX2:       # %bb.0:
; CHECK-AVX2-NEXT:    vunpckhpd {{.*#+}} xmm0 = xmm0[1],mem[1]
; CHECK-AVX2-NEXT:    retq
;
; CHECK-ICX-NO-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrm:
; CHECK-ICX-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    vpunpckhqdq {{.*#+}} xmm0 = xmm0[1],mem[1]
; CHECK-ICX-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-ICX-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrm:
; CHECK-ICX-BYPASS-DELAY:       # %bb.0:
; CHECK-ICX-BYPASS-DELAY-NEXT:    vunpckhpd {{.*#+}} xmm0 = xmm0[1],mem[1]
; CHECK-ICX-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-NO-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrm:
; CHECK-SNB-NO-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    vpunpckhqdq {{.*#+}} xmm0 = xmm0[1],mem[1]
; CHECK-SNB-NO-BYPASS-DELAY-NEXT:    retq
;
; CHECK-SNB-BYPASS-DELAY-LABEL: transform_VUNPCKHPDrm:
; CHECK-SNB-BYPASS-DELAY:       # %bb.0:
; CHECK-SNB-BYPASS-DELAY-NEXT:    vunpckhpd {{.*#+}} xmm0 = xmm0[1],mem[1]
; CHECK-SNB-BYPASS-DELAY-NEXT:    retq
  %b = load <4 x float>, ptr %pb
  %shufp = shufflevector <4 x float> %a, <4 x float> %b, <4 x i32> <i32 2, i32 3, i32 6, i32 7>
  ret <4 x float> %shufp
}
;; NOTE: These prefixes are unused and the list is autogenerated. Do not add tests below this line:
; CHECK: {{.*}}
; CHECK-ICX: {{.*}}
; CHECK-SKL: {{.*}}
; CHECK-V3: {{.*}}