// NOTE: Assertions have been autogenerated by tool/update_llpc_test_checks.py
// RUN: amdllpc -emit-lgc -o - %s | FileCheck -check-prefix=CHECK %s
#version 450

layout(binding = 0) uniform Uniforms
{
    double d1_1, d1_2, d1_3;
    dvec3 d3_1, d3_2, d3_3;
};

layout(location = 0) out vec4 fragColor;

void main()
{
    double d1_0 = fma(d1_1, d1_2, d1_3);

    dvec3 d3_0 = fma(d3_1, d3_2, d3_3);

    fragColor = (d3_0.x != d1_0) ? vec4(0.0) : vec4(1.0);
}
// CHECK-LABEL: @lgc.shader.FS.main(
// CHECK-NEXT:  .entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call ptr addrspace(7) @lgc.load.buffer.desc(i64 0, i32 0, i32 0, i32 0)
// CHECK-NEXT:    [[TMP1:%.*]] = call ptr @llvm.invariant.start.p7(i64 -1, ptr addrspace(7) [[TMP0]])
// CHECK-NEXT:    [[TMP2:%.*]] = load double, ptr addrspace(7) [[TMP0]], align 8
// CHECK-NEXT:    [[TMP3:%.*]] = getelementptr {{inbounds i8|<{ double, double, double, [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double] }>|i8}}, ptr addrspace(7) [[TMP0]], i32 {{8|0, i32 1}}
// CHECK-NEXT:    [[TMP4:%.*]] = load double, ptr addrspace(7) [[TMP3]], align 8
// CHECK-NEXT:    [[TMP5:%.*]] = getelementptr {{inbounds i8|<{ double, double, double, [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double] }>|i8}}, ptr addrspace(7) [[TMP0]], i32 {{16|0, i32 2}}
// CHECK-NEXT:    [[TMP6:%.*]] = load double, ptr addrspace(7) [[TMP5]], align 8
// CHECK-NEXT:    [[TMP7:%.*]] = call reassoc nnan nsz arcp contract double (...) @lgc.create.fma.f64(double [[TMP2]], double [[TMP4]], double [[TMP6]])
// CHECK-NEXT:    [[TMP8:%.*]] = getelementptr {{inbounds i8|<{ double, double, double, [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double] }>|i8}}, ptr addrspace(7) [[TMP0]], i32 {{32|0, i32 4}}
// CHECK-NEXT:    [[TMP9:%.*]] = load <3 x double>, ptr addrspace(7) [[TMP8]], align 32
// CHECK-NEXT:    [[TMP10:%.*]] = getelementptr {{inbounds i8|<{ double, double, double, [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double] }>|i8}}, ptr addrspace(7) [[TMP0]], i32 {{64|0, i32 6}}
// CHECK-NEXT:    [[TMP11:%.*]] = load <3 x double>, ptr addrspace(7) [[TMP10]], align 32
// CHECK-NEXT:    [[TMP12:%.*]] = getelementptr {{inbounds i8|<{ double, double, double, [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double], [[]8 x i8], [[]3 x double] }>|i8}}, ptr addrspace(7) [[TMP0]], i32 {{96|0, i32 8}}
// CHECK-NEXT:    [[TMP13:%.*]] = load <3 x double>, ptr addrspace(7) [[TMP12]], align 32
// CHECK-NEXT:    [[TMP14:%.*]] = call reassoc nnan nsz arcp contract <3 x double> (...) @lgc.create.fma.v3f64(<3 x double> [[TMP9]], <3 x double> [[TMP11]], <3 x double> [[TMP13]])
// CHECK-NEXT:    [[D3_0_0_VEC_EXTRACT:%.*]] = extractelement <3 x double> [[TMP14]], i64 0
// CHECK-NEXT:    [[TMP15:%.*]] = fcmp une double [[D3_0_0_VEC_EXTRACT]], [[TMP7]]
// CHECK-NEXT:    [[TMP16:%.*]] = select reassoc nnan nsz arcp contract afn i1 [[TMP15]], <4 x float> zeroinitializer, <4 x float> <float 1.000000e+00, float 1.000000e+00, float 1.000000e+00, float 1.000000e+00>
// CHECK-NEXT:    call void (...) @lgc.create.write.generic.output(<4 x float> [[TMP16]], i32 0, i32 0, i32 0, i32 0, i32 0, i32 poison)
// CHECK-NEXT:    ret void
//