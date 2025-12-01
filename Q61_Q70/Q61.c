//Q61: Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    int n, i, target;
    int found = 0; // Flag to indicate if the element is found

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1; // Element found
            break;
        }
    }

    if (found) {
        printf("Element %d is present in the array.\n", target);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}
