#include <stdio.h>
#include <string.h>

// Define a structure for student
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to print names of students with grade > 5.0
void printHighGradeStudents(struct Student students[], int n) {
    int i;
    printf("Students with grade greater than 5.0:\n");
    for(i = 0; i < n; i++) {
        if(students[i].marks > 5.0) {
            printf("%s\n", students[i].name);
        }
    }
}

int main() {
    struct Student students[5];
    int i;

    // Input details for 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i+1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Call the function to print students with grade > 5.0
    printHighGradeStudents(students, 5);

    return 0;
}

