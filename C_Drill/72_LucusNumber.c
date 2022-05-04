#include <stdio.h>

int isLucus(int n)
{
    if (n == 0)
    {
        return 2;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (isLucus(n - 1) + isLucus(n - 2));
    }
}
int main()
{

    int n;
    printf("Input a number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", isLucus(i));
    }

    return 0;
}