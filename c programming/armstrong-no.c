#include<stdio.h>
int main()
{
    int rem , n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while(n > 0)
    {
        int rem = n % 10;
        printf("%d ", rem);
        n = n / 10;
    }
    // printf("%d", rem);
    return 0;
}