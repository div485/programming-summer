#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

// Comparator function used by qsort to compare word lengths
int compare_word_lengths(const void *a, const void *b) {
    // Cast arguments to the expected string format (array of characters)
        size_t len_a = strlen((const char *)a);
            size_t len_b = strlen((const char *)b);
                
                    // For ascending order: returns negative if a < b, positive if a > b, 0 if equal
                        return (len_a > len_b) - (len_a < len_b);
                        }

                        int main() {
                            int num_words;
                                char words[MAX_WORDS][MAX_LENGTH];

                                    // Get total number of words from user
                                        printf("Enter the number of words: ");
                                            if (scanf("%d", &num_words) != 1 || num_words <= 0 || num_words > MAX_WORDS) {
                                                    printf("Invalid number of words.\n");
                                                            return 1;
                                                                }

                                                                    // Input the words
                                                                        printf("Enter %d words:\n", num_words);
                                                                            for (int i = 0; i < num_words; i++) {
                                                                                    scanf("%s", words[i]);
                                                                                        }

                                                                                            // Sort using standard qsort library function
                                                                                                qsort(words, num_words, sizeof(words[0]), compare_word_lengths);

                                                                                                    // Print sorted words
                                                                                                        printf("\nWords sorted by length:\n");
                                                                                                            for (int i = 0; i < num_words; i++) {
                                                                                                                    printf("%s\n", words[i]);
                                                                                                                        }

                                                                                                                            return 0;
                                                                                                                            }
                                                                                                                            