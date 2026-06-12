#include <stdio.h>

// Function declaration
unsigned long long findFactorial(int n);

int main() {
    int number;
        
            printf("Enter a positive integer: ");
                scanf("%d", &number);

                    // Error handling for negative inputs
                        if (number < 0) {
                                printf("Error: Factorial of a negative number does not exist.\n");
                                    } else {
                                            unsigned long long result = findFactorial(number);
                                                    printf("Factorial of %d = %llu\n", number, result);
                                                        }

                                                            return 0;
                                                            }

                                                            // Function definition using a loop
                                                            unsigned long long findFactorial(int n) {
                                                                unsigned long long fact = 1;
                                                                    
                                                                        for (int i = 1; i <= n; i++) {
                                                                                fact *= i;
                                                                                    }
                                                                                        
                                                                                            return fact;
                                                                                            }
                                                                                            