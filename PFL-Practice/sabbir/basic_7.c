#include <stdio.h>

int main() {
    float r, d, c, a;
    float PI = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    d = 2 * r;
    c = 2 * PI * r;
    a = PI * r * r;

    printf("Diameter = %.2f\n", d);
    printf("Circumference = %.2f\n", c);
    printf("Area = %.2f\n", a);
}
