#include <stdio.h>

int main()
{
    int a = 25;
    int b = 35;

    int c = a + b;

/*
        // for Element last to first 
                int x = c % 10;
                printf("The element of the sum value are : ");

                //from first to last
                if (c < 100 && c > 0)
                {
                    printf("%d ", x);
                    c = (c - (x)) / 10;
                }
                printf("%d ", c);
*/

/*
        // for element from first to last 
            int x = c / 10;
            printf("The element of the sum value are : ");

            //from first to last
            if (c < 100 && c > 0)
            {
                printf("%d ", x);
                c = c - x * 10;
            }
            printf("%d ", c);
*/
    return 0;
}
