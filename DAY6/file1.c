#include <stdio.h>

int main() {
    int decimalNumber;
        int binaryArray[32];
            int index = 0;

                // Prompt user for input
                    printf("Enter a decimal number: ");
                        if (scanf("%d", &decimalNumber) != 1) {
                                printf("Invalid input.\n");
                                        return 1;
                                            }

                                                // Handle edge case for 0
                                                    if (decimalNumber == 0) {
                                                            printf("Binary equivalent: 0\n");
                                                                    return 0;
                                                                        }

                                                                            // Process positive numbers
                                                                                // For negative numbers, consider using unsigned integers or bitwise operators
                                                                                    int temp = decimalNumber;
                                                                                        if (temp < 0) {
                                                                                                printf("This basic loop method handles positive integers. Converting absolute value...\n");
                                                                                                        temp = -temp;
                                                                                                            }

                                                                                                                // Conversion loop
                                                                                                                    while (temp > 0) {
                                                                                                                            binaryArray[index] = temp % 2; // Store remainder (0 or 1)
                                                                                                                                    temp = temp / 2;               // Divide number by 2
                                                                                                                                            index++;                       // Increment index
                                                                                                                                                }

                                                                                                                                                    // Print binary array in reverse order
                                                                                                                                                        printf("Binary equivalent: ");
                                                                                                                                                            for (int j = index - 1; j >= 0; j--) {
                                                                                                                                                                    printf("%d", binaryArray[j]);
                                                                                                                                                                        }
                                                                                                                                                                            printf("\n");

                                                                                                                                                                                return 0;
                                                                                                                                                                                }