#include <stdio.h>
#include <stdlib.h>

// Define the structure for student information
struct Student {
    char name[50];
    int age;
    float grade;
};

// Function to add a new student
void addStudent(struct Student students[], int *count) {
    printf("Enter student name: ");
    scanf("%s", students[*count].name);

    printf("Enter student age: ");
    scanf("%d", &students[*count].age);

    printf("Enter student grade: ");
    scanf("%f", &students[*count].grade);

    (*count)++;
}

// Function to display all students
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
        printf("-----------------\n");
    }
}

int main() {
    struct Student students[100]; // Assuming a maximum of 100 students
    int count = 0;
    int choice;

    do {
        // Display menu
        printf("\nEducation System Menu:\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);

    return -1;
}
