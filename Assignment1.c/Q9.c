#include<stdio.h>
int main()
{
    int amount;
    int n10, n5, n1;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    n10 = amount / 10;
    amount = amount % 10;

    n5 = amount / 5;
    amount = amount % 5;

    n1 = amount;

    printf("\nCurrency Notes:\n");
    printf("10 Rs Notes: %d\n", n10);
    printf("5 Rs Notes: %d\n", n5);
    printf("1 Rs Notes: %d\n", n1);

    return 0;
}