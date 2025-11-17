/*Write a program to convert temperature from Celsius to Fahrenheit.*/
/* Name - Akshat */
/* SAP_ID - 590028778 */
/* Course - BCA */
/* Batch - 6 */
#include<stdio.h>
int main(){
    float celsius, fahrenheit; 
    printf("Enter temperature in Celsius: "); 
    scanf("%f", &celsius); 
    fahrenheit = (celsius * 9 / 5) + 32; 
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit); 
    return 0;
}
