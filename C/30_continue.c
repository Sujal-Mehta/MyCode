#include <stdio.h>
int main()
    {
        int a ;
        a = 0 ;
 
       
        a++ ;
        printf("The  value are %d \n" ,a); //first print instruction 
        
        while ( a < 20) 
        {
            a++ ;  
            printf ("The value is %d \n", a);

                if ( a >= 20) 
                {
                    printf("invalid!");
                    continue ;
                }
        }

        
    }