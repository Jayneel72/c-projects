#include <stdio.h>

// User-defined functions for arithmetic operations
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { 
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    char choice;
    float num1, num2, result;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("q. Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'q' || choice == 'Q') {
            printf("Exiting calculator.\n");
            break;
        }

        switch (choice) {
            case '1':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '2':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '3':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case '4':
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (1);

    return 0;
}