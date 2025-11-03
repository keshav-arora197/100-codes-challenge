//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main() {
    int num1, num2;
    
    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Display numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Swap the numbers without using a third variable
    num1 = num1 + num2; // Step 1: Add both numbers and store in num1
    num2 = num1 - num2; // Step 2: Subtract new num1 by num2 to get original num1
    num1 = num1 - num2; // Step 3: Subtract new num1 by new num2 to get original num2
    
    // Display numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
