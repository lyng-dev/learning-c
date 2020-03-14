#include <stdio.h>

int x = 999;

void print_value();

int main() {

  extern int x;

  printf("In main, the value of extern variable is: %d", x);
  print_value();

  return 0;
}

void print_value() {
  extern int x;

  printf("In called function, the Value of external variable is: %d", x);
}
