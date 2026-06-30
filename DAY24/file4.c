#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to remove duplicate characters in-place
void removeDuplicates(char *str) {
    // Array to track if an ASCII character has been seen (256 possible characters)
        bool seen[256] = { false };
            
                int writeIndex = 0; // Tracks position to write the next unique character
                    int readIndex = 0;  // Tracks position to read the current character

                        while (str[readIndex] != '\0') {
                                unsigned char ch = str[readIndex];

                                        // If the character hasn't been seen yet, keep it
                                                if (!seen[ch]) {
                                                            seen[ch] = true;          // Mark character as seen
                                                                        str[writeIndex] = str[readIndex]; // Copy character to unique position
                                                                                    writeIndex++;             // Move the write pointer forward
                                                                                            }
                                                                                                    readIndex++; // Always move the read pointer forward
                                                                                                        }

                                                                                                            // Null-terminate the modified string to close it properly
                                                                                                                str[writeIndex] = '\0';
                                                                                                                }

                                                                                                                int main() {
                                                                                                                    // Example test string (must be a modifiable character array, not a string literal)
                                                                                                                        char text[] = "programming language";

                                                                                                                            printf("Original String: %s\n", text);

                                                                                                                                // Call the function to modify the string in-place
                                                                                                                                    removeDuplicates(text);

                                                                                                                                        printf("Result String  : %s\n", text);

                                                                                                                                            return 0;
                                                                                                                                            }
                                                                                                                                            