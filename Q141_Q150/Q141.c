//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;
int main() {
    Student student;

    // Read student data
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter student's roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter student's marks: ");
    scanf("%f", &student.marks);

    // Print student data
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
