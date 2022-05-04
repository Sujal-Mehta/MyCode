#include <stdio.h>
int main()
{
    char chr;
    int num, i;
    for (chr = 65; chr <= 122; chr++)
    {
        if ((chr >= 91) && (chr <= 96))
        {
            continue ;
        }
        i = chr;
        printf("[%d - %c]\n", i, chr);
    }
    return 0;
}