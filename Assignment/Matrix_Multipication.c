/*
Write a program to find out matrix multiplication and transpose of a matrix using 2D arrays.
*/


#include <stdio.h>

// Function to perform matrix multiplication
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int r1, int c1, int r2, int c2) {
    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible: Number of columns in first matrix must equal number of rows in second.\n");
        return;
    }

    // Initialize result matrix with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to find the transpose of a matrix
void transposeMatrix(int matrix[][10], int transpose[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[10][10], mat2[10][10], result_mul[10][10], transpose_mat[10][10];
    int r1, c1, r2, c2;

    // Input for Matrix 1
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for Matrix 2
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix Multiplication
    printf("\nMatrix Multiplication:\n");
    multiplyMatrices(mat1, mat2, result_mul, r1, c1, r2, c2);
    if (c1 == r2) { // Only print if multiplication was possible
        printMatrix(result_mul, r1, c2);
    }

    // Transpose of Matrix 1
    printf("\nTranspose of Matrix 1:\n");
    transposeMatrix(mat1, transpose_mat, r1, c1);
    printMatrix(transpose_mat, c1, r1); // Transpose has dimensions c1 x r1

    // Transpose of Matrix 2
    printf("\nTranspose of Matrix 2:\n");
    transposeMatrix(mat2, transpose_mat, r2, c2);
    printMatrix(transpose_mat, c2, r2); // Transpose has dimensions c2 x r2

    return 0;
}