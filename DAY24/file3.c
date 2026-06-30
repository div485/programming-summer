#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
        char temp_sentence[500];
            char longest_word[100] = "";
                int max_length = 0;

                    // 1. Get input from the user
                        printf("Enter a sentence: ");
                            if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
                                    return 1;
                                        }

                                            // Remove the trailing newline character added by fgets
                                                sentence[strcspn(sentence, "\n")] = '\0';

                                                    // 2. Make a copy of the sentence because strtok modifies the original string
                                                        strcpy(temp_sentence, sentence);

                                                            // 3. Split the string into words using delimiters (space, comma, period)
                                                                char *word = strtok(temp_sentence, " ,.");

                                                                    while (word != NULL) {
                                                                            int current_length = strlen(word);

                                                                                    // 4. Update the longest word if the current one is larger
                                                                                            if (current_length > max_length) {
                                                                                                        max_length = current_length;
                                                                                                                    strcpy(longest_word, word);
                                                                                                                            }

                                                                                                                                    // Get the next word
                                                                                                                                            word = strtok(NULL, " ,.");
                                                                                                                                                }

                                                                                                                                                    // 5. Print the final results
                                                                                                                                                        if (max_length > 0) {
                                                                                                                                                                printf("\nOriginal sentence: %s\n", sentence);
                                                                                                                                                                        printf("Longest word:      %s\n", longest_word);
                                                                                                                                                                                printf("Length of word:    %d\n", max_length);
                                                                                                                                                                                    } else {
                                                                                                                                                                                            printf("No valid words found.\n");
                                                                                                                                                                                                }

                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                    }
                                                                                                                                                                                                    