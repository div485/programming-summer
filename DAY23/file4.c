#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define ASCII_SIZE 256

int main() {
    char str[MAX_SIZE];
        int freq[ASCII_SIZE] = {0}; // Initialize all character counts to 0
            int i, max_idx;

                printf("Enter a string: ");
                    // Safely read a string from standard input
                        if (fgets(str, sizeof(str), stdin) == NULL) {
                                printf("Error reading input.\n");
                                        return 1;
                                            }

                                                // Remove trailing newline character if captured by fgets
                                                    str[strcspn(str, "\n")] = '\0';

                                                        // Step 1: Count frequencies of each character
                                                            for (i = 0; str[i] != '\0'; i++) {
                                                                    // Cast to unsigned char to prevent negative indexing from extended ASCII
                                                                            unsigned char ch = str[i];
                                                                                    freq[ch]++;
                                                                                        }

                                                                                            // Step 2: Find the character with the maximum frequency
                                                                                                max_idx = 0;
                                                                                                    for (i = 0; i < ASCII_SIZE; i++) {
                                                                                                            if (freq[i] > freq[max_idx]) {
                                                                                                                        max_idx = i;
                                                                                                                                }
                                                                                                                                    }

                                                                                                                                        // Step 3: Print the result
                                                                                                                                            if (freq[max_idx] > 0) {
                                                                                                                                                    printf("The maximum occurring character is '%c' and it appears %d times.\n", max_idx, freq[max_idx]);
                                                                                                                                                        } else {
                                                                                                                                                                printf("The string is empty.\n");
                                                                                                                                                                    }

                                                                                                                                                                        return 0;
                                                                                                                                                                        }
                                                                                                                                                                        