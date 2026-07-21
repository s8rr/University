//branching_4
#include<stdio.h>

int main(){
    int a,b,c,m;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        m=a;
    else if(b>a && b>c)
        m=b;
    else
        m=c;

    printf("maximum = %d",m);


}



