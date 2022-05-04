#include <stdio.h>

int sumUptoN(int n)
{
    int result;

    if (n == 1)
    {
        return 1;
    }
    else
    {
        result = n + sumUptoN(n - 1);
    }
    return result;
}

void main()
{
    int n = 5;

    printf("\nSum of Number upto n : \n");
    int sum = sumUptoN(n);

    printf("Sum = %d\n", sum);
}