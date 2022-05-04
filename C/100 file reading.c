#include <stdio.h>

int main ()
{
    int num , number , spc3num;
    FILE *ptr ;
    ptr = fopen ("sample.txt" , "r");
    
    fscanf(ptr , "%d" , &num);
    printf("The value of num is %d", num);

    fscanf(ptr , "%d" , &number );
    printf(" \nThe value of 2 nd after space is : %d " , number);

    fscanf(ptr , "%d" , &spc3num);
    fclose(ptr);
    printf("\nThe number after 3rd space is : %d \n" , spc3num);
    
    return 0 ;
}