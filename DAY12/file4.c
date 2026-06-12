#include <stdio.h>

// Function declaration
int isPerfect(int num);

int main() {
    int number;

        // Get input from the user
            printf("Enter a positive integer: ");
                scanf("%d", &number);

                    // Call the function and display the result
                        if (isPerfect(number)) {
                                printf("%d is a perfect number.\n", number);
                                    } else {
                                            printf("%d is not a perfect number.\n", number);
                                                }

                                                    return 0;
                                                    }

                                                    /**
                                                     * Function to check whether a given number is a perfect number.
                                                      * Returns 1 if perfect, 0 otherwise.
                                                       */
                                                       int isPerfect(int num) {
                                                           // Perfect numbers must be greater than 1
                                                               if (num <= 1) {
                                                                       return 0;
                                                                           }

                                                                               int sum = 0;

                                                                                   // Iterate up to half of the number for efficiency
                                                                                       for (int i = 1; i <= num / 2; i++) {
                                                                                               if (num % i == 0) {
                                                                                                           sum += i; // Add divisor to sum
                                                                                                                   }
                                                                                                                       }

                                                                                                                           // If sum of proper divisors equals the number, it is perfect
                                                                                                                               return (sum == num);
                                                                                                                               }
                                                                                                                               