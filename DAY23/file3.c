#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int check_anagram(char str1[], char str2[]) {
    int count[256] = {0}; // Array to store frequency of 256 ASCII characters
        int i = 0;

            // If lengths are not equal, they cannot be anagrams
                if (strlen(str1) != strlen(str2)) {
                        return 0;
                            }

                                // Increment count for first string and decrement for second string
                                    for (i = 0; str1[i] != '\0'; i++) {
                                            count[(unsigned char)str1[i]]++;
                                                    count[(unsigned char)str2[i]]--;
                                                        }

                                                            // If all frequencies are zero, then strings are anagrams
                                                                for (i = 0; i < 256; i++) {
                                                                        if (count[i] != 0) {
                                                                                    return 0;
                                                                                            }
                                                                                                }

                                                                                                    return 1;
                                                                                                    }

                                                                                                    int main() {
                                                                                                        char str1[100], str2[100];

                                                                                                            // Read user inputs
                                                                                                                printf("Enter first string: ");
                                                                                                                    scanf("%s", str1);

                                                                                                                        printf("Enter second string: ");
                                                                                                                            scanf("%s", str2);

                                                                                                                                // Call function and display result
                                                                                                                                    if (check_anagram(str1, str2)) {
                                                                                                                                            printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
                                                                                                                                                } else {
                                                                                                                                                        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
                                                                                                                                                            }

                                                                                                                                                                return 0;
                                                                                                                                                                }
                                                                                                                                                                