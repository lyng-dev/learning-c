#include <stdio.h>

int length, width;
long area;

struct coord {
  int x;
  int y;
} myPoint;

int main() {
  myPoint.x = 12;
  myPoint.y = 14;

  printf("\nThe coordinates of myPoint are: (%d, %d)", myPoint.x, myPoint.y);

  return 0;
}
