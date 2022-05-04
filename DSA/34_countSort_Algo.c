#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("%d  ", A[i]);
    }
    printf("\n");
}

int max_num(int A[], int n)
{
    int max = A[0];
    for (int i = 1; i <= n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n)
{
    int max = max_num(A, n);
    int i, j;

    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i < max+1; i++)
    {
       count[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }

    i = 0; // counter for count array
    j = 0; // counter for main array

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] =count[i] - 1 ;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 45, 12, 4};
    int n = 7;

    printArray(A, n);
    countSort(A, n);
    printArray(A, n);

    return 0;
}