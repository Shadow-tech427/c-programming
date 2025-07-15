#include<stdio.h>
int main(){
    float u, a, t, v, s;

    printf("Enter initial velocity (u): ");
    scanf("%f", &u);

    printf("Enter initial velocity (a): ");
    scanf("%f", &a);

    printf("Enter initial velocity (t): ");
    scanf("%f", &t);

    v = u + a * t;
    s = u * t + 0.5 * a * t * t;

    printf("Final velocity (v) = %.2f m/s\n", v);
    printf("Distance travelled (s) = %.2f meters\n", s);

    return 0;
}