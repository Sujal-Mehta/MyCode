// #include <stdio.h>
// int main()
// {
//     int count = 0;

//     printf("ASCII value of 'Character' is 'value'\n", count);
//     for (count; count <= 255; count++)
//     {
//         printf("| %c -> %d |\n", count, count);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int count = 0;

    printf("ASCII value of 'Character' is 'value'\n", count);
    printf("| c - d |\t| c - d |\t| c - d |\t| c - d |\t| c - d |\n");
    printf("--------------------------------------------------------------------------------------------------------\n");

    for (int i = 1; i <= 52; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("| %c - %d |\t\t", count, count);
            count++;
            if (count > 255)
            {
                return 0;
            }
        }
        printf("\n");
    }

    return 0;
}
