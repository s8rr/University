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
b. Write down the output of the following C program.
```c
#include <stdio.h>
int main() {
   int i, sum = 0;
   for (i = 1; i <= 10; i++) {
      sum += i; 
      if (i%4 == 0) 
         printf("Sum  = %d\n", sum);
   }
   printf("Sum = %d", sum);
   return 0;
}
```
```console
Sum  = 10
Sum  = 36
Sum = 55
```
c. Write a C program to take an integer as input and factorial of that number using a function named Factorial().
```c
#include <stdio.h>

int Factorial(int n) {
    int fact = 1, i;

    for (i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", Factorial(n));

    return 0;
}

```
## Q4. 
a. Mention the significance of break and continue keywords in a program
- break: Immediately stops the loop or switch statement and exits it.
- continue: Skips the current loop iteration and moves to the next iteration.

b. Write a C program to read 5 integer numbers and save in Number.txt file
```c
#include <stdio.h>

int main() {
    FILE *fp;
    int i, num;

    fp = fopen("Number.txt", "w");

    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }

    fclose(fp);

    return 0;
}

```
c. Write a C program to sum the number of even and odd integers stored in an array. Your program should read n integers from the user.
```c
#include <stdio.h>

int main() {
    int n, i, a[100], even = 0, odd = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even += a[i];
        else
            odd += a[i];
    }

    printf("%d %d", even, odd);

}

```

## Q5. 
a. Write down the output of the following C code.
```c
int day = 4;
switch (day) {
  case 6:
    printf(“Today is Saturday”);
    break;
  case 4:
    printf(“Today is Sunday”);
    break;
  default:
    printf(“Looking forward to the Weekend”);
}

```
```console
Today is Sunday
```
b. Write down the output of the following C program.
```c
#include<stdio.h>
int main(){
    int i, j, x;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            x= i - 2*j + 1;
            if(x < 1)
                continue;
            else
                printf("%d\n",x);
        }
    }
    printf("x = %d",x);
    return 0;
}
```
```console
1
2
x = -2
```
c. Write a C program to calculate the sum of the major diagonal and minor diagonal elements of the n-dimensional matrix.
```c
#include<stdio.h>

int main(){

    int i,j,n,a[100][100],majsum=0,minsum=0;
    scanf("%d",&n);

    for(i=0; i<n; i++){        
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<n; i++){
            majsum+= a [i][i]; 
    }
    printf("Sum of major diagonal = %d\n",majsum);
        for(i=0; i<n; i++){
            minsum+= a [i][n-1-i]; 
    }
    printf("Sum of minor diagonal = %d",minsum);
}
```
## Q6. 
a. Write down the properties of array.
b. Write down a C program that will generate the following triangle of numbers (using loops).
```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}
```
c.
```c
#include<stdio.h>
int m = 10;
void myFunction(int n){
    int y = 50;
    y++;
    printf("%d\n",m+n+y);
}
int main(){
    int x = 5;
    myFunction(x);
    m += x;
    myFunction(3*x);
    return 0;
}
```
- i. Identify the global and local variables from the code and explain their scopes.
[Hints: Scopes means the blocks from which the variables are accessible]
- ii.Write down the output of the given code.
i
Global Veriable m (which can be accessed by all the function)
Local veriable in myFunction are n y (n y can only be accessed by myFunction)
Local Veriable in main are x (x can only be accessed by main function)
ii
```console
66
81
```
