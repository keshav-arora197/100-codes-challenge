//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} Operation;
int main() {
    Operation choice;
    int num1, num2, result;

    // Display menu
    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", (int*)&choice);

    // Take two numbers as input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation based on user choice
    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
