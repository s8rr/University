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
    FILE *file;
    int T, n, i, a[50], swaps;

    file = fopen("input.txt", "r");

    if(file == NULL) {
        printf("Unable to open input.txt\n");
        return 1;
    }

    fscanf(file, "%d", &T);

    while(T--) {
        fscanf(file, "%d", &n);

        for(i = 0; i < n; i++) {
            fscanf(file, "%d", &a[i]);
        }

        swaps = trainSwapping(a, n);

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    fclose(file);
    return 0;
}
