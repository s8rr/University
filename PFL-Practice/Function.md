### 1. Write a C program to find the cube of any number using a function.
```c
#include <stdio.h>
int cube(int b){
    int cube = b * b * b;
    return cube;
}

int main(){
    int c,is;
    scanf("%d",&c);

    is = cube(c);
    printf("cube is : %d",is);
}
```
### 2. Write a C program using functions to find the area of a circle where the radius is given.
```c
#include <stdio.h>

float areaOfCircle(float radius){
    int r = 3.14159 * radius * radius;
    return r;
}

int main(){
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
```
### 3. Write a C program to find the minimum between two numbers using functions.
```c
#include <stdio.h>

int mini(int a,int b){
    int minimum = a < b? a : b;
    return minimum;
}

int main(){
    int a, b;

    printf("Enter Number A & B: ");
    scanf("%d %d", &a,&b);

    int minimum = mini(a,b);

    printf("Minimum is  = %d\n", minimum);

    return 0;
}
```
### 4. Write a C program using functions to check whether a number is even or odd.
```c
#include <stdio.h>

int OddEvenCheck(int a){
    if(a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a;
    
    printf("Enter Number: ");
    scanf("%d", &a);

    if(OddEvenCheck(a)==1){
        printf("Even");
    }
    else printf("Odd");

    return 0;
}
```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
### 1. 
```c

```
