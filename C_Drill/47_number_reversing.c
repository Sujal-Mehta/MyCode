#include <stdio.h>

int main()
{
    int num, reminder;

    printf("Input a Number ?\n");
    scanf("%d", &num);

    for (num; num != 0; num = num / 10)
    {
        // printf("%d\n",num);
        reminder = num % 10;
        printf("%d ", reminder);
    }
}