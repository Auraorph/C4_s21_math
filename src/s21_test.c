#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

// ------------------------------------------------------

// (1) ABS TESTS

START_TEST(s21_abs_test_1) { ck_assert_int_eq(s21_abs(-568), abs(-568)); }
END_TEST

START_TEST(s21_abs_test_2) {
  ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
}
END_TEST

START_TEST(s21_abs_test_3) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(s21_abs_test_4) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(s21_abs_test_5) { ck_assert_int_eq(s21_abs(15), abs(15)); }
END_TEST

START_TEST(s21_abs_test_6) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(s21_abs_test_7) { ck_assert_int_eq(s21_abs(1), abs(1)); }
END_TEST

Suite *s21_abs_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_abs");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_abs_test_1);
  tcase_add_test(tc_core, s21_abs_test_2);
  tcase_add_test(tc_core, s21_abs_test_3);
  tcase_add_test(tc_core, s21_abs_test_4);
  tcase_add_test(tc_core, s21_abs_test_5);
  tcase_add_test(tc_core, s21_abs_test_6);
  tcase_add_test(tc_core, s21_abs_test_7);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (2) ACOS TESTS

START_TEST(s21_acos_test_1) {
  ck_assert_double_eq_tol(s21_acos(-0.519), acos(-0.519), 0.000001);
}
END_TEST

START_TEST(s21_acos_test_2) {
  ck_assert_double_eq_tol(s21_acos(0.81273), acos(0.81273), 0.000001);
}
END_TEST

START_TEST(s21_acos_test_3) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), 0.000001);
}
END_TEST

START_TEST(s21_acos_test_4) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 0.000001);
}
END_TEST

START_TEST(s21_acos_test_5) {
  ck_assert_double_nan(s21_acos(INFINITY));
  ck_assert_double_nan(acos(INFINITY));
}
END_TEST

START_TEST(s21_acos_test_6) {
  ck_assert_double_nan(s21_acos(-INFINITY));
  ck_assert_double_nan(acos(-INFINITY));
}
END_TEST

START_TEST(s21_acos_test_7) {
  ck_assert_double_nan(s21_acos(NAN));
  ck_assert_double_nan(acos(NAN));
}
END_TEST

Suite *s21_acos_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_acos");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_acos_test_1);
  tcase_add_test(tc_core, s21_acos_test_2);
  tcase_add_test(tc_core, s21_acos_test_3);
  tcase_add_test(tc_core, s21_acos_test_4);
  tcase_add_test(tc_core, s21_acos_test_5);
  tcase_add_test(tc_core, s21_acos_test_6);
  tcase_add_test(tc_core, s21_acos_test_7);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (3) ASIN TESTS

START_TEST(s21_asin_test_1) {
  ck_assert_double_eq_tol(s21_asin(0.1255), asin(0.1255), 0.000001);
}
END_TEST

START_TEST(s21_asin_test_2) {
  ck_assert_double_eq_tol(s21_asin(0.45213), asin(0.45213), 0.000001);
}
END_TEST

START_TEST(s21_asin_test_3) {
  ck_assert_double_eq_tol(s21_asin(1), asin(1), 0.000001);
}
END_TEST

START_TEST(s21_asin_test_4) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 0.000001);
}
END_TEST

START_TEST(s21_asin_test_5) {
  ck_assert_double_nan(s21_asin(INFINITY));
  ck_assert_double_nan(asin(INFINITY));
}
END_TEST

START_TEST(s21_asin_test_6) {
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));
}
END_TEST

START_TEST(s21_asin_test_7) {
  ck_assert_double_nan(s21_asin(NAN));
  ck_assert_double_nan(asin(NAN));
}
END_TEST

START_TEST(s21_asin_test_8) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), 0.000001);
}
END_TEST

START_TEST(s21_asin_test_9) {
  ck_assert_double_nan(s21_asin(21));
  ck_assert_double_nan(asin(21));
}
END_TEST

START_TEST(s21_asin_test_10) {
  ck_assert_double_nan(s21_asin(-21));
  ck_assert_double_nan(asin(-21));
}
END_TEST

