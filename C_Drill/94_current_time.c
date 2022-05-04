#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*	first way to print time 	*/
    time_t cur_time;
    char *cur_time_string;
    cur_time = time(&cur_time);

    printf("\n\t\tTime = %s\n", ctime(&cur_time));

    /*	Second way to print time	*/

    time_t current_time;
    char *current_time_string;

    current_time = time(NULL);
    current_time_string = ctime(&current_time);

    if (current_time_string == NULL)
    {
        printf("\n Failure to convert the current time . \n ");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("\n\t\tCurrent time is : %s\n", current_time_string);
    }
}