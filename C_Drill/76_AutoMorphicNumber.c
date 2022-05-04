#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int NumberOfDigits(int inputNumber)
{
    int count = 0;
    while (inputNumber)
    {
        count++;
        inputNumber /= 10;
    }
    return count;
}

bool isAutomorphic(int inputNumber)
{
    int num = inputNumber;
    int SquareOfNumber = inputNumber * inputNumber;

    while (inputNumber)
    {
        if ((inputNumber % 10) != (SquareOfNumber % 10))
        {
            return false;
        }
        inputNumber /= 10;
        SquareOfNumber /= 10;
    }
    return true;
}

int main()
{

    int inputNumber;

    printf("\n\n Input a Number\n ");
    scanf("%d", &inputNumber);

    if (isAutomorphic(inputNumber))
    {
        printf(" \n Automorphic Number\n ");
    }

    for (int i = 1; i < 1000; i++)
    {
        if (isAutomorphic(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}