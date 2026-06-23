#include <stdio.h>

int main() {
    // Declare a character array (string) to hold up to 99 characters + 1 null terminator
        char sequence[100];
            int i = 0;

                // Prompt the user for input
                    printf("Enter a sequence of characters: ");
                        
                            // Read the string safely (stops at newline, protects against buffer overflow)
                                // We use %99[^\n] to capture spaces and limit input size
                                    scanf("%99[^\n]", sequence);

                                        printf("\nYou entered the sequence: %s\n", sequence);
                                            printf("Processing individual characters:\n");

                                                // Loop through the sequence until the null terminator '\0' is reached
                                                    while (sequence[i] != '\0') {
                                                            printf("Character at index %d: '%c'\n", i, sequence[i]);
                                                                    i++;
                                                                        }

                                                                            return 0;
                                                                            }
                                                                            