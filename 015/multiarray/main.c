#include <stdio.h>

int multi[2][4];

int main() {

  multi[0][0] = 17;

  printf("\nmulti = %p", multi);
  printf("\nmulti[0] = %p", multi[0]);
  printf("\nmulti[0][0] = %d", multi[0][0]);

  return 0;

}

