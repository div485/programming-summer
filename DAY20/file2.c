#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
        int isSymmetric = 1; // Flag variable: 1 means true, 0 means false

            // 1. Get dimensions from user
                printf("Enter number of rows and columns: ");
                    if (scanf("%d %d", &rows, &cols) != 2) {
                            printf("Invalid input.\n");
                                    return 1;
                                        }

                                            // 2. Early exit condition: A symmetric matrix MUST be a square matrix
                                                if (rows != cols) {
                                                        printf("The matrix is not symmetric (It must be a square matrix).\n");
                                                                return 0;
                                                                    }

                                                                        int matrix[rows][cols];

                                                                            // 3. Input matrix elements
                                                                                printf("Enter elements of the %dx%d matrix:\n", rows, cols);
                                                                                    for (int i = 0; i < rows; i++) {
                                                                                            for (int j = 0; j < cols; j++) {
                                                                                                        if (scanf("%d", &matrix[i][j]) != 1) {
                                                                                                                        printf("Invalid element input.\n");
                                                                                                                                        return 1;
                                                                                                                                                    }
                                                                                                                                                            }
                                                                                                                                                                }

                                                                                                                                                                    // 4. Check for symmetry 
                                                                                                                                                                        // Optimization: Only loop through the upper triangle (j > i)
                                                                                                                                                                            for (int i = 0; i < rows; i++) {
                                                                                                                                                                                    for (int j = i + 1; j < cols; j++) {
                                                                                                                                                                                                if (matrix[i][j] != matrix[j][i]) {
                                                                                                                                                                                                                isSymmetric = 0; // Mismatch found
                                                                                                                                                                                                                                break;           // Exit the inner loop
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                            if (!isSymmetric) {
                                                                                                                                                                                                                                                                        break; // Exit the outer loop
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                        // 5. Output the result
                                                                                                                                                                                                                                                                                            if (isSymmetric) {
                                                                                                                                                                                                                                                                                                    printf("\nThe given matrix is a Symmetric Matrix.\n");
                                                                                                                                                                                                                                                                                                        } else {
                                                                                                                                                                                                                                                                                                                printf("\nThe given matrix is NOT a Symmetric Matrix.\n");
                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                        