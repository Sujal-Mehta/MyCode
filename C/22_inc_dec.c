#include<stdio.h>
int main () {
    int a = 1;

    printf ("the initial value of a is  %d \n",a); //here the value of a will be printed now ,

    a+=10 ; 
    printf (" value after increment is to  %d\n ",a);

    //or 
    a+=10 ; //the value  get 
    printf (" value after increment is to  %d\n ",a);

    //procedure two previously we have already increased two times so now initial value of a is now ,a= 3

    printf("value after increment %d\n " ,++a ); //here the value get increased at first and then printed 

    printf("value after increment is %d\n ", a+=10);
    return 0;
}