#include <stdio.h>

int main()
{
    FILE *ptr;
    int number = 420;

    ptr = fopen("102-text_writting.txt", "w");
    fprintf(ptr, "chalu manxe = %d", number);
    // i can even write unlimited by using fprintf frequently
    fprintf(ptr , "\n this is second fprintf and second line ");
    fclose(ptr);

    return 0;
}