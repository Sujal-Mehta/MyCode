#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int SumOfSquareNumber(int inputNumber)
{
    int SumOfSquare = 0;

    while (inputNumber)
    {
        SumOfSquare += (inputNumber % 10) * (inputNumber % 10);
        inputNumber /= 10;
    }
    return SumOfSquare;
}

bool CheckHappy(int inputNumber)
{
    int CurrentNumberResult = inputNumber;
    int NextNumberResult = inputNumber;

    do
    {
        CurrentNumberResult = SumOfSquareNumber(CurrentNumberResult);
        NextNumberResult = SumOfSquareNumber(SumOfSquareNumber(NextNumberResult));
    } while (CurrentNumberResult != NextNumberResult);

    return (CurrentNumberResult == 1);
}

int main()
{
    int inputNumber;

    printf(" Input a Number : ");
    scanf("%d", &inputNumber);

    if (CheckHappy(inputNumber))
    {
        printf(" %d is a Happy Number . \n", inputNumber);
    }
    else
    {
        printf(" %d is not a Happy Number . \n", inputNumber);
    }
}