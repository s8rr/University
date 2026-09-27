#include <stdio.h>

int trainSwapping(int a[], int n) {
    int i, j, t, swaps = 0;

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
    return swaps;
}

int main() {
    FILE *file;
    int T, n, i, j, a[50], swaps, results[50];

    file = fopen("input.txt", "r");

    if(file == NULL) {
        printf("Unable to open input.txt\n");
        return 1;
    }

    fscanf(file, "%d", &T);

    for(i = 0; i < T; i++) {
        fscanf(file, "%d", &n);

        for(j = 0; j < n; j++) {
            fscanf(file, "%d", &a[j]);
        }

        results[i] = trainSwapping(a, n);
    }

    fclose(file);

    file = fopen("input.txt", "w");

    if(file == NULL) {
        printf("Unable to open input.txt\n");
        return 1;
    }

    for(i = 0; i < T; i++) {
        fprintf(file, "Optimal train swapping takes %d swaps.\n", results[i]);
    }

    fclose(file);
    return 0;
}
