#include <stdio.h>

int main() {
    float celsius, fahrenheit;
  
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula (using 9.0 and 5.0 to force floating-point division)
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}
