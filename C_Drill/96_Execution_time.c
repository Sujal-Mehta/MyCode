#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t start_t, end_t;
    double diff_t;

    printf("Starting of the program...\n");
    time(&start_t);

    for (int i = 0; i < 100000000; i++)
    {
        int d = 1;
    }
    for (int i = 0; i < 100000000; i++)
    {
        int d = 1;
    }
    for (int i = 0; i < 100000000; i++)
    {
        int d = 1;
    }
    for (int i = 0; i < 100000000; i++)
    {
        int d = 1;
    }
    for (int i = 0; i < 100000000; i++)
    {
        int d = 1;
    }

    time(&end_t);
    diff_t = difftime(end_t, start_t);

    printf("Execution time = %f\n", diff_t);

    return 0;
}