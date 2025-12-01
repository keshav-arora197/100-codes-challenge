//Q68: Delete an element from an array.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int size, element, position = -1;

    // Take the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Take array elements as input
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Take the element to be deleted
    printf("Enter the element to be deleted: ");
    scanf("%d", &element);

    // Find the position of the element to be deleted
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }

    // If the element is not found
    if (position == -1) {
        printf("Element %d not found in the array!\n", element);
        return 1;
    }

    // Shift elements to the left to delete the element
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Decrease the size of the array

    // Print the updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
