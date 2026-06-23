#include <stdio.h>

int main() {
    char str[100];
        int length = 0;

            // 1. Get input string from the user
                printf("Enter a string: ");
                    fgets(str, sizeof(str), stdin);

                        // 2. Loop until the null character '\0' is reached
                            while (str[length] != '\0') {
                                    length++;
                                        }

                                            // 3. Remove the trailing newline character if captured by fgets
                                                if (length > 0 && str[length - 1] == '\n') {
                                                        str[length - 1] = '\0';
                                                                length--;
                                                                    }

                                                                        // 4. Output the final length
                                                                            printf("Length of the string is: %d\n", length);

                                                                                return 0;
                                                                                }
                                                                                