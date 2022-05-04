#include <stdio.h>

int main()
{
    FILE *ptr, *ptr2;
    ptr = fopen("101-sample.txt", "r");  //-->file which exist
    ptr2 = fopen("101 sample.txt", "r"); //-->file which donot exist and will return NULL so pratically

    if (ptr == NULL)
    {
        printf("file 1 doesnot exist\n");
    }
    else
    {
        printf("file 1 exist\n");
    }
    if (ptr2 == NULL)
    {
        printf("file 2 does not exist\n");
    }
    else
    {
        printf("file 2 exist\n");
    }
}