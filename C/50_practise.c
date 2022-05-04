/**
 * @Author: ironman
 * @Date:   2021-05-29T01:53:32-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-29T02:45:31-04:00
 */



#include "stdio.h"
int main(){
  int a ; //the variable of  which we are going to find address
  printf ("the address of a is %u\n" , &a);


  //similary if we want to print the value of a then we will do this but lets first put the value in a variable
  printf("Enter the value of a \n" );
  scanf ("%d" , &a) ;
  printf("the value of a is %d\n",a); //simply but what if we call the value of a through address or pointer option

  // Now lets create a varible/pointer that will store the adderss of a
  int *store ;
  store = &a ; //store keep the address of a ,,,we can print the value of a such that
  //this will print the value of a
  printf("The value of a is %d\n", *store );
  //but if we just put store to be print instead of *store then we will get adress of a because store carries the address of a which intially become value for store
  //like this
  printf ("the address of a is %u = the value of store is %d" , &a , store);

  return 0;
}
