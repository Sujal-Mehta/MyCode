#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

    char str[100], sstr[100];
    int tem[255];
    int temp[255];
    int flag = 1;

    printf("Input first string : ");
    fgets(str, sizeof str, stdin);

    printf("Input Second string : ");
    fgets(sstr, sizeof sstr, stdin);

    int size1 = strlen(str);
    int size2 = strlen(sstr);

    for (int i = 0; i < 255; i++)
    {
        temp[i] = 0;
        tem[i] = 0;
    }

    for (int i = 0; i < size1; i++)
    {
        tem[str[i]] += 1;
    }
    printf("\n");
    for (int i = 0; i < size1; i++)
    {
        temp[sstr[i]] += 1;
    }

    for (int i = 0; i < 255; i++)
    {
        if (temp[i] == tem[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("\nString is Anagram .");
    }
    else
    {
        printf("\nString is not Anagram .");
    }
}