#include <stdio.h>

int IsPrime(int a){
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int a,e;
    scanf("%d %d",&a,&e);
    for(int i = a;i < e; i++){
        if(IsPrime(i)==1){
            printf("%d ",i);
        }
    }
}
