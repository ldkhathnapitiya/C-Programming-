#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}


void displayMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {
        {3, 2, 4},
        {2, 6, 3},
        {5, 8, 7}
    };

    int matrix2[ROWS][COLS] = {
        {1, 4, 6},
        {4, 3, 2},
        {5, 7, 8}
    };

    int resultMatrix[ROWS][COLS];


    addMatrices(matrix1, matrix2, resultMatrix);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nSum of the matrices:\n");
    displayMatrix(resultMatrix);

    return 0;
}
