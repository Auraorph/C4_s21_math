#ifndef S21_MATH_H
#define S21_MATH_H

#include <float.h>
#include <stdio.h>
#include <string.h>

#define S21_M_PI 3.14159265358979323846L
#define S21_M_PI_2 3.14159265358979323846L / 2L
#define S21_M_PI_4 3.14159265358979323846L / 4L
#define S21_E 2.71828182845904523536028747L
#define S21_M_LN2 0.69314718055994530941723212145818L
#define S21_M_TOCH 1e-21
#define S21_NAN 0.0L / 0.0L
#define S21_POS_INF +1.0L / 0.0L
#define S21_NEG_INF -1.0L / 0.0L
#define S21_NMAX 100

int s21_abs(int x);                            // 1
long double s21_acos(double x);                // 2
long double s21_asin(double x);                // 3
long double s21_atan(double x);                // 4
long double s21_ceil(double x);                // 5
long double s21_cos(double x);                 // 6
long double s21_exp(double x);                 // 7
long double s21_fabs(double x);                // 8
long double s21_floor(double x);               // 9
long double s21_fmod(double x, double y);      // 10
long double s21_log(double x);                 // 11
long double s21_pow(double base, double exp);  // 12
long double s21_sin(double x);                 // 13
long double s21_sqrt(double x);                // 14
long double s21_tan(double x);                 // 15

long double s21_factorial(long long int x);
int s21_isnan(double x);
int s21_isinf(double x);

#endif