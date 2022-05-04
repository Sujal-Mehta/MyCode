//writting a  program to detect odd or even using if - else statement

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n"); /// taking input 
    scanf("%d" , &a);

    if (a%2==0) // making conditions 
    {
        printf("%d  is even \n" , a);
    }
    else
    {
        printf("%d  is odd \n" ,a); //if our above condition didn't satisfy then this will be shown 
    }
    return 0;
}