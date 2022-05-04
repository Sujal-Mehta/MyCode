// Copy string to another variable and count how much character copied .

#include <stdio.h>

int main()
{
    char source[80], destination[80];
    int i, count = 0;

    printf("\nInput a string\n");
    gets(source);

    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
        count++;
    }
    destination[i] = '\0';

    printf("\nThe Original String = %s\n", destination);
    printf("The Number of character present in string = %d", count);
    return 0;
}
