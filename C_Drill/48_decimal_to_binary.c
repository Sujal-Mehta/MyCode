#include <stdio.h>

int a[100], count = 0;

void binary(int num)
{
    int i = 0;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            a[i] = 0;
            i++;
            count++;
        }
        else if (num % 2 == 1)
        {
            num = num / 2;
            a[i] = 1;
            i++;
            count++;
        }
    }
}

int main()
{
    int num;
    int temp;

    printf("Input a Number ?\n");
    scanf("%d", &num);

    binary(num);

    int n = count;
    int b[n];

    for (int i = 0; i < n; i++)
    {
        b[n - i - 1] = a[i];
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d", b[i]);
    }
}