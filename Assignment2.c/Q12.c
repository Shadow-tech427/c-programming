#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max1 = a;
    if (b > max1)
        max1 = b;
    if (c > max1)
        max1 = c;

    int min1 = a;
    if (b < min1)
        min1 = b;
    if (c < min1)
        min1 = c;

    printf("Logic 1: Max = %d, Min = %d\n", max1, min1);

    int max2, min2;
    if (a > b) {
        if (a > c)
            max2 = a;
        else 
            max2 = c;

        if (b < c)
            min2 = b;
        else
            min2 = c;
    } else {
        if (b > c)
            max2 = b;
        else
            max2 = c;
        if (a < c)
            min2 = a;
        else
            min2 = c;
    }
    printf("Logic 2: Max = %d, Min = %d\n", max2, min2);

    int max3 = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min3 = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("Logic 3 (Ternary): Max = %d, Min = %d\n", max3, min3);

    int max4 = a;
    int min4 = a;
    if (b > max4) max4 = b;
    if (c > max4) max4 = c;
    if (b < min4) min4 = b;
    if (c < min4) min4 = c;
    printf("Logic 4: Max = %d, Min = %d\n", max4, min4);
    return 0;
}