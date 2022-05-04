#include <stdio.h>
// #include <stdlib.h>
//Function Protocol 
void Good_Morning ();
void Good_Evening ();
void Good_Night ();

int main ()
{
    printf("Demo of printing multiple function\n");
        //Function Call
        Good_Morning ();
        Good_Evening ();
        Good_Night ();
    printf ("Function got ended here\n");
    return 0 ;
}
//Function defination
void Good_Morning ()
{
    printf ("Good Morning Sir , Did you want some cup of tea\n");
}
void Good_Evening ()
{
    printf ("Good Evening sir , Did You want some thing\n");
}
void Good_Night ()
{
    printf ("Good Night sir , Have a nice dream\n");
}