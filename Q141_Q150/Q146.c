//Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
#define NAME_LENGTH 100
typedef struct {
    int day;
    int month;
    int year;
} Date;
typedef struct {
    char name[NAME_LENGTH];
    int id;
    Date joining_date;
} Employee;
int main() {
    Employee emp;

    // Read employee data
    printf("Enter employee's name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter employee's ID: ");
    scanf("%d", &emp.id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    // Print employee data
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joining_date.day, emp.joining_date.month, emp.joining_date.year);

    return 0;
}
