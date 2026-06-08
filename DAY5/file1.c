#include <stdio.h>

int main() {
    int num, i, sum = 0;

        // Ask the user to input a number
            printf("Enter any positive integer: ");
                scanf("%d", &num);

                    // Loop through all potential proper divisors from 1 to num/2
                        for(i = 1; i <= num / 2; i++) {
                                // If i divides num completely, it is a proper divisor
                                        if(num % i == 0) {
                                                    sum += i; // Add the divisor to the running total
                                                            }
                                                                }

                                                                    // Check if the sum of proper divisors is equal to the original number
                                                                        if(sum == num && num > 0) {
                                                                                printf("%d is a PERFECT NUMBER.\n", num);
                                                                                    } else {
                                                                                            printf("%d is NOT A PERFECT NUMBER.\n", num);
                                                                                                }

                                                                                                    return 0;
                                                                                                    }