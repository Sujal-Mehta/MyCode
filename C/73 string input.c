#include <stdio.h>
//#include <>
int main ()
{
char array_string[100] ;

printf("enter your name here : ");
gets(array_string) ;
printf("\n you have input this character : %s" , array_string);


printf("\n\n jese mainey gets sey string liya aur ussey printf seh print karwaya usi tara print dusra tarkia sey bhi kar sakta hu jo ki niche meh dekha yah hai mainey \n \t *****************\n");


printf("printing from another way result = ");

puts(array_string);

return 0;
}