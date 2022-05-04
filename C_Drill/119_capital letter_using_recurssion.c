#include <stdio.h>
#include <string.h>
#include <ctype.h>

char checkCapital(char str[])
{
    static int i = 0;

    if (i < strlen(str))
    {
        if (isupper(str[i]))
        {
            return str[i];
        }
        else
        {
            i++;
            checkCapital(str);
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[100], cap;

    printf("\n Input a string to including one or more capital letters : ");
    scanf("%s", str);

    cap = checkCapital(str);

    if (cap == 0)
    {
        printf(" There is no capital letter in the string : %s\n", str);
    }
    else
    {
        printf(" The first capital letter appears in the string %s is '%c'\n", str, cap);
    }
    return 0;
}