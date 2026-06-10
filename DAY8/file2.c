#include <stdio.h>

int main() {
    int rows = 4; // Number of rows for the requested pattern

        // Outer loop handles the number of rows
            for (int i = 1; i <= rows; i++) {
                    
                            // Inner loop prints numbers from 1 up to the current row number
                                    for (int j = 1; j <= i; j++) {
                                                printf("%d ", j);
                                                        }
                                                                
                                                                        // Move to the next line after completing a row
                                                                                printf("\n");
                                                                                    }