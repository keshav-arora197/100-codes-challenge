//Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    char name[NAME_LENGTH];
    int id;
    float salary;
} Employee;

int main() {
    FILE *file;
    Employee emp_write, emp_read;

    // Take employee data as input
    printf("Enter employee's name: ");
    fgets(emp_write.name, sizeof(emp_write.name), stdin);
    printf("Enter employee's ID: ");
    scanf("%d", &emp_write.id);
    printf("Enter employee's salary: ");
    scanf("%f", &emp_write.salary);

    // Open the binary file in write mode
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write employee data to the binary file
    fwrite(&emp_write, sizeof(Employee), 1, file);
    fclose(file);
    printf("Employee data written to employee.dat successfully.\n");

    // Open the binary file in read mode
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Read employee data from the binary file
    fread(&emp_read, sizeof(Employee), 1, file);
    fclose(file);

    // Print the read employee data
    printf("\nEmployee Details Read from File:\n");
    printf("Name: %s", emp_read.name);
    printf("ID: %d\n", emp_read.id);
    printf("Salary: %.2f\n", emp_read.salary);

    return 0;
}
