// #include<stdio.h>
// int main () {

//     for (int a= 0 ; a < 10 ; a++ )  // here first instruction is printed any how and second one is conditon and third one is inc or dec or instruction
//     {
//         printf("The value is %d \n", a);
//     }
//     return 0 ;
// }

//finding natural number from number inputed
// #include<stdio.h>
// int main () {

//     int a;

//         printf ("Enter The Number here \n");
//         scanf ("%d" , &a);

//             for ( a ; a > 1 && a < 1000 ; a++ )
//                 {
//                     printf ("Natural number starting from your number are %d\n",a);
//                 }

//     return 0 ;
// }

// we print upper wala code but we excluded 998 here for practise
#include <stdio.h>
int main()
{

    int a;

    printf("Enter The Number here \n");
    scanf("%d", &a);

    for (a; a > 1 && a < 1100; a++)
    {
        if (a != 998)
        {
            printf("Natural number %d\n", a);
        }
        else
        {
            printf("998 is set not to get print\n");
        }
    }

    return 0;
}