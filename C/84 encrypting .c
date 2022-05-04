#include <stdio.h>
void encrypt (char *str)
{
     char *ptr = str;
     while (*ptr != '\0')
     {
         *ptr = *ptr - 1 ;
          ptr++;
     }
}

int main ()
{
    char str[] = "tvkbm!nfiub";
    encrypt (str);
    printf("encrytped form of your string is : %s ", str);
    return 0 ;
}   