#include <stdio.h>

int main()
{

    int n;
    int rem[100];
    int j = 0;
    int count = 0;
    int sum = 0;

    printf("\nInput a Number : ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    printf("\nsum = %d", sum);

    if (sum > n)
    {
        printf("\nIt is an abudunt Number .");
    }
    else
    {
        printf("\nIt is not abudunt Number .");
    }
    return 0;
}