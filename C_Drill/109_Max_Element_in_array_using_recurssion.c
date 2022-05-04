#include <stdio.h>
#define MAX 100

int maxElement(int arr[]);
int n = 5;

void main()
{
    int arr[MAX] = {5, 8, 1, 9, 4};
    int max, i;

    max = maxElement(arr);

    printf("\nLargest Element of the array is : %d\n ", max);
}

int maxElement(int arr[])
{
    static int i = 0, max = -1;

    if (i < n)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        i++;
        maxElement(arr);
    }
    return max;
}
