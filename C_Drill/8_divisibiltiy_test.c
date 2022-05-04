// Write a C program that reads in two integers and check whether the first integer is a multiple of the second

#include <stdio.h>

//Function Prototype
int divisibility(int n1, int n2);

//Body
int main()
{
    int num1, num2, result;

    printf("\nInput two numbers \n");
    scanf("%d %d", &num1, &num2);

    result = divisibility(num1, num2);
    if (result == 1)
    {
        printf("\nThe number can be divivded . Well done !");
    }
    else
    {
        printf("\nThe number cannot be divivded . try another !");
    }
    
    return 0;
}

// Function defination 
int divisibility(int n1, int n2)
{
    if ((n1 && n2) != 0)
    {
        if ((n1 % n2) != 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        printf("Both number can not be zero . Sorry !");
        return 0;
    }
}