#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[100];
    char file_name[100] = "sample.txt";

    printf("\nOpening File ....\n");
    fptr = fopen(file_name, "w");

    if (fptr == NULL)
    {
        printf("\nError in Opening File...\n");
        exit(1);
    }
    else
    {
        printf("\nFile Opened Sucessfully...\n");
    }

    printf("\nInput a Sentence for the file : ");
    fgets(str, sizeof str, stdin);

    fprintf(fptr, "%s", str);
    fclose(fptr);

    printf("\n The file %s created successfully...!!\n\n", file_name);
}