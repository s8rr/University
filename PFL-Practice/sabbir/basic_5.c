#include <stdio.h>

int main() {
    float l, b, p;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    p = 2 * (l + b);
    printf("The perimeter of the rectangle is: %.2f units\n", p);
}
