#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/* The list data structures */
struct data {
  char name[20];
  struct data *next;
};

/* Define typedefs for the structure */
typedef struct data PERSON;
typedef PERSON * LINK;

#define __MALLOC_PERSON malloc(sizeof(PERSON))

int main() {
  /* Head, new and current element pointers */
  LINK head = NULL;
  LINK new = NULL;
  LINK current = NULL;

  /* Add the first list element. Wo do not assume the list is empty, although in this demo prgram it always will be */
  new = (LINK)__MALLOC_PERSON;
  new->next = head;
  head = new;
  strcpy(new->name, "Steffen");

  /* Add an element to the end of the list */
  current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  new = (LINK)__MALLOC_PERSON;
  current->next = new;
  new->next = NULL;
  strcpy(new->name, "Ran");

  /* Add a new element at the second position in the list */
  new = (LINK)__MALLOC_PERSON;
  new->next = head->next;
  head->next = new;
  strcpy((*new).name, "Genfu");

  /* Print all data items in order */
  current = head;
  while(current != NULL) {
    printf("\n%s", current->name);
    current = current->next;
  }

  printf("\n");

  return 0;
}
