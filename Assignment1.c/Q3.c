#include<stdio.h>
int main(){
    float fehrenheit, celcius, kelvin;

    printf("Enter temperature in Fehrenheit: ");
    scanf("%f", &fehrenheit);

    celcius = (5.0 / 9.0) * (fehrenheit - 32);

    kelvin = celcius + 273.15;

    printf("Temperature in Celsius: %.2f\n", celcius);
    printf("Temperature in Kelvin: %.2f\n", kelvin);

    return 0;
}