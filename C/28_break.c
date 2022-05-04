#include<stdio.h>
int main () {

    int a  ;
    printf ("Enter the number \n");
    scanf ("%d", &a);
    
    do 
    {
        printf ("The value of a is %d \n ", a );
        a++ ;
        
        if ( a == 50 ) 
        {
            printf("the value has been limited to here");
            continue ; 
        }

    } while ( a < 100 );
    
    return 0 ;
}