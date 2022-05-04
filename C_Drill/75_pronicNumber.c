#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool Pronic(int inputNumber)
{
    int num = inputNumber;

    for (int i = 0; i < inputNumber; i++)
    {
        if (i * (i + 1) == num)
        {
            // printf("\n %d * %d  = %d", i, i + 1, num);
            return true;
            break;
        }
    }
    return false;
}

int main()
{

    int inputNumber;

    printf("\n\n Input a Number\n ");
    scanf("%d", &inputNumber);

    if (Pronic(inputNumber))
    {
        printf(" \n Pronic Number\n ");
    }

    for (int i = 1; i < 1000; i++)
    {
        if (Pronic(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}