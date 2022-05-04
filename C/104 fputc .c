#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("104-sample.txt", "w");

    // putc used to write single character by character
    fputc('s', ptr);
    fputc('u', ptr);
    fputc('j', ptr);
    putc( 'a', ptr);
    putc( 'l', ptr);

    fclose(ptr);
}