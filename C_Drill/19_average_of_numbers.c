#include <stdio.h>
int main()
{
    int num;
    int n = 0;
    int sum = 0;
    float average;

    printf("Input the numbers (888 - to exit)\n");
    scanf("%d", &num);

    while (num != 888)
    {
        sum += num;
        n++;

        if (n)
            average = (float)sum / n;

        scanf("%d", &num);
    }
    printf("The average of these Numbers are : %.2f", average);
    return 0;
}