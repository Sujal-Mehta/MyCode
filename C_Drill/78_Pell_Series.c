#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int isPell(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return ((isPell(n - 1) * 2) + (isPell(n - 2)));
    }
}

int main()
{
    int n = 10;

    printf(" Pell Series \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", isPell(i));
    }
}
