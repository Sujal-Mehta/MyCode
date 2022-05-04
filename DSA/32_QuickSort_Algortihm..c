/*
    Quick Sort Algorithm . 

    1 > i = low 
    1 > j = high 
    3 > pivot = low
    4 > i++ until element > pivot is found 
    5 > j-- until element <= pivot is found 
    6 > Swap A[i] & A[j] and repeat 4 & 5 until j < i 
    7 > Swap pivot & A[j] 
*/

#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("%d  ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{

    int temp;
    int pivot = A[low];

    int i = low + 1;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        printArray(A, 7);
        quickSort(A, low, partitionIndex - 1);  // sort left subarray
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    } 
}

int main()
{
    int A[] = {3, 5, 2, 13, 45    , 12 , 4};
    int n = 7;
    // printArray(A, n);
    quickSort(A, 0, n);
    printArray(A, n);

    return 0;
}
