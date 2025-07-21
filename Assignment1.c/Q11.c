#include<stdio.h>
int main()
{
    double l, b, h;
    double door_l, door_b;
    double win_l, win_b;
    double wall_area, paint_area, roof_area;

    printf("Enter a length, breadth, and heigth of the room: ");
    scanf("%lf %lf %lf", &l, &b, &h);

    printf("Enter a length, breadth of the door: ");
    scanf("%lf %lf", &door_l, &door_b);

    printf("Enter a length, breadth of the window: ");
    scanf("%lf %lf", &win_l, &win_b);

    wall_area = 2 * h * (l + b);

    double door_area = door_l * door_b;
    double window_area = win_l * win_b;

    paint_area = door_area - wall_area - 2 * window_area;

    roof_area = l * b;

    printf("\nArea to be painted (walls): %.2lf sq. units\n", paint_area);
    printf("Area to be whitewashed (roof): %.2lf sq. units\n", roof_area);

    return 0;
}