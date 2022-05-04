
// 48 to 57

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char num[100];
    int i = 0, j = 0;
    int count = 0;

    printf("\n\n\nInput a String With  Positive Integers \n\nString = ");
    gets(text);

    while (text[i] != '\0')
    {
        if (text[i] >= 48 && text[i] <= 57)
        {
            num[j++] = text[i];
            count++;
        }
        i++;
    }
    num[j++] = '\0';

    printf("\n\nNumber of Numerical Value in String :- %d\n\n", count);

    printf("The Numerical Values Found in String are :- ");
    i = 0;
    while (num[i] != '\0')
    {
        printf(" %c ", num[i]);
        i++;
    }

    return 0;
}
