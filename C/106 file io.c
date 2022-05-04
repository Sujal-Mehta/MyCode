//write a program to read three integers from a file ...

#include <stdio.h>
int main ()
{
    int a , b , c ;
    FILE *ptr ;
    ptr = fopen ("106-sample.txt" , "r");
    fscanf (ptr ,"%d %d %d" , &a , &b , &c);
    fclose (ptr);
    printf("The integers are : %d %d and %d" , a , b , c );
    return 0;


}
