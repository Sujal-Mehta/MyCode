#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n, fact;
    printf("\nInput a Number : ");
    scanf("%d", &n);

    fact = factorial(n);
    printf("\nThe factorial of %d is : %d\n", n, fact);

    int x = fact;
    int rem;

    for (x; x != 0; x)
    {
        rem = x % 10;
        if (rem != 0)
        {
            printf("Non zero digit\n");
            break;
        }
        if (rem == 0)
        {
            x = x / 10;
            rem = x % 10;
        }
        printf("The last non zero digit is : %d\n", rem);
        break;
    }
    return 0;
}