#include <stdio.h>

int mini(int a,int b){
    int minimum = a < b? a : b;
    return minimum;
}

int main(){
    int a, b;

    printf("Enter Number A & B: ");
    scanf("%d %d", &a,&b);

    int minimum = mini(a,b);

    printf("Minimum is  = %d\n", minimum);

    return 0;
}
