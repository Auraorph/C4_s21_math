#include "s21_math.h"

#define MyE 1e-7

long double s21_pow(double base, double exp) {
  long double ret = 0;
  if (exp < 0 + MyE && exp > 0 - MyE)
    ret = 1;
  else if (base < 1 + MyE && base > 1 - MyE)
    ret = 1;
  else if (s21_isnan(base) || s21_isnan(exp))
    ret = S21_NAN;
  else if (base < 0 + MyE && base > 0 - MyE)
    ret = 0;
  else if (base == S21_POS_INF && exp > 0)
    ret = S21_POS_INF;
  else if (base == S21_POS_INF && exp < 0)
    ret = 0;
  else if (base == S21_NEG_INF && exp > 0)
    ret = S21_NEG_INF;
  else if (base == S21_NEG_INF && exp < 0)
    ret = -0;
  else if (exp - s21_floor(exp) < MyE && (long int)s21_floor(exp) % 2 == 0)
    ret = s21_exp(exp * s21_log(s21_fabs(base)));
  else if (base > 0)
    ret = s21_exp(exp * s21_log(base));
  else
    ret = (-1) * s21_exp(exp * s21_log(s21_fabs(base)));
  return ret;
}