#include<stdio.h>
int main(){
    float a, b, am, hm;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    am = (a + b) / 2;
    hm = (2 * a * b) / (a + b);

    printf("Arithmetic Mean = %.2f\n", am);
    printf("Harmonic Mean = %.2f\n", hm);

    return 0;
}