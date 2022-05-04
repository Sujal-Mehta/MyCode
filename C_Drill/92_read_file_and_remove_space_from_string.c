#include <stdio.h>
#include <ctype.h>

void main()
{
    FILE *fptr;

    int ch;

    fptr = fopen("1000_R_sample.txt", "r");

    /*	Loop which Display the content of the file	*/
    printf("\n The Content of the file is : \n\n\t\t\t\t");

    while (ch != EOF)
    {
        putchar(ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    fptr = fopen("1000_R_sample.txt", "r");

    /*	Loop which remove all the space from the file 	*/
    printf(" \n\n After removing the spaces the content is : \n\n\t\t\t\t");

    do
    {
        ch = fgetc(fptr);
        if (ch == ' ' || ch == EOF)
        {
            continue;
        }
        else
        {
            putchar(ch);
        }
    } while (ch != EOF);

    fclose(fptr);
}
