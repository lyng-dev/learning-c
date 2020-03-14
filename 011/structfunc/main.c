#include <stdio.h>

#define NAMEMAX 30

struct data {
  float amount;
  char fname[NAMEMAX];
  char lname[NAMEMAX];
} rec;

void print_rec(struct data displayRec);

int main() {
  
  printf("Enter the donor's first and last name seperated by space: ");
  scanf("%s%s", rec.fname, rec.lname);

  printf("\nEnter the donation amount: ");
  scanf("%f", &rec.amount);

  print_rec(rec);

  return 0;
}

void print_rec(struct data record) {
  printf("\nDonor %s %s gave €%.2f", record.fname, record.lname, record.amount);
}
