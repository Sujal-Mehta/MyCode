#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr1, *fptr2;
    char ch;
    char fname1[100] = "sample.txt", fname2[100] = "sample2.txt";

    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "a");

    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error in Opening File ...");
        exit(0);
    }

    ch = fgetc(fptr1);

    while (ch != EOF)
    {
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }

    printf("\nCopying File Done SucessFully...");

    return 0;
}