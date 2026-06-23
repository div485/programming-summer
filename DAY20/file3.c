#include <stdio.h>

int main() {
    int rows, cols;

        // Get matrix dimensions from the user
            printf("Enter the number of rows: ");
                scanf("%d", &rows);
                    printf("Enter the number of columns: ");
                        scanf("%col", &cols);

                            int matrix[rows][cols];

                                // Input matrix elements
                                    printf("Enter the elements of the matrix:\n");
                                        for (int i = 0; i < rows; i++) {
                                                for (int j = 0; j < cols; j++) {
                                                            printf("Element [%d][%d]: ", i, j);
                                                                        scanf("%d", &matrix[i][j]);
                                                                                }
                                                                                    }

                                                                                        // Calculate and print row-wise sum
                                                                                            printf("\n--- Row-wise Sum ---\n");
                                                                                                for (int i = 0; i < rows; i++) {
                                                                                                        int rowSum = 0; // Reset sum for each new row
                                                                                                                
                                                                                                                        for (int j = 0; j < cols; j++) {
                                                                                                                                    rowSum += matrix[i][j]; // Accumulate elements in current row
                                                                                                                                            }
                                                                                                                                                    
                                                                                                                                                            printf("Sum of Row %d = %d\n", i + 1, rowSum);
                                                                                                                                                                }

                                                                                                                                                                    return 0;
                                                                                                                                                                    }
                                                                                                                                                                    