// write a program to create an array of 10 integers and store multiplication table of n in it .
#include <stdio.h>


int main ()
{
    int multiply [10] ;
    int n ;
    
        printf("Enter the number : ");
        scanf ("%d",&n);

            for (int i = 0; i < 10; i++)    
                {
                            multiply[i] = n*(i+1) ;    
                }
            for (int i = 0; i < 10; i++)
                {
                    printf("%d X %d = %d \n" ,n ,i+1 , multiply[i] ) ;
                }
    
return 0 ;
}