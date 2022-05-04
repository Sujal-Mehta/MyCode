#include <stdio.h>

void arr_print(int arr[], int st, int n)
{
    if (st >= n)
    {
        return;
    }

    printf(" %d", arr[st]);

    arr_print(arr, st + 1, n);
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};

    int n = 5;
    int st = 0;

    printf("\nArray : ");
    arr_print(arr1, st, n);

    return 0;
}