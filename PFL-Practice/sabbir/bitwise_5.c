#include <stdio.h>

int main() {
    int num, n;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter bit position to set (0-31): ");
    scanf("%d", &n);
    printf("\nBefore setting %d-th bit: %d (Binary details below)\n", n, num);
    int new_num = num | (1 << n);
    printf("After setting %d-th bit: %d\n", n, new_num);

    return 0;
}
