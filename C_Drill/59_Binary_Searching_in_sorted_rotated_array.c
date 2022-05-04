#include <stdio.h>

//Binary Searching In array
int bsearch(int a[], int key, int n)
{
    int low = 0, high = n - 1;
    int mid;

    while (low <= high)
    {
        //Changing High and Low Value Frequently and Checking Its midvalue equals key or not .
        int mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }

        // if mid is not equal then applying condition to see which side array is sorted
        if (a[low] < a[mid])
        {
            if (key >= a[low] && key < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        //if left side array is not sorted then right side must be so else function shows right side array search
        else
        {
            if (key > a[mid] && key <= a[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
}

int main()
{

    // int a[] = {14, 23, 7, 9, 3, 6, 18, 22, 16, 36};
    int a[] = {14, 23, 7, 9, 6, 18, 22, 16};
    int n = sizeof(a) / sizeof(int);

    int key = 16;

    int mid = bsearch(a, key, n);
    printf("The index is %d", mid);
}