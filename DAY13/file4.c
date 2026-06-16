#include <stdio.h>

int main() {
    int size, i;
        int even_count = 0, odd_count = 0;

            // Ask user for the total number of elements
                printf("Enter the number of elements: ");
                    scanf("%d", &size);

                        int arr[size]; // Declare the array with the user-defined size

                            // Input elements into the array
                                printf("Enter %d numbers:\n", size);
                                    for(i = 0; i < size; i++) {
                                            scanf("%d", &arr[i]);
                                                }

                                                    // Process the elements to count even and odd numbers
                                                        for(i = 0; i < size; i++) {
                                                                // A number is even if it is perfectly divisible by 2
                                                                        if(arr[i] % 2 == 0) {
                                                                                    even_count++;
                                                                                            } else {
                                                                                                        odd_count++;
                                                                                                                }
                                                                                                                    }

                                                                                                                        // Output the final counts
                                                                                                                            printf("\nTotal Even numbers: %d\n", even_count);
                                                                                                                                printf("Total Odd numbers: %d\n", odd_count);

                                                                                                                                    return 0;
                                                                                                                                    }
                                                                                                                                    