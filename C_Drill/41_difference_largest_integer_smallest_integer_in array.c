#include <stdio.h>

int main()
{
    int Num, temp;
    int max_val, min_val;
    int size = 8;
    int i, j, arr[size];

    printf("\nInput an integer of 8 digit : ");
    scanf("%d", &Num);

    for (i = 0; Num != 0; i++)
    {
        arr[i] = Num % 10;
        Num /= 10;
    }

    printf("\n\nEnterd Numbers are : |");

    for (i = 0; i < 8; i++)
    {
        printf(" %d | ", arr[i]);
    }

    for (i = 0; i < 8; i++)
    {
        for (j = 1; j + i < 8; j++)
        {
            if (arr[j - 1] < arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n\nAfter Being Sorted : < |");

    for (i = 0; i < 8; i++)
    {
        printf(" %d | ", arr[i]);
    }

    max_val = 0;
    for (i = 0; i < 8; i++)
    {
        max_val += arr[i];
        max_val *= 10;
    }

    printf("\n\nBiggest Number From Array is : ");
    printf("%d\n", max_val);

    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    printf("\n\nAfter Being Sorted : > |");

    for (i = 0; i < 8; i++)
    {
        printf(" %d | ", arr[i]);
    }

    min_val = 0;
    for (int i = 0; i < 8; i++)
    {
        min_val += arr[i];
        min_val *= 10;
    }

    printf("\n\nSmallest Number From Array is : ");
    printf("%d\n", min_val);

    printf("\nThe Difference Between Max value and Min value of Array is %d " , max_val - min_val);
    return 0;
}
