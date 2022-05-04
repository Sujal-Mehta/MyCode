#include <stdio.h>
#include <string.h>

struct employee
{
    char employee_name[20];
    int Unique_identifier_code;
    float Salary;
    char *ptr_name;
};

int main()
{
    struct employee e1;
    e1.Unique_identifier_code = 111112;
    e1.Salary = 2045.00;
    e1.ptr_name = "Sujal Mehta";
    // e1.employee_name = "Sujal Mehta" ; -->this wont work because employee_name is an array type so we cannot directly assign like this so
    strcpy(e1.employee_name, "Sujal Mehta");

    printf("employee name ptr is %s " , e1.ptr_name);
    printf("employee name arr is %s " , e1.employee_name);
    printf("unique code is %d " , e1.Unique_identifier_code);
    printf("employee salary is %.02f " , e1.Salary);


    return 0;
}