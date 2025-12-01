//Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;

int main() {
    Student *student;

    // Dynamically allocate memory for a Student structure
    student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read student data
    printf("Enter student's name: ");
    fgets(student->name, sizeof(student->name), stdin);
    printf("Enter student's roll number: ");
    scanf("%d", &student->roll_no);
    printf("Enter student's marks: ");
    scanf("%f", &student->marks);

    // Print student data
    printf("\nStudent Details:\n");
    printf("Name: %s", student->name);
    printf("Roll Number: %d\n", student->roll_no);
    printf("Marks: %.2f\n", student->marks);

    // Free the allocated memory
    free(student);

    return 0;
}
