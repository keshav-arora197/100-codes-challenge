//Q148: Take two structs as input and check if they are identical.
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;
int areStudentsIdentical(Student s1, Student s2) {
    if (s1.roll_no != s2.roll_no) {
        return 0; // Not identical
    }
    if (s1.marks != s2.marks) {
        return 0; // Not identical
    }
    // Compare names
    for (int i = 0; i < NAME_LENGTH; i++) {
        if (s1.name[i] != s2.name[i]) {
            return 0; // Not identical
        }
        if (s1.name[i] == '\0') {
            break; // End of string
        }
    }
    return 1; // Identical
}
int main() {
    Student student1, student2;

    // Read details for first student
    printf("Enter details for first student:\n");
    printf("Name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Roll Number: ");
    scanf("%d", &student1.roll_no);
    printf("Marks: ");
    scanf("%f", &student1.marks);
    getchar(); // Clear newline character from previous input

    // Read details for second student
    printf("\nEnter details for second student:\n");
    printf("Name: ");
    fgets(student2.name, sizeof(student2.name), stdin);
    printf("Roll Number: ");
    scanf("%d", &student2.roll_no);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    // Check if the two students are identical
    if (areStudentsIdentical(student1, student2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are not identical.\n");
    }

    return 0;
}
