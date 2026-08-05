#include <stdio.h>

int main() {
    int num, n;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter bit position to clear (0-31): ");
    scanf("%d", &n);
    printf("\nBefore clearing %d-th bit: %d\n", n, num);
    int new_num = num & (~(1 << n));
    printf("After clearing %d-th bit: %d\n", n, new_num);

    return 0;
}
