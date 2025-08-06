#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    for(i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}