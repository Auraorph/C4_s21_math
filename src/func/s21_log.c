#include "s21_math.h"
#define EPS 1e-12

long double s21_log(double x) {
  long double ret = 0;
  if (x < 0 || s21_isnan(x)) {
    ret = S21_NAN;
  } else if (x >= 0.0 - EPS && x <= 0.0 + EPS) {
    ret = S21_NEG_INF;
  } else if (x >= 1 - EPS && x <= 1 + EPS) {
    ret = 0;
  } else if (x == S21_POS_INF) {
    ret = x;
  } else {
    long double xNew = 1;
    long double f = s21_exp(xNew) - x;
    long double df = 0;

    while (s21_fabs(f) > EPS) {
      f = s21_exp(xNew) - x;
      df = s21_exp(xNew);
      xNew = xNew - f / df;
    }
    ret = xNew;
  }
  return ret;
}