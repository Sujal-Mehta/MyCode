/**
 * @Author: ironman
 * @Date:   2021-05-29T02:48:16-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-29T03:25:59-04:00
 */



#include "stdio.h"
#include "stdlib.h"
#include "time.h"
//function
void address_not_same(int i){
  printf("the address of i (function wala) is %u\n", &i);
  printf("The value of i is %d\n", i);
  /* as main function wala i comes here as a copy so the value of i in function is
  also same but i of both main and function are different so the addressse are not same
  also if  we change the variable from i to something than also we will not get any problem
  like this

  void address_not_same(int a){
    printf("the address of a (function wala) is %u\n", &a);
    printf("The value of a is %d\n", a);
  }
  */
}
//body / main
 int main ()
{
  //generating a random value of i
  int i ;
  srand(time(0));
  i = rand ()%10 +1 ;
  //generating value has finished
  //printing the value of i
  printf("The value of i (main wala) is %u\n" , i);
  //printing the address of i
  printf("The address of i (main wala) is %u\n" , &i);
  //function called and the value of i has send to address_not_same function as an copy
  //where function wala  i is totally different/no connection of two i
  //the value of main wala i just  reached to fuction as an a copy and as the address of i will
  //also get differ
  address_not_same (i);
  return 0;
}
