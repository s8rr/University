#include <stdio.h>

int main() {
    
    int i,n,a[1000],k,v;
    printf("Enter the array size: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter K(position) & V(Replace value): ");
    scanf("%d %d",&k,&v);
    for(i=n-1;i>=k-1;i--){
        a[i+1] = a[i];
    }
    a[k-1] = v;
    n++;
    
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
