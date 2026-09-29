#include <stdio.h>

int facto(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, facto(n));


    return 0;
}
