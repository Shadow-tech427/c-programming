#include<stdio.h>
int main()
{
    float m1, m2, m3, total, avg;
    printf("Enter marks of three subject: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3;

    printf("Total Marks = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    if (avg >= 60)
        printf("Class obtained: First class\n");
    else if (avg >= 50)
        printf("Class obtained: Second class\n");
    else if (avg >= 35)
        printf("Class obtained: Pass\n");
    else
        printf("Class obtained: Fail\n");

    return 0;
}