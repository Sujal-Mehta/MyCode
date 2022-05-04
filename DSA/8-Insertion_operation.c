#include <stdio.h>

void display(int arr[], int n)
{
    //Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//Insertion
int indexInsertion(int arr[], int size, int element_to_add, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element_to_add;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element_to_add = 45, index = 0, capacity = 100;
    display(arr, size);

    indexInsertion(arr, size, element_to_add, capacity, index);
    size += 1;
    display(arr, size);
    return 0;
}