#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[100], count = 0, sum = 0;

void decimal_to_bin(int num)
{
    int i = 0;
    int r;

    for (num; num > 0; num = num / 10)
    {
        r = num % 10;
        sum += r * pow(2, i);
        i++;
    }
}

int main()
{
    int num;
    int temp;
    int dec;

    printf("Input a Number ?\n");
    scanf("%d", &num);

    decimal_to_bin(num);

    printf("%d", sum);
}