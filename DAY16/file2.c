#include <stdio.h>

int main() {
    int n;

        // Prompt user for array size
            printf("Enter the number of elements in the array: ");
                if (scanf("%d", &n) != 1 || n <= 0) {
                        printf("Invalid array size.\n");
                                return 1;
                                    }

                                        int arr[n];
                                            int visited[n];

                                                // Input array elements
                                                    printf("Enter %d elements:\n", n);
                                                        for (int i = 0; i < n; i++) {
                                                                scanf("%d", &arr[i]);
                                                                        visited[i] = 0; // Initialize visited tracking array to 0 (false)
                                                                            }

                                                                                int max_element = arr[0];
                                                                                    int max_frequency = 0;

                                                                                        // Logic to find the maximum frequency element
                                                                                            for (int i = 0; i < n; i++) {
                                                                                                    // Skip the element if it has already been counted
                                                                                                            if (visited[i] == 1) {
                                                                                                                        continue;
                                                                                                                                }

                                                                                                                                        int count = 1;
                                                                                                                                                for (int j = i + 1; j < n; j++) {
                                                                                                                                                            if (arr[i] == arr[j]) {
                                                                                                                                                                            count++;
                                                                                                                                                                                            visited[j] = 1; // Mark duplicate element as visited
                                                                                                                                                                                                        }
                                                                                                                                                                                                                }

                                                                                                                                                                                                                        // Update maximum frequency and corresponding element
                                                                                                                                                                                                                                if (count > max_frequency) {
                                                                                                                                                                                                                                            max_frequency = count;
                                                                                                                                                                                                                                                        max_element = arr[i];
                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                        // Output the result
                                                                                                                                                                                                                                                                            printf("\nElement with the maximum frequency: %d\n", max_element);
                                                                                                                                                                                                                                                                                printf("Maximum frequency: %d times\n", max_frequency);

                                                                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                    