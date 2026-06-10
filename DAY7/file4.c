#include <stdio.h>

// Recursive function to reverse the digits of a number
int reverse_number(int num, int reversed) {
    // Base Case: If the remaining number becomes 0, return the accumulated result
        if (num == 0) {
                return reversed;
                    }
                        
                            // Extract the last digit and shift the accumulated result to the left
                                reversed = (reversed * 10) + (num % 10);
                                    
                                        // Recursive Case: Call the function again with the remaining digits
                                            return reverse_number(num / 10, reversed);
                                            }

                                            int main(void) {
                                                int input_num;

                                                    // Prompt user for input
                                                        printf("Enter an integer: ");
                                                            if (scanf("%d", &input_num) != 1) {
                                                                    printf("Invalid input.\n");
                                                                            return 1;
                                                                                }

                                                                                    // Call the recursive function starting with 0 as the initial reversed value
                                                                                        int result = reverse_number(input_num, 0);

                                                                                            // Output the result
                                                                                                printf("Reversed number: %d\n", result);

                                                                                                    return 0;
                                                                                                    }