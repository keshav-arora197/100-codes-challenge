//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int num1, num2, temp;
    
    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Display numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    // Swap the numbers using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    // Display numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
