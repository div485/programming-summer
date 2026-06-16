#include <stdio.h>

// Helper function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
            int temp = arr[start];
                    arr[start] = arr[end];
                            arr[end] = temp;
                                    start++;
                                            end--;
                                                }
                                                }

                                                // Function to right rotate the array by k positions
                                                void rightRotate(int arr[], int size, int k) {
                                                    // Handle cases where k is greater than the size of the array
                                                        k = k % size;
                                                            
                                                                // If k is 0, no rotation is needed
                                                                    if (k == 0) return;

                                                                        // Step 1: Reverse the entire array
                                                                            reverse(arr, 0, size - 1);

                                                                                // Step 2: Reverse the first k elements
                                                                                    reverse(arr, 0, k - 1);

                                                                                        // Step 3: Reverse the remaining elements
                                                                                            reverse(arr, k, size - 1);
                                                                                            }

                                                                                            // Helper function to print the array elements
                                                                                            void printArray(int arr[], int size) {
                                                                                                for (int i = 0; i < size; i++) {
                                                                                                        printf("%d ", arr[i]);
                                                                                                            }
                                                                                                                printf("\n");
                                                                                                                }

                                                                                                                int main() {
                                                                                                                    int arr[] = {1, 2, 3, 4, 5, 6, 7};
                                                                                                                        int size = sizeof(arr) / sizeof(arr[0]);
                                                                                                                            int k = 3; // Number of times to rotate right

                                                                                                                                printf("Original array: \n");
                                                                                                                                    printArray(arr, size);

                                                                                                                                        rightRotate(arr, size, k);

                                                                                                                                            printf("Array after rotating right by %d positions: \n", k);
                                                                                                                                                printArray(arr, size);

                                                                                                                                                    return 0;
                                                                                                                                                    }
                                                                                                                                                    