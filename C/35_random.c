//random number generating
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

    int number ;

    srand (time(NULL));  ///instruction  to generate numbers randomly frequently
    number = rand()%10 + 1; //rand number generator


    printf ("%d  ",number);
    
    return 0 ;
}
