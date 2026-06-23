#include <stdio.h>

#define MAX_SIZE 100

// Helper function to check if an element is already added to the results
int isAlreadyAdded(int result[], int size, int element) {
    for (int i = 0; i < size; i++) {
            if (result[i] == element) {
                        return 1; // Element is a duplicate in the result
                                }
                                    }
                                        return 0; // Element is unique
                                        }

                                        int main() {
                                            int arr1[MAX_SIZE], arr2[MAX_SIZE], result[MAX_SIZE];
                                                int n1, n2, k = 0;

                                                    // Input size and elements for the first array
                                                        printf("Enter the number of elements for the first array: ");
                                                            scanf("%d", &n1);
                                                                printf("Enter %d elements: ", n1);
                                                                    for (int i = 0; i < n1; i++) {
                                                                            scanf("%d", &arr1[i]);
                                                                                }

                                                                                    // Input size and elements for the second array
                                                                                        printf("\nEnter the number of elements for the second array: ");
                                                                                            scanf("%d", &n2);
                                                                                                printf("Enter %d elements: ", n2);
                                                                                                    for (int i = 0; i < n2; i++) {
                                                                                                            scanf("%d", &arr2[i]);
                                                                                                                }

                                                                                                                    // Find common elements
                                                                                                                        for (int i = 0; i < n1; i++) {
                                                                                                                                for (int j = 0; j < n2; j++) {
                                                                                                                                            // Check if elements match
                                                                                                                                                        if (arr1[i] == arr2[j]) {
                                                                                                                                                                        // Check if it's already recorded to prevent duplicate printing
                                                                                                                                                                                        if (!isAlreadyAdded(result, k, arr1[i])) {
                                                                                                                                                                                                            result[k] = arr1[i];
                                                                                                                                                                                                                                k++;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                break; // Break inner loop early since a match for arr1[i] is found
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                            // Print the results
                                                                                                                                                                                                                                                                                                if (k > 0) {
                                                                                                                                                                                                                                                                                                        printf("\nCommon elements are: ");
                                                                                                                                                                                                                                                                                                                for (int i = 0; i < k; i++) {
                                                                                                                                                                                                                                                                                                                            printf("%d ", result[i]);
                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                            printf("\n");
                                                                                                                                                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                                                                                                                                                        printf("\nNo common elements found.\n");
                                                                                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                                                                