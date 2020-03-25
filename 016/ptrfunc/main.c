#include <stdio.h>

double square(double);

double (*func_ptr)(double x);

int main() {

  func_ptr = square;

  printf("%f   %f\n", square(6.6), func_ptr(6.6));

  return 0;
}

double square(double x) {
  return x * x;
}
