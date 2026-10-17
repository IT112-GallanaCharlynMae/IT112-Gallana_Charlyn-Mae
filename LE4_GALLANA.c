#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char section[50];
    float q1, q2, q3, q4;
    float average;
    char remarks[30];

    printf("====================================\n");
    printf("     STUDENT GRADE EVALUATION\n");
    printf("====================================\n");

    printf("Enter your complete name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your section: ");
    fgets(section, sizeof(section), stdin);
    section[strcspn(section, "\n")] = '\0';

    printf("\nEnter your four quarter grades:\n");

    printf("First Quarter: ");
    if (scanf("%f", &q1) != 1) {
        printf("Invalid grade input.\n");
        return 1;
    }

    printf("Second Quarter: ");
    if (scanf("%f", &q2) != 1) {
        printf("Invalid grade input.\n");
        return 1;
    }

    printf("Third Quarter: ");
    if (scanf("%f", &q3) != 1) {
        printf("Invalid grade input.\n");
        return 1;
    }

    printf("Fourth Quarter: ");
    if (scanf("%f", &q4) != 1) {
        printf("Invalid grade input.\n");
        return 1;
    }

    if (q1 < 0 || q1 > 100 ||
        q2 < 0 || q2 > 100 ||
        q3 < 0 || q3 > 100 ||
        q4 < 0 || q4 > 100) {
        printf("Grades must be between 0 and 100.\n");
        return 1;
    }

    average = (q1 + q2 + q3 + q4) / 4.0;

    if (average >= 90) {
        strcpy(remarks, "Outstanding");
    } else if (average >= 85) {
        strcpy(remarks, "Very Satisfactory");
    } else if (average >= 80) {
        strcpy(remarks, "Satisfactory");
    } else if (average >= 75) {
        strcpy(remarks, "Fair");
    } else {
        strcpy(remarks, "Failed");
    }

    printf("\n====================================\n");
    printf("        STUDENT GRADE REPORT\n");
    printf("====================================\n");
    printf("Complete Name : %s\n", name);
    printf("Section       : %s\n", section);
    printf("Average Grade : %.2f\n", average);
    printf("Remarks       : %s\n", remarks);
    printf("====================================\n");

    return 0;
}