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
### What is a Pointer in C?

A pointer is a variable that stores the memory address of another variable.
```c
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
```
Explanation
   - int num = 10; → creates an integer variable.
   - int *ptr; → declares a pointer to an integer.
   - ptr = &num; → stores the address of num in ptr.
   - *ptr → accesses the value stored at that address, which is 10.
   - &num → gives the address of num.

In short:
- ptr → stores the address
- *ptr → gives the value at that address
- &num → gives the address of num
