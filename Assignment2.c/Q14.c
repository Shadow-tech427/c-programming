#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("Logic 1: point ar the origin.\n");
    else if (x == 0)
        printf("Logic 1: Point lies at Y-axis.\n");
    else if (y == 0)
        printf("Logic 1: point lies at X-axis.\n");
    else if (x > 0 && y > 0)
        printf("Logic 1: point lies at Quadrent I.\n");
    else if (x < 0 && y > 0)
        printf("Logic 1: point lies at Quadrent II.\n");
    else if (x < 0 && y < 0)
        printf("Logic 1: point lies at Quadrent III.\n");
    else 
        printf("Logic 1: point lies at Quadrent IV.\n");

    if (x == 0 && y == 0)
        printf("Logic 2: point ar the origin.\n");
    else if (x == 0)
        printf("Logic 2: Point lies at Y-axis.\n");
    else if (y == 0)
        printf("Logic 2: point lies at X-axis.\n");
    else {
        if (x > 0) {
            if (y > 0)
                printf("Logic 2: point lies at Quadrent I.\n");
            else
                printf("Logic 2: point lies at Quadrent IV.\n");
        } else {
            if (y > 0)
                printf("Logic 2: point lies at Quadrent II.\n");
            else
                printf("Logic 2: point lies at Quadrent III.\n");
        }
    }
    return 0;   
}