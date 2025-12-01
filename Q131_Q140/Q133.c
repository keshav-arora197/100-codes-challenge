//Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>
typedef enum {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} Month;
int get_days_in_month(Month month) {
    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case FEBRUARY:
            return 28; // Not accounting for leap years
        default:
            return 0; // Invalid month
    }
}
int main() {
    Month month;

    printf("Days in each month:\n");
    for (month = JANUARY; month <= DECEMBER; month++) {
        int days = get_days_in_month(month);
        switch (month) {
            case JANUARY:
                printf("January: %d days\n", days);
                break;
            case FEBRUARY:
                printf("February: %d days\n", days);
                break;
            case MARCH:
                printf("March: %d days\n", days);
                break;
            case APRIL:
                printf("April: %d days\n", days);
                break;
            case MAY:
                printf("May: %d days\n", days);
                break;
            case JUNE:
                printf("June: %d days\n", days);
                break;
            case JULY:
                printf("July: %d days\n", days);
                break;
            case AUGUST:
                printf("August: %d days\n", days);
                break;
            case SEPTEMBER:
                printf("September: %d days\n", days);
                break;
            case OCTOBER:
                printf("October: %d days\n", days);
                break;
            case NOVEMBER:
                printf("November: %d days\n", days);
                break;
            case DECEMBER:
                printf("December: %d days\n", days);
                break;
        }
    }

    return 0;
}
