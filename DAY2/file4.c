#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

        // Ask user for input
            printf("Enter an integer: ");
                scanf("%d", &num);

                    // Store the original number in a temporary variable
                        originalNum = num;

                            // Reverse the number digit by digit
                                while (num != 0) {
                                        remainder = num % 10;          // Extract the last digit
                                                reversedNum = (reversedNum * 10) + remainder; // Append digit to reversed number
                                                        num /= 10;                    // Remove the last digit from original number
                                                            }

                                                                // Check if the original number matches the reversed number
                                                                    if (originalNum == reversedNum) {
                                                                            printf("%d is a palindrome number.\n", originalNum);
                                                                                } else {
                                                                                        printf("%d is not a palindrome number.\n", originalNum);
                                                                                            }

                                                                                                return 0;
                                                                                                }