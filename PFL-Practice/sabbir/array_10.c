#include <stdio.h>

int main() {
    int n, i, j;
    int a[100];
    int isUnique;

    // 1. Get array size and elements
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nUnique elements in the array: ");
    for(i = 0; i < n; i++) {
        isUnique = 1; 
        
        for(j = 0; j < n; j++) {
            if(i != j && a[i] == a[j]) {
                isUnique = 0; 
                break;        
            }
        }

        if(isUnique == 1) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}
