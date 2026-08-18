#include <stdio.h>

int main() {
    int i, n , x[7],sum=0,k;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Enter What index you want to Exclude:");
    scanf("%d",&k);

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        if(i!=k)
            sum+=x[i];
    }
    printf("Sum is %d",sum);
    return 0;
}
