#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int *ptr;

    for (int i = 0; i < 60000; i++)
    {
        ptr = (int *)calloc(60000 ,  sizeof(int));
        printf("Enter the value for element #%d " , i +1 );
        scanf("%d", &ptr[i]);
        free(ptr);
    }
    return 0 ;
    return 0;
}