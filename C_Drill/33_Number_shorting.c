#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Input The value of x , y and z :\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("\n---------------------------\n");
    printf("Original value : %d  %d  %d", x, y, z);
    printf("\n---------------------------\n\n");

    printf("\n---------------------------\n");
    printf("Sorted Number : ");

    if (x <= y && y <= z)
    {
        printf("%d  %d  %d", x, y, z);
    }
    else
    {
        if (y <= x && x <= z)
        {
            printf("%d  %d  %d", y, x, z);
        }
        else
        {
            if (z <= y && y <= x)
            {
                printf("%d %d %d", z, y, x);
            }
            else
            {
                if (x <= z && z <= y)
                {
                    printf("%d %d %d", x, z, y);
                }
                else
                {
                    if (y <= z && z <= x)
                    {
                        printf("%d %d %d", y, z, x);
                    }
                    else
                    {
                        if (z <= x && z <= y)
                        {
                            printf("%d %d %d", z, x, y);
                        }
                    }
                }
            }
        }
    }

    printf("\n---------------------------\n");
    return 0;
}
