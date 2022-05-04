/**
 * @Author: ironman
 * @Date:   2021-05-28T05:56:14-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-28T06:11:22-04:00
 */



//celcius to farenheit formula   is celcius*9/5 +32
#include "stdio.h"
float celcius_deg (float c);  //fuction protocol

int main ()
{
  float celcius;
  printf("Enter the value of celcius :\n" );
  scanf("%f",&celcius);
  printf("Farenheit of %f is %f \n", celcius , (float)celcius_deg(celcius)); //function calling
  return 0 ;
}

float celcius_deg (float c) //function defination
{
  float celcius ;
  celcius = (c * 9/5) +32 ;
  return  (float)celcius ;
}
