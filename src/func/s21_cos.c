#include "s21_math.h"

long double s21_cos(double x) {
  if (s21_isinf(x) || s21_isnan(x)) {
    return S21_NAN;
  }

  while (x > S21_M_PI || x < -S21_M_PI) {
    x -= (x > S21_M_PI) ? 2 * S21_M_PI : -2 * S21_M_PI;
  }

  long double cos_val = 0;
  long double term = 1;
  int i = 1;

  while (s21_fabs(term) > S21_M_TOCH) {
    cos_val += term;
    term = -term * x * x / ((2 * i - 1) * (2 * i));
    i++;
  }

  return cos_val;
}