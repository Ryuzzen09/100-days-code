/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
/*Name-Akshat*/
/*SAP_ID-590028778*/
/*course-BCA*/
/*Batch-6*/
#include <stdio.h>
int main(){
    float r;
    float Area;
    float Circumference;
    printf("enter the value of Radius : ");
    scanf("%f",&r);
    Area=3.14*r*r;
    printf("Area of Circle = %.2f\n",Area);
    Circumference=2*3.14*r;
    printf("Circumference of Circle = %.2f\n",Circumference);
    return 0;
}
