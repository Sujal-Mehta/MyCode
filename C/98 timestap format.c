#include <stdio.h>

typedef struct timestap {
int day , month , year ;
}date;

typedef struct timestap2{
int hours , minutes , seconds ;
}time;

void display (date , time) ;

int main ()
{
    date date = {25 , 3 , 2078 };
    time time = {12 , 30 , 59 };
    display (date , time);
}

void display (date date , time time){
    printf("The perfect timestap is : %d/%d/%d  ", date.day , date.month , date.year);
    printf("%d:%d:%d", time.hours , time.minutes, time.seconds);
}