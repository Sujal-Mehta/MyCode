#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100];
    int count, len;
    char ch;

    printf("\n Input The String : ");
    fgets(str, sizeof str, stdin);

    len = strlen(str);
    count = len;

    printf("\n The given sentence is : %s", str);

    printf("\n\n The sentence after change is : ");

    for (len = 0; len < count; len++)
    {
        ch = islower(str[len]) ? toupper(str[len]) : tolower(str[len]);
        putchar(ch);
    }
    printf("\n\n");
}
