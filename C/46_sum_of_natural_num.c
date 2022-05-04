#include <stdio.h>
int addNumbers(int n)
{

    for (int i = 1; i < n; i++)
    {
        if (n != 0)
        {
            return n + (n - 1);
        }
        else
        {
            return n;
        }
    }
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d\n", addNumbers(num));
    return 0;
}
