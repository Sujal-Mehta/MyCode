#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Sujal";
    printf("%s\n", str);

    char str1[80] = "SujalMehta";
    printf("%s\n", str1);

    char str2[100] = "Sujal";
    char *ptr = str2;
    printf("%s\n", ptr);

    char str3[] = {'M','S','\0'};
    printf("%s",str3);

    return 0;

}