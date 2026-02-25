#include <stdio.h>

int main() {
    double num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform operations
    printf("Addition: %.2lf\n", num1 + num2);
    printf("Subtraction: %.2lf\n", num1 - num2);
    printf("Multiplication: %.2lf\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2lf\n", num1 / num2);
    } else {
        printf("Division: Not possible (division by zero)\n");
    }

    return 0;
}
