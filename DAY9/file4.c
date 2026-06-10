#include <stdio.h>

int main() {
    int size, i, j;

        // Get the size of the square side from the user
            printf("Enter the side length of the square: ");
                scanf("%d", &size);

                    // Outer loop for rows
                        for (i = 1; i <= size; i++) {
                                // Inner loop for columns
                                        for (j = 1; j <= size; j++) {
                                                    // Print star only if it is the first/last row or first/last column
                                                                if (i == 1 || i == size || j == 1 || j == size) {
                                                                                printf("* ");
                                                                                            } else {
                                                                                                            printf("  "); // Print two spaces for the hollow interior
                                                                                                                        }
                                                                                                                                }
                                                                                                                                        // Move to the next line after completing a row
                                                                                                                                                printf("\n");
                                                                                                                                                    }

                                                                                                                                                        return 0;
                                                                                                                                                        }
                                                                                                                                                        