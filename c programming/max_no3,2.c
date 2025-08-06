#include<stdio.h>
int main()
{
    int a,b,c, max;
    printf("Enter 3 Number is ");
    scanf("%d%d%d", &a, &b, &c);
    b = (a > b)? a:b;
    b = (c > b)? c:b;
    printf("Max no is %d", b);
    return 0;
}