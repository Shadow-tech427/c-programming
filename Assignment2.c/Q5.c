#include<stdio.h>
int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 7 == 0) {
        printf("Using &&: The number %d is divisible by both 5 and 7.\n", num);
    } else {
        printf("Using &&: The number %d is not divisible by both 5 and 7.\n", num);
    }

    if (num % 5 == 0) {
        if (num % 7 == 0) {
            printf("Using nested if: The number %d is divisible by both 5 and 7.\n", num);
        } else {
            printf("Using nested if: The number %d is not divisible by both 5 and 7.\n", num);
        }
    } else {
        printf("Using nested if: The number %d is not divisible by both 5 and 7.\n", num);
    }

    return 0;
}