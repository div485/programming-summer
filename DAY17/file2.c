#include <stdio.h>

// Function to check if an element is already present in the result array
int isDuplicate(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                        return 1; // Element found (duplicate)
                                }
                                    }
                                        return 0; // Element not found
                                        }

                                        // Function to find the union of two arrays
                                        int findUnion(int arr1[], int size1, int arr2[], int size2, int unionArr[]) {
                                            int k = 0; // Index for unionArr

                                                // Copy unique elements from the first array
                                                    for (int i = 0; i < size1; i++) {
                                                            if (!isDuplicate(unionArr, k, arr1[i])) {
                                                                        unionArr[k++] = arr1[i];
                                                                                }
                                                                                    }

                                                                                        // Copy unique elements from the second array
                                                                                            for (int i = 0; i < size2; i++) {
                                                                                                    if (!isDuplicate(unionArr, k, arr2[i])) {
                                                                                                                unionArr[k++] = arr2[i];
                                                                                                                        }
                                                                                                                            }

                                                                                                                                return k; // Return the total number of elements in the union
                                                                                                                                }

                                                                                                                                int main() {
                                                                                                                                    // Input arrays (can contain duplicate values)
                                                                                                                                        int arr1[] = {1, 3, 2, 3, 5};
                                                                                                                                            int arr2[] = {2, 4, 5, 6, 2};

                                                                                                                                                int size1 = sizeof(arr1) / sizeof(arr1[0]);
                                                                                                                                                    int size2 = sizeof(arr2) / sizeof(arr2[0]);

                                                                                                                                                        // The union array can have at most the combined size of both arrays
                                                                                                                                                            int unionArr[size1 + size2]; 

                                                                                                                                                                // Find union
                                                                                                                                                                    int unionSize = findUnion(arr1, size1, arr2, size2, unionArr);

                                                                                                                                                                        // Print the result
                                                                                                                                                                            printf("Union of the two arrays: ");
                                                                                                                                                                                for (int i = 0; i < unionSize; i++) {
                                                                                                                                                                                        printf("%d ", unionArr[i]);
                                                                                                                                                                                            }
                                                                                                                                                                                                printf("\n");

                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                    }
                                                                                                                                                                                                    