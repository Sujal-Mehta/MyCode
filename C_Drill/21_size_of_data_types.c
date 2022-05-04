#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Size of C data types:\n\n");
    printf("Type               Bytes\n\n");
    printf("--------------------------------\n");
    printf("char                 %lu\n", sizeof(char));
    printf("unsigned char        %lu\n", sizeof(unsigned char));
    printf("short                %lu\n", sizeof(short));
    printf("int                  %lu\n", sizeof(int));
    printf("unsigned             %lu\n", sizeof(unsigned));
    printf("long                 %lu\n", sizeof(long));
    printf("unsigned long        %lu\n", sizeof(unsigned long));
    printf("long long            %lu\n", sizeof(long long));
    printf("unsigned long long   %lu\n", sizeof(unsigned long long));
    printf("float                %lu\n", sizeof(float));
    printf("double               %lu\n", sizeof(double));
    printf("long double          %lu\n", sizeof(long double));
    printf("_Bool                %lu\n", sizeof(_Bool));
    printf("\n");
    return 0;
}
