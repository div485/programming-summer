#include <stdio.h>

// Function to perform linear search
// Returns the index if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                        return i; // Element found, return its index
                                }
                                    }
                                        return -1; // Element not found after checking the whole array
                                        }

                                        int main() {
                                            int n, target, result;

                                                // Get the number of elements from the user
                                                    printf("Enter the number of elements in the array: ");
                                                        scanf("%d", &n);

                                                            int arr[n]; // Declare array of user-defined size

                                                                // Input array elements
                                                                    printf("Enter %d integers:\n", n);
                                                                        for (int i = 0; i < n; i++) {
                                                                                scanf("%d", &arr[i]);
                                                                                    }

                                                                                        // Get the target value to search for
                                                                                            printf("Enter the number to search for: ");
                                                                                                scanf("%d", &target);

                                                                                                    // Call the linear search function
                                                                                                        result = linearSearch(arr, n, target);

                                                                                                            // Output the result
                                                                                                                if (result != -1) {
                                                                                                                        printf("Element %d found at index %d (position %d).\n", target, result, result + 1);
                                                                                                                            } else {
                                                                                                                                    printf("Element %d is not present in the array.\n", target);
                                                                                                                                        }

                                                                                                                                            return 0;
                                                                                                                                            }
                                                                                                                                            