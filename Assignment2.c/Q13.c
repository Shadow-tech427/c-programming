#include<stdio.h>
int main()
{
    int hour, minute, second;
    printf("Enter time (hour, minute, second): ");
    scanf("%d %d %d", &hour, &minute, &second);

    if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
        printf("Logic 1: Valid Time\n");
    else
        printf("Logic 1: Invalid Time\n");

    if (hour >= 0 && hour < 24) {
        if (minute >= 0 && minute < 60) {
            if (second >= 0 && second < 60)
                printf("Logic 2: Valid Time\n");
            else 
                printf("Logic 2: Invalid Time\n");
        } else {
            printf("Logic 2: Invalid Time\n");
        }
    } else {
        printf("Logic 2: Invalid Time\n");
    }

    (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
        ? printf("Logic 3 (Ternary): Valid Time\n")
        : printf("Logic 3 (Ternary): Invalid Time\n");

    return 0;
}