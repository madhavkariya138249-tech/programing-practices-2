#include <stdio.h>

// Define a structure for date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date1, date2;

    // Input first date
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input second date
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare dates
    if(date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }

    return 0;
}
