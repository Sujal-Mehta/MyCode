// //checking that 97 is divisible by your number or not
// #include<stdio.h>
// int main () {
//     int num;
//     printf("Enter the number \n");//getting the value of user
//     scanf("%d", &num);

//     printf("divisibility test %d\n", num%97);
//     return 0 ;
// }
// //if the number is able to get divide then result will be 0 



//another way
#include <stdio.h> 
int main () { 
    int a ;
    printf("enter any number");
    scanf("%d",&a);

    if (a%97 == 0) {
        printf("the number is divisible");
    }
    else{
        printf("the number is not divisible");
    }
return 0 ; 
}