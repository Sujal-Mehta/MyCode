#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char str[], int left_index, int right_index , int n )
{
    left_index = 0;
    right_index = n - 1;

    if (left_index >= right_index)
    {
        return 1;
    }
    if (str[left_index] != str[right_index])
    {
        return 0;
    }
    return isPalindrome(str, left_index + 1, right_index - 1 , n);                                                                                          
}

int main()
{

    char str[] = "racecar";
    int n = strlen(str);

    printf("%d ", n);

    printf("%d ", isPalindrome(str, 0, n - 1 , n));
    return 0;
}