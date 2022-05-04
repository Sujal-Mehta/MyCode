#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *) calloc (10 , sizeof(int));
    for (int i = 0 ; i < 10 ; i++){
        printf("calloc function allocate default value in allocated memory space and value is : %d\n\n" , ptr[i]);
    }    
    return 0 ;
}