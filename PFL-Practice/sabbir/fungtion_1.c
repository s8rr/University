//Write a C program to find the cube of any number using a function.
#include <stdio.h>
int cube(int b){
    int cube = b * b * b;
    return cube;
}

int main(){
    int c,is;
    scanf("%d",&c);

    is = cube(c);
    printf("cube is : %d",is);
}
