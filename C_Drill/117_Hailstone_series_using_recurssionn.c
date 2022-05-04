#include <stdio.h>

/*	Function to generate next number	*/
int getNextValue(int inputNumber)
{
    int i = inputNumber;
    if (i % 2 == 0)
    {
        i /= 2;
    }
    else
    {
        i = 3 * i + 1;
    }
    return i;
}

/*	Function to generate Hailstone Number	*/
void getHailstone(int inputNumber)
{
    int i = inputNumber;
    if (i == 1)
    {
        printf("%d ", i);
        return;
    }
    else
    {
        printf(" %d ", i);
        getHailstone(getNextValue(i));
    }
}

int countLength(int inputNumber)
{
    int i = inputNumber;
    if (i == 1)
    {
        return 1;
    }
    else
    {
        return 1 + countLength(getNextValue(i));
    }
}
int main()
{
    int inputNumber;

    printf("\n\nRecursion : Hailstone Sequence of a given number upto 1 : \n");
    printf("--------------------------------------------------------------\n");

    printf("Input any number (positive) to start for Hailstone Sequence : ");
    scanf("%d", &inputNumber);

    printf("\nThe Hailstone sequence  starting at %d is : \n", inputNumber);
    getHailstone(inputNumber);

    printf("\n\nThe length of the sequence is %d . \n", countLength(inputNumber));
}