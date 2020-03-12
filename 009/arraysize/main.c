#include <stdio.h>

short array_s[10];
float array_f[10];
double array_d[10];

int main() {
  printf("\t\tShort\t\tFloat\t\tDouble\n");
  printf("===========================================================");

  for (int i = 0; i < 10; i++) {
    printf("\nElement %d:\t%p\t\t%p\t\t%p", i, &array_s[i], &array_f[i], &array_d[i]);

  }
  printf("\n===========================================================");

  return 0;
}
