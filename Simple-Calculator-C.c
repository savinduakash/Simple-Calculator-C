// Simple calculator

#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu;
    float num1, num2, result;

    printf("Enter a number for action\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");

    printf("Enter a number: ");
    scanf("%d", &menu);

    printf("\n");

    switch (menu) {
        case 1:
            printf("You Entered Addition\n");
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);

            result = num1 + num2;
            printf("Result is: %.2f\n", result);
            break;

        case 2:
            printf("You Entered Subtraction\n");
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);

            result = num1 - num2;
            printf("Result is: %.2f\n", result);
            break;

        case 3:
            printf("You Entered Multiplication\n");
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);

            result = num1 * num2;
            printf("Result is: %.2f\n", result);
            break;

        case 4:
            printf("You Entered Division\n");
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);

            if (num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                result = num1 / num2;
                printf("Result is: %.2f\n", result);
            }
            break;

        default:
            printf("Invalid Choice\n");
            break;
    }

    return 0; 
}
