#include<stdio.h>
int main () {
    int a=1;
    
    //we can print like this using for 
    // for ( a = 1; a < 10; a++)
    // {
    // printf ("%d\n",a);
    //     /* code */
    // }
    
    printf ("%d\n",a); //1

    a++;
    printf ("%d\n",a); //2

    a++;
    printf ("%d\n",a); //3

    a++;
    printf ("%d\n",a); //4

    printf ("%d\n",a++);//4 this will print 4 because a is printed then it is increased

    printf ("%d\n",a);//5  this will print 5 because in line 23 after printing a it has been increased too
    //we can do similar task in next way too
    //now i am going to print that by this command
    printf ("%d\n", ++a);//
    
    return 0 ;
}