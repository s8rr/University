#include <stdio.h>

int main() {
    int n, i;
    int a[100], even[100], odd[100];
    int evenCount = 0, oddCount = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            even[evenCount] = a[i]; 
            evenCount++;            
        } else {
            odd[oddCount] = a[i];   
            oddCount++;             
        }
    }

    printf("\nEven elements (%d): ", evenCount);
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements (%d): ", oddCount);
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
