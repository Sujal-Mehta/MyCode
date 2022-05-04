#include <stdio.h>

int main()
{

    int a[15] = {1, 3, 5, 9, 12, 15, 20};
    int index = 1;
    int n = 7;
    int n2 = index;

    printf("\nElements of an array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    for (int i = index; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;

    printf("\nElements of an array After Deleting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}