#include <stdio.h>

int main() {
    int num;
    char *status[] = {"NOT SET (0)", "SET (1)"};

    printf("Enter any number: ");
    scanf("%d", &num);

    int bits = sizeof(int) * 8;
    int msb_val = (num >> (bits - 1)) & 1;
    printf("The Most Significant Bit (MSB) of %d is %s.\n", num, status[msb_val]);

    return 0;
}
