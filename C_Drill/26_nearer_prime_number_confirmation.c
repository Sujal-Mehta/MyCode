// Write a C program to check if a given number is nearly prime or not
#include <stdio.h>

int isprime(int n);

int main()
{
    int n, num, flag;

    printf("\n\nInput a number : ");
    scanf("%d", &n);

    flag = isprime(n);

    if (flag == 1)
    {
        printf("\nYour number is already an prime number .\n");
    }
    else if (flag == 0)
    {
        printf("\nYour number is not an prime number .\n");

        for (int i = n; i <= (n + 100); i++)
        {
            if ((i - n) > 3)
            {
                printf("There is not a prime number close to this number\n");
            }
            else
            {
                if (isprime(i))
                {
                    printf("it is a nearer to a prime number \n");
                    printf("The nearest prime number is %d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}

int isprime(int n)
{
    int flag = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}