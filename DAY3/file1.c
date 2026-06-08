#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
        bool isPrime = true;

            printf("Enter a positive integer: ");
                scanf("%d", &num);

                    // Numbers less than or equal to 1 are not prime
                        if (num <= 1) {
                                isPrime = false;
                                    } else {
                                            // Loop from 2 up to the square root of num
                                                    // i * i <= num is more efficient than calling sqrt()
                                                            for (int i = 2; i * i <= num; i++) {
                                                                        if (num % i == 0) {
                                                                                        isPrime = false;
                                                                                                        break; // Exit loop early if a factor is found
                                                                                                                    }
                                                                                                                            }
                                                                                                                                }

                                                                                                                                    if (isPrime) {
                                                                                                                                            printf("%d is a prime number.\n", num);
                                                                                                                                                } else {
                                                                                                                                                        printf("%d is not a prime number.\n", num);
                                                                                                                                                            }

                                                                                                                                                                return 0;
                                                                                                                                                                }