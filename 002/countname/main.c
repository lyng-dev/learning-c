#include <stdio.h>
#include <string.h>

int main(void) {
  char buffer[256];

  printf("Enter your name and press <Enter>:\n");
 
  if (fgets(buffer, sizeof(buffer), stdin) != NULL) {

    //fgets can potentially add a \n, so we remove that.
    buffer[strcspn(buffer, "\n")] = '\0';

    //use zu to as modifier for type size_t, which is an unsigned integer
    printf("\nYour name has %zu characters and spaces!", strlen(buffer));
  }

  return 0;
}
