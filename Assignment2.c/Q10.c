#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle with sides %.2f, %.2f and %.2f is valid.\n", a, b, c);
    } else {
         printf("The triangle with sides %.2f, %.2f and %.2f is not valid.\n", a, b, c);
    }
    return 0;
}