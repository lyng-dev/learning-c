#include <stdio.h>

#define LAPS_PER_MILE 4

const int CURRENT_YEAR = 2020;

float miles_covered;
int laps_run, yob, age;

int main(void) {

  /* Input user data */
  printf("How many laps did you run?: ");
  scanf("%d", &laps_run);

  printf("Enter you year of birth: ");
  scanf("%d", &yob);

  /* Perform conversions */
  miles_covered = (float)laps_run / LAPS_PER_MILE;
  age = CURRENT_YEAR - yob;

  // Display results
  printf("\nYou ran %.2f miles.", miles_covered);
  printf("\nNot bad for someone turning %d this year!\n", age);

  return 0;
}
