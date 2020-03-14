#include <stdio.h>

void func1();

int main() {

  for (int count = 0; count < 20; count++) {
    printf("At iteration %d: ", count);
    func1();
  }

  return 0;
}

void func1() {
  static int x = 0;
  int y = 0;

  printf("x = %d, y = %d\n", x++, y++);
}
