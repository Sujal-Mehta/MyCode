// write a program to generate multiplication table of a given number in text format . make sure the file is readable and well formatted .

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num , ofto;

    printf("Enter the integer of which you want to generate table : ");
    scanf("%d", &num);
    printf("Enter the integer upto where you want to calaculate : ");
    scanf("%d" , &ofto);
    
    ptr = fopen("107-sample.txt", "w");

    for (int i = 0 ; i < ofto ;  i++ ) {
        fprintf(ptr , "%d X %d = %d \n" , num , i+1 , num*(i+1));
    }
    fprintf(ptr , "\nSucessfully printed the multiplication table of %d", num);
    printf("\nSucessfully printed the multiplication table of %d", num);
    return 0 ;
}