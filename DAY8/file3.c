#include <stdio.h>

int main() {
    int i, j;
        int rows = 4; // Total number of rows to print

            // Outer loop handles the number of rows
                for (i = 1; i <= rows; i++) {
                        
                                // Inner loop prints characters starting from 'A' up to the current row number
                                        for (j = 1; j <= i; j++) {
                                                    printf("%c", 'A' + j - 1);
                                                            }
                                                                    
                                                                            // Move to the next line after printing each row
                                                                                    printf("\n");
                                                                                        }

                                                                                            return 0;
                                                                                            }