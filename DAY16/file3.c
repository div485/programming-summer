#include <stdio.h>

// Function to find and print the pairs that match the target sum
void findPairWithSum(int arr[], int size, int targetSum) {
    int pairFound = 0;

        // Outer loop selects the first element
            for (int i = 0; i < size - 1; i++) {
                    // Inner loop selects the second element
                            for (int j = i + 1; j < size; j++) {
                                        // Check if the sum of the two elements equals the target
                                                    if (arr[i] + arr[j] == targetSum) {
                                                                    printf("Pair found: %d and %d (at indices %d and %d)\n", arr[i], arr[j], i, j);
                                                                                    pairFound = 1;
                                                                                                }
                                                                                                        }
                                                                                                            }

                                                                                                                if (!pairFound) {
                                                                                                                        printf("No pair found with the given sum %d.\n", targetSum);
                                                                                                                            }
                                                                                                                            }

                                                                                                                            int main() {
                                                                                                                                int arr[] = {8, 7, 2, 5, 3, 1};
                                                                                                                                    int targetSum = 10;
                                                                                                                                        
                                                                                                                                            // Calculate the total number of elements in the array
                                                                                                                                                int size = sizeof(arr) / sizeof(arr[0]);

                                                                                                                                                    printf("Array: ");
                                                                                                                                                        for (int i = 0; i < size; i++) {
                                                                                                                                                                printf("%d ", arr[i]);
                                                                                                                                                                    }
                                                                                                                                                                        printf("\nTarget Sum: %d\n\n", targetSum);

                                                                                                                                                                            findPairWithSum(arr, size, targetSum);

                                                                                                                                                                                return 0;
                                                                                                                                                                                }
                                                                                                                                                                                