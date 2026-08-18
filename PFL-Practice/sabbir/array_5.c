#include <stdio.h>

int main() {
    int arr[100];
    int size, i, target, found = 0;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = 1;
            break; 
        }
    }

    if (found == 1) {
        printf("Element %d found at index %d (Position %d).\n", target, i, i + 1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
