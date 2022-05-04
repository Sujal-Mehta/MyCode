#include <stdio.h>
//#include <>
int main ()
{
char string[100] ="tusi great ho_ " ;
char *string_1 = "tusi kidhar ja rahe ho";
strcat(string,string_1);//jasma value lagnu xa teslai yo function ma suru ma rakhnu parxa
printf("%s", strcat(string)); //string_1 ko value string ma gaye sakyo 
printf("\n%s",string);
return 0;
}