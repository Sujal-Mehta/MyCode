#include <stdio.h>

int main()
{

    char fname[20] = "sample.txt";

    int status = remove(fname);

    if (status == 0)
    {
        printf("\nThe file is deleted sucessfully..");
    }
    else
    {
        printf("\nDeletion Failed ..");
    }
    return 0;
}