#include <stdio.h> 
#include <math.h>  

int main() {     
    double number, square_root;     
    printf("Enter any number Positive: ");     
    scanf("%lf", &number);     
    
    square_root = sqrt(number);         
    printf("The square root of %.2lf is %.2lf\n", number, square_root);     
    
    return 0; 
}