Suite *s21_asin_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_asin");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_asin_test_1);
  tcase_add_test(tc_core, s21_asin_test_2);
  tcase_add_test(tc_core, s21_asin_test_3);
  tcase_add_test(tc_core, s21_asin_test_4);
  tcase_add_test(tc_core, s21_asin_test_5);
  tcase_add_test(tc_core, s21_asin_test_6);
  tcase_add_test(tc_core, s21_asin_test_7);
  tcase_add_test(tc_core, s21_asin_test_8);
  tcase_add_test(tc_core, s21_asin_test_9);
  tcase_add_test(tc_core, s21_asin_test_10);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (4) ATAN TESTS

START_TEST(s21_atan_test_1) {
  ck_assert_double_eq_tol(s21_atan(0.892), atan(0.892), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_2) {
  ck_assert_double_eq_tol(s21_atan(-0.234), atan(-0.234), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_3) {
  ck_assert_double_eq_tol(s21_atan(1), atan(1), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_4) {
  ck_assert_double_eq_tol(s21_atan(-1), atan(-1), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_5) {
  ck_assert_double_eq_tol(s21_atan(INFINITY), atan(INFINITY), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_6) {
  ck_assert_double_eq_tol(s21_atan(-INFINITY), atan(-INFINITY), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_7) {
  ck_assert_double_eq_tol(s21_atan(0), atan(0), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_8) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_test_9) {
  ck_assert_double_eq_tol(s21_atan(4548), atan(4548), 0.000001);
}
END_TEST

START_TEST(s21_atan_test_10) {
  ck_assert_double_eq_tol(s21_atan(-2), atan(-2), 0.000001);
}
END_TEST

Suite *s21_atan_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_atan");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_atan_test_1);
  tcase_add_test(tc_core, s21_atan_test_2);
  tcase_add_test(tc_core, s21_atan_test_3);
  tcase_add_test(tc_core, s21_atan_test_4);
  tcase_add_test(tc_core, s21_atan_test_5);
  tcase_add_test(tc_core, s21_atan_test_6);
  tcase_add_test(tc_core, s21_atan_test_7);
  tcase_add_test(tc_core, s21_atan_test_8);
  tcase_add_test(tc_core, s21_atan_test_9);
  tcase_add_test(tc_core, s21_atan_test_10);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (5) CEIL TESTS

START_TEST(s21_ceil_test_1) {
  long double test_array[] = {0.5, 0.49, -0.1, 2.4, 0, 1, -1};
  for (int i = 0; i < 7; i++) {
    ck_assert_double_eq_tol(s21_ceil(test_array[i]), ceil(test_array[i]),
                            0.000001);
  }
}

START_TEST(s21_ceil_test_2) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_test_3) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(s21_ceil_test_4) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

Suite *s21_ceil_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_ceil");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_ceil_test_1);
  tcase_add_test(tc_core, s21_ceil_test_2);
  tcase_add_test(tc_core, s21_ceil_test_3);
  tcase_add_test(tc_core, s21_ceil_test_4);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (6) COS TESTS

START_TEST(s21_cos_test_1) {
  long double test_array[] = {0.5, 1, 0};
  for (int i = 0; i < 3; i++) {
    ck_assert_double_eq_tol(s21_cos(test_array[i]), cos(test_array[i]),
                            0.000001);
  }
}
END_TEST

START_TEST(s21_cos_test_2) {
  ck_assert_double_nan(s21_cos(INFINITY));
  ck_assert_double_nan(cos(INFINITY));
}
END_TEST

START_TEST(s21_cos_test_3) {
  ck_assert_double_nan(s21_cos(-INFINITY));
  ck_assert_double_nan(cos(-INFINITY));
}
END_TEST

START_TEST(s21_cos_test_4) {
  ck_assert_double_nan(s21_cos(NAN));
  ck_assert_double_nan(cos(NAN));
}
END_TEST

START_TEST(s21_cos_test_5) {
  ck_assert_double_eq_tol(s21_cos(0.534), cos(0.534), 0.000001);
}
END_TEST

START_TEST(s21_cos_test_6) {
  ck_assert_double_eq_tol(s21_cos(-0.39512), cos(-0.39512), 0.000001);
}
END_TEST

START_TEST(s21_cos_test_7) {
  ck_assert_double_eq_tol(s21_cos(100000), cos(100000), 0.000001);
}
END_TEST

START_TEST(s21_cos_test_8) {
  ck_assert_double_eq_tol(s21_cos(S21_M_PI_2), cos(S21_M_PI_2), 0.000001);
}
END_TEST

Suite *s21_cos_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_cos");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_cos_test_1);
  tcase_add_test(tc_core, s21_cos_test_2);
  tcase_add_test(tc_core, s21_cos_test_3);
  tcase_add_test(tc_core, s21_cos_test_4);
  tcase_add_test(tc_core, s21_cos_test_5);
  tcase_add_test(tc_core, s21_cos_test_6);
  tcase_add_test(tc_core, s21_cos_test_7);
  tcase_add_test(tc_core, s21_cos_test_8);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (7) EXP TESTS

START_TEST(s21_exp_test_1) {
  long double test_array[] = {0, 1, -1, 12, 4.423, -0.5, -91, 58189.249124};
  for (int i = 0; i < 7; i++) {
    ck_assert_double_eq_tol(s21_exp(test_array[i]), exp(test_array[i]),
                            0.000001);
  }
}
END_TEST

START_TEST(s21_exp_test_2) {
  ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(s21_exp_test_3) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(s21_exp_test_4) {
  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}
END_TEST

Suite *s21_exp_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_exp");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_exp_test_1);
  tcase_add_test(tc_core, s21_exp_test_2);
  tcase_add_test(tc_core, s21_exp_test_3);
  tcase_add_test(tc_core, s21_exp_test_4);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (8) FABS TESTS

START_TEST(s21_fabs_test_1) {
  double test_array[] = {4054.49, -5910.1, 0, 1, -1};
  for (int i = 0; i < 5; i++) {
    ck_assert_double_eq_tol(s21_fabs(test_array[i]), fabs(test_array[i]),
                            0.000001);
  }
}
END_TEST

START_TEST(s21_fabs_test_2) {
  ck_assert_double_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(s21_fabs_test_3) {
  ck_assert_double_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

START_TEST(s21_fabs_test_4) {
  ck_assert_double_nan(s21_fabs(NAN));
  ck_assert_double_nan(fabs(NAN));
}
END_TEST

Suite *s21_fabs_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_fabs");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_fabs_test_1);
  tcase_add_test(tc_core, s21_fabs_test_2);
  tcase_add_test(tc_core, s21_fabs_test_3);
  tcase_add_test(tc_core, s21_fabs_test_4);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (9) FLOOR TESTS

START_TEST(s21_floor_test_1) {
  double test_array[] = {49.10, -5.9278, 5.9, 785, -19, 0, 1, -1};
  for (int i = 0; i < 8; i++) {
    ck_assert_double_eq_tol(s21_floor(test_array[i]), floor(test_array[i]),
                            0.000001);
  }
}
END_TEST

START_TEST(s21_floor_test_2) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(s21_floor_test_3) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(s21_floor_test_4) {
  ck_assert_double_nan(s21_floor(NAN));
  ck_assert_double_nan(floor(NAN));
}
END_TEST

Suite *s21_floor_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_floor");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_floor_test_1);
  tcase_add_test(tc_core, s21_floor_test_2);
  tcase_add_test(tc_core, s21_floor_test_3);
  tcase_add_test(tc_core, s21_floor_test_4);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (10) FMOD TESTS

START_TEST(s21_fmod_test_1) {
  long double a = 5.12;
  long double b = 2.1;
  ck_assert_double_eq_tol(s21_fmod(a, b), fmod(a, b), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test_2) {
  long double a = 2.0;
  long double b = 0;
  ck_assert_double_nan(s21_fmod(a, b));
  ck_assert_double_nan(fmod(a, b));
}
END_TEST

START_TEST(s21_fmod_test_3) {
  long double a = 18.3;
  long double b = -3.4;
  ck_assert_double_eq_tol(s21_fmod(a, b), fmod(a, b), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test_4) {
  long double a = 1.12;
  long double b = 0.2;
  ck_assert_double_eq_tol(s21_fmod(a, b), fmod(a, b), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test_5) {
  long double a = -6.49;
  long double b = -3.1;
  ck_assert_double_eq_tol(s21_fmod(a, b), fmod(a, b), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test_6) {
  long double a = -4.443;
  long double b = 0.5;
  ck_assert_double_eq_tol(s21_fmod(a, b), fmod(a, b), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test_7) {
  long double a = 99.156;
  long double b = -12;
  ck_assert_double_eq_tol(s21_fmod(a, b), fmod(a, b), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test_8) {
  double test_array[] = {NAN, INFINITY, -INFINITY};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      ck_assert_double_nan(s21_fmod(test_array[i], test_array[j]));
      ck_assert_double_nan(fmod(test_array[i], test_array[j]));
    }
  }
}
END_TEST

START_TEST(s21_fmod_test_9) {
  ck_assert_double_eq_tol(s21_fmod(7.5, 2.5), fmod(7.5, 2.5), 0.000001);
}
END_TEST

Suite *s21_fmod_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_fmod");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_fmod_test_1);
  tcase_add_test(tc_core, s21_fmod_test_2);
  tcase_add_test(tc_core, s21_fmod_test_3);
  tcase_add_test(tc_core, s21_fmod_test_4);
  tcase_add_test(tc_core, s21_fmod_test_5);
  tcase_add_test(tc_core, s21_fmod_test_6);
  tcase_add_test(tc_core, s21_fmod_test_7);
  tcase_add_test(tc_core, s21_fmod_test_8);
  tcase_add_test(tc_core, s21_fmod_test_9);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (11) LOG TESTS

START_TEST(s21_log_test_1) {
  ck_assert_double_eq_tol(s21_log(28.19), log(28.19), 0.000001);
}
END_TEST

START_TEST(s21_log_test_2) {
  ck_assert_double_nan(s21_log(-28.19));
  ck_assert_double_nan(log(-28.19));
}
END_TEST

START_TEST(s21_log_test_3) {
  ck_assert_double_eq(s21_log(INFINITY), log(INFINITY));
}
END_TEST

START_TEST(s21_log_test_4) {
  ck_assert_double_nan(s21_log(-INFINITY));
  ck_assert_double_nan(log(-INFINITY));
}
END_TEST

START_TEST(s21_log_test_5) {
  ck_assert_double_nan(s21_log(NAN));
  ck_assert_double_nan(log(NAN));
}
END_TEST

START_TEST(s21_log_test_6) {
  ck_assert_double_eq_tol(s21_log(0.00000001), log(0.00000001), 0.000001);
}
END_TEST

START_TEST(s21_log_test_7) {
  ck_assert_double_eq_tol(s21_log(1), log(1), 0.000001);
}
END_TEST

START_TEST(s21_log_test_8) {
  ck_assert_float_infinite(s21_log(0));
  ck_assert_float_infinite(log(0));
}
END_TEST

Suite *s21_log_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_log");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_log_test_1);
  tcase_add_test(tc_core, s21_log_test_2);
  tcase_add_test(tc_core, s21_log_test_3);
  tcase_add_test(tc_core, s21_log_test_4);
  tcase_add_test(tc_core, s21_log_test_5);
  tcase_add_test(tc_core, s21_log_test_6);
  tcase_add_test(tc_core, s21_log_test_7);
  tcase_add_test(tc_core, s21_log_test_8);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (12) POW TESTS

START_TEST(s21_pow_test_1) { ck_assert_double_eq(s21_pow(0, 0), pow(0, 0)); }
END_TEST

START_TEST(s21_pow_test_2) {
  ck_assert_double_eq(s21_pow(2, 2.3), pow(2, 2.3));
}
END_TEST

START_TEST(s21_pow_test_3) { ck_assert_double_eq(s21_pow(2, -2), pow(2, -2)); }
END_TEST

START_TEST(s21_pow_test_4) {
  ck_assert_double_eq(s21_pow(1.21, 4.582), pow(1.21, 4.582));
}
END_TEST

START_TEST(s21_pow_test_5) {
  ck_assert_double_eq(s21_pow(-5.58, 12), pow(-5.58, 12));
}
END_TEST

START_TEST(s21_pow_test_6) {
  ck_assert_double_eq_tol(s21_pow(492, 2.59), pow(492, 2.59), 0.000001);
}
END_TEST

START_TEST(s21_pow_test_7) {
  ck_assert_double_eq(s21_pow(-349, -349), pow(-349, -349));
}
END_TEST

START_TEST(s21_pow_test_8) {
  ck_assert_double_eq(s21_pow(1, INFINITY), pow(1, INFINITY));
}
END_TEST

START_TEST(s21_pow_test_9) {
  ck_assert_double_eq(s21_pow(INFINITY, 0), pow(INFINITY, 0));
}
END_TEST

START_TEST(s21_pow_test_10) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test_11) {
  ck_assert_double_eq(s21_pow(-INFINITY, -INFINITY), pow(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test_12) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_pow_test_13) { ck_assert_double_eq(s21_pow(0, 1), pow(0, 1)); }
END_TEST

START_TEST(s21_pow_test_14) {
  ck_assert_double_eq(s21_pow(INFINITY, -1), pow(INFINITY, -1));
}
END_TEST

START_TEST(s21_pow_test_15) {
  ck_assert_double_eq(s21_pow(-INFINITY, 1), pow(-INFINITY, 1));
}
END_TEST

Suite *s21_pow_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_pow");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_pow_test_1);
  tcase_add_test(tc_core, s21_pow_test_2);
  tcase_add_test(tc_core, s21_pow_test_3);
  tcase_add_test(tc_core, s21_pow_test_4);
  tcase_add_test(tc_core, s21_pow_test_5);
  tcase_add_test(tc_core, s21_pow_test_6);
  tcase_add_test(tc_core, s21_pow_test_7);
  tcase_add_test(tc_core, s21_pow_test_8);
  tcase_add_test(tc_core, s21_pow_test_9);
  tcase_add_test(tc_core, s21_pow_test_10);
  tcase_add_test(tc_core, s21_pow_test_11);
  tcase_add_test(tc_core, s21_pow_test_12);
  tcase_add_test(tc_core, s21_pow_test_13);
  tcase_add_test(tc_core, s21_pow_test_14);
  tcase_add_test(tc_core, s21_pow_test_15);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (13) SIN TESTS

START_TEST(s21_sin_test_1) {
  ck_assert_double_eq_tol(s21_sin(100000), sin(100000), 0.000001);
}
END_TEST

START_TEST(s21_sin_test_2) {
  ck_assert_double_nan(s21_sin(INFINITY));
  ck_assert_double_nan(sin(INFINITY));
}
END_TEST

START_TEST(s21_sin_test_3) {
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));
}
END_TEST

START_TEST(s21_sin_test_4) {
  ck_assert_double_nan(s21_sin(-INFINITY));
  ck_assert_double_nan(sin(-INFINITY));
}
END_TEST

Suite *s21_sin_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sin");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_sin_test_1);
  tcase_add_test(tc_core, s21_sin_test_2);
  tcase_add_test(tc_core, s21_sin_test_3);
  tcase_add_test(tc_core, s21_sin_test_4);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (14) SQRT TESTS

START_TEST(s21_sqrt_test_1) {
  long double arr[] = {0,          1,     0.52, 10,      841.49,
                       192.940192, 0.294, 999,  781.2847};
  for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    ck_assert_double_eq_tol(s21_sqrt(arr[i]), sqrt(arr[i]), 0.000001);
  }
}
END_TEST

START_TEST(s21_sqrt_test_2) {
  ck_assert_double_eq(s21_sqrt(INFINITY), sqrt(INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test_3) {
  ck_assert_double_nan(s21_sqrt(-INFINITY));
  ck_assert_double_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test_4) {
  ck_assert_double_nan(s21_sqrt(NAN));
  ck_assert_double_nan(sqrt(NAN));
}
END_TEST

START_TEST(s21_sqrt_test_5) {
  ck_assert_double_nan(s21_sqrt(-2));
  ck_assert_double_nan(sqrt(-2));
}
END_TEST

Suite *s21_sqrt_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_sqrt");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_sqrt_test_1);
  tcase_add_test(tc_core, s21_sqrt_test_2);
  tcase_add_test(tc_core, s21_sqrt_test_3);
  tcase_add_test(tc_core, s21_sqrt_test_4);
  tcase_add_test(tc_core, s21_sqrt_test_5);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// (15) TAN TESTS

START_TEST(s21_tan_test_1) {
  ck_assert_double_eq_tol(s21_tan(1), tan(1), 0.000001);
}
END_TEST

START_TEST(s21_tan_test_2) {
  ck_assert_double_nan(s21_tan(INFINITY));
  ck_assert_double_nan(tan(INFINITY));
}
END_TEST

START_TEST(s21_tan_test_3) {
  ck_assert_double_nan(s21_tan(NAN));
  ck_assert_double_nan(tan(NAN));
}
END_TEST

START_TEST(s21_tan_test_4) {
  ck_assert_double_nan(s21_tan(-INFINITY));
  ck_assert_double_nan(tan(-INFINITY));
}
END_TEST

START_TEST(s21_tan_test_5) {
  ck_assert_double_eq_tol(s21_tan(5848), tan(5848), 0.000001);
}
END_TEST

START_TEST(s21_tan_test_6) {
  ck_assert_double_eq_tol(s21_tan(0), tan(0), 0.000001);
}
END_TEST

START_TEST(s21_tan_test_7) {
  ck_assert_double_eq_tol(s21_tan(-1), tan(-1), 0.000001);
}
END_TEST

START_TEST(s21_tan_test_8) {
  ck_assert_double_eq_tol(s21_tan(-12.12563), tan(-12.12563), 0.000001);
}
END_TEST

Suite *s21_tan_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_tan");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_tan_test_1);
  tcase_add_test(tc_core, s21_tan_test_2);
  tcase_add_test(tc_core, s21_tan_test_3);
  tcase_add_test(tc_core, s21_tan_test_4);
  tcase_add_test(tc_core, s21_tan_test_5);
  tcase_add_test(tc_core, s21_tan_test_6);
  tcase_add_test(tc_core, s21_tan_test_7);
  tcase_add_test(tc_core, s21_tan_test_8);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// CHECKS.C

// S21_ISNAN

START_TEST(s21_isnan_test_1) { ck_assert_int_eq(s21_isnan(1.0), isnan(1.0)); }
END_TEST

START_TEST(s21_isnan_test_2) {
  ck_assert_int_eq(s21_isnan(INFINITY), isnan(INFINITY));
}
END_TEST

START_TEST(s21_isnan_test_3) { ck_assert_int_eq(s21_isnan(NAN), isnan(NAN)); }
END_TEST

Suite *s21_isnan_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_isnan");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_isnan_test_1);
  tcase_add_test(tc_core, s21_isnan_test_2);
  tcase_add_test(tc_core, s21_isnan_test_3);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

// CHECKS.C

// S21_ISINF

START_TEST(s21_isinf_test_1) { ck_assert_int_eq(s21_isinf(1.0), isinf(1.0)); }
END_TEST

START_TEST(s21_isinf_test_2) {
  ck_assert_int_eq(s21_isinf(INFINITY), isinf(INFINITY));
}
END_TEST

START_TEST(s21_isinf_test_3) { ck_assert_int_eq(s21_isinf(NAN), isinf(NAN)); }
END_TEST

Suite *s21_isinf_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_isinf");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_isinf_test_1);
  tcase_add_test(tc_core, s21_isinf_test_2);
  tcase_add_test(tc_core, s21_isinf_test_3);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

START_TEST(s21_factorial_test_1) {
  ck_assert_double_eq_tol(s21_factorial(5), 120, 0.000001);
}
END_TEST

START_TEST(s21_factorial_test_2) {
  ck_assert_double_eq_tol(s21_factorial(0), 1, 0.000001);
}
END_TEST

START_TEST(s21_factorial_test_3) {
  ck_assert_double_eq_tol(s21_factorial(10), 3628800, 0.000001);
}
END_TEST

Suite *s21_factorial_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("s21_factorial");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, s21_factorial_test_1);
  tcase_add_test(tc_core, s21_factorial_test_2);
  tcase_add_test(tc_core, s21_factorial_test_3);
  suite_add_tcase(s, tc_core);

  return s;
}

// ------------------------------------------------------

void create_test(Suite *s, int *report) {
  SRunner *sr;
  sr = srunner_create(s);
  srunner_run_all(sr, CK_NORMAL);
  *report += srunner_ntests_failed(sr);
  srunner_free(sr);
}

int main() {
  int number_failed = 0;
  create_test(s21_abs_suite(), &number_failed);
  create_test(s21_asin_suite(), &number_failed);
  create_test(s21_acos_suite(), &number_failed);
  create_test(s21_atan_suite(), &number_failed);
  create_test(s21_ceil_suite(), &number_failed);
  create_test(s21_cos_suite(), &number_failed);
  create_test(s21_exp_suite(), &number_failed);
  create_test(s21_fabs_suite(), &number_failed);
  create_test(s21_floor_suite(), &number_failed);
  create_test(s21_fmod_suite(), &number_failed);
  create_test(s21_log_suite(), &number_failed);
  create_test(s21_pow_suite(), &number_failed);
  create_test(s21_sin_suite(), &number_failed);
  create_test(s21_sqrt_suite(), &number_failed);
  create_test(s21_tan_suite(), &number_failed);
  create_test(s21_isnan_suite(), &number_failed);
  create_test(s21_isinf_suite(), &number_failed);
  create_test(s21_factorial_suite(), &number_failed);
  return 0;
}