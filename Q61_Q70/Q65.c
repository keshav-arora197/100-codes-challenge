//Q65: Search in a sorted array using binary search.

#include <stdio.h>
int main() {
    int n, i, target;
    int left, right, mid;
    int found = 0; // Flag to indicate if the element is found

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform binary search
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2; // To avoid potential overflow

        if (arr[mid] == target) {
            found = 1; // Element found
            break;
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    if (found) {
        printf("Element %d is present in the array.\n", target);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}

