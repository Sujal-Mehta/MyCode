// finding the average of 3 Numbers ;;
#include <stdio.h>
float  average (int a , int b , int c); //function protocol

int main(int argc, char const *argv[])
{
  int a,b,c;
    printf("enter the value of a ,b and c\n" );
    scanf("%d\n%d\n%d",&a ,&b ,&c );

    printf("The average value of %f is \n", average (a,b,c) ); //function call
return 0;
}
float average (int a , int b , int c ) //function call
{
  return (float)(a+b+c)/3;
}

