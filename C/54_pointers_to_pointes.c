/**
 * @Author: ironman
 * @Date:   2021-05-29T05:04:22-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-29T05:19:14-04:00
 */



#include "stdio.h"

char main ()
{
  char p = '*' ;
  char *p1  ;
  char **p2 ;
  p1 = &p ;
  p2 = &p1;
  printf("the value of p is %c\n", **p2 );
  return 0 ;
}
