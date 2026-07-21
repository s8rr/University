#include<stdio.h>

int main()
{
    char a;
    scanf("%c",&a);

    switch(a)
    {
    case 'r':
    case 'R':
        printf("RED");
        break;
    case 'g':
    case 'G':
        printf("GREEN");
        break;
    case 'b':
    case 'B':
        printf("BLUE");
        break;
    default:
        printf("BLACK");
    }

}

