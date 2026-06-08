#include <stdio.h>

int main() {
    double base, result = 1.0;
        int exp, i;

            // Get input from user
                printf("Enter base (x): ");
                    scanf("%lf", &base);
                        printf("Enter exponent (n): ");
                            scanf("%d", &exp);

                                // Store the original exponent for final print
                                    int original_exp = exp;

                                        // Convert negative exponent to positive for calculation loop
                                            if (exp < 0) {
                                                    exp = -exp;
                                                        }

                                                            // Multiply base 'exp' times
                                                                for (i = 0; i < exp; i++) {
                                                                        result *= base;
                                                                            }

                                                                                // If the original exponent was negative, invert the result
                                                                                    if (original_exp < 0) {
                                                                                            result = 1.0 / result;
                                                                                                }

                                                                                                    // Print the final output
                                                                                                        printf("%.2lf raised to the power of %d is: %.6lf\n", base, original_exp, result);

                                                                                                            return 0;
                                                                                                            }