#include "s21_math.h"

long double s21_exp(double x) {
  long double exp_val = 1, buf = 1, i = 1;
  int flag = 0;

  if (x < 0) {
    x *= -1;
    flag = 1;
  }

  while (exp_val > S21_M_TOCH) {
    exp_val *= x / i;
    i++;
    buf += exp_val;

    if (buf > DBL_MAX) {
      buf = S21_POS_INF;
      break;
    }
  }

  if (flag) {
    if (buf > DBL_MAX) {
      buf = 0;
    } else {
      buf = 1.0 / buf;
    }
  }

  if (buf > DBL_MAX) {
    buf = S21_POS_INF;
  }

  return buf;
}
