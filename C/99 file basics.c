#include <stdio.h>

int main ()
{
    FILE *ptr ; 
    ptr = fopen ("99-9 file.txt","r"); //--> for reading the file
    // ptr = fopen ("99-9 file.txt" , "w"); //-->for writting the file

    
    return 0 ;
}