#include "s21_math.h"

long double s21_ceil(double x) {
  if (s21_isinf(x) || s21_isnan(x)) {
    return x;
  }

  long double ceil_val = 0;
  int integ = (long int)x;

  if (x > 0 && x != (double)integ) {
    ceil_val = integ + 1;
  } else if (x < 0 && x != (double)integ) {
    ceil_val = integ;
  } else {
    ceil_val = x;
  }

  return ceil_val;
}