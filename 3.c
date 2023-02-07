//3. Write a program in C to find the transpose of a given matrix.

#include<stdio.h>

#define ROWS 3
#define COLS 3

void transpose(int matrix[][COLS], int transposed[][ROWS]){
    int i, j;
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main(){
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposed[COLS][ROWS];

    transpose(matrix, transposed);

    int i, j;
    for(i = 0; i < COLS; i++){
        for(j = 0; j < ROWS; j++){
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
