#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10];
        int rows, cols;

            // 1. Get matrix dimensions from user
                printf("Enter number of rows and columns: ");
                    scanf("%d %d", &rows, &cols);

                        // 2. Input matrix elements
                            printf("\nEnter elements of the matrix:\n");
                                for (int i = 0; i < rows; ++i) {
                                        for (int j = 0; j < cols; ++j) {
                                                    printf("Enter element at [%d][%d]: ", i, j);
                                                                scanf("%d", &matrix[i][j]);
                                                                        }
                                                                            }

                                                                                // 3. Print the original matrix
                                                                                    printf("\nOriginal Matrix:\n");
                                                                                        for (int i = 0; i < rows; ++i) {
                                                                                                for (int j = 0; j < cols; ++j) {
                                                                                                            printf("%d\t", matrix[i][j]);
                                                                                                                    }
                                                                                                                            printf("\n");
                                                                                                                                }

                                                                                                                                    // 4. Compute the transpose matrix
                                                                                                                                        // If original is rows x cols, transpose will be cols x rows
                                                                                                                                            for (int i = 0; i < rows; ++i) {
                                                                                                                                                    for (int j = 0; j < cols; ++j) {
                                                                                                                                                                transpose[j][i] = matrix[i][j];
                                                                                                                                                                        }
                                                                                                                                                                            }

                                                                                                                                                                                // 5. Print the transposed matrix
                                                                                                                                                                                    printf("\nTransposed Matrix:\n");
                                                                                                                                                                                        for (int i = 0; i < cols; ++i) {
                                                                                                                                                                                                for (int j = 0; j < rows; ++j) {
                                                                                                                                                                                                            printf("%d\t", transpose[i][j]);
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                            printf("\n");
                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                    