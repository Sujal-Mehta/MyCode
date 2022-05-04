#include <stdio.h>

void copyString(char str[], char copy_str[], int ctr)
{
    copy_str[ctr] = str[ctr];
    if (str[ctr] == '\0')
        return;
    copyString(str, copy_str, ctr + 1);
}

int main()
{
    char str[100], copy_str[100];

    printf("\nInput The String To Copy : ");
    fgets(str, sizeof str, stdin);

    copyString(str, copy_str, 0);

    printf("\nThe String sucessfully copied . \n\n");
    printf("The First String is : %s", str);
    printf("The Copied String is : %s\n", copy_str);

    return 0;
}