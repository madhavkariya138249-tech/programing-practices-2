#include <stdio.h>

// Define a structure for student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5]; // Array to hold 5 students
    int i;

    // Input details for 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i+1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); // To read string with spaces

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Display the details of 5 students
    printf("Student Records:\n");
    printf("ID\tName\t\tMarks\n");
    printf("---------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
