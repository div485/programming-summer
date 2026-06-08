#include <stdio.h>

// Function to calculate GCD using the efficient Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
            int temp = b;
                    b = a % b;  // Store the remainder
                            a = temp;   // Move the old divisor to a
                                }
                                    return a;       // When b becomes 0, a contains the GCD
                                    }

                                    int main() {
                                        int num1, num2;

                                            // Taking user inputs
                                                printf("Enter two integers: ");
                                                    if (scanf("%d %d", &num1, &num2) != 2) {
                                                            printf("Invalid input. Please enter integers only.\n");
                                                                    return 1;
                                                                        }

                                                                            // Calculating and displaying the result
                                                                                int gcd = findGCD(num1, num2);
                                                                                    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

                                                                                        return 0;
                                                                                        }