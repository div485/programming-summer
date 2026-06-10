#include <stdio.h>

int main() {
    int i, j, space, rows;
        char ch;

            printf("Enter the number of rows: ");
                scanf("%d", &rows);

                    // Outer loop handles the number of rows
                        for (i = 1; i <= rows; ++i) {
                                ch = 'A';

                                        // 1. Inner loop prints leading spaces for alignment
                                                for (space = 1; space <= rows - i; ++space) {
                                                            printf("  ");
                                                                    }

                                                                            // 2. Inner loop prints ascending characters
                                                                                    for (j = 1; j <= i; ++j) {
                                                                                                printf("%c ", ch);
                                                                                                            ch++;
                                                                                                                    }

                                                                                                                            // Adjust character pointer to reverse the order
                                                                                                                                    ch -= 2;

                                                                                                                                            // 3. Inner loop prints descending characters
                                                                                                                                                    for (j = 1; j < i; ++j) {
                                                                                                                                                                printf("%c ", ch);
                                                                                                                                                                            ch--;
                                                                                                                                                                                    }

                                                                                                                                                                                            // Move to the next line after completing a row
                                                                                                                                                                                                    printf("\n");
                                                                                                                                                                                                        }

                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            