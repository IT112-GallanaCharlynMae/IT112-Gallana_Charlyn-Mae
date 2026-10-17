#include <stdio.h>
#include <ctype.h>

int main() {
    int arr[100];
    int n, i, largest;
    char str[500];
    int vowels = 0;
    int ch;

    printf("====================================\n");
    printf("     LABORATORY EXERCISE #7-8\n");
    printf("====================================\n");

    // PART 1: Finding the Largest Element in an Array
    printf("\nPART 1: Finding the Largest Element\n");

    printf("How many elements do you want to enter? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid input! Enter a number from 1 to 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);

        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input! Please enter integers only.\n");
            return 1;
        }
    }

    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("\nThe largest element is: %d\n", largest);

    // Clear the remaining characters in the input line
    while ((ch = getchar()) != '\n' && ch != EOF) {
        /* Clear input */
    }

    // PART 2: Counting the Number of Vowels in a String
    printf("\nPART 2: Counting the Number of Vowels\n");

    printf("Enter a word or sentence: ");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Unable to read the sentence.\n");
        return 1;
    }

    for (i = 0; str[i] != '\0'; i++) {
        char letter = tolower((unsigned char)str[i]);

        if (letter == 'a' || letter == 'e' ||
            letter == 'i' || letter == 'o' ||
            letter == 'u') {
            vowels++;
        }
    }

    printf("Total number of vowels: %d\n", vowels);

    printf("\n====================================\n");
    printf("          PROGRAM COMPLETED\n");
    printf("====================================\n");

    return 0;
}
