#include <stdio.h>
int main()
{
    int t;
    char blank = 0;
    char line_break = 0;
    char tab = 0;

    printf("Input a text (! -> to exit text): ");
    for (; (t = getchar()) != EOF;)
    {
        if (t == '\n')
        {
            line_break++;
        }
        if (t == '\t')
        {
            tab++;
        }
        if (t == ' ')
        {
            blank++;
        }
        if (t == '!')
        {
            break;
        }
    }
    printf("\n\nLines_break = %d\ntabs = %d\nblank = %d\n", line_break, tab, blank);

    return 0;
}
