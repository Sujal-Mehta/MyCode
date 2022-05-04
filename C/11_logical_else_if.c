#include <stdio.h>
int main()
{
    int age_spccode;
    // int invitation_code;

    printf("Enter Your age or code to continue in the site \n");
    scanf("%d", &age_spccode);
    printf("Are you confirm that your entered this number %d\n", age_spccode);

    if (age_spccode >= 18 && age_spccode <= 100)
    {
        printf("you are allowed to continue in this page");
    }
    else if (age_spccode == 8520)
    { //admin code number assigning
        printf("You are admin you can enter");
    }
    else if (age_spccode == 1000)
    { //vip code assigning
        printf("you are our vip member and you can continue");
    }    
    else 
    {
        printf("****chal nikal jaldi seyyyy****");
    }
    return 0;
}