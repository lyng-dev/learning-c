#include <stdio.h>
#include <stdbool.h>

void func1(int x);
void one(void);
void two(void);
void other(void);

int main() {

  int nbr;

  while(true) {
    puts("\nEnter en integer between 1 and 10, 0 to exit.: ");
    scanf("%d", &nbr);

    if (nbr == 0) break;

    func1(nbr);
  }

  return 0;
}

void func1(int val) {
  void (*func_ptr)(void);

  if (val == 1) func_ptr = one;
  else if (val == 2) func_ptr = two;
  else func_ptr = other;

  func_ptr();
}

void one(void) {
  puts("You entered ONE");
}

void two(void) {
  puts("TWO is what you selected");
}

void other(void) {
  puts("Something OTHER is what you chose");
}
