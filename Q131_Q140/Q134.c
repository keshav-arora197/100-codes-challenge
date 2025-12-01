//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;
int main() {
    Status status;

    // Test each status value
    for (status = SUCCESS; status <= TIMEOUT; status++) {
        switch (status) {
            case SUCCESS:
                printf("Status: SUCCESS - Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("Status: FAILURE - Operation failed.\n");
                break;
            case TIMEOUT:
                printf("Status: TIMEOUT - Operation timed out.\n");
                break;
        }
    }

    return 0;
}
