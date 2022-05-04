#include<stdio.h>
int main () {
    int intitial = 1; //its the starting number to get multiply
    int fracof ;//we will take input for which number did we need factorial 
    int fractorial=1 ; //to set loop for thisss 
    
    printf("Enter the number which you want for fractorial \n");
    scanf ("%d", &fracof);

    for (int  initial =1  ; initial <= fracof ; initial++ )
    {
        // fractorial *= initial ;
        fractorial *= initial ; //get multiplied by adding 1 as our instruction 
    }
    printf("The fractorial of %d is %d ", fracof , fractorial);
    return 0 ;
}
// next way to find factorial


//   #include<stdio.h>  
// int main()    
// {    
//  int i,fact=1,number;    
//  printf("Enter a number: ");    
//   scanf("%d",&number);    
//     for(i=1;i<=number;i++){    
//       fact=fact*i;    //this work such that the previous fact value get multiplied by i 
//   }    
//   printf("Factorial of %d is: %d\n\n",number,fact);   
// return 0;  
// }   
