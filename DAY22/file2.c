#include <stdio.h>
#include <ctype.h>

int count_words(const char *str) {
    int count = 0;
        int in_word = 0; // Tracks if we are currently inside a word

            while (*str) {
                    // isspace checks for ' ', '\t', '\n', '\r', etc.
                            if (isspace((unsigned char)*str)) {
                                        in_word = 0; // We hit a space, so we are no longer in a word
                                                } else if (in_word == 0) {
                                                            in_word = 1; // We hit a non-space character; a new word starts
                                                                        count++;
                                                                                }
                                                                                        str++; // Move to the next character
                                                                                            }

                                                                                                return count;
                                                                                                }

                                                                                                int main() {
                                                                                                    char sentence[1000];

                                                                                                        printf("Enter a sentence: ");
                                                                                                            // fgets safely reads the entire line, including spaces
                                                                                                                if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
                                                                                                                        int words = count_words(sentence);
                                                                                                                                printf("Total number of words: %d\n", words);
                                                                                                                                    }

                                                                                                                                        return 0;
                                                                                                                                        }
                                                                                                                                        