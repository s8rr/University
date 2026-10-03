### Write a C program to take an integer as input and factorial of that number using a function named Factorial().
```c
#include <stdio.h>
int Factorial(int n){
    int fac = 1, i;
    for(i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",Factorial(x));
}
```
### Write a c program to read 5 integer numbers and save in Number.txt file
```c
#include <stdio.h>

int main() {
    FILE *file;
    int num, i;

    file = fopen("Number.txt", "w");

    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }

    fclose(file);
    return 0;
}

```
