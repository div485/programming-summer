#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next;

        // Prompt user for the number of terms
            printf("Enter the number of terms: ");
                scanf("%d", &terms);

                    printf("Fibonacci Series: ");

                        for (int i = 0; i < terms; i++) {
                                if (i <= 1) {
                                            next = i; // The first two terms are 0 and 1
                                                    } else {
                                                                next = first + second; // Calculate the next term
                                                                            first = second;        // Update the first term
                                                                                        second = next;        // Update the second term
                                                                                                }
                                                                                                        printf("%d ", next);
                                                                                                            }

                                                                                                                printf("\n");
                                                                                                                    return 0;
                                                                                                                    }