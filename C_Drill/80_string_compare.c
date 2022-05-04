#include <stdio.h>

int cmpString(char *str, char *str2);

int main()
{

    char str[100];
    char str2[100];

    int flag = 0;

    printf("\n Input the 1st String : ");
    fgets(str, sizeof str, stdin);

    printf("\n Input the 2nd String : ");
    fgets(str2, sizeof str2, stdin);

    printf("\n\n String 1 = %s \n String 2 = %s \n", str, str2);

    flag = cmpString(str, str2);

    if (flag == 0)
    {
        printf("\n Strings are equal .\n");
    }
    else
    {
        printf("\n Strings are not equal .\n");
    }
    return 0;
}

int cmpString(char *str, char *str2)
{
    int flag = 0;

    while (*str != '\0' || *str2 != '\0')
    {
        if (*str == *str2)
        {
            str++;
            str2++;
        }
        else if ((*str != '\0' && *str2 == '\0') || (*str == '\0' && *str2 != '\0') || *str != *str2)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
