#include <stdio.h>

int main ()
{
    FILE *ptr  ;
    ptr = fopen ("103-sample.txt" , "r") ;

    // char c = fgetc(ptr);
    // // these three will read the first character of ptr file 
    // printf("The value of my character variable is %c\n" , c);
    // printf("The value of my character variable is %c\n" , c);
    // printf("The value of my character variable is %c\n\n\n\n\n" , c);

    // now if i call this fgetc lib function frequently then then it will read in sequence
    printf("the value of the file is being read in sequence : %c\n", fgetc(ptr));
    printf("the value of the file is being read in sequence : %c\n", fgetc(ptr));
    printf("the value of the file is being read in sequence : %c\n", fgetc(ptr));
    printf("the value of the file is being read in sequence : %c\n", fgetc(ptr));
    printf("the value of the file is being read in sequence : %c\n", fgetc(ptr));
}