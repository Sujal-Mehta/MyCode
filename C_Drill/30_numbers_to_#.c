// Write a C program that takes some integer values from the user and print a histogram.

#include <stdio.h>
void print_Histogram(int *numbers, int n);

int main()
{
    int n;
    printf("Input a value of n : ");
    scanf("%d", &n);

    int numbers[n];
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Value for #%d ", i);
            scanf("%d", &numbers[i]);
        }
    }

    printf("\n");
    print_Histogram(numbers, n);
    return 0;
}
void print_Histogram(int *numbers, int n)
{
    printf("\nHistogram:\n");
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < numbers[i]; ++j)
        {
            printf("#");
        }
        printf("\n");
    }
}
