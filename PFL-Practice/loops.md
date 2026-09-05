### 1. Write a C program to print the first n natural numbers
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
### 2. Write a C program to print the first n odd/even natural numbers
```c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2){
        printf("%d ", i);
    }
    printf("\n");
    for (i = 2; i <= n; i += 2)
        printf("%d ", i);

    return 0;
}


```
### 3. Write a C program to print all even numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
```
### 4. Write a C program to print all odd numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
```
### 5. Write a C program to find the sum of all natural numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of natural numbers from 1 to %d = %d", n, sum);

    return 0;
}

```
### 6. Write a C program to find the sum of all even numbers between 1 and n.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of even numbers between 1 and %d = %d", n, sum);

    return 0;
}
```
### 7. Write a C program to find the sum of all odd numbers between 1 to n.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of odd numbers between 1 and %d = %d", n, sum);

    return 0;
}
```
### 8. Write a C program to find the sum of every third integer ( 2 + 5 +8 + 11 + ... ) between 2 to n.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 3) {
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}

```
### 9. Write a C program to print all natural numbers in reverse (from n to 1).
```c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}

```
### 10. Write a C program to find the product of all natural numbers between 1 to n.
```c
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        product = product * i;
    }
    printf("Product of natural numbers from 1 to %d = %lld", n, product);
    return 0;
}

```
### 11. Write a C program to calculate the average of a list of n numbers.
```c
#include <stdio.h>

int main() {
    int n, i, num, sum = 0;
    float average;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }
    average = (float)sum / n;
    printf("Average = %.2f", average);
    return 0;
}

```
### 12. Write a C program to find the maximum of a list of n numbers.
```c
#include <stdio.h>

int main() {
    int n, i, num, max=0;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    scanf("%d", &max);

    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    printf("Maximum number = %d", max);
    return 0;
}

```
### 13. Write a C program to count the odd and even numbers from a list of n numbers.
```c
#include <stdio.h>

int main() {
    int n, i, num;
    int odd = 0, even = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Number of even numbers = %d\n", even);
    printf("Number of odd numbers = %d", odd);

    return 0;
}

```
### 14. Write a C program to print a multiplication table of any number.
```c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

```
### 15. Write a C program to find the power of a number using a for loop.
```c
#include <stdio.h>

int main() {
    int base, exponent, i;
    int power = 1;
    scanf("%d", &base);
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++) {
        power = power * base;
    }

    printf("%d^%d = %d", base, exponent, power);

    return 0;
}

```
### 16. Write a C program to calculate the factorial of a number.
```c
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %lld", n, factorial);

    return 0;
}

```
### 17. Write a C program to find all factors of a number.
```c
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are:\n", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

```
### 18. Write a C program to check whether a number is a Prime number or not.
```c
#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2)
        printf("%d is a Prime number.", n);
    else
        printf("%d is not a Prime number.", n);

    return 0;
}
```
### 18.[OR] Write a C program to find the sum of all odd numbers between 1 to n.
```c
#include<stdio.h>

int main(){
int i,n,f=1;
scanf("%d",&n);
for(i=2;i<=n-1;i++){
    if(n%i==0){
        f=0;
        break;
    }
}
if(f==1&&n!=1)printf("Prime");
else printf("Not Prime");
}

```
### 19. Write a C program to print the Fibonacci series up to n terms.
```c
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
```
### 19 OR
```c
#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            printf("%d ", a);
        }
        else if(i == 2)
        {
            printf("%d ", b);
        }
        else
        {
            c = a + b;
            a = b;
            b = c;

            printf("%d ", c);
        }
    }

    return 0;
}

```
### 20. Write a C program to count the number of digits in a number.
```c
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<0) n = -n;
    while (n > 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}


```
### 21. Write a C program to calculate the sum of the digits of a number.
```c
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;  
        sum += digit;      
        num /= 10;         
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

```
### 22. Write a C program to enter a number and print the reverse of that number.
```c
#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;           
        reverse = reverse * 10 + digit;
        num = num / 10;            
    }
    printf("Reverse of the number = %d\n", reverse);
    return 0;
}

```
### 23. Write a C program to enter a number and print it in words.
```c
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of odd numbers between 1 and %d = %d", n, sum);

    return 0;
}
```
### 24. Write a C program to check whether a number is a palindrome or not.
```c
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

```
### 25. Write a C program to check whether a number is an Armstrong number or not.
```c
#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for (int i = 1; num != 0; i++) {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}

```
### 26. Write a C program to find the HCF (GCD) of two numbers.
```c
#include <stdio.h>

int main() {
    int a, b, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF = %d", hcf);

    return 0;
}

```
### 27. Write a C program to find the LCM of two numbers.
```c
#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (lcm = a; ; lcm++) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}

```
### 28. Write a C program to find the one’s complement of a binary number.[NOT ACTUAL ANS]
```c
 #include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Complement = %d", ~num);

    return 0;
}

```
### 29. Write a C program to convert Decimal to the binary number system.
```c
#include <stdio.h>

int main() {
    int num, binary = 0, place = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 2;
        binary = binary + remainder * place;
        place = place * 10;
        num = num / 2;
    }

    printf("Binary number = %d", binary);

    return 0;
}

```
### 30. Write a C program to convert Decimal to Octal number system.
```c
#include <stdio.h>

int main() {
    int num, octal = 0, place = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 8;
        octal = octal + remainder * place;
        place = place * 10;
        num = num / 8;
    }

    printf("Octal number = %d", octal);

    return 0;
}

```
### 31. Write a C program to convert Hexadecimal to the decimal number system.
```c
#include <stdio.h>

int main() {
    char ch;
    int decimal = 0, value;

    printf("Enter hexadecimal number: ");

    while (1) {
        scanf("%c", &ch);

        if (ch == '\n')
            break;

        if (ch >= '0' && ch <= '9')
            value = ch - '0';
        else
            value = ch - 'A' + 10;

        decimal = decimal * 16 + value;
    }

    printf("Decimal = %d", decimal);

    return 0;
}

```
### 32. Write a C program to convert Octal to Hexadecimal number system.
```c
#include <stdio.h>

int main() {
    int octal, decimal = 0, place = 1, digit;
    int remainder;
    char hex[20];
    int i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    while (octal != 0) {
        digit = octal % 10;
        decimal = decimal + digit * place;
        place = place * 8;
        octal = octal / 10;
    }

    while (decimal != 0) {
        remainder = decimal % 16;

        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';

        decimal = decimal / 16;
        i++;
    }

    printf("Hexadecimal = ");

    for (i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);

    return 0;
}

```
# Nested Loop (4*)
### 1. Write a C program to print all Prime numbers between 1 to n.
```c
#include <stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++){
        count = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d ", i);
        }
    }

    return 0;
}

```
### 2. Write a C program to print all Perfect numbers between 1 to n.
```c
Write a C program to print all Perfect numbers between 1 to n.
```
### 3. Write a C program to print Pascal's triangle up to n rows.
```c
#include <stdio.h>

int main() {
    int rows, i, j, space, coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }

        printf("\n");
    }

    return 0;
}

```
