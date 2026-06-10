#include <stdio.h>

int main() {
    int rows, i, j;

        // Ask user for the number of rows
            printf("Enter the number of rows: ");
                scanf("%d", &rows);

                    // Outer loop for each row
                        for (i = 1; i <= rows; i++) {
                                
                                        // 1. Inner loop to print leading spaces for centering
                                                for (j = 1; j <= rows - i; j++) {
                                                            printf("  "); // Two spaces keep the formatting clean
                                                                    }

                                                                            // 2. Inner loop to print increasing numbers
                                                                                    for (j = 1; j <= i; j++) {
                                                                                                printf("%d ", j);
                                                                                                        }

                                                                                                                // 3. Inner loop to print decreasing numbers
                                                                                                                        for (j = i - 1; j >= 1; j--) {
                                                                                                                                    printf("%d ", j);
                                                                                                                                            }

                                                                                                                                                    // Move to the next line after finishing a row
                                                                                                                                                            printf("\n");
                                                                                                                                                                }

                                                                                                                                                                    return 0;
                                                                                                                                                                    }
                                                                                                                                                                    