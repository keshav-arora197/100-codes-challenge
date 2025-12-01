//Q135: Assign explicit values starting from 10 and print them.

#include <stdio.h>
typedef enum {
    ALPHA = 10,
    BETA,
    GAMMA,
    DELTA,
    EPSILON
} GreekLetter;
int main() {
    GreekLetter letter;

    printf("Greek letters with explicit values starting from 10:\n");
    for (letter = ALPHA; letter <= EPSILON; letter++) {
        printf("%d: ", letter);
        switch (letter) {
            case ALPHA:
                printf("ALPHA\n");
                break;
            case BETA:
                printf("BETA\n");
                break;
            case GAMMA:
                printf("GAMMA\n");
                break;
            case DELTA:
                printf("DELTA\n");
                break;
            case EPSILON:
                printf("EPSILON\n");
                break;
        }
    }

    return 0;
}
