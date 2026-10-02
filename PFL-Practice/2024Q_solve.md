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

b. Write down the output of the following C program.
```c
#include<stdio.h>  
void main ()  
{  
    int i;  
    for(i=0;i<10;i++)  
    {  
        i = 2*i + 1;  
        printf("%d  ",i);  
        if( i % 5 == 0) i -= 2;
    }  
} 

```
```console
1  5  9 
```
c. Write a C program that takes a string as input and check whether the string is palindrome or not.
```c
## sir's version
#include <stdio.h>
#include <string.h>

int main() {
    int i, l;
    char st[1000], rv[1000];

    gets(st);
    l = strlen(st);

    for(i = 0; i < l; i++)
        rv[l - 1 - i] = st[i];

    rv[l] = '\0';

    if(strcmp(st, rv) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

```
```c
#include <stdio.h>
#include <string.h>

int main() {
    int i, l;
    char st[1000], rv[1000];

    fgets(st, sizeof(st), stdin);
    st[strcspn(st, "\n")] = '\0';

    l = strlen(st);

    for(i = 0; i < l; i++)
        rv[l - 1 - i] = st[i];

    rv[l] = '\0';

    if(strcmp(st, rv) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

```

## Q3. 
a.Rewrite the following code snippet using IF-ELSEIF ladder:
```c
    char op;
    int num1, num2, result=0;
    scanf("%d %c %d", &num1, &op, &num2);
    switch(op){
        case '*': result = num1 * num2;
                      break;
         case '/': result = num1 / num2;
                      break;
         default: printf("Invalid operator");}
    printf("%d %c %d = %d", num1, op, num2, result);
}

```
```c
char op;
int num1, num2, result = 0;

scanf("%d %c %d", &num1, &op, &num2);

if (op == '*')
    result = num1 * num2;
else if (op == '/')
    result = num1 / num2;
else
    printf("Invalid operator");

printf("%d %c %d = %d", num1, op, num2, result);

```
