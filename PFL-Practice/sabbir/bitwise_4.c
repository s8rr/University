#include <stdio.h>

int main() {
    int num, n;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    printf("Enter bit position to get (0-31): ");
    scanf("%d", &n);
    int bit_status = (num >> n) & 1;
    printf("The %d-th bit of %d is: %d\n", n, num, bit_status);

    return 0;
}
