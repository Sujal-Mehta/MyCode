#include <stdio.h>
//#include <>
int main ()
{
char *source = "sujal"; 
char target [6];

int a = strcpy( target , source);
char b = strcpy( target , source);

printf("\nsee we finally copied source wala string in target : %s",a);
printf("\nsee we finally copied source wala string in target : %s", strcpy(target , source));
return 0;
}