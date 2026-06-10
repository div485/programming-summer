#include <stdio.h>

// Function prototype
int sumOfDigits(int num);

int main() {
    int number, result;

        printf("Enter an integer: ");
            scanf("%d", &number);

                // Handle negative numbers by converting them to positive
                    if (number < 0) {
                            number = -number;
                                }

                                    result = sumOfDigits(number);

                                        printf("The sum of the digits is: %d\n", result);

                                            return 0;
                                            }

                                            // Recursive function to calculate the sum of digits
                                            int sumOfDigits(int num) {
                                                // Base case: if the number becomes 0, stop recursion
                                                    if (num == 0) {
                                                            return 0;
                                                                }
                                                                    
                                                                        // Recursive case: extract the last digit and add it to the sum of remaining digits
                                                                            return (num % 10) + sumOfDigits(num / 10);
                                                                            }