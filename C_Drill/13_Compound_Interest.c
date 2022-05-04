#include <stdio.h>

int main()
{
    float principal_amt, rate_of_interest, days, interest;
    const int yearInDays = 365;

    printf("Input the loan amount (0 to quit) : ");
    scanf("%f", &principal_amt);

    while ((principal_amt) != 0)
    {
        printf("\nInput the interst rate : ");
        scanf("%f", &rate_of_interest);

        printf("Input term of the loan in days : ");
        scanf("%f", &days);

        interest = (principal_amt * rate_of_interest * days) / yearInDays;
        printf("The Interest amount is NRs . %.2f\n", interest);

        printf("Input the loan amount (0 to quit) : ");
        scanf("%f", &principal_amt);
    }
    return 0;
}