#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(10 * sizeof(float));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of element #%d : ", i + 1);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of element #%d : %f ", i + 1, ptr[i]);
    }
    return 0;
}