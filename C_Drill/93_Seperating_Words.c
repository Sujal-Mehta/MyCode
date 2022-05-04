#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100], word[20][30];
    int i, j, k;
    int count = 0;

    i = j = k = 0;

    printf("\n Input the string : ");
    fgets(str, sizeof str, stdin);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            word[j][k] = '\0';
            j++;
            k = 0;
        }
        else
        {
            word[j][k] = str[i];
            k++;
        }
    }

    printf("\n words in the string are : \n");

    for (i = 0; i <= j; i++)
    {
        printf("\t#%d = %s\n", i + 1, word[i]);
    }
}