//Q143: Find and print the student with the highest marks.
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;
int main() {
    Student students[5];
    Student top_student;
    top_student.marks = -1.0; // Initialize with a value lower than any possible marks

    // Read details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar(); // Clear newline character from previous input
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Check if this student has the highest marks
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }

    // Print details of the student with the highest marks
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s", top_student.name);
    printf("Roll Number: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
