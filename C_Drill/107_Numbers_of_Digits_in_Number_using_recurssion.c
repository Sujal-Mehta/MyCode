#include <stdio.h>

int numberOfDigits(int inputNumber)
{
    static int count = 0;

    if (inputNumber != 0)
    {
        count++;
        numberOfDigits(inputNumber / 10);
    }

    return count;
}

int main()
{

    int inputNumber = 456;

    int count_dig = numberOfDigits(inputNumber);
    printf("\nNumbers of Digits in Entered Number : %d", count_dig);

    return 0;
}