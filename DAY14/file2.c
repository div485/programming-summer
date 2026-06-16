#include <stdio.h>

int main() {
    int n, i, j, count;

        printf("Enter the number of elements: ");
            scanf("%d", &n);

                int arr[n];
                    int visited[n];

                        printf("Enter %d elements:\n", n);
                            for(i = 0; i < n; i++) {
                                    scanf("%d", &arr[i]);
                                            visited[i] = 0; // Initialize visited array tracking to 0 (false)
                                                }

                                                    printf("\n--- Element Frequencies ---\n");
                                                        for(i = 0; i < n; i++) {
                                                                // Skip this element if it has already been counted
                                                                        if(visited[i] == 1) {
                                                                                    continue;
                                                                                            }

                                                                                                    count = 1; // Start counting the current element
                                                                                                            for(j = i + 1; j < n; j++) {
                                                                                                                        if(arr[i] == arr[j]) {
                                                                                                                                        count++;
                                                                                                                                                        visited[j] = 1; // Mark duplicate element as visited
                                                                                                                                                                    }
                                                                                                                                                                            }
                                                                                                                                                                                    printf("Element %d occurs %d time(s)\n", arr[i], count);
                                                                                                                                                                                        }

                                                                                                                                                                                            return 0;
                                                                                                                                                                                            }
                                                                                                                                                                                            