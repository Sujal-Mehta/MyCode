#include <stdio.h>

int main()
{
    /*	Declaration	*/
    char str[100], words[20][20];
    int i, j, k, maxInd, minInd, max, min;

    i = j = k = maxInd = minInd = 0;

    /*	Taking User Input 	*/
    printf("\nEnter Line of String ");
    fgets(str, sizeof str, stdin);

    /*	Storing Words in 2D array	*/
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            words[k][j] = str[i];
            j++;
        }
    }
    words[k][j] = '\0';

    /*	Loop to Display Words which are seperated	*/
    printf("\nWords : \n");
    for (int i = 0; i <= k; i++)
    {
        printf("%s\n", words[i]);
    }

    /*	loop which compare each word length in the stored 2D array	*/
    min = strlen(str[0]);
    max = strlen(str[0]);

    for (i = 0; i <= k; i++)
    {
        if (max < strlen(str[i]))
        {
            maxInd = i;
        }
        if (min > strlen(str[i]))
        {
            minInd = i;
        }
    }

    /*	Printing The Result	*/
    printf("Largest Word = %s \nSmallest Word = %s", sna[m], sna[n]);
}