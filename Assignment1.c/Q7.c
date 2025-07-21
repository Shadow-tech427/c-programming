#include<stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter 2 Integers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping using a temporary variable: \n");
    printf("a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping using + and -:\n");
    printf("a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    if (a != 0 && b != 0) {
        a = a * b;
        b = a / b;
        a = a / b;
        printf("\nAfter swapping using * and /:\n");
        printf("a = %d, b = %d\n", a, b);
    } else {
        printf("\nCannot use * and / if one number is 0 (division by zero).\n");
    }
    return 0;
}