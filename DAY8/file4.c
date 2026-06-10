#include <stdio.h>

int main() {
    int i, j;
        
            // Loop for the number of rows
                for(i = 1; i <= 4; i++) {
                        // Loop to print the number 'i' exactly 'i' times
                                for(j = 1; j <= i; j++) {
                                            printf("%d", i);
                                                    }
                                                            // Move to the next line after each row
                                                                    printf("\n");
                                                                        }
                                                                            
                                                                                return 0;
                                                                                }