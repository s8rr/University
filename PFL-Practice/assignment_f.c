#include <stdio.h>

int trainSwapping(int a[], int n) {
    int i, j, t, swaps = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                swaps++;
            }
        }
    }
    return swaps;
}

int main() {
    int T, n, i, a[50], swaps;
    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        swaps = trainSwapping(a, n);

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }
    return 0;
}
