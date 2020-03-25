#include <stdio.h>

void print_strings(char *p[], int n);

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

  print_strings(message, 10);

  return 0;
}

void print_strings(char *p[], int n) {
  int count;

  for (count = 0; count < n; count++)
    printf("%s ", p[count]);

  puts("");
}

