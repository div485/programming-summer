#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
        int left, right, is_palindrome = 1;

            // Prompt user for input
                printf("Enter a string: ");
                    fgets(str, sizeof(str), stdin);

                        // Remove the trailing newline character added by fgets
                            int length = strlen(str);
                                if (length > 0 && str[length - 1] == '\n') {
                                        str[length - 1] = '\0';
                                                length--;
                                                    }

                                                        // Initialize two pointers
                                                            left = 0;
                                                                right = length - 1;

                                                                    // Compare characters from both ends moving inward
                                                                        while (left < right) {
                                                                                if (str[left] != str[right]) {
                                                                                            is_palindrome = 0; // Mismatch found
                                                                                                        break;
                                                                                                                }
                                                                                                                        left++;
                                                                                                                                right--;
                                                                                                                                    }

                                                                                                                                        // Output the result
                                                                                                                                            if (is_palindrome) {
                                                                                                                                                    printf("\"%s\" is a palindrome string.\n", str);
                                                                                                                                                        } else {
                                                                                                                                                                printf("\"%s\" is NOT a palindrome string.\n", str);
                                                                                                                                                                    }

                                                                                                                                                                        return 0;
                                                                                                                                                                        }
                                                                                                                                                                        