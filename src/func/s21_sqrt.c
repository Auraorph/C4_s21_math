#include "s21_math.h"

long double s21_sqrt(double x) {
  if (x < 0 || s21_isnan(x) || x == S21_NEG_INF) {
    return S21_NAN;
  }
  if (x == 0 || x == S21_POS_INF) {
    return x;
  }

  long double guess = x / 2.0;
  for (int i = 0; i < S21_NMAX; i++) {
    long double new_guess = 0.5 * (guess + x / guess);
    if (s21_fabs(new_guess - guess) >= S21_M_TOCH) {
      guess = new_guess;
    }
  }
  return guess;
}
