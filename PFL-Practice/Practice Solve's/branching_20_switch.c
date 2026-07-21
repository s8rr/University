#include<stdio.h>
#include<math.h>

int main()
{
   double m;
   scanf("%lf",&m);
   switch((int)m)
   {
   case 90 ... 100:
    printf("Grade A");
    break;
   case 60 ... 89:
    printf("Grade B");
    break;
   case 40 ... 59:
    printf("Grade C");
    break;
   default:
    printf("Grade F");
   }
}



