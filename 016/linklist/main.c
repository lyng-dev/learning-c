#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef NULL
  #define NULL 0
#endif

/* List data structure */
struct list {
  int ch;
  struct list * next_rec;
};

/* Typedef for the structure and pointer */
typedef struct list LIST;
typedef LIST * LISTPTR;

/* Function prototypes */
LISTPTR add_to_list(int, LISTPTR);
void show_list(LISTPTR);
void free_memory_list(LISTPTR);

int main() {

  LISTPTR first = NULL; /* head pointer */
  int i = 0;
  int ch;
  char trash[256]; /* clear stdin buffer */
  
  while (i++ < 5) {
    ch = 0;
    printf("\nEnter character %d, ", i);

    do {

      printf("\nMust be a to z: ");
      ch = getc(stdin);
      fgets(trash, 256, stdin);

    } while((ch < 'a' || ch > 'z') && (ch < 'A' || ch > 'Z')); 
  }

  return 0;
}
