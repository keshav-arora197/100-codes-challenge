// Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {

    int n, i, j, element;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position to insert the new element
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert the new element at the found position
    arr[i] = element;

    printf("The array after insertion is:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

