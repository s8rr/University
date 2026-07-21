#include<stdio.h>

int main(){
    int x;
    printf("Enter a number between 1 and 7: ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thursday");
        break;
    default:
        printf("Friday");
        break;
    }

}

