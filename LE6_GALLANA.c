#include <stdio.h>

// Function declarations
float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    do {
        printf("\n====================================\n");
        printf("       ARITHMETIC CALCULATOR\n");
        printf("====================================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit Program\n");
        printf("====================================\n");
        printf("Choose an operation (1-5): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
                /* Clear invalid input */
            }

            continue;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter the first number: ");
            if (scanf("%f", &num1) != 1) {
                printf("Invalid number input!\n");

                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) {
                    /* Clear invalid input */
                }

                continue;
            }

            printf("Enter the second number: ");
            if (scanf("%f", &num2) != 1) {
                printf("Invalid number input!\n");

                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) {
                    /* Clear invalid input */
                }

                continue;
            }
        }

        switch (choice) {
            case 1:
                result = addition(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n",
                       num1, num2, result);
                break;

            case 2:
                result = subtraction(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n",
                       num1, num2, result);
                break;

            case 3:
                result = multiplication(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n",
                       num1, num2, result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = division(num1, num2);
                    printf("Result: %.2f / %.2f = %.2f\n",
                           num1, num2, result);
                }
                break;

            case 5:
                printf("Thank you for using the calculator!\n");
                printf("Program exited successfully.\n");
                break;

            default:
                printf("Invalid choice! Please select from 1 to 5.\n");
        }

    } while (choice != 5);

    return 0;
}

// Function definitions
float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}