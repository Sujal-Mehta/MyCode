#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("\n\t   Ranges for integer data types in C\n");
    printf("\t---------------------------------------\n\n");

    printf("Data_Type    Size      Range->(Min)       Range->(Max)\n");
    printf("----------------------------------------------------------------\n");
    printf("int            %d           %d              %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("char           %d           %d              %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("float          %d           %14.7g          %14.7g\n", sizeof(float), FLT_MIN, FLT_MAX);

    return 0;
}