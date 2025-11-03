//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;
    
    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Calculate sum, difference, product, and quotient
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    // Check for division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Division by zero is not allowed.\n");
    }
    
    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    
    return 0;
}
