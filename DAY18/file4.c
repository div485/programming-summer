#include <stdio.h>

int main() {
    int n, i, j, temp;

        // 1. Get the size of the array from the user
            printf("Enter the number of elements: ");
                if (scanf("%d", &n) != 1 || n <= 0) {
                        printf("Invalid array size.\n");
                                return 1;
                                    }

                                        int arr[n]; // Declare a Variable Length Array (VLA)

                                            // 2. Input array elements
                                                printf("Enter %d elements:\n", n);
                                                    for (i = 0; i < n; i++) {
                                                            scanf("%d", &arr[i]);
                                                                }

                                                                    // 3. Bubble Sort logic for descending order
                                                                        for (i = 0; i < n - 1; i++) {
                                                                                for (j = 0; j < n - i - 1; j++) {
                                                                                            // Swap if the current element is smaller than the next element
                                                                                                        if (arr[j] < arr[j + 1]) {
                                                                                                                        temp = arr[j];
                                                                                                                                        arr[j] = arr[j + 1];
                                                                                                                                                        arr[j + 1] = temp;
                                                                                                                                                                    }
                                                                                                                                                                            }
                                                                                                                                                                                }

                                                                                                                                                                                    // 4. Print the sorted array
                                                                                                                                                                                        printf("\nArray sorted in descending order:\n");
                                                                                                                                                                                            for (i = 0; i < n; i++) {
                                                                                                                                                                                                    printf("%d ", arr[i]);
                                                                                                                                                                                                        }
                                                                                                                                                                                                            printf("\n");

                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                }
                                                                                                                                                                                                                