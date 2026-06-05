#include <stdio.h>

int main() {
    int number, remainder, sum = 0;

        // Ask the user to input an integer
            printf("Enter an integer number: ");
                scanf("%d", &number);

                    // Loop to isolate and add each individual digit
                        while (number != 0) {
                                remainder = number % 10;  // Get the last digit
                                        sum = sum + remainder;    // Add it to your total sum
                                                number = number / 10;     // Remove the last digit from the number
                                                    }

                                                        // Print the final result
                                                            printf("Sum of the digits: %d\n", sum);

                                                                return 0;
                                                                }