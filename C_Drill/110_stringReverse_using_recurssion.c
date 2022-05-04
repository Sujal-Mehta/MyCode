#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char str[], int st, int ls)
{
    if (st >= ls)
    {
        return;
    }
    char temp = str[st];
    str[st] = str[ls];
    str[ls] = temp;
    reverseString(str, st + 1, ls - 1);
}

int main()
{
    char str[100] = "Hello";
    int st = 0;
    int ls = strlen(str);

    reverseString(str, st, ls - 1);
    printf("%s", str);
}
