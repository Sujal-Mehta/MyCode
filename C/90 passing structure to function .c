#include <stdio.h>

struct employee
{
    int a;      //  -->this is code 
    float b;        //  --> this is salary
    char c[100];         //  --> this is name 
};
void structurevalue();
void structure(struct employee list)
{
    printf("Enter the code of a employee : ");
    scanf("%d", &list.a);
    printf("Enter the salary of employee here : ");
    scanf("%f", &list.b);
    printf("Enter the name of employee here : ");
    scanf("%s", &list.c);

    printf("The code of employee is : %d \n" , list.a);
    printf("the salary of employee is : %f \n ", list.b);
    printf("the name of employee is : %s \n" , list.c);
}

int main()
{
    struct employee sujal;

    structure(sujal);


    return 0;
}

