#include <stdio.h>

int main() {
    long long binary_num;
        long long temp;
            int decimal_num = 0;
                int base = 1;
                    int remainder;

                        printf("Enter a binary number: ");
                            if (scanf("%lld", &binary_num) != 1) {
                                    printf("Invalid input.\n");
                                            return 1;
                                                }

                                                    temp = binary_num;

                                                        // Process each digit from right to left
                                                            while (temp > 0) {
                                                                    remainder = temp % 10;       // Extract the rightmost digit
                                                                            decimal_num += remainder * base; // Add the positional value to decimal sum
                                                                                    base = base * 2;             // Double the base value for the next power of 2
                                                                                            temp = temp / 10;            // Remove the rightmost digit
                                                                                                }

                                                                                                    printf("Binary: %lld\n", binary_num);
                                                                                                        printf("Decimal equivalent: %d\n", decimal_num);

                                                                                                            return 0;
                                                                                                            }