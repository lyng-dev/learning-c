#include <stdio.h>

int main() {

  char *message[10] = 
  {
    "Der",
    "Er",
    "Et",
    "Yndigt",
    "Land",
    "Det",
    "Står",
    "Med",
    "Brede",
    "Bøge"
  };

  int count;

  for (count = 0; count < 10; count++)
    printf("%s ", message[count]);

  puts("");
 
  return 0;
}
