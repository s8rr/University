### 12. Write a C program to add two matrices.
```c
#include<stdio.h>

int main(){

    int i,j,r,c,a[100][100],b[100][100];
    scanf("%d %d",&r,&c);
    // loop for input array a
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    // loop for input array b
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&b[i][j]);
    // adding 2 matrix in to a
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            a[i][j] += b[i][j];
        }
    }
    // printing array a (updated after adding 2 matrix)
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}

```
OR
```c
#include<stdio.h>

int main(){

    int i,j,r,c,a[100][100],b[100][100];
    scanf("%d %d",&r,&c);
    // loop for input array a
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    // loop for input array b
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d",&b[i][j]);
    // adding 2 matrix in to a
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            a[i][j] += b[i][j];
            printf("%d ",a[i][j]); // printing array a (updated after adding 2 matrix)
        }
        printf("\n");
    }

}




```
### 13. Write a C program to check whether two matrices are equal.
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
### 14. Write a C program to perform Scalar matrix multiplication.
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
### 15. Write a C program to find the sum of a matrix's main/major diagonal elements.
Major
```c
#include<stdio.h>

int main(){

    int i,j,n,a[100][100],sum=0;
    scanf("%d",&n);
    // loop for input array a
    for(i=0; i<n; i++){        
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++){
            sum+= a [i][i]; //  -->> for a[i][n-1-i] RT (Minor)
    }
    printf("%d",sum);
}
```
### 16. Write a C program to find the sum of the minor diagonal elements of a matrix.
```c
#include<stdio.h>

int main(){

    int i,j,n,a[100][100],sum=0;
    scanf("%d",&n);
    // loop for input array a
    for(i=0; i<n; i++){        
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++){
            sum+= a[i][n-1-i]; // a [i][i] -->> for LT (Major)
    }
    printf("%d",sum);
}
```
### 17. Write a C program to print the first n natural numbers
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
### 18. Write a C program to print the first n natural numbers
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
### 19. Write a C program to print the first n natural numbers
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
### 20. Write a C program to print the first n natural numbers
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
### 21. Write a C program to print the first n natural numbers
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
