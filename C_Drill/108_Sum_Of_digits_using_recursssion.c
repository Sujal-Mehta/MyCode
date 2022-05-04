#include <stdio.h>

int sumOfDigits(int inputNumber)
{
    static int sum = 0;

    if (inputNumber == 0)
    {
        return 0;
    }
    return ((inputNumber % 10) + sumOfDigits(inputNumber / 10));
}

int main()
{

    int inputNumber = 25;

    int sum = sumOfDigits(inputNumber);
    printf("\nSum of Numbers of Digits in Entered Number : %d", sum);

    return 0;
}