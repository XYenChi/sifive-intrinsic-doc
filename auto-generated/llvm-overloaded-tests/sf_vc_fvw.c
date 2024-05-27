// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_sf_vc_fvw_se_u16mf4(int bit_field26, vuint32mf2_t vd,
                              vuint16mf4_t vs2, _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u16mf2(int bit_field26, vuint32m1_t vd, vuint16mf2_t vs2,
                              _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u16m1(int bit_field26, vuint32m2_t vd, vuint16m1_t vs2,
                             _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u16m2(int bit_field26, vuint32m4_t vd, vuint16m2_t vs2,
                             _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u16m4(int bit_field26, vuint32m8_t vd, vuint16m4_t vs2,
                             _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u32mf2(int bit_field26, vuint64m1_t vd, vuint32mf2_t vs2,
                              float fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u32m1(int bit_field26, vuint64m2_t vd, vuint32m1_t vs2,
                             float fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u32m2(int bit_field26, vuint64m4_t vd, vuint32m2_t vs2,
                             float fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}

void test_sf_vc_fvw_se_u32m4(int bit_field26, vuint64m8_t vd, vuint32m4_t vs2,
                             float fs1, size_t vl) {
  return __riscv_sf_vc_fvw_se(0, vd, vs2, fs1, vl);
}