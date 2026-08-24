#include<stdio.h>

int main(){
   int n,i,a[1000],even[1000],odd[1000],ec=0,oc=0;
   scanf("%d",&n);

   for(i=0;i<n;i++){
        scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
        if(a[i]%2==0){
            even[ec]=a[i];
            ec++;
         }
        else{
            odd[oc]=a[i];
            oc++;
        }
   }
   for(i=0; i<ec; i++){
        printf("%d ",even[i]);
   }
    printf("\n");
    for(i=0; i<oc; i++){
        printf("%d ",odd[i]);
   }
}
