//branching_13
#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,x1,x2,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1 = %.2lf\nx2 = %.2lf",x1,x2);
    }
    else
        printf("No solution");

}








