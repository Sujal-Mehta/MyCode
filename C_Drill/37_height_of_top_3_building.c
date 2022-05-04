// Write a Java program to find heights of the top three building in descending order from eight given buildings.

#include <stdio.h>
int main()
{
    int heights[10], i, j, h, max_heights;
    printf("Input heights(integer values) of the top eight buildings:\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &heights[i]);
    }
    for (i = 0; i < 8; i++)
    {
        max_heights = i;
        for (j = i; j < 8; j++)
        {
            if (heights[j] > heights[max_heights])
            {
                max_heights = j;
            }
        }
        h = heights[max_heights];
        heights[max_heights] = heights[i];
        heights[i] = h;
    }
    printf("\nHeights of the top three building:\n");
    printf("%d\n%d\n%d\n", heights[0], heights[1], heights[2]);

    return 0;
}
