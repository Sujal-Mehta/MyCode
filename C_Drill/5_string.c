#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "sujal";
    printf("%s\n", str);

    char str1[80] = "sujalmehta";
    printf("%s\n", str1);

    char str2[100] = "SUJAL";
    char *ptr = str2;
    printf("%s\n", ptr);

    char str3[] = {'S', 'M', '\0'};
    printf("%s", str3);

    return 0;
}



