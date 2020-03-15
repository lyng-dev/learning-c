#include <stdio.h>

void clear_kb();

int main() {

  int age;
  char name[20];

  puts("Enter your age: ");
  scanf("%d", &age);

  clear_kb();

  puts("Enter you first name: ");
  scanf("%s", name);

  printf("Your age is %d\n", age);
  printf("Your name is: %s\n", name);

  return 0;
}

void clear_kb() {
  char junk[80];
  fgets(junk, 80, stdin);
}
