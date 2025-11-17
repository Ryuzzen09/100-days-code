/* Write a program to swap two numbers using a third variable. */
/* Name - Akshat*/
/* SAP_ID - 590028778 */
/* Course - BCA */
/* Batch - 6 */
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
