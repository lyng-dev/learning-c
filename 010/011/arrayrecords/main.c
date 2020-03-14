#include <stdio.h>

#define NAMEMAX 20
#define PHONEMAX 15

struct entry {
  char fname[NAMEMAX];
  char lname[NAMEMAX];
  char phone[PHONEMAX];
};

struct entry list[4];

int i;

int main() {

  for (i = 0; i < 4; i++) {
    printf("\nEnter the first name and last name and phonenumber (i.e. John Smith 812-212-232): ");
    scanf("%s%s%s", list[i].fname, list[i].lname, list[i].phone);
  }

  printf("\n\n");

  for (i = 0; i < 4; i++) {
    printf("Name: %s %s, Phone: %s", list[i].fname, list[i].lname, list[i].phone);
  }

  return 0;
}
