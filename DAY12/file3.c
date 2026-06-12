#include <stdio.h>

// Function declaration
void printFibonacci(int terms);

int main() {
    int count;

        printf("Enter the number of terms: ");
            scanf("%d", &count);

                // Call the function to print the series
                    printFibonacci(count);

                        return 0;
                        }

                        // Function definition to print the Fibonacci sequence
                        void printFibonacci(int terms) {
                            if (terms <= 0) {
                                    printf("Please enter a positive integer greater than 0.\n");
                                            return;
                                                }

                                                    unsigned long long first = 0, second = 1, next;

                                                        printf("Fibonacci Series: ");

                                                            for (int i = 1; i <= terms; i++) {
                                                                    // Print the current term
                                                                            printf("%llu ", first);

                                                                                    // Calculate the next term and shift previous variables forward
                                                                                            next = first + second;
                                                                                                    first = second;
                                                                                                            second = next;
                                                                                                                }
                                                                                                                    printf("\n");
                                                                                                                    }
                                                                                                                    