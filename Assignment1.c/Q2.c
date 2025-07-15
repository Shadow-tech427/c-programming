#include<stdio.h>
int main(){
    float radius, height, surfaceArea, volume;
    float pi= 3.14;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    surfaceArea = 2 * pi * radius * radius + 2 * pi * radius * height;
    volume = pi * radius * radius * height;

    printf("Surface area of the cylinder: %.2f\n", surfaceArea);
    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}