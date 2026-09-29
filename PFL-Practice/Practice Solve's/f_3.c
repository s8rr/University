#include <stdio.h>

int area(int a,int b){
   return (a < b)? a : b ;
}

int main() {
    int a,b;
    scanf("%d %d",&a ,&b);
    printf("Minimum is %d",area(a,b));
}
