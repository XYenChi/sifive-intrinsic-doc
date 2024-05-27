#include <riscv_vector.h>
#include <stdint.h>

vuint16mf4_t test_sf_vc_v_ivw_u8mf8(int bit_field27_26, vuint16mf4_t vd,
                                    vuint8mf8_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u8mf8(0, vd, vs2, 0, vl);
}

vuint16mf4_t test_sf_vc_v_ivw_se_u8mf8(int bit_field27_26, vuint16mf4_t vd,
                                       vuint8mf8_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u8mf8(0, vd, vs2, 0, vl);
}

vuint16mf2_t test_sf_vc_v_ivw_u8mf4(int bit_field27_26, vuint16mf2_t vd,
                                    vuint8mf4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u8mf4(0, vd, vs2, 0, vl);
}

vuint16mf2_t test_sf_vc_v_ivw_se_u8mf4(int bit_field27_26, vuint16mf2_t vd,
                                       vuint8mf4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u8mf4(0, vd, vs2, 0, vl);
}

vuint16m1_t test_sf_vc_v_ivw_u8mf2(int bit_field27_26, vuint16m1_t vd,
                                   vuint8mf2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u8mf2(0, vd, vs2, 0, vl);
}

vuint16m1_t test_sf_vc_v_ivw_se_u8mf2(int bit_field27_26, vuint16m1_t vd,
                                      vuint8mf2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u8mf2(0, vd, vs2, 0, vl);
}

vuint16m2_t test_sf_vc_v_ivw_u8m1(int bit_field27_26, vuint16m2_t vd,
                                  vuint8m1_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u8m1(0, vd, vs2, 0, vl);
}

vuint16m2_t test_sf_vc_v_ivw_se_u8m1(int bit_field27_26, vuint16m2_t vd,
                                     vuint8m1_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u8m1(0, vd, vs2, 0, vl);
}

vuint16m4_t test_sf_vc_v_ivw_u8m2(int bit_field27_26, vuint16m4_t vd,
                                  vuint8m2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u8m2(0, vd, vs2, 0, vl);
}

vuint16m4_t test_sf_vc_v_ivw_se_u8m2(int bit_field27_26, vuint16m4_t vd,
                                     vuint8m2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u8m2(0, vd, vs2, 0, vl);
}

vuint16m8_t test_sf_vc_v_ivw_u8m4(int bit_field27_26, vuint16m8_t vd,
                                  vuint8m4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u8m4(0, vd, vs2, 0, vl);
}

vuint16m8_t test_sf_vc_v_ivw_se_u8m4(int bit_field27_26, vuint16m8_t vd,
                                     vuint8m4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u8m4(0, vd, vs2, 0, vl);
}

vuint32mf2_t test_sf_vc_v_ivw_u16mf4(int bit_field27_26, vuint32mf2_t vd,
                                     vuint16mf4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u16mf4(0, vd, vs2, 0, vl);
}

vuint32mf2_t test_sf_vc_v_ivw_se_u16mf4(int bit_field27_26, vuint32mf2_t vd,
                                        vuint16mf4_t vs2, int simm5,
                                        size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u16mf4(0, vd, vs2, 0, vl);
}

vuint32m1_t test_sf_vc_v_ivw_u16mf2(int bit_field27_26, vuint32m1_t vd,
                                    vuint16mf2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u16mf2(0, vd, vs2, 0, vl);
}

vuint32m1_t test_sf_vc_v_ivw_se_u16mf2(int bit_field27_26, vuint32m1_t vd,
                                       vuint16mf2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u16mf2(0, vd, vs2, 0, vl);
}

vuint32m2_t test_sf_vc_v_ivw_u16m1(int bit_field27_26, vuint32m2_t vd,
                                   vuint16m1_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u16m1(0, vd, vs2, 0, vl);
}

vuint32m2_t test_sf_vc_v_ivw_se_u16m1(int bit_field27_26, vuint32m2_t vd,
                                      vuint16m1_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u16m1(0, vd, vs2, 0, vl);
}

vuint32m4_t test_sf_vc_v_ivw_u16m2(int bit_field27_26, vuint32m4_t vd,
                                   vuint16m2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u16m2(0, vd, vs2, 0, vl);
}

vuint32m4_t test_sf_vc_v_ivw_se_u16m2(int bit_field27_26, vuint32m4_t vd,
                                      vuint16m2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u16m2(0, vd, vs2, 0, vl);
}

vuint32m8_t test_sf_vc_v_ivw_u16m4(int bit_field27_26, vuint32m8_t vd,
                                   vuint16m4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u16m4(0, vd, vs2, 0, vl);
}

vuint32m8_t test_sf_vc_v_ivw_se_u16m4(int bit_field27_26, vuint32m8_t vd,
                                      vuint16m4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u16m4(0, vd, vs2, 0, vl);
}

vuint64m1_t test_sf_vc_v_ivw_u32mf2(int bit_field27_26, vuint64m1_t vd,
                                    vuint32mf2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u32mf2(0, vd, vs2, 0, vl);
}

vuint64m1_t test_sf_vc_v_ivw_se_u32mf2(int bit_field27_26, vuint64m1_t vd,
                                       vuint32mf2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u32mf2(0, vd, vs2, 0, vl);
}

vuint64m2_t test_sf_vc_v_ivw_u32m1(int bit_field27_26, vuint64m2_t vd,
                                   vuint32m1_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u32m1(0, vd, vs2, 0, vl);
}

vuint64m2_t test_sf_vc_v_ivw_se_u32m1(int bit_field27_26, vuint64m2_t vd,
                                      vuint32m1_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u32m1(0, vd, vs2, 0, vl);
}

vuint64m4_t test_sf_vc_v_ivw_u32m2(int bit_field27_26, vuint64m4_t vd,
                                   vuint32m2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u32m2(0, vd, vs2, 0, vl);
}

vuint64m4_t test_sf_vc_v_ivw_se_u32m2(int bit_field27_26, vuint64m4_t vd,
                                      vuint32m2_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u32m2(0, vd, vs2, 0, vl);
}

vuint64m8_t test_sf_vc_v_ivw_u32m4(int bit_field27_26, vuint64m8_t vd,
                                   vuint32m4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_u32m4(0, vd, vs2, 0, vl);
}

vuint64m8_t test_sf_vc_v_ivw_se_u32m4(int bit_field27_26, vuint64m8_t vd,
                                      vuint32m4_t vs2, int simm5, size_t vl) {
  return __riscv_sf_vc_v_ivw_se_u32m4(0, vd, vs2, 0, vl);
}
