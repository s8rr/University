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

### Differentiate between a character and a string in C. What is the purpose of the null character '\0' in a string?
| Character | String |
|---|---|
| A character is a single symbol. | A string is a sequence of characters. |
| Declared using `char`. | Declared using a `char` array. |
| Written inside single quotes `' '`. | Written inside double quotes `" "`. |
| Example: `char ch = 'A';` | Example: `char str[] = "Hello";` |
| Stores one character. | Stores multiple characters and ends with `'\0'`. |

### Purpose of the Null Character '\0'
The null character '\0' marks the end of a string in C. It tells C where the string ends

### Write a C program to toggle the case of vowels of a string.
```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int i, l;
    char st[1000];
    scanf( "%[^\n]", st);
    l=strlen(st);
    for(i=0;i<l;i++){
        if(toupper(st[i])=='A' || toupper(st[i])=='E' || toupper(st[i])=='I' || toupper(st[i])=='O' || toupper(st[i])=='U' ){
            if(islower(st[i])){
                st[i]-=32;
            }
            else{
                st[i]+=32;
            }
        }
    }
    printf("%s",st);
}
```
### Write a c program that checks if a string is Palindrome or not

```c
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int i, l;
    char st[1000],rv[1000];
    scanf( "%[^\n]", st);
    l=strlen(st);
    for(i=0;i<l;i++){
        rv[l-1-i]=st[i];
    }
    rv[l]='\0';
    if(strcmp(st,rv)==0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}
```
