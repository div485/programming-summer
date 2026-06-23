#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

char findFirstNonRepeating(const char *str) {
    int count[MAX_CHARS] = {0};
        int i;

            // Step 1: Build the frequency array
                for (i = 0; str[i] != '\0'; i++) {
                        count[(unsigned char)str[i]]++;
                            }

                                // Step 2: Scan the string again to find the first unique character
                                    for (i = 0; str[i] != '\0'; i++) {
                                            if (count[(unsigned char)str[i]] == 1) {
                                                        return str[i];
                                                                }
                                                                    }

                                                                        // Return a null terminator if every character repeats
                                                                            return '\0';
                                                                            }

                                                                            int main() {
                                                                                char str[100];
                                                                                    
                                                                                        printf("Enter a string: ");
                                                                                            // Reads a line of text, including spaces
                                                                                                fgets(str, sizeof(str), stdin);
                                                                                                    
                                                                                                        // Remove trailing newline character from fgets if present
                                                                                                            str[strcspn(str, "\n")] = '\0';

                                                                                                                char result = findFirstNonRepeating(str);

                                                                                                                    if (result != '\0') {
                                                                                                                            printf("The first non-repeating character is: '%c'\n", result);
                                                                                                                                } else {
                                                                                                                                        printf("All characters repeat or the string is empty.\n");
                                                                                                                                            }

                                                                                                                                                return 0;
                                                                                                                                                }
                                                                                                                                                