#include <stdio.h>

int main() {
    int i, j, t, T, n, a[50], swaps;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        swaps = 0;
        for(i = 0; i < n; i++) {
            for(j = i + 1; j < n; j++) {
                if(a[i] > a[j]) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                    swaps++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }
    return 0;
}
