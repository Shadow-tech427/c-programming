#include<stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while(n >= 2)
    {
        fact = fact * n;
        n--;
    }
    printf("factorial is %d", fact);
    return 0;
}