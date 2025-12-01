//Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;
void modifyStudent(Student *s, const char *new_name, int new_roll_no, float new_marks) {
    // Modify the student data using pointer to struct
    snprintf(s->name, NAME_LENGTH, "%s", new_name);
    s->roll_no = new_roll_no;
    s->marks = new_marks;
}
int main() {
    Student student;
    Student *ptr = &student;

    // Initial data
    snprintf(ptr->name, NAME_LENGTH, "John Doe");
    ptr->roll_no = 101;
    ptr->marks = 85.5;

    // Display initial data
    printf("Initial Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    // Modify student data using the function
    modifyStudent(ptr, "Jane Smith", 102, 92.0);

    // Display modified data
    printf("\nModified Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
