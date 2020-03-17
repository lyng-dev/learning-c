#include <stdio.h>

int main() {

  int age;
  char name[20];

  puts("Enter you age: ");
  scanf("%d", &age);

  fflush(stdin);

  puts("Enter your first name: ");
  scanf("%s", name);

  printf("Your age is %d\n", age);
  printf("Your name is %s", name);

  return 0;
}
