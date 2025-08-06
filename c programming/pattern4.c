#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a No: ");
    scanf("%d", &n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            printf(" #");
            else
            printf(" *");
        }
        printf(" \n");
    }
}