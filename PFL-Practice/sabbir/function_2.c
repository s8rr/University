#include <stdio.h>

float areaOfCircle(float radius){
    int r = 3.14159 * radius * radius;
    return r;
}

int main(){
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
