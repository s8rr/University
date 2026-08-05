#include <stdio.h>

int main() {
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    a = a + b; 
    b = a - b; 
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
}
