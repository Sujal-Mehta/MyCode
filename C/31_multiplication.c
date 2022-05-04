// multiplication table
#include <stdio.h>
int main()
{
    int input;
    int multi = 0;
    int output;

    printf(" Enter a  Numbers : ");
    scanf("%d", &input);
    do
    {
        multi++;
        printf("%d x %d = %d \n ", input , multi , input * multi);
    } while (multi < 10);
    return 0;
}
