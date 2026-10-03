## Q1. 
a. Write a C program to enter two numbers in variables a & b and swap their values without using a temporary/extra variable.
```c
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}

```
b. Write down the output of the following C program.
```c
int main()  
{  
    int i=1, j=1, k=1;  
    while ( i < 4 )
    {  
        printf("%d %d\n", j, k);  
         ++i;
        j += i;
        k +=( j+2 );  
    }  
}
```
```console
1 1
3 6
6 14
```
c. Write a C program to generate the following sequence:
```console
1  3  7  13  21  31  43  . . . nth term
```
```c
#include <stdio.h>

int main() {
    int n, i, term = 1, diff = 2;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term += diff;
        diff += 2;
    }

    return 0;
}
```
## Q2. 
b. Write a C program to take an integer (n) as input and print whether n is an Abundant number
```c
#include <stdio.h>

int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>n){
        printf("Abundant number");
    }
}
```
