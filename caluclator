#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;
    
    printf("=== Simple Calculator ===\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("\nError: Cannot divide by zero!\n");
            } else {
                result = num1 / num2;
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("\nError: Invalid operator!\n");
            break;
    }
    
    return 0;
}
