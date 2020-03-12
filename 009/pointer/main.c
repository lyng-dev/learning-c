#include <stdio.h>

int var = 1;
int *ptr;

int main() {
  ptr = &var;

  printf("\nDirect access, var = %d", var);

  printf("\nIn-direct access, var = %d", *ptr);

  printf("\n\nThe address of var = %p", &var);

  printf("\n\nThe address of var = %p\n", ptr);

  return 0;
}
