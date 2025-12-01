//Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;
int main() {
    Student students[5];

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
    }

    // Print details of all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
