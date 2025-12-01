//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int number, digitCount[10] = {0}; // Array to store count of each digit (0-9)
    int i, maxCount = 0, mostFrequentDigit = -1;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Count occurrences of each digit
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        digitCount[digit]++;     // Increment the count for this digit
        number /= 10;            // Remove the last digit
    }

    // Find the digit with the maximum count
    for (i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    if (mostFrequentDigit != -1) {
        printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);
    } else {
        printf("No digits found in the input number.\n");
    }

    return 0;
}

