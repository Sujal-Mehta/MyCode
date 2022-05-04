/* 
Decimal Number -- Roman Number

1 -- I
5 -- V 
10 -- X 
50 -- L
100 -- C 
500 -- D
1000 -- M       
*/

/*
Logic for programming 

1 -- I
4 -- IV
5 -- V
9 -- IX
10 -- X
40 -- Xl
50 -- L
90 -- XC
100 -- C
400 -- CD
500 -- D 
900 -- CM
1000 -- M

*/

#include <stdio.h>
int main()
{
    int num;

    printf("Input a Number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        if (num >= 1000)
        {
            printf("M");
            num -= 1000;
        }
        else if (num >= 900)
        {
            printf("CM");
            num -= 900;
        }
        else if (num >= 500)
        {
            printf("D");
            num -= 500;
        }
        else if (num >= 400)
        {
            printf("CD");
            num -= 400;
        }
        else if (num >= 100)
        {
            printf("C");
            num -= 100;
        }
        else if (num >= 90)
        {
            printf("XC");
            num -= 90;
        }
        else if (num >= 50)
        {
            printf("L");
            num -= 50;
        }
        else if (num >= 40)
        {
            printf("XL");
            num -= 40;
        }
        else if (num >= 10)
        {
            printf("X");
            num -= 10;
        }
        else if (num >= 9)
        {
            printf("IX");
            num -= 9;
        }
        else if (num >= 5)
        {
            printf("V");
            num -= 5;
        }
        else if (num >= 4)
        {
            printf("IV");
            num -= 90;
        }
        else if (num >= 1)
        {
            printf("I");
            num -= 1 ;
        }
    }
    return 0;
}

// suppose 2500 

// at first 1000 = M
// again 1000 M
// then at 500 D 
// MMD
