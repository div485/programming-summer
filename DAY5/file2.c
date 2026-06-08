#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, sum = 0;
        long fact;

            // Get input from the user
                printf("Enter an integer to check: ");
                    scanf("%d", &num);

                        // Copy the original number to preserve its value
                            originalNum = num;

                                // Process each digit of the number
                                    while (num > 0) {
                                            // Extract the last digit
                                                    lastDigit = num % 10;

                                                            // Calculate the factorial of the last digit
                                                                    fact = 1;
                                                                            for (int i = 1; i <= lastDigit; i++) {
                                                                                        fact = fact * i;
                                                                                                }

                                                                                                        // Add the factorial to the running sum
                                                                                                                sum = sum + fact;

                                                                                                                        // Remove the last digit from the number
                                                                                                                                num = num / 10;
                                                                                                                                    }

                                                                                                                                        // Compare the sum of factorials with the original number
                                                                                                                                            if (sum == originalNum) {
                                                                                                                                                    printf("%d is a strong number.\n", originalNum);
                                                                                                                                                        } else {
                                                                                                                                                                printf("%d is NOT a strong number.\n", originalNum);
                                                                                                                                                                    }

                                                                                                                                                                        return 0;
                                                                                                                                                                        }