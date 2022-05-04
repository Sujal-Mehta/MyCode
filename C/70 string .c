#include <stdio.h>
//#include <>
int main ()
{
char  array_string[] = "sujal";
char *ptr = array_string ;
while (*ptr != '\0')
{
    printf("%c", *ptr);
    ptr++ ;
}
return 0;
}