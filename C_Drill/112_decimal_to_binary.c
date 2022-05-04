#include <stdio.h>

long binconv(int dec)
{
    static long bin, rem, factor = 1;

    if (dec != 0)
    {
        rem = dec % 2;
        bin = bin + rem * factor;
        factor = factor * 10;
        binconv(dec / 2);
    }
    return bin;
}

int main()
{

    int dec;
    long bin;

    printf("Input any Decimal Number : ");
    scanf("%d", &dec);

    bin = binconv(dec);

    printf("\nBinary Number = %ld", bin);

    return 0;
}