#include <stdio.h>

int main()
{

    int arr[100];
    int dup[100];
    int ext[100];
    int n = 5;
    int k = 1;
    int sum = 0;
    int count = 0;

    printf("\n\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element #%d :- ", i + 1);
        scanf("%d", &arr[i]);
        dup[i] = arr[i];
        ext[i] = 0;
    }

    printf("\n\n\n");
    printf("The Elements Are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nDuplicates Elements of an Array are : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == dup[j])
            {
                printf("%d ", arr[j]);
            }
        }
    }

    return 0;
}