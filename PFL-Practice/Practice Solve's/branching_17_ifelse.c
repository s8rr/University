#include<stdio.h>

int main(){
    int x;
    printf("Enter a number between 1 and 7: ");
    scanf("%d",&x);
    if(x==1)
        printf("Saturday");
    else if(x==2)
        printf("Sunday");
    else if(x==3)
        printf("Monday");
    else if(x==4)
        printf("Tuesday");
    else if(x==5)
        printf("Wednesday");
    else if(x==6)
        printf("Thursday");
    else
        printf("Friday");
}
