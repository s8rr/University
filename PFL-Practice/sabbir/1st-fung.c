#include <stdio.h>
int cube(int b){
    int test = b * b * b;
    return test;
}

int main(){
    int c,is;
    scanf("%d",&c);

    is = cube(c);
    printf("cube is : %d",is);
}
