#include <stdio.h>

int main() {
    int n;

        // 1. Get the size of the array from the user
            printf("Enter the number of elements in the array: ");
                if (scanf("%d", &n) != 1 || n <= 0) {
                        printf("Invalid array size.\n");
                                return 1;
                                    }

                                        int arr[n];
                                            int visited[n]; // Array to keep track of elements we have already counted/printed

                                                // 2. Input the array elements and initialize the visited array
                                                    printf("Enter %d elements:\n", n);
                                                        for (int i = 0; i < n; i++) {
                                                                scanf("%d", &arr[i]);
                                                                        visited[i] = 0; // Initialize all elements as not visited
                                                                            }

                                                                                printf("\nDuplicate elements in the given array are: \n");
                                                                                    int duplicate_found = 0;

                                                                                        // 3. Nested loop logic to find duplicates
                                                                                            for (int i = 0; i < n; i++) {
                                                                                                    // If the element is already marked as visited, skip it
                                                                                                            if (visited[i] == 1) {
                                                                                                                        continue;
                                                                                                                                }

                                                                                                                                        int count = 1;
                                                                                                                                                for (int j = i + 1; j < n; j++) {
                                                                                                                                                            if (arr[i] == arr[j]) {
                                                                                                                                                                            count++;
                                                                                                                                                                                            visited[j] = 1; // Mark the matching element as visited so it isn't printed again
                                                                                                                                                                                                        }
                                                                                                                                                                                                                }

                                                                                                                                                                                                                        // If the element appeared more than once, it is a duplicate
                                                                                                                                                                                                                                if (count > 1) {
                                                                                                                                                                                                                                            printf("%d (appears %d times)\n", arr[i], count);
                                                                                                                                                                                                                                                        duplicate_found = 1;
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                        if (!duplicate_found) {
                                                                                                                                                                                                                                                                                printf("No duplicate elements found in the array.\n");
                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                        