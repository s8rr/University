#include <stdio.h>

int main() {
    float cm, meter, km;
    printf("Enter length in centimeters: ");
    scanf("%f", &cm);

    meter = cm / 100.0;       // 1 meter = 100 centimeters
    km = cm / 100000.0;     // 1 kilometer = 100,000 centimeters

    printf("Length in Meters = %.2f m\n", meter);
    printf("Length in Kilometers = %.5f km\n", km);
}
