#include <stdio.h>

int OddEvenCheck(int a){
    if(a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a;
    
    printf("Enter Number: ");
    scanf("%d", &a);

    if(OddEvenCheck(a)==1){
        printf("Even");
    }
    else printf("Odd");

    return 0;
}
