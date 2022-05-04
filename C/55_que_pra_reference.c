/**
 * @Author: ironman
 * @Date:   2021-05-29T05:22:13-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-29T05:34:12-04:00
 */



// write a  program to change the value of a variable to ten times of its current value .
// and write a function  and pass the value by reference

#include "stdio.h"
void  org_change (int num , int *add ){ // this function simply edit the value considering address
  printf("num is %d\n", num );
  *add = 10 *num  ;
}
int main ()
{
  int a ;
  int b ;
  org_change (5  , &b);
  printf("The value of b is %d\n", b );
  return 0 ;
}






//  same by calling function by call 
// #include "stdio.h"
// void  org_change (int num , int *add ){ // this function simply edit the value considering address
//   printf("num is %d\n", num );
//   *add = 10 *num  ;
// }
// int main ()
// {
//   int a ;
//   int b ;
//   org_change (5  , &b);
//   printf("The value of b is %d\n", b );
//   return 0 ;
// }
