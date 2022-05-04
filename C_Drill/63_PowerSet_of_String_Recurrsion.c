#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PowerSet(char str[], int n, int i, char cur_str[])
{
    if (i == n)
    {
        printf("%s ", cur_str);
        return;
    }
    PowerSet(str, n, i + 1, cur_str + str[i]);
    PowerSet(str, n, i + 1, cur_str);
}

int main()
{
    char str[] = "abc";
    int n = strlen(str);
    char cur_str[100] ;

    PowerSet(str , n , 0 , cur_str);
    return 0;
}