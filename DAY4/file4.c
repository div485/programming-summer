#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
        int temp = num;
            int digits = 0;
                int sum = 0;

                    // Count the total number of digits
                        while (temp > 0) {
                                temp /= 10;
                                        digits++;
                                            }

                                                temp = originalNum;
                                                    // Calculate the sum of the power of individual digits
                                                        while (temp > 0) {
                                                                int remainder = temp % 10;
                                                                        // round() helps counter potential floating-point inaccuracies from pow()
                                                                                sum += (int)round(pow(remainder, digits)); 
                                                                                        temp /= 10;
                                                                                            }

                                                                                                // Return 1 if true, 0 otherwise
                                                                                                    return (sum == originalNum);
                                                                                                    }

                                                                                                    int main() {
                                                                                                        int start, end;

                                                                                                            // Prompt user for the lower and upper bounds of the range
                                                                                                                printf("Enter the starting number of the range: ");
                                                                                                                    scanf("%d", &start);
                                                                                                                        printf("Enter the ending number of the range: ");
                                                                                                                            scanf("%d", &end);

                                                                                                                                printf("Armstrong numbers between %d and %d are:\n", start, end);

                                                                                                                                    // Iterate through the range and check each number
                                                                                                                                        for (int i = start; i <= end; i++) {
                                                                                                                                                if (isArmstrong(i)) {
                                                                                                                                                            printf("%d ", i);
                                                                                                                                                                    }
                                                                                                                                                                        }
                                                                                                                                                                            printf("\n");

                                                                                                                                                                                return 0;
                                                                                                                                                                                }