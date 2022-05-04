#include "stdio.h"
int main ()
// int timepass (){

{
  int a [5] ;

      for (size_t i = 0; i < 5; i++)
      {
      printf("Enter The value of a \n a%d : ",i+1 );
      scanf("%d", &a[i]); //here i is just a number so that user will get a1 a2 ... instead of getting a0 a1 ...
      }

      for (size_t i = 0; i < 5; i++) {
      printf ("the value of a are \n a%d = %d \n" , i+1 , a[i]);
      }
      printf("the  address of a[0] is %u\n : " , a[0]);
      // timepass(&a[0]);


  return 0;
}
