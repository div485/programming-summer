#include <stdio.h>

int main() {
    int rows, i, j;

        // Get the number of rows from the user
            printf("Enter number of rows: ");
                scanf("%d", &rows);

                    // Outer loop to handle the number of rows
                        for (i = rows; i >= 1; i--) {
                                
                                        // Inner loop 1: Print leading spaces
                                                for (j = 1; j <= rows - i; j++) {
                                                            printf(" ");
                                                                    }

                                                                            // Inner loop 2: Print stars (*)
                                                                                    for (j = 1; j <= (2 * i - 1); j++) {
                                                                                                printf("*");
                                                                                                        }

                                                                                                                // Move to the next line after completing a row
                                                                                                                        printf("\n");
                                                                                                                            }

                                                                                                                                return 0;
                                                                                                                                }
                                                                                                                                