#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isKapreakar(int n)
{
    if (n == 1)
    {
        return true;
    }

    int square = n * n;
    int count = 0;

    while (square)
    {
        count++;
        square /= 10;
    }

    square = n * n;

    for (int right_digit = 1; right_digit < count; right_digit++)
    {
        int parts = pow(10, right_digit);

        if (parts == n)
        {
            continue;
        }

        int sum = square / parts + square % parts;

        printf("\nSum = %d", sum);
        if (sum == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int num;

    printf("\nInput a Number : ");
    scanf("%d", &num);

    if (isKapreakar(num) == true)
    {
        printf("\n%d is an Kapreakar Number .", num);
    }
    else
    {
        printf("\n%d is not an Kapreakar Number .", num);
    }
}
