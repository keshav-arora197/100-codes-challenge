//Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
typedef enum {
    MALE,
    FEMALE,
    OTHER       
}
Gender;
typedef struct {
    char name[50];
    int age;
    Gender gender;
} Person;
int main() {
    Person person;

    // Take user input for person's details
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    printf("Enter age: ");
    scanf("%d", &person.age);

    // Take user intput for gender  
    int genderInput;
    printf("Enter   gender (0 for MALE, 1 for FEMA  LE, 2 for OTHER): ");
    scanf("%d", &genderInput);
    person.gender = (Gender)genderInput;
    // Print person's details
    printf("\nPerson Details:\n");
    printf("Name: %s", person.name);
    printf("Age: %d\n", person.age);
    printf("Gender  : ");
    switch (person.gender) {
        case MALE:
            printf("MALE\n");
            break;      
        case    FEMALE:
            printf("FEMALE\n");
            break;
        case OTHER:
            printf("OTHER\n");
            break;
        default:    
            printf("Invalid gender\n");
            break;
    }   
    return 0;
}
