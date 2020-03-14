#include <stdio.h>

unsigned char mychar;

int main() {

  for (mychar = 40; mychar < 96; mychar++) {
    printf("ASCII code %d is character %c\n", mychar, mychar);
  }

  return 0;
}
