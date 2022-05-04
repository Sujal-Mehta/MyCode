very important formula for factorial at last

#include "stdio.h"
int factorial (int x);

int main ()
{
  int a;
  printf("Enter The value of a here \n" );
  scanf("%d",&a);
  printf("the value of factorial %d is %d\n",a,factorial(a) );//function lai directly yehi call garaye
  return 0 ;
}

int factorial (int x)
{
  if (x==1 || x==0) {
  return 1 ;
  }
  else {
    return x * factorial (x-1);
  }
}

