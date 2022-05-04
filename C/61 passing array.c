//this program works completely work

#include <stdio.h>
int function (int *sto , int n ) {
for (int i = 0 ; i < n ; i++)
{
    printf ("The element of array %d is %d\n " , i , *sto);
    sto++ ;
}
}

int main ()
{
    int a[] = {1,2,3,5,5} ;
    function ( &a , 5);
    return 0 ;
}