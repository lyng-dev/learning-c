#include <stdio.h>

int length, width;
long area;

struct coord {
  int x;
  int y;
};

struct rectangle {
  struct coord topleft;
  struct coord bottomright;
} mybox;

int main() {

  printf("\nEnter the top-left coords as x y (i.e 42 37): ");
  scanf("%d%d", &mybox.topleft.x, &mybox.topleft.y);

  printf("\n\nEnter the bottom-right coords as x y: ");
  scanf("%d%d", &mybox.bottomright.x, &mybox.bottomright.y);

  width = mybox.bottomright.x - mybox.topleft.x;
  length = mybox.topleft.y - mybox.bottomright.y;

  area = width * length;
  printf("\n\nThe area of the rectangle is %ld units", area); 

  return 0;
}
