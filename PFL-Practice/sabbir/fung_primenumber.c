#include <stdio.h>

int isPrime(int n)
{
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

    for(int i=2;i<num;i++){  
        if (isPrime(i)){
            printf("%d \n",i);
        }
    }
    return 0;
}
