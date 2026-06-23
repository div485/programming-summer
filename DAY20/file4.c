#include <stdio.h>

int main() {
    int rows, cols;

        // Ask user for matrix dimensions
            printf("Enter the number of rows: ");
                scanf("%d", &rows);
                    printf("Enter the number of columns: ");
                        scanf("%d", &cols);

                            int matrix[rows][cols];

                                // Input matrix elements
                                    printf("\nEnter the elements of the matrix:\n");
                                        for (int i = 0; i < rows; i++) {
                                                for (int j = 0; j < cols; j++) {
                                                            printf("Element [%d][%d]: ", i, j);
                                                                        scanf("%d", &matrix[i][j]);
                                                                                }
                                                                                    }

                                                                                        // Logic to calculate and print column-wise sum
                                                                                            printf("\n--- Column-wise Sum ---\n");
                                                                                                for (int j = 0; j < cols; j++) {
                                                                                                        int col_sum = 0; // Reset sum for each new column
                                                                                                                for (int i = 0; i < rows; i++) {
                                                                                                                            col_sum += matrix[i][j]; // Accumulate sum down the column
                                                                                                                                    }
                                                                                                                                            printf("Sum of Column %d = %d\n", j + 1, col_sum);
                                                                                                                                                }

                                                                                                                                                    return 0;
                                                                                                                                                    }
                                                                                                                                                    