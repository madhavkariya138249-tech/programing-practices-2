#include <stdio.h>
#include <string.h>

// Define a structure for student
struct Student {
    int id;
    char name[50];
    float marks;
    int yearOfJoining; // Added year of joining
};

// Function to print students who joined in 2019
void printStudentsJoined2019(struct Student students[], int n) {
    int i;
    printf("Students who joined in 2019:\n");+
    printf("ID\tName\t\tMarks\tYear of Joining\n");
    printf("-----------------------------------------------\n");
    for(i = 0; i < n; i++) {
        if(students[i].yearOfJoining == 2019) {
            printf("%d\t%s\t\t%.2f\t%d\n",
                   students[i].id,
                   students[i].name,
                   students[i].marks,
                   students[i].yearOfJoining);
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

        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);

        printf("\n");
    }

    // Call the function to print students who joined in 2019
    printStudentsJoined2019(students, 5);

    return 0;
}
