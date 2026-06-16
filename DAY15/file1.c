#include <stdio.h>

// Function to reverse the array in place
void reverseArray(int arr[], int size) {
    int start = 0;
        int end = size - 1;
            int temp;

                // Swap elements from both ends until pointers meet
                    while (start < end) {
                            temp = arr[start];
                                    arr[start] = arr[end];
                                            arr[end] = temp;

                                                    // Move pointers toward the center
                                                            start++;
                                                                    end--;
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
                                                                                                int n;

                                                                                                    // Ask user for the array size
                                                                                                        printf("Enter the size of the array: ");
                                                                                                            if (scanf("%d", &n) != 1 || n <= 0) {
                                                                                                                    printf("Invalid array size.\n");
                                                                                                                            return 1;
                                                                                                                                }

                                                                                                                                    int arr[n];

                                                                                                                                        // Read elements from the user
                                                                                                                                            printf("Enter %d elements:\n", n);
                                                                                                                                                for (int i = 0; i < n; i++) {
                                                                                                                                                        scanf("%d", &arr[i]);
                                                                                                                                                            }

                                                                                                                                                                printf("\nOriginal array:\n");
                                                                                                                                                                    printArray(arr, n);

                                                                                                                                                                        // Reverse the array
                                                                                                                                                                            reverseArray(arr, n);

                                                                                                                                                                                printf("Reversed array:\n");
                                                                                                                                                                                    printArray(arr, n);

                                                                                                                                                                                        return 0;
                                                                                                                                                                                        }
                                                                                                                                                                                        