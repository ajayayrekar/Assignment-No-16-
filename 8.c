//8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
#include <stdbool.h>

void printUnique(int arr[], int n) {
    bool visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            printf("%d ", arr[i]);
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = true;
                }
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unique elements: ");
    printUnique(arr, n);
    return 0;
}
