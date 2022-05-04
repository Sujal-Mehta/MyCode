#include <stdio.h>
int main()
{
    int age; //assigning variable
    int admin = 1010; //assgning variable for admin with executable code 
    printf("If your are 18 and below 70 you can drive Vechiles of all category \n"); //display message 
    printf("Enter your age or if you are amdin enter admin code \n "); //showing information

    //making input program to get age and admin code 
    printf("Enter your age or admin code here ");
    scanf("%d", &age);

    if ((age >= 18 && age <= 70) ) //admin code 1010
    {
        printf("you can drive the vechiles  \n"); 
    }
    else if (age == admin) //admin display 
    {
        printf("You are admin \nYou can Drive sir\n");
    }

    else if ((age >= 71) && !(age == admin)) //not programme
    {
        printf("YOU CAN't DRIVE AND YOU ARE NOT ADMIN");
    }
    else {
        printf("Your are not capable");
    }

    return 0;
}
