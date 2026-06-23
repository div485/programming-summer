#include <stdio.h>

int main() {
    int matrix[10][10];
        int i, j, size;
            int principal_sum = 0;
                int secondary_sum = 0;

                    // Get the size of the square matrix
                        printf("Enter the size of the square matrix (max 10): ");
                            scanf("%d", &size);

                                // Input matrix elements from the user
                                    printf("Enter the elements of the matrix:\n");
                                        for (i = 0; i < size; i++) {
                                                for (j = 0; j < size; j++) {
                                                            printf("Element [%d][%d]: ", i, j);
                                                                        scanf("%d", &matrix[i][j]);
                                                                                }
                                                                                    }

                                                                                        // Calculate diagonal sums using an efficient single loop
                                                                                            for (i = 0; i < size; i++) {
                                                                                                    principal_sum += matrix[i][i];                  // Elements where row == column
                                                                                                            secondary_sum += matrix[i][size - i - 1];      // Elements from top-right to bottom-left
                                                                                                                }

                                                                                                                    // Print the results
                                                                                                                        printf("\n--- Results ---\n");
                                                                                                                            printf("Sum of Principal Diagonal: %d\n", principal_sum);
                                                                                                                                printf("Sum of Secondary Diagonal: %d\n", secondary_sum);

                                                                                                                                    return 0;
                                                                                                                                    }
                                                                                                                                    