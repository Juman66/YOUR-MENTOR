#include <stdio.h>

int main() {
    char operatar;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operatar);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);


    switch (operatar) {
        case '+':
            result = num1 + num2;

            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
