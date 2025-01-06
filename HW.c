#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    char operation;
    char choice;

    do {
        printf("Enter two numbers: ");
        if (scanf("%d %d", &a, &b) != 2) {
            printf("Invalid input. Please enter numbers only.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        printf("Enter operation (+, -, *, /, %%): ");
        scanf(" %c", &operation);

        switch (operation) {
            case '+':
                printf("The sum is: %d\n", a + b);
                break;
            case '-':
                printf("The difference is: %d\n", a - b);
                break;
            case '*':
                printf("The product is: %d\n", a * b);
                break;
            case '/':
                if (b != 0)
                    printf("The division result is: %.2f\n", (float)a / b);
                else
                    printf("Error: Division by zero!\n");
                break;
            case '%':
                if (b != 0)
                    printf("The modulus is: %d\n", a % b);
                else
                    printf("Error: Division by zero!\n");
                break;
            default:
                printf("Invalid operation.\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator. Goodbye!\n");
    return 0;
}
