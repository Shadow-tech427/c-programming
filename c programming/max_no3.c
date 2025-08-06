#include<stdio.h>
int main()
{
    int a,b,c, max;
    printf("Enter 3 Number is: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b)
    b=a;
    if(c > b)
    b=c;
    printf("Max is %d", b);
    return 0;
}