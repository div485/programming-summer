#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
        char temp[MAX_LENGTH];
            int n, i, j;

                // 1. Get the number of names from the user
                    printf("Enter the number of names: ");
                        if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_NAMES) {
                                printf("Invalid number of names.\n");
                                        return 1;
                                            }

                                                // Clear the input buffer to prevent issues with subsequent inputs
                                                    while (getchar() != '\n');

                                                        // 2. Read the names from the user
                                                            printf("Enter %d names (one per line):\n", n);
                                                                for (i = 0; i < n; i++) {
                                                                        // Read string including spaces, up to MAX_LENGTH - 1 characters
                                                                                if (fgets(names[i], MAX_LENGTH, stdin) != NULL) {
                                                                                            // Remove trailing newline character added by fgets
                                                                                                        names[i][strcspn(names[i], "\n")] = '\0';
                                                                                                                }
                                                                                                                    }

                                                                                                                        // 3. Sort the names using the Bubble Sort algorithm
                                                                                                                            for (i = 0; i < n - 1; i++) {
                                                                                                                                    for (j = 0; j < n - i - 1; j++) {
                                                                                                                                                // Compare adjacent strings alphabetically
                                                                                                                                                            if (strcmp(names[j], names[j + 1]) > 0) {
                                                                                                                                                                            // Swap names[j] and names[j + 1] if they are in the wrong order
                                                                                                                                                                                            strcpy(temp, names[j]);
                                                                                                                                                                                                            strcpy(names[j], names[j + 1]);
                                                                                                                                                                                                                            strcpy(names[j + 1], temp);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                        // 4. Output the sorted list
                                                                                                                                                                                                                                                            printf("\nNames sorted in alphabetical order:\n");
                                                                                                                                                                                                                                                                for (i = 0; i < n; i++) {
                                                                                                                                                                                                                                                                        printf("%s\n", names[i]);
                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                