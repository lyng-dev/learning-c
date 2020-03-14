#include <stdio.h>

#define NAMESIZE 30

struct data {
  float amount;
  char fname[NAMESIZE];
  char lname[NAMESIZE];
} rec;

int main() {
  printf("Enter the donor's first and last names seperated by a space: ");

  scanf("%s%s", rec.fname, rec.lname);

  printf("\nEnter the donation amount: ");
  scanf("%f", &rec.amount);

  printf("The donor %s %s gave %.2f€\n", rec.fname, rec.lname, rec.amount);

  return 0;
}
