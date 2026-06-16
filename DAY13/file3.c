#include <stdio.h>

int main() {
    int arr[100];
        int n, i;
            int largest, smallest;

                // Prompt the user to enter the size of the array
                    printf("Enter the number of elements (up to 100): ");
                        if (scanf("%d", &n) != 1 || n <= 0) {
                                printf("Invalid array size.\n");
                                        return 1;
                                            }

                                                // Input the array elements from the user
                                                    printf("Enter %d elements:\n", n);
                                                        for (i = 0; i < n; i++) {
                                                                printf("Element %d: ", i + 1);
                                                                        scanf("%d", &arr[i]);
                                                                            }

                                                                                // Initialize largest and smallest with the first element of the array
                                                                                    largest = arr[0];
                                                                                        smallest = arr[0];

                                                                                            // Traverse the array to find the extremes
                                                                                                for (i = 1; i < n; i++) {
                                                                                                        if (arr[i] > largest) {
                                                                                                                    largest = arr[i]; // Update largest
                                                                                                                            }
                                                                                                                                    if (arr[i] < smallest) {
                                                                                                                                                smallest = arr[i]; // Update smallest
                                                                                                                                                        }
                                                                                                                                                            }

                                                                                                                                                                // Print the results
                                                                                                                                                                    printf("\nResults:\n");
                                                                                                                                                                        printf("Largest number: %d\n", largest);
                                                                                                                                                                            printf("Smallest number: %d\n", smallest);

                                                                                                                                                                                return 0;
                                                                                                                                                                                }
                                                                                                                                                                                