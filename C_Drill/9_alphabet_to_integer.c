// Write a C program to display the integer equivalents of letters (a-z, A-Z).

#include <stdio.h>

int main()
{
    char st[100] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;

    for (i = 0; i <= 52; i++)
    {
        printf("%d ", st[i]);
        if ((i + 1 ) % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}