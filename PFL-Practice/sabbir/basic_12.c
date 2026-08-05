#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    double x, y, result;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (y): ");
    scanf("%lf", &y);
    result = pow(x, y);
    printf("%.2lf ^ %.2lf = %.2lf\n", x, y, result);
}
