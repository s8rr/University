#include <stdio.h>
double P = 3.1416;
double area(double r){
    return P * r * r;
}

int main() {
    double n;
    scanf("%lf",&n);
    printf("%lf",area(n));
}
