#include <stdio.h>

int main()
{
    int number;
    int i;

    printf("Input a Number : ");
    scanf("%d", &number);

    printf("\n----------------------------------------------\n");
    printf("Numbers\t\tSquares\t\tCubes");
    printf("\n----------------------------------------------\n");

    for (i = 0; i <= number; i++)
    {
        printf("%d\t\t%d\t\t%d\n", i, i * i, i * i * i);
    }

    printf("\n----------------------------------------------\n");

    return 0;
}