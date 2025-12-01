//Q67: Insert an element in an array at a given position.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int size, element, position;

    // Take the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Take array elements as input
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Take the element to be inserted and the position
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (0 to %d): ", size);
    scanf("%d", &position);

    // Check for valid position
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;
    size++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
