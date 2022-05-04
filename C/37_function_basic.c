#include<stdio.h>
void display () ;//function protocol 
int main () {
    printf ("Initializing function from here\n");
    display (); // function call
    printf ("function display got ended here\n");
    return 0 ;
}
//function defination 
void display () {
    printf ("Our instruction get instructed here \n");
}