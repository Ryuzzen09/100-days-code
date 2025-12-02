//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>

int main() {
    float a, b;
    char operator;

    printf("Enter 2 Numbers: ");
    scanf("%f %f %c", &a, &b, &operator);

    switch (operator) {
        case '+':
            printf("%.2f\n", a + b);
            break;
        case '-':
            printf("%.2f\n", a - b);
            break;
        case '*':
            printf("%.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%.2f\n", a / b);
            } else {
                printf("Not Possible\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("%.2f\n", (int)a % (int)b);
            } else {
                printf("Not Possible\n");
            }
            break;
        default:
            printf("Invalid Input\n");
    }

    return 0;
}
