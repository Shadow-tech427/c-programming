#include<stdio.h>
int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Using if-else: The number %d is even.\n", num);
    } else {
        printf("Using if-else: The number %d is odd.\n", num);
    }

    (num % 2 == 0)
        ? printf("Using ?: The number %d is even.\n", num)
        : printf("Using ?: The number %d is odd.\n", num);
    
    return 0;
}