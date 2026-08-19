#include <stdio.h>

int main() {
    int n, i, j, temp, choice;
    int a[100];

    // 1. Get array size and elements
    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 2. Ask user for sorting direction
    printf("\nChoose sorting order:\n");
    printf("1. Ascending order (Smallest to Largest)\n");
    printf("2. Descending order (Largest to Smallest)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // 3. Bubble Sort Logic
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            
            // Condition for Ascending Order
            if(choice == 1 && a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
            // Condition for Descending Order
            else if(choice == 2 && a[j] < a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    // 4. Print the Sorted Array
    printf("\nSorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
