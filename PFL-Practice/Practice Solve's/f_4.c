#include <stdio.h>

int area(int a){
   if(a%2 == 0){
    return 0;
   }
   else{
    return 1;
   }
}

int main() {
    int a;
    scanf("%d",&a);
    if(area(a)==0){
        printf("Even");
    }
    else{
        printf("ODD");
    }
}
