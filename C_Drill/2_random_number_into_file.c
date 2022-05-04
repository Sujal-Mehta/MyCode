// Writting n random numbers to file and printing all that number in terminal too .

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    char str;
    FILE *ptr;

    ptr = fopen("2_rand.dat", "w");

    printf("How many random number do you want ?\n");
    scanf("%d", &n);

    if (ptr == NULL)
    {
        printf("Error in creating output.dat\n");
        return 0;
    }
    srand(time(NULL));

    for (int i = 1; i <= n; i++)
    {
        fprintf(ptr, "%0.4f\n", (rand() % 5000 + 1) / 2.e3);
    }

    fclose(ptr);

    // The upper codes generates and writes the random number in file

    //The below codes works to print in console / terminal

    ptr = fopen("2_rand.dat", "r");
    str = fgetc(ptr);

    while (str != EOF)
    {
        printf("%c" , str);
        str = fgetc (ptr);
    }

    return 0;
}