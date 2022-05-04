#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *str, int left, int right)
{
    int temp = str[left];
    str[left] = str[right];
    str[right] = temp;
}

void Permutation(char str[], int n, int left, int right)
{
    if (left == right)
    {
        printf("%s ", str);
        return;
    }

    for (int i = left; i <= right; i++)
    {
        swap(str, left, i);
        Permutation(str, n, left + 1, right);
        swap(str, left, i);
    }
}

int main()
{
    char str[] = "abc";
    int n = strlen(str);
    int left = 0, right = n - 1;

    Permutation(str, n, left, right);

    return 0;
}