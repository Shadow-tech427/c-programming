#include<stdio.h>
int main()
{
    float bs,da,hra,tax,totalsalary;
    printf("Enter Basic Salary : ");
    scanf("%f", &bs);
    printf("Enter DA (%%) : ");
    scanf("%f", &da);
    printf("Enter HRA (%%) : ");
    scanf("%f", &hra);
    printf("Enter Tax (%%) : ");
    scanf("%f", &tax);
    totalsalary = bs + ((bs * (da + hra - tax))/100);
    printf("Total Salary is %f", totalsalary);

    return 0;
}