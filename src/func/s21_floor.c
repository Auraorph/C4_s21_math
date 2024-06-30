#include "s21_math.h"

long double s21_floor(double x) {
  if (s21_isinf(x) || s21_isnan(x)) {
    return x;
  }
  long double floor_val = 0;
  int integ = (long int)x;
  if (x > 0) {
    floor_val = integ;
  } else {
    if (((double)integ == x)) {
      floor_val = integ;
    } else {
      floor_val = integ - 1;
    }
  }

  return floor_val;
}