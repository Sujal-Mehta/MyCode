#include <stdio.h>

int factorial(int inputNumber)
{
    if (inputNumber == 1)
    {
        return 1;
    }
    else
    {
        return (inputNumber * factorial(inputNumber - 1));
    }
}

int main()
{
    int inputNumber;

    printf("Enter The Number : ");
    scanf("%d", &inputNumber);

    int fac = factorial(inputNumber);

    printf("\nThe Factorial of '%d' is : %d", inputNumber, fac);

    return 0;
}