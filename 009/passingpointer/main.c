#include <stdio.h>

#define MAX 10

int array[MAX], count;

int largest(int num_array[], int length);

int main() {
  for (count = 0; count < MAX; count++) {
    printf("Enter an integer: ");
    scanf("%d", &array[count]);
  }

  printf("\n\nThe largest value is = %d\n", largest(array, MAX));
}

int largest(int num_array[], int length) {

  int count, biggest;

  for (count = 0; count < length; count++) {
    if (count == 0)
      biggest = num_array[count];
    if (num_array[count] > biggest)
      biggest = num_array[count];
  }

  return biggest;
}
