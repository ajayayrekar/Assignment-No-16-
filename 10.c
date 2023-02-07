//10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
#include <stdlib.h>

void countFrequency(int arr[], int n) {
  int i, j;
  int *count = (int *)calloc(n, sizeof(int));

  for (i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  printf("Element Frequency\n");
  for (i = 0; i < n; i++) {
    if (count[i] != 0) {
      printf("%d %d\n", i, count[i]);
    }
  }
}

int main() {
  int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  countFrequency(arr, n);

  return 0;
}
