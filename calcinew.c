#include <stdio.h>
#include <math.h>

/* Function declarations */
void menu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double a, double b);
double squareroot(double a);
double logarithm(double a);
double modulo(double a, double b);

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
                if (b == 0)
                    printf("Division by zero is not allowed\n");
                else
                    printf("Result = %.2lf\n", divide(a, b));
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", power(a, b));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a < 0)
                    printf("Square root of negative number not allowed\n");
                else
                    printf("Result = %.2lf\n", squareroot(a));
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a <= 0)
                    printf("Logarithm of non-positive number not allowed\n");
                else
                    printf("Result = %.2lf\n", logarithm(a));
                break;

            case 8:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0)
                    printf("Modulo by zero is not allowed\n");
                else
                    printf("Result = %.2lf\n", modulo(a, b));
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}

/* Menu function */
void menu() {
    printf("===== Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Logarithm\n");
    printf("8. Modulo\n");
    printf("0. Exit\n");
}

/* Function definitions */
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

double modulo(double a, double b) {
    return fmod(a, b);
}
