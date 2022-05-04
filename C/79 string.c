#include <stdio.h>
#include <string.h>
int main ()
{
char string_u[] = "tata";
char *string_s = "akad bakad";


//puts and scanf print ko lagi use garxu ma
//aba ma gets bata eeuta input linxu ani teslai print garauxu pahila
// char arr_str_gets[100];
// printf("enter the value : ");
// gets (arr_str_gets) ; //gets also read  spaces
// printf("%s" , arr_str_gets);


//printing using c fset
char *ptr = string_u ;
while (*ptr != '\0')
{
    printf("%c", *ptr);
    ptr++ ;
}

//put aur scanf sey printing
printf("\n%s",string_s);
printf("\n");

return 0;
}