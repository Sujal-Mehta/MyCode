
#include <stdio.h>

void main()
{
    char str[100];
    char search[100];

    int i, j;
    int strlen = 0;
    int searchlen = 0;
    int flag;

    printf("\n Input The String : ");
    fgets(str, sizeof str, stdin);

    printf("\n Input The SubString To Search : ");
    fgets(search, sizeof search, stdin);

    while (str[strlen] != '\0')
    {
        strlen++;
    }
    strlen--;

    while (search[searchlen] != '\0')
    {
        searchlen++;
    }
    searchlen--;

    for (i = 0; i <= (strlen - searchlen); i++)
    {
        for (j = i; j < (i + searchlen); j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("\n SubString Exists\n");
    }
    else
    {
        printf("\n SubString Exists\n");
    }
}