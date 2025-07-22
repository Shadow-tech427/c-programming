#include<stdio.h>
int main()
{
    int q1, q2, q3;
    float r1, r2, r3;
    float total, discount, netAmount;

    printf("Enter quantity and rate of item 1: ");
    scanf("%d %f", &q1, &r1);
    printf("Enter quantity and rate of item 2: ");
    scanf("%d %f", &q2, &r2);
    printf("Enter quantity and rate of item 3: ");
    scanf("%d %f", &q3, &r3);

    total = (q1 * r1) + (q2 * r2) + (q3 * r3);

    if (total > 10000)
        discount = total * 0.20;
    else if (total >= 5000)
        discount = total * 0.15;
    else if (total >= 3000)
        discount = total * 0.08;
    else
        discount = 0;

    netAmount = total - discount;

    printf("\nTotal Sales Amount: %.2f", total);
    printf("\nDiscount: %.2f", discount);
    printf("\nNet Amount to Pay: %.2f\n", netAmount);

    return 0;
}