// take name and salary of two employee as input from the user and write them to a text file in the following  format .
// name , 3000
// name2 , 7700

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[100];
    int salary;
} emp;

int main()
{
    FILE *ptr;
    ptr = fopen("109-sample.txt", "w");
    emp list[20];
    int i, n;

    printf("\nEnter an number of employee you will add : ");
    scanf("%d", &n);


fprintf(ptr ,"Name -----> salary\n\n");
    for (i = 0; i < n; i++)
    {

        fflush(stdin);
        printf("\nenter the name of the employee #%d : ", i + 1);
        gets(list[i].name);
        fflush(stdin);
        printf("\nenter the salary of the employee #%d : ", i + 1);
        scanf("%d", &list[i].salary);
        fflush(stdin);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(ptr, "%s\t\t\t%d \n", list[i].name, list[i].salary);
    }
}