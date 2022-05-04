#include <stdio.h>

/*	Function ProtoType	*/
int highest_value(int a[], int n);

int main()
{
    int a[10] = {5, 6, 6, 9, 10, 66, 45, 23, 66, 76};
    int n = sizeof(a) / sizeof(int);
    int max;
    int smax = 0;
    int i = 0;

    max = highest_value(a, n);
    printf("\n\n\nHighest Number is : %d ", max);

    printf("\n\n\nElements of an array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\n\nElements Excluding Highest NUmber : ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            continue;
        }
        else
        {
            printf("%d ", a[i]);
            if (smax < a[i])
            {
                smax = a[i];
            }
        }
    }

    printf("\n\n\nSecond Largest Value in array is : %d", smax);

    return 0;
}

/*	Function Defination	*/
int highest_value(int a[], int n)
{
    int i;
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}