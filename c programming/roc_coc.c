#include<stdio.h>
int main()
{
    float area, radius, circumference;
    printf("Enter radius of circle:");
    scanf("%f", &radius);
    area = 3.14 * (radius*radius);

    printf("Area of a circle is: %f", area);
    printf("Area of a circle is: %f", circumference);

    return 0;
}