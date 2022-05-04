//passing array value from main to function value and then printing the function 
#include <stdio.h>

//yo kam lagnu parney ho 
// void function (int *arraystore , int number)
// {   
//     for (int i = 0; i < number; i++)
//     {
//     printf("The value of main wala array %d is %d\n", i , *(arraystore+1));
//     }
    
// }

void function ( int array[] , int  number) 
{
    for (int  i = 0; i < number; i++)
    {
        printf("The value of element  %d is %d\n" , i + 1 , array[i] );
    }
    // i can even change the original array number from here 
    //like below method parney
    array[2] = 34 ;
}

int main ()
{
    int arraystart [] = {1,2,10,5,6 };
    function (arraystart , 5);
    printf("The value of arraystart 2 would have got change \nso final value of arraystart 2 is %d " , arraystart[2]);
    return 0 ;
}