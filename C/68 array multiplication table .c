// create an array of size 3 x 10 cointaining  multiplication table of the 3 number
#include <stdio.h>
// #include <stdlib.h>
void printtable(int *multable, int num, int n)
{
    printf("multiplication table of %d\n ", num);
    printf("__________________________\n\n");
    for (int i = 0; i < n; i++)
    {
        multable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%dx%d = %d\n\n", num, i + 1, multable[i]);
    }
}

int main()
{
    int multable[3][10];
    int a, b, c;

    printf("Enter Three number\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("The value which you have entered is : %d , %d and %d ", a, b, c);

    printtable(multable[0], a, 10);
    printtable(multable[1], b, 10);
    printtable(multable[2], c, 10);
    return 0;
}