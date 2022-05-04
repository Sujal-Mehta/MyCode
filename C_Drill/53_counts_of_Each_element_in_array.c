#include <stdio.h>
#include <stdlib.h>

/*	Function Prototype Initializing	*/

int highest_value(int a[], int n);

int main()
{

    /*	Declaration Section	*/

    int a[10] = {5, 6, 6, 9, 10, 66, 45, 23, 66, 66};

    int n = 10;
    int n2;

    int i, j;
    int temp;
    int count = 0;
    int max_num;
    int num = 1;

    /*	Getting maximum number from an array	*/

    max_num = highest_value(a, n);

    /*	Creating Array of Max_size	*/

    n2 = max_num + 1;
    int b[n2];

    for (i = 0; i < n2; i++)
    {
        b[i] = 0;
    }

    /*	Increasing value from 0 to 1 in each index of array value	*/

    for (i = 0; i < n; i++)
    {
        b[a[i]] += 1;
    }

    /*	Displaying Counts	*/

    printf("\n");
    for (i = 0; i < n2; i++)
    {
        if (b[i] == 0)
        {
            continue;
        }
        else
        {
            printf("%d\t=\t%d times\n", i, b[i]);
        }
    }

    return 0;
}

/*	Function Declaration	*/

int highest_value(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}