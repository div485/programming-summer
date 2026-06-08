#include <stdio.h>

int main() {
    int num, i;

        // Ask the user to enter a positive integer
            printf("Enter a positive integer: ");
                scanf("%d", &num);

                    // Validate the input to ensure it is positive
                        if (num <= 0) {
                                printf("Please enter a valid positive integer greater than 0.\n");
                                        return 1; 
                                            }

                                                printf("Factors of %d are: ", num);

                                                    // Loop from 1 to the entered number
                                                        for (i = 1; i <= num; ++i) {
                                                                // If num is perfectly divisible by i, then i is a factor
                                                                        if (num % i == 0) {
                                                                                    printf("%d ", i);
                                                                                            }
                                                                                                }

                                                                                                    printf("\n");
                                                                                                        return 0;
                                                                                                        }