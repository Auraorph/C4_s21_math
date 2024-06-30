#include "s21_math.h"

long double s21_fabs(double x) {
  long double fabs_val = x;
  if (x < 0.) {
    fabs_val *= -1;
  }
  return fabs_val;
}