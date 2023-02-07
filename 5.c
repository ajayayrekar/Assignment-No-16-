//5. Write a program in C to find the sum of left diagonals of a matrix.

#include<stdio.h>

#define ROWS 3
#define COLS 3

int sum_left_diagonal(int matrix[][COLS]){
    int i, sum = 0;
    for(i = 0; i < ROWS; i++){
        sum += matrix[i][ROWS - i - 1];
    }
    return sum;
}

int main(){
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int sum = sum_left_diagonal(matrix);
    printf("Sum of left diagonals: %d\n", sum);

    return 0;
}
