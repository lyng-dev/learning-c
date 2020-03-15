#include <stdio.h>

#define BUFFERMAX 256

int main() {
  char buffer[BUFFERMAX];

  puts(fgets(buffer, BUFFERMAX, stdin));

  return 0;
}
