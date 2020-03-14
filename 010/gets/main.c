#include <stdio.h>


#define MAX 257

char input[MAX];

int main() {
  puts("Enter some text, then press <Enter>: ");

  fgets(input, MAX, stdin);

  printf("You entered: %s\n", input);

  return 0;
}
