#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int DigitCount(int inputNumber)
{
    int count = 0;
    while (inputNumber)
    {
        inputNumber /= 10;
        count++;
    }
    return count;
}

int main()
{
    int inputNumber;
    int inputNumberCopy;
    int keithNumber[100];
    int Flag = 0;
    int i = 0;
    int Sum = 0;
    int isKeith;

    printf("\n\n Check whether a Number is Keith or not : \n");
    printf(" Sample Keith numbers: 197, 742, 1104, 1537, 2208, 2580, 3684, 4788, 7385..\n");

    printf(" Input a Number : ");
    scanf("%d", &inputNumber);

    inputNumberCopy = inputNumber;

    for (i = DigitCount(inputNumber) - 1; i >= 0; i--)
    {
        keithNumber[i] = inputNumber % 10;
        inputNumber /= 10;
    }

    while (Flag == 0)
    {
        for (int i = 0; i < DigitCount(inputNumberCopy); i++)
        {
            Sum += keithNumber[i];
        }
        if (Sum == inputNumberCopy)
        {
            Flag = 1;
            isKeith = 1;
        }
        if (Sum > inputNumberCopy)
        {
            Flag = 1;
            isKeith = 0;
        }
        for (int i = 0; i < DigitCount(inputNumberCopy); i++)
        {
            printf(" %d", keithNumber[i]);
            if (i != DigitCount(inputNumberCopy) - 1)
            {
                keithNumber[i] = keithNumber[i + 1];
                printf(" + ");
            }
            else
            {
                keithNumber[i] = Sum;
                printf(" = %d", keithNumber[i]);
            }
        }
        printf("\n");
        Sum = 0;
    }
    if (isKeith == 1)
    {
        printf(" The given number is a Keith Number . ");
    }
    else
    {
        printf(" The given number is not a Keith Number.\n");
    }
}
