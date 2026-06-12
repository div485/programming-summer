#include <stdio.h>

/* Function declaration */
int find_max(int num1, int num2);

int main() {
    int a, b, max_val;

        // Requesting user input
            printf("Enter two integers: ");
                if (scanf("%d %d", &a, &b) != 2) {
                        printf("Invalid input.\n");
                                return 1;
                                    }

                                        // Calling the function to get the maximum value
                                            max_val = find_max(a, b);

                                                // Printing the result
                                                    printf("The maximum number is: %d\n", max_val);

                                                        return 0;
                                                        }

                                                        /**
                                                         * Custom function to find the maximum between two integers.
                                                          * Uses a standard ternary operator for clean comparison.
                                                           */
                                                           int find_max(int num1, int num2) {
                                                               return (num1 > num2) ? num1 : num2;
                                                               }
                                                               