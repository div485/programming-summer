#include <stdio.h>

int main() {
    int n, i;
        float number, sum = 0.0, average;

            // Prompt the user for the total count of numbers
                printf("Enter the total number of elements: ");
                    scanf("%d", &n);

                        // Validate that the user requested at least one number
                            if (n <= 0) {
                                    printf("Please enter a valid count greater than 0.\n");
                                            return 1; 
                                                }

                                                    // Loop to collect each number and add it to the running sum
                                                        printf("Enter %d numbers:\n", n);
                                                            for (i = 1; i <= n; i++) {
                                                                    printf("Number %d: ", i);
                                                                            scanf("%f", &number);
                                                                                    sum += number; // Accumulate the total
                                                                                        }

                                                                                            // Compute the mathematical average
                                                                                                average = sum / n;

                                                                                                    // Display the calculated metrics
                                                                                                        printf("\n--- Results ---\n");
                                                                                                            printf("Total Sum = %.2f\n", sum);
                                                                                                                printf("Average   = %.2f\n", average);

                                                                                                                    return 0;
                                                                                                                    }
                                                                                                                    