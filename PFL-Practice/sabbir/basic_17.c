#include <stdio.h>
int main() {

    float sub1, sub2, sub3, sub4, sub5; 
    float total, average, percentage;
    printf("Enter the marks of five subjects (separated by space or enter):\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5.0;

    percentage = (total / 500.0) * 100;

    printf("Total Marks      = %.2f / 500.00\n", total);
    printf("Average Marks    = %.2f\n", average);
    printf("Marks Percentage = %.2f%%\n", percentage);

    return 0;
}
