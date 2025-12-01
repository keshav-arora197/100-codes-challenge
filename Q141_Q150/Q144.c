//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;
void printStudentDetails(Student s) {
    printf("Student Details:\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    Student student;

    // Read student data
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter student's roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter student's marks: ");
    scanf("%f", &student.marks);

    // Print student data using the function
    printStudentDetails(student);

    return 0;
}
