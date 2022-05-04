// write a  program to change the value of a variable to ten times of its current value .
// and write a function  and pass the value by reference
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void funtest (int a , int b , float *avg  ) { //i commanded such that variable of main send value of x and y
  /*  and address of avg in term of address operator so it happens that address operator *avg float got the
  adress of avg from main &avg and similiary *avg = ..function.....get written in address not in variable so
  we we have change the value of avg in main two */
  printf("%d %d \n", a ,b );
  printf("%u %u\n", &a ,&b );
  *avg=(float)( a + b )/2 ;

}

int main ()
{
  int x , y ;
   float avg =10 ; // here the avg value stored is 10 but we have sent the address of this variable due to which 
   //the value will get overwritten in this adress and previous value get changed
  srand (time(0));
  y=rand()%5 + 1 ;
  srand (time(0));
  x=rand()%6 + 1 ;
  printf("The value of x and y is %d\n ,%d \n", x, y );
  printf("The address of x and y is %u\n ,%u \n", &x, &y );

  printf("the value of avg is %f \n" , avg); // function hunu bhanda agadi avg ko value 
  funtest (x ,y, &avg);
  printf("the value of avg is %f \n" , avg); // function bhaye sakeko wala avg
  return 0 ;
}
