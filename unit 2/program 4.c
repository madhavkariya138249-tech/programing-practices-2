#include <stdio.h>
#include <string.h>

// Define a structure for student
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5], temp;
    int i, j;

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

    // Sort students by marks in descending order
    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(students[i].marks < students[j].marks) {
                // Swap the entire student structures
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Display sorted student records
    printf("Student Records Sorted by Marks (Descending):\n");
    printf("ID\tName\t\tMarks\n");
    printf("---------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
