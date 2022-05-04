#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
    time_t cur_time;
    struct tm yearsBack, cur;

    time(&cur_time);

    cur = *localtime(&cur_time);
    printf("\nCurrent Time : %s", asctime(&cur));

    yearsBack = *localtime(&cur_time);
    yearsBack.tm_mon -= 24;
    mktime(&yearsBack);

    printf("\nTime Before 24 Months : %s", asctime(&yearsBack));
}
