#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};

int main()
{
    struct employee sujal;
    struct employee *ptr; /// --> this will store a structure addressess

    // -->now *(ptr) is created and represented normally like other pointers which we have created

    ptr = &sujal;
    (*ptr).code = 121;

    printf("The code is %d", sujal.code);

    struct employee ironman;
    struct employee *ironPointer;

    ironPointer = &ironman;
    // (*ironPointer) = { 1021 , 20203 , "ironman "}; //-->this wont work
    (*ironPointer).code = 1021;
    printf("\nThe code of ironman is : %d", ironman.code);

    //--> but with pointer we can point with other ways too 
    ironPointer->code = 100 ;
    printf(" \nThe code of ironman pointer is changed : %d " , ironman.code);
    return 0;
}