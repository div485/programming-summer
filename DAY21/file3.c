#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
        int vowels = 0;
            int consonants = 0;

                // Read a line of text safely from the user
                    printf("Enter a string: ");
                        fgets(str, sizeof(str), stdin);

                            // Loop through each character until the null terminator
                                for (int i = 0; str[i] != '\0'; i++) {
                                        char ch = str[i];

                                                // Check if the character is an alphabet letter
                                                        if (isalpha((unsigned char)ch)) {
                                                                    // Convert to lowercase to minimize comparison checks
                                                                                ch = tolower((unsigned char)ch);

                                                                                            // Check for vowels
                                                                                                        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                                                                                                                        vowels++;
                                                                                                                                    } else {
                                                                                                                                                    // If it is an alphabet letter but not a vowel, it is a consonant
                                                                                                                                                                    consonants++;
                                                                                                                                                                                }
                                                                                                                                                                                        }
                                                                                                                                                                                            }

                                                                                                                                                                                                // Display the results
                                                                                                                                                                                                    printf("Total Vowels: %d\n", vowels);
                                                                                                                                                                                                        printf("Total Consonants: %d\n", consonants);

                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            