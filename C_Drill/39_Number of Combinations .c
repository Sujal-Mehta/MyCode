#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i, j, k, l;

    printf("Input a Number (0-40) : ");
    scanf("%d", &number);

    printf("\nNumber Of Combinations :- \n\n");
    if (number > 0 && number < 40)
    {
        for (i = 0; i <= 9; i++)
        {
            for (j = 0; j <= 9; j++)
            {
                for (k = 0; k <= 9; k++)
                {
                    for (l = 0; l <= 9; l++)
                    {
                        if (i + j + k + l == number)
                        {
                            printf("%d , %d , %d , %d = %d\t", i, j, k, l, number);
                           
                        }
                    }
                }
            }
        }
    }
    else
    {
        printf("Please Input Your Number Between 0 to 40 ");
    }
    return 0;
}
