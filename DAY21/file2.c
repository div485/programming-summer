#include <stdio.h>
#include <string.h>

// Function to reverse the string in place
void reverseString(char str[]) {
    int start = 0;
        int end = strlen(str) - 1;
            char temp;

                // Swap characters from both ends moving towards the center
                    while (start < end) {
                            temp = str[start];
                                    str[start] = str[end];
                                            str[end] = temp;

                                                    // Move the pointers
                                                            start++;
                                                                    end--;
                                                                        }
                                                                        }

                                                                        int main() {
                                                                            char str[100];

                                                                                printf("Enter a string: ");
                                                                                    // Reads a line of text, including spaces, safely preventing overflow
                                                                                        fgets(str, sizeof(str), stdin);

                                                                                            // Remove the trailing newline character added by fgets, if present
                                                                                                str[strcspn(str, "\n")] = '\0';

                                                                                                    printf("Original string: %s\n", str);

                                                                                                        // Call the function to reverse the string
                                                                                                            reverseString(str);

                                                                                                                printf("Reversed string: %s\n", str);

                                                                                                                    return 0;
                                                                                                                    }
                                                                                                                    