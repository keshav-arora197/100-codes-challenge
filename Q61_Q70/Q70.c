//Q70: Rotate an array to the right by k positions.
#include <stdio.h>
#define MAX_SIZE 100
void rotateArray(int arr[], int size, int k) {
    k = k % size; // Handle cases where k is greater than size
    int temp[MAX_SIZE];

    // Copy last k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    // Shift the rest of the elements to the right
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the elements from temp back to the front of arr
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int arr[MAX_SIZE];
    int size, k;

    // Take the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Take array elements as input
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Take the number of positions to rotate
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, size, k);

    // Print the rotated array
    printf("Array after rotating to the right by %d positions:\n", k);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
    
