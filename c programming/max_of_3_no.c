#include<stdio.h>
int main()
{
    int a,b,c, max;
    printf("Enter 3 Number is: ");
    scanf("%d %d %d", &a, &b, &c);
    int max=a;
    if(b>max)max=b;
    if(c>max)max=c;
    printf("The maximum number is: %d\n", max);

    return 0;
}