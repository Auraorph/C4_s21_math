#include "s21_math.h"

long double s21_asin(double x) {
  if (x < -1 || x > 1) {
    return S21_NAN;
  }

  long double term = x;
  long double result = x;

  if (x == 1 || x == -1) {
    result = S21_M_PI_2 * x;
  } else {
    int n = 1;
    while (s21_fabs(term) >= S21_M_TOCH && n < 1000) {
      term *= (x * x * (2 * n - 1) * (2 * n - 1)) / ((2 * n) * (2 * n + 1));
      result += term;
      n++;
    }
  }
  return result;
}
