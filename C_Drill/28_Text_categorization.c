#include <stdio.h>

int main()
{
    int ctr_line, ctr_character, ctr_word;
    int c;
    int flag = 0;

    ctr_line = ctr_character = ctr_word = 0;

    while ((c = getchar()) != EOF)
    {
        ctr_character++;
        if (c == '!')
        {
            break;
        }
        if (c == ' ' || c == '\t')
        {
            flag = 0;
        }
        else if (c == '\n')
        {
            ctr_line++;
            flag = 0;
        }
        else
        {
            if (flag == 0)
            {
                ctr_word++;
            }
            flag = 1;
        }
    }

    printf("\nCharacters = %d\nLines = %d\nWords = %d\n", ctr_character, ctr_line, ctr_word);

    return 0;
}
