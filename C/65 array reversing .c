//make array 
//create function
//take address of array to a function 
// take the size of array in function 
//swap array 0 with array last where 0 inc and last array dec 
//like array[i] , array [n-i-1]
//reverse aadi number lai matra size by 2 
//swap technic use style here a


#include <stdio.h>
int reverse(int *array , int n ) 
{
    int temp ;
    for (int i = 0; i < n/2 ; i++)
    {
        temp = array[i] ; //here i stored the value of array up to 2  for swapping
        array[i] = array[n-i-1]; //this will  pass the value in reverse order
        array [n-i-1] = temp ;

        // array[i] = array[n-i-1]; //this work like array[0] gets equal to array[7]
        // array [n-i-1] = temp ; //this work like array [7] gets equal to array[0]

    }
    
}

int main ()
{
    int array[] = {1 ,2 ,4 ,3 ,5} ;
    //now i will send the array and n value to swap the value in function
    reverse (array , 5);
    for (int i = 0; i < 5 ; i++)
    {
        printf ("The value of %d element is : %d\n " ,i+1, array[i]);
    }

return 0 ;
}