#include <stdio.h>

int main()
{
    FILE *fptr;
    int i, n;

    char str[100], fname[100] = "sample.txt";
    char ch;

    fptr = fopen(fname, "a");

    printf("\nInput the number of lines to be written : ");
    scanf("%d", &n);

    printf("\n\n:: The Lines are ::\n");

    for (i = 0; i < n + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
    }
    fclose(fptr);

    /*	Read the file after appended	*/
    fptr = fopen(fname, "r");

    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);

    return 0;
}
