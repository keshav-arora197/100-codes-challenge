//Q69: Find the second largest element in an array.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE];
    int size;
    int first_largest, second_largest;

    // Take the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Take array elements as input
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest
    first_largest = second_largest = -2147483648; // Minimum integer value

    // Find the largest and second largest elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > first_largest) {
            second_largest = first_largest;
            first_largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != first_largest) {
            second_largest = arr[i];
        }
    }

    // Check if second largest was found
    if (second_largest == -2147483648) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element in the array is: %d\n", second_largest);
    }

    return 0;
}
