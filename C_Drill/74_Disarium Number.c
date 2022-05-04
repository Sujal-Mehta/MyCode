#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int NumberOfDigits(inputNumber)
{
    int count = 0;
    while (inputNumber)
    {
        count++;
        inputNumber /= 10;
    }
    return count;
}
bool isDisarium(int inputNumber)
{
    int num = inputNumber;
    int SumOfPowerOfDigits = 0;
    int count = NumberOfDigits(inputNumber);

    while (inputNumber)
    {
        SumOfPowerOfDigits += pow((inputNumber % 10), count);
        inputNumber /= 10;
        count--;
    }
    if (SumOfPowerOfDigits == num)
    {

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int inputNumber;

    printf("\n\n Input a Number\n");
    scanf("%d", &inputNumber);

    if (isDisarium(inputNumber))
    {
        printf(" \nDisarium Number\n ");
    }

    return 0;
}