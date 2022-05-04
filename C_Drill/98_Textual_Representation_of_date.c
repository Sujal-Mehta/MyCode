#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
    char time_buff[70];
    struct tm mytime = {.tm_hour = 20, .tm_min = 33, .tm_sec = 33, .tm_year = 121, .tm_mon = 5, .tm_mday = 17};

    printf("\nThe textual representation of specified date and time : ");

    if (strftime(time_buff, sizeof time_buff, " %B %c %P", &mytime))
    {
        puts(time_buff);
    }
    else
    {
        puts("Strftime failed");
    }
}
