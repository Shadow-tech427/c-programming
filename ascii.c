#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anything");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90)
    printf("Capital letter:");
    else if(ch>=97 && ch<=122)
    printf("small letter:");
    else if(ch>=48 && ch<=57)
    printf("digit:");
    else
    printf("symbols:");
    return 0;
}