#include <stdio.h>
int main()
{
    int a = 1;

    printf("%d \n", a); //here the value of a will be printed now

    // now the value will be same for the first time
    a++;
    printf(" value after increment is to  %d\n ", a);

    //or
    ++a; //the value  get
    printf(" value after increment is to  %d\n ", a);

    //procedure two previously we have already increased two times so now initial value of a is now ,a= 3

    printf("value after increment %d\n ", ++a); //here the value get increased at first and then printed

    printf("value after increment is %d\n ", a++); // here we get printed first and then get increased so we get unincreased output
    printf("Now if we see the value has gotten increase by 1 as we have used a++ in previous line %d\n", a);
    //similiary we have
    // --a and i-- for decrement and working function is similar

    return 0;
}