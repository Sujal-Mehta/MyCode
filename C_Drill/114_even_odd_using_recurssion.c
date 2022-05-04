#include <stdio.h>

void EvenAndOdd(int st, int n)
{
    if (st > n)
    {
        return;
    }
    else
    {
        printf(" %d", st);
        EvenAndOdd(st + 2, n);
    }
}

int main()
{

    int n;

    printf("\n Input the range to print starting from 1 : ");
    scanf("%d", &n);

    printf("\n All even numbers from 1 to %d are \t:", n);
    EvenAndOdd(2, n);

    printf("\n All odd numbers from 1 to %d are \t:", n);
    EvenAndOdd(1, n);

    return 0;
}
