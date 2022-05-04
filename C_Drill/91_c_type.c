#include <stdio.h>
#include <ctype.h>

void lowcase(char str[])
{
    int count = 0;
    char str_char;

    printf(" String in Small Format \t: ");
    while (str[count])
    {
        str_char = str[count];
        putchar(tolower(str_char));
        count++;
    }
}

void upcase(char str[])
{
    int count = 0;
    char str_char;

    printf(" String in Capital Format \t: ");
    while (str[count])
    {
        str_char = str[count];
        putchar(toupper(str_char));
        count++;
    }
}

int hexcheck()
{
    char ch;
    printf("\n Input the character \t: ");
    scanf("%c", &ch);

    if (isxdigit(ch))
    {
        return 1;
    }
    return 0;
}

void rep_string(char str[])
{
    int count = 0;
    int spc;

    char rep_sym;

    printf(" Input the symbol - Replace Space to Symbol : ");
    scanf("%c", &rep_sym);

    while (str[count])
    {
        spc = str[count];
        if (isspace(spc))
        {
            str[count] = rep_sym;
        }
        count++;
    }
    printf("\n String After Replacing : %s", str);
}

int main()
{
    char str[100];
    char ch;

    printf(" \n Input a string \t\t: ");
    fgets(str, sizeof str, stdin);

    printf("\n\n");
    lowcase(str);

    printf("\n\n");
    upcase(str);

    // printf("\n\n");
    // rep_string(str);

    printf("\n\n");

    if (hexcheck())
    {
        printf("\n The entered character is a hexadecimal digit .\n");
    }
    else
    {
        printf("\n The entered character is not a hexadecimal digit .\n");
    }

    int count = 0;
    int punct = 0;
    while (str[count])
    {
        if (ispunct(str[count]))
        {
            punct++;
        }
        count++;
    }
    printf("\n Number of Punctuation in string is : %d", punct);

    return 0;
}
