/**
 * @Author: ironman
 * @Date:   2021-05-29T03:57:26-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-29T04:07:16-04:00
 */



// write a program using a funtion which calculates the sum and average of two nymbers
// use the pointers and print the values of sum anf average in main ().

#include "stdio.h"

void sumandavg(int a , int b , int *sum , float *avg){
*sum = a + b ;
*avg = (float)(*sum)/2 ;
}

int main ()
{
  int i, j , sum ;
  float avg ;
  i =3  ;
  j = 6 ;
  sumandavg(i,j,&sum , &avg);
  printf("the value of sum is %d \n",sum );
  printf("the value of avg is %f \n",avg );

  return  0;
}
