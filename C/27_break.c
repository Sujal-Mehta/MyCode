// #include<stdio.h>
// int main () {

//     int a = 0 ;
   
    
//     do {
//         printf ("print the value of %d \n ", a);
//         a++;
//             if (a > 5 ) 
//             {
//                  break ;
//             }
//     }while (a < 10); 
     
//     return 0 ;
// }

#include <stdio.h>
int main () {
   
   int a ,b , c ;

   printf ("value of a and b enter\n");
   scanf ("%d %d", &a ,&b );

   c = a % b ;
//    printf ("div value is %d",c);
do { 
         if (c == 0 )
        {
            printf ("true");
            break;
        }
    else if ( c != 0 )
        {
            printf ("enter another value \n");
        }

            return 0 ;
    }while (c >= 0);
}
    
    