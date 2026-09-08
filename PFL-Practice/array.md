### 1. Write a C program to find the sum of all elements of an array.
```c
#include<stdio.h>

int main(){

    int i,n,a[1000],sum=0;
    scanf("%d",&n);
    // input array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // calculating sum
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%d",sum);

}
```
### 2. Write a C program to find the sum of all array elements except the index value /element.
```c
#include<stdio.h>

int main(){
    int i,n,a[1000],sum=0,k;
    scanf("%d",&n);
    // array input
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // k value input
    scanf("%d",&k);
    // sum of all element value except k
    for(i=0;i<n;i++){
        if(i!=k)
            sum+=a[i];
    }
    printf("%d",sum);

}
```
### 3. Write a C program to find the maximum/minimum element of an array.
MAX
```c
#include<stdio.h>

int main(){
    int i,n,a[1000],max;
    scanf("%d",&n);
    // array input
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    // max = index value 0 element
    max=a[0];
    // checking if other element are grater then max if so max = that element.
    for(i=1; i<n; i++){
        if(max<a[i])
            max=a[i];
    }
    printf("Maximum = %d",max);

}

```
MINIMUM
```c
#include<stdio.h>

int main(){
    int i,n,a[1000],min;
    scanf("%d",&n);
    // array input
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    // min = index value 0 element
    min=a[0];
    // checking if other element are less then min if so min = that element.
    for(i=1; i<n; i++){
        if(min>a[i])
            min=a[i];
    }
    printf("Minimum = %d",min);

}
```

### 4. Write a C program to count the total number of negative elements in an array.
```c
#include<stdio.h>

int main(){
    int i,n,a[1000],c=0;
    scanf("%d",&n);
    // array input
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // checking if the value is Negative or not if so c++ mean count + 1 
    for(i=0;i<n;i++){
        if(a[i]<0) // a[i] < 0 if true mean its negative
            c++;
    }
    printf("Total Negative = %d",c);

}
```
### 5. Write a C program to search for an element in an array.
```c
#include<stdio.h>

int main(){
    int i,n,a[1000],k,f=0;
    scanf("%d",&n);
    // array input
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // input k value for seach
    scanf("%d",&k);
    // checking if k value is in the array if yes f = true and loop breaks.
    for(i=0;i<n;i++){
        if(a[i] == k){
            f = 1;
            break;
        }
    }
    // if f == 1 it means the value is in the element 
    if(f==1) {   //else No (if f == 0 it means its not in the array)
        printf("Yes");
    }
    else{
        printf("No");
    }
}
```
### 6. Write a C program to delete an element in an array at a specified position.
```c
#include<stdio.h>

int main(){
    int i,n,a[1000],k;
    scanf("%d",&n);
    // array input
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // geting the position to delete 
    scanf("%d",&k);
    // deleting the positon from array
    for(i=k-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    // since we removed a element the array size is n - 1
    n--;
    // printing updated array
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
```
### 7. Write a C program to insert an element from an array at a specified position.
```c


```
### 8. Write a C program to left-rotate an array.
```c


```
### 9. Write a C program to put even and odd elements in two separate arrays.
```c


```
### 10. Write a C program to print all unique elements in the array.
```c


```
### 11. Write a C program to sort the elements of an array in ascending or descending order.
```c


```
