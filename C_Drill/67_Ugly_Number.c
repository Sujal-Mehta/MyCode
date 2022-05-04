#include <stdio.h>

int main()
{

    int n, flag = 0;

    printf("\nInput a Number : ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("\nEntered Number is Below +ve Index . ");
    }

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            n /= 3;
        }
        else if (n % 5 == 0)
        {
            n /= 5;
        }
        else
        {
            printf("\nEntered Number is not an ugly Number .");
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("\nEntered Number is an ugly Number .");
    }

    return 0;
}