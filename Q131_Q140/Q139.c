//Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>
typedef enum {
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
} Position;
int main() {
    Position pos;

    printf("Positions with their integer values:\n");
    for (pos = FIRST; pos <= FIFTH; pos++) {
        printf("%d: ", pos);
        switch (pos) {
            case FIRST:
                printf("FIRST\n");
                break;
            case SECOND:
                printf("SECOND\n");
                break;
            case THIRD:
                printf("THIRD\n");
                break;
            case FOURTH:
                printf("FOURTH\n");
                break;
            case FIFTH:
                printf("FIFTH\n");
                break;
        }
    }

    return 0;
}

