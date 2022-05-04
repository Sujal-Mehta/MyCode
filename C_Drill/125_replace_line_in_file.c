#include <stdio.h>

int main()
{
    /*	Declaration	*/
    FILE *fptr;
    int i = 0, j = 0;
    int ch;
    int ctr = 1;
    int ln;

    char str[100][100];
    char rep[100];

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
    fclose(fptr);

    printf("\n\t\tContent of the file ...\n");
    for (int i = 0; i <= ctr; i++)
    {
        printf("%s", str[i]);
    }

    fptr = fopen(fName, "w");

    printf("\n\n\nEnter the string to get replaced \n");
    fgets(rep, sizeof rep, stdin);

    printf("\n\nEnter The Line Number : ");
    scanf("%d", &ln);

    ln = ln - 1;

    for (int i = 0; i <= ctr; i++)
    {
        if (i == ln)
        {
            fprintf(fptr, "%s", rep);
        }
        else
        {
            fprintf(fptr, "%s", str[i]);
        }
    }
}