#include <stdio.h>

int multi[2][4];

int main() {
  
  printf("\nThe size of multi = %lu", sizeof(multi));
  printf("\nThe size of multi[0] = %lu", sizeof(multi[0]));
  printf("\nThe size of multi[0][0] = %lu", sizeof(multi[0][0]));

  return 0;
}
