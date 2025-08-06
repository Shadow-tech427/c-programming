#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d", &n);
    if(n&1){
    printf("Odd number");
    }
    else{
    printf("Even number");
    }

    return 0;
}