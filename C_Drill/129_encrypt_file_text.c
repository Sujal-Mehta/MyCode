#include <stdio.h>
#include <stdlib.h>

void main()
{

    /*	Declaration	*/
    FILE *fptr, *fptr2;
    char fname[] = "sample.txt";
    char fname2[] = "temp.txt";
    char ch1, ch2;

    /*	Opening Files	*/
    fptr = fopen(fname, "r");
    fptr2 = fopen(fname2, "w");

    /*	Getting Character	*/
    ch1 = fgetc(fptr);

    /*	Writing Files in temp	*/
    while (ch1 != EOF)
    {
        fputc(ch1 + 100, fptr2);
        ch1 = fgetc(fptr);
    }

    /*	Copying Decrypted text to org file	*/
    fclose(fptr);
    fclose(fptr2);

    fptr = fopen(fname, "w");
    fptr2 = fopen(fname2, "r");

    ch2 = fgetc(fptr2);
    while (ch2 != EOF)
    {
        fputc(ch2, fptr);
        ch2 = fgetc(fptr2);
    }
}
