#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 2 Numbers: ");
    scanf("%d", &a,&b);
    printf("Before swapping \n A = %d \n B = %d", a,b);
    c=b;
    b=a;
    a=c;
    printf("\n After swapping \n A = %d \n B = %d", a,b);

    return 0;
}