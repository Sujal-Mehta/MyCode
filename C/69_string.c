
#include <stdio.h>
//#include <>
int main ()
{
printf(" Note : string lai eeuta pointer ma point garey ani tyo pointer ma bhako address lai increase gardai gaye \0 sama\n\n");
 char str [] = "sujal";
 char *ptr = str ;  
 while (*ptr!='\0')
 {
     printf("%c", *ptr);
     ptr++;
 }
return 0;
}

// #include <stdio.h>
// //#include <>
// int main ()
// {
//  char str [] = {'s','u','j','a','l','\0'};
//  char *ptr = str ;  
//  while (*ptr!='\0')
//  {
//      printf("%c", *ptr);
//      ptr++;
//  }
// return 0;
// }


// #include <stdio.h>
// //#include <>
// int main ()
// {
//  char str [] = "sujal";
//      printf("%c %c %c %c %c", str[0] ,str[1] ,str[2] ,str[3],str[4]);
// return 0;
// }

// #include <stdio.h>
// //#include <>
// int main ()
// {
//  char str [] = "sujal";

//  for (int i = 0; i < 5; i++)
//  {
//      printf("%c" ,str[i]);
//  }
// return 0;
// }
