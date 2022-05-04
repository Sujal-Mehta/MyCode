#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(unsigned long long int inputNumber);
unsigned long long int reverse(unsigned long long int inputNumber);
bool isLychrel(unsigned long long int inputNumber);

int main()
{
    int inputNumber;

    printf("\n\n Check whether a given number is a Lychrel number or not : \n");
    printf(" --------------------------------------------------------------\n");
    printf(" Input a Number : ");
    scanf("%d", &inputNumber);

    if (isLychrel(inputNumber))
    {
        printf(" The given number is Lychrel .\n\n");
    }
    else
    {
        printf(" The given number is not Lychrel .\n\n");
    }

    printf("\n Lychrel Numbers : \n");
    for (int i = 1; i < 1000; i++)
    {
        if (isLychrel(i))
        {
            printf(" %d", i);
        }
    }
    return 0;
}

bool isLychrel(unsigned long long int inputNumber)
{
    int i;
    bool isLychrel = true;

    inputNumber = inputNumber + reverse(inputNumber);

    for (i = 1; i <= 30; i++)
    {
        if (isPalindrome(inputNumber))
        {
            isLychrel = false;
            break;
        }
        inputNumber = inputNumber + reverse(inputNumber);
    }
    return isLychrel;
}

unsigned long long int reverse(unsigned long long int inputNumber)
{
    unsigned long long int rev = 0;

    while (inputNumber != 0)
    {                            //  196
        rev *= 10;               //0         6*10=60     69*10=690
        rev += inputNumber % 10; //6         60+9=69     690+1 = 691
        inputNumber /= 10;       //19.6      1           0
    }
    return rev;
}

bool isPalindrome(unsigned long long int inputNumber)
{
    return (inputNumber == reverse(inputNumber));
}
