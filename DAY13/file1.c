#include <stdio.h>

int main() {
    int size;

        // Step 1: Get the desired size of the array from the user
            printf("Enter the number of elements: ");
                scanf("%d", &size);

                    // Declare the array with the user-specified size
                        int arr[size];

                            // Step 2: Input array elements using a for loop
                                printf("Enter %d elements:\n", size);
                                    for (int i = 0; i < size; i++) {
                                            printf("Element %d: ", i + 1);
                                                    scanf("%d", &arr[i]);
                                                        }

                                                            // Step 3: Display the array elements using another for loop
                                                                printf("\nThe elements in the array are: ");
                                                                    for (int i = 0; i < size; i++) {
                                                                            printf("%d ", arr[i]);
                                                                                }
                                                                                    printf("\n");

                                                                                        return 0;
                                                                                        }
                                                                                        