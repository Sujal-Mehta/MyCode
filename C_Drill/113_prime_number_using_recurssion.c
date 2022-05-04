#include <stdio.h>

int checkForPrime(int inputNumber);
int n;

int main()
{
    int inputNumber;
    int isPrime;

    printf("\n Enter The Number : ");
    scanf("%d", &inputNumber);

    n = inputNumber / 2;

    isPrime = checkForPrime(inputNumber);

    if (isPrime == 1)
    {
        printf(" The number %d is a prime number. \n\n", inputNumber);
    }
    else
    {
        printf(" The number %d is not a prime number. \n\n", inputNumber);
    }

    return 0;
}

int checkForPrime(int inputNumber)
{
    if (n == 1)
    {
        return 1;
    }
    else if (inputNumber % n == 0)
    {
        return 0;
    }
    else
    {
        n = n - 1;
        checkForPrime(inputNumber);
    }
}