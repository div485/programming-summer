#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    // Numbers less than or equal to 1 are not prime
        if (num <= 1) {
                return 0;
                    }
                        
                            // Check for factors up to the square root of the number
                                for (int i = 2; i * i <= num; i++) {
                                        if (num % i == 0) {
                                                    return 0; // Found a factor, so it is not prime
                                                            }
                                                                }
                                                                    
                                                                        return 1; // No factors found, it is prime
                                                                        }

                                                                        int main() {
                                                                            int start, end;

                                                                                // Get the range from the user
                                                                                    printf("Enter the lower bound of the range: ");
                                                                                        scanf("%d", &start);
                                                                                            printf("Enter the upper bound of the range: ");
                                                                                                scanf("%d", &end);

                                                                                                    printf("\nPrime numbers between %d and %d are:\n", start, end);

                                                                                                        // Loop through the given range
                                                                                                            for (int i = start; i <= end; i++) {
                                                                                                                    if (isPrime(i)) {
                                                                                                                                printf("%d ", i);
                                                                                                                                        }
                                                                                                                                            }
                                                                                                                                                
                                                                                                                                                    printf("\n");
                                                                                                                                                        return 0;
                                                                                                                                                        }