// NOTE: Assertions have been autogenerated by tool/update_llpc_test_checks.py
// RUN: amdllpc -emit-lgc -gfxip 10.3 -o - %s | FileCheck -check-prefix=SHADERTEST %s
// REQUIRES: do-not-run-me

#version 450

#extension GL_ARB_gpu_shader_int64 : enable

layout(std140, binding = 0) uniform Uniforms
{
    int64_t  i64_0;
    int64_t  i64_1;

    u64vec3  u64v3_0;
    u64vec3  u64v3_1;
};

layout(location = 0) out float fragColor;

void main()
{
    bvec3 b3 = bvec3(true);

    b3 = b3.x ? equal(u64v3_0, u64v3_1) : notEqual(u64v3_0, u64v3_1);
    b3 = b3.x ? greaterThanEqual(u64v3_0, u64v3_1) : lessThanEqual(u64v3_0, u64v3_1);
    b3 = b3.x ? greaterThan(u64v3_0, u64v3_1) : lessThan(u64v3_0, u64v3_1);

    bool b1 = false;
    b1 = b1 ? (i64_0 == i64_1) : (i64_0 != i64_1);
    b1 = b1 ? (i64_0 >= i64_1) : (i64_0 <= i64_1);
    b1 = b1 ? (i64_0 > i64_1) : (i64_0 < i64_1);

    fragColor = b3.x && b1 ? 1.0 : 0.0;
}

