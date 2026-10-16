#include <stdio.h>

typedef struct Student_struct {
    char studentName[20];
    int rollNumber;
    float marks[3];
    float total;
    float average;
} Student;

int main() {

    int numStudents;

    printf("\n");
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    Student students[numStudents];
    char grades[numStudents];

    int i;

    for (i = 0; i < numStudents; ++i) {

        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].studentName);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for subject 1: ");
        scanf("%f", &students[i].marks[0]);

        printf("Enter marks for subject 2: ");
        scanf("%f", &students[i].marks[1]);

        printf("Enter marks for subject 3: ");
        scanf("%f", &students[i].marks[2]);

        students[i].total = students[i].marks[0] +
                            students[i].marks[1] +
                            students[i].marks[2];

        students[i].average = students[i].total / 3;

        if (students[i].average >= 90)
            grades[i] = 'A';
        else if (students[i].average >= 80)
            grades[i] = 'B';
        else if (students[i].average >= 70)
            grades[i] = 'C';
        else if (students[i].average >= 60)
            grades[i] = 'D';
        else
            grades[i] = 'F';
    }

    printf("\nStudent Records:\n");

    for (i = 0; i < numStudents; ++i) {

        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].studentName);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks in Subject 1: %.2f\n", students[i].marks[0]);
        printf("Marks in Subject 2: %.2f\n", students[i].marks[1]);
        printf("Marks in Subject 3: %.2f\n", students[i].marks[2]);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Average Marks: %.2f\n", students[i].average);
        printf("Grade: %c\n\n", grades[i]);
    }

    return 0;
}
