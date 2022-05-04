//reverse multiplication table
#include<stdio.h>
int main () {
    
    printf("multiplication table of 10 \n");

    // yaha a ko value 0 aauda tyo false bhaye dinxa ra 10 ma exit bhaye dinxa
    for (int a = 10 ; a; a--) 
    {
       
        printf(" 10 * %d = %d \n",a , 10*a);
    }
    return 0 ;
}