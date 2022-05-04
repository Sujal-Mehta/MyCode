#include <stdio.h>

void productOfArray(int arr[], int n)
{
    int left_arr[n], right_arr[n], product[n];
    int i, j;

    left_arr[0] = 1;
    right_arr[n - 1] = 1;

    for (i = 1; i < n; i++)
    {
        left_arr[i] = arr[i - 1] * left_arr[i - 1];
    }

    for (j = n - 2; j >= 0; j--)
    {
        right_arr[j] = arr[j + 1] * right_arr[j + 1];
    }

    for (i = 0; i < n; i++)
    {
        product[i] = left_arr[i] * right_arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", product[i]);
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int i;
    //------------- print original array ------------------
    printf("The given array is :  ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    //------------------------------------------------------

    printf("The product array is: ");
    productOfArray(arr1, n);
}
