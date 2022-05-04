#include <stdio.h>
int main()
{
    int Items;
    float org_price[50], inc_price[50];

    printf("\nHow many Item do You wanna to add ?\n");

    scanf("%d", &Items);
    printf("\nInput The Prices of item \n");

    for (int i = 0; i < Items; i++)
    {
        printf("#%d = ", i + 1);
        scanf("%f", &org_price[i]);
    }

    printf("\n-------------------------------------------\n");
    printf("\t\tOriginal Price Table\n");
    printf("-------------------------------------------\n");
    printf("Items\t\t   |    \tPrices\n");

    for (int i = 0; i < Items; i++)
    {
        printf("Item #%d            |            %.1f\n", i + 1, org_price[i]);
    }
    printf("-------------------------------------------\n");

    for (int i = 0; i < Items; i++)
    {
        inc_price[i] = org_price[i];
    }

    for (int i = 0; i < Items; i++)
    {
        if (inc_price[i] >= 100 && inc_price[i] <= 400)
        {
            inc_price[i] = inc_price[i] + (0.14 * (org_price[i]));
        }
        else
        {
            if (inc_price[i] >= 400.01 && inc_price[i] <= 800)
            {
                inc_price[i] = inc_price[i] + (0.11 * (inc_price[i]));
            }
            else
            {
                if (inc_price[i] >= 800.01 && inc_price[i] <= 1200)
                {
                    inc_price[i] = inc_price[i] + (0.9 * (inc_price[i]));
                }
                else
                {
                    if (inc_price[i] >= 1200.01 && inc_price[i] <= 2000)
                    {
                        inc_price[i] = inc_price[i] + (0.6 * (inc_price[i]));
                    }
                    else
                    {
                        if (inc_price[i] > 2000)
                        {
                            inc_price[i] = inc_price[i] + (0.3 * (inc_price[i]));
                        }
                    }
                }
            }
        }
    }
    printf("\n\n-------------------------------------------\n");
    printf("\t\Increased Price Table\n");
    printf("-------------------------------------------\n");
    printf("Items\t\t   |    \tPrices\n");

    for (int i = 0; i < Items; i++)
    {
        printf("Item #%d            |            %.1f\n", i + 1, org_price[i]);
    }
    printf("-------------------------------------------\n");
    return 0;
}