#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
        double result = 0.0;

            // Ask user for input
                printf("Enter an integer: ");
                    scanf("%d", &num);

                        originalNum = num;

                            // Step 1: Count the total number of digits
                                while (originalNum != 0) {
                                        originalNum /= 10;
                                                ++n;
                                                    }

                                                        originalNum = num;

                                                            // Step 2: Calculate the sum of the power of individual digits
                                                                while (originalNum != 0) {
                                                                        remainder = originalNum % 10;
                                                                                result += pow(remainder, n);
                                                                                        originalNum /= 10;
                                                                                            }

                                                                                                // Step 3: Check if the sum matches the original number
                                                                                                    if ((int)result == num) {
                                                                                                            printf("%d is an Armstrong number.\n", num);
                                                                                                                } else {
                                                                                                                        printf("%d is not an Armstrong number.\n", num);
                                                                                                                            }

                                                                                                                                return 0;
                                                                                                                                }