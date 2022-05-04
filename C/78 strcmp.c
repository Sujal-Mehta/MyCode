#include <stdio.h>
#include <string.h>
int main ()
{
char *str1 = "asusual";
char *str2 = "asusual";
int str = strcmp (str1 , str2);
printf ("value after comparing is %d\n", str);
return 0;
}