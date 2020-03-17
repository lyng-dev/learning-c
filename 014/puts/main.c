#include <stdio.h>

#define SIZE 5

char *messages[SIZE] = { "This", "is", "a", "short", "message" };

int main() {

  int x;

  for (x = 0; x < SIZE; x++)
    puts(messages[x]);

  puts("And this is the end.");

  return 0;
}
