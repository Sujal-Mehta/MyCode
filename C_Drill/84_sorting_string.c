#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str[25][100], temp[25];
    int n, i, j;

    printf("\n\nSorts the Strings of an array using bubble sort :\n");
    printf("-----------------------------------------------------\n");

    printf("Input Number of Strings : ");
    scanf("%d", &n);

    printf("Input String %d : \n", n);
    for (i = 0; i <= n; i++)
    {
        fgets(str[i], sizeof str, stdin);
    }

    /*	Logic Bubble Sort	*/

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i); j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("The Strings appears after sorting :\n");

    for (i = 0; i <= n; i++)
    {
        printf("%s\n", str[i]);
    }
}
