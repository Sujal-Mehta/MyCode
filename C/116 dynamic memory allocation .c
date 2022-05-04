#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of element #%d :", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of element #%d : %d \n", i + 1, ptr[i]);
    }
    return 0;
}