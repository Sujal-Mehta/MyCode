
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], temp;
    int i, j, len;

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    len = strlen(str);

    for (int i = 1; i < len; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("After sorting the string appears like : \n");
    printf("%s \n\n", str);
}
