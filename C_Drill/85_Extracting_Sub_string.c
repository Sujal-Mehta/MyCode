#include <stdio.h>
#include <string.h>

void main()
{
    char str[109];
    char sub_str[100];

    int pos, len, i = 0;

    printf("\nInput the String : ");
    fgets(str, sizeof str, stdin);

    printf("\nInput the position to start extraction : ");
    scanf("%d", &pos);

    printf("\nInput the length of substring : ");
    scanf("%d", &len);

    while (i < len)
    {
        sub_str[i] = str[pos + i - 1];
        i++;
    }
    sub_str[i] = '\0';

    printf("\nThe substring retrieve from the string is : %s\n", sub_str);
}