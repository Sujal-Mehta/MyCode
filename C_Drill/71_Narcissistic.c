#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int digitsCounter(int inputNumber);
int isNarcissistic(int inputNumber);

int main()
{
    int inputNumber;

    printf(" \nInput a Number :- ");
    scanf("%d", &inputNumber);

    int SumOfDigits = isNarcissistic(inputNumber);

    if (SumOfDigits == 1)
    {
        printf("\n%d is an Narcissistic Number \n", inputNumber);
    }
    else
    {
        printf("\n%d is not an Narcissistic Number \n", inputNumber);
    }

    for (int i = 1; i < 1000; i++)
    {
        if (isNarcissistic(i) == 1)
        {
            printf(" %d", i);
        }
    }
    return 0;
}

int isNarcissistic(int inputNumber)
{
    int Num = inputNumber;
    int PowerOf = digitsCounter(inputNumber);
    int temp = 0;
    int sum = 0;
    int last_digit = 0;

    while (inputNumber != 0)
    {
        last_digit = inputNumber % 10;
        sum += pow(last_digit, PowerOf);
        inputNumber /= 10;
    }

    if (Num == sum)
    {
        return 1;
    }
    return -1;
}

int digitsCounter(int inputNumber)
{
    int count = 0;

    while (inputNumber != 0)
    {
        count++;
        inputNumber /= 10;
    }
    return count;
}
