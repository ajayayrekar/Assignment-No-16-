//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n) {
  int i = 0, j = 0, k = 0;
  int temp[2 * n];

  while (i < n && j < n) {
    if (arr1[i] >= arr2[j]) {
      temp[k++] = arr1[i++];
    } else {
      temp[k++] = arr2[j++];
    }
  }

  while (i < n) {
    temp[k++] = arr1[i++];
  }

  while (j < n) {
    temp[k++] = arr2[j++];
  }

  for (i = 0; i < 2 * n; i++) {
    arr1[i] = temp[i];
  }
}

int main() {
  int arr1[] = {10, 5, 2};
  int arr2[] = {7, 4, 3};
  int n = sizeof(arr1) / sizeof(arr1[0]);

  mergeArrays(arr1, arr2, n);

  printf("Merged array is \n");
  for (int i = 0; i < 2 * n; i++) {
    printf("%d ", arr1[i]);
  }

  return 0;
}
