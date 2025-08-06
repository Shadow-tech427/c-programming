#include<stdio.h>
int main()
{
    int cnt = 0, n;
    printf("Accept n: ");
    scanf("%d", &n);
    while(n > 0)
    {
        cnt ++;
        n = n / 10;
    }
    printf("count is %d", cnt);
    return 0;
}