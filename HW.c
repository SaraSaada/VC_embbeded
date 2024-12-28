#include <stdio.h>

int main() {
    int a, b;
    char operation;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operation (+, -, *, /): ");
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
        default:
            printf("Invalid operation.\n");
    }
    return 0;
}
