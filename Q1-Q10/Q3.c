//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    float length, breadth;
    float area, perimeter;
    
    // Input length and breadth from the user
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    
    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    // Display the results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    
    return 0;
}
