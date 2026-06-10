#include <stdio.h>

int main() {
    int i, j, rows;

        // Prompt user for the size of the pyramid
            printf("Enter the number of rows: ");
                scanf("%d", &rows);

                    // Outer loop handles the number of rows
                        for (i = 1; i <= rows; i++) {
                                
                                        // First inner loop prints the leading spaces
                                                for (j = 1; j <= rows - i; j++) {
                                                            printf(" ");
                                                                    }

                                                                            // Second inner loop prints the stars
                                                                                    for (j = 1; j <= (2 * i - 1); j++) {
                                                                                                printf("*");
                                                                                                        }

                                                                                                                // Move to the next line after completing a row
                                                                                                                        printf("\n");
                                                                                                                            }

                                                                                                                                return 0;
                                                                                                                                }
                                                                                                                                