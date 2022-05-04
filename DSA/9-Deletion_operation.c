#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

indexdeletion(int arr[], int size, int index, int capacity)
{
    if (size >= capacity)
        return -1;

    for (int i = index; i < size ; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}
int main()
{
    int arr[100] = {1, 2, 12, 18, 25};
    int size = 5, index = 3, capacity = 100;
    display(arr, size);

    indexdeletion(arr, size, index, capacity);
    size -= 1;
    display(arr, size);
    return 0;
}