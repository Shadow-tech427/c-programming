#include<stdio.h>
int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num % 5 == 0 || num % 7 == 0){
        printf("Using ||: The number %d is divisible by 5 or 7.\n", num);
    } else {
        printf("Using ||: The number %d is not divisible by 5 or 7.\n", num);
    }

    if (num % 5 == 0) {
        printf("Using else-if: The number %d is divisible by 5.\n", num);
    } else if (num % 7 == 0){
        printf("Using else-if: The number %d is not divisible by 7.\n", num);
    } else {
        printf("Using else-if: The number %d is not divisible by 5 or 7.\n", num);
    }
    return 0;
}