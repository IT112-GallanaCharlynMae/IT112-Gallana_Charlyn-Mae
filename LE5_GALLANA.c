#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("====================================\n");
    printf("       LABORATORY EXERCISE #5\n");
    printf("              LOOPS IN C\n");
    printf("====================================\n");

    while (1) {
        printf("Enter a number: ");

        if (scanf("%d", &number) != 1) {
            printf("Invalid input! Please enter an integer.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
                /* Clear invalid input */
            }

            continue;
        }

        if (number <= 0) {
            break;
        }

        sum += number;
    }

    printf("\nThe total sum of all positive numbers is: %d\n", sum);

    printf("====================================\n");
    printf("          PROGRAM ENDED\n");
    printf("====================================\n");

    return 0;
}