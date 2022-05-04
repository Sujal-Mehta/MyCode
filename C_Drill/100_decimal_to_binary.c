#include <stdio.h>

void dec_to_bin(int inputNumber)
{
    int num = inputNumber;
    int bin[25];
    int i;
    int rem = 0;
    int count = 0;

    i = 0;
    while (inputNumber != 0)
    {
        if (inputNumber % 2 == 0)
        {
            bin[i] = 0;
            i++;
            inputNumber /= 2;
            count++;
        }
        else
        {
            bin[i] = 1;
            i++;
            inputNumber /= 2;
            count++;
        }
    }
    int k = count;
    for (int i = 0; i < k / 2; i++)
    {
        int temp = bin[i];
        bin[i] = bin[k - i - 1];
        bin[k - i - 1] = temp;
    }

    printf("\n\nDecimal - %d into Binary - ", num);
    for (int i = 0; i < count; i++)
    {
        printf("%d", bin[i]);
    }
}

int count(int *ptr)
{
}

void main()
{
    int inputNumber;
    int bin[25];

    printf("\nInput The Number (Decimal) : ");
    scanf("%d", &inputNumber);

    dec_to_bin(inputNumber);
}
