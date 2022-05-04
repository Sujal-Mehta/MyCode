#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float powers, p1, p2;
    float number, n1, n2;
    float result;
    int count = 1;

    printf("\npower ranger (p1 ,  p2)\n");
    scanf("%f%f", &p1, &p2);

    printf("\nNumber Range (n1 , n2)\n");
    scanf("%f%f", &n1, &n2);


    for (int i = n1; i <= n2; i++)
    {
        for (int j = p1; j <= p2; j++)
        {
            number = i;
            powers = j;
            result = (float)pow(number, powers);

            printf("\n%f\t\t%f\t\t%f", number, powers, result);
            count ++ ;
        }
    }
    printf("\n The Total loop count =  %d " , count ) ;
    return 0;
}
