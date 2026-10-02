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
