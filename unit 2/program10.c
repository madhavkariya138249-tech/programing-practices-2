#include <stdio.h>
#include <string.h>

// Define structure for date
struct Date {
    int day;
    int month;
    int year;
};

// Define structure for student, including nested Date
struct Student {
    int rollno;
    char name[20];
    struct Date dob;  // Nested structure
    float score;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Date of Birth (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("Enter Score: ");
    scanf("%f", &s.score);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);
    printf("Score: %.2f\n", s.score);

    return 0;
}
