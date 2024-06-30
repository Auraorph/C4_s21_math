#include "s21_math.h"

long double s21_factorial(long long int n) {
  double fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

int s21_isnan(double x) { return x != x; }

int s21_isinf(double x) { return x == S21_NEG_INF || x == S21_POS_INF; }