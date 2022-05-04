#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char str[200];
    char sstr[100];
    int i, j, k;

    printf("\n Input 1st String : ");
    fgets(str, sizeof str, stdin);

    printf("\n Input 2nd String : ");
    fgets(sstr, sizeof sstr, stdin);

    int len1, len2;
    len1 = strlen(str);
    len2 = strlen(sstr);

    for (i = 0; i < len1 - 1; i++)
    {
    }
    str[i] = ' ';
    i = i + 1;

    printf("\n Concatenating String ....\n\n");

    k = 0;
    for (j = i; j < (len1 + len2) - 1; j++)
    {
        str[j] = sstr[k];
        k++;
    }

    for (int l = 0; l <= j; l++)
    {
        printf("%c", str[l]);
    }

    return 0;
}