//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main() {
    int n, sum = 0;
    
    // Input the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    // Calculate the sum of the first n natural numbers
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    
    // Display the result
    printf("The sum of the first %d natural numbers is %d.\n", n, sum);
    
    return 0;
}
