#include <stdio.h>
#include <string.h>

typedef struct employee //  -->> Simply typedef is used to create custom data type
{
    int code;
    float salary;
    char name[100];
} list;

void show(struct employee list);


void take(struct employee list)
{
    printf("enter the code of employee :");
    scanf("%d", &list.code);

    printf("enter the salary of employee :");
    scanf("%f", &list.salary);

    printf("enter the name of employee :");
    scanf("%s", list.name);

    printf("\n");
    printf("---> Details of employee <--\n");
    printf("\n");

    printf("The Code of employee is : %d \n", list.code);
    printf("The Salary of employee is : %.3f \n ", list.salary);
    printf("The Name of employee is : %s \n ", list.name);
}



int main()
{
    // struct declaration
    struct employee sujal;
    struct employee *ptr;

    // pointer pointing
    ptr = &sujal;

    //initiazing value
    ptr->code = 10254;
    // (*ptr).code = 10254 ; // --> i can even write like this instead of ptr->code = 10254 ;
    sujal.salary = 21564.546;
    strcpy(ptr->name, "Sujal Mehta");

    //calling function
    show(sujal);

    // --> now the real typedef use will be shown
    list genish; // --> since list too works here

    printf("\n");

    take(genish);

    return 0;
}


void show(struct employee list)
{
    printf("The Code of employee is : %d \n", list.code);
    printf("The Salary of employee is : %.3f \n ", list.salary);
    printf("The Name of employee is : %s \n ", list.name);
}