#include<stdio.h>

int main(){
    int l, b, h;
    
    printf("Enter length, breadth and height: ");

    if (scanf("%lf %lf %lf", &l, &b, &h) !=3) {
        fprintf(stderr, "Error: Invalid input.\n");
        return 1;
    }
    
    if (l < 0 || b < 0 || h < 0) {
        fprintf(stderr, "Error: Dimentions must be non-negative.\n");
        return 1;
    }

    double surface_area = 2.0 * (l * b + l * h + b * h);
    double volume = l * b * h;

    printf("Surface Area = %.2f\n", surface_area);
    printf("Volume = %.2f\n", volume);

    return 0;
}