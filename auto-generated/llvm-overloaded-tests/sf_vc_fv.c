// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_sf_vc_fv_se_u16mf4(int bit_field26, int bit_field11_7,
                             vuint16mf4_t vs2, _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u16mf2(int bit_field26, int bit_field11_7,
                             vuint16mf2_t vs2, _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u16m1(int bit_field26, int bit_field11_7, vuint16m1_t vs2,
                            _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u16m2(int bit_field26, int bit_field11_7, vuint16m2_t vs2,
                            _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u16m4(int bit_field26, int bit_field11_7, vuint16m4_t vs2,
                            _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u16m8(int bit_field26, int bit_field11_7, vuint16m8_t vs2,
                            _Float16 fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u32mf2(int bit_field26, int bit_field11_7,
                             vuint32mf2_t vs2, float fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u32m1(int bit_field26, int bit_field11_7, vuint32m1_t vs2,
                            float fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u32m2(int bit_field26, int bit_field11_7, vuint32m2_t vs2,
                            float fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u32m4(int bit_field26, int bit_field11_7, vuint32m4_t vs2,
                            float fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u32m8(int bit_field26, int bit_field11_7, vuint32m8_t vs2,
                            float fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u64m1(int bit_field26, int bit_field11_7, vuint64m1_t vs2,
                            double fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u64m2(int bit_field26, int bit_field11_7, vuint64m2_t vs2,
                            double fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u64m4(int bit_field26, int bit_field11_7, vuint64m4_t vs2,
                            double fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}

void test_sf_vc_fv_se_u64m8(int bit_field26, int bit_field11_7, vuint64m8_t vs2,
                            double fs1, size_t vl) {
  return __riscv_sf_vc_fv_se(0, 0, vs2, fs1, vl);
}