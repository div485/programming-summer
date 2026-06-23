#include <stdio.h>

int main() {
    int rows, cols;
        int first[100][100], second[100][100], sum[100][100];

            printf("Enter rows and columns (max 100): ");
                scanf("%d %d", &rows, &cols);

                    // Input elements for both matrices
                        for (int i = 0; i < rows; i++) {
                                for (int j = 0; j < cols; j++) {
                                            printf("Enter element for first matrix [%d][%d]: ", i, j);
                                                        scanf("%d", &first[i][j]);
                                                                }
                                                                    }
                                                                        for (int i = 0; i < rows; i++) {
                                                                                for (int j = 0; j < cols; j++) {
                                                                                            printf("Enter element for second matrix [%d][%d]: ", i, j);
                                                                                                        scanf("%d", &second[i][j]);
                                                                                                                }
                                                                                                                    }

                                                                                                                        // Add and Display
                                                                                                                            printf("\nResultant Matrix:\n");
                                                                                                                                for (int i = 0; i < rows; i++) {
                                                                                                                                        for (int j = 0; j < cols; j++) {
                                                                                                                                                    sum[i][j] = first[i][j] + second[i][j];
                                                                                                                                                                printf("%d\t", sum[i][j]);
                                                                                                                                                                        }
                                                                                                                                                                                printf("\n");
                                                                                                                                                                                    }
                                                                                                                                                                                        return 0;
                                                                                                                                                                                        }
                                                                                                                                                                                        