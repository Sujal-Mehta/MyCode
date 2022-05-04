#include <stdio.h>
void Good_Morning ();
void Good_Evening ();
void Good_Night ();

int main ()
{
    printf("***Demo of printing multiple function***\n");
        Good_Morning (); //here main call the function Good_Morning
                        // But here Good_morning is calling evening and night
    printf ("***Function got ended here***\n");
    return 0 ;
}
void Good_Morning ()
{
    printf ("       Good Morning Sir , Did you want some cup of tea\n");
    Good_Evening (); //evening in morning so it is called by morning at time of execution
}
void Good_Evening ()
{
    printf ("       Good Evening sir , Did You want some thing\n");
    Good_Night ();//here evening called night at the time of execution
}
void Good_Night ()
{
    printf ("       Good Night sir , Have a nice dream\n");
    //here night return back get back to main function
}