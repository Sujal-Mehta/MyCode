#include <stdio.h>

int main()
{
    /*	Declaration	*/
    FILE *fptr;
    int i = 0, j = 0;
    int ch;
    int ctr = 1;

    char str[100][100];
    char sto[100];

    /*	Opening File in read  mode	*/
    char fName[100] = "sample.txt";

    fptr = fopen(fName, "r");

    /*	Reading file	*/
    ch = fgetc(fptr);

    while (ch != EOF)
    {

        str[i][j] = ch;
        j++;
        if (ch == '\n')
        {
            i++;
            j = 0;
            ctr++;
        }
        ch = fgetc(fptr);
    }

    /*	Printing the readed words	*/
    printf("\nNumber of lines = %d\n\n", ctr);

    for (int i = 0; i <= ctr; i++)
    {
        printf("%s", str[i]);
    }
}