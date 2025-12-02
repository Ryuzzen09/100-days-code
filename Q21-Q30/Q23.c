//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int days;
    printf("Enter Late Days: ");
    scanf("%d", &days);

    if (days > 30) {
        printf("Membership Cancelled\n");
    } else if (days > 25) {
        int a = days - 25;
        printf("Fine RS%d\n", 90 + a * 6);
    } else if (days > 15) {
        int b = days - 15;
        printf("Fine RS%d\n", 30 + b * 6);
    } else if (days > 5) {
        int c = days - 5;
        printf("Fine RS%d\n", 10 + c * 4);
    } else {
        printf("Fine RS%d\n", days * 2);
    }

    return 0;
}
