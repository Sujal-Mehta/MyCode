#include <stdio.h>

int main()
{
    int arr[10] = {8, 10, 9, 5, 8};
    int i = 0;
    int n = 5;
    int x;
    int position;
    int smallest;

    printf("\n\nThe Array Element are : \n");

    for (i = 0; i < 5; i++)
    {
        printf("\tarr[%d] = %d \n", i, arr[i]);
    }

    smallest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (smallest <= arr[i])
        {
        }
        else
        {
            smallest = arr[i];
            position = i;
        }
    }

    printf("smallest = %d\n", smallest);
    printf("position = %d\n", position);

    return 0;
}