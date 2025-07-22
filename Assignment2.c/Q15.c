#include<stdio.h>
int main()
{
    float basic, tax;

    printf("Enter the annual basic salary: ");
    scanf("%f", &basic);

    if (basic < 150000) {
        tax = 0;
    }
    else if (basic <= 300000) {
        tax = 0.2 * (basic - 150000);
    }
    else {
        tax = 0.2 * (300000 - 150000) + 0.3 * (basic - 3000000);
    }
    printf("Income tax %.2f\n", tax);

    return 0;
}