#include <stdio.h>
int main()
{
    int money, n;
    float fracval, m;
    int sw;

    printf("Enter the amount : (integer Only) \n");
    scanf("%d", &money);

    printf("Do You have money less then 1 then click 1 or 0 to exit\n");
    scanf("%d", &sw);

    n = (int)money / 1000;
    printf("\n1000 -> %d Notes", n);

    money = money - n * 1000;
    n = (int)money / 500;
    printf("\n500 -> %d Notes", n);

    money = money - n * 500;
    n = (int)money / 100;
    printf("\n100 -> %d Notes", n);

    money = money - n * 100;
    n = (int)money / 50;
    printf("\n50 -> %d Notes", n);

    money = money - n * 50;
    n = (int)money / 20;
    printf("\n20 -> %d Notes", n);

    money = money - n * 20;
    n = (int)money / 10;
    printf("\n10 -> %d Notes", n);

    money = money - n * 10;
    n = (int)money / 5;
    printf("\n5 -> %d Notes", n);

    money = money - n * 5;
    n = (int)money / 2;
    printf("\n2 -> %d Notes", n);

    money = money - n * 2;
    n = (int)money / 1;
    printf("\n1 -> %d Notes", n);

    switch (sw)
    {
    case 1:
        printf("\n\nInput Frac Money");
        scanf("%f", &fracval);

        m = fracval / 0.5;
        printf("\n0.5 -> %d paisa : ", (int)m);

        fracval = fracval - m * 0.5;
        m = fracval / 0.2;
        printf("\n0.2 -> %d paisa : ", (int)m);

        fracval = fracval - m * 0.2;
        m = fracval / 0.1;
        printf("\n0.1 -> %d paisa : ", (int)m);

        break;
    case 0:
        break;
    }
    return 0;
}