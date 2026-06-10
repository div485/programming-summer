#include <stdio.h>

int main() {
    int rows = 4; // Total number of rows for the pattern

        // Outer loop handles the rows
            for (int i = 1; i <= rows; i++) {
                    
                            // Inner loop handles printing the characters in each row
                                    for (int j = 1; j <= i; j++) {
                                                // 'A' + i - 1 gives 'A' for row 1, 'B' for row 2, etc.
                                                            printf("%c", 'A' + i - 1);
                                                                    }
                                                                            
                                                                                    // Move to the next line after completing a row
                                                                                            printf("\n");
                                                                                                }

                                                                                                    return 0;
                                                                                                    }
                                                                                                    