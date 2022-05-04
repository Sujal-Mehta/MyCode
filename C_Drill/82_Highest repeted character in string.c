#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int sz = 100;
    int asz = 255;
    char str[sz], sto[asz];

    int i = 0;
    int max, ascii;

    printf("Input a string\n");
    fgets(str, sizeof str, stdin);

    for (i = 0; i < asz; i++)
    {
        sto[i] = 0;
    }

    i = 0;
    while (str[i] != '\0')
    {
        ascii = (int)str[i];
        sto[ascii] += 1;
        i++;
    }

    max = 0;
    for (i = 0; i < asz; i++)
    {
        if (i != 32)
        {
            if (sto[i] > sto[max])
            {
                max = i;
            }
        }
    }

    printf("The Highest Frequency of character '%c' appears - %d times \n", max, sto[max]);
}