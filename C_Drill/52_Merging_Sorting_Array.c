#include <stdio.h>

int main()
{
    /*	Declaration Section	*/

    int a[10] = {5, 66, 7, 9, 10};
    int b[10] = {7, 8, 45, 65, 19};
    int c[20];

    int n1 = 5;
    int n2 = 5;
    int n3 = n1 + n2;

    int i, j;
    int temp;

    /*	Printing Array 1 and Array 2	*/

    printf("Array 1\t\t|\t\tArray 2\n");
    printf("---------------------------------------\n");

    for (i = 0; i < n1; i++)
    {
        printf("%d\t\t|\t\t%d\n", a[i], b[i]);
    }

    /*	Merging Array 1 and Array 2 in Array 3 	*/

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (j = 0; j < n2; j++)
    {
        c[i] = b[j];
        i++;
    }

    /*	Printing Merged Array	*/

    printf("\n\nMerged Array : ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

    /*	Sorting The merged Array	*/

    for (i = 0; i < n3; i++)
    {
        for (j = 0; j < n3; j++)
        {
            if (c[i] >= c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    /*	Printing Merged Array	*/

    printf("\n\nSorted Array : ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}