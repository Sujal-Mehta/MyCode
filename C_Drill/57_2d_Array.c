#include <stdio.h>

int main()
{

    int a[3][3];
    int n = 3;

    /*	Inserting Element in 2D Array	*/

    printf("\n\n\t\tInput an Element in Array 2D\n\n\n");
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

    /*	displaying Elements of 2D array in matrix form 	*/

    printf("\n\n\t\tElements of an array in matrix form \n\n\n");

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

    /*		*/

    return 0;
}