#include<stdio.h>
int main()
{
    int x, y, result = 1, i = 1;
    printf("Enter a Number: ");
    scanf("%d%d", &x, &y);
    while(i <= y)
    {
        result = result * x;
        i++;
    }
    printf("The %d is power %d is %d", x, y, result);
    return 0;
}