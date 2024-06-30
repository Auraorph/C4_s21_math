#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = 0.0;

  if (y == 0 || s21_isinf(x) || (x != y && s21_isinf(x) && s21_isinf(y))) {
    result = S21_NAN;
  } else if (s21_isinf(y)) {
    result = x;
  } else {
    result = (long double)x - (int)(x / y) * (long double)y;
  }

  return result;
}
