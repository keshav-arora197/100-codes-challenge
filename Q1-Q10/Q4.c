//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159
int main() {
    float radius;
    float area, circumference;
    
    // Input radius from the user
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    
    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Display the results
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    
    return 0;
}
