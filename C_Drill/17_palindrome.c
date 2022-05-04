#include <stdio.h>

int palindrome(int n);

int main()
{
    int n;

    printf("Input a five digit number : ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("%d is palindrome .", n);
    else
        printf("%d is not palindrome", n);
    return 0;
}

int palindrome(int n)
{
    int x = n;
    int rev;
    rev = 0;

    // suppose 33333 = n ;
    rev += (x / 10000);            // 3
    x = x - ((x / 10000) * 10000); // 33333 - 30000 = 3333

    rev += ((x / 1000) * 10);    // 30+3 = 33
    x = x - ((x / 1000) * 1000); // 3333 - 3000 = 333

    rev += ((x / 100) * 100);  // 33+300 = 333
    x = x - ((x / 100) * 100); // 333-300 = 33

    rev += ((x / 10) * 1000); // 333+3000 = 3333
    x = x - ((x / 10) * 10);  // 33-30 = 3

    rev += ((x % 10) * 10000); // 33333

    return n == rev;
}