// SHADERTEST-LABEL: @lgc.shader.FS.main(
// SHADERTEST-NEXT:  .entry:
// SHADERTEST-NEXT:    [[TMP0:%.*]] = call ptr addrspace(7) @lgc.load.buffer.desc(i64 0, i32 0, i32 0, i32 0)
// SHADERTEST-NEXT:    [[TMP1:%.*]] = call ptr @llvm.invariant.start.p7(i64 -1, ptr addrspace(7) [[TMP0]])
// SHADERTEST-NEXT:    [[TMP2:%.*]] = getelementptr inbounds i8, ptr addrspace(7) [[TMP0]], i32 32
// SHADERTEST-NEXT:    [[TMP3:%.*]] = load <3 x i64>, ptr addrspace(7) [[TMP2]], align 32
// SHADERTEST-NEXT:    [[TMP4:%.*]] = getelementptr inbounds i8, ptr addrspace(7) [[TMP0]], i32 64
// SHADERTEST-NEXT:    [[TMP5:%.*]] = load <3 x i64>, ptr addrspace(7) [[TMP4]], align 32
// SHADERTEST-NEXT:    [[TMP6:%.*]] = extractelement <3 x i64> [[TMP3]], i64 0
// SHADERTEST-NEXT:    [[TMP7:%.*]] = extractelement <3 x i64> [[TMP5]], i64 0
// SHADERTEST-NEXT:    [[TMP8:%.*]] = icmp eq i64 [[TMP6]], [[TMP7]]
// SHADERTEST-NEXT:    [[TMP9:%.*]] = insertelement <3 x i1> poison, i1 [[TMP8]], i64 0
// SHADERTEST-NEXT:    [[TMP10:%.*]] = extractelement <3 x i64> [[TMP3]], i64 1
// SHADERTEST-NEXT:    [[TMP11:%.*]] = extractelement <3 x i64> [[TMP5]], i64 1
// SHADERTEST-NEXT:    [[TMP12:%.*]] = icmp eq i64 [[TMP10]], [[TMP11]]
// SHADERTEST-NEXT:    [[TMP13:%.*]] = insertelement <3 x i1> [[TMP9]], i1 [[TMP12]], i64 1
// SHADERTEST-NEXT:    [[TMP14:%.*]] = extractelement <3 x i64> [[TMP3]], i64 2
// SHADERTEST-NEXT:    [[TMP15:%.*]] = extractelement <3 x i64> [[TMP5]], i64 2
// SHADERTEST-NEXT:    [[TMP16:%.*]] = icmp eq i64 [[TMP14]], [[TMP15]]
// SHADERTEST-NEXT:    [[TMP17:%.*]] = insertelement <3 x i1> [[TMP13]], i1 [[TMP16]], i64 2
// SHADERTEST-NEXT:    [[TMP18:%.*]] = zext <3 x i1> [[TMP17]] to <3 x i32>
// SHADERTEST-NEXT:    [[TMP19:%.*]] = bitcast <3 x i32> [[TMP18]] to <96 x i1>
// SHADERTEST-NEXT:    [[DOT020_FR:%.*]] = freeze <96 x i1> [[TMP19]]
// SHADERTEST-NEXT:    [[TMP20:%.*]] = extractelement <96 x i1> [[DOT020_FR]], i64 0
// SHADERTEST-NEXT:    br i1 [[TMP20]], label [[TMP21:%.*]], label [[TMP28:%.*]]
// SHADERTEST:       21:
// SHADERTEST-NEXT:    [[TMP22:%.*]] = icmp uge i64 [[TMP6]], [[TMP7]]
// SHADERTEST-NEXT:    [[TMP23:%.*]] = insertelement <3 x i1> poison, i1 [[TMP22]], i64 0
// SHADERTEST-NEXT:    [[TMP24:%.*]] = icmp uge i64 [[TMP10]], [[TMP11]]
// SHADERTEST-NEXT:    [[TMP25:%.*]] = insertelement <3 x i1> [[TMP23]], i1 [[TMP24]], i64 1
// SHADERTEST-NEXT:    [[TMP26:%.*]] = icmp uge i64 [[TMP14]], [[TMP15]]
// SHADERTEST-NEXT:    [[TMP27:%.*]] = insertelement <3 x i1> [[TMP25]], i1 [[TMP26]], i64 2
// SHADERTEST-NEXT:    br label [[TMP35:%.*]]
// SHADERTEST:       28:
// SHADERTEST-NEXT:    [[TMP29:%.*]] = icmp ule i64 [[TMP6]], [[TMP7]]
// SHADERTEST-NEXT:    [[TMP30:%.*]] = insertelement <3 x i1> poison, i1 [[TMP29]], i64 0
// SHADERTEST-NEXT:    [[TMP31:%.*]] = icmp ule i64 [[TMP10]], [[TMP11]]
// SHADERTEST-NEXT:    [[TMP32:%.*]] = insertelement <3 x i1> [[TMP30]], i1 [[TMP31]], i64 1
// SHADERTEST-NEXT:    [[TMP33:%.*]] = icmp ule i64 [[TMP14]], [[TMP15]]
// SHADERTEST-NEXT:    [[TMP34:%.*]] = insertelement <3 x i1> [[TMP32]], i1 [[TMP33]], i64 2
// SHADERTEST-NEXT:    br label [[TMP35]]
// SHADERTEST:       35:
// SHADERTEST-NEXT:    [[DOT021_IN:%.*]] = phi <3 x i1> [ [[TMP27]], [[TMP21]] ], [ [[TMP34]], [[TMP28]] ]
// SHADERTEST-NEXT:    [[DOT021_IN_FR:%.*]] = freeze <3 x i1> [[DOT021_IN]]
// SHADERTEST-NEXT:    [[TMP36:%.*]] = extractelement <3 x i1> [[DOT021_IN_FR]], i64 0
// SHADERTEST-NEXT:    br i1 [[TMP36]], label [[TMP37:%.*]], label [[TMP52:%.*]]
// SHADERTEST:       37:
// SHADERTEST-NEXT:    [[TMP38:%.*]] = load <3 x i64>, ptr addrspace(7) [[TMP2]], align 32
// SHADERTEST-NEXT:    [[TMP39:%.*]] = load <3 x i64>, ptr addrspace(7) [[TMP4]], align 32
// SHADERTEST-NEXT:    [[TMP40:%.*]] = extractelement <3 x i64> [[TMP38]], i64 0
// SHADERTEST-NEXT:    [[TMP41:%.*]] = extractelement <3 x i64> [[TMP39]], i64 0
// SHADERTEST-NEXT:    [[TMP42:%.*]] = icmp ugt i64 [[TMP40]], [[TMP41]]
// SHADERTEST-NEXT:    [[TMP43:%.*]] = insertelement <3 x i1> poison, i1 [[TMP42]], i64 0
// SHADERTEST-NEXT:    [[TMP44:%.*]] = extractelement <3 x i64> [[TMP38]], i64 1
// SHADERTEST-NEXT:    [[TMP45:%.*]] = extractelement <3 x i64> [[TMP39]], i64 1
// SHADERTEST-NEXT:    [[TMP46:%.*]] = icmp ugt i64 [[TMP44]], [[TMP45]]
// SHADERTEST-NEXT:    [[TMP47:%.*]] = insertelement <3 x i1> [[TMP43]], i1 [[TMP46]], i64 1
// SHADERTEST-NEXT:    [[TMP48:%.*]] = extractelement <3 x i64> [[TMP38]], i64 2
// SHADERTEST-NEXT:    [[TMP49:%.*]] = extractelement <3 x i64> [[TMP39]], i64 2
// SHADERTEST-NEXT:    [[TMP50:%.*]] = icmp ugt i64 [[TMP48]], [[TMP49]]
// SHADERTEST-NEXT:    [[TMP51:%.*]] = insertelement <3 x i1> [[TMP47]], i1 [[TMP50]], i64 2
// SHADERTEST-NEXT:    br label [[TMP67:%.*]]
// SHADERTEST:       52:
// SHADERTEST-NEXT:    [[TMP53:%.*]] = load <3 x i64>, ptr addrspace(7) [[TMP2]], align 32
// SHADERTEST-NEXT:    [[TMP54:%.*]] = load <3 x i64>, ptr addrspace(7) [[TMP4]], align 32
// SHADERTEST-NEXT:    [[TMP55:%.*]] = extractelement <3 x i64> [[TMP53]], i64 0
// SHADERTEST-NEXT:    [[TMP56:%.*]] = extractelement <3 x i64> [[TMP54]], i64 0
// SHADERTEST-NEXT:    [[TMP57:%.*]] = icmp ult i64 [[TMP55]], [[TMP56]]
// SHADERTEST-NEXT:    [[TMP58:%.*]] = insertelement <3 x i1> poison, i1 [[TMP57]], i64 0
// SHADERTEST-NEXT:    [[TMP59:%.*]] = extractelement <3 x i64> [[TMP53]], i64 1
// SHADERTEST-NEXT:    [[TMP60:%.*]] = extractelement <3 x i64> [[TMP54]], i64 1
// SHADERTEST-NEXT:    [[TMP61:%.*]] = icmp ult i64 [[TMP59]], [[TMP60]]
// SHADERTEST-NEXT:    [[TMP62:%.*]] = insertelement <3 x i1> [[TMP58]], i1 [[TMP61]], i64 1
// SHADERTEST-NEXT:    [[TMP63:%.*]] = extractelement <3 x i64> [[TMP53]], i64 2
// SHADERTEST-NEXT:    [[TMP64:%.*]] = extractelement <3 x i64> [[TMP54]], i64 2
// SHADERTEST-NEXT:    [[TMP65:%.*]] = icmp ult i64 [[TMP63]], [[TMP64]]
// SHADERTEST-NEXT:    [[TMP66:%.*]] = insertelement <3 x i1> [[TMP62]], i1 [[TMP65]], i64 2
// SHADERTEST-NEXT:    br label [[TMP67]]
// SHADERTEST:       67:
// SHADERTEST-NEXT:    [[DOT022_IN:%.*]] = phi <3 x i1> [ [[TMP51]], [[TMP37]] ], [ [[TMP66]], [[TMP52]] ]
// SHADERTEST-NEXT:    [[TMP68:%.*]] = load i64, ptr addrspace(7) [[TMP0]], align 8
// SHADERTEST-NEXT:    [[TMP69:%.*]] = getelementptr inbounds i8, ptr addrspace(7) [[TMP0]], i32 8
// SHADERTEST-NEXT:    [[TMP70:%.*]] = load i64, ptr addrspace(7) [[TMP69]], align 8
// SHADERTEST-NEXT:    [[TMP71:%.*]] = icmp ne i64 [[TMP68]], [[TMP70]]
// SHADERTEST-NEXT:    [[COND_FREEZE4:%.*]] = freeze i1 [[TMP71]]
// SHADERTEST-NEXT:    br i1 [[COND_FREEZE4]], label [[TMP72:%.*]], label [[TMP74:%.*]]
// SHADERTEST:       72:
// SHADERTEST-NEXT:    [[TMP73:%.*]] = icmp sge i64 [[TMP68]], [[TMP70]]
// SHADERTEST-NEXT:    br label [[TMP76:%.*]]
// SHADERTEST:       74:
// SHADERTEST-NEXT:    [[TMP75:%.*]] = icmp sle i64 [[TMP68]], [[TMP70]]
// SHADERTEST-NEXT:    br label [[TMP76]]
// SHADERTEST:       76:
// SHADERTEST-NEXT:    [[DOT024_IN:%.*]] = phi i1 [ [[TMP73]], [[TMP72]] ], [ [[TMP75]], [[TMP74]] ]
// SHADERTEST-NEXT:    [[COND_FREEZE5:%.*]] = freeze i1 [[DOT024_IN]]
// SHADERTEST-NEXT:    br i1 [[COND_FREEZE5]], label [[TMP77:%.*]], label [[TMP81:%.*]]
// SHADERTEST:       77:
// SHADERTEST-NEXT:    [[TMP78:%.*]] = load i64, ptr addrspace(7) [[TMP0]], align 8
// SHADERTEST-NEXT:    [[TMP79:%.*]] = load i64, ptr addrspace(7) [[TMP69]], align 8
// SHADERTEST-NEXT:    [[TMP80:%.*]] = icmp sgt i64 [[TMP78]], [[TMP79]]
// SHADERTEST-NEXT:    br label [[TMP85:%.*]]
// SHADERTEST:       81:
// SHADERTEST-NEXT:    [[TMP82:%.*]] = load i64, ptr addrspace(7) [[TMP0]], align 8
// SHADERTEST-NEXT:    [[TMP83:%.*]] = load i64, ptr addrspace(7) [[TMP69]], align 8
// SHADERTEST-NEXT:    [[TMP84:%.*]] = icmp slt i64 [[TMP82]], [[TMP83]]
// SHADERTEST-NEXT:    br label [[TMP85]]
// SHADERTEST:       85:
// SHADERTEST-NEXT:    [[DOT0_IN:%.*]] = phi i1 [ [[TMP80]], [[TMP77]] ], [ [[TMP84]], [[TMP81]] ]
// SHADERTEST-NEXT:    [[TMP86:%.*]] = extractelement <3 x i1> [[DOT022_IN]], i64 0
// SHADERTEST-NEXT:    [[TMP87:%.*]] = and i1 [[TMP86]], [[DOT0_IN]]
// SHADERTEST-NEXT:    [[TMP88:%.*]] = select reassoc nnan nsz arcp contract afn i1 [[TMP87]], float 1.000000e+00, float 0.000000e+00
// SHADERTEST-NEXT:    call void (...) @lgc.create.write.generic.output(float [[TMP88]], i32 0, i32 0, i32 0, i32 0, i32 0, i32 poison)
// SHADERTEST-NEXT:    ret void
//