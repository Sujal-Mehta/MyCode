
//Finding Number in a usr Number

#include <stdio.h>

int search(int num, int search);

int main()
{
    int num, srch, count;

    printf("\nInput a Number : ");
    scanf("%d", &num);

    printf("\nwhich number did you want to search in %d this", num);
    scanf("%d", &srch);

    count = search(num, srch);
    printf("\nThe number of %d in the said number is %d\n", srch, count);
    return 0;
}

int search(int num, int search)
{
    int n = num;
    int s = search;
    int count = 1;
    int reminder = 0;

    while (n > 0)
    {
        reminder = n % 10;
        n /= 10;

        if (reminder == s)
        {
            count++;
        }
        return count;
    }
}
