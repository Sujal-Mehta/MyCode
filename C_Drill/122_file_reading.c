#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char fName[100];
    char ch;

    printf("\nInput the file name to be opened : ");
    scanf("%s", fName);

    fptr = fopen(fName, "r");

    if (fptr == NULL)
    {
        printf("File does not exist or cannot be opened.\n");
        exit(0);
    }
    printf("The content of the file %s is : ", fName);
    ch = fgetc(fptr);

    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
}
