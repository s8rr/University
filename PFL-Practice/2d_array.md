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
#include<stdio.h>

int main(){

    int i,j,r,c,a[100][100],b[100][100],f=1;
    scanf("%d %d",&r,&c);
    for(i=0; i<r; i++){}
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        } 
    for(i=0; i<r; i++){}
        for(j=0; j<c; j++){
            scanf("%d",&b[i][j]);
        }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(a[i][j]!=b[i][j]){
                f=0;
                break;
            }
        }
        if(f==0) break; //optional
    }
    if(f==1) printf("Equal");
    else printf("Not Equal");

}
```
### 14. Write a C program to perform Scalar matrix multiplication.
```c
#include <stdio.h>

int main() {
    int n, scalar;
    int i, j;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    printf("Scalar Matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)
                printf("%d ", scalar);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}

```
### 15. Write a C program to find the sum of a matrix's main/major diagonal elements.
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
### 17. Write a C program to find the transpose of a matrix. (row will be Column & Column will be row)
```c
#include<stdio.h>

int main(){

    int i,j,r,c,a[100][100],tr[100][100];

    scanf("%d %d",&r,&c);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
            
    } 
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            tr[j][i]=a[i][j];
        }
    }
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ",tr[i][j]);
        }
        printf("\n");
    }

}



```
### 18. Write a C program to check whether a matrix is an identity matrix.
```c
#include<stdio.h>

int main(){

    int i,j,n,a[100][100],c1=0,c0=0;

    scanf("%d",&n);
    // input for array a
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // checking wheather its a Identity Matrix or not. 
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i == j && a[i][j] == 1){ // i == j && a[i][j] == 1 c1 = should be n like if n = 5 c1 should be 5
                c1++;
            }
            else if(i != j && a[i][j] == 0){ // i != j && a[i][j] == 0 c0 = should be n*n-n like if n = 5 c0 should be 5*5-5 = 20 
                c0++;                        // coz in a square matrix there is total n*n element and since we have 1 on the diagonal axis 
            }                                // thats why we -n after the multiplication 
        }
    }

    if(c1==n && c0==n*n-n) printf("Identity");
    else printf("Not Identity");

}

```
### 19. Write a C program to check whether a matrix is sparse.
```c
#include<stdio.h>

int main(){

    int i,j,r,c,a[100][100],count=0;

    scanf("%d %d",&r,&c);
    // array input
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // checking if the eliment is 0 or not. if == 0 count else dont.
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(a[i][j]==0)
                count++;
        }
    }
            
    if(count > (r*c)/2){
        printf("Sparse Matrix");
    }
    else{
        printf("Not a Sparse Matrix");
    }

}
```
### 20. Write a C program to check whether a matrix is symmetric.
```c

```
### 21. Write a C program to print Pascal's triangle up to n rows.
```c
#include<stdio.h>

int main(){

    int i,j,n,a;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        a=1;

        for(j=0; j<n-i-1; j++){
            printf(" ");
        }

        for(j=0; j<=i; j++){
            printf("%d ",a);
            a=a*(i-j)/(j+1);
        }
        printf("\n");
    }

}
```
