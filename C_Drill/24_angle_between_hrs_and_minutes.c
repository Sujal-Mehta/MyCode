#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m;
    printf("Enter hour and minute :\n");
    scanf("%d", &h);
    scanf("%d", &m);

    double angle;
    int num[13] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 0};

    angle = num[h] - m * 5.5;

    if (angle < 0)
        angle = -angle;
    if (angle > 180)
        angle = 360 - angle;

    printf("At %d hrs and %d mins in a clock then the angle between these sticks is %.2f\n", h, m, angle);
    printf("%d:%d -(angle)= %.1f",h , m , angle);
    return 0;
}