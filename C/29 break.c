#include<stdio.h>
int main () {

    int a  ;
    printf ("Enter the number \n");
    scanf ("%d", &a);
    
    do 
    {
        printf ("The value of a is %d \n ", a );
        a++ ;
        
        if ( a<=1 ) 
        {
            printf("the value has been limited to here");
            break ;
        }

    } while ( a < 100 );
    
    return 0 ;
}
