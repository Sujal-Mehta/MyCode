#include <stdio.h>

long int pow_num(int inputNumber, int power)
{
    long int result = 1;
    if (power == 0)
    {
        return result;
    }
    result = inputNumber * (pow_num(inputNumber, power - 1));
}

int main()
{
    int inputNumber, power;
    long int result;

    printf("\nEnter The Base Value : ");
    scanf("%d", &inputNumber);

    printf("\nEnter The Value Of Power : ");
    scanf("%d", &power);

    result = pow_num(inputNumber, power);

    printf("\nThe Value Of %d To The Power Of %d is : %ld", inputNumber, power, result);
    printf("\n\n***\t***\t%d ^ %d = %ld\t***\t***", inputNumber, power, result);

    return 0;
}