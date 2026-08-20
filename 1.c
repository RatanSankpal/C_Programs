#include <stdio.h>

double calculator(double a, double b, char operator) {
    switch (operator) {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
                return 0;
            }
            return a / b;

        default:
            printf("Error: Invalid operator\n");
            return 0;
    }
}

int main() {
    double a, b;
    char op;

    printf("Enter the first and second numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);   

    printf("Result = %.2lf\n", calculator(a, b, op));

    return 0;
}