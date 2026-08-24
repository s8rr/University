#include<stdio.h>

int main()
{
   int n,i,j,a[1000];
   scanf("%d",&n);

   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
        int f=1;
    for(j=i-1;j>=0;j--){
        if(a[j]==a[i])
        {
            f=0;
            break;
        }
    }
if(f==1) printf("%d ",a[i]);
   }
}
