### 1. Write a C program to print the first n natural numbers
```c
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}

```
### 2. Write a C program to print the first n odd/even natural numbers
```c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2){
        printf("%d ", i);
    }
    printf("\n");
    for (i = 2; i <= n; i += 2)
        printf("%d ", i);

    return 0;
}


```
### 3. Write a C program to print all even numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
```
### 4. Write a C program to print all odd numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
```
### 5. Write a C program to find the sum of all natural numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of natural numbers from 1 to %d = %d", n, sum);

    return 0;
}

```
### 6. Write a C program to find the sum of all even numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of even numbers between 1 and %d = %d", n, sum);

    return 0;
}
```
### 6. Write a C program to find the sum of all even numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of even numbers between 1 and %d = %d", n, sum);

    return 0;
}
```
