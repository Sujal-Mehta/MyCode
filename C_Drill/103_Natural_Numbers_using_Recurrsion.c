#include <stdio.h>

void natPrint(int n)
{
    if (n <= 100)
    {
        printf(" %d", n);
        if (n % 10 == 0)
        {
            printf("\n\t\t");
        }
        natPrint(n + 1);
    }
}

void main()
{
    int n = 1;

    printf("\nNatural Numbers : \n \t\t");
    natPrint(n);
}