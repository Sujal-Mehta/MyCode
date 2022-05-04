//->Prime Number = Number divided by itself only

#include <stdio.h>

// -> This function decide wheather a number is prime number or not
int isprime(int n);

int main()
{
    //n represent up to how much these prime number should goes --> Limit
    int n;

    printf("\nEnter the limit for prime number :- ");
    scanf("%d", &n);

    //Message before printing
    printf("\nThe prime numbers upto %d are \n", n);

    /*
        Below loop goes from 2 because prime start from 2 and end upto our limit

        Each number from 2 to end will be called by prime function in which each number will be individually calculated 
        such that if any number get divided by its root numbers then the number is not prime and it return 0 and if it 
        is not divided by any of the root number then it is prime number and function return 1 which is true and the if
        statement code will print i which is prime number
    */
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// Function defination
int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
