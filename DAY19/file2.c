#include <stdio.h>

int main() {
    int rows, cols;

        // Get matrix dimensions from user
            printf("Enter the number of rows: ");
                scanf("%d", &rows);
                    printf("Enter the number of columns: ");
                        scanf("%d", &cols);

                            int matrix1[rows][cols];
                                int matrix2[rows][cols];
                                    int difference[rows][cols];

                                        // Input elements for the first matrix
                                            printf("\nEnter elements of the first matrix:\n");
                                                for (int i = 0; i < rows; i++) {
                                                        for (int j = 0; j < cols; j++) {
                                                                    printf("Element [%d][%d]: ", i, j);
                                                                                scanf("%d", &matrix1[i][j]);
                                                                                        }
                                                                                            }

                                                                                                // Input elements for the second matrix
                                                                                                    printf("\nEnter elements of the second matrix:\n");
                                                                                                        for (int i = 0; i < rows; i++) {
                                                                                                                for (int j = 0; j < cols; j++) {
                                                                                                                            printf("Element [%d][%d]: ", i, j);
                                                                                                                                        scanf("%d", &matrix2[i][j]);
                                                                                                                                                }
                                                                                                                                                    }

                                                                                                                                                        // Perform matrix subtraction
                                                                                                                                                            for (int i = 0; i < rows; i++) {
                                                                                                                                                                    for (int j = 0; j < cols; j++) {
                                                                                                                                                                                difference[i][j] = matrix1[i][j] - matrix2[i][j];
                                                                                                                                                                                        }
                                                                                                                                                                                            }

                                                                                                                                                                                                // Display the resulting matrix
                                                                                                                                                                                                    printf("\nResultant Matrix (First - Second):\n");
                                                                                                                                                                                                        for (int i = 0; i < rows; i++) {
                                                                                                                                                                                                                for (int j = 0; j < cols; j++) {
                                                                                                                                                                                                                            printf("%d\t", difference[i][j]);
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                            printf("\n");
                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    