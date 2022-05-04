#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {

        printf("Enter the value of Element #%d : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of element #%d : %d \n", i + 1, ptr[i]);
    }

    return 0;
}