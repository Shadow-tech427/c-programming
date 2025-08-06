#include<stdio.h>
int main()
{
    int cnt=0, i, n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        cnt++;
    }
    if(cnt == 2)
    printf("Prime Number");
    else
    printf("Not Prime Number");
    return 0;
}