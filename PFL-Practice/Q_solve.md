### Write a C program to take an integer as input and factorial of that number using a function named Factorial().
```c
#include <stdio.h>
int Factorial(int n){
    int fac = 1, i;
    for(i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",Factorial(x));
}
```
