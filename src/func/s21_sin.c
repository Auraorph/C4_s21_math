#include "s21_math.h"

long double s21_sin(double x) {
  if (s21_isinf(x) || s21_isnan(x)) {
    return S21_NAN;
  }

  return s21_cos(S21_M_PI_2 - x);
}