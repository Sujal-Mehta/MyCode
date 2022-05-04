#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[1000];
};

int main()
{

    // -->another way to instruct value 
    struct employee sujal = {100, 234.5, "Sujal"};

    printf("Name of employee is : %s ", sujal.name);
    printf("\nSalary of employee is : %.2f " , sujal.salary);
    printf("\nUnique code of employee is : %d" , sujal.code) ;

    // --> yedi malai afno sabai element ma 0 set garnu xa bhaney karli bracket ma 0 halna sakxu

    struct employee ram = {0} ;
    printf("\nName of employee is : %s ", ram.name);
    printf("\nSalary of employee is : %.2f " , ram.salary);
    printf("\nUnique code of employee is : %d" , ram.code) ;

    return 0;
}