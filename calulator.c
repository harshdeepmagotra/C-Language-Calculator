#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("\n================================");
    printf("\n       SIMPLE CALCULATOR");
    printf("\n================================");

    printf("\n\nEnter First Number: ");
    scanf("%d", &num1);

    printf("Enter Operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    switch(operator)
    {
        case '+':
            printf("\nResult = %d", num1 + num2);
            break;

        case '-':
            printf("\nResult = %d", num1 - num2);
            break;

        case '*':
            printf("\nResult = %d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
            {
                printf("\nResult = %.2f", (float)num1 / num2);
            }
            else
            {
                printf("\nError! Division by zero is not possible.");
            }
            break;

        case '%':
            if(num2 != 0)
            {
                printf("\nResult = %d", num1 % num2);
            }
            else
            {
                printf("\nError! Modulus by zero is not possible.");
            }
            break;

        default:
            printf("\nInvalid Operator!");
    }

    printf("\n\n================================");
    printf("\n       THANK YOU!");
    printf("\n================================");

    return 0;
}