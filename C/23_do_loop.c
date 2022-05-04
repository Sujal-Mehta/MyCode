#include<stdio.h>
int main () {
    int i = 0;
 
    do {
        printf ("The value of i is %d\n",i);
    i+=10;
    // i*=10; // this operators can also be operated 
    }while (i < 1000);

    return 0 ;
}   


//while check the condition first and then execute where do make opposite procedure