#include <stdio.h>

// Function to calculate Greatest Common Divisor (GCD) using Euclidean algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
            int temp = b;
                    b = a % temp;
                            a = temp;
                                }
                                    return a;
                                    }

                                    // Function to calculate Least Common Multiple (LCM)
                                    int find_lcm(int a, int b) {
                                        if (a == 0 || b == 0) {
                                                return 0; // LCM of 0 and any number is 0
                                                    }
                                                        // Divide before multiplying to prevent integer overflow
                                                            return (a / find_gcd(a, b)) * b;
                                                            }

                                                            int main() {
                                                                int num1, num2;

                                                                    // Prompt user for input
                                                                        printf("Enter two integers: ");
                                                                            if (scanf("%d %d", &num1, &num2) != 2) {
                                                                                    printf("Error: Invalid input.\n");
                                                                                            return 1;
                                                                                                }

                                                                                                    // Handle negative numbers by converting to absolute values
                                                                                                        int abs_num1 = (num1 < 0) ? -num1 : num1;
                                                                                                            int abs_num2 = (num2 < 0) ? -num2 : num2;

                                                                                                                int lcm = find_lcm(abs_num1, abs_num2);

                                                                                                                    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

                                                                                                                        return 0;
                                                                                                                        }