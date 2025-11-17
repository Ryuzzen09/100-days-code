/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
/*Name-Akshat*/
/*SAP_ID-590028778*/
/*course-BCA*/
/*Batch-6*/
#include <stdio.h>
int main (){
    printf ("Name-HARSH\nSAP_ID-590028742\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int s;
    int h;
    int m;
    int ss;
    printf("enter the time in sec = ");
    scanf("%d",&s);
    m=(s%3600/60);
    h=(s/60)/60;
    ss=((s%3600)%60)%60;
    printf("time after formatting will be = %.2d:%.2d:%.2d",h,m,ss);
    return 0;
