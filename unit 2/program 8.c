#include <stdio.h>
#include <string.h>

// Structure example
struct Student {
    int id;
    float marks;
    char grade;
};

// Union example
union Data {
    int id;
    float marks;
    char grade;
};

int main() {
    // Structure example
    struct Student s1;
    s1.id = 101;
    s1.marks = 88.5;
    s1.grade = 'A';

    printf("Structure Example:\n");
    printf("ID: %d\n", s1.id);
    printf("Marks: %.2f\n", s1.marks);
    printf("Grade: %c\n", s1.grade);
    printf("Size of structure: %zu bytes\n\n", sizeof(s1));

    // Union example
    union Data d1;
    d1.id = 101;
    printf("Union Example after setting id:\n");
    printf("ID: %d\n", d1.id);

    d1.marks = 88.5; // Overwrites previous value
    printf("Union Example after setting marks:\n");
    printf("Marks: %.2f\n", d1.marks);
    printf("ID (corrupted now): %d\n", d1.id);

    d1.grade = 'A'; // Overwrites again
    printf("Union Example after setting grade:\n");
    printf("Grade: %c\n", d1.grade);
    printf("Marks (corrupted now): %.2f\n", d1.marks);

    printf("Size of union: %zu bytes\n", sizeof(d1));

    return 0;
}
