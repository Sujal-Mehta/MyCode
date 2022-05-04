#include <stdio.h>
#include <stdbool.h>

int cubeOF(int Number)
{
    return Number * Number * Number;
}

void isArmstrong(int inputNumber)
{
    int num = inputNumber;
    int i = 0;
    int sum = 0;

    while (inputNumber)
    {
        sum += cubeOF(inputNumber % 10);
        inputNumber /= 10;
    }

    if (sum == num)
        printf("\n%d is an Armstrong Number .\n", num);
    else
        printf("\n%d is not an Armstrong Number .\n", num);
}

void isPerfect(int inputNumber)
{
    int sum = 0;
    int rem;
    int i;
    int num = inputNumber;

    printf("\nDivisors : ");
    for (i = 1; i < inputNumber; i++)
    {
        if (inputNumber % i == 0)
        {
            sum += i;
            printf("%d ", i);
        }
    }

    if (sum == num)
        printf("= %d \n%d is an Perfect Number .", num, num);
    else
        printf("\n%d is not an Perfect Number .", num);
}

int main()
{

    int inputNumber = 28;

    // printf("\n\nEnter The Number : ");
    // scanf("%d", &inputNumber);

    isArmstrong(inputNumber);
    isPerfect(inputNumber);

    return 0;
}