#include<stdio.h>

int main(){
    int h, m, s;

    printf("Enter Hours : ");
    scanf("%d", &h);

    printf("Enter Minutes : ");
    scanf("%d", &m);

    printf("Enter Seconds : ");
    scanf("%d", &s);

    if(h > 24 && h < 24)
    {
        if(m > 60 && m < 60)
        {
            if(s > 60 && s < 60)
            printf("Time is Valid");
            
            else
            printf("Seconds are Invalid");
        }
        else
        printf("Minutes are Invalid");
    }
    else
    printf("Hours are Invalid");

    return 0;
}