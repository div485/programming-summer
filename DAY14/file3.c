#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], size, i;
        int first, second;

            // Get the size of the array from the user
                printf("Enter the number of elements in the array: ");
                    scanf("%d", &size);

                        // Validate that the array has at least two elements
                            if (size < 2) {
                                    printf("Array must have at least two elements.\n");
                                            return 1;
                                                }

                                                    // Input array elements
                                                        printf("Enter %d elements:\n", size);
                                                            for (i = 0; i < size; i++) {
                                                                    scanf("%d", &arr[i]);
                                                                        }

                                                                            // Initialize first and second largest to the minimum possible integer value
                                                                                first = second = INT_MIN;

                                                                                    // Traverse the array to find the largest and second largest elements
                                                                                        for (i = 0; i < size; i++) {
                                                                                                // If current element is greater than the largest element
                                                                                                        if (arr[i] > first) {
                                                                                                                    second = first;
                                                                                                                                first = arr[i];
                                                                                                                                        }
                                                                                                                                                // If current element is smaller than 'first' but greater than 'second'
                                                                                                                                                        else if (arr[i] > second && arr[i] < first) {
                                                                                                                                                                    second = arr[i];
                                                                                                                                                                            }
                                                                                                                                                                                }

                                                                                                                                                                                    // Print the results
                                                                                                                                                                                        if (second == INT_MIN) {
                                                                                                                                                                                                printf("There is no second largest element (all elements might be equal).\n");
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                            printf("The largest element is: %d\n", first);
                                                                                                                                                                                                                    printf("The second largest element is: %d\n", second);
                                                                                                                                                                                                                        }

                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                            