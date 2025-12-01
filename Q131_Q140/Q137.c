//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
typedef enum {
    ADMIN,
    USER,
    GUEST
} UserRole;
int main() {
    UserRole role;

    // Test each user role
    for (role = ADMIN; role <= GUEST; role++) {
        switch (role) {
            case ADMIN:
                printf("Role: ADMIN - You have full access.\n");
                break;
            case USER:
                printf("Role: USER - You have limited access.\n");
                break;
            case GUEST:
                printf("Role: GUEST - You have guest access.\n");
                break;
        }
    }

    return 0;
}
