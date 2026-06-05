#include <stdio.h>

int main() {
        int num, remainder;
            long long product = 1;

                // Ask the user for input
                    printf("Enter an integer: ");
                        scanf("%d", &num);

                            // Handle the case if the user enters 0
                                if (num == 0) {
                                            product = 0;
                                } else {
                                            // Convert negative numbers to positive for digit extraction
                                                    if (num < 0) {
                                                                    num = -num;
                                                    }

                                                            // Loop to extract and multiply digits
                                                                    while (num > 0) {
                                                                                    remainder = num % 10;       // Get the last digit
                                                                                                product = product * remainder; // Multiply to the product
                                                                                                            num = num / 10;             // Remove the last digit
                                                                    }
                                }

                                    // Print the final result
                                        printf("The product of the digits is: %lld\n", product);

                                            return 0;
}
                                                                    }
                                                    }
                                }
                                }
}