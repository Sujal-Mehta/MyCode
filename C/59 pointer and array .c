#include <stdio.h>
int main ()
{
        int num[4] ; //array making of 4 num

        int *store ; //making a pointer 
        store = & num[0] ; //storing array 1st variable here


        //now we will just see that i store the input of all array  by increasing the address which is stored in store pointer
        //simply I have increased store value which is actuall a address due to which we get new address instead of getting number
        for ( int i = 0 ; i < 4 ; i++ )
        {
            //taking input loop
            printf("Enter the num %d :- " , i+1) ;
            scanf("%d", store);
            store++ ;
        }
        for ( int i = 0 ; i < 4 ; i++ )
        {
            //showing input value 
            printf("the value of %d is :- %d\n" , i+1 , num[i] );
        }
        return 0 ;
}