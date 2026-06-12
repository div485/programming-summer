#include <stdio.h>

// Function to check if an integer is a palindrome
// Returns 1 if true, 0 if false
int isPalindromeNumber(int num) {
    int reversed = 0;
        int remainder;
            int original = num;

                // Negative numbers are not palindromes (due to the minus sign)
                    if (num < 0) {
                            return 0;
                                }

                                    // Reverse the number digit by digit
                                        while (num != 0) {
                                                remainder = num % 10;
                                                        reversed = (reversed * 10) + remainder;
                                                                num /= 10;
                                                                    }

                                                                        // If the reversed number matches the original, it is a palindrome
                                                                            return (original == reversed);
                                                                            }

                                                                            int main() {
                                                                                int number;

                                                                                    printf("Enter an integer: ");
                                                                                        scanf("%d", &number);

                                                                                            if (isPalindromeNumber(number)) {
                                                                                                    printf("%d is a palindrome.\n", number);
                                                                                                        } else {
                                                                                                                printf("%d is not a palindrome.\n", number);
                                                                                                                    }

                                                                                                                        return 0;
                                                                                                                        }
                                                                                                                        