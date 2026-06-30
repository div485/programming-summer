#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

// Function to find and print common characters
void findCommonCharacters(char *str1, char *str2) {
    int freq1[MAX_CHAR] = {0};
        int freq2[MAX_CHAR] = {0};
            int i;

                // Count character frequencies in the first string
                    for (i = 0; str1[i] != '\0'; i++) {
                            freq1[(unsigned char)str1[i]]++;
                                }

                                    // Count character frequencies in the second string
                                        for (i = 0; str2[i] != '\0'; i++) {
                                                freq2[(unsigned char)str2[i]]++;
                                                    }

                                                        printf("Common characters: ");
                                                            int found = 0;

                                                                // Compare frequencies and print the minimum common occurrences
                                                                    for (i = 0; i < MAX_CHAR; i++) {
                                                                            if (freq1[i] > 0 && freq2[i] > 0) {
                                                                                        // Find the minimum number of times the character appears in both
                                                                                                    int min_count = (freq1[i] < freq2[i]) ? freq1[i] : freq2[i];
                                                                                                                
                                                                                                                            for (int j = 0; j < min_count; j++) {
                                                                                                                                            printf("%c ", i);
                                                                                                                                                        }
                                                                                                                                                                    found = 1;
                                                                                                                                                                            }
                                                                                                                                                                                }

                                                                                                                                                                                    if (!found) {
                                                                                                                                                                                            printf("None");
                                                                                                                                                                                                }
                                                                                                                                                                                                    printf("\n");
                                                                                                                                                                                                    }

                                                                                                                                                                                                    int main() {
                                                                                                                                                                                                        char str1[100], str2[100];

                                                                                                                                                                                                            // Read input strings from the user
                                                                                                                                                                                                                printf("Enter the first string: ");
                                                                                                                                                                                                                    fgets(str1, sizeof(str1), stdin);
                                                                                                                                                                                                                        // Remove trailing newline character added by fgets
                                                                                                                                                                                                                            str1[strcspn(str1, "\n")] = '\0';

                                                                                                                                                                                                                                printf("Enter the second string: ");
                                                                                                                                                                                                                                    fgets(str2, sizeof(str2), stdin);
                                                                                                                                                                                                                                        str2[strcspn(str2, "\n")] = '\0';

                                                                                                                                                                                                                                            findCommonCharacters(str1, str2);

                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                