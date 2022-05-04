#include <stdio.h>

int main()
{
    int num = 1;
    int i, j, l, b;

    printf("Enter the lines to be printed and character to be in line (length,lineWidth) \n");
    scanf("%d%d", &l, &b);

    for (i = 1; i <= l ; i++)
    {
        for (j = 1; j <= b; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}