/**
 * @Author: ironman
 * @Date:   2021-05-27T05:30:01-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-28T03:44:14-04:00
 */



#include <stdio.h>
//sum is a functionn which takes a and b as input and returns as integer as an output
int sum (int a , int b);//function prototupe declaration

int main ()
{
    int c ;
    c = sum ( 2,5 ); //function call
    printf ("The value of c is %d\n",c );
    int d;
    d = sum (4 , 5); //function call
    printf("The value of c is %d ", d);

    return 0 ;
}
int sum (int a , int b ) //function defination
{
    int c ;
    c = a + b ;
    return c ;
}
