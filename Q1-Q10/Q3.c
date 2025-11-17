/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
/*Name-Akshat*/
/*SAP_ID-590028778*/
/*course-BCA*/
/*Batch-6*/
#include <stdio.h>
int main(){
    int a;
    int b;
    int Perimeter;
    int Area;
    printf("enter the Length of Rectangle : ");
    scanf("%d",&a);
    printf("enter the Breath of Rectangle : ");
    scanf("%d",&b);
    Perimeter=2*(a+b);
    printf("perimeter of Rectangle = %d\n",Perimeter);
    Area=a*b;
    printf("Area of Rectangle %d\n",Area);
    return 0;
}
