#include <stdio.h>
#include <math.h>

int main ()
{
    int num ;
    printf ("Enter the number of which you want to know square : ") ;
    scanf("%d", &num);

    printf("\nsquare of %d is %0.0f \n",num ,(double) pow(num , 2));
    printf ("\n Mathematically\n");
    printf ("\n%d ^ 2 = %0.0f" , num , (double) pow (num ,2 ));
    return 0;
}