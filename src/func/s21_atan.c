#include "s21_math.h"

long double s21_atan(double x) {
  if (s21_fabs(x) <= S21_M_TOCH) return 0;

  if (s21_isinf(x)) {
    return x > 0 ? S21_M_PI_2 : -S21_M_PI_2;
  }

  long double result = 0.0;
  if (x > 1) {
    result = S21_M_PI_2 - s21_asin(1 / s21_sqrt(1 + x * x));
  } else if (x < -1) {
    result = -S21_M_PI_2 + s21_asin(1 / s21_sqrt(1 + x * x));
  } else {
    result = s21_asin(x / s21_sqrt(1 + x * x));
  }
  return result;
}
