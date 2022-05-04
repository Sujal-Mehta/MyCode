#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name [100];
};

int main()
{
    struct employee facebook[100];
    facebook[0].code = 1010;
    facebook[0].salary = 2000.0012;
    strcpy(facebook[0].name, "Sujal Mehta ");

    printf("name of employee : %s", facebook[0].name);
    printf("\n");
    printf("code of employee : %d", facebook[0].code);
    printf("\n");
    printf("salary of employe : %.2f", facebook[0].salary);
    printf("\n");
    return 0;
}
