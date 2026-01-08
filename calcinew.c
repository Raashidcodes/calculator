#include <stdio.h>
#include <math.h>

// Function declarations
//to show modification
void menu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double a, double b);
double squareroot(double a);
double logarithm(double a);

int main() {
    int choice;
    double a, b;

    do {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", add(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", subtract(a, b));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", multiply(a, b));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0)
                    printf("Result = %.2lf\n", divide(a, b));
                else
                    printf("Error: Division by zero\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", power(a, b));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a >= 0)
                    printf("Result = %.2lf\n", squareroot(a));
                else
                    printf("Error: Square root of negative number\n");
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result = %.2lf\n", logarithm(a));
                else
                    printf("Error: Log of non-positive number\n");
                break;

            case 0:
                printf("Calculator exited.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

        printf("\n");

    } while (choice != 0);

    return 0;
}

// Menu function
void menu() {
    printf("===== ADVANCED CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (a^b)\n");
    printf("6. Square Root\n");
    printf("7. Logarithm (ln)\n");
    printf("0. Exit\n");
}

// Operation functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

double squareroot(double a) {
    return sqrt(a);
}

double logarithm(double a) {
    return log(a);
}
