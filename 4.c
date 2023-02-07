//4. Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>

#define ROWS 3
#define COLS 3

int sum_right_diagonal(int matrix[][COLS]){
    int i, sum = 0;
    for(i = 0; i < ROWS; i++){
        sum += matrix[i][i];
    }
    return sum;
}

int main(){
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int sum = sum_right_diagonal(matrix);
    printf("Sum of right diagonals: %d\n", sum);

    return 0;
}
