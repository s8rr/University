#include <stdio.h>

int main() {
    int arr[100], size, i,negativeCount = 0;

    printf("Enter the size of the array (maximum 100): ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] < 0) {
            negativeCount++;
        }
    }

    printf("Total number of negative elements = %d\n", negativeCount);

    return 0;
}
