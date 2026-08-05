#include <stdio.h>

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("The Least Significant Bit (LSB) of %d is SET (1).\n", num);
    } else {
        printf("The Least Significant Bit (LSB) of %d is NOT SET (0).\n", num);
    }

    return 0;
}
