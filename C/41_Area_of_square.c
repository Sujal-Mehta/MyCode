/**
 * @Author: ironman
 * @Date:   2021-05-27T06:43:03-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-28T03:44:10-04:00
 */



#include<stdio.h>
#include<math.h>
int main ()
{
    int side ;
    printf("Enter The value of side \n");
    scanf("%d", &side);
    printf("The value of area is %.0f", pow(side,2));
    return 0;
}
//in this library of math is not workiing defination of pow is missing
//solution is to link the lib
//but not getting linked 
