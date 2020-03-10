#include <stdio.h>

unsigned int f, x;

int main(void) {
  inline unsigned int factorial(unsigned int a) {
    if (a == 1) return 1;
    else {
      a *= factorial(a-1);
      return a;
    } 
  }
  puts("Enter an integer value between 1 and 8: ");
  scanf("%d", &x);

  if (x > 8 || x < 1) {
    puts("Only values from 1 to 8 are acceptable!");
  }
  else {
    f = factorial(x);
    printf("%u factorial euals %u\n", x, f);
  }


  return 0;
}
