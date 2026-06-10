#include <stdio.h>

int main() {
    int rows, i, j;

        // Get the number of rows from the user
            printf("Enter number of rows: ");
                scanf("%d", &rows);

                    // Outer loop handles the rows, counting down from total rows to 1
                        for (i = rows; i >= 1; i--) {
                                
                                        // Inner loop prints the exact number of stars for the current row
                                                for (j = 1; j <= i; j++) {
                                                            printf("*");
                                                                    }
                                                                            
                                                                                    // Move to the next line after completing a row
                                                                                            printf("\n");
                                                                                                }

                                                                                                    return 0;
                                                                                                    }