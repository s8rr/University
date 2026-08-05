#include <stdio.h>

int main() {
    int a, b, t;
    scanf("%d", &a);
    scanf("%d", &b);
    t = a;
    a = b;    
    b = t;
    printf("After swapping:  a = %d, b = %d\n", a, b);
}
