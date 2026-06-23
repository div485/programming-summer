#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
        int swapped;

            // Outer loop for the number of passes
                for (i = 0; i < n - 1; i++) {
                        swapped = 0; // Reset flag for each pass

                                // Inner loop for adjacent comparisons
                                        // n - i - 1 ensures we skip already sorted elements at the end
                                                for (j = 0; j < n - i - 1; j++) {
                                                            if (arr[j] > arr[j + 1]) {
                                                                            // Swap the elements
                                                                                            temp = arr[j];
                                                                                                            arr[j] = arr[j + 1];
                                                                                                                            arr[j + 1] = temp;
                                                                                                                                            
                                                                                                                                                            swapped = 1; // Mark that a swap occurred
                                                                                                                                                                        }
                                                                                                                                                                                }

                                                                                                                                                                                        // If no elements were swapped in this pass, the array is already sorted
                                                                                                                                                                                                if (swapped == 0) {
                                                                                                                                                                                                            break;
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        }

                                                                                                                                                                                                                        // Function to print the array
                                                                                                                                                                                                                        void printArray(int arr[], int size) {
                                                                                                                                                                                                                            for (int i = 0; i < size; i++) {
                                                                                                                                                                                                                                    printf("%d ", arr[i]);
                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                            printf("\n");
                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                            int main() {
                                                                                                                                                                                                                                                int arr[] = {64, 34, 25, 12, 22, 11, 90};
                                                                                                                                                                                                                                                    int n = sizeof(arr) / sizeof(arr[0]);

                                                                                                                                                                                                                                                        printf("Unsorted array: \n");
                                                                                                                                                                                                                                                            printArray(arr, n);

                                                                                                                                                                                                                                                                // Call the sorting function
                                                                                                                                                                                                                                                                    bubbleSort(arr, n);

                                                                                                                                                                                                                                                                        printf("Sorted array in ascending order: \n");
                                                                                                                                                                                                                                                                            printArray(arr, n);

                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                