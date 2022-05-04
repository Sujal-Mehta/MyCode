#include <stdio.h>

int NegRemove(int num);

//Body
int main()
{
    int num, result;

    printf("\nEnter an Number (Negative) :");
    scanf("%d", &num);

    result = NegRemove(num);
    printf("\nThe Final Number = %d", result);

    return 0;
}


//Function
int NegRemove(int num)
{
    if (num <= 0)
    {
        num = num * -1;
        return num;
    }
    else
    {
        return num;
    }
}