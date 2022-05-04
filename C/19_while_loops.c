#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    // while (a > 0 && a < 1000000)
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }
    return 0;
}

//way to do manually but not pratical for large number

// #include<stdio.h>
// int main () {
//     int a=50 ;

// a++;
// printf("%d\n",a);

// a++;
// printf("%d\n",a);

// a++;
// printf("%d\n",a);

// a++;
// printf("%d\n",a);

// a++;
// printf("%d\n",a);

// a++;
// printf("%d\n",a);

//     return 0 ;
// }