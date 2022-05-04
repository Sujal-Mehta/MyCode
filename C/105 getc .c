#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("105-sample.txt", "r");

    int c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}