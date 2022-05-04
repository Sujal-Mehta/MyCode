#include <stdio.h>

int main()
{

    int a[3][3];
    int b[3][3];
    int n = 3;

    /*	Inserting Element in 2D Array 	*/

    printf("\n\n\t\tInput an Element in \n\t\t\tArray 1\n\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("\tClass %d\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Element #%d = ", j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\t\tInput an Element in \n\t\t\tArray 2\n\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("\tClass %d\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Element #%d = ", j + 1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    /*	displaying Elements of 2D array in matrix form 	*/

    printf("\n\n\t\tElements of an array #1 in matrix form \n\t\tArray 1\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("| ");
        for (int j = 0; j < n; j++)
        {
            if (j != n - 1)
            {
                printf("%d\t", a[i][j]);
            }
            else
            {
                printf("%d", a[i][j]);
            }
        }
        printf(" |\n");
    }

    printf("\n\n\t\tElements of an array #2 in matrix form \n\t\tArray 2\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("| ");
        for (int j = 0; j < n; j++)
        {
            if (j != n - 1)
            {
                printf("%d\t", b[i][j]);
            }
            else
            {
                printf("%d", b[i][j]);
            }
        }
        printf(" |\n");
    }

    /*	Adding Elements of arrays	*/
    printf("\n\n\t\tElements After Adding Both Matrix \n\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("| ");
        for (int j = 0; j < n; j++)
        {
            if (j != n - 1)
            {
                printf("%d\t", a[i][j] + b[i][j]);
            }
            else
            {
                printf("%d", a[i][j] + b[i][j]);
            }
        }
        printf(" |\n");
    }

    return 0;
}