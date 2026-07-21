#include<stdio.h>

int main()
{
    int x,y;
    double a,b;
    scanf("%d %6lf %d",&x,&a,&y);

    printf("%06.2lf %05d %d", a, x, y);
}
