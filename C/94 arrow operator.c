#include <stdio.h>
#include <string.h>

struct list
{
    int code;
    float salary;
    char name[100];
};

int main ()
{
    struct list a , b , g ;
    struct list *ptr1 , *ptr2 ;

    ptr1 = &a ;
    ptr1->code = 1 ;
    ptr1->salary = 1.1 ;
    
    ptr2 = &b ;
    ptr2 -> code = 2 ;
    // ptr2 -> salary = 2.1 ;  
    (*ptr2).salary = 2.1;
    strcpy (ptr2 -> name , "sujal mehta");

    printf("The code of a is : %d\n" , a.code) ;
    printf("The salary of a is : %.2f \n" , a.salary);
    
    printf("The code of b is : %d\n" , b.code);
    printf("The salary of b is : %.2f\n" , b.salary);
    printf("The name of b is : %s \n" , b.name);

    return 0 ;
}
