#include <stdio.h>

/* Function declaration */
double add(double a, double b);

int main() {
    double a, b;

    printf("Collaborative Calculator\n");
    printf("Addition Operation\n");

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("Result = %.2lf\n", add(a, b));

    return 0;
}

/* Addition function */
double add(double a, double b) {
    return a + b;
}
