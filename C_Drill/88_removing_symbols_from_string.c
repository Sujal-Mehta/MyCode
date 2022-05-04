#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int count;
    int i, j;

    printf("\n Input the string : ");
    fgets(str, sizeof str, stdin);

    count = strlen(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }

    printf("\n After removing the output is : %s", str);
}
