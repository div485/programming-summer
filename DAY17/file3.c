#include <stdio.h>

// Function to check if an element is already present in the intersection array
int isDuplicate(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // Found a duplicate
        }
    }
    return 0; // Not a duplicate
}

// Function to find the intersection of two arrays
void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int intersection[100]; // Array to store the common elements
    int k = 0;             // Track the size of the intersection array

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            // Check if elements match
            if (arr1[i] == arr2[j]) {
                // Ensure the element is not already added to prevent duplicates
                if (!isDuplicate(intersection, k, arr1[i])) {
                    intersection[k] = arr1[i];
                    k++;
                }
                break; // Move to the next element in arr1 once a match is found
            }
        }
    }

    // Print the result
    printf("Intersection of the two arrays: ");
    if (k == 0) {
        printf("No common elements found.");
    } else {
        for (int i = 0; i < k; i++) {
            printf("%d ", intersection[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {4, 9, 1, 2, 4, 5};
    int arr2[] = {9, 4, 9, 8, 4, 1};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1: ");
    for(int i = 0; i < size1; i++) printf("%d ", arr1[i]);
    printf("\n");

    printf("Array 2: ");
    for(int i = 0; i < size2; i++) printf("%d ", arr2[i]);
    printf("\n\n");

    findIntersection(arr1, size1, arr2, size2);

    return 0;
}
