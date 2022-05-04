/**
 * @Author: ironman
 * @Date:   2021-05-28T12:05:32-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-29T01:24:00-04:00
 */



#include "stdio.h"

int main(){
  int i = 3 ;
  int *j  = & i ;
  //j will now store the address of i

  //we can even store adresss of j in another variable ,
  //lets suppose i am going to store *j variable address in new variable like k
  // so we will write it with 2 star **
  int **k ;
  k = &j ;

  //the value of i which we have set is printed
  printf("the value of i is %d\n",i );


  //this will print the value of i because adress of i has already beens stored in *j
  printf("The value of i is %d\n", *j);


  //as %u has been used and &i has printed so it will print the adress of i
  printf("The address of i is %u\n",&i );


  //it will also print the adress of i because adress of i has been stored in variable j
  printf("The address of i is %u\n", j);


  //the j variable  has stored the address and in this instruction  we are finding the adress of j variable ,matlab
  //jisneey store kiya hai usi ka address hum log nikal rahe hai ismey
  printf("the address of j is %u\n", &j);


  //as address of i has been stored in j variable so the value for j will be the adress of i
  printf("The value of j is %u\n", *(&j));

  //this both will print the address of k
  printf ("The value of k or address of j is %u\n" ,*(&k));
  printf ("The address of k is %u\n" ,&k);

  printf ("The value of k is %d\n" , k);



}
