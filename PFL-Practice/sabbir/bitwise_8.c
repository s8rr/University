#include <stdio.h>

int main() {
    unsigned int num;
  
    printf("Enter any number: ");
    scanf("%u", &num);

    num |= (num >> 1);
    num |= (num >> 2);
    num |= (num >> 4);
    num |= (num >> 8);
    num |= (num >> 16);

    int highest_bit = 31 - __builtin_clz(num | 1);

    int final_pos = highest_bit - ((num == 0) * (highest_bit + 1));

    printf("The highest set bit position is: %d\n", final_pos);

    return 0;
}
