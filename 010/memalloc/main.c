#include <stdio.h>
#include <stdlib.h>

char count, *s_ptr, *p;

int main() {

  s_ptr = malloc(35 * sizeof(char));

  if (s_ptr == NULL) {
    printf("Memory allocation error.\n");
    return -1;
  }

  p = s_ptr;

  for (count = 65; count < 91; count++) {
    *p++ = count;
  }

  *p = '\0';

  puts(s_ptr);

  free(s_ptr);

  return 0;
}
