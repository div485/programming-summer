#include <stdio.h>

// Function to move all zeroes to the end of the array
void moveZeroesToEnd(int arr[], int n) {
    int count = 0; // Index of the next non-zero element

        // Step 1: Shift all non-zero elements to the front
            for (int i = 0; i < n; i++) {
                    if (arr[i] != 0) {
                                arr[count] = arr[i];
                                            count++;
                                                    }
                                                        }

                                                            // Step 2: Fill the rest of the array with zeroes
                                                                while (count < n) {
                                                                        arr[count] = 0;
                                                                                count++;
                                                                                    }
                                                                                    }

                                                                                    // Helper function to print the array
                                                                                    void printArray(int arr[], int n) {
                                                                                        for (int i = 0; i < n; i++) {
                                                                                                printf("%d ", arr[i]);
                                                                                                    }
                                                                                                        printf("\n");
                                                                                                        }

                                                                                                        int main() {
                                                                                                            int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
                                                                                                                int n = sizeof(arr) / sizeof(arr[0]);

                                                                                                                    printf("Original array: ");
                                                                                                                        printArray(arr, n);

                                                                                                                            moveZeroesToEnd(arr, n);

                                                                                                                                printf("Modified array: ");
                                                                                                                                    printArray(arr, n);

                                                                                                                                        return 0;
                                                                                                                                        }
                                                                                                                                        