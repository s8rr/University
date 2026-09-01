//Write a C program using functions to check whether a number is prime or not.
#include <stdio.h>

int isPrime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
