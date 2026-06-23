#include <stdio.h>

// Function to remove all spaces from a string in-place
void removeSpaces(char *str) {
    int read = 0;
        int write = 0;

            // Loop until the end of the string
                while (str[read] != '\0') {
                        // If the current character is not a space, copy it
                                if (str[read] != ' ') {
                                            str[write] = str[read];
                                                        write++;
                                                                }
                                                                        read++;
                                                                            }
                                                                                
                                                                                    // Explicitly add the null terminator to terminate the modified string
                                                                                        str[write] = '\0';
                                                                                        }

                                                                                        int main() {
                                                                                            // Character array initialized with text containing spaces
                                                                                                char text[] = " Learn C   Programming  ";

                                                                                                    printf("Original string: '%s'\n", text);

                                                                                                        // Call the function to modify the string in-place
                                                                                                            removeSpaces(text);

                                                                                                                printf("Modified string: '%s'\n", text);

                                                                                                                    return 0;
                                                                                                                    }
                                                                                                                    