## Q1. 
a. Write a one-line statement using the conditional operator (?:) to print “ODD” if the number a is odd, otherwise print “EVEN”.

```c
printf("%s", (a % 2 == 0) ? "EVEN" : "ODD");
```

b. Rewrite the following code using WHILE loop:
```c
#include <stdio.h>  
int main()  
{  
    int i, j, k;  
    for(i=0, j=0, k=0; i<3; i++){
  
        printf("%d %d %d\n", i, j, k);  
        j += 2;  
        k += 3;  
    }  
}
```
```c
#include <stdio.h>  
int main() {  

    int i=0, j=0, k=0;
    while(i<3){
        printf("%d %d %d\n", i, j, k);  
        j += 2;  
        k += 3;  
        i++;
    }
}
```
c. Write a C program to find all factors of a number.
```c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

```

## Q2. 
a. A number n is called a beautiful number if the following conditions hold:
                   (i) n is divisible by 7 or 5 but not divisible by both.


```c
(n % 7 == 0) != (n % 5 == 0)
```

b. Rewrite the following code using WHILE loop:
```c
#include <stdio.h>  
int main()  
{  
    int i, j, k;  
    for(i=0, j=0, k=0; i<3; i++){
  
        printf("%d %d %d\n", i, j, k);  
        j += 2;  
        k += 3;  
    }  
}
```
```c
#include <stdio.h>  
int main() {  

    int i=0, j=0, k=0;
    while(i<3){
        printf("%d %d %d\n", i, j, k);  
        j += 2;  
        k += 3;  
        i++;
    }
}
```
c. Write a C program to find all factors of a number.
```c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

```

