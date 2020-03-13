#include <stdio.h>

#define MAX 10

int arr[MAX] = { 10,11,12,13,14,15,16,17,18,19 };

int main() {
  for (int i = 0; i < MAX; i++) {
    printf("%d == %d\n", *(arr + i), arr[i]);
  }

return 0;
}
