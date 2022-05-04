#include <stdio.h>

int binarySearch(int arr[], int n, int search, int low, int high)
{
    int mid, sch = 0;

    if (low <= high)
    {
        mid = (low + high) / 2;
        if (search == arr[mid])
        {
            sch = 1;
        }
        else if (search < arr[mid])
        {
            return binarySearch(arr, n, search, low, mid - 1);
        }
        else
        {
            return binarySearch(arr, n, search, mid + 1, high);
        }
    }
    else
    {
        return sch;
    }
}

int main()
{
    int arr[] = {2, 7, 9, 10, 14, 18, 20, 24, 29, 30};
    int n = 10;
    int search;
    int low = 0, high = n - 1;

    printf("\n Element in Array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    printf("\n Input the number to search : ");
    scanf("%d", &search);

    int sch = binarySearch(arr, n, search, low, high);

    if (sch == 0)
    {
        printf(" The search number not exists in the array . \n");
    }
    else
    {
        printf(" The search number found in the array.\n");
    }
}
