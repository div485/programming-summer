#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
        int i = 0;

            printf("Enter a string in lowercase: ");
                // Reads a full line of text including spaces safely
                    fgets(str, sizeof(str), stdin);

                        // Loop through the string until the null terminator is reached
                            while (str[i] != '\0') {
                                    // Convert character to uppercase using toupper()
                                            str[i] = toupper((unsigned char)str[i]);
                                                    i++;
                                                        }

                                                            printf("Uppercase string: %s", str);

                                                                return 0;
                                                                }
                                                                