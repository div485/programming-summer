#include <stdio.h>

// Function declaration
unsigned long long factorial(int n);

int main() {
    int num;
        
            printf("Enter a positive integer: ");
                if (scanf("%d", &num) != 1) {
                        printf("Invalid input.\n");
                                return 1;
                                    }
                                        
                                            // Factorial is not defined for negative numbers
                                                if (num < 0) {
                                                        printf("Error: Factorial of a negative number does not exist.\n");
                                                            } else if (num > 20) {
                                                                    // unsigned long long overflows if num > 20
                                                                            printf("Error: Input too large. Please enter a number between 0 and 20.\n");
                                                                                } else {
                                                                                        printf("Factorial of %d = %llu\n", num, factorial(num));
                                                                                            }
                                                                                                
                                                                                                    return 0;
                                                                                                    }

                                                                                                    // Recursive function to calculate factorial
                                                                                                    unsigned long long factorial(int n) {
                                                                                                        // Base case: factorial of 0 or 1 is 1
                                                                                                            if (n <= 1) {
                                                                                                                    return 1;
                                                                                                                        }
                                                                                                                            // Recursive case: n! = n * (n - 1)!
                                                                                                                                return n * factorial(n - 1);
                                                                                                                                }