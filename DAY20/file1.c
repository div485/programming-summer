#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
        int a[10][10], b[10][10], result[10][10];

            // Input dimensions for the first matrix
                printf("Enter rows and columns for the first matrix: ");
                    scanf("%d %d", &r1, &c1);

                        // Input dimensions for the second matrix
                            printf("Enter rows and columns for the second matrix: ");
                                scanf("%d %d", &r2, &c2);

                                    // Rule: Columns of first matrix must equal rows of second matrix
                                        if (c1 != r2) {
                                                printf("Error! Column of first matrix must equal row of second matrix.\n");
                                                        return 1;
                                                            }

                                                                // Input elements of the first matrix
                                                                    printf("\nEnter elements of matrix 1:\n");
                                                                        for (int i = 0; i < r1; ++i) {
                                                                                for (int j = 0; j < c1; ++j) {
                                                                                            printf("Enter element a%d%d: ", i + 1, j + 1);
                                                                                                        scanf("%d", &a[i][j]);
                                                                                                                }
                                                                                                                    }

                                                                                                                        // Input elements of the second matrix
                                                                                                                            printf("\nEnter elements of matrix 2:\n");
                                                                                                                                for (int i = 0; i < r2; ++i) {
                                                                                                                                        for (int j = 0; j < c2; ++j) {
                                                                                                                                                    printf("Enter element b%d%d: ", i + 1, j + 1);
                                                                                                                                                                scanf("%d", &b[i][j]);
                                                                                                                                                                        }
                                                                                                                                                                            }

                                                                                                                                                                                // Initializing elements of result matrix to 0
                                                                                                                                                                                    for (int i = 0; i < r1; ++i) {
                                                                                                                                                                                            for (int j = 0; j < c2; ++j) {
                                                                                                                                                                                                        result[i][j] = 0;
                                                                                                                                                                                                                }
                                                                                                                                                                                                                    }

                                                                                                                                                                                                                        // Multiplying matrix a and b and storing in result
                                                                                                                                                                                                                            for (int i = 0; i < r1; ++i) {
                                                                                                                                                                                                                                    for (int j = 0; j < c2; ++j) {
                                                                                                                                                                                                                                                for (int k = 0; k < c1; ++k) {
                                                                                                                                                                                                                                                                result[i][j] += a[i][k] * b[k][j];
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                            // Displaying the result matrix
                                                                                                                                                                                                                                                                                                printf("\nResultant Matrix:\n");
                                                                                                                                                                                                                                                                                                    for (int i = 0; i < r1; ++i) {
                                                                                                                                                                                                                                                                                                            for (int j = 0; j < c2; ++j) {
                                                                                                                                                                                                                                                                                                                        printf("%d\t", result[i][j]);
                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                        printf("\n");
                                                                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                