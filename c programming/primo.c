#include<stdio.h>
int main()
{
    int cnt=0, i, n;
    printf("Enter a N: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            cnt++;
            break;
        }
    }
    if(cnt == 0)
    printf("Prime Number");
    else
    printf("Not Prime Number");
}