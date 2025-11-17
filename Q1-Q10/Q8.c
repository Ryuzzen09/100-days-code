/*Write a program to find and display the sum of the first n natural numbers.*/
/*Name-Akshat*/
/*SAP_ID-590028778*/
/*course-BCA*/
/*Batch-6*/
#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum=%d\n", sum);
    return 0;
}
