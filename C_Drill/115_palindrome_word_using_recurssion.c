#include <stdio.h>
#include <string.h>

void checkPalindrome(char str[], int index);

int main()
{
    char str[100];

    printf("\n Input a word to check for palindrome : ");
    scanf("%s", str);

    checkPalindrome(str, 0);

    return 0;
}

void checkPalindrome(char str[], int index)
{
    int len = strlen(str) - (index + 1);

    if (str[index] == str[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("'%s' is an Palindrome word .\n", str);
            return;
        }
        checkPalindrome(str, index + 1);
    }
    else
    {
        printf("'%s' is not an palindrome word .\n", str);
    }
}