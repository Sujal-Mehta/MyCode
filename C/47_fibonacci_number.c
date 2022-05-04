#include <stdio.h>

int fibbonacci(int n)
{
   if (n == 0) //if n value is 0 then value returned is 0 and this also says that 0 is true for the condition so that 0 is also printed
   {
      return 0; //returning value to 0 and this also works to break the process or simply it get closed
   }
   else if (n == 1) //if value is 1 then 1 is returned instead of closing
   {
      return 1; //return value
   }
   else //if upper condition didn't match then this will get executed
   {
      return (fibbonacci(n - 1) + fibbonacci(n - 2)); //it will add previous numbers to post results .
   }
}

int main()
{
   int i;                           //assigning variable
   int n;                           //assigning variable
   scanf("%d", &n);                 //taking value of to which we have to disply the fibbonacci number
   printf("Fibbonacci of %d: ", n); //Message

   for (i = 0; i < n; i++) //codition is putted such inital value of i is 0 and it get replicate (i++) till its value remain below n .
   {
      printf("%d ", fibbonacci(i)); //printing final where function has been called to be applied in i
   }
   //body got close or main function got ended here
}
