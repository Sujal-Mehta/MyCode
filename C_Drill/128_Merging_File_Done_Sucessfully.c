#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr1, *fptr2, *fptr;
    char ch1, ch2;
    char fname1[100] = "sample.txt", fname2[100] = "sample2.txt", fname3[100] = "sample3.txt";

    fptr1 = fopen(fname1, "r");
    fptr2 = fopen(fname2, "r");
    fptr = fopen(fname3, "a");

    if (fptr1 == NULL || fptr2 == NULL)
    {
        printf("Error in Opening File ...");
        exit(0);
    }

    ch1 = fgetc(fptr1);
    while (ch1 != EOF)
    {
        fputc(ch1, fptr);
        ch1 = fgetc(fptr1);
    }

    fputc('\n', fptr);

    ch2 = fgetc(fptr2);
    while (ch2 != EOF)
    {
        fputc(ch2, fptr);
        ch2 = fgetc(fptr2);
    }

    printf("\nMerging File Done Sucessfully...");

    return 0;
}