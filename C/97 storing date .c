//write a structure capable of storing date . write a function to compare those dates .

#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

void display(date);
int datecmp(date, date);

int main()
{
    date d1 = {25, 3, 2078};
    display(d1);

    date d2 = {1, 2, 2078};
    display(d2);

    int s = datecmp (d1  , d2) ; 
    printf("The date comparision results returns : %d" , s );
}

void display(date date)
{
    printf(" The date is : %d/%d/%d\n", date.day, date.month, date.year);
}

int datecmp(date date1, date date2)
{

    if (date1.year > date2.year)
    {
        return 1;
    }
    if (date1.year < date2.year)
    {
        return -1;
    }

    if (date1.month > date2.month ){
        return 1 ;
    }
    if (date1.month < date2.month){
        return -1 ;
    }

    if (date1.day > date2.day)
    {
        return 1;
    }
    if (date1.day < date2.day)
    {
        return -1;
    }
    return 0 ;
}