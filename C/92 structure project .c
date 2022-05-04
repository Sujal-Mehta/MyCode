//create a two dimensional vector using structures in c .

#include <stdio.h>
#include <string.h>

struct vector {
    int x_axis;
    int y_axis;
};

int main ()
{
    struct vector v1 , v2 ;

    v1.x_axis = 6 ;
    v1.y_axis = 5 ;
    printf("X dimenstion of vector 1 is : %d  And Y dimension of vector 1 is : %d \n " , v1.x_axis , v1.y_axis);

    v2.x_axis = 7 ;
    v2.y_axis = 8 ;
    printf("X dimenstion of vector 2 is : %d  And Y dimension of vector 2 is : %d \n" , v2.x_axis , v2.y_axis);

    return 0 ;
}