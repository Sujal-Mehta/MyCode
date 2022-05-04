#include <stdio.h>

int main()
{

    char str[100];
    char *ptr = str;

    printf("\n Input a string : ");
    fgets(ptr, 1000, stdin);

    printf("\n The Entered String is : %s ", ptr);

    int Numbers, Alphabets, Symbols;

    Numbers = Alphabets = Symbols = 0;

    while (*ptr != '\0')
    {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            Alphabets++;
        }
        else if (*ptr >= '1' && *ptr <= '9')
        {
            Numbers++;
        }
        else
        {
            Symbols++;
        }
        ptr++;
    }

    printf("\n Numbers of Digits in String = %d ", Numbers);
    printf("\n Numbers of Symbols in String = %d ", Symbols - 1);
    printf("\n Numbers of Alphabets in String = %d ", Alphabets);

    return 0;
}