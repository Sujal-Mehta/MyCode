#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100] = {1, 2, 2, 5, 3};
    int n = 5;
    int i, j;

    printf("\n\nElement in Array are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nUnique Elements in Array are : ");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                break;
            }
        }
        if (j == n)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
