#include <stdio.h>


struct person {
  char *name[32];
  unsigned short age;
  unsigned int height;
} author = { .name = "<Name not specified>", .age = 0, .height = 0 };

int main() {
  printf("The author is: %s who is %d years old and %d cm. tall", *author.name, author.age, author.height);
 
  return 0;
}
