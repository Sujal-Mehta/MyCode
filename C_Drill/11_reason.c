// program that accepts one seven-digit number and separates the number into its individual digits, and prints the digits separated from one another by two spaces each.

#include <stdio.h>
int main()
{
    int n;

    printf("\nInput a seven digit number : ");
    scanf("%d", &n);

    printf("Output : ");

    printf("%d", (int)(n / 1000000));
    n = n - ((n / 1000000) * 1000000);

    printf(" %d", (n / 100000));
    n = n - ((n / 100000) * 100000);

    printf(" %d", (n / 10000));
    n = n - ((n / 10000) * 10000);

    printf(" %d", (n / 1000));
    n = n - ((n / 1000) * 1000);

    printf(" %d", (n / 100));
    n = n - ((n / 100) * 100);

    printf(" %d", (n / 10));
    n = n - ((n / 10) * 10);

    printf(" %d", (n / 1));
    n = n - ((n / 1) * 1);

    return 0;
}