#include <stdio.h>
#include <time.h>

int main()
{
    /*	Declarations	*/
    time_t currentTime;
    struct tm timeInBeginningOfMonth;
    double secondsPassed;

    /*	Get current time	*/
    time(&currentTime);

    /*	Get the time for the beginning of the month	*/
    timeInBeginningOfMonth = *localtime(&currentTime);

    timeInBeginningOfMonth.tm_hour = 0;
    timeInBeginningOfMonth.tm_min = 0;
    timeInBeginningOfMonth.tm_sec = 0;
    timeInBeginningOfMonth.tm_mday = 1;

    /*	Get the seconds that passed since the beginning of the month 	*/
    secondsPassed = difftime(currentTime, mktime(&timeInBeginningOfMonth));
    printf("\n%.f  seconds passed since the beginning of the month \n", secondsPassed);
}
