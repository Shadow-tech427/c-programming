#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number from 1 to 12 ");
    scanf("%d", &n);

    switch (mno) //l
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 10:
        case 12: printf("31 days");
                    break;
        case 2: printf("28/29 days");
                    break;
        case 4:
        case 6:
        case 8:
        case 9:
        case 11: printf("30 days");
                    break;
        default: printf("Initial Month Number ");
            break;
    }
    return 0;
}